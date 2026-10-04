# Rack steering + double wishbone — remaining work

Status as of 2026-10-04. Target: rack-and-pinion steering on the current rigid
car first, then RSUR double wishbone corners behind the same interfaces, keeping
MacPherson possible later.

Conventions in force: SAE coordinates (x fwd, y right, z down), wheel spin axis
`n = {0,-1,0}`, wheel/torque order FL FR RL RR, everything event-free and smooth,
zero *nonlinear* torn systems.

---

## Done and verified

Built and simulated on a scratch copy of `AlyssaModel.mo` (OM 1.25.4, MSL 4.0.0):

- `Components.Suspension.BaseCorner` — `partial`, with `chassisConnect`,
  `wheelConnect`, `tieRodInner` (Frame_a), `side`.
- `Components.Suspension.Hardpoints.BaseHardpoints` — single record holding the
  `front_*` and `rear_*` hardpoint sets. All hardpoint data lives here.
- `Components.BaseSteering` — `partial`; `delta` input, `chassisConnect`,
  `tieRodInnerL/R` (Frame_b).
- `Components.RackSteering` — housing → prismatic rack (`useAxisFlange`) driven by
  `Position(exact = true)` through the rack-ratio gain → two rack-end translations.
  Verified: ends at y = ∓0.40, x = −0.12, z = +0.10; rack travel = `rackRatio·delta`
  (+0.0089 m at δ = 0.0742 rad).
- `Components.FixedToeLinks` — verified: right inner point at
  (−0.10, +0.35, +0.08), left at y = −0.35.
- `Experiments.FlatRoadSim` still initializes and simulates, so nothing regressed.

---

## 1. Open fix in `RackSteering`

- [ ] **Remove `fixed = true` from `rack(s(start = 0, fixed = true))`**, keeping
  `s(start = 0)`.
  `pos(exact = true)` already prescribes `s`, so this is a redundant initial
  equation. OM currently reports *"The initial conditions are over specified."*
  It is harmless while `delta(0) = 0` but will fail initialization from a nonzero
  steer angle (e.g. an OCP trim state).

Optional, cosmetic: `ratioRatioGain` → `rackRatioGain`.

---

## 2. `Functions.mirrorY`

- [ ] Add

      function mirrorY
        input Real r[3];
        input Integer side "+1 right, -1 left";
        output Real y[3];
      algorithm
        y := {r[1], side*r[2], r[3]};
        annotation(Inline = true);
      end mirrorY;

Hardpoints are stored for the **right** side only; every corner mirrors y by
`side`. Never mirror by rotating frames — `Wheels.Rim` assumes `n = {0,-1,0}` on
both sides.

---

## 3. `PartialUprightCorner` (the piece double wishbone and MacPherson share)

`partial model PartialUprightCorner extends BaseCorner`, holding everything
downstream of the carrier frame.

Parameters, set `final` by each concrete corner:

| Parameter | Meaning |
|---|---|
| `rKingpinTop[3]` | point where the carrier frame sits (UBJ for DW, strut top for MacPherson) |
| `nKingpin[3]` | kingpin direction, `normalize(rLBJ − rUBJ)` |
| `rWC[3]` | wheel center |
| `rTieOuter[3]`, `rTieInner[3]` | tie rod ends, for the `JointSSR` parameters |
| `staticCamber`, `staticToe` | static alignment |
| `mUnsprung` | upright mass |

Components:

- [ ] `Joints.Assemblies.JointSSR tieRod`
  - `frame_a` ← `tieRodInner` (inner ball; the steering block supplies this frame)
  - `frame_b` ← the carrier frame the subclass provides
  - `frame_ib` = the knuckle, which carries everything below
  - `rod1Length = norm(rTieOuter − rTieInner)` — **compute from hardpoints, never
    type a rounded number**, or the loop starts preloaded / fails to assemble
  - `n_b = mirrorY(nKingpin, side)`, `rRod2_ib = mirrorY(rTieOuter − rKingpinTop, side)`
  - `phi_guess = 0` (design position is the reference configuration)
  - `rod1Mass = 0` for now
- [ ] `Parts.FixedTranslation spindle(r = mirrorY(rWC − rKingpinTop, side))` from `frame_ib`
- [ ] `Parts.FixedRotation staticAlign` — camber/toe, `PlanarRotationSequence`,
  sequence `{3,1,2}` → `wheelConnect`
- [ ] `Parts.Body upright(m = mUnsprung)` at the wheel center
- [ ] `Sensors.RelativeAngles(sequence = {3,2,1})` between `chassisConnect` and
  `wheelConnect`, feeding `travel` / `camber` / `toe` outputs

Sign conventions to **verify on the rig, not by reasoning**: camber positive =
top out or top in, and toe positive = toe-in, consistently on both sides. Plot the
wheel frame axes.

---

## 4. `RigidCorner`

`model RigidCorner extends PartialUprightCorner` — the whole model is:

- [ ] `final` parameter bindings: `rKingpinTop = <axle>_rUBJ`,
  `nKingpin = normalize(<axle>_rLBJ − <axle>_rUBJ)`, `rWC = <axle>_rWC`, etc.
- [ ] One `Parts.FixedTranslation carrier(r = mirrorY(rKingpinTop, side))` from
  `chassisConnect` to `tieRod.frame_b`.

This is the only part `DoubleWishboneCorner` replaces later.

---

## 5. Wire into the axle models

In `FrontSuspension`:

- [ ] Replace `armL`/`armR` and the old `Steering` instance with `cornerL(side = -1)`,
  `cornerR(side = +1)` and one `RackSteering`.
- [ ] Declare the corner type as `replaceable model Corner = RigidCorner
  constrainedby BaseCorner`, so the double wishbone swap is one line.
- [ ] Connections: `subFrameFront` → both corners' `chassisConnect` and
  `steering.chassisConnect`; `steering.tieRodInnerL/R` → corners' `tieRodInner`;
  corners' `wheelConnect` → `frame_bL`/`frame_bR`; `delta` → `steering.delta`.
- [ ] `dzHub` goes away — wheel center height now comes from `*_rWC[3]`.

In `RearSuspension`: same, with `FixedToeLinks` instead of `RackSteering`.
Its `delta` input must still be connected from `AlyssaVehicle` (or the input
dropped from the rear path).

Keep the old `Steering` and `SteeringComputation` in the file, unused, until the
new path validates.

Settings for this stage:

- [ ] `mUnsprung = 0` in the corners. The upright is effectively rigid to the
  chassis here, so giving it mass double-counts against the 768 kg `vehicleMass`.
- [ ] `rackRatio` — currently a local default of 0.12 m/rad in `RackSteering`.
  **The sign is probably negative**: the hardpoints put the tie rods behind the
  axle (rear steer), so +y rack travel turns the wheels left, while positive
  `delta` must steer right in SAE. Confirm on the rig.
- [ ] `vehicleParams.deltaMax` (0.35 rad, currently unused) becomes a rack travel
  limit, ≈ `rackRatio · deltaMax` ≈ 42 mm.
- [ ] `vehicleParams.ackermann` becomes unused — Ackermann now comes from the
  steering-arm geometry. Retire it once validated.

---

## 6. Validation, in this order

- [ ] **`Experiments.SteeringRig`** — `World` + `Parts.Fixed` holding the subframe +
  one axle model + a smooth sweep into `delta`:
  - steering **sign**: positive `delta` steers right;
  - **ratio**: δ ≈ rack travel / steering-arm length;
  - **Ackermann** split between inner and outer wheel;
  - no assembly failure at full lock (the `JointSSR` singularity is tie rod and
    steering arm collinear).
  - Use a twice-differentiable input (e.g. a `RealExpression` with a sine), not a
    `Ramp`, because `exact = true` needs the second derivative.
- [ ] **Build statistics** — zero nonlinear systems; state count unchanged from today.
- [ ] **`FlatRoadSim`** — compare against the current rigid results. Expect small
  differences from caster/KPI-induced camber even before any suspension travel.
- [ ] **Static ride height** — `*_rWC[3] = 0` keeps today's hub height, so
  `zChassis0 = -0.323` and the static tire penetration (~7 mm, ~1750 N/corner)
  should be unchanged.
- [ ] **FMU export + one OCP solve** before touching suspension.

---

## 7. Then: RSUR double wishbone

Loop read from the lower arm: **R** (LCA pivot) – **S** (lower ball joint) –
**U** (upper ball joint) – **R** (UCA pivot). In MSL: one ordinary
`Joints.Revolute` on the UCA carrying the state, plus one
`Joints.Assemblies.JointUSR` solving the rest analytically.

- [ ] Hardpoints: add `*_rLCAf`, `*_rLCAr`, `*_rUCAf`, `*_rUCAr`, plus spring
  mounts `*_rSpringChassis`, `*_rSpringArm`.
- [ ] `DoubleWishboneCorner extends PartialUprightCorner`:
  - `Revolute ucaPivot(n = mirrorY(normalize(rUCAr − rUCAf), side), stateSelect = StateSelect.always)`
  - `FixedTranslation uca(r = rUBJ − rUCApivot)` → `JointUSR.frame_a`
  - `JointUSR loop(n1_a = nUCA, n_b = nLCA, rRod1_ia = rLBJ − rUBJ,
    rRod2_ib = rLBJ − rLCApivot, phi_guess = 0)`, `frame_b` on the chassis at the
    LCA pivot
  - `connect(loop.frame_ia, <carrier>)` — the carrier the partial expects
  - Coilover: `Forces.SpringDamperParallel` from a chassis point to a point on
    `loop.frame_ib` (the LCA). This is a line force, so it adds no loop.
  - `n1_a` must not be parallel to the kingpin (`JointUSR` singularity); the UCA
    pivot axis is a good choice.
- [ ] Spring rate from the wheel rate and motion ratio: `c = k_wheel / MR²`, using
  `kFront`/`kRear`. MR computed offline from the hardpoints or supplied directly.
- [ ] Preload `s_unstretched` so the design position is static equilibrium
  (static corner load / MR), which keeps initial conditions consistent without an
  initialization solve.
- [ ] `mUnsprung` becomes real at this stage — subtract the four corners from
  `vehicleMass` or document the double count.
- [ ] Bump stops, if added: smooth only (`Functions.smoothMax`), no events.
- [ ] Anti-roll bar hook: an optional rotational flange on the LCA, with the
  torsion spring at the axle level.
- [ ] Re-run the whole validation list. Expect +2 states per corner and a stiffer
  problem (unsprung hop ≈ 15–20 Hz) for the collocation mesh.

---

## 8. Known limitations to keep in mind

- **No camber in the tire model.** `Wheels.MFForces` ignores camber, so camber gain
  won't reach lap time. What does reach it: load transfer dynamics, bump steer and
  toe (slip is computed in the hub frame). A camber thrust or camber-dependent μ
  term is the natural follow-on.
- **`Position(exact = true)` needs the second derivative of its reference.** For
  the rack that is `maxSteerRate·der(u)`. This already exists in the current
  `Steering` block and goes unnoticed because `steerInput` is a constant. It can
  surface as a request to differentiate an input once `u` is a real FMU input; the
  fix is a smoothing filter in the control path, not a change to the rack.
- **Kingpin angle ≠ SAE steer angle.** `tieRod.axis.phi` is rotation about the
  inclined axis. For an output that means road-wheel angle, measure the wheel
  frame orientation relative to the chassis.
- **Bump steer is very sensitive to the z of the tie rod ends.** Millimetres change
  the toe curve. Tune on the rig before running the OCP.
- **MacPherson later** reuses all of this: `Joints.Assemblies.JointUPS` with the
  universal at the top mount and the spherical at the lower ball joint, carrier =
  `frame_ib`, coilover on its `axis`/`bearing` flanges. Nothing else changes.
