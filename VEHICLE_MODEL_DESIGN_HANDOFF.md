# Vehicle Model Design Handoff

> **Context for the receiving agent:** This document was produced in a different
> repository (a Modelica vehicle model). It is a design specification for a
> **new Python + CasADi 6-DOF vehicle model** intended for minimum-lap-time
> optimal control over TUMFTM racetrack-database tracks, for an FSAE team.
> Nothing has been implemented yet — this is the plan. Read it in full before
> writing any code.
>
> Key background: the user has an existing, complex Modelica model
> (`AlyssaModel.mo`) built on `Modelica.Mechanics.MultiBody` with a vehicle
> body, rig, rig controller, suspension components and a Magic-Formula-style
> tire. The goal is a much simpler standalone model that keeps six degrees of
> freedom, drops everything outside the vehicle (rig, rig controller, track
> placement machinery), and is easy to optimize with CasADi.
>
> The single most important forward-looking requirement: **the model must be
> architected so a double-wishbone suspension can replace the rigid/ride-rate
> suspension later.** Incorporating suspension effects is the highest-priority
> future feature.

---

## The user's question

> If I am just going to write out the ODEs myself, then I would rather just
> build the vehicle model in Python. Can you layout what the equations would be
> and what the structure of the Python vehicle model will be? Also note that in
> the future I would like to add on to the model by including my double
> wishbone suspension instead of just rigid suspension like right now.
> Incorporating suspension effects in the future is the most important feature
> of the vehicle model. Also, if I have a python vehicle model, that is much
> easier to optimize using CasADi instead of doing an FMU export. However, if
> Modelica will make things much easier, I am still open to using it with an
> FMU export and DAEBuilder.

---

## The answer

Good instinct — and the wishbone requirement actually settles the question
rather than complicating it. Let me answer that first, then lay out the
equations and structure.

### Modelica vs. Python, given that suspension is the priority

**Go with Python + CasADi.** The reasoning is specifically about the wishbone:

A double wishbone is a *closed kinematic loop*. In Modelica MultiBody that
means either analytic assembly joints (`JointSSR`, `JointRRR`) or index-3
constraint DAEs — and a kinematic-loop model is exactly the fragile case for
FMU export and for DAEBuilder's directional derivatives. You would be fighting
the tool at precisely the point you care most about.

In CasADi, the loop-closure problem is a first-class citizen. `ca.rootfinder`
wraps an implicit system and differentiates through it exactly via the implicit
function theorem. So you can write "given wheel travel and rack travel, solve
the wishbone geometry" and CasADi hands you exact derivatives of camber, toe,
motion ratio, and roll-centre height with respect to *the hardpoint coordinates
themselves*. That opens a door Modelica effectively closes: optimizing
suspension geometry for lap time.

The one thing Modelica genuinely buys you — acausal component reuse and
automatic index reduction — is worth much less when you are writing an explicit
ODE for optimal control anyway. Drop it.

---

## The equations

**Frame: ISO 8855** — x forward, y left, z up. Roll φ about x, pitch θ about y.
Positive θ = nose down, positive φ = left side up. Curvature κ > 0 = left turn,
which matches the Frenet convention.

**Wheel indexing:** i ∈ {1,2,3,4} = {FL, FR, RL, RR}

```
x_i = ( a,      a,     -b,     -b    )     longitudinal position of contact patch
y_i = ( t_f/2, -t_f/2,  t_r/2, -t_r/2)     lateral position
z_i = -h  (all)                            contact patch is h below CG
```

### 1. Attitude and heave kinematics

Exact to first order in φ, θ, singularity-free (roll/pitch stay under ~5°):

```
φ̇  = p + r·θ
θ̇  = q − r·φ
ż_h = v_z − v_x·θ + v_y·φ
```

That last one matters: a car pitched nose-down at speed has body-frame
`v_z ≠ 0` while its CG height is constant.

### 2. Suspension → normal loads  ← *this is the block that gets replaced*

```
c_i  = −z_h + x_i·θ − y_i·φ                  compression, positive = compressed
ċ_i  = −ż_h + x_i·θ̇ − y_i·φ̇

F_stat = ( mgb/2L, mgb/2L, mga/2L, mga/2L )
F_arb  = ( −K_f·φ/t_f, +K_f·φ/t_f, −K_r·φ/t_r, +K_r·φ/t_r )

F_z,i = smoothmax( F_stat,i + k_i·c_i + d_i·ċ_i + F_arb,i , 0 )
```

`k_i` is a **ride rate** — wheel rate in series with tire rate. No unsprung
masses, no tire deflection states. This is where all six DOF pay off: dive,
squat and roll load transfer fall out of the dynamics rather than being
computed quasi-statically.

### 3. Steering

```
δ̇   = (δ_max·u_δ − δ)/τ_δ                   lagged, so |δ| ≤ δ_max automatically
Δ   = ε_ack·(t_f/2L)·δ²                      Ackermann correction
δ_1 = δ + Δ,  δ_2 = δ − Δ,  δ_3 = δ_4 = 0
```

### 4. Contact patch velocities

**v**_c,i = **v** + **ω** × **p**_i:

```
v_cx,i = v_x − q·h − r·y_i
v_cy,i = v_y + r·x_i + p·h

v_wx,i =  v_cx·cos δ_i + v_cy·sin δ_i         rotate into wheel frame
v_wy,i = −v_cx·sin δ_i + v_cy·cos δ_i
```

### 5. Slip

```
v̄_i = sqrt(v_wx² + v_min²)                   floored denominator
κ_i = (ω_i·R_e − v_wx)/v̄_i
α_i = atan(v_wy/v̄_i)
```

### 6. Tire — MF-lite (carried over from the existing Modelica model)

```
μ_x,max = smoothmax( interp(F_z; F_1,F_2, μ_x1,μ_x2), μ_floor ) · μ_road
μ_y,max = smoothmax( interp(F_z; F_1,F_2, μ_y1,μ_y2), μ_floor ) · μ_road
κ_max, α_max likewise (clamped positive)

κ_N = κ/κ_max,   α_N = α/α_max
ρ   = sqrt(κ_N² + α_N² + ε²)

s_x = tan(π/2q_x),  μ_x = μ_x,max·sin(q_x·atan(s_x·ρ))
s_y = tan(π/2q_y),  μ_y = μ_y,max·sin(q_y·atan(s_y·ρ))

F_wx =  μ_x·F_z·κ_N/ρ
F_wy = −μ_y·F_z·α_N/ρ
```

The load interpolation in the current Modelica model extrapolates linearly and
goes negative above ~5 kN — the `smoothmax` floor fixes that.

### 7. Wheel frame → body frame

```
F_x,i = F_wx·cos δ_i − F_wy·sin δ_i
F_y,i = F_wx·sin δ_i + F_wy·cos δ_i
```

### 8. Wheel spin and powertrain

```
u̇_d    = (u_x − u_d)/τ_x                                    actuator lag
u₊     = ½(u_d + sqrt(u_d² + ε²))                            smooth throttle
u₋     = ½(−u_d + sqrt(u_d² + ε²))                           smooth brake
ω_d    = sqrt( mean(ω over driven wheels)² + ω_ε² )
τ_P    = P_max·η/ω_d
τ_drv  = smoothmin(τ_max, τ_P)

τ_i    = σ_i·u₊·τ_drv − β_i·u₋·τ_brk·ω_i/sqrt(ω_i² + ω_ε²)
τ_rr,i = C_rr·F_z,i·R_e·ω_i/sqrt(ω_i² + ω_ε²)

J_w·ω̇_i = τ_i − F_wx,i·R_e − τ_rr,i
```

σ = drive share (e.g. `(0,0,½,½)` for RWD), β = brake share from bias.

### 9. Aero

```
F_D  = −½ρ·A·C_D·v_x·sqrt(v_x² + ε²)                        opposes motion
F_L  =  ½ρ·A·C_L·v_x²                                       total downforce, acts −z
F_LF = χ·F_L at x = x_F        F_LR = (1−χ)·F_L at x = x_R
drag acts at height h_D above CG
```

Parameterize as *total C_L + aero balance χ*, not separate front/rear
coefficients — that is how it actually gets tuned.

### 10. Newton–Euler (the 6 DOF)

```
gravity in body frame ≈ ( mgθ, −mgφ, −mg )

ΣF_x = Σ F_x,i + F_D + mgθ
ΣF_y = Σ F_y,i − mgφ
ΣF_z = Σ F_z,i − F_L − mg

m(v̇_x + q·v_z − r·v_y) = ΣF_x
m(v̇_y + r·v_x − p·v_z) = ΣF_y
m(v̇_z + p·v_y − q·v_x) = ΣF_z

M_x = Σ ( y_i·F_z,i + h·F_y,i )
M_y = Σ ( −h·F_x,i − x_i·F_z,i ) + h_D·F_D + x_F·F_LF + x_R·F_LR
M_z = Σ ( x_i·F_y,i − y_i·F_x,i )

I_x·ṗ + (I_z − I_y)·q·r = M_x
I_y·q̇ + (I_x − I_z)·r·p = M_y
I_z·ṙ + (I_y − I_x)·p·q = M_z
```

Sign checks: braking gives `F_x < 0` at `z = −h` → `M_y > 0` → nose dives.
Right turn gives `F_y < 0` → `M_x < 0` → left (outside) side drops. Both correct.

### 11. Track coupling (Frenet)

```
ṡ = (v_x·cos ξ − v_y·sin ξ)/(1 − n·κ)
ṅ =  v_x·sin ξ + v_y·cos ξ
ξ̇ =  r − κ·ṡ
```

---

## One decision that simplifies everything: solve in the **distance** domain

Rather than integrating in time and constraining `s(T) = s_finish`, use **s as
the independent variable**:

```
dx/ds = f(x,u)/ṡ          lap time  T = ∫ ds/ṡ
```

Three consequences, all good:

1. `s` stops being a state (17 states, not 18).
2. `κ` becomes a **known constant at each node** — the spline is evaluated once
   when the mesh is built and never enters the NLP. This is a large convergence
   win; interpolating on a decision variable is the usual reason these problems
   fail to converge.
3. The mesh is tied to the track, so nodes can be refined in corners and
   coarsened on straights. Track-width limits become plain box bounds on `n`.

The only cost is that `ṡ` appears in a denominator, so `ṡ > 0` is needed as a
bound — trivially satisfied.

---

## Python structure

Use **CasADi symbolics as the only backend**. Do not build a numpy/CasADi dual
path — build the model once in `SX`, then wrap it in a `ca.Function` for fast
numeric evaluation when simulating. Same code, no divergence, and simulation is
fast enough.

```
fsvd/
  params.py         frozen dataclasses: Chassis, Tire, Aero, Powertrain, SuspParams
  smooth.py         smooth_max / smooth_min / smooth_sign / interp1 / friction ellipse
  tire.py           TireModel — the MF-lite block
  suspension.py     Suspension interface + RigidRide implementation
  aero.py
  powertrain.py
  chassis.py        Newton-Euler assembly, given corner forces
  track.py          TUMFTM CSV -> arclength, kappa(s), w_left(s), w_right(s), x/y
  model.py          VehicleModel — builds symbols, returns (x, z, u, p, f_ode, g_alg, outs)
  sim.py            integrator + step-steer / skidpad / accel validation cases
  ocp/
    mesh.py         node placement, curvature sampling
    collocation.py  Radau direct collocation NLP
    guess.py        quasi-steady-state g-g initial guess
    post.py         plotting, telemetry export
  geometry/
    hardpoints.py   per-corner hardpoint definition
    loop.py         wishbone loop-closure residual
    maps.py         offline solve -> fitted kinematic maps
```

**The one interface that matters.** Everything hinges on `Suspension` being a
clean seam. It should take chassis vertical state (`z_h, φ, θ, ż_h, φ̇, θ̇`),
rack/steer command, and the current tire forces; and return per corner:

| Returns | Rigid model today | Wishbone model later |
|---|---|---|
| `F_z,i` | ride rate + ARB | ride rate from motion ratio + ARB + jacking + anti-dive |
| `δ_i` (toe/steer) | Ackermann only | Ackermann + bump steer from the map |
| `γ_i` (camber) | 0 (or fixed static) | from the map |
| contact patch offset `(dx, dy, dz)_i` | 0 | scrub / half-track change |
| extra state derivatives | none | none (or unsprung hop) |

Everything downstream — contact patch velocities, slip, tire, Newton–Euler — is
written against that return, so swapping implementations touches nothing else.

---

## How the wishbone slots in

The physical content wanted from the geometry is a static map, not a transient
multibody simulation:

> given **wheel travel** `w` and **rack travel** `x_r` → camber, toe, caster,
> KPI, motion ratio, scrub, instant-centre position

The kinematics: the upright has 6 DOF, constrained by 4 wishbone link-length
constraints (or two A-arm rotations) plus one tie-rod length → 1 DOF, driven by
travel, with rack travel as a second parameter.

**Two implementations, same interface:**

- **Fitted map (do this first).** Solve loop closure offline with Newton over a
  grid of (travel, rack). Fit a `ca.interpolant` B-spline or a low-order
  polynomial. Zero extra cost in the NLP, exactly differentiable, and directly
  comparable to K&C tables from Lotus/OptimumK.
- **Implicit solve (do this second).** Wrap the residual in
  `ca.rootfinder('kin','newton',...)` with the hardpoints as *parameters*.
  Slower per evaluation, but the hardpoints become differentiable inputs —
  which is what enables asking "which hardpoint locations minimize lap time".

**The physics that then becomes live:**

```
F_z,i = smoothmax( F_stat + k_w(w)·c + d(w)·ċ + F_arb + F_jack,i + F_anti,i , 0 )

  k_w(w)   = k_spring · MR(w)²                    motion-ratio-dependent wheel rate
  F_jack,i = F_y,i · tan(λ_i)                     λ from contact patch → instant centre, front view
  F_anti,i = F_x,i · tan(σ_i)                     σ from side-view swing arm (anti-dive/squat)
```

Plus camber entering the tire as a `μ_y` scaling or an effective slip-angle
shift, and bump steer entering `δ_i`.

**Architectural warning, worth designing for now:** those jacking terms make
`F_z` depend on `F_y`, which depends on `F_z`. That is a genuine
four-dimensional algebraic loop. Do not try to break it — handle it the
standard way by declaring `F_z` as **algebraic variables `z`** in a
semi-explicit DAE, with those four equations as the algebraic constraints, and
let collocation solve them alongside the states. CasADi and IPOPT do this
natively. So build `model.py` to return `(f_ode, g_alg)` from day one, with
`g_alg` empty in the rigid model. Adding wishbones then costs four algebraic
variables per node, not a rewrite.

---

## Rough sizing

17 states, 2 controls, ~600–1200 nodes for an FSAE endurance-scale track,
3-point Radau → 30k–70k NLP variables. IPOPT with MUMPS handles that in
minutes; HSL MA27/MA57 in seconds. A decent initial guess is required — a
quasi-steady-state g-g-v pass over the track is the standard way to get one,
and it is worth building early.

---

## Suggested build order

1. `track.py` + `params.py`
2. Rigid-suspension model + simulation harness
3. Validate against skidpad / acceleration / step-steer numbers the team
   already has
4. Attach the collocation NLP
5. Wishbones last

---

## Smoothness rules (non-negotiable for IPOPT)

- No `if`/`else`, `abs`, `max`, `min`, or any branch on a continuous quantity.
  Every switch is a smoothed algebraic form:
  `smoothmax(a,b) = ½(a + b + sqrt((a − b)² + ε²))`.
- Every division has a floored denominator: `sqrt(x² + ε²)`.
- No time-dependent expressions inside the dynamics.
- Prefer `sqrt(x² + ε²)` over `abs(x)`, and `x/sqrt(x² + ε²)` over `sign(x)`.

## Open parameter decisions

- FSAE combustion vs. EV defaults (affects `σ` drive share, `P_max`, `τ_max`,
  and whether torque vectoring is in scope).
- Static camber / toe values, if the rigid model is to carry them before the
  wishbone map exists.
- Whether the steering input is normalized `u_δ ∈ [−1,1]` with a first-order
  lag (recommended, bounds `δ` automatically) or `δ` supplied directly.
