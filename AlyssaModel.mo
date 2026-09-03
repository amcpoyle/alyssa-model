package AlyssaModel
  package Components
    model VehicleBody
      import Modelica.Units.SI;
      parameter SI.Mass vehicleMass = 700 annotation(
        Dialog);
      parameter SI.Inertia Ixx = 250 annotation(
        Dialog);
      parameter SI.Inertia Iyy = 350 annotation(
        Dialog);
      parameter SI.Inertia Izz = 550 annotation(
        Dialog);
      Modelica.Mechanics.MultiBody.Parts.Body body(I_11 = Ixx, I_22 = Iyy, I_33 = Izz, r_CM = {0, 0, 0}, m = vehicleMass) annotation(
        Placement(transformation(origin = {0, 22}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a chassisFrame annotation(
        Placement(transformation(origin = {0, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {6, -84}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a subFrameFront annotation(
        Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-100, 8}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a subFrameRear annotation(
        Placement(transformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {100, 8}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Parts.FixedTranslation fixedTranslationFront(r = {-vehicleParams.a, 0, 0}) annotation(
        Placement(transformation(origin = {-50, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Parts.FixedTranslation fixedTranslationRear(r = {vehicleParams.b, 0, 0}) annotation(
        Placement(transformation(origin = {50, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
      VehicleAero aero annotation(
        Placement(transformation(origin = {-54, 72}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(body.frame_a, chassisFrame) annotation(
        Line(points = {{0, 12}, {0, -100}}, color = {95, 95, 95}));
      connect(subFrameFront, fixedTranslationFront.frame_a) annotation(
        Line(points = {{-100, 0}, {-60, 0}}));
      connect(fixedTranslationFront.frame_b, body.frame_a) annotation(
        Line(points = {{-40, 0}, {0, 0}, {0, 12}}, color = {95, 95, 95}));
      connect(fixedTranslationRear.frame_a, subFrameRear) annotation(
        Line(points = {{60, 0}, {100, 0}}, color = {95, 95, 95}));
      connect(fixedTranslationRear.frame_b, body.frame_a) annotation(
        Line(points = {{40, 0}, {0, 0}, {0, 12}}, color = {95, 95, 95}));
      connect(aero.frame_a, body.frame_a) annotation(
        Line(points = {{-47, 72}, {0, 72}, {0, 12}}, color = {95, 95, 95}));
      annotation(
        Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100, -100}, {100, 100}}), graphics = {Rectangle(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 0}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid), Bitmap(extent = {{-90, -90}, {90, 90}}, fileName = "modelica://AlyssaModel/Resources/Images/Lightning_McQueen.png"), Text(extent = {{-100, -135}, {100, -105}}, textString = "%name")}));
    end VehicleBody;

    model VehicleAero
      import Modelica.Units.SI;
      parameter Real Cl_f = 2.5 "front downforce coef" annotation(
        Dialog);
      parameter Real Cl_r = 2.5 "rear downforce coef" annotation(
        Dialog);
      parameter SI.Area A = 1.0 "frontal area of the vehicle" annotation(
        Dialog);
      parameter Real Cd = 1.2 "drag coef of the vehicle" annotation(
        Dialog);
      parameter Real rho = 1.225 "air density" annotation(
        Dialog);
      parameter SI.Position xCoPF = 1.5 "front CoP" annotation(
        Dialog);
      parameter SI.Position xCoPR = -1.5 "rear CoP" annotation(
        Dialog);
      parameter SI.Position zCoP = -0.30 "aero center height" annotation(
        Dialog);
      parameter SI.Velocity vEps = 0.1;
      Modelica.Blocks.Interfaces.RealOutput downforceFront(unit = "N") annotation(
        Placement(transformation(origin = {100, 70}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {104, 80}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput downforceRear(unit = "N") annotation(
        Placement(transformation(origin = {100, 28}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {72, 6}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput dragForce(unit = "N") annotation(
        Placement(transformation(origin = {100, -52}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {14, -14}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_a annotation(
        Placement(transformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {66, 4}, extent = {{-16, -16}, {16, 16}})));
      SI.Velocity vx "chassis vx";
    protected
      SI.Velocity vBody[3];
    equation
      vBody = Modelica.Mechanics.MultiBody.Frames.resolve2(frame_a.R, der(frame_a.r_0));
      vx = vBody[1];
      dragForce = -0.5*rho*(vx^2)*A*Cd;
// negative = slowing vehicle down longitudinally
      downforceFront = 0.5*rho*(vx^2)*A*Cl_f;
// positive = pushing into the ground
      downforceRear = 0.5*rho*(vx^2)*A*Cl_r;
      frame_a.f = -{dragForce, 0, downforceFront + downforceRear};
      frame_a.t = -(cross({xCoPF, 0, zCoP}, {0, 0, downforceFront}) + cross({xCoPR, 0, zCoP}, {0, 0, downforceRear}) + cross({0, 0, zCoP}, {dragForce, 0, 0}));
      annotation(
        Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100, -100}, {100, 100}}), graphics = {Rectangle(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 0}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid), Bitmap(extent = {{-90, -90}, {90, 90}}, fileName = "modelica://AlyssaModel/Resources/Images/f1 aero reference 1.png"), Text(extent = {{-100, -135}, {100, -105}}, textString = "%name")}));
    end VehicleAero;

    model FrontSuspension
      parameter Modelica.Mechanics.MultiBody.Types.Axis nSteer = {0, 0, 1} "steer axis";
      parameter Modelica.Units.SI.Position dzHub = 0 "hub height relative to subframe, +z = down";
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a subFrameFront annotation(
        Placement(transformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_bL annotation(
        Placement(transformation(origin = {0, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {0, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_bR annotation(
        Placement(transformation(origin = {0, 100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {0, 100}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
      Modelica.Blocks.Interfaces.RealInput delta(unit = "rad") annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-72, 58}, extent = {{-20, -20}, {20, 20}})));
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
      Steering steering annotation(
        Placement(transformation(origin = {-30, 30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Parts.FixedTranslation armL(r = {0, -vehicleParams.tf/2, dzHub}) annotation(
        Placement(transformation(origin = {74, -24}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Parts.FixedTranslation armR(r = {0, vehicleParams.tf/2, dzHub}) annotation(
        Placement(transformation(origin = {74, 34}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
      Modelica.Mechanics.MultiBody.Joints.Revolute steerL(useAxisFlange = true, n = nSteer) annotation(
        Placement(transformation(origin = {40, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
      Modelica.Mechanics.MultiBody.Joints.Revolute steerR(useAxisFlange = true, n = nSteer) annotation(
        Placement(transformation(origin = {40, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
      Modelica.Mechanics.Rotational.Sources.Position posL(exact = true) annotation(
        Placement(transformation(origin = {10, 36}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.Rotational.Sources.Position posR(exact = true) annotation(
        Placement(transformation(origin = {10, 10}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(subFrameFront, armL.frame_a) annotation(
        Line(points = {{100, 0}, {74, 0}, {74, -14}}));
      connect(subFrameFront, armR.frame_a) annotation(
        Line(points = {{100, 0}, {74, 0}, {74, 24}}));
      connect(steerR.frame_a, armR.frame_b) annotation(
        Line(points = {{50, 60}, {74, 60}, {74, 44}}, color = {95, 95, 95}));
      connect(armL.frame_b, steerL.frame_a) annotation(
        Line(points = {{74, -34}, {50, -34}, {50, -40}}, color = {95, 95, 95}));
      connect(steerL.frame_b, frame_bL) annotation(
        Line(points = {{30, -40}, {0, -40}, {0, -100}}, color = {95, 95, 95}));
      connect(steerR.frame_b, frame_bR) annotation(
        Line(points = {{30, 60}, {0, 60}, {0, 100}}, color = {95, 95, 95}));
      connect(delta, steering.delta) annotation(
        Line(points = {{-100, 70}, {-35, 70}, {-35, 35}}, color = {0, 0, 127}));
      connect(steering.deltaL, posL.phi_ref) annotation(
        Line(points = {{-18, 34}, {-2, 34}, {-2, 36}}, color = {0, 0, 127}));
      connect(steering.deltaR, posR.phi_ref) annotation(
        Line(points = {{-20, 28}, {-2, 28}, {-2, 10}}, color = {0, 0, 127}));
      connect(posL.flange, steerL.axis) annotation(
        Line(points = {{20, 36}, {40, 36}, {40, -50}}));
      connect(posR.flange, steerR.axis) annotation(
        Line(points = {{20, 10}, {40, 10}, {40, 50}}));
    end FrontSuspension;

    model Steering
      import Modelica.Units.SI;
      Modelica.Blocks.Interfaces.RealInput delta annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-48, 50}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput deltaL annotation(
        Placement(transformation(origin = {100, 50}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {110, 36}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput deltaR annotation(
        Placement(transformation(origin = {100, 10}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {92, -22}, extent = {{-10, -10}, {10, 10}})));
      SI.Angle corr "ackermann correction";
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
    equation
      corr = vehicleParams.ackermann*0.5*(vehicleParams.tf/vehicleParams.wheelbase)*delta^2;
      deltaL = delta - corr;
      deltaR = delta + corr;
    end Steering;

    model RearSuspension
      parameter Modelica.Units.SI.Position dzHub = 0 "hub height relative to subframe";
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a subFrameRear annotation(
        Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_bL annotation(
        Placement(transformation(origin = {0, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {0, -100}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b frame_bR annotation(
        Placement(transformation(origin = {0, 100}, extent = {{-16, -16}, {16, 16}}, rotation = -90), iconTransformation(origin = {0, 100}, extent = {{-16, -16}, {16, 16}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Parts.FixedTranslation armL(r = {0, -vehicleParams.tr/2, dzHub}) annotation(
        Placement(transformation(origin = {0, -50}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Parts.FixedTranslation armR(r = {0, vehicleParams.tr/2, dzHub}) annotation(
        Placement(transformation(origin = {0, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
    equation
      connect(subFrameRear, armR.frame_a) annotation(
        Line(points = {{-100, 0}, {0, 0}, {0, 40}}));
      connect(subFrameRear, armL.frame_a) annotation(
        Line(points = {{-100, 0}, {0, 0}, {0, -40}}));
      connect(armL.frame_b, frame_bL) annotation(
        Line(points = {{0, -60}, {0, -100}}, color = {95, 95, 95}));
      connect(armR.frame_b, frame_bR) annotation(
        Line(points = {{0, 60}, {0, 100}}, color = {95, 95, 95}));
    end RearSuspension;
  end Components;

  package Wheels
    model MFForces
      import Modelica.Units.SI.Force;
      Modelica.Blocks.Interfaces.RealInput kappa annotation(
        Placement(transformation(origin = {-100, 80}, extent = {{-8, -8}, {8, 8}}), iconTransformation(origin = {-100, 75}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput alpha(unit = "rad") annotation(
        Placement(transformation(origin = {-100, 22}, extent = {{-8, -8}, {8, 8}}), iconTransformation(origin = {-100, 25}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput fz(unit = "N") annotation(
        Placement(transformation(origin = {-100, -19}, extent = {{-8, -8}, {8, 8}}), iconTransformation(origin = {-100, -25}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput mu annotation(
        Placement(transformation(origin = {-100, -81}, extent = {{-8, -8}, {8, 8}}), iconTransformation(origin = {-100, -75}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput fx(unit = "N") annotation(
        Placement(transformation(origin = {99, 79}, extent = {{-9, -9}, {9, 9}}), iconTransformation(origin = {100, 75}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput fy(unit = "N") annotation(
        Placement(transformation(origin = {99, 61}, extent = {{-9, -9}, {9, 9}}), iconTransformation(origin = {100, 25}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput mz(unit = "N.m") annotation(
        Placement(transformation(origin = {99, 41}, extent = {{-9, -9}, {9, 9}}), iconTransformation(origin = {100, -25}, extent = {{-10, -10}, {10, 10}})));
      Force fzEff;
      Real muXMax;
      Real muYMax;
      Real kappaMax;
      Real alphaMax;
      Real kappaN;
      Real alphaN;
      Real rho;
      final parameter Real sx = tan(Modelica.Constants.pi/(2.0*params.qx));
      final parameter Real sy = tan(Modelica.Constants.pi/(2.0*params.qy));
      Real muX;
      Real muY;
      parameters params annotation(
        Placement(transformation(origin = {120, 90}, extent = {{-10, -10}, {10, 10}})));
    equation
      fzEff = Functions.smoothMax(fz, 0.0);
      muXMax = Functions.interpLoad(fzEff, params.fzRef1, params.fzRef2, params.muXMax1, params.muXMax2)*mu;
      muYMax = Functions.interpLoad(fzEff, params.fzRef1, params.fzRef2, params.muYMax1, params.muYMax2)*mu;
      kappaMax = Functions.interpLoad(fzEff, params.fzRef1, params.fzRef2, params.kappaMax1, params.kappaMax2);
      alphaMax = Functions.interpLoad(fzEff, params.fzRef1, params.fzRef2, params.alphaMax1, params.alphaMax2);
      kappaN = kappa/(kappaMax + params.smoothingEpsilon);
      alphaN = alpha/(alphaMax + params.smoothingEpsilon);
      rho = sqrt(kappaN^2 + alphaN^2 + params.smoothingEpsilon^2);
// always >= 0 so sqrt should be ok
      muX = muXMax*sin(params.qx*atan(sx*rho));
      muY = muYMax*sin(params.qy*atan(sy*rho));
      fx = muX*fzEff*(kappaN/rho);
      fy = -muY*fzEff*(alphaN/rho);
      mz = 0.0*fx;
// Mz is zero for now
    end MFForces;

    model OptimalControlWheel
      import Modelica.Units.SI;
      parameter SI.Radius rEff = 0.33 "effective rolling radius" annotation(
        Dialog);
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubFlange annotation(
        Placement(transformation(origin = {99, -1}, extent = {{-13, -13}, {13, 13}}), iconTransformation(origin = {100, -4}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealInput mu annotation(
        Placement(transformation(origin = {-100, 69}, extent = {{-8, -8}, {8, 8}}), iconTransformation(origin = {-80, 70}, extent = {{-20, -20}, {20, 20}})));
      MFForces slipForces annotation(
        Placement(transformation(origin = {0, 40}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput fx(unit = "N") annotation(
        Placement(transformation(origin = {100, 70}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, 50}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput fy(unit = "N") annotation(
        Placement(transformation(origin = {100, 48}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, 30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput mz(unit = "N.m") annotation(
        Placement(transformation(origin = {100, 28}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, 10}, extent = {{-10, -10}, {10, 10}})));
      SlipDynamics slipDynamics annotation(
        Placement(transformation(origin = {-60, 40}, extent = {{-20, -20}, {20, 20}})));
      Rim rim(rEff = rEff) annotation(
        Placement(transformation(origin = {60, 42}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_a annotation(
        Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-96, 2}, extent = {{-16, -16}, {16, 16}})));
      ContactPatch contactPatch(rEff = rEff) annotation(
        Placement(transformation(origin = {-72, -44}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput fz annotation(
        Placement(transformation(origin = {100, -28}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, -30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput omega(unit = "rad/s") annotation(
        Placement(transformation(origin = {100, -72}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {86, -78}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(slipDynamics.kappa, slipForces.kappa) annotation(
        Line(points = {{-38, 46}, {-20, 46}, {-20, 56}}, color = {0, 0, 127}));
      connect(slipDynamics.alpha, slipForces.alpha) annotation(
        Line(points = {{-42, 40}, {-20, 40}, {-20, 46}}, color = {0, 0, 127}));
      connect(mu, slipForces.mu) annotation(
        Line(points = {{-100, 70}, {-20, 70}, {-20, 26}}, color = {0, 0, 127}));
      connect(slipForces.fx, rim.fx) annotation(
        Line(points = {{20, 56}, {52, 56}, {52, 52}}, color = {0, 0, 127}));
      connect(rim.hubFlange, hubFlange) annotation(
        Line(points = {{46, 48}, {46, -1}, {99, -1}}, color = {135, 135, 135}));
      connect(slipForces.fy, fy) annotation(
        Line(points = {{20, 46}, {100, 46}, {100, 48}}, color = {0, 0, 127}));
      connect(slipForces.fx, fx) annotation(
        Line(points = {{20, 56}, {100, 56}, {100, 70}}, color = {0, 0, 127}));
      connect(slipForces.mz, mz) annotation(
        Line(points = {{20, 36}, {100, 36}, {100, 28}}, color = {0, 0, 127}));
      connect(frame_a, rim.frame_a) annotation(
        Line(points = {{-100, 0}, {44, 0}, {44, 48}}));
      connect(contactPatch.vy, slipDynamics.vy) annotation(
        Line(points = {{-52, -52}, {-80, -52}, {-80, 46}}, color = {0, 0, 127}));
      connect(rim.vRim, slipDynamics.vRim) annotation(
        Line(points = {{78, 34}, {-80, 34}, {-80, 36}}, color = {0, 0, 127}));
      connect(contactPatch.frame_a, frame_a) annotation(
        Line(points = {{-88, -44}, {-100, -44}, {-100, 0}}, color = {95, 95, 95}));
      connect(slipForces.fx, contactPatch.fx) annotation(
        Line(points = {{20, 56}, {-92, 56}, {-92, -30}}, color = {0, 0, 127}));
      connect(slipForces.fy, contactPatch.fy) annotation(
        Line(points = {{20, 46}, {-92, 46}, {-92, -36}}, color = {0, 0, 127}));
      connect(contactPatch.fz, rim.fz) annotation(
        Line(points = {{-52, -54}, {42, -54}, {42, 34}}, color = {0, 0, 127}));
      connect(contactPatch.fz, fz) annotation(
        Line(points = {{-52, -54}, {100, -54}, {100, -28}}, color = {0, 0, 127}));
      connect(slipForces.fz, contactPatch.fz) annotation(
        Line(points = {{-20, 36}, {-52, 36}, {-52, -54}}, color = {0, 0, 127}));
      connect(contactPatch.vx, slipDynamics.vx) annotation(
        Line(points = {{-52, -28}, {-80, -28}, {-80, 56}}, color = {0, 0, 127}));
      connect(rim.omega, omega) annotation(
        Line(points = {{78, 50}, {100, 50}, {100, -72}}, color = {0, 0, 127}));
      annotation(
        Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100, -100}, {100, 100}}), graphics = {Rectangle(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 0}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid), Bitmap(extent = {{-90, -90}, {90, 90}}, fileName = "modelica://AlyssaModel/Resources/Images/f1 red wheel.png"), Text(extent = {{-100, -135}, {100, -105}}, textString = "%name")}));
    end OptimalControlWheel;

    model Rim
      import Modelica.Units.SI;
      parameter SI.Inertia J = 1.2 "Wheel inertia" annotation(
        Dialog);
      parameter SI.Radius rEff = 0.33 "Effective rolling radius" annotation(
        Dialog);
      parameter SI.RotationalDampingConstant dSpin = 0.5 "bearing damping" annotation(
        Dialog);
      parameter Real crr = 0.015 "rolling resistance coeff" annotation(
        Dialog);
      parameter SI.AngularVelocity wEps = 1.0 "regularization for rolling res sign" annotation(
        Dialog);
      parameter SI.AngularVelocity omegaStart = 0 "Initial spin rate" annotation(
        Dialog);
      parameter Modelica.Mechanics.MultiBody.Types.Axis n = {0, -1, 0} "spin axis resolved in frame_a" annotation(
        Dialog);
      Modelica.Blocks.Interfaces.RealInput fx(unit = "N") annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-36, 48}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput fz(unit = "N") annotation(
        Placement(transformation(origin = {-100, -70}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {-92, -44}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput omega(unit = "rad/s", nominal = 100) annotation(
        Placement(transformation(origin = {100, 70}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {88, 42}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput vRim(unit = "m/s") annotation(
        Placement(transformation(origin = {100, -72}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {90, -44}, extent = {{-10, -10}, {10, 10}})));
      SI.Torque tauRoll "rolling resistance torque";
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubFlange(includeBearingConnector = false) annotation(
        Placement(transformation(origin = {100, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {-74, 28}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Parts.Rotor1D rotor1D(J = J, n = n, exact = false, phi(start = 0, fixed = true), w(start = omegaStart, fixed = false, nominal = 100), stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {-80, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Parts.Mounting1D mounting1D(n = n) annotation(
        Placement(transformation(origin = {-50, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
      Modelica.Mechanics.Rotational.Sources.Torque torque(useSupport = true) annotation(
        Placement(transformation(origin = {0, 28}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.Rotational.Components.Damper damper(d = dSpin) annotation(
        Placement(transformation(origin = {42, -20}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_a annotation(
        Placement(transformation(origin = {-100, 40}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-80, 32}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearingAdaptor adaptor annotation(
        Placement(transformation(origin = {68, 28}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
    equation
      tauRoll = crr*Functions.smoothMax(fz, 0.0)*rEff*rotor1D.w/sqrt(rotor1D.w^2 + wEps^2) "crr*fz*rEff, smoothed out";
      torque.tau = -(fx*rEff + tauRoll);
      omega = rotor1D.w;
      vRim = rotor1D.w*rEff;
      connect(rotor1D.flange_a, adaptor.flange) annotation(
        Line(points = {{-90, 0}, {68, 0}, {68, 28}}));
      connect(adaptor.flangeAndFrame, hubFlange) annotation(
        Line(points = {{78, 28}, {100, 28}, {100, 0}}, color = {135, 135, 135}));
      connect(rotor1D.flange_b, damper.flange_a) annotation(
        Line(points = {{-70, 0}, {-19, 0}, {-19, -20}, {32, -20}}));
      connect(torque.flange, rotor1D.flange_b) annotation(
        Line(points = {{10, 28}, {-70, 28}, {-70, 0}}));
      connect(torque.support, mounting1D.flange_b) annotation(
        Line(points = {{0, 18}, {-50, 18}, {-50, 10}}));
      connect(damper.flange_b, mounting1D.flange_b) annotation(
        Line(points = {{52, -20}, {-50, -20}, {-50, 10}}));
      connect(rotor1D.frame_a, frame_a) annotation(
        Line(points = {{-80, -10}, {-100, -10}, {-100, 40}}, color = {95, 95, 95}));
      connect(mounting1D.frame_a, frame_a) annotation(
        Line(points = {{-40, 0}, {-100, 0}, {-100, 40}}, color = {95, 95, 95}));
    end Rim;

    model SlipDynamics
      import Modelica.Units.SI;
      parameter SI.Length sigmaX = 0.3 "lon. relaxation length" annotation(
        Dialog);
      parameter SI.Length sigmaY = 0.5 "lat. relaxation length" annotation(
        Dialog);
      parameter SI.Velocity vMin = 1.0 "speed floor" annotation(
        Dialog);
      parameter Boolean initRollingFree = true "start with zero slip, match rim speed" annotation(
        Dialog);
      Modelica.Blocks.Interfaces.RealInput vx(unit = "m/s") "contact patch vx" annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, 75}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput vy(unit = "m/s") "contact patch vy" annotation(
        Placement(transformation(origin = {-101, 30}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, 25}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput vRim(unit = "m/s") "rim speed" annotation(
        Placement(transformation(origin = {-101, -12}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, -25}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput kappa(start = 0, fixed = false, nominal = 0.1, stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {100, 70}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {110, 30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput alpha(unit = "rad") annotation(
        Placement(transformation(origin = {100, 30}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {88, 2}, extent = {{-10, -10}, {10, 10}})));
      Real tanAlpha(start = 0, fixed = false, nominal = 0.15, stateSelect = StateSelect.always);
      SI.Velocity vxAbs;
    initial equation
      tanAlpha = 0;
      if initRollingFree then
        kappa = 0;
        der(kappa) = 0;
      end if;
    equation
      vxAbs = sqrt(vx^2 + vMin^2);
      sigmaX*der(kappa) + vxAbs*kappa = vRim - vx;
      sigmaY*der(tanAlpha) + vxAbs*tanAlpha = vy;
      alpha = atan(tanAlpha);
    end SlipDynamics;

    model ContactPatch "slip dynamics needs the velocity of CP in the wheel frame"
      import Modelica.Units.SI;
       
      parameter SI.Radius rEff = 0.33 "effective rolling radius" annotation(
        Dialog);
      parameter SI.Radius r0 = 0.33 "unloaded radius" annotation(
        Dialog);
      parameter SI.TranslationalSpringConstant kz = 250000 "vertical stiffness" annotation(
        Dialog);
      parameter SI.TranslationalDampingConstant cz = 400 "vertical damping" annotation(
        Dialog);
      SI.Length pen "tire vertical deflection";
      SI.Length zRoad "road surface elevation under the hub";
      
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a frame_a "hub frame, SAE coordinates" annotation(
        Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-82, 0}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Blocks.Interfaces.RealOutput vx(unit = "m/s") annotation(
        Placement(transformation(origin = {100, 28}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {100, 75}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput vy(unit = "m/s") annotation(
        Placement(transformation(origin = {100, -12}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {100, 25}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealInput fx(unit = "N") annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, 70}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput fy(unit = "N") annotation(
        Placement(transformation(origin = {-100, 49}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-100, 40}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput fz(unit = "N") annotation(
        Placement(transformation(origin = {100, -50}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {100, -50}, extent = {{-10, -10}, {10, 10}})));
    
      outer Roads.BaseRoad road annotation(
        Placement(transformation(origin = {-70, -88}, extent = {{-10, -10}, {10, 10}})));
    protected
      SI.Velocity vHub[3];
      SI.AngularVelocity wLoc[3];
      SI.Velocity vC[3] "contact patch velocity";
    equation
      // pen = Functions.smoothMax(r0 + frame_a.r_0[3], 0.0);
      zRoad = road.z0 + road.height(frame_a.r_0[1], frame_a.r_0[2]);
      pen = Functions.smoothMax(r0 + frame_a.r_0[3] - zRoad, 0.0);
      
      fz = Functions.smoothMax(kz*pen + cz*der(pen), 0.0);
      frame_a.f = -{fx, fy, -fz} "sae coordinates forces, -fz = road pushing tire up";
      frame_a.t = -cross({0, 0, rEff}, {fx, fy, -fz});
// frame_a.r_0 = world coords initially
      vHub = Modelica.Mechanics.MultiBody.Frames.resolve2(frame_a.R, der(frame_a.r_0));
// rotate vector from world frame (frame 1) to hub frame
// angular velocity of the hub frame in hub coords
      wLoc = Modelica.Mechanics.MultiBody.Frames.angularVelocity2(frame_a.R);
      vC = vHub + cross(wLoc, {0, 0, rEff}) "contact below hub = +z in SAE";
      vx = vC[1];
      vy = vC[2];
    end ContactPatch;
  end Wheels;

  package Functions
    function smoothMax
      input Real a;
      input Real b;
      input Real eps = 1e-6 "Regularization, controls sharpness near a=b";
      output Real y;
    algorithm
      y := 0.5*(a + b + sqrt((a - b)^2 + eps^2));
      annotation(
        smoothOrder = 1,
        Inline = true);
    end smoothMax;

    function interpLoad
      input Real fz;
      input Real fz1;
      input Real fz2;
      input Real v1;
      input Real v2;
      output Real interpolatedLoad;
    algorithm
      interpolatedLoad := v1 + (v2 - v1)*(fz - fz1)/(fz2 - fz1);
      annotation(
        smoothOrder = 2,
        Inline = true);
    end interpLoad;

    function smoothSqrt
      input Real x;
      input Real eps = 1e-8;
      output Real y;
    algorithm
      y := sqrt(x + eps);
      annotation(
        smoothOrder = 1,
        Inline = true);
    end smoothSqrt;
  end Functions;

  record parameters
    import Modelica.Units.SI;
    import Modelica.Units.Conversions.from_deg;
    parameter SI.Force fzRef1 = 2000;
    parameter SI.Force fzRef2 = 6000;
    parameter Real muXMax1 = 1.75;
    parameter Real muXMax2 = 1.40;
    parameter Real muYMax1 = 1.80;
    parameter Real muYMax2 = 1.45;
    parameter Real kappaMax1 = 0.11;
    parameter Real kappaMax2 = 0.10;
    parameter SI.Angle alphaMax1 = from_deg(9.0);
    parameter SI.Angle alphaMax2 = from_deg(8.0);
    parameter Real qx = 1.9;
    parameter Real qy = 1.9;
    parameter Real smoothingEpsilon = 1e-6;
    // vehicle parameters
    // TODO: add vehicle mass, inertias (currently live in VehicleBody)
    parameter SI.Length wheelbase = 3.6;
    parameter SI.Length tf = 2.0 "front trackwidth";
    parameter SI.Length tr = 2.0 "rear trackwidth";
    parameter SI.Length a = 1.9 "cg to front axle";
    parameter SI.Length b = 1.7 "cg to rear axle";
    parameter Real ackermann = 0.0 "0 = parallel, 1 = full ackerman, <0 = anti";
    // environment parameters
    parameter Real rho = 1.225;
    // unused right now, see VehicleAero
    // engine parameters
    parameter Real hp = 1000 "horsepower";
    parameter SI.Power hpPower = hp*745.7 "horsepower in W";
    parameter Real engineEff = 0.90 "engine efficiency, constant for now (unrealistic)";
    parameter SI.Torque maxDriveTorque = 6000 "total drive torque, split between rear wheels";
    parameter SI.Torque maxBrakeTorque = 10000 "total brake torque, all 4 wheels";
    parameter Real brakeBias = 0.62 "fraction of brake torque to front axle";
    parameter SI.AngularVelocity maxSteerRate = 5.0 "rad/s";
    parameter SI.Angle deltaMax = 0.35;
    parameter SI.Height rEff0 = 0.33;
    parameter SI.Height cgHeight = 0.30;
  end parameters;

  package Vehicles
    model AlyssaVehicle
      Wheels.OptimalControlWheel wheelFR annotation(
        Placement(transformation(origin = {-71, 49}, extent = {{-11, -11}, {11, 11}}, rotation = 180)));
      Wheels.OptimalControlWheel wheelFL annotation(
        Placement(transformation(origin = {-70, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
      Wheels.OptimalControlWheel wheelRR annotation(
        Placement(transformation(origin = {70, 50}, extent = {{-10, -10}, {10, 10}})));
      Wheels.OptimalControlWheel wheelRL annotation(
        Placement(transformation(origin = {70, -50}, extent = {{-10, -10}, {10, 10}})));
      Components.VehicleBody vehicleBody annotation(
        Placement(transformation(extent = {{-10, -10}, {10, 10}})));
      Components.FrontSuspension frontSuspension annotation(
        Placement(transformation(origin = {-50, 0}, extent = {{-10, -10}, {10, 10}})));
      Components.RearSuspension rearSuspension annotation(
        Placement(transformation(origin = {50, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubFR annotation(
        Placement(transformation(origin = {-70, 100}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {-75, 100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubFL annotation(
        Placement(transformation(origin = {-72, -98}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {-75, -100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubRR annotation(
        Placement(transformation(origin = {70, 100}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {75, 100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Mechanics.MultiBody.Interfaces.FlangeWithBearing hubRL annotation(
        Placement(transformation(origin = {70, -100}, extent = {{-10, -10}, {10, 10}}, rotation = -90), iconTransformation(origin = {75, -100}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
      Modelica.Blocks.Interfaces.RealInput delta(unit = "rad") annotation(
        Placement(transformation(origin = {-150, 72}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {-118, 72}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput mu "grip" annotation(
        Placement(transformation(origin = {-150, 50}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {-118, 72}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput w[4](each unit = "rad/s") "wheel speeds output, FL FR RL RR" annotation(
        Placement(transformation(origin = {150, -72}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {136, -20}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(frontSuspension.subFrameFront, vehicleBody.subFrameFront) annotation(
        Line(points = {{-40, 0}, {-10, 0}}, color = {95, 95, 95}));
      connect(vehicleBody.subFrameRear, rearSuspension.subFrameRear) annotation(
        Line(points = {{10, 0}, {40, 0}}, color = {95, 95, 95}));
      connect(wheelFR.frame_a, frontSuspension.frame_bR) annotation(
        Line(points = {{-60, 48}, {-50, 48}, {-50, 10}}, color = {95, 95, 95}));
      connect(wheelFL.frame_a, frontSuspension.frame_bL) annotation(
        Line(points = {{-60, -50}, {-50, -50}, {-50, -10}}, color = {95, 95, 95}));
      connect(rearSuspension.frame_bR, wheelRR.frame_a) annotation(
        Line(points = {{50, 10}, {60, 10}, {60, 50}}, color = {95, 95, 95}));
      connect(rearSuspension.frame_bL, wheelRL.frame_a) annotation(
        Line(points = {{50, -10}, {60, -10}, {60, -50}}, color = {95, 95, 95}));
      connect(hubFR, wheelFR.hubFlange) annotation(
        Line(points = {{-70, 100}, {-82, 100}, {-82, 50}}));
      connect(wheelRR.hubFlange, hubRR) annotation(
        Line(points = {{80, 50}, {86, 50}, {86, 75}, {70, 75}, {70, 100}}, color = {135, 135, 135}));
      connect(hubFL, wheelFL.hubFlange) annotation(
        Line(points = {{-72, -98}, {-80, -98}, {-80, -50}}));
      connect(hubRL, wheelRL.hubFlange) annotation(
        Line(points = {{70, -100}, {80, -100}, {80, -50}}));
      connect(delta, frontSuspension.delta) annotation(
        Line(points = {{-150, 72}, {-100, 72}, {-100, 39}, {-58, 39}, {-58, 6}}, color = {0, 0, 127}));
      connect(wheelFL.omega, w[1]) annotation(
        Line(points = {{-78, -42}, {150, -42}, {150, -72}}, color = {0, 0, 127}));
      connect(wheelFR.omega, w[2]) annotation(
        Line(points = {{-80, 58}, {150, 58}, {150, -72}}, color = {0, 0, 127}));
      connect(wheelRL.omega, w[3]) annotation(
        Line(points = {{78, -58}, {150, -58}, {150, -72}}, color = {0, 0, 127}));
      connect(wheelRR.omega, w[4]) annotation(
        Line(points = {{78, 42}, {150, 42}, {150, -72}}, color = {0, 0, 127}));
      connect(mu, wheelFR.mu) annotation(
        Line(points = {{-150, 50}, {-62, 50}, {-62, 42}}, color = {0, 0, 127}));
      connect(mu, wheelRR.mu) annotation(
        Line(points = {{-150, 50}, {62, 50}, {62, 58}}, color = {0, 0, 127}));
      connect(mu, wheelFL.mu) annotation(
        Line(points = {{-150, 50}, {-62, 50}, {-62, -56}}, color = {0, 0, 127}));
      connect(mu, wheelRL.mu) annotation(
        Line(points = {{-150, 50}, {62, 50}, {62, -42}}, color = {0, 0, 127}));
      annotation(
        Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-150, -100}, {150, 100}}), graphics = {Rectangle(extent = {{-150, -100}, {150, 100}}, lineColor = {0, 0, 0}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid), Bitmap(extent = {{-90, -90}, {90, 90}}, fileName = "modelica://AlyssaModel/Resources/Images/Lightning_McQueen.png"), Text(extent = {{-100, -135}, {100, -105}}, textString = "%name")}));
    end AlyssaVehicle;
  end Vehicles;

  package Experiments
    model OptimalControl
      Vehicles.AlyssaVehicle vehicle annotation(
        Placement(transformation(origin = {-49.5, -1}, extent = {{-31.5, -21}, {31.5, 21}})));
      Modelica.Blocks.Sources.Constant mu(k = 1.0) annotation(
        Placement(transformation(origin = {-140, 14}, extent = {{-10, -10}, {10, 10}})));
      Controllers.RigController rigController annotation(
        Placement(transformation(origin = {39, 59}, extent = {{-17, -17}, {17, 17}})));
    inner Roads.FlatRoad road annotation(
        Placement(transformation(origin = {-50, -90}, extent = {{-10, -10}, {10, 10}})));
  inner Modelica.Mechanics.MultiBody.World world(n = {0, 0, 1})  annotation(
        Placement(transformation(origin = {-90, -90}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(mu.y, vehicle.mu) annotation(
        Line(points = {{-129, 14}, {-74, 14}}, color = {0, 0, 127}));
    end OptimalControl;
  end Experiments;

  package Controllers
    model RigController
      Modelica.Blocks.Interfaces.RealInput steer annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 25}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput throttle annotation(
        Placement(transformation(origin = {-100, 88}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 60}, extent = {{-20, -20}, {20, 20}})));
      ThrottleSmoothing throttleSmoothing annotation(
        Placement(transformation(origin = {-30, 70}, extent = {{-10, -10}, {10, 10}})));
      SteerSmoothing steerSmoothing annotation(
        Placement(transformation(origin = {-30, 30}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealInput w[4](each unit = "rad/s") "wheel speeds" annotation(
        Placement(transformation(origin = {-100, 50}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-80, 95}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput tau[4](each unit = "N.m") "torque demand" annotation(
        Placement(transformation(origin = {100, 8}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {100, -50}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealOutput delta(unit = "rad") annotation(
        Placement(transformation(origin = {100, -12}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {82, -22}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(steer, steerSmoothing.uSteer) annotation(
        Line(points = {{-100, 70}, {-36, 70}, {-36, 34}}, color = {0, 0, 127}));
      connect(throttle, throttleSmoothing.u) annotation(
        Line(points = {{-100, 88}, {-22, 88}, {-22, 76}}, color = {0, 0, 127}));
      connect(w, throttleSmoothing.w) annotation(
        Line(points = {{-100, 50}, {-22, 50}, {-22, 72}}, color = {0, 0, 127}, thickness = 0.5));
      connect(steerSmoothing.delta, delta) annotation(
        Line(points = {{-22, 30}, {39, 30}, {39, -12}, {100, -12}}, color = {0, 0, 127}));
      connect(throttleSmoothing.tau, tau) annotation(
        Line(points = {{-24, 68}, {100, 68}, {100, 8}}, color = {0, 0, 127}, thickness = 0.5));
      annotation(
        Icon(coordinateSystem(preserveAspectRatio = true, extent = {{-100, -100}, {100, 100}}), graphics = {Rectangle(extent = {{-100, -100}, {100, 100}}, lineColor = {0, 0, 0}, fillColor = {255, 255, 255}, fillPattern = FillPattern.Solid), Bitmap(extent = {{-90, -90}, {90, 90}}, fileName = "modelica://AlyssaModel/Resources/Images/pcb icon.png"), Text(extent = {{-100, -135}, {100, -105}}, textString = "%name")}));
    end RigController;

    model ThrottleSmoothing
      import Modelica.Units.SI;
      parameter Real uEps = 1e-3;
      parameter SI.AngularVelocity wEps = 1.0;
      parameter SI.Torque tEps = 1.0;
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealInput u "-1 = full brake, 1 = full throttle" annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {70, 60}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealInput w[4](each unit = "rad/s") "wheel speeds" annotation(
        Placement(transformation(origin = {-100, 30}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {72, 16}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput tau[4](each unit = "N.m") "torque demand" annotation(
        Placement(transformation(origin = {100, 8}, extent = {{-14, -14}, {14, 14}}), iconTransformation(origin = {54, -16}, extent = {{-20, -20}, {20, 20}})));
      Real uDrive;
      Real uBrake;
      SI.AngularVelocity wDrive;
      SI.Torque tauPower;
      SI.Torque tauDrive;
    equation
// split the command into throttle and brake
// basically a smooth splitter but not in a function
// uEps adjusts the width of the smooth splitter
      uDrive = 0.5*(u + sqrt(u^2 + uEps^2));
      uBrake = 0.5*(-u + sqrt(u^2 + uEps^2));
      wDrive = sqrt(((w[3] + w[4])/2)^2 + wEps^2);
// rear wheels only
      tauPower = vehicleParams.hpPower*vehicleParams.engineEff/wDrive;
      tauDrive = 0.5*(vehicleParams.maxDriveTorque + tauPower - sqrt((vehicleParams.maxDriveTorque - tauPower)^2 + tEps^2));
      tau[1] = -uBrake*vehicleParams.maxBrakeTorque*vehicleParams.brakeBias*0.5*w[1]/sqrt(w[1]^2 + wEps^2);
      tau[2] = -uBrake*vehicleParams.maxBrakeTorque*vehicleParams.brakeBias*0.5*w[2]/sqrt(w[2]^2 + wEps^2);
      tau[3] = uDrive*tauDrive*0.5 - uBrake*vehicleParams.maxBrakeTorque*(1 - vehicleParams.brakeBias)*0.5*w[3]/sqrt(w[3]^2 + wEps^2);
      tau[4] = uDrive*tauDrive*0.5 - uBrake*vehicleParams.maxBrakeTorque*(1 - vehicleParams.brakeBias)*0.5*w[4]/sqrt(w[4]^2 + wEps^2);
    end ThrottleSmoothing;

    model SteerSmoothing
      import Modelica.Units.SI;
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Blocks.Interfaces.RealInput uSteer "-1 = full left, 1 = full right" annotation(
        Placement(transformation(origin = {-100, 50}, extent = {{-12, -12}, {12, 12}}), iconTransformation(origin = {-56, 34}, extent = {{-20, -20}, {20, 20}})));
      Modelica.Blocks.Interfaces.RealOutput delta(unit = "rad", start = 0, fixed = true, stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {100, 50}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {76, 8}, extent = {{-10, -10}, {10, 10}})));
    equation
      der(delta) = vehicleParams.maxSteerRate*uSteer;
    end SteerSmoothing;
  end Controllers;

  package MotionBlocks
    model FreeMotionPlanar "6-DOF, SAE coordinates"
      import Modelica.Units.SI;
      parameter SI.Position zChassis0 = -0.323 "temporary for heave start" annotation(
        Placement(visible = false, transformation(extent = {{0, 0}, {0, 0}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_a worldFrame annotation(
        Placement(transformation(origin = {-100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-30, 18}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Interfaces.Frame_b vehicleFrame annotation(
        Placement(transformation(origin = {100, 0}, extent = {{-16, -16}, {16, 16}}), iconTransformation(origin = {-74, 6}, extent = {{-16, -16}, {16, 16}})));
      Modelica.Mechanics.MultiBody.Joints.Prismatic longitudinal(n = {1, 0, 0}, s(start = 0, fixed = true), v(start = 0, fixed = true), stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {-80, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Joints.Prismatic lateral(n = {0, 1, 0}, s(start = 0, fixed = true), v(start = 0, fixed = true), stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {-50, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Joints.Prismatic heave(n = {0, 0, 1}, s(start = zChassis0, fixed = true), v(start = 0, fixed = true), stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {-22, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Joints.Revolute yaw(n = {0, 0, 1}, phi(start = 0, fixed = true), w(start = 0, fixed = true), stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {6, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Joints.Revolute pitch(n = {0, 1, 0}, phi(start = 0, fixed = true), w(start = 0, fixed = true), stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {34, 0}, extent = {{-10, -10}, {10, 10}})));
      Modelica.Mechanics.MultiBody.Joints.Revolute roll(n = {1, 0, 0}, phi(start = 0, fixed = true), w(start = 0, fixed = true), stateSelect = StateSelect.always) annotation(
        Placement(transformation(origin = {62, 0}, extent = {{-10, -10}, {10, 10}})));
      parameters vehicleParams annotation(
        Placement(transformation(origin = {110, 90}, extent = {{-10, -10}, {10, 10}})));
    equation
      connect(worldFrame, longitudinal.frame_a) annotation(
        Line(points = {{-100, 0}, {-90, 0}}));
      connect(longitudinal.frame_b, lateral.frame_a) annotation(
        Line(points = {{-70, 0}, {-60, 0}}, color = {95, 95, 95}));
      connect(lateral.frame_b, heave.frame_a) annotation(
        Line(points = {{-40, 0}, {-32, 0}}, color = {95, 95, 95}));
      connect(heave.frame_b, yaw.frame_a) annotation(
        Line(points = {{-12, 0}, {-4, 0}}, color = {95, 95, 95}));
      connect(yaw.frame_b, pitch.frame_a) annotation(
        Line(points = {{16, 0}, {24, 0}}, color = {95, 95, 95}));
      connect(pitch.frame_b, roll.frame_a) annotation(
        Line(points = {{44, 0}, {52, 0}}, color = {95, 95, 95}));
      connect(roll.frame_b, vehicleFrame) annotation(
        Line(points = {{72, 0}, {100, 0}}, color = {95, 95, 95}));
    end FreeMotionPlanar;
  end MotionBlocks;

  package Rigs
    model Rig
      Modelica.Blocks.Interfaces.RealInput tau[4](each unit = "N.m") annotation(
        Placement(transformation(origin = {-100, 70}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {-34, 56}, extent = {{-20, -20}, {20, 20}})));
    equation

    end Rig;
  end Rigs;

  package Roads
     
model BaseRoad
  import Modelica.Units.SI;
  parameter SI.Position z0 = 0 "road elevation, SAE +z down";
  parameter Real muRef = 1.0 "surface friction";
  
  replaceable function height "surface shape, relative to z0"
    input SI.Position x;
    input SI.Position y;
    output SI.Position z;
  algorithm
    z := 0;
    annotation(
      smoothOrder = 2,
      Inline = true);
  end height;
  
  replaceable function mu "friction shape, multiplies muRef"
    input SI.Position x;
    input SI.Position y;
    output Real m;
  algorithm
    m := 1.0;
    annotation(
      smoothOrder = 2,
      Inline = true);
  end mu;
  
  annotation(Icon(graphics = {
    Rectangle(extent = {{-100,-30},{100,-70}}, fillColor = {80,80,80},
              fillPattern = FillPattern.Solid, lineColor = {0,0,0}),
    Line(points = {{-100,-50},{100,-50}}, color = {255,255,255},
         pattern = LinePattern.Dash, thickness = 0.5),
    Text(extent = {{-100,40},{100,10}}, textString = "%name")}));
end BaseRoad;

    model FlatRoad
      extends AlyssaModel.Roads.BaseRoad;
    equation

    end FlatRoad;
  end Roads;
  annotation(
    uses(Modelica(version = "4.0.0")));
end AlyssaModel;
