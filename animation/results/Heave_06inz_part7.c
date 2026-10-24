#include "Heave_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void Heave_eqFunction_8008(DATA *data, threadData_t *threadData);


/*
equation index: 3467
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.revolute.R_rel.T[3,1] = (-0.222824801502141) * sin(rear.cornerL.tieRod.revolute.angle)
*/
void Heave_eqFunction_3467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3467};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3502]] /* rear.cornerL.tieRod.revolute.R_rel.T[3,1] DUMMY_STATE */) = (-0.222824801502141) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* rear.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7659(DATA *data, threadData_t *threadData);


/*
equation index: 3469
type: SIMPLE_ASSIGN
rear.cornerL.upright.frame_a.r_0[3] = points[3,5,3] + (-0.13) * rear.cornerL.upright.frame_a.R.T[2,3] + 0.2 * rear.cornerL.upright.frame_a.R.T[3,3]
*/
void Heave_eqFunction_3469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3469};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3716]] /* rear.cornerL.upright.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2919]] /* points[3,5,3] DUMMY_STATE */) + (-0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3707]] /* rear.cornerL.upright.frame_a.R.T[2,3] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3710]] /* rear.cornerL.upright.frame_a.R.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3470
type: SIMPLE_ASSIGN
points[3,9,3] = rear.cornerL.upright.frame_a.r_0[3]
*/
void Heave_eqFunction_3470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3470};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2931]] /* points[3,9,3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3716]] /* rear.cornerL.upright.frame_a.r_0[3] DUMMY_STATE */);
  TRACE_POP
}
extern void Heave_eqFunction_7673(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7674(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7676(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7666(DATA *data, threadData_t *threadData);


/*
equation index: 3475
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod1.rRod_0[3] = rear.cornerL.tieRod.frame_im.r_0[3] - points[3,7,3]
*/
void Heave_eqFunction_3475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3475};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3568]] /* rear.cornerL.tieRod.rod1.rRod_0[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3450]] /* rear.cornerL.tieRod.frame_im.r_0[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2925]] /* points[3,7,3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3476
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod1.rRod_a[3] = rear.cornerL.tieRod.rod1.rRod_0[3]
*/
void Heave_eqFunction_3476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3476};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3571]] /* rear.cornerL.tieRod.rod1.rRod_a[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3568]] /* rear.cornerL.tieRod.rod1.rRod_0[3] variable */);
  TRACE_POP
}
extern void Heave_eqFunction_7668(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7670(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7669(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7664(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8006(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7677(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7663(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8005(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8010(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8009(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8007(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7675(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7679(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7680(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7658(DATA *data, threadData_t *threadData);


/*
equation index: 3492
type: SIMPLE_ASSIGN
rear.cornerL.upright.frame_a.r_0[1] = points[3,5,1] + (-0.13) * rear.cornerL.upright.frame_a.R.T[2,1] + 0.2 * rear.cornerL.upright.frame_a.R.T[3,1]
*/
void Heave_eqFunction_3492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3492};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3714]] /* rear.cornerL.upright.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* points[3,5,1] DUMMY_STATE */) + (-0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3705]] /* rear.cornerL.upright.frame_a.R.T[2,1] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3708]] /* rear.cornerL.upright.frame_a.R.T[3,1] variable */));
  TRACE_POP
}

/*
equation index: 3493
type: SIMPLE_ASSIGN
points[3,9,1] = rear.cornerL.upright.frame_a.r_0[1]
*/
void Heave_eqFunction_3493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3493};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2929]] /* points[3,9,1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3714]] /* rear.cornerL.upright.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void Heave_eqFunction_7692(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7693(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7695(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7685(DATA *data, threadData_t *threadData);


/*
equation index: 3498
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod1.rRod_0[1] = rear.cornerL.tieRod.frame_im.r_0[1] - points[3,7,1]
*/
void Heave_eqFunction_3498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3498};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3566]] /* rear.cornerL.tieRod.rod1.rRod_0[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3448]] /* rear.cornerL.tieRod.frame_im.r_0[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2923]] /* points[3,7,1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3499
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod1.rRod_a[1] = rear.cornerL.tieRod.rod1.rRod_0[1]
*/
void Heave_eqFunction_3499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3499};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3569]] /* rear.cornerL.tieRod.rod1.rRod_a[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3566]] /* rear.cornerL.tieRod.rod1.rRod_0[1] variable */);
  TRACE_POP
}
extern void Heave_eqFunction_7687(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7689(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7688(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7683(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7696(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7682(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7694(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7698(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7699(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7701(DATA *data, threadData_t *threadData);


/*
equation index: 3510
type: SIMPLE_ASSIGN
rear.cornerL.upright.frame_a.r_0[2] = points[3,5,2] + (-0.13) * rear.cornerL.upright.frame_a.R.T[2,2] + 0.2 * rear.cornerL.upright.frame_a.R.T[3,2]
*/
void Heave_eqFunction_3510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3510};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3715]] /* rear.cornerL.upright.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2918]] /* points[3,5,2] DUMMY_STATE */) + (-0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3706]] /* rear.cornerL.upright.frame_a.R.T[2,2] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3709]] /* rear.cornerL.upright.frame_a.R.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 3511
type: SIMPLE_ASSIGN
points[3,9,2] = rear.cornerL.upright.frame_a.r_0[2]
*/
void Heave_eqFunction_3511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3511};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2930]] /* points[3,9,2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3715]] /* rear.cornerL.upright.frame_a.r_0[2] DUMMY_STATE */);
  TRACE_POP
}
extern void Heave_eqFunction_7713(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7714(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7715(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7717(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7706(DATA *data, threadData_t *threadData);


/*
equation index: 3517
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod1.rRod_0[2] = rear.cornerL.tieRod.frame_im.r_0[2] - points[3,7,2]
*/
void Heave_eqFunction_3517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3567]] /* rear.cornerL.tieRod.rod1.rRod_0[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3449]] /* rear.cornerL.tieRod.frame_im.r_0[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2924]] /* points[3,7,2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3518
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod1.rRod_a[2] = rear.cornerL.tieRod.rod1.rRod_0[2]
*/
void Heave_eqFunction_3518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3518};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3570]] /* rear.cornerL.tieRod.rod1.rRod_a[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3567]] /* rear.cornerL.tieRod.rod1.rRod_0[2] variable */);
  TRACE_POP
}
extern void Heave_eqFunction_7708(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7710(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7709(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7720(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7704(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7718(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7703(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7716(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7721(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7722(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7723(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7647(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7745(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7747(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7758(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7760(DATA *data, threadData_t *threadData);


/*
equation index: 3535
type: SIMPLE_ASSIGN
loads[3].frame_b.R.w[1] = 0.9999965730559848 * rear.cornerL.upright.w_a[1] + 0.0026179908874179934 * rear.cornerL.upright.w_a[2]
*/
void Heave_eqFunction_3535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* loads[3].frame_b.R.w[1] variable */) = (0.9999965730559848) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3748]] /* rear.cornerL.upright.w_a[1] DUMMY_STATE */)) + (0.0026179908874179934) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3749]] /* rear.cornerL.upright.w_a[2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3536
type: SIMPLE_ASSIGN
rear.cornerL.wheelAngles.R_rel.w[1] = loads[3].frame_b.R.w[1]
*/
void Heave_eqFunction_3536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3536};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3763]] /* rear.cornerL.wheelAngles.R_rel.w[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2719]] /* loads[3].frame_b.R.w[1] variable */);
  TRACE_POP
}
extern void Heave_eqFunction_7757(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7759(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7776(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7777(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7774(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7775(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7772(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7773(DATA *data, threadData_t *threadData);


/*
equation index: 3545
type: SIMPLE_ASSIGN
loads[3].frame_b.R.w[2] = (-0.0026174167187536785) * rear.cornerL.upright.w_a[1] + 0.9997772572824157 * rear.cornerL.upright.w_a[2] + 0.020942419883356957 * rear.cornerL.upright.w_a[3]
*/
void Heave_eqFunction_3545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2720]] /* loads[3].frame_b.R.w[2] variable */) = (-0.0026174167187536785) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3748]] /* rear.cornerL.upright.w_a[1] DUMMY_STATE */)) + (0.9997772572824157) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3749]] /* rear.cornerL.upright.w_a[2] DUMMY_STATE */)) + (0.020942419883356957) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3750]] /* rear.cornerL.upright.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3546
type: SIMPLE_ASSIGN
rear.cornerL.wheelAngles.R_rel.w[2] = loads[3].frame_b.R.w[2]
*/
void Heave_eqFunction_3546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3546};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3764]] /* rear.cornerL.wheelAngles.R_rel.w[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2720]] /* loads[3].frame_b.R.w[2] variable */);
  TRACE_POP
}

/*
equation index: 3547
type: SIMPLE_ASSIGN
loads[3].frame_b.R.w[3] = 5.482706441510991e-5 * rear.cornerL.upright.w_a[1] + (-0.020942348114856475) * rear.cornerL.upright.w_a[2] + 0.9997806834748455 * rear.cornerL.upright.w_a[3]
*/
void Heave_eqFunction_3547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3547};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2721]] /* loads[3].frame_b.R.w[3] variable */) = (5.482706441510991e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3748]] /* rear.cornerL.upright.w_a[1] DUMMY_STATE */)) + (-0.020942348114856475) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3749]] /* rear.cornerL.upright.w_a[2] DUMMY_STATE */)) + (0.9997806834748455) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3750]] /* rear.cornerL.upright.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3548
type: SIMPLE_ASSIGN
rear.cornerL.wheelAngles.R_rel.w[3] = loads[3].frame_b.R.w[3]
*/
void Heave_eqFunction_3548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3548};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3765]] /* rear.cornerL.wheelAngles.R_rel.w[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2721]] /* loads[3].frame_b.R.w[3] variable */);
  TRACE_POP
}

/*
equation index: 3552
type: ARRAY_CALL_ASSIGN

$TMP_3549 = Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(rear.cornerL.wheelAngles.R_rel, {3, 1, 2}, rear.cornerL.wheelAngles.guessAngle1)
*/
void Heave_eqFunction_3552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3552};
  real_array tmp122;
  real_array tmp123;
  Modelica_Mechanics_MultiBody_Frames_Orientation tmp124;
  real_array tmp125;
  real_array_create(&tmp122, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3754]] /* rear.cornerL.wheelAngles.R_rel.T[1,1] variable */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)3);
  real_array_create(&tmp123, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3763]] /* rear.cornerL.wheelAngles.R_rel.w[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  Modelica_Mechanics_MultiBody_Frames_Orientation_wrap_vars(threadData,tmp124, tmp122, tmp123);
  real_array_create(&tmp125, ((modelica_real*)&((&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[839]] /* $TMP_3549[1] variable */))[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles(threadData, tmp124, _OMC_LIT22, (data->simulationInfo->realParameter[2366] /* rear.cornerL.wheelAngles.guessAngle1 PARAM */)), tmp125);
  TRACE_POP
}

/*
equation index: 3549
type: SIMPLE_ASSIGN
telemetry[3,3] = $TMP_3549[1]
*/
void Heave_eqFunction_3549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3549};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4740]] /* telemetry[3,3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[839]] /* $TMP_3549[1] variable */);
  TRACE_POP
}

/*
equation index: 3550
type: SIMPLE_ASSIGN
telemetry[3,2] = -$TMP_3549[2]
*/
void Heave_eqFunction_3550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3550};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4739]] /* telemetry[3,2] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[840]] /* $TMP_3549[2] variable */));
  TRACE_POP
}

/*
equation index: 3551
type: SIMPLE_ASSIGN
rear.cornerL.wheelAngles.angles[3] = $TMP_3549[3]
*/
void Heave_eqFunction_3551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3551};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3766]] /* rear.cornerL.wheelAngles.angles[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[841]] /* $TMP_3549[3] variable */);
  TRACE_POP
}

/*
equation index: 3553
type: SIMPLE_ASSIGN
$DER.rear.cornerL.tieRod.revolute.R_rel.T[1,1] = (-sin(rear.cornerL.tieRod.revolute.angle)) * $DER.rear.cornerL.tieRod.revolute.angle
*/
void Heave_eqFunction_3553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[656]] /* der(rear.cornerL.tieRod.revolute.R_rel.T[1,1]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* rear.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* der(rear.cornerL.tieRod.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_7756(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7755(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7754(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7753(DATA *data, threadData_t *threadData);


/*
equation index: 3558
type: SIMPLE_ASSIGN
$DER.rear.cornerL.tieRod.revolute.R_rel.T[1,2] = 0.9748585065718673 * cos(rear.cornerL.tieRod.revolute.angle) * $DER.rear.cornerL.tieRod.revolute.angle
*/
void Heave_eqFunction_3558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[657]] /* der(rear.cornerL.tieRod.revolute.R_rel.T[1,2]) DUMMY_DER */) = (0.9748585065718673) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* rear.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* der(rear.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3559
type: SIMPLE_ASSIGN
$DER.rear.cornerL.tieRod.revolute.R_rel.T[1,3] = 0.222824801502141 * cos(rear.cornerL.tieRod.revolute.angle) * $DER.rear.cornerL.tieRod.revolute.angle
*/
void Heave_eqFunction_3559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[658]] /* der(rear.cornerL.tieRod.revolute.R_rel.T[1,3]) DUMMY_DER */) = (0.222824801502141) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* rear.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* der(rear.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3560
type: SIMPLE_ASSIGN
$DER.rear.cornerL.tieRod.revolute.R_rel.T[2,1] = (-0.9748585065718673) * cos(rear.cornerL.tieRod.revolute.angle) * $DER.rear.cornerL.tieRod.revolute.angle
*/
void Heave_eqFunction_3560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[659]] /* der(rear.cornerL.tieRod.revolute.R_rel.T[2,1]) DUMMY_DER */) = (-0.9748585065718673) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* rear.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* der(rear.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3561
type: SIMPLE_ASSIGN
$DER.rear.cornerL.tieRod.revolute.R_rel.T[3,1] = (-0.222824801502141) * cos(rear.cornerL.tieRod.revolute.angle) * $DER.rear.cornerL.tieRod.revolute.angle
*/
void Heave_eqFunction_3561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3561};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[662]] /* der(rear.cornerL.tieRod.revolute.R_rel.T[3,1]) DUMMY_DER */) = (-0.222824801502141) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* rear.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[667]] /* der(rear.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}
extern void Heave_eqFunction_7819(DATA *data, threadData_t *threadData);


/*
equation index: 3788
type: LINEAR

<var>rear.cornerL.ucaPivot.a</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void Heave_eqFunction_3788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3788};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[3668]] /* rear.cornerL.ucaPivot.a variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 3788 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3788};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 3788 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3668]] /* rear.cornerL.ucaPivot.a variable */) = aux_x[0];

  TRACE_POP
}
extern void Heave_eqFunction_8241(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8233(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8240(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8237(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8236(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8229(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8242(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8244(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8246(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8245(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8260(DATA *data, threadData_t *threadData);


/*
equation index: 3800
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.frame_b.f[1] = (-rear.cornerL.jointUSR.rod1.frame_b.f[1]) - rear.cornerL.springArm.frame_a.f[1]
*/
void Heave_eqFunction_3800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3800};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3173]] /* rear.cornerL.jointUSR.revolute.frame_b.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3234]] /* rear.cornerL.jointUSR.rod1.frame_b.f[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3364]] /* rear.cornerL.springArm.frame_a.f[1] variable */);
  TRACE_POP
}

/*
equation index: 3801
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.frame_a.f[1] = -rear.cornerL.jointUSR.revolute.frame_b.f[1]
*/
void Heave_eqFunction_3801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3801};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3324]] /* rear.cornerL.lcaMount.frame_a.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3173]] /* rear.cornerL.jointUSR.revolute.frame_b.f[1] variable */));
  TRACE_POP
}
extern void Heave_eqFunction_8261(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8262(DATA *data, threadData_t *threadData);


/*
equation index: 3804
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_b.t[2] = rear.cornerL.jointUSR.revolute.R_rel.T[3,3] * rear.cornerL.springArm.frame_a.t[2] - rear.cornerL.jointUSR.revolute.R_rel.T[3,2] * rear.cornerL.jointUSR.revolute.frame_b.t[3]
*/
void Heave_eqFunction_3804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3804};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3073]] /* rear.cornerL.jointUSR.frame_b.t[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3371]] /* rear.cornerL.springArm.frame_a.t[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3177]] /* rear.cornerL.jointUSR.revolute.frame_b.t[3] variable */)));
  TRACE_POP
}
extern void Heave_eqFunction_8267(DATA *data, threadData_t *threadData);


/*
equation index: 3806
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_b.t[3] = (-rear.cornerL.jointUSR.revolute.R_rel.T[3,3]) * rear.cornerL.jointUSR.revolute.frame_b.t[3] - rear.cornerL.jointUSR.revolute.R_rel.T[3,2] * rear.cornerL.springArm.frame_a.t[2]
*/
void Heave_eqFunction_3806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3806};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3074]] /* rear.cornerL.jointUSR.frame_b.t[3] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,3] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3177]] /* rear.cornerL.jointUSR.revolute.frame_b.t[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3371]] /* rear.cornerL.springArm.frame_a.t[2] variable */)));
  TRACE_POP
}
extern void Heave_eqFunction_8266(DATA *data, threadData_t *threadData);


/*
equation index: 3808
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.frame_b.f[2] = rear.cornerL.jointUSR.revolute.R_rel.T[3,3] * (rear.cornerL.jointUSR.frame_a.R.T[1,2] * rear.cornerL.jointUSR.rod1.f_b_a[1] + rear.cornerL.jointUSR.frame_a.R.T[2,2] * rear.cornerL.jointUSR.rod1.f_b_a[2] + rear.cornerL.jointUSR.frame_a.R.T[3,2] * rear.cornerL.jointUSR.rod1.f_b_a[3]) - rear.cornerL.jointUSR.revolute.R_rel.T[3,2] * (rear.cornerL.jointUSR.frame_a.R.T[1,3] * rear.cornerL.jointUSR.rod1.f_b_a[1] + rear.cornerL.jointUSR.frame_a.R.T[2,3] * rear.cornerL.jointUSR.rod1.f_b_a[2] + rear.cornerL.jointUSR.frame_a.R.T[3,3] * rear.cornerL.jointUSR.rod1.f_b_a[3])
*/
void Heave_eqFunction_3808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3235]] /* rear.cornerL.jointUSR.rod1.frame_b.f[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,3] variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3059]] /* rear.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3225]] /* rear.cornerL.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* rear.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3226]] /* rear.cornerL.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3065]] /* rear.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3227]] /* rear.cornerL.jointUSR.rod1.f_b_a[3] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* rear.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3225]] /* rear.cornerL.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* rear.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3226]] /* rear.cornerL.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3066]] /* rear.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3227]] /* rear.cornerL.jointUSR.rod1.f_b_a[3] variable */))));
  TRACE_POP
}
extern void Heave_eqFunction_8256(DATA *data, threadData_t *threadData);


/*
equation index: 3810
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.frame_b.f[3] = rear.cornerL.jointUSR.revolute.R_rel.T[3,2] * (rear.cornerL.jointUSR.frame_a.R.T[1,2] * rear.cornerL.jointUSR.rod1.f_b_a[1] + rear.cornerL.jointUSR.frame_a.R.T[2,2] * rear.cornerL.jointUSR.rod1.f_b_a[2] + rear.cornerL.jointUSR.frame_a.R.T[3,2] * rear.cornerL.jointUSR.rod1.f_b_a[3]) + rear.cornerL.jointUSR.revolute.R_rel.T[3,3] * (rear.cornerL.jointUSR.frame_a.R.T[1,3] * rear.cornerL.jointUSR.rod1.f_b_a[1] + rear.cornerL.jointUSR.frame_a.R.T[2,3] * rear.cornerL.jointUSR.rod1.f_b_a[2] + rear.cornerL.jointUSR.frame_a.R.T[3,3] * rear.cornerL.jointUSR.rod1.f_b_a[3])
*/
void Heave_eqFunction_3810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3810};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3236]] /* rear.cornerL.jointUSR.rod1.frame_b.f[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3059]] /* rear.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3225]] /* rear.cornerL.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* rear.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3226]] /* rear.cornerL.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3065]] /* rear.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3227]] /* rear.cornerL.jointUSR.rod1.f_b_a[3] variable */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,3] variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* rear.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3225]] /* rear.cornerL.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* rear.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3226]] /* rear.cornerL.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3066]] /* rear.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3227]] /* rear.cornerL.jointUSR.rod1.f_b_a[3] variable */)));
  TRACE_POP
}
extern void Heave_eqFunction_8254(DATA *data, threadData_t *threadData);


/*
equation index: 3812
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.frame_a.f[2] = (-rear.cornerL.jointUSR.revolute.R_rel.T[3,3]) * rear.cornerL.jointUSR.revolute.frame_b.f[2] - rear.cornerL.jointUSR.revolute.R_rel.T[3,2] * rear.cornerL.jointUSR.revolute.frame_b.f[3]
*/
void Heave_eqFunction_3812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3325]] /* rear.cornerL.lcaMount.frame_a.f[2] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,3] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3174]] /* rear.cornerL.jointUSR.revolute.frame_b.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3175]] /* rear.cornerL.jointUSR.revolute.frame_b.f[3] variable */)));
  TRACE_POP
}

/*
equation index: 3813
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.frame_a.f[3] = rear.cornerL.jointUSR.revolute.R_rel.T[3,2] * rear.cornerL.jointUSR.revolute.frame_b.f[2] - rear.cornerL.jointUSR.revolute.R_rel.T[3,3] * rear.cornerL.jointUSR.revolute.frame_b.f[3]
*/
void Heave_eqFunction_3813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3813};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3326]] /* rear.cornerL.lcaMount.frame_a.f[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3174]] /* rear.cornerL.jointUSR.revolute.frame_b.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3175]] /* rear.cornerL.jointUSR.revolute.frame_b.f[3] variable */)));
  TRACE_POP
}
extern void Heave_eqFunction_8251(DATA *data, threadData_t *threadData);


/*
equation index: 3815
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.frame_b.t[1] = (-rear.cornerL.jointUSR.rod2.frame_a.t[1]) - rear.cornerL.springArm.frame_a.t[1]
*/
void Heave_eqFunction_3815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3815};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3176]] /* rear.cornerL.jointUSR.revolute.frame_b.t[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3305]] /* rear.cornerL.jointUSR.rod2.frame_a.t[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3370]] /* rear.cornerL.springArm.frame_a.t[1] variable */);
  TRACE_POP
}

/*
equation index: 3816
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_b.t[1] = -rear.cornerL.jointUSR.revolute.frame_b.t[1]
*/
void Heave_eqFunction_3816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3816};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3072]] /* rear.cornerL.jointUSR.frame_b.t[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3176]] /* rear.cornerL.jointUSR.revolute.frame_b.t[1] variable */));
  TRACE_POP
}
extern void Heave_eqFunction_8259(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8269(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8270(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8277(DATA *data, threadData_t *threadData);


/*
equation index: 3821
type: SIMPLE_ASSIGN
rear.cornerL.chassisConnect.f[1] = rear.cornerL.springChassis.frame_a.f[1] + rear.cornerL.lcaMount.frame_a.f[1] + rear.cornerL.ucaMount.frame_a.f[1]
*/
void Heave_eqFunction_3821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3821};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2989]] /* rear.cornerL.chassisConnect.f[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* rear.cornerL.springChassis.frame_a.f[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3324]] /* rear.cornerL.lcaMount.frame_a.f[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3646]] /* rear.cornerL.ucaMount.frame_a.f[1] variable */);
  TRACE_POP
}
extern void Heave_eqFunction_8273(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8276(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8271(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8272(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8249(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8274(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8275(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8248(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8280(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8281(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8247(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8278(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8279(DATA *data, threadData_t *threadData);


/*
equation index: 3835
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.rodLength = 0.3590264614203248
*/
void Heave_eqFunction_3835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3835};
  (data->simulationInfo->realParameter[2536] /* rear.cornerR.jointUSR.rod1.rodLength PARAM */) = 0.3590264614203248;
  TRACE_POP
}

/*
equation index: 3836
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.rodShape.length = rear.cornerR.jointUSR.rod1.rodLength
*/
void Heave_eqFunction_3836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3836};
  (data->simulationInfo->realParameter[2538] /* rear.cornerR.jointUSR.rod1.rodShape.length PARAM */) = (data->simulationInfo->realParameter[2536] /* rear.cornerR.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3837
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1Length = rear.cornerR.jointUSR.rod1.rodLength
*/
void Heave_eqFunction_3837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3837};
  (data->simulationInfo->realParameter[2558] /* rear.cornerR.jointUSR.rod1Length PARAM */) = (data->simulationInfo->realParameter[2536] /* rear.cornerR.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3838
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.revolute.lengthConstraint = rear.cornerR.jointUSR.rod1Length
*/
void Heave_eqFunction_3838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3838};
  (data->simulationInfo->realParameter[2504] /* rear.cornerR.jointUSR.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[2558] /* rear.cornerR.jointUSR.rod1Length PARAM */);
  TRACE_POP
}
extern void Heave_eqFunction_7143(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7147(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7148(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7149(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7202(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7203(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7204(DATA *data, threadData_t *threadData);


/*
equation index: 3846
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.revolute.positiveBranch = AlyssaAnimation.Heave.rear.cornerR.jointUSR.revolute.selectBranch(rear.cornerR.jointUSR.revolute.lengthConstraint, {-1.0, 0.0, 0.0}, 0.017453292519943295 * (rear.cornerR.jointUSR.revolute.phi_offset + rear.cornerR.jointUSR.revolute.phi_guess), rear.cornerR.jointUSR.revolute.r_a, rear.cornerR.jointUSR.revolute.r_b)
*/
void Heave_eqFunction_3846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3846};
  real_array tmp126;
  real_array tmp127;
  real_array_create(&tmp126, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4019]] /* rear.cornerR.jointUSR.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp127, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4022]] /* rear.cornerR.jointUSR.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[149] /* rear.cornerR.jointUSR.revolute.positiveBranch PARAM */) = omc_AlyssaAnimation_Heave_rear_cornerR_jointUSR_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[2504] /* rear.cornerR.jointUSR.revolute.lengthConstraint PARAM */), _OMC_LIT25, (0.017453292519943295) * ((data->simulationInfo->realParameter[2509] /* rear.cornerR.jointUSR.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[2508] /* rear.cornerR.jointUSR.revolute.phi_guess PARAM */)), tmp126, tmp127);
  TRACE_POP
}
extern void Heave_eqFunction_7151(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7206(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7150(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7152(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7156(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7157(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7158(DATA *data, threadData_t *threadData);


/*
equation index: 3854
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.revolute.R_rel.T[3,2] = sin(rear.cornerR.jointUSR.revolute.angle)
*/
void Heave_eqFunction_3854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3854};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3991]] /* rear.cornerR.jointUSR.revolute.angle DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3855
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_im.r_0[3] = rear.cornerR.springArm.frame_a.r_0[3] - 0.6199999999999999 * rear.cornerR.jointUSR.revolute.R_rel.T[3,2]
*/
void Heave_eqFunction_3855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3932]] /* rear.cornerR.jointUSR.frame_im.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4203]] /* rear.cornerR.springArm.frame_a.r_0[3] DUMMY_STATE */) - ((0.6199999999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7183(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7184(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7185(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7190(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7191(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7238(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7239(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7240(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7241(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7242(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7243(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7244(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7245(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7246(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7249(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7248(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7247(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7250(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7251(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7253(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7284(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7252(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7285(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7255(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7254(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7259(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7265(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7274(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7260(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7275(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7256(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7258(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7266(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7269(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7268(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7267(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7272(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7277(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7282(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7280(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7278(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7257(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7273(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7276(DATA *data, threadData_t *threadData);


/*
equation index: 3900
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.revolute.A = (-2.0) * (rear.cornerR.tieRod.revolute.r_b[1] * rear.cornerR.tieRod.revolute.r_a[1] + rear.cornerR.tieRod.revolute.r_b[2] * rear.cornerR.tieRod.revolute.r_a[2] + rear.cornerR.tieRod.revolute.r_b[3] * rear.cornerR.tieRod.revolute.r_a[3] - rear.cornerR.tieRod.revolute.e_r_b * rear.cornerR.tieRod.revolute.e_r_a)
*/
void Heave_eqFunction_3900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3900};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4327]] /* rear.cornerR.tieRod.revolute.A DUMMY_STATE */) = (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4375]] /* rear.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4372]] /* rear.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4376]] /* rear.cornerR.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4373]] /* rear.cornerR.tieRod.revolute.r_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4377]] /* rear.cornerR.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4374]] /* rear.cornerR.tieRod.revolute.r_a[3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4358]] /* rear.cornerR.tieRod.revolute.e_r_b DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4357]] /* rear.cornerR.tieRod.revolute.e_r_a DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 3901
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.revolute.B = 2.0 * (rear.cornerR.tieRod.revolute.r_b[1] * (0.222824801502141 * rear.cornerR.tieRod.revolute.r_a[3] + (-0.9748585065718673) * rear.cornerR.tieRod.revolute.r_a[2]) + 0.9748585065718673 * rear.cornerR.tieRod.revolute.r_b[2] * rear.cornerR.tieRod.revolute.r_a[1] + 0.222824801502141 * (-rear.cornerR.tieRod.revolute.r_b[3]) * rear.cornerR.tieRod.revolute.r_a[1])
*/
void Heave_eqFunction_3901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3901};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4328]] /* rear.cornerR.tieRod.revolute.B DUMMY_STATE */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4375]] /* rear.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4374]] /* rear.cornerR.tieRod.revolute.r_a[3] DUMMY_STATE */)) + (-0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4373]] /* rear.cornerR.tieRod.revolute.r_a[2] DUMMY_STATE */))) + (0.9748585065718673) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4376]] /* rear.cornerR.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4372]] /* rear.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */))) + (0.222824801502141) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4377]] /* rear.cornerR.tieRod.revolute.r_b[3] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4372]] /* rear.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */))));
  TRACE_POP
}
extern void Heave_eqFunction_7289(DATA *data, threadData_t *threadData);


/*
equation index: 3903
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.revolute.C = rear.cornerR.tieRod.revolute.r_a[1] ^ 2.0 + rear.cornerR.tieRod.revolute.r_a[2] ^ 2.0 + rear.cornerR.tieRod.revolute.r_a[3] ^ 2.0 + rear.cornerR.tieRod.revolute.r_b[1] ^ 2.0 + rear.cornerR.tieRod.revolute.r_b[2] ^ 2.0 + rear.cornerR.tieRod.revolute.r_b[3] ^ 2.0 + (-2.0) * rear.cornerR.tieRod.revolute.e_r_b * rear.cornerR.tieRod.revolute.e_r_a - rear.cornerR.tieRod.revolute.lengthConstraint ^ 2.0
*/
void Heave_eqFunction_3903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3903};
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_real tmp130;
  modelica_real tmp131;
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  tmp128 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4372]] /* rear.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */);
  tmp129 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4373]] /* rear.cornerR.tieRod.revolute.r_a[2] DUMMY_STATE */);
  tmp130 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4374]] /* rear.cornerR.tieRod.revolute.r_a[3] DUMMY_STATE */);
  tmp131 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4375]] /* rear.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */);
  tmp132 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4376]] /* rear.cornerR.tieRod.revolute.r_b[2] DUMMY_STATE */);
  tmp133 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4377]] /* rear.cornerR.tieRod.revolute.r_b[3] DUMMY_STATE */);
  tmp134 = (data->simulationInfo->realParameter[2821] /* rear.cornerR.tieRod.revolute.lengthConstraint PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4329]] /* rear.cornerR.tieRod.revolute.C DUMMY_STATE */) = (tmp128 * tmp128) + (tmp129 * tmp129) + (tmp130 * tmp130) + (tmp131 * tmp131) + (tmp132 * tmp132) + (tmp133 * tmp133) + (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4358]] /* rear.cornerR.tieRod.revolute.e_r_b DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4357]] /* rear.cornerR.tieRod.revolute.e_r_a DUMMY_STATE */))) - ((tmp134 * tmp134));
  TRACE_POP
}
extern void Heave_eqFunction_7290(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7291(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7292(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7261(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7264(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7283(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7263(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7281(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7262(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7279(DATA *data, threadData_t *threadData);


/*
equation index: 3914
type: SIMPLE_ASSIGN
points[4,11,2] = rear.cornerR.springArm.frame_a.r_0[2] + 0.47000000000000003 * rear.cornerR.jointUSR.revolute.R_rel.T[3,3] + (-0.009999999999999981) * rear.cornerR.jointUSR.revolute.R_rel.T[3,2]
*/
void Heave_eqFunction_3914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3914};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2978]] /* points[4,11,2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4202]] /* rear.cornerR.springArm.frame_a.r_0[2] DUMMY_STATE */) + (0.47000000000000003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3987]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) + (-0.009999999999999981) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3915
type: SIMPLE_ASSIGN
rear.cornerR.coilover.r_rel_0[2] = points[4,11,2] - points[4,10,2]
*/
void Heave_eqFunction_3915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3915};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3849]] /* rear.cornerR.coilover.r_rel_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2978]] /* points[4,11,2] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2975]] /* points[4,10,2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3916
type: SIMPLE_ASSIGN
rear.cornerR.coilover.r_rel_a[2] = rear.cornerR.coilover.r_rel_0[2]
*/
void Heave_eqFunction_3916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3916};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3852]] /* rear.cornerR.coilover.r_rel_a[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3849]] /* rear.cornerR.coilover.r_rel_0[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3917
type: SIMPLE_ASSIGN
points[4,11,3] = rear.cornerR.springArm.frame_a.r_0[3] + (-0.009999999999999981) * rear.cornerR.jointUSR.revolute.R_rel.T[3,3] - 0.47000000000000003 * rear.cornerR.jointUSR.revolute.R_rel.T[3,2]
*/
void Heave_eqFunction_3917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3917};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2979]] /* points[4,11,3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4203]] /* rear.cornerR.springArm.frame_a.r_0[3] DUMMY_STATE */) + (-0.009999999999999981) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3987]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) - ((0.47000000000000003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3918
type: SIMPLE_ASSIGN
rear.cornerR.coilover.r_rel_0[3] = points[4,11,3] - points[4,10,3]
*/
void Heave_eqFunction_3918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3918};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3850]] /* rear.cornerR.coilover.r_rel_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2979]] /* points[4,11,3] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2976]] /* points[4,10,3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3919
type: SIMPLE_ASSIGN
rear.cornerR.coilover.length = sqrt(rear.cornerR.coilover.r_rel_0 * rear.cornerR.coilover.r_rel_0)
*/
void Heave_eqFunction_3919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3919};
  real_array tmp135;
  real_array tmp136;
  modelica_real tmp137;
  real_array_create(&tmp135, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3848]] /* rear.cornerR.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp136, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3848]] /* rear.cornerR.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  tmp137 = mul_real_scalar_product(tmp135, tmp136);
  if(!(tmp137 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rear.cornerR.coilover.r_rel_0 * rear.cornerR.coilover.r_rel_0) was %g should be >= 0", tmp137);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3846]] /* rear.cornerR.coilover.length DUMMY_STATE */) = sqrt(tmp137);
  TRACE_POP
}

/*
equation index: 3920
type: SIMPLE_ASSIGN
rear.cornerR.coilover.s = Modelica.Mechanics.MultiBody.Frames.Internal.maxWithoutEvent(rear.cornerR.coilover.length, rear.cornerR.coilover.s_small)
*/
void Heave_eqFunction_3920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3920};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* rear.cornerR.coilover.s DUMMY_STATE */) = omc_Modelica_Mechanics_MultiBody_Frames_Internal_maxWithoutEvent(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3846]] /* rear.cornerR.coilover.length DUMMY_STATE */), (data->simulationInfo->realParameter[2382] /* rear.cornerR.coilover.s_small PARAM */));
  TRACE_POP
}

/*
equation index: 3921
type: SIMPLE_ASSIGN
telemetry[4,4] = rear.cornerR.coilover.s
*/
void Heave_eqFunction_3921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3921};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4745]] /* telemetry[4,4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* rear.cornerR.coilover.s DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3922
type: SIMPLE_ASSIGN
rear.cornerR.coilover.e_a[1] = rear.cornerR.coilover.r_rel_a[1] / rear.cornerR.coilover.s
*/
void Heave_eqFunction_3922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3922};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3832]] /* rear.cornerR.coilover.e_a[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* rear.cornerR.coilover.r_rel_a[1] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* rear.cornerR.coilover.s DUMMY_STATE */),"rear.cornerR.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 3923
type: SIMPLE_ASSIGN
rear.cornerR.coilover.shape_b.r_shape[1] = rear.cornerR.coilover.e_a[1] * min(rear.cornerR.coilover.length_a, rear.cornerR.coilover.s)
*/
void Heave_eqFunction_3923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3923};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3882]] /* rear.cornerR.coilover.shape_b.r_shape[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3832]] /* rear.cornerR.coilover.e_a[1] variable */)) * (fmin((data->simulationInfo->realParameter[2381] /* rear.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* rear.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3924
type: SIMPLE_ASSIGN
rear.cornerR.coilover.e_a[2] = rear.cornerR.coilover.r_rel_a[2] / rear.cornerR.coilover.s
*/
void Heave_eqFunction_3924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3924};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* rear.cornerR.coilover.e_a[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3852]] /* rear.cornerR.coilover.r_rel_a[2] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* rear.cornerR.coilover.s DUMMY_STATE */),"rear.cornerR.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 3925
type: SIMPLE_ASSIGN
rear.cornerR.coilover.shape_b.r_shape[2] = rear.cornerR.coilover.e_a[2] * min(rear.cornerR.coilover.length_a, rear.cornerR.coilover.s)
*/
void Heave_eqFunction_3925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3925};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3883]] /* rear.cornerR.coilover.shape_b.r_shape[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3833]] /* rear.cornerR.coilover.e_a[2] variable */)) * (fmin((data->simulationInfo->realParameter[2381] /* rear.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* rear.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3926
type: SIMPLE_ASSIGN
rear.cornerR.coilover.e_rel_0[1] = rear.cornerR.coilover.r_rel_0[1] / rear.cornerR.coilover.s
*/
void Heave_eqFunction_3926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3926};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3835]] /* rear.cornerR.coilover.e_rel_0[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3848]] /* rear.cornerR.coilover.r_rel_0[1] DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* rear.cornerR.coilover.s DUMMY_STATE */),"rear.cornerR.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 3927
type: SIMPLE_ASSIGN
rear.cornerR.coilover.e_rel_0[2] = rear.cornerR.coilover.r_rel_0[2] / rear.cornerR.coilover.s
*/
void Heave_eqFunction_3927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3927};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3836]] /* rear.cornerR.coilover.e_rel_0[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3849]] /* rear.cornerR.coilover.r_rel_0[2] DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* rear.cornerR.coilover.s DUMMY_STATE */),"rear.cornerR.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 3928
type: SIMPLE_ASSIGN
rear.cornerR.coilover.shape_a.length = min(rear.cornerR.coilover.length_a, rear.cornerR.coilover.s)
*/
void Heave_eqFunction_3928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3928};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3870]] /* rear.cornerR.coilover.shape_a.length variable */) = fmin((data->simulationInfo->realParameter[2381] /* rear.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* rear.cornerR.coilover.s DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3929
type: SIMPLE_ASSIGN
rear.cornerR.coilover.shape_b.length = max(rear.cornerR.coilover.s - rear.cornerR.coilover.length_a, 0.0)
*/
void Heave_eqFunction_3929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3929};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3881]] /* rear.cornerR.coilover.shape_b.length variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* rear.cornerR.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[2381] /* rear.cornerR.coilover.length_a PARAM */),0.0);
  TRACE_POP
}

/*
equation index: 3930
type: SIMPLE_ASSIGN
rear.cornerR.coilover.r_rel_a[3] = rear.cornerR.coilover.r_rel_0[3]
*/
void Heave_eqFunction_3930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3930};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3853]] /* rear.cornerR.coilover.r_rel_a[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3850]] /* rear.cornerR.coilover.r_rel_0[3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3931
type: SIMPLE_ASSIGN
rear.cornerR.coilover.e_a[3] = rear.cornerR.coilover.r_rel_a[3] / rear.cornerR.coilover.s
*/
void Heave_eqFunction_3931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3931};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3834]] /* rear.cornerR.coilover.e_a[3] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3853]] /* rear.cornerR.coilover.r_rel_a[3] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* rear.cornerR.coilover.s DUMMY_STATE */),"rear.cornerR.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 3932
type: SIMPLE_ASSIGN
rear.cornerR.coilover.shape_b.r_shape[3] = rear.cornerR.coilover.e_a[3] * min(rear.cornerR.coilover.length_a, rear.cornerR.coilover.s)
*/
void Heave_eqFunction_3932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3932};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3884]] /* rear.cornerR.coilover.shape_b.r_shape[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3834]] /* rear.cornerR.coilover.e_a[3] variable */)) * (fmin((data->simulationInfo->realParameter[2381] /* rear.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* rear.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3933
type: SIMPLE_ASSIGN
rear.cornerR.coilover.e_rel_0[3] = rear.cornerR.coilover.r_rel_0[3] / rear.cornerR.coilover.s
*/
void Heave_eqFunction_3933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3933};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3837]] /* rear.cornerR.coilover.e_rel_0[3] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3850]] /* rear.cornerR.coilover.r_rel_0[3] DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* rear.cornerR.coilover.s DUMMY_STATE */),"rear.cornerR.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 3934
type: SIMPLE_ASSIGN
view[4].spring.shape.length = sqrt(rear.cornerR.coilover.r_rel_0[1] ^ 2.0 + rear.cornerR.coilover.r_rel_0[2] ^ 2.0 + rear.cornerR.coilover.r_rel_0[3] ^ 2.0)
*/
void Heave_eqFunction_3934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3934};
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  modelica_real tmp141;
  tmp138 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3848]] /* rear.cornerR.coilover.r_rel_0[1] DUMMY_STATE */);
  tmp139 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3849]] /* rear.cornerR.coilover.r_rel_0[2] DUMMY_STATE */);
  tmp140 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3850]] /* rear.cornerR.coilover.r_rel_0[3] DUMMY_STATE */);
  tmp141 = (tmp138 * tmp138) + (tmp139 * tmp139) + (tmp140 * tmp140);
  if(!(tmp141 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rear.cornerR.coilover.r_rel_0[1] ^ 2.0 + rear.cornerR.coilover.r_rel_0[2] ^ 2.0 + rear.cornerR.coilover.r_rel_0[3] ^ 2.0) was %g should be >= 0", tmp141);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5089]] /* view[4].spring.shape.length variable */) = sqrt(tmp141);
  TRACE_POP
}

/*
equation index: 3935
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.aux = (-0.6199999999999999) * (rear.cornerR.jointUSR.revolute.R_rel.T[3,2] * (rear.cornerR.jointUSR.frame_a.R.T[1,2] * rear.cornerR.jointUSR.rod1.eRod_a[1] + rear.cornerR.jointUSR.frame_a.R.T[2,2] * rear.cornerR.jointUSR.rod1.eRod_a[2] + rear.cornerR.jointUSR.frame_a.R.T[3,2] * rear.cornerR.jointUSR.rod1.eRod_a[3]) + rear.cornerR.jointUSR.revolute.R_rel.T[3,3] * (rear.cornerR.jointUSR.frame_a.R.T[1,3] * rear.cornerR.jointUSR.rod1.eRod_a[1] + rear.cornerR.jointUSR.frame_a.R.T[2,3] * rear.cornerR.jointUSR.rod1.eRod_a[2] + rear.cornerR.jointUSR.frame_a.R.T[3,3] * rear.cornerR.jointUSR.rod1.eRod_a[3]))
*/
void Heave_eqFunction_3935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3935};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3888]] /* rear.cornerR.jointUSR.aux variable */) = (-0.6199999999999999) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3893]] /* rear.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4056]] /* rear.cornerR.jointUSR.rod1.eRod_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3896]] /* rear.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4057]] /* rear.cornerR.jointUSR.rod1.eRod_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* rear.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4058]] /* rear.cornerR.jointUSR.rod1.eRod_a[3] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3987]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* rear.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4056]] /* rear.cornerR.jointUSR.rod1.eRod_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3897]] /* rear.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4057]] /* rear.cornerR.jointUSR.rod1.eRod_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* rear.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4058]] /* rear.cornerR.jointUSR.rod1.eRod_a[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Heave_eqFunction_7182(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7205(DATA *data, threadData_t *threadData);


/*
equation index: 3938
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.revolute.angle = if noEvent(rear.cornerR.jointUSR.revolute.kcos_angle == 0.0) then rear.cornerR.jointUSR.revolute.kcos_angle else ($DER.rear.cornerR.jointUSR.revolute.ksin_angle * rear.cornerR.jointUSR.revolute.kcos_angle - rear.cornerR.jointUSR.revolute.ksin_angle * $DER.rear.cornerR.jointUSR.revolute.kcos_angle) / (rear.cornerR.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (rear.cornerR.jointUSR.revolute.ksin_angle / rear.cornerR.jointUSR.revolute.kcos_angle) ^ 2.0))
*/
void Heave_eqFunction_3938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3938};
  modelica_real tmp142;
  modelica_real tmp143;
  modelica_boolean tmp144;
  modelica_real tmp145;
  tmp144 = (modelica_boolean)((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4016]] /* rear.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */) == 0.0);
  if(tmp144)
  {
    tmp145 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4016]] /* rear.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */);
  }
  else
  {
    tmp142 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4016]] /* rear.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */);
    tmp143 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4017]] /* rear.cornerR.jointUSR.revolute.ksin_angle DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4016]] /* rear.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */),"rear.cornerR.jointUSR.revolute.kcos_angle",equationIndexes);
    tmp145 = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[742]] /* der(rear.cornerR.jointUSR.revolute.ksin_angle) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4016]] /* rear.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4017]] /* rear.cornerR.jointUSR.revolute.ksin_angle DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[741]] /* der(rear.cornerR.jointUSR.revolute.kcos_angle) DUMMY_DER */))),((tmp142 * tmp142)) * (1.0 + (tmp143 * tmp143)),"rear.cornerR.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (rear.cornerR.jointUSR.revolute.ksin_angle / rear.cornerR.jointUSR.revolute.kcos_angle) ^ 2.0)",equationIndexes);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* der(rear.cornerR.jointUSR.revolute.angle) DUMMY_DER */) = tmp145;
  TRACE_POP
}

/*
equation index: 3939
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.revolute.R_rel.w[1] = -$DER.rear.cornerR.jointUSR.revolute.angle
*/
void Heave_eqFunction_3939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3939};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3988]] /* rear.cornerR.jointUSR.revolute.R_rel.w[1] DUMMY_STATE */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* der(rear.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_7235(DATA *data, threadData_t *threadData);


/*
equation index: 3941
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.frame_im.r_0[2] = $DER.rear.cornerR.springArm.frame_a.r_0[2] + 0.6199999999999999 * rear.cornerR.jointUSR.revolute.R_rel.T[3,2] * rear.cornerR.springArm.frame_b.R.w[1]
*/
void Heave_eqFunction_3941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3941};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[728]] /* der(rear.cornerR.jointUSR.frame_im.r_0[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* der(rear.cornerR.springArm.frame_a.r_0[2]) DUMMY_DER */) + (0.6199999999999999) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4212]] /* rear.cornerR.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7236(DATA *data, threadData_t *threadData);


/*
equation index: 3943
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.frame_im.r_0[3] = $DER.rear.cornerR.springArm.frame_a.r_0[3] + 0.6199999999999999 * rear.cornerR.jointUSR.revolute.R_rel.T[3,3] * rear.cornerR.springArm.frame_b.R.w[1]
*/
void Heave_eqFunction_3943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3943};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[729]] /* der(rear.cornerR.jointUSR.frame_im.r_0[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* der(rear.cornerR.springArm.frame_a.r_0[3]) DUMMY_DER */) + (0.6199999999999999) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3987]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4212]] /* rear.cornerR.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7209(DATA *data, threadData_t *threadData);


/*
equation index: 3945
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.der_rRod_a_L[1] = (rear.cornerR.jointUSR.frame_a.R.T[1,1] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[1] + rear.cornerR.jointUSR.frame_a.R.T[1,2] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[2] + rear.cornerR.jointUSR.frame_a.R.T[1,3] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[3] + rear.cornerR.jointUSR.frame_a.R.w[3] * rear.cornerR.jointUSR.rod1.rRod_a[2] - rear.cornerR.jointUSR.frame_a.R.w[2] * rear.cornerR.jointUSR.rod1.rRod_a[3]) / rear.cornerR.jointUSR.rod1.rodLength
*/
void Heave_eqFunction_3945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3945};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4047]] /* rear.cornerR.jointUSR.rod1.der_rRod_a_L[1] DUMMY_STATE */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3892]] /* rear.cornerR.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3893]] /* rear.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* rear.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3903]] /* rear.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4081]] /* rear.cornerR.jointUSR.rod1.rRod_a[2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3902]] /* rear.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4082]] /* rear.cornerR.jointUSR.rod1.rRod_a[3] DUMMY_STATE */))),(data->simulationInfo->realParameter[2536] /* rear.cornerR.jointUSR.rod1.rodLength PARAM */),"rear.cornerR.jointUSR.rod1.rodLength",equationIndexes);
  TRACE_POP
}

/*
equation index: 3946
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.der_rRod_a_L[2] = (rear.cornerR.jointUSR.frame_a.R.T[2,1] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[1] + rear.cornerR.jointUSR.frame_a.R.T[2,2] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[2] + rear.cornerR.jointUSR.frame_a.R.T[2,3] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[3] + rear.cornerR.jointUSR.frame_a.R.w[1] * rear.cornerR.jointUSR.rod1.rRod_a[3] - rear.cornerR.jointUSR.frame_a.R.w[3] * rear.cornerR.jointUSR.rod1.rRod_a[1]) / rear.cornerR.jointUSR.rod1.rodLength
*/
void Heave_eqFunction_3946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3946};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4048]] /* rear.cornerR.jointUSR.rod1.der_rRod_a_L[2] DUMMY_STATE */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3895]] /* rear.cornerR.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3896]] /* rear.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3897]] /* rear.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3901]] /* rear.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4082]] /* rear.cornerR.jointUSR.rod1.rRod_a[3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3903]] /* rear.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4080]] /* rear.cornerR.jointUSR.rod1.rRod_a[1] DUMMY_STATE */))),(data->simulationInfo->realParameter[2536] /* rear.cornerR.jointUSR.rod1.rodLength PARAM */),"rear.cornerR.jointUSR.rod1.rodLength",equationIndexes);
  TRACE_POP
}

/*
equation index: 3947
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.der_rRod_a_L[3] = (rear.cornerR.jointUSR.frame_a.R.T[3,1] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[1] + rear.cornerR.jointUSR.frame_a.R.T[3,2] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[2] + rear.cornerR.jointUSR.frame_a.R.T[3,3] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[3] + rear.cornerR.jointUSR.frame_a.R.w[2] * rear.cornerR.jointUSR.rod1.rRod_a[1] - rear.cornerR.jointUSR.frame_a.R.w[1] * rear.cornerR.jointUSR.rod1.rRod_a[2]) / rear.cornerR.jointUSR.rod1.rodLength
*/
void Heave_eqFunction_3947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3947};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4049]] /* rear.cornerR.jointUSR.rod1.der_rRod_a_L[3] DUMMY_STATE */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3898]] /* rear.cornerR.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* rear.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* rear.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3902]] /* rear.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4080]] /* rear.cornerR.jointUSR.rod1.rRod_a[1] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3901]] /* rear.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4081]] /* rear.cornerR.jointUSR.rod1.rRod_a[2] DUMMY_STATE */))),(data->simulationInfo->realParameter[2536] /* rear.cornerR.jointUSR.rod1.rodLength PARAM */),"rear.cornerR.jointUSR.rod1.rodLength",equationIndexes);
  TRACE_POP
}
extern void Heave_eqFunction_7375(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7376(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7374(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7382(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7383(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7379(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7380(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7384(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7377(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7378(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7381(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7385(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7387(DATA *data, threadData_t *threadData);


/*
equation index: 3961
type: SIMPLE_ASSIGN
$DER.rear.cornerR.tieRod.revolute.A = (-2.0) * (rear.cornerR.tieRod.revolute.r_b[1] * $DER.rear.cornerR.tieRod.revolute.r_a[1] + $DER.rear.cornerR.tieRod.revolute.r_b[1] * rear.cornerR.tieRod.revolute.r_a[1] + rear.cornerR.tieRod.revolute.r_b[2] * $DER.rear.cornerR.tieRod.revolute.r_a[2] + $DER.rear.cornerR.tieRod.revolute.r_b[2] * rear.cornerR.tieRod.revolute.r_a[2] + rear.cornerR.tieRod.revolute.r_b[3] * $DER.rear.cornerR.tieRod.revolute.r_a[3] + $DER.rear.cornerR.tieRod.revolute.r_b[3] * rear.cornerR.tieRod.revolute.r_a[3] + (-rear.cornerR.tieRod.revolute.e_r_b) * $DER.rear.cornerR.tieRod.revolute.e_r_a - $DER.rear.cornerR.tieRod.revolute.e_r_b * rear.cornerR.tieRod.revolute.e_r_a)
*/
void Heave_eqFunction_3961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3961};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[787]] /* der(rear.cornerR.tieRod.revolute.A) DUMMY_DER */) = (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4375]] /* rear.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* der(rear.cornerR.tieRod.revolute.r_a[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* der(rear.cornerR.tieRod.revolute.r_b[1]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4372]] /* rear.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4376]] /* rear.cornerR.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* der(rear.cornerR.tieRod.revolute.r_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* der(rear.cornerR.tieRod.revolute.r_b[2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4373]] /* rear.cornerR.tieRod.revolute.r_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4377]] /* rear.cornerR.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* der(rear.cornerR.tieRod.revolute.r_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* der(rear.cornerR.tieRod.revolute.r_b[3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4374]] /* rear.cornerR.tieRod.revolute.r_a[3] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4358]] /* rear.cornerR.tieRod.revolute.e_r_b DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* der(rear.cornerR.tieRod.revolute.e_r_a) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* der(rear.cornerR.tieRod.revolute.e_r_b) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4357]] /* rear.cornerR.tieRod.revolute.e_r_a DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 3962
type: SIMPLE_ASSIGN
$DER.rear.cornerR.tieRod.revolute.B = 2.0 * (rear.cornerR.tieRod.revolute.r_b[1] * (0.222824801502141 * $DER.rear.cornerR.tieRod.revolute.r_a[3] + (-0.9748585065718673) * $DER.rear.cornerR.tieRod.revolute.r_a[2]) + $DER.rear.cornerR.tieRod.revolute.r_b[1] * (0.222824801502141 * rear.cornerR.tieRod.revolute.r_a[3] + (-0.9748585065718673) * rear.cornerR.tieRod.revolute.r_a[2]) + 0.9748585065718673 * (rear.cornerR.tieRod.revolute.r_b[2] * $DER.rear.cornerR.tieRod.revolute.r_a[1] + $DER.rear.cornerR.tieRod.revolute.r_b[2] * rear.cornerR.tieRod.revolute.r_a[1]) + 0.222824801502141 * ((-rear.cornerR.tieRod.revolute.r_b[3]) * $DER.rear.cornerR.tieRod.revolute.r_a[1] - $DER.rear.cornerR.tieRod.revolute.r_b[3] * rear.cornerR.tieRod.revolute.r_a[1]))
*/
void Heave_eqFunction_3962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3962};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[788]] /* der(rear.cornerR.tieRod.revolute.B) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4375]] /* rear.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* der(rear.cornerR.tieRod.revolute.r_a[3]) DUMMY_DER */)) + (-0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* der(rear.cornerR.tieRod.revolute.r_a[2]) DUMMY_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* der(rear.cornerR.tieRod.revolute.r_b[1]) DUMMY_DER */)) * ((0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4374]] /* rear.cornerR.tieRod.revolute.r_a[3] DUMMY_STATE */)) + (-0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4373]] /* rear.cornerR.tieRod.revolute.r_a[2] DUMMY_STATE */))) + (0.9748585065718673) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4376]] /* rear.cornerR.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* der(rear.cornerR.tieRod.revolute.r_a[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* der(rear.cornerR.tieRod.revolute.r_b[2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4372]] /* rear.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */))) + (0.222824801502141) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4377]] /* rear.cornerR.tieRod.revolute.r_b[3] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* der(rear.cornerR.tieRod.revolute.r_a[1]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* der(rear.cornerR.tieRod.revolute.r_b[3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4372]] /* rear.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */)))));
  TRACE_POP
}
extern void Heave_eqFunction_7390(DATA *data, threadData_t *threadData);


/*
equation index: 3964
type: SIMPLE_ASSIGN
$DER.rear.cornerR.tieRod.revolute.C = 2.0 * rear.cornerR.tieRod.revolute.r_a[1] * $DER.rear.cornerR.tieRod.revolute.r_a[1] + 2.0 * rear.cornerR.tieRod.revolute.r_a[2] * $DER.rear.cornerR.tieRod.revolute.r_a[2] + 2.0 * rear.cornerR.tieRod.revolute.r_a[3] * $DER.rear.cornerR.tieRod.revolute.r_a[3] + 2.0 * rear.cornerR.tieRod.revolute.r_b[1] * $DER.rear.cornerR.tieRod.revolute.r_b[1] + 2.0 * rear.cornerR.tieRod.revolute.r_b[2] * $DER.rear.cornerR.tieRod.revolute.r_b[2] + 2.0 * rear.cornerR.tieRod.revolute.r_b[3] * $DER.rear.cornerR.tieRod.revolute.r_b[3] + (-2.0) * (rear.cornerR.tieRod.revolute.e_r_b * $DER.rear.cornerR.tieRod.revolute.e_r_a + $DER.rear.cornerR.tieRod.revolute.e_r_b * rear.cornerR.tieRod.revolute.e_r_a)
*/
void Heave_eqFunction_3964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3964};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[789]] /* der(rear.cornerR.tieRod.revolute.C) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4372]] /* rear.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[810]] /* der(rear.cornerR.tieRod.revolute.r_a[1]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4373]] /* rear.cornerR.tieRod.revolute.r_a[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[811]] /* der(rear.cornerR.tieRod.revolute.r_a[2]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4374]] /* rear.cornerR.tieRod.revolute.r_a[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[812]] /* der(rear.cornerR.tieRod.revolute.r_a[3]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4375]] /* rear.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[813]] /* der(rear.cornerR.tieRod.revolute.r_b[1]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4376]] /* rear.cornerR.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* der(rear.cornerR.tieRod.revolute.r_b[2]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4377]] /* rear.cornerR.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* der(rear.cornerR.tieRod.revolute.r_b[3]) DUMMY_DER */))) + (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4358]] /* rear.cornerR.tieRod.revolute.e_r_b DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[802]] /* der(rear.cornerR.tieRod.revolute.e_r_a) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* der(rear.cornerR.tieRod.revolute.e_r_b) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4357]] /* rear.cornerR.tieRod.revolute.e_r_a DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7391(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7392(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7393(DATA *data, threadData_t *threadData);


/*
equation index: 3968
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.rod1.rRod_a[1] = rear.cornerR.jointUSR.frame_a.R.T[1,1] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[1] + rear.cornerR.jointUSR.frame_a.R.T[1,2] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[2] + rear.cornerR.jointUSR.frame_a.R.T[1,3] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[3] + rear.cornerR.jointUSR.frame_a.R.w[3] * (rear.cornerR.jointUSR.frame_a.R.T[2,1] * rear.cornerR.jointUSR.rod1.rRod_0[1] + rear.cornerR.jointUSR.frame_a.R.T[2,2] * rear.cornerR.jointUSR.rod1.rRod_0[2] + rear.cornerR.jointUSR.frame_a.R.T[2,3] * rear.cornerR.jointUSR.rod1.rRod_0[3]) - rear.cornerR.jointUSR.frame_a.R.w[2] * (rear.cornerR.jointUSR.frame_a.R.T[3,1] * rear.cornerR.jointUSR.rod1.rRod_0[1] + rear.cornerR.jointUSR.frame_a.R.T[3,2] * rear.cornerR.jointUSR.rod1.rRod_0[2] + rear.cornerR.jointUSR.frame_a.R.T[3,3] * rear.cornerR.jointUSR.rod1.rRod_0[3])
*/
void Heave_eqFunction_3968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3968};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[777]] /* der(rear.cornerR.jointUSR.rod1.rRod_a[1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3892]] /* rear.cornerR.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3893]] /* rear.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* rear.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3903]] /* rear.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3895]] /* rear.cornerR.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4077]] /* rear.cornerR.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3896]] /* rear.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4078]] /* rear.cornerR.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3897]] /* rear.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4079]] /* rear.cornerR.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3902]] /* rear.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3898]] /* rear.cornerR.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4077]] /* rear.cornerR.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* rear.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4078]] /* rear.cornerR.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* rear.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4079]] /* rear.cornerR.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Heave_eqFunction_7428(DATA *data, threadData_t *threadData);


/*
equation index: 3970
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.rod1.rRod_a[2] = rear.cornerR.jointUSR.frame_a.R.T[2,1] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[1] + rear.cornerR.jointUSR.frame_a.R.T[2,2] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[2] + rear.cornerR.jointUSR.frame_a.R.T[2,3] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[3] + rear.cornerR.jointUSR.frame_a.R.w[1] * (rear.cornerR.jointUSR.frame_a.R.T[3,1] * rear.cornerR.jointUSR.rod1.rRod_0[1] + rear.cornerR.jointUSR.frame_a.R.T[3,2] * rear.cornerR.jointUSR.rod1.rRod_0[2] + rear.cornerR.jointUSR.frame_a.R.T[3,3] * rear.cornerR.jointUSR.rod1.rRod_0[3]) - rear.cornerR.jointUSR.frame_a.R.w[3] * (rear.cornerR.jointUSR.frame_a.R.T[1,1] * rear.cornerR.jointUSR.rod1.rRod_0[1] + rear.cornerR.jointUSR.frame_a.R.T[1,2] * rear.cornerR.jointUSR.rod1.rRod_0[2] + rear.cornerR.jointUSR.frame_a.R.T[1,3] * rear.cornerR.jointUSR.rod1.rRod_0[3])
*/
void Heave_eqFunction_3970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3970};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[778]] /* der(rear.cornerR.jointUSR.rod1.rRod_a[2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3895]] /* rear.cornerR.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3896]] /* rear.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3897]] /* rear.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3901]] /* rear.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3898]] /* rear.cornerR.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4077]] /* rear.cornerR.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* rear.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4078]] /* rear.cornerR.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* rear.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4079]] /* rear.cornerR.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3903]] /* rear.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3892]] /* rear.cornerR.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4077]] /* rear.cornerR.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3893]] /* rear.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4078]] /* rear.cornerR.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* rear.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4079]] /* rear.cornerR.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Heave_eqFunction_7430(DATA *data, threadData_t *threadData);


/*
equation index: 3972
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.rod1.rRod_a[3] = rear.cornerR.jointUSR.frame_a.R.T[3,1] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[1] + rear.cornerR.jointUSR.frame_a.R.T[3,2] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[2] + rear.cornerR.jointUSR.frame_a.R.T[3,3] * $DER.rear.cornerR.jointUSR.rod1.rRod_0[3] + rear.cornerR.jointUSR.frame_a.R.w[2] * (rear.cornerR.jointUSR.frame_a.R.T[1,1] * rear.cornerR.jointUSR.rod1.rRod_0[1] + rear.cornerR.jointUSR.frame_a.R.T[1,2] * rear.cornerR.jointUSR.rod1.rRod_0[2] + rear.cornerR.jointUSR.frame_a.R.T[1,3] * rear.cornerR.jointUSR.rod1.rRod_0[3]) - rear.cornerR.jointUSR.frame_a.R.w[1] * (rear.cornerR.jointUSR.frame_a.R.T[2,1] * rear.cornerR.jointUSR.rod1.rRod_0[1] + rear.cornerR.jointUSR.frame_a.R.T[2,2] * rear.cornerR.jointUSR.rod1.rRod_0[2] + rear.cornerR.jointUSR.frame_a.R.T[2,3] * rear.cornerR.jointUSR.rod1.rRod_0[3])
*/
void Heave_eqFunction_3972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[779]] /* der(rear.cornerR.jointUSR.rod1.rRod_a[3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3898]] /* rear.cornerR.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* rear.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[775]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* rear.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[776]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3902]] /* rear.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3892]] /* rear.cornerR.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4077]] /* rear.cornerR.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3893]] /* rear.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4078]] /* rear.cornerR.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* rear.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4079]] /* rear.cornerR.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3901]] /* rear.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3895]] /* rear.cornerR.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4077]] /* rear.cornerR.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3896]] /* rear.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4078]] /* rear.cornerR.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3897]] /* rear.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4079]] /* rear.cornerR.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Heave_eqFunction_7432(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7433(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7434(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7435(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7436(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7437(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7438(DATA *data, threadData_t *threadData);


/*
equation index: 3980
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.rod1.R_rel_ia.T[1,3] = rear.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] * $DER.rear.cornerR.jointUSR.rod1.e2_a[3] + $DER.rear.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] * rear.cornerR.jointUSR.rod1.e2_a[3] + rear.cornerR.jointUSR.rod1.e3_ia[1] * $DER.rear.cornerR.jointUSR.rod1.e3_a[3]
*/
void Heave_eqFunction_3980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3980};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[748]] /* der(rear.cornerR.jointUSR.rod1.R_rel_ia.T[1,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4038]] /* rear.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* der(rear.cornerR.jointUSR.rod1.e2_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* der(rear.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4052]] /* rear.cornerR.jointUSR.rod1.e2_a[3] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[2521] /* rear.cornerR.jointUSR.rod1.e3_ia[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* der(rear.cornerR.jointUSR.rod1.e3_a[3]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3981
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.rod1.R_rel_ia.T[1,2] = rear.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] * $DER.rear.cornerR.jointUSR.rod1.e2_a[2] + $DER.rear.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] * rear.cornerR.jointUSR.rod1.e2_a[2] + rear.cornerR.jointUSR.rod1.e3_ia[1] * $DER.rear.cornerR.jointUSR.rod1.e3_a[2]
*/
void Heave_eqFunction_3981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3981};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[747]] /* der(rear.cornerR.jointUSR.rod1.R_rel_ia.T[1,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4038]] /* rear.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* der(rear.cornerR.jointUSR.rod1.e2_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[758]] /* der(rear.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4051]] /* rear.cornerR.jointUSR.rod1.e2_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[2521] /* rear.cornerR.jointUSR.rod1.e3_ia[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* der(rear.cornerR.jointUSR.rod1.e3_a[2]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3982
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.rod1.R_rel_ia.T[2,2] = 0.222824801502141 * $DER.rear.cornerR.jointUSR.rod1.eRod_a[2] + rear.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] * $DER.rear.cornerR.jointUSR.rod1.e2_a[2] + $DER.rear.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] * rear.cornerR.jointUSR.rod1.e2_a[2] + rear.cornerR.jointUSR.rod1.e3_ia[2] * $DER.rear.cornerR.jointUSR.rod1.e3_a[2]
*/
void Heave_eqFunction_3982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3982};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[750]] /* der(rear.cornerR.jointUSR.rod1.R_rel_ia.T[2,2]) DUMMY_DER */) = (0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* der(rear.cornerR.jointUSR.rod1.eRod_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4040]] /* rear.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* der(rear.cornerR.jointUSR.rod1.e2_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* der(rear.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4051]] /* rear.cornerR.jointUSR.rod1.e2_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[2522] /* rear.cornerR.jointUSR.rod1.e3_ia[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* der(rear.cornerR.jointUSR.rod1.e3_a[2]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3983
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.rod1.R_rel_ia.T[3,2] = 0.9748585065718673 * $DER.rear.cornerR.jointUSR.rod1.eRod_a[2] + rear.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] * $DER.rear.cornerR.jointUSR.rod1.e2_a[2] + $DER.rear.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] * rear.cornerR.jointUSR.rod1.e2_a[2] + rear.cornerR.jointUSR.rod1.e3_ia[3] * $DER.rear.cornerR.jointUSR.rod1.e3_a[2]
*/
void Heave_eqFunction_3983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3983};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[753]] /* der(rear.cornerR.jointUSR.rod1.R_rel_ia.T[3,2]) DUMMY_DER */) = (0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[770]] /* der(rear.cornerR.jointUSR.rod1.eRod_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4042]] /* rear.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[764]] /* der(rear.cornerR.jointUSR.rod1.e2_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* der(rear.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4051]] /* rear.cornerR.jointUSR.rod1.e2_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[2523] /* rear.cornerR.jointUSR.rod1.e3_ia[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[767]] /* der(rear.cornerR.jointUSR.rod1.e3_a[2]) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_7443(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7444(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7457(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7464(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7471(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7445(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7446(DATA *data, threadData_t *threadData);


/*
equation index: 3991
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.rod1.R_rel_ia.T[2,3] = 0.222824801502141 * $DER.rear.cornerR.jointUSR.rod1.eRod_a[3] + rear.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] * $DER.rear.cornerR.jointUSR.rod1.e2_a[3] + $DER.rear.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] * rear.cornerR.jointUSR.rod1.e2_a[3] + rear.cornerR.jointUSR.rod1.e3_ia[2] * $DER.rear.cornerR.jointUSR.rod1.e3_a[3]
*/
void Heave_eqFunction_3991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3991};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[751]] /* der(rear.cornerR.jointUSR.rod1.R_rel_ia.T[2,3]) DUMMY_DER */) = (0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* der(rear.cornerR.jointUSR.rod1.eRod_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4040]] /* rear.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* der(rear.cornerR.jointUSR.rod1.e2_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[759]] /* der(rear.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4052]] /* rear.cornerR.jointUSR.rod1.e2_a[3] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[2522] /* rear.cornerR.jointUSR.rod1.e3_ia[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* der(rear.cornerR.jointUSR.rod1.e3_a[3]) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_7458(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7465(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7472(DATA *data, threadData_t *threadData);


/*
equation index: 3995
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.rod1.R_rel_ia.T[3,3] = 0.9748585065718673 * $DER.rear.cornerR.jointUSR.rod1.eRod_a[3] + rear.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] * $DER.rear.cornerR.jointUSR.rod1.e2_a[3] + $DER.rear.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] * rear.cornerR.jointUSR.rod1.e2_a[3] + rear.cornerR.jointUSR.rod1.e3_ia[3] * $DER.rear.cornerR.jointUSR.rod1.e3_a[3]
*/
void Heave_eqFunction_3995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3995};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[754]] /* der(rear.cornerR.jointUSR.rod1.R_rel_ia.T[3,3]) DUMMY_DER */) = (0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[771]] /* der(rear.cornerR.jointUSR.rod1.eRod_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4042]] /* rear.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[765]] /* der(rear.cornerR.jointUSR.rod1.e2_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[760]] /* der(rear.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4052]] /* rear.cornerR.jointUSR.rod1.e2_a[3] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[2523] /* rear.cornerR.jointUSR.rod1.e3_ia[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[768]] /* der(rear.cornerR.jointUSR.rod1.e3_a[3]) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_7459(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7466(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7473(DATA *data, threadData_t *threadData);


/*
equation index: 3999
type: SIMPLE_ASSIGN
$DER.points[4,11,2] = $DER.rear.cornerR.springArm.frame_a.r_0[2] + 0.009999999999999981 * rear.cornerR.jointUSR.revolute.R_rel.T[3,3] * rear.cornerR.springArm.frame_b.R.w[1] + 0.47000000000000003 * rear.cornerR.jointUSR.revolute.R_rel.T[3,2] * rear.cornerR.springArm.frame_b.R.w[1]
*/
void Heave_eqFunction_3999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3999};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[564]] /* der(points[4,11,2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* der(rear.cornerR.springArm.frame_a.r_0[2]) DUMMY_DER */) + (0.009999999999999981) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3987]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4212]] /* rear.cornerR.springArm.frame_b.R.w[1] DUMMY_STATE */))) + (0.47000000000000003) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4212]] /* rear.cornerR.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7214(DATA *data, threadData_t *threadData);


/*
equation index: 4001
type: SIMPLE_ASSIGN
$DER.points[4,11,3] = $DER.rear.cornerR.springArm.frame_a.r_0[3] + 0.47000000000000003 * rear.cornerR.jointUSR.revolute.R_rel.T[3,3] * rear.cornerR.springArm.frame_b.R.w[1] + 0.009999999999999981 * (-rear.cornerR.jointUSR.revolute.R_rel.T[3,2]) * rear.cornerR.springArm.frame_b.R.w[1]
*/
void Heave_eqFunction_4001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4001};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[565]] /* der(points[4,11,3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* der(rear.cornerR.springArm.frame_a.r_0[3]) DUMMY_DER */) + (0.47000000000000003) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3987]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4212]] /* rear.cornerR.springArm.frame_b.R.w[1] DUMMY_STATE */))) + (0.009999999999999981) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4212]] /* rear.cornerR.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7216(DATA *data, threadData_t *threadData);


/*
equation index: 4003
type: SIMPLE_ASSIGN
$DER.rear.cornerR.coilover.length = 0.5 * (rear.cornerR.coilover.r_rel_0 * $DER.rear.cornerR.coilover.r_rel_0 + $DER.rear.cornerR.coilover.r_rel_0 * rear.cornerR.coilover.r_rel_0) / sqrt(rear.cornerR.coilover.r_rel_0 * rear.cornerR.coilover.r_rel_0)
*/
void Heave_eqFunction_4003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4003};
  real_array tmp146;
  real_array tmp147;
  real_array tmp148;
  real_array tmp149;
  real_array tmp150;
  real_array tmp151;
  modelica_real tmp152;
  real_array_create(&tmp146, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3848]] /* rear.cornerR.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp147, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* der(rear.cornerR.coilover.r_rel_0[1]) DUMMY_DER */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp148, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[699]] /* der(rear.cornerR.coilover.r_rel_0[1]) DUMMY_DER */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp149, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3848]] /* rear.cornerR.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp150, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3848]] /* rear.cornerR.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp151, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3848]] /* rear.cornerR.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  tmp152 = mul_real_scalar_product(tmp150, tmp151);
  if(!(tmp152 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rear.cornerR.coilover.r_rel_0 * rear.cornerR.coilover.r_rel_0) was %g should be >= 0", tmp152);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[698]] /* der(rear.cornerR.coilover.length) DUMMY_DER */) = (0.5) * (DIVISION_SIM(mul_real_scalar_product(tmp146, tmp147) + mul_real_scalar_product(tmp148, tmp149),sqrt(tmp152),"sqrt(rear.cornerR.coilover.r_rel_0 * rear.cornerR.coilover.r_rel_0)",equationIndexes));
  TRACE_POP
}
extern void Heave_eqFunction_7218(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7219(DATA *data, threadData_t *threadData);


/*
equation index: 4006
type: SIMPLE_ASSIGN
rear.cornerR.coilover.f = rear.cornerR.coilover.c * (rear.cornerR.coilover.s - rear.cornerR.coilover.s_unstretched) + rear.cornerR.coilover.f_d
*/
void Heave_eqFunction_4006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4006};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* rear.cornerR.coilover.f variable */) = ((data->simulationInfo->realParameter[2378] /* rear.cornerR.coilover.c PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3854]] /* rear.cornerR.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[2383] /* rear.cornerR.coilover.s_unstretched PARAM */)) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3839]] /* rear.cornerR.coilover.f_d variable */);
  TRACE_POP
}

/*
equation index: 4007
type: SIMPLE_ASSIGN
rear.cornerR.springChassis.frame_a.f[1] = (-rear.cornerR.coilover.e_a[1]) * rear.cornerR.coilover.f
*/
void Heave_eqFunction_4007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4007};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4230]] /* rear.cornerR.springChassis.frame_a.f[1] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3832]] /* rear.cornerR.coilover.e_a[1] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3838]] /* rear.cornerR.coilover.f variable */));
  TRACE_POP
}

/*
equation index: 4008
type: SIMPLE_ASSIGN
rear.cornerR.springChassis.frame_a.t[2] = (-0.25) * rear.cornerR.springChassis.frame_a.f[1]
*/
void Heave_eqFunction_4008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4008};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4234]] /* rear.cornerR.springChassis.frame_a.t[2] variable */) = (-0.25) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4230]] /* rear.cornerR.springChassis.frame_a.f[1] variable */));
  TRACE_POP
}

/*
equation index: 4009
type: SIMPLE_ASSIGN
rear.cornerR.springChassis.frame_a.t[3] = (-0.65) * rear.cornerR.springChassis.frame_a.f[1]
*/
void Heave_eqFunction_4009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4009};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4235]] /* rear.cornerR.springChassis.frame_a.t[3] variable */) = (-0.65) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4230]] /* rear.cornerR.springChassis.frame_a.f[1] variable */));
  TRACE_POP
}

/*
equation index: 4010
type: SIMPLE_ASSIGN
rear.cornerR.springArm.frame_a.f[1] = -rear.cornerR.springChassis.frame_a.f[1]
*/
void Heave_eqFunction_4010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4010};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4198]] /* rear.cornerR.springArm.frame_a.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4230]] /* rear.cornerR.springChassis.frame_a.f[1] variable */));
  TRACE_POP
}
extern void Heave_eqFunction_7229(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7228(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7222(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7221(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7226(DATA *data, threadData_t *threadData);


/*
equation index: 4016
type: SIMPLE_ASSIGN
rear.cornerR.springArm.frame_a.f[2] = rear.cornerR.jointUSR.revolute.R_rel.T[3,2] * rear.cornerR.springChassis.frame_a.f[3] - rear.cornerR.jointUSR.revolute.R_rel.T[3,3] * rear.cornerR.springChassis.frame_a.f[2]
*/
void Heave_eqFunction_4016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4016};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4199]] /* rear.cornerR.springArm.frame_a.f[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4232]] /* rear.cornerR.springChassis.frame_a.f[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3987]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4231]] /* rear.cornerR.springChassis.frame_a.f[2] variable */)));
  TRACE_POP
}

/*
equation index: 4017
type: SIMPLE_ASSIGN
rear.cornerR.springArm.frame_a.f[3] = (-rear.cornerR.jointUSR.revolute.R_rel.T[3,2]) * rear.cornerR.springChassis.frame_a.f[2] - rear.cornerR.jointUSR.revolute.R_rel.T[3,3] * rear.cornerR.springChassis.frame_a.f[3]
*/
void Heave_eqFunction_4017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4017};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4200]] /* rear.cornerR.springArm.frame_a.f[3] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4231]] /* rear.cornerR.springChassis.frame_a.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3987]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4232]] /* rear.cornerR.springChassis.frame_a.f[3] variable */)));
  TRACE_POP
}
extern void Heave_eqFunction_7225(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7233(DATA *data, threadData_t *threadData);


/*
equation index: 4020
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.revolute.R_rel.T[3,3] = (-sin(rear.cornerR.jointUSR.revolute.angle)) * $DER.rear.cornerR.jointUSR.revolute.angle
*/
void Heave_eqFunction_4020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4020};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[734]] /* der(rear.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3991]] /* rear.cornerR.jointUSR.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* der(rear.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 4021
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.revolute.R_rel.T[3,2] = cos(rear.cornerR.jointUSR.revolute.angle) * $DER.rear.cornerR.jointUSR.revolute.angle
*/
void Heave_eqFunction_4021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4021};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[733]] /* der(rear.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */) = (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3991]] /* rear.cornerR.jointUSR.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[736]] /* der(rear.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 4022
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.revolute.positiveBranch = AlyssaAnimation.Heave.rear.cornerR.tieRod.revolute.selectBranch(rear.cornerR.tieRod.revolute.lengthConstraint, {0.0, 0.222824801502141, 0.9748585065718673}, 0.017453292519943295 * (rear.cornerR.tieRod.revolute.phi_offset + rear.cornerR.tieRod.revolute.phi_guess), rear.cornerR.tieRod.revolute.r_a, rear.cornerR.tieRod.revolute.r_b)
*/
void Heave_eqFunction_4022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4022};
  real_array tmp153;
  real_array tmp154;
  real_array_create(&tmp153, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4372]] /* rear.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp154, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4375]] /* rear.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[165] /* rear.cornerR.tieRod.revolute.positiveBranch PARAM */) = omc_AlyssaAnimation_Heave_rear_cornerR_tieRod_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[2821] /* rear.cornerR.tieRod.revolute.lengthConstraint PARAM */), _OMC_LIT26, (0.017453292519943295) * ((data->simulationInfo->realParameter[2826] /* rear.cornerR.tieRod.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[2825] /* rear.cornerR.tieRod.revolute.phi_guess PARAM */)), tmp153, tmp154);
  TRACE_POP
}
extern void Heave_eqFunction_7294(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7395(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7293(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7295(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7301(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7307(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7306(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7303(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7302(DATA *data, threadData_t *threadData);


/*
equation index: 4032
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.revolute.R_rel.T[1,2] = 0.9748585065718673 * sin(rear.cornerR.tieRod.revolute.angle)
*/
void Heave_eqFunction_4032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4032};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4331]] /* rear.cornerR.tieRod.revolute.R_rel.T[1,2] DUMMY_STATE */) = (0.9748585065718673) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4342]] /* rear.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 4033
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.revolute.R_rel.T[1,3] = (-0.222824801502141) * sin(rear.cornerR.tieRod.revolute.angle)
*/
void Heave_eqFunction_4033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4033};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4332]] /* rear.cornerR.tieRod.revolute.R_rel.T[1,3] DUMMY_STATE */) = (-0.222824801502141) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4342]] /* rear.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7410(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7318(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7349(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7333(DATA *data, threadData_t *threadData);


/*
equation index: 4038
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.revolute.R_rel.T[2,1] = (-0.9748585065718673) * sin(rear.cornerR.tieRod.revolute.angle)
*/
void Heave_eqFunction_4038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4038};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4333]] /* rear.cornerR.tieRod.revolute.R_rel.T[2,1] DUMMY_STATE */) = (-0.9748585065718673) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4342]] /* rear.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7308(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7325(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7351(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7364(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7313(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7340(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8295(DATA *data, threadData_t *threadData);


/*
equation index: 4046
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.revolute.R_rel.T[3,1] = 0.222824801502141 * sin(rear.cornerR.tieRod.revolute.angle)
*/
void Heave_eqFunction_4046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4046};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4336]] /* rear.cornerR.tieRod.revolute.R_rel.T[3,1] DUMMY_STATE */) = (0.222824801502141) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4342]] /* rear.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7304(DATA *data, threadData_t *threadData);


/*
equation index: 4048
type: SIMPLE_ASSIGN
rear.cornerR.upright.frame_a.r_0[1] = points[4,5,1] + 0.13 * rear.cornerR.upright.frame_a.R.T[2,1] + 0.2 * rear.cornerR.upright.frame_a.R.T[3,1]
*/
void Heave_eqFunction_4048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4048};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4548]] /* rear.cornerR.upright.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2959]] /* points[4,5,1] DUMMY_STATE */) + (0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4539]] /* rear.cornerR.upright.frame_a.R.T[2,1] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4542]] /* rear.cornerR.upright.frame_a.R.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4049
type: SIMPLE_ASSIGN
points[4,9,1] = rear.cornerR.upright.frame_a.r_0[1]
*/
void Heave_eqFunction_4049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4049};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2971]] /* points[4,9,1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4548]] /* rear.cornerR.upright.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void Heave_eqFunction_7310(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7311(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7326(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7319(DATA *data, threadData_t *threadData);


/*
equation index: 4054
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod1.rRod_0[1] = rear.cornerR.tieRod.frame_im.r_0[1] - points[4,7,1]
*/
void Heave_eqFunction_4054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4054};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4400]] /* rear.cornerR.tieRod.rod1.rRod_0[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4282]] /* rear.cornerR.tieRod.frame_im.r_0[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2965]] /* points[4,7,1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4055
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod1.rRod_a[1] = rear.cornerR.tieRod.rod1.rRod_0[1]
*/
void Heave_eqFunction_4055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4055};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4403]] /* rear.cornerR.tieRod.rod1.rRod_a[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4400]] /* rear.cornerR.tieRod.rod1.rRod_0[1] variable */);
  TRACE_POP
}
extern void Heave_eqFunction_7321(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7323(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7322(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7327(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7328(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7329(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7330(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7331(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7332(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7350(DATA *data, threadData_t *threadData);


/*
equation index: 4066
type: SIMPLE_ASSIGN
rear.cornerR.upright.frame_a.r_0[2] = points[4,5,2] + 0.13 * rear.cornerR.upright.frame_a.R.T[2,2] + 0.2 * rear.cornerR.upright.frame_a.R.T[3,2]
*/
void Heave_eqFunction_4066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4066};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4549]] /* rear.cornerR.upright.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2960]] /* points[4,5,2] DUMMY_STATE */) + (0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4540]] /* rear.cornerR.upright.frame_a.R.T[2,2] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4543]] /* rear.cornerR.upright.frame_a.R.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4067
type: SIMPLE_ASSIGN
points[4,9,2] = rear.cornerR.upright.frame_a.r_0[2]
*/
void Heave_eqFunction_4067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4067};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2972]] /* points[4,9,2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4549]] /* rear.cornerR.upright.frame_a.r_0[2] DUMMY_STATE */);
  TRACE_POP
}
extern void Heave_eqFunction_7353(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7354(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7365(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7357(DATA *data, threadData_t *threadData);


/*
equation index: 4072
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod1.rRod_0[2] = rear.cornerR.tieRod.frame_im.r_0[2] - points[4,7,2]
*/
void Heave_eqFunction_4072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4072};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4401]] /* rear.cornerR.tieRod.rod1.rRod_0[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4283]] /* rear.cornerR.tieRod.frame_im.r_0[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2966]] /* points[4,7,2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4073
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod1.rRod_a[2] = rear.cornerR.tieRod.rod1.rRod_0[2]
*/
void Heave_eqFunction_4073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4073};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4404]] /* rear.cornerR.tieRod.rod1.rRod_a[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4401]] /* rear.cornerR.tieRod.rod1.rRod_0[2] variable */);
  TRACE_POP
}
extern void Heave_eqFunction_7359(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7361(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7360(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7366(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7367(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7368(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7369(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7370(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7371(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7305(DATA *data, threadData_t *threadData);


/*
equation index: 4084
type: SIMPLE_ASSIGN
rear.cornerR.upright.frame_a.r_0[3] = points[4,5,3] + 0.13 * rear.cornerR.upright.frame_a.R.T[2,3] + 0.2 * rear.cornerR.upright.frame_a.R.T[3,3]
*/
void Heave_eqFunction_4084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4084};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4550]] /* rear.cornerR.upright.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2961]] /* points[4,5,3] DUMMY_STATE */) + (0.13) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4541]] /* rear.cornerR.upright.frame_a.R.T[2,3] variable */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4544]] /* rear.cornerR.upright.frame_a.R.T[3,3] variable */));
  TRACE_POP
}

/*
equation index: 4085
type: SIMPLE_ASSIGN
points[4,9,3] = rear.cornerR.upright.frame_a.r_0[3]
*/
void Heave_eqFunction_4085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4085};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2973]] /* points[4,9,3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4550]] /* rear.cornerR.upright.frame_a.r_0[3] DUMMY_STATE */);
  TRACE_POP
}
extern void Heave_eqFunction_7315(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7316(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7355(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7341(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7334(DATA *data, threadData_t *threadData);


/*
equation index: 4091
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod1.rRod_0[3] = rear.cornerR.tieRod.frame_im.r_0[3] - points[4,7,3]
*/
void Heave_eqFunction_4091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4091};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4402]] /* rear.cornerR.tieRod.rod1.rRod_0[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4284]] /* rear.cornerR.tieRod.frame_im.r_0[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2967]] /* points[4,7,3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4092
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod1.rRod_a[3] = rear.cornerR.tieRod.rod1.rRod_0[3]
*/
void Heave_eqFunction_4092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4092};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4405]] /* rear.cornerR.tieRod.rod1.rRod_a[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4402]] /* rear.cornerR.tieRod.rod1.rRod_0[3] variable */);
  TRACE_POP
}
extern void Heave_eqFunction_7336(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7338(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7337(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7363(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7342(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8293(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7343(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7344(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8292(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8297(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8296(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8294(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7345(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7346(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7347(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7372(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7348(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7394(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7396(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7398(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7409(DATA *data, threadData_t *threadData);


/*
equation index: 4114
type: SIMPLE_ASSIGN
loads[4].frame_b.R.w[1] = 0.9999965730559848 * rear.cornerR.upright.w_a[1] + (-0.0026179908874179934) * rear.cornerR.upright.w_a[2]
*/
void Heave_eqFunction_4114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2722]] /* loads[4].frame_b.R.w[1] variable */) = (0.9999965730559848) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4582]] /* rear.cornerR.upright.w_a[1] DUMMY_STATE */)) + (-0.0026179908874179934) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4583]] /* rear.cornerR.upright.w_a[2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4115
type: SIMPLE_ASSIGN
rear.cornerR.wheelAngles.R_rel.w[1] = loads[4].frame_b.R.w[1]
*/
void Heave_eqFunction_4115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4597]] /* rear.cornerR.wheelAngles.R_rel.w[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2722]] /* loads[4].frame_b.R.w[1] variable */);
  TRACE_POP
}
extern void Heave_eqFunction_7397(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7408(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7413(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7414(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7411(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7412(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7415(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7416(DATA *data, threadData_t *threadData);


/*
equation index: 4124
type: SIMPLE_ASSIGN
loads[4].frame_b.R.w[2] = 0.0026174167187536785 * rear.cornerR.upright.w_a[1] + 0.9997772572824157 * rear.cornerR.upright.w_a[2] + (-0.020942419883356957) * rear.cornerR.upright.w_a[3]
*/
void Heave_eqFunction_4124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2723]] /* loads[4].frame_b.R.w[2] variable */) = (0.0026174167187536785) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4582]] /* rear.cornerR.upright.w_a[1] DUMMY_STATE */)) + (0.9997772572824157) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4583]] /* rear.cornerR.upright.w_a[2] DUMMY_STATE */)) + (-0.020942419883356957) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4584]] /* rear.cornerR.upright.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4125
type: SIMPLE_ASSIGN
rear.cornerR.wheelAngles.R_rel.w[2] = loads[4].frame_b.R.w[2]
*/
void Heave_eqFunction_4125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4598]] /* rear.cornerR.wheelAngles.R_rel.w[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2723]] /* loads[4].frame_b.R.w[2] variable */);
  TRACE_POP
}

/*
equation index: 4126
type: SIMPLE_ASSIGN
loads[4].frame_b.R.w[3] = 5.482706441510991e-5 * rear.cornerR.upright.w_a[1] + 0.020942348114856475 * rear.cornerR.upright.w_a[2] + 0.9997806834748455 * rear.cornerR.upright.w_a[3]
*/
void Heave_eqFunction_4126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2724]] /* loads[4].frame_b.R.w[3] variable */) = (5.482706441510991e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4582]] /* rear.cornerR.upright.w_a[1] DUMMY_STATE */)) + (0.020942348114856475) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4583]] /* rear.cornerR.upright.w_a[2] DUMMY_STATE */)) + (0.9997806834748455) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4584]] /* rear.cornerR.upright.w_a[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4127
type: SIMPLE_ASSIGN
rear.cornerR.wheelAngles.R_rel.w[3] = loads[4].frame_b.R.w[3]
*/
void Heave_eqFunction_4127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4599]] /* rear.cornerR.wheelAngles.R_rel.w[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2724]] /* loads[4].frame_b.R.w[3] variable */);
  TRACE_POP
}

/*
equation index: 4131
type: ARRAY_CALL_ASSIGN

$TMP_4128 = Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(rear.cornerR.wheelAngles.R_rel, {3, 1, 2}, rear.cornerR.wheelAngles.guessAngle1)
*/
void Heave_eqFunction_4131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4131};
  real_array tmp155;
  real_array tmp156;
  Modelica_Mechanics_MultiBody_Frames_Orientation tmp157;
  real_array tmp158;
  real_array_create(&tmp155, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4588]] /* rear.cornerR.wheelAngles.R_rel.T[1,1] variable */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)3);
  real_array_create(&tmp156, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4597]] /* rear.cornerR.wheelAngles.R_rel.w[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  Modelica_Mechanics_MultiBody_Frames_Orientation_wrap_vars(threadData,tmp157, tmp155, tmp156);
  real_array_create(&tmp158, ((modelica_real*)&((&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* $TMP_4128[1] variable */))[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles(threadData, tmp157, _OMC_LIT22, (data->simulationInfo->realParameter[3075] /* rear.cornerR.wheelAngles.guessAngle1 PARAM */)), tmp158);
  TRACE_POP
}

/*
equation index: 4128
type: SIMPLE_ASSIGN
telemetry[4,3] = -$TMP_4128[1]
*/
void Heave_eqFunction_4128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4744]] /* telemetry[4,3] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[842]] /* $TMP_4128[1] variable */));
  TRACE_POP
}

/*
equation index: 4129
type: SIMPLE_ASSIGN
telemetry[4,2] = $TMP_4128[2]
*/
void Heave_eqFunction_4129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4743]] /* telemetry[4,2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[843]] /* $TMP_4128[2] variable */);
  TRACE_POP
}

/*
equation index: 4130
type: SIMPLE_ASSIGN
rear.cornerR.wheelAngles.angles[3] = $TMP_4128[3]
*/
void Heave_eqFunction_4130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4600]] /* rear.cornerR.wheelAngles.angles[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[844]] /* $TMP_4128[3] variable */);
  TRACE_POP
}

/*
equation index: 4132
type: SIMPLE_ASSIGN
$DER.rear.cornerR.tieRod.revolute.R_rel.T[1,1] = (-sin(rear.cornerR.tieRod.revolute.angle)) * $DER.rear.cornerR.tieRod.revolute.angle
*/
void Heave_eqFunction_4132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[790]] /* der(rear.cornerR.tieRod.revolute.R_rel.T[1,1]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4342]] /* rear.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* der(rear.cornerR.tieRod.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_7400(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7401(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7402(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7403(DATA *data, threadData_t *threadData);


/*
equation index: 4137
type: SIMPLE_ASSIGN
$DER.rear.cornerR.tieRod.revolute.R_rel.T[1,2] = 0.9748585065718673 * cos(rear.cornerR.tieRod.revolute.angle) * $DER.rear.cornerR.tieRod.revolute.angle
*/
void Heave_eqFunction_4137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4137};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[791]] /* der(rear.cornerR.tieRod.revolute.R_rel.T[1,2]) DUMMY_DER */) = (0.9748585065718673) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4342]] /* rear.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* der(rear.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4138
type: SIMPLE_ASSIGN
$DER.rear.cornerR.tieRod.revolute.R_rel.T[1,3] = (-0.222824801502141) * cos(rear.cornerR.tieRod.revolute.angle) * $DER.rear.cornerR.tieRod.revolute.angle
*/
void Heave_eqFunction_4138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[792]] /* der(rear.cornerR.tieRod.revolute.R_rel.T[1,3]) DUMMY_DER */) = (-0.222824801502141) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4342]] /* rear.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* der(rear.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}
extern void Heave_eqFunction_7462(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7469(DATA *data, threadData_t *threadData);


/*
equation index: 4141
type: SIMPLE_ASSIGN
$DER.rear.cornerR.tieRod.revolute.R_rel.T[2,1] = (-0.9748585065718673) * cos(rear.cornerR.tieRod.revolute.angle) * $DER.rear.cornerR.tieRod.revolute.angle
*/
void Heave_eqFunction_4141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4141};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[793]] /* der(rear.cornerR.tieRod.revolute.R_rel.T[2,1]) DUMMY_DER */) = (-0.9748585065718673) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4342]] /* rear.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* der(rear.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}
extern void Heave_eqFunction_7461(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7468(DATA *data, threadData_t *threadData);


/*
equation index: 4144
type: SIMPLE_ASSIGN
$DER.rear.cornerR.tieRod.revolute.R_rel.T[3,1] = 0.222824801502141 * cos(rear.cornerR.tieRod.revolute.angle) * $DER.rear.cornerR.tieRod.revolute.angle
*/
void Heave_eqFunction_4144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[796]] /* der(rear.cornerR.tieRod.revolute.R_rel.T[3,1]) DUMMY_DER */) = (0.222824801502141) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4342]] /* rear.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[801]] /* der(rear.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}
extern void Heave_eqFunction_7460(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7467(DATA *data, threadData_t *threadData);


/*
equation index: 4372
type: LINEAR

<var>rear.cornerR.ucaPivot.a</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void Heave_eqFunction_4372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4372};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[4502]] /* rear.cornerR.ucaPivot.a variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 4372 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,4372};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 4372 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4502]] /* rear.cornerR.ucaPivot.a variable */) = aux_x[0];

  TRACE_POP
}
extern void Heave_eqFunction_8515(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8526(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8522(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8528(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8524(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8523(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8525(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8537(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8532(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8533(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8534(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8529(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8535(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8536(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8530(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8531(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8550(DATA *data, threadData_t *threadData);


/*
equation index: 4390
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.revolute.frame_b.f[1] = (-rear.cornerR.jointUSR.rod1.frame_b.f[1]) - rear.cornerR.springArm.frame_a.f[1]
*/
void Heave_eqFunction_4390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4390};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4007]] /* rear.cornerR.jointUSR.revolute.frame_b.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4068]] /* rear.cornerR.jointUSR.rod1.frame_b.f[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4198]] /* rear.cornerR.springArm.frame_a.f[1] variable */);
  TRACE_POP
}

/*
equation index: 4391
type: SIMPLE_ASSIGN
rear.cornerR.lcaMount.frame_a.f[1] = -rear.cornerR.jointUSR.revolute.frame_b.f[1]
*/
void Heave_eqFunction_4391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4158]] /* rear.cornerR.lcaMount.frame_a.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4007]] /* rear.cornerR.jointUSR.revolute.frame_b.f[1] variable */));
  TRACE_POP
}
extern void Heave_eqFunction_8551(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8552(DATA *data, threadData_t *threadData);


/*
equation index: 4394
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_b.t[2] = rear.cornerR.jointUSR.revolute.R_rel.T[3,3] * rear.cornerR.springArm.frame_a.t[2] - rear.cornerR.jointUSR.revolute.R_rel.T[3,2] * rear.cornerR.jointUSR.revolute.frame_b.t[3]
*/
void Heave_eqFunction_4394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4394};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3907]] /* rear.cornerR.jointUSR.frame_b.t[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3987]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4205]] /* rear.cornerR.springArm.frame_a.t[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4011]] /* rear.cornerR.jointUSR.revolute.frame_b.t[3] variable */)));
  TRACE_POP
}
extern void Heave_eqFunction_8557(DATA *data, threadData_t *threadData);


/*
equation index: 4396
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_b.t[3] = (-rear.cornerR.jointUSR.revolute.R_rel.T[3,3]) * rear.cornerR.jointUSR.revolute.frame_b.t[3] - rear.cornerR.jointUSR.revolute.R_rel.T[3,2] * rear.cornerR.springArm.frame_a.t[2]
*/
void Heave_eqFunction_4396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4396};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3908]] /* rear.cornerR.jointUSR.frame_b.t[3] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3987]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4011]] /* rear.cornerR.jointUSR.revolute.frame_b.t[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4205]] /* rear.cornerR.springArm.frame_a.t[2] variable */)));
  TRACE_POP
}
extern void Heave_eqFunction_8556(DATA *data, threadData_t *threadData);


/*
equation index: 4398
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.frame_b.f[2] = rear.cornerR.jointUSR.revolute.R_rel.T[3,3] * (rear.cornerR.jointUSR.frame_a.R.T[1,2] * rear.cornerR.jointUSR.rod1.f_b_a[1] + rear.cornerR.jointUSR.frame_a.R.T[2,2] * rear.cornerR.jointUSR.rod1.f_b_a[2] + rear.cornerR.jointUSR.frame_a.R.T[3,2] * rear.cornerR.jointUSR.rod1.f_b_a[3]) - rear.cornerR.jointUSR.revolute.R_rel.T[3,2] * (rear.cornerR.jointUSR.frame_a.R.T[1,3] * rear.cornerR.jointUSR.rod1.f_b_a[1] + rear.cornerR.jointUSR.frame_a.R.T[2,3] * rear.cornerR.jointUSR.rod1.f_b_a[2] + rear.cornerR.jointUSR.frame_a.R.T[3,3] * rear.cornerR.jointUSR.rod1.f_b_a[3])
*/
void Heave_eqFunction_4398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4398};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4069]] /* rear.cornerR.jointUSR.rod1.frame_b.f[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3987]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3893]] /* rear.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4059]] /* rear.cornerR.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3896]] /* rear.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4060]] /* rear.cornerR.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* rear.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4061]] /* rear.cornerR.jointUSR.rod1.f_b_a[3] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* rear.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4059]] /* rear.cornerR.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3897]] /* rear.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4060]] /* rear.cornerR.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* rear.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4061]] /* rear.cornerR.jointUSR.rod1.f_b_a[3] variable */))));
  TRACE_POP
}
extern void Heave_eqFunction_8546(DATA *data, threadData_t *threadData);


/*
equation index: 4400
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.frame_b.f[3] = rear.cornerR.jointUSR.revolute.R_rel.T[3,2] * (rear.cornerR.jointUSR.frame_a.R.T[1,2] * rear.cornerR.jointUSR.rod1.f_b_a[1] + rear.cornerR.jointUSR.frame_a.R.T[2,2] * rear.cornerR.jointUSR.rod1.f_b_a[2] + rear.cornerR.jointUSR.frame_a.R.T[3,2] * rear.cornerR.jointUSR.rod1.f_b_a[3]) + rear.cornerR.jointUSR.revolute.R_rel.T[3,3] * (rear.cornerR.jointUSR.frame_a.R.T[1,3] * rear.cornerR.jointUSR.rod1.f_b_a[1] + rear.cornerR.jointUSR.frame_a.R.T[2,3] * rear.cornerR.jointUSR.rod1.f_b_a[2] + rear.cornerR.jointUSR.frame_a.R.T[3,3] * rear.cornerR.jointUSR.rod1.f_b_a[3])
*/
void Heave_eqFunction_4400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4400};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4070]] /* rear.cornerR.jointUSR.rod1.frame_b.f[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3893]] /* rear.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4059]] /* rear.cornerR.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3896]] /* rear.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4060]] /* rear.cornerR.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* rear.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4061]] /* rear.cornerR.jointUSR.rod1.f_b_a[3] variable */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3987]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* rear.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4059]] /* rear.cornerR.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3897]] /* rear.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4060]] /* rear.cornerR.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* rear.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4061]] /* rear.cornerR.jointUSR.rod1.f_b_a[3] variable */)));
  TRACE_POP
}
extern void Heave_eqFunction_8544(DATA *data, threadData_t *threadData);


/*
equation index: 4402
type: SIMPLE_ASSIGN
rear.cornerR.lcaMount.frame_a.f[2] = (-rear.cornerR.jointUSR.revolute.R_rel.T[3,3]) * rear.cornerR.jointUSR.revolute.frame_b.f[2] - rear.cornerR.jointUSR.revolute.R_rel.T[3,2] * rear.cornerR.jointUSR.revolute.frame_b.f[3]
*/
void Heave_eqFunction_4402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4402};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4159]] /* rear.cornerR.lcaMount.frame_a.f[2] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3987]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4008]] /* rear.cornerR.jointUSR.revolute.frame_b.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4009]] /* rear.cornerR.jointUSR.revolute.frame_b.f[3] variable */)));
  TRACE_POP
}

/*
equation index: 4403
type: SIMPLE_ASSIGN
rear.cornerR.lcaMount.frame_a.f[3] = rear.cornerR.jointUSR.revolute.R_rel.T[3,2] * rear.cornerR.jointUSR.revolute.frame_b.f[2] - rear.cornerR.jointUSR.revolute.R_rel.T[3,3] * rear.cornerR.jointUSR.revolute.frame_b.f[3]
*/
void Heave_eqFunction_4403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4403};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4160]] /* rear.cornerR.lcaMount.frame_a.f[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3986]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4008]] /* rear.cornerR.jointUSR.revolute.frame_b.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3987]] /* rear.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4009]] /* rear.cornerR.jointUSR.revolute.frame_b.f[3] variable */)));
  TRACE_POP
}
extern void Heave_eqFunction_8541(DATA *data, threadData_t *threadData);


/*
equation index: 4405
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.revolute.frame_b.t[1] = (-rear.cornerR.jointUSR.rod2.frame_a.t[1]) - rear.cornerR.springArm.frame_a.t[1]
*/
void Heave_eqFunction_4405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4405};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4010]] /* rear.cornerR.jointUSR.revolute.frame_b.t[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4139]] /* rear.cornerR.jointUSR.rod2.frame_a.t[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4204]] /* rear.cornerR.springArm.frame_a.t[1] variable */);
  TRACE_POP
}

/*
equation index: 4406
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_b.t[1] = -rear.cornerR.jointUSR.revolute.frame_b.t[1]
*/
void Heave_eqFunction_4406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4406};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3906]] /* rear.cornerR.jointUSR.frame_b.t[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4010]] /* rear.cornerR.jointUSR.revolute.frame_b.t[1] variable */));
  TRACE_POP
}
extern void Heave_eqFunction_8549(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8561(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8560(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_8559(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void Heave_functionInitialEquations_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Heave_eqFunction_8008(data, threadData);
  Heave_eqFunction_3467(data, threadData);
  Heave_eqFunction_7659(data, threadData);
  Heave_eqFunction_3469(data, threadData);
  Heave_eqFunction_3470(data, threadData);
  Heave_eqFunction_7673(data, threadData);
  Heave_eqFunction_7674(data, threadData);
  Heave_eqFunction_7676(data, threadData);
  Heave_eqFunction_7666(data, threadData);
  Heave_eqFunction_3475(data, threadData);
  Heave_eqFunction_3476(data, threadData);
  Heave_eqFunction_7668(data, threadData);
  Heave_eqFunction_7670(data, threadData);
  Heave_eqFunction_7669(data, threadData);
  Heave_eqFunction_7664(data, threadData);
  Heave_eqFunction_8006(data, threadData);
  Heave_eqFunction_7677(data, threadData);
  Heave_eqFunction_7663(data, threadData);
  Heave_eqFunction_8005(data, threadData);
  Heave_eqFunction_8010(data, threadData);
  Heave_eqFunction_8009(data, threadData);
  Heave_eqFunction_8007(data, threadData);
  Heave_eqFunction_7675(data, threadData);
  Heave_eqFunction_7679(data, threadData);
  Heave_eqFunction_7680(data, threadData);
  Heave_eqFunction_7658(data, threadData);
  Heave_eqFunction_3492(data, threadData);
  Heave_eqFunction_3493(data, threadData);
  Heave_eqFunction_7692(data, threadData);
  Heave_eqFunction_7693(data, threadData);
  Heave_eqFunction_7695(data, threadData);
  Heave_eqFunction_7685(data, threadData);
  Heave_eqFunction_3498(data, threadData);
  Heave_eqFunction_3499(data, threadData);
  Heave_eqFunction_7687(data, threadData);
  Heave_eqFunction_7689(data, threadData);
  Heave_eqFunction_7688(data, threadData);
  Heave_eqFunction_7683(data, threadData);
  Heave_eqFunction_7696(data, threadData);
  Heave_eqFunction_7682(data, threadData);
  Heave_eqFunction_7694(data, threadData);
  Heave_eqFunction_7698(data, threadData);
  Heave_eqFunction_7699(data, threadData);
  Heave_eqFunction_7701(data, threadData);
  Heave_eqFunction_3510(data, threadData);
  Heave_eqFunction_3511(data, threadData);
  Heave_eqFunction_7713(data, threadData);
  Heave_eqFunction_7714(data, threadData);
  Heave_eqFunction_7715(data, threadData);
  Heave_eqFunction_7717(data, threadData);
  Heave_eqFunction_7706(data, threadData);
  Heave_eqFunction_3517(data, threadData);
  Heave_eqFunction_3518(data, threadData);
  Heave_eqFunction_7708(data, threadData);
  Heave_eqFunction_7710(data, threadData);
  Heave_eqFunction_7709(data, threadData);
  Heave_eqFunction_7720(data, threadData);
  Heave_eqFunction_7704(data, threadData);
  Heave_eqFunction_7718(data, threadData);
  Heave_eqFunction_7703(data, threadData);
  Heave_eqFunction_7716(data, threadData);
  Heave_eqFunction_7721(data, threadData);
  Heave_eqFunction_7722(data, threadData);
  Heave_eqFunction_7723(data, threadData);
  Heave_eqFunction_7647(data, threadData);
  Heave_eqFunction_7745(data, threadData);
  Heave_eqFunction_7747(data, threadData);
  Heave_eqFunction_7758(data, threadData);
  Heave_eqFunction_7760(data, threadData);
  Heave_eqFunction_3535(data, threadData);
  Heave_eqFunction_3536(data, threadData);
  Heave_eqFunction_7757(data, threadData);
  Heave_eqFunction_7759(data, threadData);
  Heave_eqFunction_7776(data, threadData);
  Heave_eqFunction_7777(data, threadData);
  Heave_eqFunction_7774(data, threadData);
  Heave_eqFunction_7775(data, threadData);
  Heave_eqFunction_7772(data, threadData);
  Heave_eqFunction_7773(data, threadData);
  Heave_eqFunction_3545(data, threadData);
  Heave_eqFunction_3546(data, threadData);
  Heave_eqFunction_3547(data, threadData);
  Heave_eqFunction_3548(data, threadData);
  Heave_eqFunction_3552(data, threadData);
  Heave_eqFunction_3549(data, threadData);
  Heave_eqFunction_3550(data, threadData);
  Heave_eqFunction_3551(data, threadData);
  Heave_eqFunction_3553(data, threadData);
  Heave_eqFunction_7756(data, threadData);
  Heave_eqFunction_7755(data, threadData);
  Heave_eqFunction_7754(data, threadData);
  Heave_eqFunction_7753(data, threadData);
  Heave_eqFunction_3558(data, threadData);
  Heave_eqFunction_3559(data, threadData);
  Heave_eqFunction_3560(data, threadData);
  Heave_eqFunction_3561(data, threadData);
  Heave_eqFunction_7819(data, threadData);
  Heave_eqFunction_3788(data, threadData);
  Heave_eqFunction_8241(data, threadData);
  Heave_eqFunction_8233(data, threadData);
  Heave_eqFunction_8240(data, threadData);
  Heave_eqFunction_8237(data, threadData);
  Heave_eqFunction_8236(data, threadData);
  Heave_eqFunction_8229(data, threadData);
  Heave_eqFunction_8242(data, threadData);
  Heave_eqFunction_8244(data, threadData);
  Heave_eqFunction_8246(data, threadData);
  Heave_eqFunction_8245(data, threadData);
  Heave_eqFunction_8260(data, threadData);
  Heave_eqFunction_3800(data, threadData);
  Heave_eqFunction_3801(data, threadData);
  Heave_eqFunction_8261(data, threadData);
  Heave_eqFunction_8262(data, threadData);
  Heave_eqFunction_3804(data, threadData);
  Heave_eqFunction_8267(data, threadData);
  Heave_eqFunction_3806(data, threadData);
  Heave_eqFunction_8266(data, threadData);
  Heave_eqFunction_3808(data, threadData);
  Heave_eqFunction_8256(data, threadData);
  Heave_eqFunction_3810(data, threadData);
  Heave_eqFunction_8254(data, threadData);
  Heave_eqFunction_3812(data, threadData);
  Heave_eqFunction_3813(data, threadData);
  Heave_eqFunction_8251(data, threadData);
  Heave_eqFunction_3815(data, threadData);
  Heave_eqFunction_3816(data, threadData);
  Heave_eqFunction_8259(data, threadData);
  Heave_eqFunction_8269(data, threadData);
  Heave_eqFunction_8270(data, threadData);
  Heave_eqFunction_8277(data, threadData);
  Heave_eqFunction_3821(data, threadData);
  Heave_eqFunction_8273(data, threadData);
  Heave_eqFunction_8276(data, threadData);
  Heave_eqFunction_8271(data, threadData);
  Heave_eqFunction_8272(data, threadData);
  Heave_eqFunction_8249(data, threadData);
  Heave_eqFunction_8274(data, threadData);
  Heave_eqFunction_8275(data, threadData);
  Heave_eqFunction_8248(data, threadData);
  Heave_eqFunction_8280(data, threadData);
  Heave_eqFunction_8281(data, threadData);
  Heave_eqFunction_8247(data, threadData);
  Heave_eqFunction_8278(data, threadData);
  Heave_eqFunction_8279(data, threadData);
  Heave_eqFunction_3835(data, threadData);
  Heave_eqFunction_3836(data, threadData);
  Heave_eqFunction_3837(data, threadData);
  Heave_eqFunction_3838(data, threadData);
  Heave_eqFunction_7143(data, threadData);
  Heave_eqFunction_7147(data, threadData);
  Heave_eqFunction_7148(data, threadData);
  Heave_eqFunction_7149(data, threadData);
  Heave_eqFunction_7202(data, threadData);
  Heave_eqFunction_7203(data, threadData);
  Heave_eqFunction_7204(data, threadData);
  Heave_eqFunction_3846(data, threadData);
  Heave_eqFunction_7151(data, threadData);
  Heave_eqFunction_7206(data, threadData);
  Heave_eqFunction_7150(data, threadData);
  Heave_eqFunction_7152(data, threadData);
  Heave_eqFunction_7156(data, threadData);
  Heave_eqFunction_7157(data, threadData);
  Heave_eqFunction_7158(data, threadData);
  Heave_eqFunction_3854(data, threadData);
  Heave_eqFunction_3855(data, threadData);
  Heave_eqFunction_7183(data, threadData);
  Heave_eqFunction_7184(data, threadData);
  Heave_eqFunction_7185(data, threadData);
  Heave_eqFunction_7190(data, threadData);
  Heave_eqFunction_7191(data, threadData);
  Heave_eqFunction_7238(data, threadData);
  Heave_eqFunction_7239(data, threadData);
  Heave_eqFunction_7240(data, threadData);
  Heave_eqFunction_7241(data, threadData);
  Heave_eqFunction_7242(data, threadData);
  Heave_eqFunction_7243(data, threadData);
  Heave_eqFunction_7244(data, threadData);
  Heave_eqFunction_7245(data, threadData);
  Heave_eqFunction_7246(data, threadData);
  Heave_eqFunction_7249(data, threadData);
  Heave_eqFunction_7248(data, threadData);
  Heave_eqFunction_7247(data, threadData);
  Heave_eqFunction_7250(data, threadData);
  Heave_eqFunction_7251(data, threadData);
  Heave_eqFunction_7253(data, threadData);
  Heave_eqFunction_7284(data, threadData);
  Heave_eqFunction_7252(data, threadData);
  Heave_eqFunction_7285(data, threadData);
  Heave_eqFunction_7255(data, threadData);
  Heave_eqFunction_7254(data, threadData);
  Heave_eqFunction_7259(data, threadData);
  Heave_eqFunction_7265(data, threadData);
  Heave_eqFunction_7274(data, threadData);
  Heave_eqFunction_7260(data, threadData);
  Heave_eqFunction_7275(data, threadData);
  Heave_eqFunction_7256(data, threadData);
  Heave_eqFunction_7258(data, threadData);
  Heave_eqFunction_7266(data, threadData);
  Heave_eqFunction_7269(data, threadData);
  Heave_eqFunction_7268(data, threadData);
  Heave_eqFunction_7267(data, threadData);
  Heave_eqFunction_7272(data, threadData);
  Heave_eqFunction_7277(data, threadData);
  Heave_eqFunction_7282(data, threadData);
  Heave_eqFunction_7280(data, threadData);
  Heave_eqFunction_7278(data, threadData);
  Heave_eqFunction_7257(data, threadData);
  Heave_eqFunction_7273(data, threadData);
  Heave_eqFunction_7276(data, threadData);
  Heave_eqFunction_3900(data, threadData);
  Heave_eqFunction_3901(data, threadData);
  Heave_eqFunction_7289(data, threadData);
  Heave_eqFunction_3903(data, threadData);
  Heave_eqFunction_7290(data, threadData);
  Heave_eqFunction_7291(data, threadData);
  Heave_eqFunction_7292(data, threadData);
  Heave_eqFunction_7261(data, threadData);
  Heave_eqFunction_7264(data, threadData);
  Heave_eqFunction_7283(data, threadData);
  Heave_eqFunction_7263(data, threadData);
  Heave_eqFunction_7281(data, threadData);
  Heave_eqFunction_7262(data, threadData);
  Heave_eqFunction_7279(data, threadData);
  Heave_eqFunction_3914(data, threadData);
  Heave_eqFunction_3915(data, threadData);
  Heave_eqFunction_3916(data, threadData);
  Heave_eqFunction_3917(data, threadData);
  Heave_eqFunction_3918(data, threadData);
  Heave_eqFunction_3919(data, threadData);
  Heave_eqFunction_3920(data, threadData);
  Heave_eqFunction_3921(data, threadData);
  Heave_eqFunction_3922(data, threadData);
  Heave_eqFunction_3923(data, threadData);
  Heave_eqFunction_3924(data, threadData);
  Heave_eqFunction_3925(data, threadData);
  Heave_eqFunction_3926(data, threadData);
  Heave_eqFunction_3927(data, threadData);
  Heave_eqFunction_3928(data, threadData);
  Heave_eqFunction_3929(data, threadData);
  Heave_eqFunction_3930(data, threadData);
  Heave_eqFunction_3931(data, threadData);
  Heave_eqFunction_3932(data, threadData);
  Heave_eqFunction_3933(data, threadData);
  Heave_eqFunction_3934(data, threadData);
  Heave_eqFunction_3935(data, threadData);
  Heave_eqFunction_7182(data, threadData);
  Heave_eqFunction_7205(data, threadData);
  Heave_eqFunction_3938(data, threadData);
  Heave_eqFunction_3939(data, threadData);
  Heave_eqFunction_7235(data, threadData);
  Heave_eqFunction_3941(data, threadData);
  Heave_eqFunction_7236(data, threadData);
  Heave_eqFunction_3943(data, threadData);
  Heave_eqFunction_7209(data, threadData);
  Heave_eqFunction_3945(data, threadData);
  Heave_eqFunction_3946(data, threadData);
  Heave_eqFunction_3947(data, threadData);
  Heave_eqFunction_7375(data, threadData);
  Heave_eqFunction_7376(data, threadData);
  Heave_eqFunction_7374(data, threadData);
  Heave_eqFunction_7382(data, threadData);
  Heave_eqFunction_7383(data, threadData);
  Heave_eqFunction_7379(data, threadData);
  Heave_eqFunction_7380(data, threadData);
  Heave_eqFunction_7384(data, threadData);
  Heave_eqFunction_7377(data, threadData);
  Heave_eqFunction_7378(data, threadData);
  Heave_eqFunction_7381(data, threadData);
  Heave_eqFunction_7385(data, threadData);
  Heave_eqFunction_7387(data, threadData);
  Heave_eqFunction_3961(data, threadData);
  Heave_eqFunction_3962(data, threadData);
  Heave_eqFunction_7390(data, threadData);
  Heave_eqFunction_3964(data, threadData);
  Heave_eqFunction_7391(data, threadData);
  Heave_eqFunction_7392(data, threadData);
  Heave_eqFunction_7393(data, threadData);
  Heave_eqFunction_3968(data, threadData);
  Heave_eqFunction_7428(data, threadData);
  Heave_eqFunction_3970(data, threadData);
  Heave_eqFunction_7430(data, threadData);
  Heave_eqFunction_3972(data, threadData);
  Heave_eqFunction_7432(data, threadData);
  Heave_eqFunction_7433(data, threadData);
  Heave_eqFunction_7434(data, threadData);
  Heave_eqFunction_7435(data, threadData);
  Heave_eqFunction_7436(data, threadData);
  Heave_eqFunction_7437(data, threadData);
  Heave_eqFunction_7438(data, threadData);
  Heave_eqFunction_3980(data, threadData);
  Heave_eqFunction_3981(data, threadData);
  Heave_eqFunction_3982(data, threadData);
  Heave_eqFunction_3983(data, threadData);
  Heave_eqFunction_7443(data, threadData);
  Heave_eqFunction_7444(data, threadData);
  Heave_eqFunction_7457(data, threadData);
  Heave_eqFunction_7464(data, threadData);
  Heave_eqFunction_7471(data, threadData);
  Heave_eqFunction_7445(data, threadData);
  Heave_eqFunction_7446(data, threadData);
  Heave_eqFunction_3991(data, threadData);
  Heave_eqFunction_7458(data, threadData);
  Heave_eqFunction_7465(data, threadData);
  Heave_eqFunction_7472(data, threadData);
  Heave_eqFunction_3995(data, threadData);
  Heave_eqFunction_7459(data, threadData);
  Heave_eqFunction_7466(data, threadData);
  Heave_eqFunction_7473(data, threadData);
  Heave_eqFunction_3999(data, threadData);
  Heave_eqFunction_7214(data, threadData);
  Heave_eqFunction_4001(data, threadData);
  Heave_eqFunction_7216(data, threadData);
  Heave_eqFunction_4003(data, threadData);
  Heave_eqFunction_7218(data, threadData);
  Heave_eqFunction_7219(data, threadData);
  Heave_eqFunction_4006(data, threadData);
  Heave_eqFunction_4007(data, threadData);
  Heave_eqFunction_4008(data, threadData);
  Heave_eqFunction_4009(data, threadData);
  Heave_eqFunction_4010(data, threadData);
  Heave_eqFunction_7229(data, threadData);
  Heave_eqFunction_7228(data, threadData);
  Heave_eqFunction_7222(data, threadData);
  Heave_eqFunction_7221(data, threadData);
  Heave_eqFunction_7226(data, threadData);
  Heave_eqFunction_4016(data, threadData);
  Heave_eqFunction_4017(data, threadData);
  Heave_eqFunction_7225(data, threadData);
  Heave_eqFunction_7233(data, threadData);
  Heave_eqFunction_4020(data, threadData);
  Heave_eqFunction_4021(data, threadData);
  Heave_eqFunction_4022(data, threadData);
  Heave_eqFunction_7294(data, threadData);
  Heave_eqFunction_7395(data, threadData);
  Heave_eqFunction_7293(data, threadData);
  Heave_eqFunction_7295(data, threadData);
  Heave_eqFunction_7301(data, threadData);
  Heave_eqFunction_7307(data, threadData);
  Heave_eqFunction_7306(data, threadData);
  Heave_eqFunction_7303(data, threadData);
  Heave_eqFunction_7302(data, threadData);
  Heave_eqFunction_4032(data, threadData);
  Heave_eqFunction_4033(data, threadData);
  Heave_eqFunction_7410(data, threadData);
  Heave_eqFunction_7318(data, threadData);
  Heave_eqFunction_7349(data, threadData);
  Heave_eqFunction_7333(data, threadData);
  Heave_eqFunction_4038(data, threadData);
  Heave_eqFunction_7308(data, threadData);
  Heave_eqFunction_7325(data, threadData);
  Heave_eqFunction_7351(data, threadData);
  Heave_eqFunction_7364(data, threadData);
  Heave_eqFunction_7313(data, threadData);
  Heave_eqFunction_7340(data, threadData);
  Heave_eqFunction_8295(data, threadData);
  Heave_eqFunction_4046(data, threadData);
  Heave_eqFunction_7304(data, threadData);
  Heave_eqFunction_4048(data, threadData);
  Heave_eqFunction_4049(data, threadData);
  Heave_eqFunction_7310(data, threadData);
  Heave_eqFunction_7311(data, threadData);
  Heave_eqFunction_7326(data, threadData);
  Heave_eqFunction_7319(data, threadData);
  Heave_eqFunction_4054(data, threadData);
  Heave_eqFunction_4055(data, threadData);
  Heave_eqFunction_7321(data, threadData);
  Heave_eqFunction_7323(data, threadData);
  Heave_eqFunction_7322(data, threadData);
  Heave_eqFunction_7327(data, threadData);
  Heave_eqFunction_7328(data, threadData);
  Heave_eqFunction_7329(data, threadData);
  Heave_eqFunction_7330(data, threadData);
  Heave_eqFunction_7331(data, threadData);
  Heave_eqFunction_7332(data, threadData);
  Heave_eqFunction_7350(data, threadData);
  Heave_eqFunction_4066(data, threadData);
  Heave_eqFunction_4067(data, threadData);
  Heave_eqFunction_7353(data, threadData);
  Heave_eqFunction_7354(data, threadData);
  Heave_eqFunction_7365(data, threadData);
  Heave_eqFunction_7357(data, threadData);
  Heave_eqFunction_4072(data, threadData);
  Heave_eqFunction_4073(data, threadData);
  Heave_eqFunction_7359(data, threadData);
  Heave_eqFunction_7361(data, threadData);
  Heave_eqFunction_7360(data, threadData);
  Heave_eqFunction_7366(data, threadData);
  Heave_eqFunction_7367(data, threadData);
  Heave_eqFunction_7368(data, threadData);
  Heave_eqFunction_7369(data, threadData);
  Heave_eqFunction_7370(data, threadData);
  Heave_eqFunction_7371(data, threadData);
  Heave_eqFunction_7305(data, threadData);
  Heave_eqFunction_4084(data, threadData);
  Heave_eqFunction_4085(data, threadData);
  Heave_eqFunction_7315(data, threadData);
  Heave_eqFunction_7316(data, threadData);
  Heave_eqFunction_7355(data, threadData);
  Heave_eqFunction_7341(data, threadData);
  Heave_eqFunction_7334(data, threadData);
  Heave_eqFunction_4091(data, threadData);
  Heave_eqFunction_4092(data, threadData);
  Heave_eqFunction_7336(data, threadData);
  Heave_eqFunction_7338(data, threadData);
  Heave_eqFunction_7337(data, threadData);
  Heave_eqFunction_7363(data, threadData);
  Heave_eqFunction_7342(data, threadData);
  Heave_eqFunction_8293(data, threadData);
  Heave_eqFunction_7343(data, threadData);
  Heave_eqFunction_7344(data, threadData);
  Heave_eqFunction_8292(data, threadData);
  Heave_eqFunction_8297(data, threadData);
  Heave_eqFunction_8296(data, threadData);
  Heave_eqFunction_8294(data, threadData);
  Heave_eqFunction_7345(data, threadData);
  Heave_eqFunction_7346(data, threadData);
  Heave_eqFunction_7347(data, threadData);
  Heave_eqFunction_7372(data, threadData);
  Heave_eqFunction_7348(data, threadData);
  Heave_eqFunction_7394(data, threadData);
  Heave_eqFunction_7396(data, threadData);
  Heave_eqFunction_7398(data, threadData);
  Heave_eqFunction_7409(data, threadData);
  Heave_eqFunction_4114(data, threadData);
  Heave_eqFunction_4115(data, threadData);
  Heave_eqFunction_7397(data, threadData);
  Heave_eqFunction_7408(data, threadData);
  Heave_eqFunction_7413(data, threadData);
  Heave_eqFunction_7414(data, threadData);
  Heave_eqFunction_7411(data, threadData);
  Heave_eqFunction_7412(data, threadData);
  Heave_eqFunction_7415(data, threadData);
  Heave_eqFunction_7416(data, threadData);
  Heave_eqFunction_4124(data, threadData);
  Heave_eqFunction_4125(data, threadData);
  Heave_eqFunction_4126(data, threadData);
  Heave_eqFunction_4127(data, threadData);
  Heave_eqFunction_4131(data, threadData);
  Heave_eqFunction_4128(data, threadData);
  Heave_eqFunction_4129(data, threadData);
  Heave_eqFunction_4130(data, threadData);
  Heave_eqFunction_4132(data, threadData);
  Heave_eqFunction_7400(data, threadData);
  Heave_eqFunction_7401(data, threadData);
  Heave_eqFunction_7402(data, threadData);
  Heave_eqFunction_7403(data, threadData);
  Heave_eqFunction_4137(data, threadData);
  Heave_eqFunction_4138(data, threadData);
  Heave_eqFunction_7462(data, threadData);
  Heave_eqFunction_7469(data, threadData);
  Heave_eqFunction_4141(data, threadData);
  Heave_eqFunction_7461(data, threadData);
  Heave_eqFunction_7468(data, threadData);
  Heave_eqFunction_4144(data, threadData);
  Heave_eqFunction_7460(data, threadData);
  Heave_eqFunction_7467(data, threadData);
  Heave_eqFunction_4372(data, threadData);
  Heave_eqFunction_8515(data, threadData);
  Heave_eqFunction_8526(data, threadData);
  Heave_eqFunction_8522(data, threadData);
  Heave_eqFunction_8528(data, threadData);
  Heave_eqFunction_8524(data, threadData);
  Heave_eqFunction_8523(data, threadData);
  Heave_eqFunction_8525(data, threadData);
  Heave_eqFunction_8537(data, threadData);
  Heave_eqFunction_8532(data, threadData);
  Heave_eqFunction_8533(data, threadData);
  Heave_eqFunction_8534(data, threadData);
  Heave_eqFunction_8529(data, threadData);
  Heave_eqFunction_8535(data, threadData);
  Heave_eqFunction_8536(data, threadData);
  Heave_eqFunction_8530(data, threadData);
  Heave_eqFunction_8531(data, threadData);
  Heave_eqFunction_8550(data, threadData);
  Heave_eqFunction_4390(data, threadData);
  Heave_eqFunction_4391(data, threadData);
  Heave_eqFunction_8551(data, threadData);
  Heave_eqFunction_8552(data, threadData);
  Heave_eqFunction_4394(data, threadData);
  Heave_eqFunction_8557(data, threadData);
  Heave_eqFunction_4396(data, threadData);
  Heave_eqFunction_8556(data, threadData);
  Heave_eqFunction_4398(data, threadData);
  Heave_eqFunction_8546(data, threadData);
  Heave_eqFunction_4400(data, threadData);
  Heave_eqFunction_8544(data, threadData);
  Heave_eqFunction_4402(data, threadData);
  Heave_eqFunction_4403(data, threadData);
  Heave_eqFunction_8541(data, threadData);
  Heave_eqFunction_4405(data, threadData);
  Heave_eqFunction_4406(data, threadData);
  Heave_eqFunction_8549(data, threadData);
  Heave_eqFunction_8561(data, threadData);
  Heave_eqFunction_8560(data, threadData);
  Heave_eqFunction_8559(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif