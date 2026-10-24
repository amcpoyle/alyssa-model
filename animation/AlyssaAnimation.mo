within;
package AlyssaAnimation
  model Link
    input Modelica.Units.SI.Position a[3];
    input Modelica.Units.SI.Position b[3];
    parameter Real color[3] = {100,180,255};
    parameter Real diameter = 0.018;
    Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape shape(
      shapeType="cylinder", r=a, lengthDirection=b-a,
      widthDirection={1,0,0}, length=Modelica.Math.Vectors.length(b-a),
      width=diameter, height=diameter, color=color);
  end Link;
  model CornerView
    input Modelica.Units.SI.Position p[14,3];
    Link upper[2](a={p[1,:],p[2,:]}, b={p[5,:],p[5,:]}, each color={65,175,255});
    Link lower[2](a={p[3,:],p[4,:]}, b={p[6,:],p[6,:]}, each color={255,166,60});
    Link upright(a=p[5,:], b=p[6,:], color={195,155,255}, diameter=0.035);
    Link tieRod(a=p[7,:], b=p[8,:], color={70,220,160});
    Link spring(a=p[10,:], b=p[11,:], color={255,85,105}, diameter=0.045);
    Link spindle(a=p[5,:], b=p[9,:], color={175,180,195});
  end CornerView;
  model SuspensionAnimation
    parameter Integer mode=1 "1 heave, 2 roll, 3 steering, 4 combined";
    parameter Modelica.Units.SI.Force loadAmplitude=1200 "Additional upward hub force amplitude per wheel";
    parameter Modelica.Units.SI.Frequency frequency=0.5;
    parameter Modelica.Units.SI.Angle steerAmplitude=0.20;
    inner Modelica.Mechanics.MultiBody.World world(n={0,0,1}, enableAnimation=true,
      animateWorld=false, animateGravity=false);
    AlyssaModel.parameters vehicleParams;
    Modelica.Mechanics.MultiBody.Parts.Fixed frontMount(r={-vehicleParams.a,0,0}, animation=false);
    Modelica.Mechanics.MultiBody.Parts.Fixed rearMount(r={vehicleParams.b,0,0}, animation=false);
    AlyssaModel.Components.FrontSuspension front;
    AlyssaModel.Components.RearSuspension rear;
    Real envelope;
    Real wave;
    Modelica.Units.SI.Angle steering;
    Modelica.Units.SI.Force excitation[4];
    Modelica.Mechanics.MultiBody.Forces.WorldForce loads[4](each animation=false);
    CornerView view[4];
    output Modelica.Units.SI.Position points[4,14,3];
    output Real telemetry[4,4] "travel m, camber rad, toe rad, coilover length m";
  equation
    connect(frontMount.frame_b,front.subFrameFront);
    connect(rearMount.frame_b,rear.subFrameRear);
    envelope=if time<1 then (1-cos(Modelica.Constants.pi*time))/2 else 1;
    wave=envelope*sin(2*Modelica.Constants.pi*frequency*time);
    steering=if mode==3 or mode==4 then steerAmplitude*wave else 0;
    front.delta=steering;
    excitation=if mode==3 then zeros(4) else
      loadAmplitude*wave*(if mode==2 or mode==4 then {1,-1,1,-1} else {1,1,1,1});
    connect(loads[1].frame_b,front.frame_bL);
    loads[1].force={0,0,-(front.cornerL.F0+front.cornerL.mUnsprung*Modelica.Constants.g_n+excitation[1])};
    telemetry[1,:]={front.cornerL.travel,front.cornerL.camber,front.cornerL.toe,front.cornerL.coilover.s};
    points[1,1,:]=front.cornerL.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerL.chassisConnect.R,AlyssaModel.Functions.mirrorY(front.cornerL.rUCAf,front.cornerL.side));
    points[1,2,:]=front.cornerL.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerL.chassisConnect.R,AlyssaModel.Functions.mirrorY(front.cornerL.rUCAr,front.cornerL.side));
    points[1,3,:]=front.cornerL.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerL.chassisConnect.R,AlyssaModel.Functions.mirrorY(front.cornerL.rLCAf,front.cornerL.side));
    points[1,4,:]=front.cornerL.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerL.chassisConnect.R,AlyssaModel.Functions.mirrorY(front.cornerL.rLCAr,front.cornerL.side));
    points[1,5,:]=front.cornerL.uca.frame_b.r_0;
    points[1,7,:]=front.cornerL.tieRod.frame_a.r_0;
    points[1,9,:]=front.cornerL.wheelConnect.r_0;
    points[1,10,:]=front.cornerL.springChassis.frame_b.r_0;
    points[1,11,:]=front.cornerL.springArm.frame_b.r_0;
    points[1,6,:]=front.cornerL.jointUSR.frame_ia.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerL.jointUSR.frame_ia.R,AlyssaModel.Functions.mirrorY(front.cornerL.rLBJ-front.cornerL.rUBJ,front.cornerL.side));
    points[1,8,:]=front.cornerL.tieRod.frame_ib.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerL.tieRod.frame_ib.R,AlyssaModel.Functions.mirrorY(front.cornerL.rTieOuter-front.cornerL.rKingpinTop,front.cornerL.side));
    points[1,12,:]=front.cornerL.wheelConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerL.wheelConnect.R,{0,0,-0.33});
    points[1,13,:]=front.cornerL.wheelConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerL.wheelConnect.R,{0.33,0,0});
    points[1,14,:]=front.cornerL.wheelConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerL.wheelConnect.R,{0,0.12,0});
    view[1].p=points[1,:,:];
    connect(loads[2].frame_b,front.frame_bR);
    loads[2].force={0,0,-(front.cornerR.F0+front.cornerR.mUnsprung*Modelica.Constants.g_n+excitation[2])};
    telemetry[2,:]={front.cornerR.travel,front.cornerR.camber,front.cornerR.toe,front.cornerR.coilover.s};
    points[2,1,:]=front.cornerR.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerR.chassisConnect.R,AlyssaModel.Functions.mirrorY(front.cornerR.rUCAf,front.cornerR.side));
    points[2,2,:]=front.cornerR.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerR.chassisConnect.R,AlyssaModel.Functions.mirrorY(front.cornerR.rUCAr,front.cornerR.side));
    points[2,3,:]=front.cornerR.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerR.chassisConnect.R,AlyssaModel.Functions.mirrorY(front.cornerR.rLCAf,front.cornerR.side));
    points[2,4,:]=front.cornerR.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerR.chassisConnect.R,AlyssaModel.Functions.mirrorY(front.cornerR.rLCAr,front.cornerR.side));
    points[2,5,:]=front.cornerR.uca.frame_b.r_0;
    points[2,7,:]=front.cornerR.tieRod.frame_a.r_0;
    points[2,9,:]=front.cornerR.wheelConnect.r_0;
    points[2,10,:]=front.cornerR.springChassis.frame_b.r_0;
    points[2,11,:]=front.cornerR.springArm.frame_b.r_0;
    points[2,6,:]=front.cornerR.jointUSR.frame_ia.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerR.jointUSR.frame_ia.R,AlyssaModel.Functions.mirrorY(front.cornerR.rLBJ-front.cornerR.rUBJ,front.cornerR.side));
    points[2,8,:]=front.cornerR.tieRod.frame_ib.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerR.tieRod.frame_ib.R,AlyssaModel.Functions.mirrorY(front.cornerR.rTieOuter-front.cornerR.rKingpinTop,front.cornerR.side));
    points[2,12,:]=front.cornerR.wheelConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerR.wheelConnect.R,{0,0,-0.33});
    points[2,13,:]=front.cornerR.wheelConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerR.wheelConnect.R,{0.33,0,0});
    points[2,14,:]=front.cornerR.wheelConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(front.cornerR.wheelConnect.R,{0,0.12,0});
    view[2].p=points[2,:,:];
    connect(loads[3].frame_b,rear.frame_bL);
    loads[3].force={0,0,-(rear.cornerL.F0+rear.cornerL.mUnsprung*Modelica.Constants.g_n+excitation[3])};
    telemetry[3,:]={rear.cornerL.travel,rear.cornerL.camber,rear.cornerL.toe,rear.cornerL.coilover.s};
    points[3,1,:]=rear.cornerL.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerL.chassisConnect.R,AlyssaModel.Functions.mirrorY(rear.cornerL.rUCAf,rear.cornerL.side));
    points[3,2,:]=rear.cornerL.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerL.chassisConnect.R,AlyssaModel.Functions.mirrorY(rear.cornerL.rUCAr,rear.cornerL.side));
    points[3,3,:]=rear.cornerL.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerL.chassisConnect.R,AlyssaModel.Functions.mirrorY(rear.cornerL.rLCAf,rear.cornerL.side));
    points[3,4,:]=rear.cornerL.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerL.chassisConnect.R,AlyssaModel.Functions.mirrorY(rear.cornerL.rLCAr,rear.cornerL.side));
    points[3,5,:]=rear.cornerL.uca.frame_b.r_0;
    points[3,7,:]=rear.cornerL.tieRod.frame_a.r_0;
    points[3,9,:]=rear.cornerL.wheelConnect.r_0;
    points[3,10,:]=rear.cornerL.springChassis.frame_b.r_0;
    points[3,11,:]=rear.cornerL.springArm.frame_b.r_0;
    points[3,6,:]=rear.cornerL.jointUSR.frame_ia.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerL.jointUSR.frame_ia.R,AlyssaModel.Functions.mirrorY(rear.cornerL.rLBJ-rear.cornerL.rUBJ,rear.cornerL.side));
    points[3,8,:]=rear.cornerL.tieRod.frame_ib.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerL.tieRod.frame_ib.R,AlyssaModel.Functions.mirrorY(rear.cornerL.rTieOuter-rear.cornerL.rKingpinTop,rear.cornerL.side));
    points[3,12,:]=rear.cornerL.wheelConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerL.wheelConnect.R,{0,0,-0.33});
    points[3,13,:]=rear.cornerL.wheelConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerL.wheelConnect.R,{0.33,0,0});
    points[3,14,:]=rear.cornerL.wheelConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerL.wheelConnect.R,{0,0.12,0});
    view[3].p=points[3,:,:];
    connect(loads[4].frame_b,rear.frame_bR);
    loads[4].force={0,0,-(rear.cornerR.F0+rear.cornerR.mUnsprung*Modelica.Constants.g_n+excitation[4])};
    telemetry[4,:]={rear.cornerR.travel,rear.cornerR.camber,rear.cornerR.toe,rear.cornerR.coilover.s};
    points[4,1,:]=rear.cornerR.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerR.chassisConnect.R,AlyssaModel.Functions.mirrorY(rear.cornerR.rUCAf,rear.cornerR.side));
    points[4,2,:]=rear.cornerR.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerR.chassisConnect.R,AlyssaModel.Functions.mirrorY(rear.cornerR.rUCAr,rear.cornerR.side));
    points[4,3,:]=rear.cornerR.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerR.chassisConnect.R,AlyssaModel.Functions.mirrorY(rear.cornerR.rLCAf,rear.cornerR.side));
    points[4,4,:]=rear.cornerR.chassisConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerR.chassisConnect.R,AlyssaModel.Functions.mirrorY(rear.cornerR.rLCAr,rear.cornerR.side));
    points[4,5,:]=rear.cornerR.uca.frame_b.r_0;
    points[4,7,:]=rear.cornerR.tieRod.frame_a.r_0;
    points[4,9,:]=rear.cornerR.wheelConnect.r_0;
    points[4,10,:]=rear.cornerR.springChassis.frame_b.r_0;
    points[4,11,:]=rear.cornerR.springArm.frame_b.r_0;
    points[4,6,:]=rear.cornerR.jointUSR.frame_ia.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerR.jointUSR.frame_ia.R,AlyssaModel.Functions.mirrorY(rear.cornerR.rLBJ-rear.cornerR.rUBJ,rear.cornerR.side));
    points[4,8,:]=rear.cornerR.tieRod.frame_ib.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerR.tieRod.frame_ib.R,AlyssaModel.Functions.mirrorY(rear.cornerR.rTieOuter-rear.cornerR.rKingpinTop,rear.cornerR.side));
    points[4,12,:]=rear.cornerR.wheelConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerR.wheelConnect.R,{0,0,-0.33});
    points[4,13,:]=rear.cornerR.wheelConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerR.wheelConnect.R,{0.33,0,0});
    points[4,14,:]=rear.cornerR.wheelConnect.r_0+Modelica.Mechanics.MultiBody.Frames.resolve1(rear.cornerR.wheelConnect.R,{0,0.12,0});
    view[4].p=points[4,:,:];
    annotation(experiment(StopTime=6,Interval=0.02,Tolerance=1e-7));
  end SuspensionAnimation;
  model Heave
    extends SuspensionAnimation(mode=1);
  end Heave;
  model Roll
    extends SuspensionAnimation(mode=2);
  end Roll;
  model Steering
    extends SuspensionAnimation(mode=3);
  end Steering;
  model Combined
    extends SuspensionAnimation(mode=4);
  end Combined;
  annotation(uses(Modelica(version="4.0.0")));
end AlyssaAnimation;
