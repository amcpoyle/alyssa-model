#include "Roll_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void Roll_eqFunction_8562(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8563(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8573(DATA *data, threadData_t *threadData);


/*
equation index: 4414
type: SIMPLE_ASSIGN
rear.cornerR.chassisConnect.f[1] = rear.cornerR.springChassis.frame_a.f[1] + rear.cornerR.lcaMount.frame_a.f[1] + rear.cornerR.ucaMount.frame_a.f[1]
*/
void Roll_eqFunction_4414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3823]] /* rear.cornerR.chassisConnect.f[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4230]] /* rear.cornerR.springChassis.frame_a.f[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4158]] /* rear.cornerR.lcaMount.frame_a.f[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4480]] /* rear.cornerR.ucaMount.frame_a.f[1] variable */);
  TRACE_POP
}
extern void Roll_eqFunction_8581(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8577(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8578(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8579(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8574(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8575(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8576(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8567(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8571(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8572(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8564(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8565(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8566(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8568(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8569(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8570(DATA *data, threadData_t *threadData);


/*
equation index: 4431
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1.rodLength = 0.36359317925395684
*/
void Roll_eqFunction_4431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4431};
  (data->simulationInfo->realParameter[163] /* front.cornerL.jointUSR.rod1.rodLength PARAM */) = 0.36359317925395684;
  TRACE_POP
}

/*
equation index: 4432
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1.rodShape.length = front.cornerL.jointUSR.rod1.rodLength
*/
void Roll_eqFunction_4432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4432};
  (data->simulationInfo->realParameter[165] /* front.cornerL.jointUSR.rod1.rodShape.length PARAM */) = (data->simulationInfo->realParameter[163] /* front.cornerL.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 4433
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1Length = front.cornerL.jointUSR.rod1.rodLength
*/
void Roll_eqFunction_4433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4433};
  (data->simulationInfo->realParameter[184] /* front.cornerL.jointUSR.rod1Length PARAM */) = (data->simulationInfo->realParameter[163] /* front.cornerL.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 4434
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.revolute.lengthConstraint = front.cornerL.jointUSR.rod1Length
*/
void Roll_eqFunction_4434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4434};
  (data->simulationInfo->realParameter[132] /* front.cornerL.jointUSR.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[184] /* front.cornerL.jointUSR.rod1Length PARAM */);
  TRACE_POP
}
extern void Roll_eqFunction_6929(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6933(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6934(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6935(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6990(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6991(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6992(DATA *data, threadData_t *threadData);


/*
equation index: 4442
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.revolute.positiveBranch = AlyssaAnimation.Roll.front.cornerL.jointUSR.revolute.selectBranch(front.cornerL.jointUSR.revolute.lengthConstraint, {-1.0, -0.0, 0.0}, 0.017453292519943295 * (front.cornerL.jointUSR.revolute.phi_offset + front.cornerL.jointUSR.revolute.phi_guess), front.cornerL.jointUSR.revolute.r_a, front.cornerL.jointUSR.revolute.r_b)
*/
void Roll_eqFunction_4442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4442};
  real_array tmp159;
  real_array tmp160;
  real_array_create(&tmp159, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* front.cornerL.jointUSR.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp160, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* front.cornerL.jointUSR.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[8] /* front.cornerL.jointUSR.revolute.positiveBranch PARAM */) = omc_AlyssaAnimation_Roll_front_cornerL_jointUSR_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[132] /* front.cornerL.jointUSR.revolute.lengthConstraint PARAM */), _OMC_LIT23, (0.017453292519943295) * ((data->simulationInfo->realParameter[137] /* front.cornerL.jointUSR.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[136] /* front.cornerL.jointUSR.revolute.phi_guess PARAM */)), tmp159, tmp160);
  TRACE_POP
}
extern void Roll_eqFunction_6937(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6994(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6936(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6938(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6942(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6943(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6944(DATA *data, threadData_t *threadData);


/*
equation index: 4450
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.revolute.R_rel.T[3,2] = sin(front.cornerL.jointUSR.revolute.angle)
*/
void Roll_eqFunction_4450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4450};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* front.cornerL.jointUSR.revolute.angle DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4451
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_im.r_0[3] = front.cornerL.springArm.frame_a.r_0[3] - (-0.5499999999999999) * front.cornerL.jointUSR.revolute.R_rel.T[3,2]
*/
void Roll_eqFunction_4451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4451};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1004]] /* front.cornerL.jointUSR.frame_im.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* front.cornerL.springArm.frame_a.r_0[3] DUMMY_STATE */) - ((-0.5499999999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}
extern void Roll_eqFunction_6969(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6970(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6971(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6978(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6979(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7026(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7027(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7028(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7029(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7030(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7031(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7032(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7033(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7036(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7035(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7034(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7037(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7040(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7039(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7038(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7047(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7053(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7062(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7048(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7914(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7044(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7046(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7061(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7045(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7913(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7041(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7043(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7054(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7057(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7056(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7055(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7060(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7063(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7068(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7066(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7064(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7042(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7912(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7916(DATA *data, threadData_t *threadData);


/*
equation index: 4496
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.A = (-2.0) * (front.cornerL.tieRod.revolute.r_b[1] * front.cornerL.tieRod.revolute.r_a[1] + front.cornerL.tieRod.revolute.r_b[2] * front.cornerL.tieRod.revolute.r_a[2] + front.cornerL.tieRod.revolute.r_b[3] * front.cornerL.tieRod.revolute.r_a[3] - front.cornerL.tieRod.revolute.e_r_b * front.cornerL.tieRod.revolute.e_r_a)
*/
void Roll_eqFunction_4496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4496};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1398]] /* front.cornerL.tieRod.revolute.A DUMMY_STATE */) = (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* front.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* front.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* front.cornerL.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* front.cornerL.tieRod.revolute.r_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* front.cornerL.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* front.cornerL.tieRod.revolute.r_a[3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* front.cornerL.tieRod.revolute.e_r_b DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1428]] /* front.cornerL.tieRod.revolute.e_r_a DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 4497
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.B = 2.0 * (front.cornerL.tieRod.revolute.r_b[1] * ((-0.24752939586124137) * front.cornerL.tieRod.revolute.r_a[3] + (-0.9626143172381612) * front.cornerL.tieRod.revolute.r_a[2]) + front.cornerL.tieRod.revolute.r_b[2] * (0.9626143172381612 * front.cornerL.tieRod.revolute.r_a[1] + (-0.11001306482721843) * front.cornerL.tieRod.revolute.r_a[3]) + front.cornerL.tieRod.revolute.r_b[3] * (0.11001306482721843 * front.cornerL.tieRod.revolute.r_a[2] + 0.24752939586124137 * front.cornerL.tieRod.revolute.r_a[1]))
*/
void Roll_eqFunction_4497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4497};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1399]] /* front.cornerL.tieRod.revolute.B DUMMY_STATE */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* front.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((-0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* front.cornerL.tieRod.revolute.r_a[3] DUMMY_STATE */)) + (-0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* front.cornerL.tieRod.revolute.r_a[2] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* front.cornerL.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* front.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)) + (-0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* front.cornerL.tieRod.revolute.r_a[3] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* front.cornerL.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* front.cornerL.tieRod.revolute.r_a[2] DUMMY_STATE */)) + (0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* front.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */))));
  TRACE_POP
}
extern void Roll_eqFunction_7919(DATA *data, threadData_t *threadData);


/*
equation index: 4499
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.C = front.cornerL.tieRod.revolute.r_a[1] ^ 2.0 + front.cornerL.tieRod.revolute.r_a[2] ^ 2.0 + front.cornerL.tieRod.revolute.r_a[3] ^ 2.0 + front.cornerL.tieRod.revolute.r_b[1] ^ 2.0 + front.cornerL.tieRod.revolute.r_b[2] ^ 2.0 + front.cornerL.tieRod.revolute.r_b[3] ^ 2.0 + (-2.0) * front.cornerL.tieRod.revolute.e_r_b * front.cornerL.tieRod.revolute.e_r_a - front.cornerL.tieRod.revolute.lengthConstraint ^ 2.0
*/
void Roll_eqFunction_4499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4499};
  modelica_real tmp161;
  modelica_real tmp162;
  modelica_real tmp163;
  modelica_real tmp164;
  modelica_real tmp165;
  modelica_real tmp166;
  modelica_real tmp167;
  tmp161 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* front.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */);
  tmp162 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* front.cornerL.tieRod.revolute.r_a[2] DUMMY_STATE */);
  tmp163 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* front.cornerL.tieRod.revolute.r_a[3] DUMMY_STATE */);
  tmp164 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* front.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */);
  tmp165 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* front.cornerL.tieRod.revolute.r_b[2] DUMMY_STATE */);
  tmp166 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* front.cornerL.tieRod.revolute.r_b[3] DUMMY_STATE */);
  tmp167 = (data->simulationInfo->realParameter[446] /* front.cornerL.tieRod.revolute.lengthConstraint PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1400]] /* front.cornerL.tieRod.revolute.C DUMMY_STATE */) = (tmp161 * tmp161) + (tmp162 * tmp162) + (tmp163 * tmp163) + (tmp164 * tmp164) + (tmp165 * tmp165) + (tmp166 * tmp166) + (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* front.cornerL.tieRod.revolute.e_r_b DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1428]] /* front.cornerL.tieRod.revolute.e_r_a DUMMY_STATE */))) - ((tmp167 * tmp167));
  TRACE_POP
}
extern void Roll_eqFunction_7920(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7921(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7922(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7049(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7052(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7069(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7051(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7067(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7050(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7065(DATA *data, threadData_t *threadData);


/*
equation index: 4510
type: SIMPLE_ASSIGN
points[1,11,2] = front.cornerL.springArm.frame_a.r_0[2] + (-0.39) * front.cornerL.jointUSR.revolute.R_rel.T[3,3] + (-0.009999999999999981) * front.cornerL.jointUSR.revolute.R_rel.T[3,2]
*/
void Roll_eqFunction_4510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4510};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2852]] /* points[1,11,2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1275]] /* front.cornerL.springArm.frame_a.r_0[2] DUMMY_STATE */) + (-0.39) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) + (-0.009999999999999981) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4511
type: SIMPLE_ASSIGN
front.cornerL.coilover.r_rel_0[2] = points[1,11,2] - points[1,10,2]
*/
void Roll_eqFunction_4511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4511};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* front.cornerL.coilover.r_rel_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2852]] /* points[1,11,2] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2849]] /* points[1,10,2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4512
type: SIMPLE_ASSIGN
front.cornerL.coilover.r_rel_a[2] = front.cornerL.coilover.r_rel_0[2]
*/
void Roll_eqFunction_4512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4512};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[923]] /* front.cornerL.coilover.r_rel_a[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* front.cornerL.coilover.r_rel_0[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4513
type: SIMPLE_ASSIGN
points[1,11,3] = front.cornerL.springArm.frame_a.r_0[3] + (-0.009999999999999981) * front.cornerL.jointUSR.revolute.R_rel.T[3,3] - (-0.39) * front.cornerL.jointUSR.revolute.R_rel.T[3,2]
*/
void Roll_eqFunction_4513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4513};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2853]] /* points[1,11,3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1276]] /* front.cornerL.springArm.frame_a.r_0[3] DUMMY_STATE */) + (-0.009999999999999981) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) - ((-0.39) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 4514
type: SIMPLE_ASSIGN
front.cornerL.coilover.r_rel_0[3] = points[1,11,3] - points[1,10,3]
*/
void Roll_eqFunction_4514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4514};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* front.cornerL.coilover.r_rel_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2853]] /* points[1,11,3] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2850]] /* points[1,10,3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4515
type: SIMPLE_ASSIGN
front.cornerL.coilover.length = sqrt(front.cornerL.coilover.r_rel_0 * front.cornerL.coilover.r_rel_0)
*/
void Roll_eqFunction_4515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4515};
  real_array tmp168;
  real_array tmp169;
  modelica_real tmp170;
  real_array_create(&tmp168, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* front.cornerL.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp169, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* front.cornerL.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  tmp170 = mul_real_scalar_product(tmp168, tmp169);
  if(!(tmp170 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(front.cornerL.coilover.r_rel_0 * front.cornerL.coilover.r_rel_0) was %g should be >= 0", tmp170);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* front.cornerL.coilover.length DUMMY_STATE */) = sqrt(tmp170);
  TRACE_POP
}

/*
equation index: 4516
type: SIMPLE_ASSIGN
front.cornerL.coilover.s = Modelica.Mechanics.MultiBody.Frames.Internal.maxWithoutEvent(front.cornerL.coilover.length, front.cornerL.coilover.s_small)
*/
void Roll_eqFunction_4516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4516};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* front.cornerL.coilover.s DUMMY_STATE */) = omc_Modelica_Mechanics_MultiBody_Frames_Internal_maxWithoutEvent(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* front.cornerL.coilover.length DUMMY_STATE */), (data->simulationInfo->realParameter[10] /* front.cornerL.coilover.s_small PARAM */));
  TRACE_POP
}

/*
equation index: 4517
type: SIMPLE_ASSIGN
telemetry[1,4] = front.cornerL.coilover.s
*/
void Roll_eqFunction_4517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4733]] /* telemetry[1,4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* front.cornerL.coilover.s DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4518
type: SIMPLE_ASSIGN
front.cornerL.coilover.e_a[1] = front.cornerL.coilover.r_rel_a[1] / front.cornerL.coilover.s
*/
void Roll_eqFunction_4518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4518};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* front.cornerL.coilover.e_a[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* front.cornerL.coilover.r_rel_a[1] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* front.cornerL.coilover.s DUMMY_STATE */),"front.cornerL.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 4519
type: SIMPLE_ASSIGN
front.cornerL.coilover.shape_b.r_shape[1] = front.cornerL.coilover.e_a[1] * min(front.cornerL.coilover.length_a, front.cornerL.coilover.s)
*/
void Roll_eqFunction_4519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4519};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[953]] /* front.cornerL.coilover.shape_b.r_shape[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* front.cornerL.coilover.e_a[1] variable */)) * (fmin((data->simulationInfo->realParameter[9] /* front.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* front.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 4520
type: SIMPLE_ASSIGN
front.cornerL.coilover.e_a[2] = front.cornerL.coilover.r_rel_a[2] / front.cornerL.coilover.s
*/
void Roll_eqFunction_4520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* front.cornerL.coilover.e_a[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[923]] /* front.cornerL.coilover.r_rel_a[2] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* front.cornerL.coilover.s DUMMY_STATE */),"front.cornerL.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 4521
type: SIMPLE_ASSIGN
front.cornerL.coilover.shape_b.r_shape[2] = front.cornerL.coilover.e_a[2] * min(front.cornerL.coilover.length_a, front.cornerL.coilover.s)
*/
void Roll_eqFunction_4521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[954]] /* front.cornerL.coilover.shape_b.r_shape[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[904]] /* front.cornerL.coilover.e_a[2] variable */)) * (fmin((data->simulationInfo->realParameter[9] /* front.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* front.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 4522
type: SIMPLE_ASSIGN
front.cornerL.coilover.e_rel_0[1] = front.cornerL.coilover.r_rel_0[1] / front.cornerL.coilover.s
*/
void Roll_eqFunction_4522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4522};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[906]] /* front.cornerL.coilover.e_rel_0[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* front.cornerL.coilover.r_rel_0[1] DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* front.cornerL.coilover.s DUMMY_STATE */),"front.cornerL.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 4523
type: SIMPLE_ASSIGN
front.cornerL.coilover.e_rel_0[2] = front.cornerL.coilover.r_rel_0[2] / front.cornerL.coilover.s
*/
void Roll_eqFunction_4523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[907]] /* front.cornerL.coilover.e_rel_0[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* front.cornerL.coilover.r_rel_0[2] DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* front.cornerL.coilover.s DUMMY_STATE */),"front.cornerL.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 4524
type: SIMPLE_ASSIGN
front.cornerL.coilover.shape_a.length = min(front.cornerL.coilover.length_a, front.cornerL.coilover.s)
*/
void Roll_eqFunction_4524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4524};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[941]] /* front.cornerL.coilover.shape_a.length variable */) = fmin((data->simulationInfo->realParameter[9] /* front.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* front.cornerL.coilover.s DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4525
type: SIMPLE_ASSIGN
front.cornerL.coilover.shape_b.length = max(front.cornerL.coilover.s - front.cornerL.coilover.length_a, 0.0)
*/
void Roll_eqFunction_4525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[952]] /* front.cornerL.coilover.shape_b.length variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* front.cornerL.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[9] /* front.cornerL.coilover.length_a PARAM */),0.0);
  TRACE_POP
}

/*
equation index: 4526
type: SIMPLE_ASSIGN
front.cornerL.coilover.r_rel_a[3] = front.cornerL.coilover.r_rel_0[3]
*/
void Roll_eqFunction_4526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4526};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[924]] /* front.cornerL.coilover.r_rel_a[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* front.cornerL.coilover.r_rel_0[3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4527
type: SIMPLE_ASSIGN
front.cornerL.coilover.e_a[3] = front.cornerL.coilover.r_rel_a[3] / front.cornerL.coilover.s
*/
void Roll_eqFunction_4527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* front.cornerL.coilover.e_a[3] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[924]] /* front.cornerL.coilover.r_rel_a[3] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* front.cornerL.coilover.s DUMMY_STATE */),"front.cornerL.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 4528
type: SIMPLE_ASSIGN
front.cornerL.coilover.shape_b.r_shape[3] = front.cornerL.coilover.e_a[3] * min(front.cornerL.coilover.length_a, front.cornerL.coilover.s)
*/
void Roll_eqFunction_4528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4528};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[955]] /* front.cornerL.coilover.shape_b.r_shape[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[905]] /* front.cornerL.coilover.e_a[3] variable */)) * (fmin((data->simulationInfo->realParameter[9] /* front.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* front.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 4529
type: SIMPLE_ASSIGN
front.cornerL.coilover.e_rel_0[3] = front.cornerL.coilover.r_rel_0[3] / front.cornerL.coilover.s
*/
void Roll_eqFunction_4529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[908]] /* front.cornerL.coilover.e_rel_0[3] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* front.cornerL.coilover.r_rel_0[3] DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* front.cornerL.coilover.s DUMMY_STATE */),"front.cornerL.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 4530
type: SIMPLE_ASSIGN
view[1].spring.shape.length = sqrt(front.cornerL.coilover.r_rel_0[1] ^ 2.0 + front.cornerL.coilover.r_rel_0[2] ^ 2.0 + front.cornerL.coilover.r_rel_0[3] ^ 2.0)
*/
void Roll_eqFunction_4530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4530};
  modelica_real tmp171;
  modelica_real tmp172;
  modelica_real tmp173;
  modelica_real tmp174;
  tmp171 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* front.cornerL.coilover.r_rel_0[1] DUMMY_STATE */);
  tmp172 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[920]] /* front.cornerL.coilover.r_rel_0[2] DUMMY_STATE */);
  tmp173 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[921]] /* front.cornerL.coilover.r_rel_0[3] DUMMY_STATE */);
  tmp174 = (tmp171 * tmp171) + (tmp172 * tmp172) + (tmp173 * tmp173);
  if(!(tmp174 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(front.cornerL.coilover.r_rel_0[1] ^ 2.0 + front.cornerL.coilover.r_rel_0[2] ^ 2.0 + front.cornerL.coilover.r_rel_0[3] ^ 2.0) was %g should be >= 0", tmp174);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5086]] /* view[1].spring.shape.length variable */) = sqrt(tmp174);
  TRACE_POP
}

/*
equation index: 4531
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.aux = 0.5499999999999999 * (front.cornerL.jointUSR.revolute.R_rel.T[3,2] * (front.cornerL.jointUSR.frame_a.R.T[1,2] * front.cornerL.jointUSR.rod1.eRod_a[1] + front.cornerL.jointUSR.frame_a.R.T[2,2] * front.cornerL.jointUSR.rod1.eRod_a[2] + front.cornerL.jointUSR.frame_a.R.T[3,2] * front.cornerL.jointUSR.rod1.eRod_a[3]) + front.cornerL.jointUSR.revolute.R_rel.T[3,3] * (front.cornerL.jointUSR.frame_a.R.T[1,3] * front.cornerL.jointUSR.rod1.eRod_a[1] + front.cornerL.jointUSR.frame_a.R.T[2,3] * front.cornerL.jointUSR.rod1.eRod_a[2] + front.cornerL.jointUSR.frame_a.R.T[3,3] * front.cornerL.jointUSR.rod1.eRod_a[3]))
*/
void Roll_eqFunction_4531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[959]] /* front.cornerL.jointUSR.aux variable */) = (0.5499999999999999) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* front.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1129]] /* front.cornerL.jointUSR.rod1.eRod_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* front.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* front.cornerL.jointUSR.rod1.eRod_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* front.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* front.cornerL.jointUSR.rod1.eRod_a[3] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* front.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1129]] /* front.cornerL.jointUSR.rod1.eRod_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* front.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1130]] /* front.cornerL.jointUSR.rod1.eRod_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* front.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1131]] /* front.cornerL.jointUSR.rod1.eRod_a[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Roll_eqFunction_6968(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6993(DATA *data, threadData_t *threadData);


/*
equation index: 4534
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.revolute.angle = if noEvent(front.cornerL.jointUSR.revolute.kcos_angle == 0.0) then front.cornerL.jointUSR.revolute.kcos_angle else ($DER.front.cornerL.jointUSR.revolute.ksin_angle * front.cornerL.jointUSR.revolute.kcos_angle - front.cornerL.jointUSR.revolute.ksin_angle * $DER.front.cornerL.jointUSR.revolute.kcos_angle) / (front.cornerL.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (front.cornerL.jointUSR.revolute.ksin_angle / front.cornerL.jointUSR.revolute.kcos_angle) ^ 2.0))
*/
void Roll_eqFunction_4534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4534};
  modelica_real tmp175;
  modelica_real tmp176;
  modelica_boolean tmp177;
  modelica_real tmp178;
  tmp177 = (modelica_boolean)((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* front.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */) == 0.0);
  if(tmp177)
  {
    tmp178 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* front.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */);
  }
  else
  {
    tmp175 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* front.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */);
    tmp176 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* front.cornerL.jointUSR.revolute.ksin_angle DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* front.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */),"front.cornerL.jointUSR.revolute.kcos_angle",equationIndexes);
    tmp178 = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* der(front.cornerL.jointUSR.revolute.ksin_angle) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1089]] /* front.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1090]] /* front.cornerL.jointUSR.revolute.ksin_angle DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* der(front.cornerL.jointUSR.revolute.kcos_angle) DUMMY_DER */))),((tmp175 * tmp175)) * (1.0 + (tmp176 * tmp176)),"front.cornerL.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (front.cornerL.jointUSR.revolute.ksin_angle / front.cornerL.jointUSR.revolute.kcos_angle) ^ 2.0)",equationIndexes);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* der(front.cornerL.jointUSR.revolute.angle) DUMMY_DER */) = tmp178;
  TRACE_POP
}

/*
equation index: 4535
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.revolute.R_rel.w[1] = -$DER.front.cornerL.jointUSR.revolute.angle
*/
void Roll_eqFunction_4535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1060]] /* front.cornerL.jointUSR.revolute.R_rel.w[1] DUMMY_STATE */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* der(front.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void Roll_eqFunction_7023(DATA *data, threadData_t *threadData);


/*
equation index: 4537
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.frame_im.r_0[2] = $DER.front.cornerL.springArm.frame_a.r_0[2] + (-0.5499999999999999) * front.cornerL.jointUSR.revolute.R_rel.T[3,2] * front.cornerL.springArm.frame_b.R.w[1]
*/
void Roll_eqFunction_4537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* der(front.cornerL.jointUSR.frame_im.r_0[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* der(front.cornerL.springArm.frame_a.r_0[2]) DUMMY_DER */) + (-0.5499999999999999) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* front.cornerL.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Roll_eqFunction_7024(DATA *data, threadData_t *threadData);


/*
equation index: 4539
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.frame_im.r_0[3] = $DER.front.cornerL.springArm.frame_a.r_0[3] + (-0.5499999999999999) * front.cornerL.jointUSR.revolute.R_rel.T[3,3] * front.cornerL.springArm.frame_b.R.w[1]
*/
void Roll_eqFunction_4539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* der(front.cornerL.jointUSR.frame_im.r_0[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* der(front.cornerL.springArm.frame_a.r_0[3]) DUMMY_DER */) + (-0.5499999999999999) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* front.cornerL.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Roll_eqFunction_6997(DATA *data, threadData_t *threadData);


/*
equation index: 4541
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1.der_rRod_a_L[1] = (front.cornerL.jointUSR.frame_a.R.T[1,1] * $DER.front.cornerL.jointUSR.rod1.rRod_0[1] + front.cornerL.jointUSR.frame_a.R.T[1,2] * $DER.front.cornerL.jointUSR.rod1.rRod_0[2] + front.cornerL.jointUSR.frame_a.R.T[1,3] * $DER.front.cornerL.jointUSR.rod1.rRod_0[3] + front.cornerL.jointUSR.frame_a.R.w[3] * front.cornerL.jointUSR.rod1.rRod_a[2] - front.cornerL.jointUSR.frame_a.R.w[2] * front.cornerL.jointUSR.rod1.rRod_a[3]) / front.cornerL.jointUSR.rod1.rodLength
*/
void Roll_eqFunction_4541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4541};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1120]] /* front.cornerL.jointUSR.rod1.der_rRod_a_L[1] DUMMY_STATE */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* front.cornerL.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* der(front.cornerL.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* front.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* der(front.cornerL.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* front.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* der(front.cornerL.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* front.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* front.cornerL.jointUSR.rod1.rRod_a[2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* front.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1155]] /* front.cornerL.jointUSR.rod1.rRod_a[3] DUMMY_STATE */))),(data->simulationInfo->realParameter[163] /* front.cornerL.jointUSR.rod1.rodLength PARAM */),"front.cornerL.jointUSR.rod1.rodLength",equationIndexes);
  TRACE_POP
}

/*
equation index: 4542
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1.der_rRod_a_L[2] = (front.cornerL.jointUSR.frame_a.R.T[2,1] * $DER.front.cornerL.jointUSR.rod1.rRod_0[1] + front.cornerL.jointUSR.frame_a.R.T[2,2] * $DER.front.cornerL.jointUSR.rod1.rRod_0[2] + front.cornerL.jointUSR.frame_a.R.T[2,3] * $DER.front.cornerL.jointUSR.rod1.rRod_0[3] + front.cornerL.jointUSR.frame_a.R.w[1] * front.cornerL.jointUSR.rod1.rRod_a[3] - front.cornerL.jointUSR.frame_a.R.w[3] * front.cornerL.jointUSR.rod1.rRod_a[1]) / front.cornerL.jointUSR.rod1.rodLength
*/
void Roll_eqFunction_4542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4542};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1121]] /* front.cornerL.jointUSR.rod1.der_rRod_a_L[2] DUMMY_STATE */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* front.cornerL.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* der(front.cornerL.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* front.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* der(front.cornerL.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* front.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* der(front.cornerL.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* front.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1155]] /* front.cornerL.jointUSR.rod1.rRod_a[3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* front.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* front.cornerL.jointUSR.rod1.rRod_a[1] DUMMY_STATE */))),(data->simulationInfo->realParameter[163] /* front.cornerL.jointUSR.rod1.rodLength PARAM */),"front.cornerL.jointUSR.rod1.rodLength",equationIndexes);
  TRACE_POP
}

/*
equation index: 4543
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1.der_rRod_a_L[3] = (front.cornerL.jointUSR.frame_a.R.T[3,1] * $DER.front.cornerL.jointUSR.rod1.rRod_0[1] + front.cornerL.jointUSR.frame_a.R.T[3,2] * $DER.front.cornerL.jointUSR.rod1.rRod_0[2] + front.cornerL.jointUSR.frame_a.R.T[3,3] * $DER.front.cornerL.jointUSR.rod1.rRod_0[3] + front.cornerL.jointUSR.frame_a.R.w[2] * front.cornerL.jointUSR.rod1.rRod_a[1] - front.cornerL.jointUSR.frame_a.R.w[1] * front.cornerL.jointUSR.rod1.rRod_a[2]) / front.cornerL.jointUSR.rod1.rodLength
*/
void Roll_eqFunction_4543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4543};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1122]] /* front.cornerL.jointUSR.rod1.der_rRod_a_L[3] DUMMY_STATE */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* front.cornerL.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* der(front.cornerL.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* front.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* der(front.cornerL.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* front.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* der(front.cornerL.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* front.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1153]] /* front.cornerL.jointUSR.rod1.rRod_a[1] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* front.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1154]] /* front.cornerL.jointUSR.rod1.rRod_a[2] DUMMY_STATE */))),(data->simulationInfo->realParameter[163] /* front.cornerL.jointUSR.rod1.rodLength PARAM */),"front.cornerL.jointUSR.rod1.rodLength",equationIndexes);
  TRACE_POP
}
extern void Roll_eqFunction_7072(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7073(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7071(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7078(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7079(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7076(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7077(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8640(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7074(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7075(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8642(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8641(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8644(DATA *data, threadData_t *threadData);


/*
equation index: 4557
type: SIMPLE_ASSIGN
$DER.front.cornerL.tieRod.revolute.A = (-2.0) * (front.cornerL.tieRod.revolute.r_b[1] * $DER.front.cornerL.tieRod.revolute.r_a[1] + $DER.front.cornerL.tieRod.revolute.r_b[1] * front.cornerL.tieRod.revolute.r_a[1] + front.cornerL.tieRod.revolute.r_b[2] * $DER.front.cornerL.tieRod.revolute.r_a[2] + $DER.front.cornerL.tieRod.revolute.r_b[2] * front.cornerL.tieRod.revolute.r_a[2] + front.cornerL.tieRod.revolute.r_b[3] * $DER.front.cornerL.tieRod.revolute.r_a[3] + $DER.front.cornerL.tieRod.revolute.r_b[3] * front.cornerL.tieRod.revolute.r_a[3] + (-front.cornerL.tieRod.revolute.e_r_b) * $DER.front.cornerL.tieRod.revolute.e_r_a - $DER.front.cornerL.tieRod.revolute.e_r_b * front.cornerL.tieRod.revolute.e_r_a)
*/
void Roll_eqFunction_4557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4557};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* der(front.cornerL.tieRod.revolute.A) DUMMY_DER */) = (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* front.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* der(front.cornerL.tieRod.revolute.r_a[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(front.cornerL.tieRod.revolute.r_b[1]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* front.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* front.cornerL.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* der(front.cornerL.tieRod.revolute.r_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(front.cornerL.tieRod.revolute.r_b[2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* front.cornerL.tieRod.revolute.r_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* front.cornerL.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(front.cornerL.tieRod.revolute.r_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(front.cornerL.tieRod.revolute.r_b[3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* front.cornerL.tieRod.revolute.r_a[3] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* front.cornerL.tieRod.revolute.e_r_b DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* der(front.cornerL.tieRod.revolute.e_r_a) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* der(front.cornerL.tieRod.revolute.e_r_b) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1428]] /* front.cornerL.tieRod.revolute.e_r_a DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 4558
type: SIMPLE_ASSIGN
$DER.front.cornerL.tieRod.revolute.B = 2.0 * (front.cornerL.tieRod.revolute.r_b[1] * ((-0.24752939586124137) * $DER.front.cornerL.tieRod.revolute.r_a[3] + (-0.9626143172381612) * $DER.front.cornerL.tieRod.revolute.r_a[2]) + $DER.front.cornerL.tieRod.revolute.r_b[1] * ((-0.24752939586124137) * front.cornerL.tieRod.revolute.r_a[3] + (-0.9626143172381612) * front.cornerL.tieRod.revolute.r_a[2]) + front.cornerL.tieRod.revolute.r_b[2] * (0.9626143172381612 * $DER.front.cornerL.tieRod.revolute.r_a[1] + (-0.11001306482721843) * $DER.front.cornerL.tieRod.revolute.r_a[3]) + $DER.front.cornerL.tieRod.revolute.r_b[2] * (0.9626143172381612 * front.cornerL.tieRod.revolute.r_a[1] + (-0.11001306482721843) * front.cornerL.tieRod.revolute.r_a[3]) + front.cornerL.tieRod.revolute.r_b[3] * (0.11001306482721843 * $DER.front.cornerL.tieRod.revolute.r_a[2] + 0.24752939586124137 * $DER.front.cornerL.tieRod.revolute.r_a[1]) + $DER.front.cornerL.tieRod.revolute.r_b[3] * (0.11001306482721843 * front.cornerL.tieRod.revolute.r_a[2] + 0.24752939586124137 * front.cornerL.tieRod.revolute.r_a[1]))
*/
void Roll_eqFunction_4558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* der(front.cornerL.tieRod.revolute.B) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* front.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((-0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(front.cornerL.tieRod.revolute.r_a[3]) DUMMY_DER */)) + (-0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* der(front.cornerL.tieRod.revolute.r_a[2]) DUMMY_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(front.cornerL.tieRod.revolute.r_b[1]) DUMMY_DER */)) * ((-0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* front.cornerL.tieRod.revolute.r_a[3] DUMMY_STATE */)) + (-0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* front.cornerL.tieRod.revolute.r_a[2] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* front.cornerL.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* der(front.cornerL.tieRod.revolute.r_a[1]) DUMMY_DER */)) + (-0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(front.cornerL.tieRod.revolute.r_a[3]) DUMMY_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(front.cornerL.tieRod.revolute.r_b[2]) DUMMY_DER */)) * ((0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* front.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)) + (-0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* front.cornerL.tieRod.revolute.r_a[3] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* front.cornerL.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* der(front.cornerL.tieRod.revolute.r_a[2]) DUMMY_DER */)) + (0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* der(front.cornerL.tieRod.revolute.r_a[1]) DUMMY_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(front.cornerL.tieRod.revolute.r_b[3]) DUMMY_DER */)) * ((0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* front.cornerL.tieRod.revolute.r_a[2] DUMMY_STATE */)) + (0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* front.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */))));
  TRACE_POP
}
extern void Roll_eqFunction_8647(DATA *data, threadData_t *threadData);


/*
equation index: 4560
type: SIMPLE_ASSIGN
$DER.front.cornerL.tieRod.revolute.C = 2.0 * front.cornerL.tieRod.revolute.r_a[1] * $DER.front.cornerL.tieRod.revolute.r_a[1] + 2.0 * front.cornerL.tieRod.revolute.r_a[2] * $DER.front.cornerL.tieRod.revolute.r_a[2] + 2.0 * front.cornerL.tieRod.revolute.r_a[3] * $DER.front.cornerL.tieRod.revolute.r_a[3] + 2.0 * front.cornerL.tieRod.revolute.r_b[1] * $DER.front.cornerL.tieRod.revolute.r_b[1] + 2.0 * front.cornerL.tieRod.revolute.r_b[2] * $DER.front.cornerL.tieRod.revolute.r_b[2] + 2.0 * front.cornerL.tieRod.revolute.r_b[3] * $DER.front.cornerL.tieRod.revolute.r_b[3] + (-2.0) * (front.cornerL.tieRod.revolute.e_r_b * $DER.front.cornerL.tieRod.revolute.e_r_a + $DER.front.cornerL.tieRod.revolute.e_r_b * front.cornerL.tieRod.revolute.e_r_a)
*/
void Roll_eqFunction_4560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* der(front.cornerL.tieRod.revolute.C) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* front.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* der(front.cornerL.tieRod.revolute.r_a[1]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1444]] /* front.cornerL.tieRod.revolute.r_a[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* der(front.cornerL.tieRod.revolute.r_a[2]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1445]] /* front.cornerL.tieRod.revolute.r_a[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* der(front.cornerL.tieRod.revolute.r_a[3]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* front.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(front.cornerL.tieRod.revolute.r_b[1]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* front.cornerL.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(front.cornerL.tieRod.revolute.r_b[2]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* front.cornerL.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(front.cornerL.tieRod.revolute.r_b[3]) DUMMY_DER */))) + (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* front.cornerL.tieRod.revolute.e_r_b DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* der(front.cornerL.tieRod.revolute.e_r_a) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* der(front.cornerL.tieRod.revolute.e_r_b) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1428]] /* front.cornerL.tieRod.revolute.e_r_a DUMMY_STATE */)));
  TRACE_POP
}
extern void Roll_eqFunction_8648(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8649(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8650(DATA *data, threadData_t *threadData);


/*
equation index: 4564
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.rod1.rRod_a[1] = front.cornerL.jointUSR.frame_a.R.T[1,1] * $DER.front.cornerL.jointUSR.rod1.rRod_0[1] + front.cornerL.jointUSR.frame_a.R.T[1,2] * $DER.front.cornerL.jointUSR.rod1.rRod_0[2] + front.cornerL.jointUSR.frame_a.R.T[1,3] * $DER.front.cornerL.jointUSR.rod1.rRod_0[3] + front.cornerL.jointUSR.frame_a.R.w[3] * (front.cornerL.jointUSR.frame_a.R.T[2,1] * front.cornerL.jointUSR.rod1.rRod_0[1] + front.cornerL.jointUSR.frame_a.R.T[2,2] * front.cornerL.jointUSR.rod1.rRod_0[2] + front.cornerL.jointUSR.frame_a.R.T[2,3] * front.cornerL.jointUSR.rod1.rRod_0[3]) - front.cornerL.jointUSR.frame_a.R.w[2] * (front.cornerL.jointUSR.frame_a.R.T[3,1] * front.cornerL.jointUSR.rod1.rRod_0[1] + front.cornerL.jointUSR.frame_a.R.T[3,2] * front.cornerL.jointUSR.rod1.rRod_0[2] + front.cornerL.jointUSR.frame_a.R.T[3,3] * front.cornerL.jointUSR.rod1.rRod_0[3])
*/
void Roll_eqFunction_4564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* der(front.cornerL.jointUSR.rod1.rRod_a[1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* front.cornerL.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* der(front.cornerL.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* front.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* der(front.cornerL.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* front.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* der(front.cornerL.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* front.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* front.cornerL.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* front.cornerL.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* front.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* front.cornerL.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* front.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* front.cornerL.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* front.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* front.cornerL.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* front.cornerL.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* front.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* front.cornerL.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* front.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* front.cornerL.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Roll_eqFunction_7081(DATA *data, threadData_t *threadData);


/*
equation index: 4566
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.rod1.rRod_a[2] = front.cornerL.jointUSR.frame_a.R.T[2,1] * $DER.front.cornerL.jointUSR.rod1.rRod_0[1] + front.cornerL.jointUSR.frame_a.R.T[2,2] * $DER.front.cornerL.jointUSR.rod1.rRod_0[2] + front.cornerL.jointUSR.frame_a.R.T[2,3] * $DER.front.cornerL.jointUSR.rod1.rRod_0[3] + front.cornerL.jointUSR.frame_a.R.w[1] * (front.cornerL.jointUSR.frame_a.R.T[3,1] * front.cornerL.jointUSR.rod1.rRod_0[1] + front.cornerL.jointUSR.frame_a.R.T[3,2] * front.cornerL.jointUSR.rod1.rRod_0[2] + front.cornerL.jointUSR.frame_a.R.T[3,3] * front.cornerL.jointUSR.rod1.rRod_0[3]) - front.cornerL.jointUSR.frame_a.R.w[3] * (front.cornerL.jointUSR.frame_a.R.T[1,1] * front.cornerL.jointUSR.rod1.rRod_0[1] + front.cornerL.jointUSR.frame_a.R.T[1,2] * front.cornerL.jointUSR.rod1.rRod_0[2] + front.cornerL.jointUSR.frame_a.R.T[1,3] * front.cornerL.jointUSR.rod1.rRod_0[3])
*/
void Roll_eqFunction_4566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* der(front.cornerL.jointUSR.rod1.rRod_a[2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* front.cornerL.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* der(front.cornerL.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* front.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* der(front.cornerL.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* front.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* der(front.cornerL.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* front.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* front.cornerL.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* front.cornerL.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* front.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* front.cornerL.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* front.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* front.cornerL.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* front.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* front.cornerL.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* front.cornerL.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* front.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* front.cornerL.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* front.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* front.cornerL.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Roll_eqFunction_7083(DATA *data, threadData_t *threadData);


/*
equation index: 4568
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.rod1.rRod_a[3] = front.cornerL.jointUSR.frame_a.R.T[3,1] * $DER.front.cornerL.jointUSR.rod1.rRod_0[1] + front.cornerL.jointUSR.frame_a.R.T[3,2] * $DER.front.cornerL.jointUSR.rod1.rRod_0[2] + front.cornerL.jointUSR.frame_a.R.T[3,3] * $DER.front.cornerL.jointUSR.rod1.rRod_0[3] + front.cornerL.jointUSR.frame_a.R.w[2] * (front.cornerL.jointUSR.frame_a.R.T[1,1] * front.cornerL.jointUSR.rod1.rRod_0[1] + front.cornerL.jointUSR.frame_a.R.T[1,2] * front.cornerL.jointUSR.rod1.rRod_0[2] + front.cornerL.jointUSR.frame_a.R.T[1,3] * front.cornerL.jointUSR.rod1.rRod_0[3]) - front.cornerL.jointUSR.frame_a.R.w[1] * (front.cornerL.jointUSR.frame_a.R.T[2,1] * front.cornerL.jointUSR.rod1.rRod_0[1] + front.cornerL.jointUSR.frame_a.R.T[2,2] * front.cornerL.jointUSR.rod1.rRod_0[2] + front.cornerL.jointUSR.frame_a.R.T[2,3] * front.cornerL.jointUSR.rod1.rRod_0[3])
*/
void Roll_eqFunction_4568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* der(front.cornerL.jointUSR.rod1.rRod_a[3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* front.cornerL.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* der(front.cornerL.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* front.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* der(front.cornerL.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* front.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* der(front.cornerL.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* front.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* front.cornerL.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* front.cornerL.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* front.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* front.cornerL.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* front.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* front.cornerL.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* front.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* front.cornerL.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1150]] /* front.cornerL.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* front.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1151]] /* front.cornerL.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* front.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1152]] /* front.cornerL.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Roll_eqFunction_7085(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7086(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7087(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7088(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7089(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7090(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7091(DATA *data, threadData_t *threadData);


/*
equation index: 4576
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.rod1.R_rel_ia.T[1,2] = 0.11001306482721841 * $DER.front.cornerL.jointUSR.rod1.eRod_a[2] + front.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] * $DER.front.cornerL.jointUSR.rod1.e2_a[2] + $DER.front.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] * front.cornerL.jointUSR.rod1.e2_a[2] + front.cornerL.jointUSR.rod1.e3_ia[1] * $DER.front.cornerL.jointUSR.rod1.e3_a[2]
*/
void Roll_eqFunction_4576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* der(front.cornerL.jointUSR.rod1.R_rel_ia.T[1,2]) DUMMY_DER */) = (0.11001306482721841) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* der(front.cornerL.jointUSR.rod1.eRod_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1111]] /* front.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* der(front.cornerL.jointUSR.rod1.e2_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* der(front.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* front.cornerL.jointUSR.rod1.e2_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[149] /* front.cornerL.jointUSR.rod1.e3_ia[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* der(front.cornerL.jointUSR.rod1.e3_a[2]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 4577
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.rod1.R_rel_ia.T[2,2] = (-0.24752939586124134) * $DER.front.cornerL.jointUSR.rod1.eRod_a[2] + front.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] * $DER.front.cornerL.jointUSR.rod1.e2_a[2] + $DER.front.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] * front.cornerL.jointUSR.rod1.e2_a[2] + front.cornerL.jointUSR.rod1.e3_ia[2] * $DER.front.cornerL.jointUSR.rod1.e3_a[2]
*/
void Roll_eqFunction_4577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* der(front.cornerL.jointUSR.rod1.R_rel_ia.T[2,2]) DUMMY_DER */) = (-0.24752939586124134) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* der(front.cornerL.jointUSR.rod1.eRod_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* front.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* der(front.cornerL.jointUSR.rod1.e2_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* der(front.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* front.cornerL.jointUSR.rod1.e2_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[150] /* front.cornerL.jointUSR.rod1.e3_ia[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* der(front.cornerL.jointUSR.rod1.e3_a[2]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 4578
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.rod1.R_rel_ia.T[3,2] = 0.962614317238161 * $DER.front.cornerL.jointUSR.rod1.eRod_a[2] + front.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] * $DER.front.cornerL.jointUSR.rod1.e2_a[2] + $DER.front.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] * front.cornerL.jointUSR.rod1.e2_a[2] + front.cornerL.jointUSR.rod1.e3_ia[3] * $DER.front.cornerL.jointUSR.rod1.e3_a[2]
*/
void Roll_eqFunction_4578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4578};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* der(front.cornerL.jointUSR.rod1.R_rel_ia.T[3,2]) DUMMY_DER */) = (0.962614317238161) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* der(front.cornerL.jointUSR.rod1.eRod_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* front.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* der(front.cornerL.jointUSR.rod1.e2_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* der(front.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1124]] /* front.cornerL.jointUSR.rod1.e2_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[151] /* front.cornerL.jointUSR.rod1.e3_ia[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* der(front.cornerL.jointUSR.rod1.e3_a[2]) DUMMY_DER */));
  TRACE_POP
}
extern void Roll_eqFunction_7095(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7096(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7097(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7098(DATA *data, threadData_t *threadData);


/*
equation index: 4583
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.rod1.R_rel_ia.T[1,3] = 0.11001306482721841 * $DER.front.cornerL.jointUSR.rod1.eRod_a[3] + front.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] * $DER.front.cornerL.jointUSR.rod1.e2_a[3] + $DER.front.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] * front.cornerL.jointUSR.rod1.e2_a[3] + front.cornerL.jointUSR.rod1.e3_ia[1] * $DER.front.cornerL.jointUSR.rod1.e3_a[3]
*/
void Roll_eqFunction_4583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* der(front.cornerL.jointUSR.rod1.R_rel_ia.T[1,3]) DUMMY_DER */) = (0.11001306482721841) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* der(front.cornerL.jointUSR.rod1.eRod_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1111]] /* front.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* der(front.cornerL.jointUSR.rod1.e2_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* der(front.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* front.cornerL.jointUSR.rod1.e2_a[3] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[149] /* front.cornerL.jointUSR.rod1.e3_ia[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* der(front.cornerL.jointUSR.rod1.e3_a[3]) DUMMY_DER */));
  TRACE_POP
}
extern void Roll_eqFunction_7110(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7114(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7118(DATA *data, threadData_t *threadData);


/*
equation index: 4587
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.rod1.R_rel_ia.T[2,3] = (-0.24752939586124134) * $DER.front.cornerL.jointUSR.rod1.eRod_a[3] + front.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] * $DER.front.cornerL.jointUSR.rod1.e2_a[3] + $DER.front.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] * front.cornerL.jointUSR.rod1.e2_a[3] + front.cornerL.jointUSR.rod1.e3_ia[2] * $DER.front.cornerL.jointUSR.rod1.e3_a[3]
*/
void Roll_eqFunction_4587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* der(front.cornerL.jointUSR.rod1.R_rel_ia.T[2,3]) DUMMY_DER */) = (-0.24752939586124134) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* der(front.cornerL.jointUSR.rod1.eRod_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1113]] /* front.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* der(front.cornerL.jointUSR.rod1.e2_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* der(front.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* front.cornerL.jointUSR.rod1.e2_a[3] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[150] /* front.cornerL.jointUSR.rod1.e3_ia[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* der(front.cornerL.jointUSR.rod1.e3_a[3]) DUMMY_DER */));
  TRACE_POP
}
extern void Roll_eqFunction_7111(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7115(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7119(DATA *data, threadData_t *threadData);


/*
equation index: 4591
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.rod1.R_rel_ia.T[3,3] = 0.962614317238161 * $DER.front.cornerL.jointUSR.rod1.eRod_a[3] + front.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] * $DER.front.cornerL.jointUSR.rod1.e2_a[3] + $DER.front.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] * front.cornerL.jointUSR.rod1.e2_a[3] + front.cornerL.jointUSR.rod1.e3_ia[3] * $DER.front.cornerL.jointUSR.rod1.e3_a[3]
*/
void Roll_eqFunction_4591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* der(front.cornerL.jointUSR.rod1.R_rel_ia.T[3,3]) DUMMY_DER */) = (0.962614317238161) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* der(front.cornerL.jointUSR.rod1.eRod_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1115]] /* front.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* der(front.cornerL.jointUSR.rod1.e2_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* der(front.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1125]] /* front.cornerL.jointUSR.rod1.e2_a[3] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[151] /* front.cornerL.jointUSR.rod1.e3_ia[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* der(front.cornerL.jointUSR.rod1.e3_a[3]) DUMMY_DER */));
  TRACE_POP
}
extern void Roll_eqFunction_7112(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7116(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7120(DATA *data, threadData_t *threadData);


/*
equation index: 4595
type: SIMPLE_ASSIGN
$DER.points[1,11,2] = $DER.front.cornerL.springArm.frame_a.r_0[2] + 0.009999999999999981 * front.cornerL.jointUSR.revolute.R_rel.T[3,3] * front.cornerL.springArm.frame_b.R.w[1] + (-0.39) * front.cornerL.jointUSR.revolute.R_rel.T[3,2] * front.cornerL.springArm.frame_b.R.w[1]
*/
void Roll_eqFunction_4595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4595};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[528]] /* der(points[1,11,2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* der(front.cornerL.springArm.frame_a.r_0[2]) DUMMY_DER */) + (0.009999999999999981) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* front.cornerL.springArm.frame_b.R.w[1] DUMMY_STATE */))) + (-0.39) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* front.cornerL.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Roll_eqFunction_7002(DATA *data, threadData_t *threadData);


/*
equation index: 4597
type: SIMPLE_ASSIGN
$DER.points[1,11,3] = $DER.front.cornerL.springArm.frame_a.r_0[3] + (-0.39) * front.cornerL.jointUSR.revolute.R_rel.T[3,3] * front.cornerL.springArm.frame_b.R.w[1] + 0.009999999999999981 * (-front.cornerL.jointUSR.revolute.R_rel.T[3,2]) * front.cornerL.springArm.frame_b.R.w[1]
*/
void Roll_eqFunction_4597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[529]] /* der(points[1,11,3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* der(front.cornerL.springArm.frame_a.r_0[3]) DUMMY_DER */) + (-0.39) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* front.cornerL.springArm.frame_b.R.w[1] DUMMY_STATE */))) + (0.009999999999999981) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1285]] /* front.cornerL.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Roll_eqFunction_7004(DATA *data, threadData_t *threadData);


/*
equation index: 4599
type: SIMPLE_ASSIGN
$DER.front.cornerL.coilover.length = 0.5 * (front.cornerL.coilover.r_rel_0 * $DER.front.cornerL.coilover.r_rel_0 + $DER.front.cornerL.coilover.r_rel_0 * front.cornerL.coilover.r_rel_0) / sqrt(front.cornerL.coilover.r_rel_0 * front.cornerL.coilover.r_rel_0)
*/
void Roll_eqFunction_4599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4599};
  real_array tmp179;
  real_array tmp180;
  real_array tmp181;
  real_array tmp182;
  real_array tmp183;
  real_array tmp184;
  modelica_real tmp185;
  real_array_create(&tmp179, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* front.cornerL.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp180, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* der(front.cornerL.coilover.r_rel_0[1]) DUMMY_DER */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp181, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* der(front.cornerL.coilover.r_rel_0[1]) DUMMY_DER */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp182, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* front.cornerL.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp183, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* front.cornerL.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp184, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* front.cornerL.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  tmp185 = mul_real_scalar_product(tmp183, tmp184);
  if(!(tmp185 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(front.cornerL.coilover.r_rel_0 * front.cornerL.coilover.r_rel_0) was %g should be >= 0", tmp185);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* der(front.cornerL.coilover.length) DUMMY_DER */) = (0.5) * (DIVISION_SIM(mul_real_scalar_product(tmp179, tmp180) + mul_real_scalar_product(tmp181, tmp182),sqrt(tmp185),"sqrt(front.cornerL.coilover.r_rel_0 * front.cornerL.coilover.r_rel_0)",equationIndexes));
  TRACE_POP
}
extern void Roll_eqFunction_7006(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7007(DATA *data, threadData_t *threadData);


/*
equation index: 4602
type: SIMPLE_ASSIGN
front.cornerL.coilover.f = front.cornerL.coilover.c * (front.cornerL.coilover.s - front.cornerL.coilover.s_unstretched) + front.cornerL.coilover.f_d
*/
void Roll_eqFunction_4602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* front.cornerL.coilover.f variable */) = ((data->simulationInfo->realParameter[6] /* front.cornerL.coilover.c PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[925]] /* front.cornerL.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[11] /* front.cornerL.coilover.s_unstretched PARAM */)) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[910]] /* front.cornerL.coilover.f_d variable */);
  TRACE_POP
}

/*
equation index: 4603
type: SIMPLE_ASSIGN
front.cornerL.springChassis.frame_a.f[1] = (-front.cornerL.coilover.e_a[1]) * front.cornerL.coilover.f
*/
void Roll_eqFunction_4603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1303]] /* front.cornerL.springChassis.frame_a.f[1] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[903]] /* front.cornerL.coilover.e_a[1] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[909]] /* front.cornerL.coilover.f variable */));
  TRACE_POP
}

/*
equation index: 4604
type: SIMPLE_ASSIGN
front.cornerL.springChassis.frame_a.t[2] = (-0.25) * front.cornerL.springChassis.frame_a.f[1]
*/
void Roll_eqFunction_4604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4604};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1307]] /* front.cornerL.springChassis.frame_a.t[2] variable */) = (-0.25) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1303]] /* front.cornerL.springChassis.frame_a.f[1] variable */));
  TRACE_POP
}

/*
equation index: 4605
type: SIMPLE_ASSIGN
front.cornerL.springChassis.frame_a.t[3] = 0.62 * front.cornerL.springChassis.frame_a.f[1]
*/
void Roll_eqFunction_4605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4605};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1308]] /* front.cornerL.springChassis.frame_a.t[3] variable */) = (0.62) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1303]] /* front.cornerL.springChassis.frame_a.f[1] variable */));
  TRACE_POP
}

/*
equation index: 4606
type: SIMPLE_ASSIGN
front.cornerL.springArm.frame_a.f[1] = -front.cornerL.springChassis.frame_a.f[1]
*/
void Roll_eqFunction_4606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* front.cornerL.springArm.frame_a.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1303]] /* front.cornerL.springChassis.frame_a.f[1] variable */));
  TRACE_POP
}
extern void Roll_eqFunction_7017(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7016(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7010(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7009(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7014(DATA *data, threadData_t *threadData);


/*
equation index: 4612
type: SIMPLE_ASSIGN
front.cornerL.springArm.frame_a.f[2] = front.cornerL.jointUSR.revolute.R_rel.T[3,2] * front.cornerL.springChassis.frame_a.f[3] - front.cornerL.jointUSR.revolute.R_rel.T[3,3] * front.cornerL.springChassis.frame_a.f[2]
*/
void Roll_eqFunction_4612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1272]] /* front.cornerL.springArm.frame_a.f[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1305]] /* front.cornerL.springChassis.frame_a.f[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1304]] /* front.cornerL.springChassis.frame_a.f[2] variable */)));
  TRACE_POP
}

/*
equation index: 4613
type: SIMPLE_ASSIGN
front.cornerL.springArm.frame_a.f[3] = (-front.cornerL.jointUSR.revolute.R_rel.T[3,2]) * front.cornerL.springChassis.frame_a.f[2] - front.cornerL.jointUSR.revolute.R_rel.T[3,3] * front.cornerL.springChassis.frame_a.f[3]
*/
void Roll_eqFunction_4613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4613};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1273]] /* front.cornerL.springArm.frame_a.f[3] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1304]] /* front.cornerL.springChassis.frame_a.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1305]] /* front.cornerL.springChassis.frame_a.f[3] variable */)));
  TRACE_POP
}
extern void Roll_eqFunction_7013(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7021(DATA *data, threadData_t *threadData);


/*
equation index: 4616
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.revolute.R_rel.T[3,3] = (-sin(front.cornerL.jointUSR.revolute.angle)) * $DER.front.cornerL.jointUSR.revolute.angle
*/
void Roll_eqFunction_4616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4616};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* der(front.cornerL.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* front.cornerL.jointUSR.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* der(front.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 4617
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.revolute.R_rel.T[3,2] = cos(front.cornerL.jointUSR.revolute.angle) * $DER.front.cornerL.jointUSR.revolute.angle
*/
void Roll_eqFunction_4617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4617};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* der(front.cornerL.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */) = (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1063]] /* front.cornerL.jointUSR.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* der(front.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 4618
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.positiveBranch = AlyssaAnimation.Roll.front.cornerL.tieRod.revolute.selectBranch(front.cornerL.tieRod.revolute.lengthConstraint, {0.11001306482721843, -0.24752939586124137, 0.9626143172381612}, 0.017453292519943295 * (front.cornerL.tieRod.revolute.phi_offset + front.cornerL.tieRod.revolute.phi_guess), front.cornerL.tieRod.revolute.r_a, front.cornerL.tieRod.revolute.r_b)
*/
void Roll_eqFunction_4618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4618};
  real_array tmp186;
  real_array tmp187;
  real_array_create(&tmp186, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1443]] /* front.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp187, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* front.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[24] /* front.cornerL.tieRod.revolute.positiveBranch PARAM */) = omc_AlyssaAnimation_Roll_front_cornerL_tieRod_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[446] /* front.cornerL.tieRod.revolute.lengthConstraint PARAM */), _OMC_LIT27, (0.017453292519943295) * ((data->simulationInfo->realParameter[451] /* front.cornerL.tieRod.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[450] /* front.cornerL.tieRod.revolute.phi_guess PARAM */)), tmp186, tmp187);
  TRACE_POP
}
extern void Roll_eqFunction_7924(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8652(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7923(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7925(DATA *data, threadData_t *threadData);


/*
equation index: 4623
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.R_rel.T[1,1] = 0.012102874432677765 + 0.9878971255673222 * cos(front.cornerL.tieRod.revolute.angle)
*/
void Roll_eqFunction_4623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4623};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1401]] /* front.cornerL.tieRod.revolute.R_rel.T[1,1] DUMMY_STATE */) = 0.012102874432677765 + (0.9878971255673222) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 4624
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.R_rel.T[1,2] = -0.027231467473524958 + 0.027231467473524958 * cos(front.cornerL.tieRod.revolute.angle) - (-0.9626143172381612) * sin(front.cornerL.tieRod.revolute.angle)
*/
void Roll_eqFunction_4624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1402]] /* front.cornerL.tieRod.revolute.R_rel.T[1,2] DUMMY_STATE */) = -0.027231467473524958 + (0.027231467473524958) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((-0.9626143172381612) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 4625
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.R_rel.T[1,3] = 0.10590015128593043 + (-0.10590015128593043) * cos(front.cornerL.tieRod.revolute.angle) - (-0.24752939586124137) * sin(front.cornerL.tieRod.revolute.angle)
*/
void Roll_eqFunction_4625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1403]] /* front.cornerL.tieRod.revolute.R_rel.T[1,3] DUMMY_STATE */) = 0.10590015128593043 + (-0.10590015128593043) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((-0.24752939586124137) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}
extern void Roll_eqFunction_7969(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7959(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7943(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8002(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8003(DATA *data, threadData_t *threadData);


/*
equation index: 4631
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.R_rel.T[2,1] = -0.027231467473524958 + 0.027231467473524958 * cos(front.cornerL.tieRod.revolute.angle) - 0.9626143172381612 * sin(front.cornerL.tieRod.revolute.angle)
*/
void Roll_eqFunction_4631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4631};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1404]] /* front.cornerL.tieRod.revolute.R_rel.T[2,1] DUMMY_STATE */) = -0.027231467473524958 + (0.027231467473524958) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((0.9626143172381612) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 4632
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.R_rel.T[2,2] = 0.06127080181543114 + 0.9387291981845689 * cos(front.cornerL.tieRod.revolute.angle)
*/
void Roll_eqFunction_4632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4632};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1405]] /* front.cornerL.tieRod.revolute.R_rel.T[2,2] DUMMY_STATE */) = 0.06127080181543114 + (0.9387291981845689) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 4633
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.R_rel.T[2,3] = -0.2382753403933434 + 0.2382753403933434 * cos(front.cornerL.tieRod.revolute.angle) - (-0.11001306482721843) * sin(front.cornerL.tieRod.revolute.angle)
*/
void Roll_eqFunction_4633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4633};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1406]] /* front.cornerL.tieRod.revolute.R_rel.T[2,3] DUMMY_STATE */) = -0.2382753403933434 + (0.2382753403933434) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((-0.11001306482721843) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}
extern void Roll_eqFunction_7940(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7939(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7938(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8000(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8001(DATA *data, threadData_t *threadData);


/*
equation index: 4639
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.R_rel.T[3,1] = 0.10590015128593043 + (-0.10590015128593043) * cos(front.cornerL.tieRod.revolute.angle) - 0.24752939586124137 * sin(front.cornerL.tieRod.revolute.angle)
*/
void Roll_eqFunction_4639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4639};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1407]] /* front.cornerL.tieRod.revolute.R_rel.T[3,1] DUMMY_STATE */) = 0.10590015128593043 + (-0.10590015128593043) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((0.24752939586124137) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 4640
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.R_rel.T[3,2] = -0.2382753403933434 + 0.2382753403933434 * cos(front.cornerL.tieRod.revolute.angle) - 0.11001306482721843 * sin(front.cornerL.tieRod.revolute.angle)
*/
void Roll_eqFunction_4640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4640};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1408]] /* front.cornerL.tieRod.revolute.R_rel.T[3,2] DUMMY_STATE */) = -0.2382753403933434 + (0.2382753403933434) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))) - ((0.11001306482721843) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 4641
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.R_rel.T[3,3] = 0.9266263237518911 + 0.07337367624810887 * cos(front.cornerL.tieRod.revolute.angle)
*/
void Roll_eqFunction_4641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4641};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1409]] /* front.cornerL.tieRod.revolute.R_rel.T[3,3] DUMMY_STATE */) = 0.9266263237518911 + (0.07337367624810887) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void Roll_eqFunction_7935(DATA *data, threadData_t *threadData);


/*
equation index: 4643
type: SIMPLE_ASSIGN
front.cornerL.upright.frame_a.r_0[1] = points[1,5,1] + 0.02 * front.cornerL.wheelAngles.R_rel.T[1,1] + (-0.15000000000000002) * front.cornerL.wheelAngles.R_rel.T[2,1] + 0.2 * front.cornerL.wheelAngles.R_rel.T[3,1]
*/
void Roll_eqFunction_4643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4643};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1610]] /* front.cornerL.upright.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* points[1,5,1] DUMMY_STATE */) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1650]] /* front.cornerL.wheelAngles.R_rel.T[1,1] DUMMY_STATE */)) + (-0.15000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1653]] /* front.cornerL.wheelAngles.R_rel.T[2,1] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1656]] /* front.cornerL.wheelAngles.R_rel.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4644
type: SIMPLE_ASSIGN
points[1,9,1] = front.cornerL.upright.frame_a.r_0[1]
*/
void Roll_eqFunction_4644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4644};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2845]] /* points[1,9,1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1610]] /* front.cornerL.upright.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void Roll_eqFunction_7971(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7972(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7985(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7975(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7977(DATA *data, threadData_t *threadData);


/*
equation index: 4650
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.rRod_0[1] = front.cornerL.tieRod.frame_im.r_0[1] - points[1,7,1]
*/
void Roll_eqFunction_4650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4650};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1471]] /* front.cornerL.tieRod.rod1.rRod_0[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1353]] /* front.cornerL.tieRod.frame_im.r_0[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2839]] /* points[1,7,1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4651
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.rRod_a[1] = front.cornerL.tieRod.rod1.rRod_0[1]
*/
void Roll_eqFunction_4651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4651};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1474]] /* front.cornerL.tieRod.rod1.rRod_a[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1471]] /* front.cornerL.tieRod.rod1.rRod_0[1] variable */);
  TRACE_POP
}
extern void Roll_eqFunction_7979(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7981(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7980(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7983(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7984(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7974(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7934(DATA *data, threadData_t *threadData);


/*
equation index: 4659
type: SIMPLE_ASSIGN
front.cornerL.upright.frame_a.r_0[2] = points[1,5,2] + 0.02 * front.cornerL.wheelAngles.R_rel.T[1,2] + (-0.15000000000000002) * front.cornerL.wheelAngles.R_rel.T[2,2] + 0.2 * front.cornerL.wheelAngles.R_rel.T[3,2]
*/
void Roll_eqFunction_4659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4659};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1611]] /* front.cornerL.upright.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2834]] /* points[1,5,2] DUMMY_STATE */) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1651]] /* front.cornerL.wheelAngles.R_rel.T[1,2] DUMMY_STATE */)) + (-0.15000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1654]] /* front.cornerL.wheelAngles.R_rel.T[2,2] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1657]] /* front.cornerL.wheelAngles.R_rel.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4660
type: SIMPLE_ASSIGN
points[1,9,2] = front.cornerL.upright.frame_a.r_0[2]
*/
void Roll_eqFunction_4660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4660};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2846]] /* points[1,9,2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1611]] /* front.cornerL.upright.frame_a.r_0[2] DUMMY_STATE */);
  TRACE_POP
}
extern void Roll_eqFunction_7961(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7962(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7968(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7964(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7966(DATA *data, threadData_t *threadData);


/*
equation index: 4666
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.rRod_0[2] = front.cornerL.tieRod.frame_im.r_0[2] - points[1,7,2]
*/
void Roll_eqFunction_4666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4666};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1472]] /* front.cornerL.tieRod.rod1.rRod_0[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1354]] /* front.cornerL.tieRod.frame_im.r_0[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2840]] /* points[1,7,2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4667
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.rRod_a[2] = front.cornerL.tieRod.rod1.rRod_0[2]
*/
void Roll_eqFunction_4667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4667};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1475]] /* front.cornerL.tieRod.rod1.rRod_a[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1472]] /* front.cornerL.tieRod.rod1.rRod_0[2] variable */);
  TRACE_POP
}
extern void Roll_eqFunction_7988(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7990(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7989(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7967(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7993(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7963(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7933(DATA *data, threadData_t *threadData);


/*
equation index: 4675
type: SIMPLE_ASSIGN
front.cornerL.upright.frame_a.r_0[3] = points[1,5,3] + 0.02 * front.cornerL.wheelAngles.R_rel.T[1,3] + (-0.15000000000000002) * front.cornerL.wheelAngles.R_rel.T[2,3] + 0.2 * front.cornerL.wheelAngles.R_rel.T[3,3]
*/
void Roll_eqFunction_4675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1612]] /* front.cornerL.upright.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2835]] /* points[1,5,3] DUMMY_STATE */) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1652]] /* front.cornerL.wheelAngles.R_rel.T[1,3] DUMMY_STATE */)) + (-0.15000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1655]] /* front.cornerL.wheelAngles.R_rel.T[2,3] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1658]] /* front.cornerL.wheelAngles.R_rel.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 4676
type: SIMPLE_ASSIGN
points[1,9,3] = front.cornerL.upright.frame_a.r_0[3]
*/
void Roll_eqFunction_4676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2847]] /* points[1,9,3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1612]] /* front.cornerL.upright.frame_a.r_0[3] DUMMY_STATE */);
  TRACE_POP
}
extern void Roll_eqFunction_7945(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7946(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7973(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7958(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7948(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7950(DATA *data, threadData_t *threadData);


/*
equation index: 4683
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.rRod_0[3] = front.cornerL.tieRod.frame_im.r_0[3] - points[1,7,3]
*/
void Roll_eqFunction_4683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4683};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1473]] /* front.cornerL.tieRod.rod1.rRod_0[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1355]] /* front.cornerL.tieRod.frame_im.r_0[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* points[1,7,3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 4684
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.rRod_a[3] = front.cornerL.tieRod.rod1.rRod_0[3]
*/
void Roll_eqFunction_4684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1476]] /* front.cornerL.tieRod.rod1.rRod_a[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1473]] /* front.cornerL.tieRod.rod1.rRod_0[3] variable */);
  TRACE_POP
}
extern void Roll_eqFunction_7952(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7954(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7953(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7991(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7998(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7999(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7956(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7957(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7994(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7947(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7986(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8651(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8653(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8662(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8663(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8674(DATA *data, threadData_t *threadData);


/*
equation index: 4701
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.R_rel.w[1] = loads[1].frame_b.R.w[1]
*/
void Roll_eqFunction_4701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* front.cornerL.wheelAngles.R_rel.w[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2713]] /* loads[1].frame_b.R.w[1] variable */);
  TRACE_POP
}
extern void Roll_eqFunction_8658(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8659(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8660(DATA *data, threadData_t *threadData);


/*
equation index: 4705
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.R_rel.w[2] = loads[1].frame_b.R.w[2]
*/
void Roll_eqFunction_4705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4705};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1660]] /* front.cornerL.wheelAngles.R_rel.w[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2714]] /* loads[1].frame_b.R.w[2] variable */);
  TRACE_POP
}
extern void Roll_eqFunction_8654(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8655(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8668(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8669(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8666(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8667(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8664(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8665(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8656(DATA *data, threadData_t *threadData);


/*
equation index: 4715
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.R_rel.w[3] = loads[1].frame_b.R.w[3]
*/
void Roll_eqFunction_4715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4715};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1661]] /* front.cornerL.wheelAngles.R_rel.w[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2715]] /* loads[1].frame_b.R.w[3] variable */);
  TRACE_POP
}

/*
equation index: 4719
type: ARRAY_CALL_ASSIGN

$TMP_4716 = Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(front.cornerL.wheelAngles.R_rel, {3, 1, 2}, front.cornerL.wheelAngles.guessAngle1)
*/
void Roll_eqFunction_4719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4719};
  real_array tmp188;
  real_array tmp189;
  Modelica_Mechanics_MultiBody_Frames_Orientation tmp190;
  real_array tmp191;
  real_array_create(&tmp188, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1650]] /* front.cornerL.wheelAngles.R_rel.T[1,1] DUMMY_STATE */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)3);
  real_array_create(&tmp189, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1659]] /* front.cornerL.wheelAngles.R_rel.w[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  Modelica_Mechanics_MultiBody_Frames_Orientation_wrap_vars(threadData,tmp190, tmp188, tmp189);
  real_array_create(&tmp191, ((modelica_real*)&((&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* $TMP_4716[1] variable */))[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles(threadData, tmp190, _OMC_LIT22, (data->simulationInfo->realParameter[700] /* front.cornerL.wheelAngles.guessAngle1 PARAM */)), tmp191);
  TRACE_POP
}

/*
equation index: 4716
type: SIMPLE_ASSIGN
telemetry[1,3] = $TMP_4716[1]
*/
void Roll_eqFunction_4716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4732]] /* telemetry[1,3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[845]] /* $TMP_4716[1] variable */);
  TRACE_POP
}

/*
equation index: 4717
type: SIMPLE_ASSIGN
telemetry[1,2] = -$TMP_4716[2]
*/
void Roll_eqFunction_4717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4731]] /* telemetry[1,2] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[846]] /* $TMP_4716[2] variable */));
  TRACE_POP
}

/*
equation index: 4718
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.angles[3] = $TMP_4716[3]
*/
void Roll_eqFunction_4718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4718};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1662]] /* front.cornerL.wheelAngles.angles[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[847]] /* $TMP_4716[3] variable */);
  TRACE_POP
}

/*
equation index: 4720
type: SIMPLE_ASSIGN
$DER.front.cornerL.tieRod.revolute.R_rel.T[1,1] = 0.9878971255673222 * (-sin(front.cornerL.tieRod.revolute.angle)) * $DER.front.cornerL.tieRod.revolute.angle
*/
void Roll_eqFunction_4720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4720};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* der(front.cornerL.tieRod.revolute.R_rel.T[1,1]) DUMMY_DER */) = (0.9878971255673222) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4721
type: SIMPLE_ASSIGN
$DER.front.cornerL.tieRod.revolute.R_rel.T[1,2] = 0.027231467473524958 * (-sin(front.cornerL.tieRod.revolute.angle)) * $DER.front.cornerL.tieRod.revolute.angle + 0.9626143172381612 * cos(front.cornerL.tieRod.revolute.angle) * $DER.front.cornerL.tieRod.revolute.angle
*/
void Roll_eqFunction_4721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4721};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* der(front.cornerL.tieRod.revolute.R_rel.T[1,2]) DUMMY_DER */) = (0.027231467473524958) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */))) + (0.9626143172381612) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4722
type: SIMPLE_ASSIGN
$DER.front.cornerL.tieRod.revolute.R_rel.T[1,3] = (-0.10590015128593043) * (-sin(front.cornerL.tieRod.revolute.angle)) * $DER.front.cornerL.tieRod.revolute.angle + 0.24752939586124137 * cos(front.cornerL.tieRod.revolute.angle) * $DER.front.cornerL.tieRod.revolute.angle
*/
void Roll_eqFunction_4722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4722};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* der(front.cornerL.tieRod.revolute.R_rel.T[1,3]) DUMMY_DER */) = (-0.10590015128593043) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */))) + (0.24752939586124137) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}
extern void Roll_eqFunction_8679(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8680(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8681(DATA *data, threadData_t *threadData);


/*
equation index: 4726
type: SIMPLE_ASSIGN
$DER.front.cornerL.tieRod.revolute.R_rel.T[2,1] = 0.027231467473524958 * (-sin(front.cornerL.tieRod.revolute.angle)) * $DER.front.cornerL.tieRod.revolute.angle + (-0.9626143172381612) * cos(front.cornerL.tieRod.revolute.angle) * $DER.front.cornerL.tieRod.revolute.angle
*/
void Roll_eqFunction_4726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4726};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* der(front.cornerL.tieRod.revolute.R_rel.T[2,1]) DUMMY_DER */) = (0.027231467473524958) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */))) + (-0.9626143172381612) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4727
type: SIMPLE_ASSIGN
$DER.front.cornerL.tieRod.revolute.R_rel.T[2,2] = 0.9387291981845689 * (-sin(front.cornerL.tieRod.revolute.angle)) * $DER.front.cornerL.tieRod.revolute.angle
*/
void Roll_eqFunction_4727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* der(front.cornerL.tieRod.revolute.R_rel.T[2,2]) DUMMY_DER */) = (0.9387291981845689) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4728
type: SIMPLE_ASSIGN
$DER.front.cornerL.tieRod.revolute.R_rel.T[2,3] = 0.2382753403933434 * (-sin(front.cornerL.tieRod.revolute.angle)) * $DER.front.cornerL.tieRod.revolute.angle + 0.11001306482721843 * cos(front.cornerL.tieRod.revolute.angle) * $DER.front.cornerL.tieRod.revolute.angle
*/
void Roll_eqFunction_4728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* der(front.cornerL.tieRod.revolute.R_rel.T[2,3]) DUMMY_DER */) = (0.2382753403933434) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */))) + (0.11001306482721843) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}
extern void Roll_eqFunction_8685(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8686(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8687(DATA *data, threadData_t *threadData);


/*
equation index: 4732
type: SIMPLE_ASSIGN
$DER.front.cornerL.tieRod.revolute.R_rel.T[3,1] = (-0.10590015128593043) * (-sin(front.cornerL.tieRod.revolute.angle)) * $DER.front.cornerL.tieRod.revolute.angle + (-0.24752939586124137) * cos(front.cornerL.tieRod.revolute.angle) * $DER.front.cornerL.tieRod.revolute.angle
*/
void Roll_eqFunction_4732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* der(front.cornerL.tieRod.revolute.R_rel.T[3,1]) DUMMY_DER */) = (-0.10590015128593043) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */))) + (-0.24752939586124137) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4733
type: SIMPLE_ASSIGN
$DER.front.cornerL.tieRod.revolute.R_rel.T[3,2] = 0.2382753403933434 * (-sin(front.cornerL.tieRod.revolute.angle)) * $DER.front.cornerL.tieRod.revolute.angle + (-0.11001306482721843) * cos(front.cornerL.tieRod.revolute.angle) * $DER.front.cornerL.tieRod.revolute.angle
*/
void Roll_eqFunction_4733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* der(front.cornerL.tieRod.revolute.R_rel.T[3,2]) DUMMY_DER */) = (0.2382753403933434) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */))) + (-0.11001306482721843) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 4734
type: SIMPLE_ASSIGN
$DER.front.cornerL.tieRod.revolute.R_rel.T[3,3] = 0.07337367624810887 * (-sin(front.cornerL.tieRod.revolute.angle)) * $DER.front.cornerL.tieRod.revolute.angle
*/
void Roll_eqFunction_4734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4734};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* der(front.cornerL.tieRod.revolute.R_rel.T[3,3]) DUMMY_DER */) = (0.07337367624810887) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1413]] /* front.cornerL.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* der(front.cornerL.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}
extern void Roll_eqFunction_8691(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8692(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8693(DATA *data, threadData_t *threadData);


/*
equation index: 4971
type: LINEAR

<var>front.cornerL.ucaPivot.a</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void Roll_eqFunction_4971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4971};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[1573]] /* front.cornerL.ucaPivot.a variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 4971 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,4971};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 4971 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1573]] /* front.cornerL.ucaPivot.a variable */) = aux_x[0];

  TRACE_POP
}
extern void Roll_eqFunction_8931(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8939(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8935(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8936(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8979(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8934(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8938(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8933(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8941(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8944(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8943(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8942(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8959(DATA *data, threadData_t *threadData);


/*
equation index: 4985
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.revolute.frame_b.f[1] = (-front.cornerL.jointUSR.rod1.frame_b.f[1]) - front.cornerL.springArm.frame_a.f[1]
*/
void Roll_eqFunction_4985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4985};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* front.cornerL.jointUSR.revolute.frame_b.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1141]] /* front.cornerL.jointUSR.rod1.frame_b.f[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1271]] /* front.cornerL.springArm.frame_a.f[1] variable */);
  TRACE_POP
}

/*
equation index: 4986
type: SIMPLE_ASSIGN
front.cornerL.lcaMount.frame_a.f[1] = -front.cornerL.jointUSR.revolute.frame_b.f[1]
*/
void Roll_eqFunction_4986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4986};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1231]] /* front.cornerL.lcaMount.frame_a.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1079]] /* front.cornerL.jointUSR.revolute.frame_b.f[1] variable */));
  TRACE_POP
}

/*
equation index: 4987
type: SIMPLE_ASSIGN
front.cornerL.chassisConnect.f[1] = front.cornerL.springChassis.frame_a.f[1] + front.cornerL.lcaMount.frame_a.f[1] + front.cornerL.ucaMount.frame_a.f[1]
*/
void Roll_eqFunction_4987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4987};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[894]] /* front.cornerL.chassisConnect.f[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1303]] /* front.cornerL.springChassis.frame_a.f[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1231]] /* front.cornerL.lcaMount.frame_a.f[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1551]] /* front.cornerL.ucaMount.frame_a.f[1] variable */);
  TRACE_POP
}

/*
equation index: 4988
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1.frame_b.f[2] = front.cornerL.jointUSR.revolute.R_rel.T[3,3] * (front.cornerL.jointUSR.frame_a.R.T[1,2] * front.cornerL.jointUSR.rod1.f_b_a[1] + front.cornerL.jointUSR.frame_a.R.T[2,2] * front.cornerL.jointUSR.rod1.f_b_a[2] + front.cornerL.jointUSR.frame_a.R.T[3,2] * front.cornerL.jointUSR.rod1.f_b_a[3]) - front.cornerL.jointUSR.revolute.R_rel.T[3,2] * (front.cornerL.jointUSR.frame_a.R.T[1,3] * front.cornerL.jointUSR.rod1.f_b_a[1] + front.cornerL.jointUSR.frame_a.R.T[2,3] * front.cornerL.jointUSR.rod1.f_b_a[2] + front.cornerL.jointUSR.frame_a.R.T[3,3] * front.cornerL.jointUSR.rod1.f_b_a[3])
*/
void Roll_eqFunction_4988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4988};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1142]] /* front.cornerL.jointUSR.rod1.frame_b.f[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* front.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* front.cornerL.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* front.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* front.cornerL.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* front.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* front.cornerL.jointUSR.rod1.f_b_a[3] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* front.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* front.cornerL.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* front.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* front.cornerL.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* front.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* front.cornerL.jointUSR.rod1.f_b_a[3] variable */))));
  TRACE_POP
}
extern void Roll_eqFunction_8953(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8960(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8961(DATA *data, threadData_t *threadData);


/*
equation index: 4992
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1.frame_b.f[3] = front.cornerL.jointUSR.revolute.R_rel.T[3,2] * (front.cornerL.jointUSR.frame_a.R.T[1,2] * front.cornerL.jointUSR.rod1.f_b_a[1] + front.cornerL.jointUSR.frame_a.R.T[2,2] * front.cornerL.jointUSR.rod1.f_b_a[2] + front.cornerL.jointUSR.frame_a.R.T[3,2] * front.cornerL.jointUSR.rod1.f_b_a[3]) + front.cornerL.jointUSR.revolute.R_rel.T[3,3] * (front.cornerL.jointUSR.frame_a.R.T[1,3] * front.cornerL.jointUSR.rod1.f_b_a[1] + front.cornerL.jointUSR.frame_a.R.T[2,3] * front.cornerL.jointUSR.rod1.f_b_a[2] + front.cornerL.jointUSR.frame_a.R.T[3,3] * front.cornerL.jointUSR.rod1.f_b_a[3])
*/
void Roll_eqFunction_4992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4992};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1143]] /* front.cornerL.jointUSR.rod1.frame_b.f[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* front.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* front.cornerL.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* front.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* front.cornerL.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* front.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* front.cornerL.jointUSR.rod1.f_b_a[3] variable */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* front.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1132]] /* front.cornerL.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* front.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1133]] /* front.cornerL.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* front.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1134]] /* front.cornerL.jointUSR.rod1.f_b_a[3] variable */)));
  TRACE_POP
}
extern void Roll_eqFunction_8951(DATA *data, threadData_t *threadData);


/*
equation index: 4994
type: SIMPLE_ASSIGN
front.cornerL.lcaMount.frame_a.f[2] = (-front.cornerL.jointUSR.revolute.R_rel.T[3,3]) * front.cornerL.jointUSR.revolute.frame_b.f[2] - front.cornerL.jointUSR.revolute.R_rel.T[3,2] * front.cornerL.jointUSR.revolute.frame_b.f[3]
*/
void Roll_eqFunction_4994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4994};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1232]] /* front.cornerL.lcaMount.frame_a.f[2] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* front.cornerL.jointUSR.revolute.frame_b.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* front.cornerL.jointUSR.revolute.frame_b.f[3] variable */)));
  TRACE_POP
}
extern void Roll_eqFunction_8958(DATA *data, threadData_t *threadData);


/*
equation index: 4996
type: SIMPLE_ASSIGN
front.cornerL.lcaMount.frame_a.f[3] = front.cornerL.jointUSR.revolute.R_rel.T[3,2] * front.cornerL.jointUSR.revolute.frame_b.f[2] - front.cornerL.jointUSR.revolute.R_rel.T[3,3] * front.cornerL.jointUSR.revolute.frame_b.f[3]
*/
void Roll_eqFunction_4996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4996};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1233]] /* front.cornerL.lcaMount.frame_a.f[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1080]] /* front.cornerL.jointUSR.revolute.frame_b.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1081]] /* front.cornerL.jointUSR.revolute.frame_b.f[3] variable */)));
  TRACE_POP
}
extern void Roll_eqFunction_8955(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8948(DATA *data, threadData_t *threadData);


/*
equation index: 4999
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.revolute.frame_b.t[1] = (-front.cornerL.jointUSR.rod2.frame_a.t[1]) - front.cornerL.springArm.frame_a.t[1]
*/
void Roll_eqFunction_4999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4999};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* front.cornerL.jointUSR.revolute.frame_b.t[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1212]] /* front.cornerL.jointUSR.rod2.frame_a.t[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1277]] /* front.cornerL.springArm.frame_a.t[1] variable */);
  TRACE_POP
}

/*
equation index: 5000
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_b.t[1] = -front.cornerL.jointUSR.revolute.frame_b.t[1]
*/
void Roll_eqFunction_5000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5000};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[978]] /* front.cornerL.jointUSR.frame_b.t[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1082]] /* front.cornerL.jointUSR.revolute.frame_b.t[1] variable */));
  TRACE_POP
}
extern void Roll_eqFunction_8957(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8946(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8947(DATA *data, threadData_t *threadData);


/*
equation index: 5004
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_b.t[2] = (-front.cornerL.jointUSR.revolute.R_rel.T[3,3]) * front.cornerL.jointUSR.revolute.frame_b.t[2] - front.cornerL.jointUSR.revolute.R_rel.T[3,2] * front.cornerL.jointUSR.revolute.frame_b.t[3]
*/
void Roll_eqFunction_5004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5004};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[979]] /* front.cornerL.jointUSR.frame_b.t[2] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* front.cornerL.jointUSR.revolute.frame_b.t[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* front.cornerL.jointUSR.revolute.frame_b.t[3] variable */)));
  TRACE_POP
}
extern void Roll_eqFunction_8966(DATA *data, threadData_t *threadData);


/*
equation index: 5006
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_b.t[3] = front.cornerL.jointUSR.revolute.R_rel.T[3,2] * front.cornerL.jointUSR.revolute.frame_b.t[2] - front.cornerL.jointUSR.revolute.R_rel.T[3,3] * front.cornerL.jointUSR.revolute.frame_b.t[3]
*/
void Roll_eqFunction_5006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5006};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[980]] /* front.cornerL.jointUSR.frame_b.t[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1058]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1083]] /* front.cornerL.jointUSR.revolute.frame_b.t[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1059]] /* front.cornerL.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1084]] /* front.cornerL.jointUSR.revolute.frame_b.t[3] variable */)));
  TRACE_POP
}
extern void Roll_eqFunction_8965(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8975(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8976(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8977(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8972(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8973(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8974(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8969(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8970(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8971(DATA *data, threadData_t *threadData);


/*
equation index: 5017
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.rodLength = 0.36359317925395684
*/
void Roll_eqFunction_5017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5017};
  (data->simulationInfo->realParameter[869] /* front.cornerR.jointUSR.rod1.rodLength PARAM */) = 0.36359317925395684;
  TRACE_POP
}

/*
equation index: 5018
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.rodShape.length = front.cornerR.jointUSR.rod1.rodLength
*/
void Roll_eqFunction_5018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5018};
  (data->simulationInfo->realParameter[871] /* front.cornerR.jointUSR.rod1.rodShape.length PARAM */) = (data->simulationInfo->realParameter[869] /* front.cornerR.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 5019
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1Length = front.cornerR.jointUSR.rod1.rodLength
*/
void Roll_eqFunction_5019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5019};
  (data->simulationInfo->realParameter[890] /* front.cornerR.jointUSR.rod1Length PARAM */) = (data->simulationInfo->realParameter[869] /* front.cornerR.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 5020
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.lengthConstraint = front.cornerR.jointUSR.rod1Length
*/
void Roll_eqFunction_5020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5020};
  (data->simulationInfo->realParameter[838] /* front.cornerR.jointUSR.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[890] /* front.cornerR.jointUSR.rod1Length PARAM */);
  TRACE_POP
}
extern void Roll_eqFunction_6717(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6721(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6722(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6723(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6778(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6779(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6780(DATA *data, threadData_t *threadData);


/*
equation index: 5028
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.positiveBranch = AlyssaAnimation.Roll.front.cornerR.jointUSR.revolute.selectBranch(front.cornerR.jointUSR.revolute.lengthConstraint, {-1.0, 0.0, 0.0}, 0.017453292519943295 * (front.cornerR.jointUSR.revolute.phi_offset + front.cornerR.jointUSR.revolute.phi_guess), front.cornerR.jointUSR.revolute.r_a, front.cornerR.jointUSR.revolute.r_b)
*/
void Roll_eqFunction_5028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5028};
  real_array tmp192;
  real_array tmp193;
  real_array_create(&tmp192, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1917]] /* front.cornerR.jointUSR.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp193, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1920]] /* front.cornerR.jointUSR.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[51] /* front.cornerR.jointUSR.revolute.positiveBranch PARAM */) = omc_AlyssaAnimation_Roll_front_cornerR_jointUSR_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[838] /* front.cornerR.jointUSR.revolute.lengthConstraint PARAM */), _OMC_LIT25, (0.017453292519943295) * ((data->simulationInfo->realParameter[843] /* front.cornerR.jointUSR.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[842] /* front.cornerR.jointUSR.revolute.phi_guess PARAM */)), tmp192, tmp193);
  TRACE_POP
}
extern void Roll_eqFunction_6725(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6782(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6724(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6726(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6730(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6731(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6732(DATA *data, threadData_t *threadData);


/*
equation index: 5036
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.R_rel.T[3,2] = sin(front.cornerR.jointUSR.revolute.angle)
*/
void Roll_eqFunction_5036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5036};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1888]] /* front.cornerR.jointUSR.revolute.angle DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 5037
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_im.r_0[3] = front.cornerR.springArm.frame_a.r_0[3] - 0.5499999999999999 * front.cornerR.jointUSR.revolute.R_rel.T[3,2]
*/
void Roll_eqFunction_5037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5037};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1829]] /* front.cornerR.jointUSR.frame_im.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2101]] /* front.cornerR.springArm.frame_a.r_0[3] DUMMY_STATE */) - ((0.5499999999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}
extern void Roll_eqFunction_6757(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6758(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6759(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6766(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6767(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6814(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6815(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6816(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6817(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6818(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6819(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6820(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6821(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6824(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6823(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6822(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6825(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6828(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6827(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6826(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6835(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6841(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6850(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6836(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7830(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6832(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6834(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6849(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6833(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7829(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6829(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6831(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6842(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6845(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6844(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6843(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6848(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6851(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6856(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6854(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6852(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6830(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7828(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7832(DATA *data, threadData_t *threadData);


/*
equation index: 5082
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.A = (-2.0) * (front.cornerR.tieRod.revolute.r_b[1] * front.cornerR.tieRod.revolute.r_a[1] + front.cornerR.tieRod.revolute.r_b[2] * front.cornerR.tieRod.revolute.r_a[2] + front.cornerR.tieRod.revolute.r_b[3] * front.cornerR.tieRod.revolute.r_a[3] - front.cornerR.tieRod.revolute.e_r_b * front.cornerR.tieRod.revolute.e_r_a)
*/
void Roll_eqFunction_5082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2223]] /* front.cornerR.tieRod.revolute.A DUMMY_STATE */) = (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* front.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* front.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2272]] /* front.cornerR.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2269]] /* front.cornerR.tieRod.revolute.r_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2273]] /* front.cornerR.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2270]] /* front.cornerR.tieRod.revolute.r_a[3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2254]] /* front.cornerR.tieRod.revolute.e_r_b DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* front.cornerR.tieRod.revolute.e_r_a DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 5083
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.B = 2.0 * (front.cornerR.tieRod.revolute.r_b[1] * (0.24752939586124137 * front.cornerR.tieRod.revolute.r_a[3] + (-0.9626143172381612) * front.cornerR.tieRod.revolute.r_a[2]) + front.cornerR.tieRod.revolute.r_b[2] * (0.9626143172381612 * front.cornerR.tieRod.revolute.r_a[1] + (-0.11001306482721843) * front.cornerR.tieRod.revolute.r_a[3]) + front.cornerR.tieRod.revolute.r_b[3] * (0.11001306482721843 * front.cornerR.tieRod.revolute.r_a[2] + (-0.24752939586124137) * front.cornerR.tieRod.revolute.r_a[1]))
*/
void Roll_eqFunction_5083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5083};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2224]] /* front.cornerR.tieRod.revolute.B DUMMY_STATE */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* front.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2270]] /* front.cornerR.tieRod.revolute.r_a[3] DUMMY_STATE */)) + (-0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2269]] /* front.cornerR.tieRod.revolute.r_a[2] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2272]] /* front.cornerR.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* front.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */)) + (-0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2270]] /* front.cornerR.tieRod.revolute.r_a[3] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2273]] /* front.cornerR.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2269]] /* front.cornerR.tieRod.revolute.r_a[2] DUMMY_STATE */)) + (-0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* front.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */))));
  TRACE_POP
}
extern void Roll_eqFunction_7835(DATA *data, threadData_t *threadData);


/*
equation index: 5085
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.C = front.cornerR.tieRod.revolute.r_a[1] ^ 2.0 + front.cornerR.tieRod.revolute.r_a[2] ^ 2.0 + front.cornerR.tieRod.revolute.r_a[3] ^ 2.0 + front.cornerR.tieRod.revolute.r_b[1] ^ 2.0 + front.cornerR.tieRod.revolute.r_b[2] ^ 2.0 + front.cornerR.tieRod.revolute.r_b[3] ^ 2.0 + (-2.0) * front.cornerR.tieRod.revolute.e_r_b * front.cornerR.tieRod.revolute.e_r_a - front.cornerR.tieRod.revolute.lengthConstraint ^ 2.0
*/
void Roll_eqFunction_5085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5085};
  modelica_real tmp194;
  modelica_real tmp195;
  modelica_real tmp196;
  modelica_real tmp197;
  modelica_real tmp198;
  modelica_real tmp199;
  modelica_real tmp200;
  tmp194 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* front.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */);
  tmp195 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2269]] /* front.cornerR.tieRod.revolute.r_a[2] DUMMY_STATE */);
  tmp196 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2270]] /* front.cornerR.tieRod.revolute.r_a[3] DUMMY_STATE */);
  tmp197 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* front.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */);
  tmp198 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2272]] /* front.cornerR.tieRod.revolute.r_b[2] DUMMY_STATE */);
  tmp199 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2273]] /* front.cornerR.tieRod.revolute.r_b[3] DUMMY_STATE */);
  tmp200 = (data->simulationInfo->realParameter[1152] /* front.cornerR.tieRod.revolute.lengthConstraint PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2225]] /* front.cornerR.tieRod.revolute.C DUMMY_STATE */) = (tmp194 * tmp194) + (tmp195 * tmp195) + (tmp196 * tmp196) + (tmp197 * tmp197) + (tmp198 * tmp198) + (tmp199 * tmp199) + (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2254]] /* front.cornerR.tieRod.revolute.e_r_b DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* front.cornerR.tieRod.revolute.e_r_a DUMMY_STATE */))) - ((tmp200 * tmp200));
  TRACE_POP
}
extern void Roll_eqFunction_7836(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7837(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7838(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6837(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6840(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6857(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6839(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6855(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6838(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6853(DATA *data, threadData_t *threadData);


/*
equation index: 5096
type: SIMPLE_ASSIGN
points[2,11,2] = front.cornerR.springArm.frame_a.r_0[2] + 0.39 * front.cornerR.jointUSR.revolute.R_rel.T[3,3] + (-0.009999999999999981) * front.cornerR.jointUSR.revolute.R_rel.T[3,2]
*/
void Roll_eqFunction_5096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5096};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2894]] /* points[2,11,2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2100]] /* front.cornerR.springArm.frame_a.r_0[2] DUMMY_STATE */) + (0.39) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) + (-0.009999999999999981) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 5097
type: SIMPLE_ASSIGN
front.cornerR.coilover.r_rel_0[2] = points[2,11,2] - points[2,10,2]
*/
void Roll_eqFunction_5097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* front.cornerR.coilover.r_rel_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2894]] /* points[2,11,2] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2891]] /* points[2,10,2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 5098
type: SIMPLE_ASSIGN
front.cornerR.coilover.r_rel_a[2] = front.cornerR.coilover.r_rel_0[2]
*/
void Roll_eqFunction_5098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5098};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* front.cornerR.coilover.r_rel_a[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* front.cornerR.coilover.r_rel_0[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 5099
type: SIMPLE_ASSIGN
points[2,11,3] = front.cornerR.springArm.frame_a.r_0[3] + (-0.009999999999999981) * front.cornerR.jointUSR.revolute.R_rel.T[3,3] - 0.39 * front.cornerR.jointUSR.revolute.R_rel.T[3,2]
*/
void Roll_eqFunction_5099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5099};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2895]] /* points[2,11,3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2101]] /* front.cornerR.springArm.frame_a.r_0[3] DUMMY_STATE */) + (-0.009999999999999981) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) - ((0.39) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 5100
type: SIMPLE_ASSIGN
front.cornerR.coilover.r_rel_0[3] = points[2,11,3] - points[2,10,3]
*/
void Roll_eqFunction_5100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5100};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* front.cornerR.coilover.r_rel_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2895]] /* points[2,11,3] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2892]] /* points[2,10,3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 5101
type: SIMPLE_ASSIGN
front.cornerR.coilover.length = sqrt(front.cornerR.coilover.r_rel_0 * front.cornerR.coilover.r_rel_0)
*/
void Roll_eqFunction_5101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5101};
  real_array tmp201;
  real_array tmp202;
  modelica_real tmp203;
  real_array_create(&tmp201, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* front.cornerR.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp202, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* front.cornerR.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  tmp203 = mul_real_scalar_product(tmp201, tmp202);
  if(!(tmp203 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(front.cornerR.coilover.r_rel_0 * front.cornerR.coilover.r_rel_0) was %g should be >= 0", tmp203);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1742]] /* front.cornerR.coilover.length DUMMY_STATE */) = sqrt(tmp203);
  TRACE_POP
}

/*
equation index: 5102
type: SIMPLE_ASSIGN
front.cornerR.coilover.s = Modelica.Mechanics.MultiBody.Frames.Internal.maxWithoutEvent(front.cornerR.coilover.length, front.cornerR.coilover.s_small)
*/
void Roll_eqFunction_5102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5102};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* front.cornerR.coilover.s DUMMY_STATE */) = omc_Modelica_Mechanics_MultiBody_Frames_Internal_maxWithoutEvent(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1742]] /* front.cornerR.coilover.length DUMMY_STATE */), (data->simulationInfo->realParameter[716] /* front.cornerR.coilover.s_small PARAM */));
  TRACE_POP
}

/*
equation index: 5103
type: SIMPLE_ASSIGN
telemetry[2,4] = front.cornerR.coilover.s
*/
void Roll_eqFunction_5103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5103};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4737]] /* telemetry[2,4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* front.cornerR.coilover.s DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 5104
type: SIMPLE_ASSIGN
front.cornerR.coilover.e_a[1] = front.cornerR.coilover.r_rel_a[1] / front.cornerR.coilover.s
*/
void Roll_eqFunction_5104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5104};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* front.cornerR.coilover.e_a[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1747]] /* front.cornerR.coilover.r_rel_a[1] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* front.cornerR.coilover.s DUMMY_STATE */),"front.cornerR.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 5105
type: SIMPLE_ASSIGN
front.cornerR.coilover.shape_b.r_shape[1] = front.cornerR.coilover.e_a[1] * min(front.cornerR.coilover.length_a, front.cornerR.coilover.s)
*/
void Roll_eqFunction_5105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1778]] /* front.cornerR.coilover.shape_b.r_shape[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* front.cornerR.coilover.e_a[1] variable */)) * (fmin((data->simulationInfo->realParameter[715] /* front.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* front.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 5106
type: SIMPLE_ASSIGN
front.cornerR.coilover.e_a[2] = front.cornerR.coilover.r_rel_a[2] / front.cornerR.coilover.s
*/
void Roll_eqFunction_5106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* front.cornerR.coilover.e_a[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1748]] /* front.cornerR.coilover.r_rel_a[2] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* front.cornerR.coilover.s DUMMY_STATE */),"front.cornerR.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 5107
type: SIMPLE_ASSIGN
front.cornerR.coilover.shape_b.r_shape[2] = front.cornerR.coilover.e_a[2] * min(front.cornerR.coilover.length_a, front.cornerR.coilover.s)
*/
void Roll_eqFunction_5107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5107};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1779]] /* front.cornerR.coilover.shape_b.r_shape[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1729]] /* front.cornerR.coilover.e_a[2] variable */)) * (fmin((data->simulationInfo->realParameter[715] /* front.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* front.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 5108
type: SIMPLE_ASSIGN
front.cornerR.coilover.e_rel_0[1] = front.cornerR.coilover.r_rel_0[1] / front.cornerR.coilover.s
*/
void Roll_eqFunction_5108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5108};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1731]] /* front.cornerR.coilover.e_rel_0[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* front.cornerR.coilover.r_rel_0[1] DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* front.cornerR.coilover.s DUMMY_STATE */),"front.cornerR.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 5109
type: SIMPLE_ASSIGN
front.cornerR.coilover.e_rel_0[2] = front.cornerR.coilover.r_rel_0[2] / front.cornerR.coilover.s
*/
void Roll_eqFunction_5109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5109};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1732]] /* front.cornerR.coilover.e_rel_0[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* front.cornerR.coilover.r_rel_0[2] DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* front.cornerR.coilover.s DUMMY_STATE */),"front.cornerR.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 5110
type: SIMPLE_ASSIGN
front.cornerR.coilover.shape_a.length = min(front.cornerR.coilover.length_a, front.cornerR.coilover.s)
*/
void Roll_eqFunction_5110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5110};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1766]] /* front.cornerR.coilover.shape_a.length variable */) = fmin((data->simulationInfo->realParameter[715] /* front.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* front.cornerR.coilover.s DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 5111
type: SIMPLE_ASSIGN
front.cornerR.coilover.shape_b.length = max(front.cornerR.coilover.s - front.cornerR.coilover.length_a, 0.0)
*/
void Roll_eqFunction_5111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1777]] /* front.cornerR.coilover.shape_b.length variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* front.cornerR.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[715] /* front.cornerR.coilover.length_a PARAM */),0.0);
  TRACE_POP
}

/*
equation index: 5112
type: SIMPLE_ASSIGN
front.cornerR.coilover.r_rel_a[3] = front.cornerR.coilover.r_rel_0[3]
*/
void Roll_eqFunction_5112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1749]] /* front.cornerR.coilover.r_rel_a[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* front.cornerR.coilover.r_rel_0[3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 5113
type: SIMPLE_ASSIGN
front.cornerR.coilover.e_a[3] = front.cornerR.coilover.r_rel_a[3] / front.cornerR.coilover.s
*/
void Roll_eqFunction_5113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1730]] /* front.cornerR.coilover.e_a[3] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1749]] /* front.cornerR.coilover.r_rel_a[3] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* front.cornerR.coilover.s DUMMY_STATE */),"front.cornerR.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 5114
type: SIMPLE_ASSIGN
front.cornerR.coilover.shape_b.r_shape[3] = front.cornerR.coilover.e_a[3] * min(front.cornerR.coilover.length_a, front.cornerR.coilover.s)
*/
void Roll_eqFunction_5114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1780]] /* front.cornerR.coilover.shape_b.r_shape[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1730]] /* front.cornerR.coilover.e_a[3] variable */)) * (fmin((data->simulationInfo->realParameter[715] /* front.cornerR.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* front.cornerR.coilover.s DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 5115
type: SIMPLE_ASSIGN
front.cornerR.coilover.e_rel_0[3] = front.cornerR.coilover.r_rel_0[3] / front.cornerR.coilover.s
*/
void Roll_eqFunction_5115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1733]] /* front.cornerR.coilover.e_rel_0[3] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* front.cornerR.coilover.r_rel_0[3] DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* front.cornerR.coilover.s DUMMY_STATE */),"front.cornerR.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 5116
type: SIMPLE_ASSIGN
view[2].spring.shape.length = sqrt(front.cornerR.coilover.r_rel_0[1] ^ 2.0 + front.cornerR.coilover.r_rel_0[2] ^ 2.0 + front.cornerR.coilover.r_rel_0[3] ^ 2.0)
*/
void Roll_eqFunction_5116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5116};
  modelica_real tmp204;
  modelica_real tmp205;
  modelica_real tmp206;
  modelica_real tmp207;
  tmp204 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* front.cornerR.coilover.r_rel_0[1] DUMMY_STATE */);
  tmp205 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1745]] /* front.cornerR.coilover.r_rel_0[2] DUMMY_STATE */);
  tmp206 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1746]] /* front.cornerR.coilover.r_rel_0[3] DUMMY_STATE */);
  tmp207 = (tmp204 * tmp204) + (tmp205 * tmp205) + (tmp206 * tmp206);
  if(!(tmp207 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(front.cornerR.coilover.r_rel_0[1] ^ 2.0 + front.cornerR.coilover.r_rel_0[2] ^ 2.0 + front.cornerR.coilover.r_rel_0[3] ^ 2.0) was %g should be >= 0", tmp207);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5087]] /* view[2].spring.shape.length variable */) = sqrt(tmp207);
  TRACE_POP
}

/*
equation index: 5117
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.aux = (-0.5499999999999999) * (front.cornerR.jointUSR.revolute.R_rel.T[3,2] * (front.cornerR.jointUSR.frame_a.R.T[1,2] * front.cornerR.jointUSR.rod1.eRod_a[1] + front.cornerR.jointUSR.frame_a.R.T[2,2] * front.cornerR.jointUSR.rod1.eRod_a[2] + front.cornerR.jointUSR.frame_a.R.T[3,2] * front.cornerR.jointUSR.rod1.eRod_a[3]) + front.cornerR.jointUSR.revolute.R_rel.T[3,3] * (front.cornerR.jointUSR.frame_a.R.T[1,3] * front.cornerR.jointUSR.rod1.eRod_a[1] + front.cornerR.jointUSR.frame_a.R.T[2,3] * front.cornerR.jointUSR.rod1.eRod_a[2] + front.cornerR.jointUSR.frame_a.R.T[3,3] * front.cornerR.jointUSR.rod1.eRod_a[3]))
*/
void Roll_eqFunction_5117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1784]] /* front.cornerR.jointUSR.aux variable */) = (-0.5499999999999999) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1789]] /* front.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1954]] /* front.cornerR.jointUSR.rod1.eRod_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* front.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1955]] /* front.cornerR.jointUSR.rod1.eRod_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* front.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1956]] /* front.cornerR.jointUSR.rod1.eRod_a[3] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* front.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1954]] /* front.cornerR.jointUSR.rod1.eRod_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* front.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1955]] /* front.cornerR.jointUSR.rod1.eRod_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* front.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1956]] /* front.cornerR.jointUSR.rod1.eRod_a[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Roll_eqFunction_6756(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6781(DATA *data, threadData_t *threadData);


/*
equation index: 5120
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.revolute.angle = if noEvent(front.cornerR.jointUSR.revolute.kcos_angle == 0.0) then front.cornerR.jointUSR.revolute.kcos_angle else ($DER.front.cornerR.jointUSR.revolute.ksin_angle * front.cornerR.jointUSR.revolute.kcos_angle - front.cornerR.jointUSR.revolute.ksin_angle * $DER.front.cornerR.jointUSR.revolute.kcos_angle) / (front.cornerR.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (front.cornerR.jointUSR.revolute.ksin_angle / front.cornerR.jointUSR.revolute.kcos_angle) ^ 2.0))
*/
void Roll_eqFunction_5120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5120};
  modelica_real tmp208;
  modelica_real tmp209;
  modelica_boolean tmp210;
  modelica_real tmp211;
  tmp210 = (modelica_boolean)((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1914]] /* front.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */) == 0.0);
  if(tmp210)
  {
    tmp211 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1914]] /* front.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */);
  }
  else
  {
    tmp208 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1914]] /* front.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */);
    tmp209 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1915]] /* front.cornerR.jointUSR.revolute.ksin_angle DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1914]] /* front.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */),"front.cornerR.jointUSR.revolute.kcos_angle",equationIndexes);
    tmp211 = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* der(front.cornerR.jointUSR.revolute.ksin_angle) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1914]] /* front.cornerR.jointUSR.revolute.kcos_angle DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1915]] /* front.cornerR.jointUSR.revolute.ksin_angle DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* der(front.cornerR.jointUSR.revolute.kcos_angle) DUMMY_DER */))),((tmp208 * tmp208)) * (1.0 + (tmp209 * tmp209)),"front.cornerR.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (front.cornerR.jointUSR.revolute.ksin_angle / front.cornerR.jointUSR.revolute.kcos_angle) ^ 2.0)",equationIndexes);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* der(front.cornerR.jointUSR.revolute.angle) DUMMY_DER */) = tmp211;
  TRACE_POP
}

/*
equation index: 5121
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.R_rel.w[1] = -$DER.front.cornerR.jointUSR.revolute.angle
*/
void Roll_eqFunction_5121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1885]] /* front.cornerR.jointUSR.revolute.R_rel.w[1] DUMMY_STATE */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* der(front.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void Roll_eqFunction_6811(DATA *data, threadData_t *threadData);


/*
equation index: 5123
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.frame_im.r_0[2] = $DER.front.cornerR.springArm.frame_a.r_0[2] + 0.5499999999999999 * front.cornerR.jointUSR.revolute.R_rel.T[3,2] * front.cornerR.springArm.frame_b.R.w[1]
*/
void Roll_eqFunction_5123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* der(front.cornerR.jointUSR.frame_im.r_0[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[452]] /* der(front.cornerR.springArm.frame_a.r_0[2]) DUMMY_DER */) + (0.5499999999999999) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2110]] /* front.cornerR.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Roll_eqFunction_6812(DATA *data, threadData_t *threadData);


/*
equation index: 5125
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.frame_im.r_0[3] = $DER.front.cornerR.springArm.frame_a.r_0[3] + 0.5499999999999999 * front.cornerR.jointUSR.revolute.R_rel.T[3,3] * front.cornerR.springArm.frame_b.R.w[1]
*/
void Roll_eqFunction_5125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* der(front.cornerR.jointUSR.frame_im.r_0[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[453]] /* der(front.cornerR.springArm.frame_a.r_0[3]) DUMMY_DER */) + (0.5499999999999999) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2110]] /* front.cornerR.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Roll_eqFunction_6785(DATA *data, threadData_t *threadData);


/*
equation index: 5127
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.der_rRod_a_L[1] = (front.cornerR.jointUSR.frame_a.R.T[1,1] * $DER.front.cornerR.jointUSR.rod1.rRod_0[1] + front.cornerR.jointUSR.frame_a.R.T[1,2] * $DER.front.cornerR.jointUSR.rod1.rRod_0[2] + front.cornerR.jointUSR.frame_a.R.T[1,3] * $DER.front.cornerR.jointUSR.rod1.rRod_0[3] + front.cornerR.jointUSR.frame_a.R.w[3] * front.cornerR.jointUSR.rod1.rRod_a[2] - front.cornerR.jointUSR.frame_a.R.w[2] * front.cornerR.jointUSR.rod1.rRod_a[3]) / front.cornerR.jointUSR.rod1.rodLength
*/
void Roll_eqFunction_5127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1945]] /* front.cornerR.jointUSR.rod1.der_rRod_a_L[1] DUMMY_STATE */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1788]] /* front.cornerR.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* der(front.cornerR.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1789]] /* front.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* der(front.cornerR.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* front.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* der(front.cornerR.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1799]] /* front.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1979]] /* front.cornerR.jointUSR.rod1.rRod_a[2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* front.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1980]] /* front.cornerR.jointUSR.rod1.rRod_a[3] DUMMY_STATE */))),(data->simulationInfo->realParameter[869] /* front.cornerR.jointUSR.rod1.rodLength PARAM */),"front.cornerR.jointUSR.rod1.rodLength",equationIndexes);
  TRACE_POP
}

/*
equation index: 5128
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.der_rRod_a_L[2] = (front.cornerR.jointUSR.frame_a.R.T[2,1] * $DER.front.cornerR.jointUSR.rod1.rRod_0[1] + front.cornerR.jointUSR.frame_a.R.T[2,2] * $DER.front.cornerR.jointUSR.rod1.rRod_0[2] + front.cornerR.jointUSR.frame_a.R.T[2,3] * $DER.front.cornerR.jointUSR.rod1.rRod_0[3] + front.cornerR.jointUSR.frame_a.R.w[1] * front.cornerR.jointUSR.rod1.rRod_a[3] - front.cornerR.jointUSR.frame_a.R.w[3] * front.cornerR.jointUSR.rod1.rRod_a[1]) / front.cornerR.jointUSR.rod1.rodLength
*/
void Roll_eqFunction_5128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1946]] /* front.cornerR.jointUSR.rod1.der_rRod_a_L[2] DUMMY_STATE */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* front.cornerR.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* der(front.cornerR.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* front.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* der(front.cornerR.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* front.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* der(front.cornerR.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* front.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1980]] /* front.cornerR.jointUSR.rod1.rRod_a[3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1799]] /* front.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1978]] /* front.cornerR.jointUSR.rod1.rRod_a[1] DUMMY_STATE */))),(data->simulationInfo->realParameter[869] /* front.cornerR.jointUSR.rod1.rodLength PARAM */),"front.cornerR.jointUSR.rod1.rodLength",equationIndexes);
  TRACE_POP
}

/*
equation index: 5129
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.der_rRod_a_L[3] = (front.cornerR.jointUSR.frame_a.R.T[3,1] * $DER.front.cornerR.jointUSR.rod1.rRod_0[1] + front.cornerR.jointUSR.frame_a.R.T[3,2] * $DER.front.cornerR.jointUSR.rod1.rRod_0[2] + front.cornerR.jointUSR.frame_a.R.T[3,3] * $DER.front.cornerR.jointUSR.rod1.rRod_0[3] + front.cornerR.jointUSR.frame_a.R.w[2] * front.cornerR.jointUSR.rod1.rRod_a[1] - front.cornerR.jointUSR.frame_a.R.w[1] * front.cornerR.jointUSR.rod1.rRod_a[2]) / front.cornerR.jointUSR.rod1.rodLength
*/
void Roll_eqFunction_5129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1947]] /* front.cornerR.jointUSR.rod1.der_rRod_a_L[3] DUMMY_STATE */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1794]] /* front.cornerR.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* der(front.cornerR.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* front.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* der(front.cornerR.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* front.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* der(front.cornerR.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* front.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1978]] /* front.cornerR.jointUSR.rod1.rRod_a[1] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* front.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1979]] /* front.cornerR.jointUSR.rod1.rRod_a[2] DUMMY_STATE */))),(data->simulationInfo->realParameter[869] /* front.cornerR.jointUSR.rod1.rodLength PARAM */),"front.cornerR.jointUSR.rod1.rodLength",equationIndexes);
  TRACE_POP
}
extern void Roll_eqFunction_6860(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6861(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6859(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6866(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6867(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6864(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6865(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8585(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6862(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void Roll_functionInitialEquations_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Roll_eqFunction_8562(data, threadData);
  Roll_eqFunction_8563(data, threadData);
  Roll_eqFunction_8573(data, threadData);
  Roll_eqFunction_4414(data, threadData);
  Roll_eqFunction_8581(data, threadData);
  Roll_eqFunction_8577(data, threadData);
  Roll_eqFunction_8578(data, threadData);
  Roll_eqFunction_8579(data, threadData);
  Roll_eqFunction_8574(data, threadData);
  Roll_eqFunction_8575(data, threadData);
  Roll_eqFunction_8576(data, threadData);
  Roll_eqFunction_8567(data, threadData);
  Roll_eqFunction_8571(data, threadData);
  Roll_eqFunction_8572(data, threadData);
  Roll_eqFunction_8564(data, threadData);
  Roll_eqFunction_8565(data, threadData);
  Roll_eqFunction_8566(data, threadData);
  Roll_eqFunction_8568(data, threadData);
  Roll_eqFunction_8569(data, threadData);
  Roll_eqFunction_8570(data, threadData);
  Roll_eqFunction_4431(data, threadData);
  Roll_eqFunction_4432(data, threadData);
  Roll_eqFunction_4433(data, threadData);
  Roll_eqFunction_4434(data, threadData);
  Roll_eqFunction_6929(data, threadData);
  Roll_eqFunction_6933(data, threadData);
  Roll_eqFunction_6934(data, threadData);
  Roll_eqFunction_6935(data, threadData);
  Roll_eqFunction_6990(data, threadData);
  Roll_eqFunction_6991(data, threadData);
  Roll_eqFunction_6992(data, threadData);
  Roll_eqFunction_4442(data, threadData);
  Roll_eqFunction_6937(data, threadData);
  Roll_eqFunction_6994(data, threadData);
  Roll_eqFunction_6936(data, threadData);
  Roll_eqFunction_6938(data, threadData);
  Roll_eqFunction_6942(data, threadData);
  Roll_eqFunction_6943(data, threadData);
  Roll_eqFunction_6944(data, threadData);
  Roll_eqFunction_4450(data, threadData);
  Roll_eqFunction_4451(data, threadData);
  Roll_eqFunction_6969(data, threadData);
  Roll_eqFunction_6970(data, threadData);
  Roll_eqFunction_6971(data, threadData);
  Roll_eqFunction_6978(data, threadData);
  Roll_eqFunction_6979(data, threadData);
  Roll_eqFunction_7026(data, threadData);
  Roll_eqFunction_7027(data, threadData);
  Roll_eqFunction_7028(data, threadData);
  Roll_eqFunction_7029(data, threadData);
  Roll_eqFunction_7030(data, threadData);
  Roll_eqFunction_7031(data, threadData);
  Roll_eqFunction_7032(data, threadData);
  Roll_eqFunction_7033(data, threadData);
  Roll_eqFunction_7036(data, threadData);
  Roll_eqFunction_7035(data, threadData);
  Roll_eqFunction_7034(data, threadData);
  Roll_eqFunction_7037(data, threadData);
  Roll_eqFunction_7040(data, threadData);
  Roll_eqFunction_7039(data, threadData);
  Roll_eqFunction_7038(data, threadData);
  Roll_eqFunction_7047(data, threadData);
  Roll_eqFunction_7053(data, threadData);
  Roll_eqFunction_7062(data, threadData);
  Roll_eqFunction_7048(data, threadData);
  Roll_eqFunction_7914(data, threadData);
  Roll_eqFunction_7044(data, threadData);
  Roll_eqFunction_7046(data, threadData);
  Roll_eqFunction_7061(data, threadData);
  Roll_eqFunction_7045(data, threadData);
  Roll_eqFunction_7913(data, threadData);
  Roll_eqFunction_7041(data, threadData);
  Roll_eqFunction_7043(data, threadData);
  Roll_eqFunction_7054(data, threadData);
  Roll_eqFunction_7057(data, threadData);
  Roll_eqFunction_7056(data, threadData);
  Roll_eqFunction_7055(data, threadData);
  Roll_eqFunction_7060(data, threadData);
  Roll_eqFunction_7063(data, threadData);
  Roll_eqFunction_7068(data, threadData);
  Roll_eqFunction_7066(data, threadData);
  Roll_eqFunction_7064(data, threadData);
  Roll_eqFunction_7042(data, threadData);
  Roll_eqFunction_7912(data, threadData);
  Roll_eqFunction_7916(data, threadData);
  Roll_eqFunction_4496(data, threadData);
  Roll_eqFunction_4497(data, threadData);
  Roll_eqFunction_7919(data, threadData);
  Roll_eqFunction_4499(data, threadData);
  Roll_eqFunction_7920(data, threadData);
  Roll_eqFunction_7921(data, threadData);
  Roll_eqFunction_7922(data, threadData);
  Roll_eqFunction_7049(data, threadData);
  Roll_eqFunction_7052(data, threadData);
  Roll_eqFunction_7069(data, threadData);
  Roll_eqFunction_7051(data, threadData);
  Roll_eqFunction_7067(data, threadData);
  Roll_eqFunction_7050(data, threadData);
  Roll_eqFunction_7065(data, threadData);
  Roll_eqFunction_4510(data, threadData);
  Roll_eqFunction_4511(data, threadData);
  Roll_eqFunction_4512(data, threadData);
  Roll_eqFunction_4513(data, threadData);
  Roll_eqFunction_4514(data, threadData);
  Roll_eqFunction_4515(data, threadData);
  Roll_eqFunction_4516(data, threadData);
  Roll_eqFunction_4517(data, threadData);
  Roll_eqFunction_4518(data, threadData);
  Roll_eqFunction_4519(data, threadData);
  Roll_eqFunction_4520(data, threadData);
  Roll_eqFunction_4521(data, threadData);
  Roll_eqFunction_4522(data, threadData);
  Roll_eqFunction_4523(data, threadData);
  Roll_eqFunction_4524(data, threadData);
  Roll_eqFunction_4525(data, threadData);
  Roll_eqFunction_4526(data, threadData);
  Roll_eqFunction_4527(data, threadData);
  Roll_eqFunction_4528(data, threadData);
  Roll_eqFunction_4529(data, threadData);
  Roll_eqFunction_4530(data, threadData);
  Roll_eqFunction_4531(data, threadData);
  Roll_eqFunction_6968(data, threadData);
  Roll_eqFunction_6993(data, threadData);
  Roll_eqFunction_4534(data, threadData);
  Roll_eqFunction_4535(data, threadData);
  Roll_eqFunction_7023(data, threadData);
  Roll_eqFunction_4537(data, threadData);
  Roll_eqFunction_7024(data, threadData);
  Roll_eqFunction_4539(data, threadData);
  Roll_eqFunction_6997(data, threadData);
  Roll_eqFunction_4541(data, threadData);
  Roll_eqFunction_4542(data, threadData);
  Roll_eqFunction_4543(data, threadData);
  Roll_eqFunction_7072(data, threadData);
  Roll_eqFunction_7073(data, threadData);
  Roll_eqFunction_7071(data, threadData);
  Roll_eqFunction_7078(data, threadData);
  Roll_eqFunction_7079(data, threadData);
  Roll_eqFunction_7076(data, threadData);
  Roll_eqFunction_7077(data, threadData);
  Roll_eqFunction_8640(data, threadData);
  Roll_eqFunction_7074(data, threadData);
  Roll_eqFunction_7075(data, threadData);
  Roll_eqFunction_8642(data, threadData);
  Roll_eqFunction_8641(data, threadData);
  Roll_eqFunction_8644(data, threadData);
  Roll_eqFunction_4557(data, threadData);
  Roll_eqFunction_4558(data, threadData);
  Roll_eqFunction_8647(data, threadData);
  Roll_eqFunction_4560(data, threadData);
  Roll_eqFunction_8648(data, threadData);
  Roll_eqFunction_8649(data, threadData);
  Roll_eqFunction_8650(data, threadData);
  Roll_eqFunction_4564(data, threadData);
  Roll_eqFunction_7081(data, threadData);
  Roll_eqFunction_4566(data, threadData);
  Roll_eqFunction_7083(data, threadData);
  Roll_eqFunction_4568(data, threadData);
  Roll_eqFunction_7085(data, threadData);
  Roll_eqFunction_7086(data, threadData);
  Roll_eqFunction_7087(data, threadData);
  Roll_eqFunction_7088(data, threadData);
  Roll_eqFunction_7089(data, threadData);
  Roll_eqFunction_7090(data, threadData);
  Roll_eqFunction_7091(data, threadData);
  Roll_eqFunction_4576(data, threadData);
  Roll_eqFunction_4577(data, threadData);
  Roll_eqFunction_4578(data, threadData);
  Roll_eqFunction_7095(data, threadData);
  Roll_eqFunction_7096(data, threadData);
  Roll_eqFunction_7097(data, threadData);
  Roll_eqFunction_7098(data, threadData);
  Roll_eqFunction_4583(data, threadData);
  Roll_eqFunction_7110(data, threadData);
  Roll_eqFunction_7114(data, threadData);
  Roll_eqFunction_7118(data, threadData);
  Roll_eqFunction_4587(data, threadData);
  Roll_eqFunction_7111(data, threadData);
  Roll_eqFunction_7115(data, threadData);
  Roll_eqFunction_7119(data, threadData);
  Roll_eqFunction_4591(data, threadData);
  Roll_eqFunction_7112(data, threadData);
  Roll_eqFunction_7116(data, threadData);
  Roll_eqFunction_7120(data, threadData);
  Roll_eqFunction_4595(data, threadData);
  Roll_eqFunction_7002(data, threadData);
  Roll_eqFunction_4597(data, threadData);
  Roll_eqFunction_7004(data, threadData);
  Roll_eqFunction_4599(data, threadData);
  Roll_eqFunction_7006(data, threadData);
  Roll_eqFunction_7007(data, threadData);
  Roll_eqFunction_4602(data, threadData);
  Roll_eqFunction_4603(data, threadData);
  Roll_eqFunction_4604(data, threadData);
  Roll_eqFunction_4605(data, threadData);
  Roll_eqFunction_4606(data, threadData);
  Roll_eqFunction_7017(data, threadData);
  Roll_eqFunction_7016(data, threadData);
  Roll_eqFunction_7010(data, threadData);
  Roll_eqFunction_7009(data, threadData);
  Roll_eqFunction_7014(data, threadData);
  Roll_eqFunction_4612(data, threadData);
  Roll_eqFunction_4613(data, threadData);
  Roll_eqFunction_7013(data, threadData);
  Roll_eqFunction_7021(data, threadData);
  Roll_eqFunction_4616(data, threadData);
  Roll_eqFunction_4617(data, threadData);
  Roll_eqFunction_4618(data, threadData);
  Roll_eqFunction_7924(data, threadData);
  Roll_eqFunction_8652(data, threadData);
  Roll_eqFunction_7923(data, threadData);
  Roll_eqFunction_7925(data, threadData);
  Roll_eqFunction_4623(data, threadData);
  Roll_eqFunction_4624(data, threadData);
  Roll_eqFunction_4625(data, threadData);
  Roll_eqFunction_7969(data, threadData);
  Roll_eqFunction_7959(data, threadData);
  Roll_eqFunction_7943(data, threadData);
  Roll_eqFunction_8002(data, threadData);
  Roll_eqFunction_8003(data, threadData);
  Roll_eqFunction_4631(data, threadData);
  Roll_eqFunction_4632(data, threadData);
  Roll_eqFunction_4633(data, threadData);
  Roll_eqFunction_7940(data, threadData);
  Roll_eqFunction_7939(data, threadData);
  Roll_eqFunction_7938(data, threadData);
  Roll_eqFunction_8000(data, threadData);
  Roll_eqFunction_8001(data, threadData);
  Roll_eqFunction_4639(data, threadData);
  Roll_eqFunction_4640(data, threadData);
  Roll_eqFunction_4641(data, threadData);
  Roll_eqFunction_7935(data, threadData);
  Roll_eqFunction_4643(data, threadData);
  Roll_eqFunction_4644(data, threadData);
  Roll_eqFunction_7971(data, threadData);
  Roll_eqFunction_7972(data, threadData);
  Roll_eqFunction_7985(data, threadData);
  Roll_eqFunction_7975(data, threadData);
  Roll_eqFunction_7977(data, threadData);
  Roll_eqFunction_4650(data, threadData);
  Roll_eqFunction_4651(data, threadData);
  Roll_eqFunction_7979(data, threadData);
  Roll_eqFunction_7981(data, threadData);
  Roll_eqFunction_7980(data, threadData);
  Roll_eqFunction_7983(data, threadData);
  Roll_eqFunction_7984(data, threadData);
  Roll_eqFunction_7974(data, threadData);
  Roll_eqFunction_7934(data, threadData);
  Roll_eqFunction_4659(data, threadData);
  Roll_eqFunction_4660(data, threadData);
  Roll_eqFunction_7961(data, threadData);
  Roll_eqFunction_7962(data, threadData);
  Roll_eqFunction_7968(data, threadData);
  Roll_eqFunction_7964(data, threadData);
  Roll_eqFunction_7966(data, threadData);
  Roll_eqFunction_4666(data, threadData);
  Roll_eqFunction_4667(data, threadData);
  Roll_eqFunction_7988(data, threadData);
  Roll_eqFunction_7990(data, threadData);
  Roll_eqFunction_7989(data, threadData);
  Roll_eqFunction_7967(data, threadData);
  Roll_eqFunction_7993(data, threadData);
  Roll_eqFunction_7963(data, threadData);
  Roll_eqFunction_7933(data, threadData);
  Roll_eqFunction_4675(data, threadData);
  Roll_eqFunction_4676(data, threadData);
  Roll_eqFunction_7945(data, threadData);
  Roll_eqFunction_7946(data, threadData);
  Roll_eqFunction_7973(data, threadData);
  Roll_eqFunction_7958(data, threadData);
  Roll_eqFunction_7948(data, threadData);
  Roll_eqFunction_7950(data, threadData);
  Roll_eqFunction_4683(data, threadData);
  Roll_eqFunction_4684(data, threadData);
  Roll_eqFunction_7952(data, threadData);
  Roll_eqFunction_7954(data, threadData);
  Roll_eqFunction_7953(data, threadData);
  Roll_eqFunction_7991(data, threadData);
  Roll_eqFunction_7998(data, threadData);
  Roll_eqFunction_7999(data, threadData);
  Roll_eqFunction_7956(data, threadData);
  Roll_eqFunction_7957(data, threadData);
  Roll_eqFunction_7994(data, threadData);
  Roll_eqFunction_7947(data, threadData);
  Roll_eqFunction_7986(data, threadData);
  Roll_eqFunction_8651(data, threadData);
  Roll_eqFunction_8653(data, threadData);
  Roll_eqFunction_8662(data, threadData);
  Roll_eqFunction_8663(data, threadData);
  Roll_eqFunction_8674(data, threadData);
  Roll_eqFunction_4701(data, threadData);
  Roll_eqFunction_8658(data, threadData);
  Roll_eqFunction_8659(data, threadData);
  Roll_eqFunction_8660(data, threadData);
  Roll_eqFunction_4705(data, threadData);
  Roll_eqFunction_8654(data, threadData);
  Roll_eqFunction_8655(data, threadData);
  Roll_eqFunction_8668(data, threadData);
  Roll_eqFunction_8669(data, threadData);
  Roll_eqFunction_8666(data, threadData);
  Roll_eqFunction_8667(data, threadData);
  Roll_eqFunction_8664(data, threadData);
  Roll_eqFunction_8665(data, threadData);
  Roll_eqFunction_8656(data, threadData);
  Roll_eqFunction_4715(data, threadData);
  Roll_eqFunction_4719(data, threadData);
  Roll_eqFunction_4716(data, threadData);
  Roll_eqFunction_4717(data, threadData);
  Roll_eqFunction_4718(data, threadData);
  Roll_eqFunction_4720(data, threadData);
  Roll_eqFunction_4721(data, threadData);
  Roll_eqFunction_4722(data, threadData);
  Roll_eqFunction_8679(data, threadData);
  Roll_eqFunction_8680(data, threadData);
  Roll_eqFunction_8681(data, threadData);
  Roll_eqFunction_4726(data, threadData);
  Roll_eqFunction_4727(data, threadData);
  Roll_eqFunction_4728(data, threadData);
  Roll_eqFunction_8685(data, threadData);
  Roll_eqFunction_8686(data, threadData);
  Roll_eqFunction_8687(data, threadData);
  Roll_eqFunction_4732(data, threadData);
  Roll_eqFunction_4733(data, threadData);
  Roll_eqFunction_4734(data, threadData);
  Roll_eqFunction_8691(data, threadData);
  Roll_eqFunction_8692(data, threadData);
  Roll_eqFunction_8693(data, threadData);
  Roll_eqFunction_4971(data, threadData);
  Roll_eqFunction_8931(data, threadData);
  Roll_eqFunction_8939(data, threadData);
  Roll_eqFunction_8935(data, threadData);
  Roll_eqFunction_8936(data, threadData);
  Roll_eqFunction_8979(data, threadData);
  Roll_eqFunction_8934(data, threadData);
  Roll_eqFunction_8938(data, threadData);
  Roll_eqFunction_8933(data, threadData);
  Roll_eqFunction_8941(data, threadData);
  Roll_eqFunction_8944(data, threadData);
  Roll_eqFunction_8943(data, threadData);
  Roll_eqFunction_8942(data, threadData);
  Roll_eqFunction_8959(data, threadData);
  Roll_eqFunction_4985(data, threadData);
  Roll_eqFunction_4986(data, threadData);
  Roll_eqFunction_4987(data, threadData);
  Roll_eqFunction_4988(data, threadData);
  Roll_eqFunction_8953(data, threadData);
  Roll_eqFunction_8960(data, threadData);
  Roll_eqFunction_8961(data, threadData);
  Roll_eqFunction_4992(data, threadData);
  Roll_eqFunction_8951(data, threadData);
  Roll_eqFunction_4994(data, threadData);
  Roll_eqFunction_8958(data, threadData);
  Roll_eqFunction_4996(data, threadData);
  Roll_eqFunction_8955(data, threadData);
  Roll_eqFunction_8948(data, threadData);
  Roll_eqFunction_4999(data, threadData);
  Roll_eqFunction_5000(data, threadData);
  Roll_eqFunction_8957(data, threadData);
  Roll_eqFunction_8946(data, threadData);
  Roll_eqFunction_8947(data, threadData);
  Roll_eqFunction_5004(data, threadData);
  Roll_eqFunction_8966(data, threadData);
  Roll_eqFunction_5006(data, threadData);
  Roll_eqFunction_8965(data, threadData);
  Roll_eqFunction_8975(data, threadData);
  Roll_eqFunction_8976(data, threadData);
  Roll_eqFunction_8977(data, threadData);
  Roll_eqFunction_8972(data, threadData);
  Roll_eqFunction_8973(data, threadData);
  Roll_eqFunction_8974(data, threadData);
  Roll_eqFunction_8969(data, threadData);
  Roll_eqFunction_8970(data, threadData);
  Roll_eqFunction_8971(data, threadData);
  Roll_eqFunction_5017(data, threadData);
  Roll_eqFunction_5018(data, threadData);
  Roll_eqFunction_5019(data, threadData);
  Roll_eqFunction_5020(data, threadData);
  Roll_eqFunction_6717(data, threadData);
  Roll_eqFunction_6721(data, threadData);
  Roll_eqFunction_6722(data, threadData);
  Roll_eqFunction_6723(data, threadData);
  Roll_eqFunction_6778(data, threadData);
  Roll_eqFunction_6779(data, threadData);
  Roll_eqFunction_6780(data, threadData);
  Roll_eqFunction_5028(data, threadData);
  Roll_eqFunction_6725(data, threadData);
  Roll_eqFunction_6782(data, threadData);
  Roll_eqFunction_6724(data, threadData);
  Roll_eqFunction_6726(data, threadData);
  Roll_eqFunction_6730(data, threadData);
  Roll_eqFunction_6731(data, threadData);
  Roll_eqFunction_6732(data, threadData);
  Roll_eqFunction_5036(data, threadData);
  Roll_eqFunction_5037(data, threadData);
  Roll_eqFunction_6757(data, threadData);
  Roll_eqFunction_6758(data, threadData);
  Roll_eqFunction_6759(data, threadData);
  Roll_eqFunction_6766(data, threadData);
  Roll_eqFunction_6767(data, threadData);
  Roll_eqFunction_6814(data, threadData);
  Roll_eqFunction_6815(data, threadData);
  Roll_eqFunction_6816(data, threadData);
  Roll_eqFunction_6817(data, threadData);
  Roll_eqFunction_6818(data, threadData);
  Roll_eqFunction_6819(data, threadData);
  Roll_eqFunction_6820(data, threadData);
  Roll_eqFunction_6821(data, threadData);
  Roll_eqFunction_6824(data, threadData);
  Roll_eqFunction_6823(data, threadData);
  Roll_eqFunction_6822(data, threadData);
  Roll_eqFunction_6825(data, threadData);
  Roll_eqFunction_6828(data, threadData);
  Roll_eqFunction_6827(data, threadData);
  Roll_eqFunction_6826(data, threadData);
  Roll_eqFunction_6835(data, threadData);
  Roll_eqFunction_6841(data, threadData);
  Roll_eqFunction_6850(data, threadData);
  Roll_eqFunction_6836(data, threadData);
  Roll_eqFunction_7830(data, threadData);
  Roll_eqFunction_6832(data, threadData);
  Roll_eqFunction_6834(data, threadData);
  Roll_eqFunction_6849(data, threadData);
  Roll_eqFunction_6833(data, threadData);
  Roll_eqFunction_7829(data, threadData);
  Roll_eqFunction_6829(data, threadData);
  Roll_eqFunction_6831(data, threadData);
  Roll_eqFunction_6842(data, threadData);
  Roll_eqFunction_6845(data, threadData);
  Roll_eqFunction_6844(data, threadData);
  Roll_eqFunction_6843(data, threadData);
  Roll_eqFunction_6848(data, threadData);
  Roll_eqFunction_6851(data, threadData);
  Roll_eqFunction_6856(data, threadData);
  Roll_eqFunction_6854(data, threadData);
  Roll_eqFunction_6852(data, threadData);
  Roll_eqFunction_6830(data, threadData);
  Roll_eqFunction_7828(data, threadData);
  Roll_eqFunction_7832(data, threadData);
  Roll_eqFunction_5082(data, threadData);
  Roll_eqFunction_5083(data, threadData);
  Roll_eqFunction_7835(data, threadData);
  Roll_eqFunction_5085(data, threadData);
  Roll_eqFunction_7836(data, threadData);
  Roll_eqFunction_7837(data, threadData);
  Roll_eqFunction_7838(data, threadData);
  Roll_eqFunction_6837(data, threadData);
  Roll_eqFunction_6840(data, threadData);
  Roll_eqFunction_6857(data, threadData);
  Roll_eqFunction_6839(data, threadData);
  Roll_eqFunction_6855(data, threadData);
  Roll_eqFunction_6838(data, threadData);
  Roll_eqFunction_6853(data, threadData);
  Roll_eqFunction_5096(data, threadData);
  Roll_eqFunction_5097(data, threadData);
  Roll_eqFunction_5098(data, threadData);
  Roll_eqFunction_5099(data, threadData);
  Roll_eqFunction_5100(data, threadData);
  Roll_eqFunction_5101(data, threadData);
  Roll_eqFunction_5102(data, threadData);
  Roll_eqFunction_5103(data, threadData);
  Roll_eqFunction_5104(data, threadData);
  Roll_eqFunction_5105(data, threadData);
  Roll_eqFunction_5106(data, threadData);
  Roll_eqFunction_5107(data, threadData);
  Roll_eqFunction_5108(data, threadData);
  Roll_eqFunction_5109(data, threadData);
  Roll_eqFunction_5110(data, threadData);
  Roll_eqFunction_5111(data, threadData);
  Roll_eqFunction_5112(data, threadData);
  Roll_eqFunction_5113(data, threadData);
  Roll_eqFunction_5114(data, threadData);
  Roll_eqFunction_5115(data, threadData);
  Roll_eqFunction_5116(data, threadData);
  Roll_eqFunction_5117(data, threadData);
  Roll_eqFunction_6756(data, threadData);
  Roll_eqFunction_6781(data, threadData);
  Roll_eqFunction_5120(data, threadData);
  Roll_eqFunction_5121(data, threadData);
  Roll_eqFunction_6811(data, threadData);
  Roll_eqFunction_5123(data, threadData);
  Roll_eqFunction_6812(data, threadData);
  Roll_eqFunction_5125(data, threadData);
  Roll_eqFunction_6785(data, threadData);
  Roll_eqFunction_5127(data, threadData);
  Roll_eqFunction_5128(data, threadData);
  Roll_eqFunction_5129(data, threadData);
  Roll_eqFunction_6860(data, threadData);
  Roll_eqFunction_6861(data, threadData);
  Roll_eqFunction_6859(data, threadData);
  Roll_eqFunction_6866(data, threadData);
  Roll_eqFunction_6867(data, threadData);
  Roll_eqFunction_6864(data, threadData);
  Roll_eqFunction_6865(data, threadData);
  Roll_eqFunction_8585(data, threadData);
  Roll_eqFunction_6862(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif