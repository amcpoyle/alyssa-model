#include "Steering_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void Steering_eqFunction_6863(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8587(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8586(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8589(DATA *data, threadData_t *threadData);


/*
equation index: 5143
type: SIMPLE_ASSIGN
$DER.front.cornerR.tieRod.revolute.A = (-2.0) * (front.cornerR.tieRod.revolute.r_b[1] * $DER.front.cornerR.tieRod.revolute.r_a[1] + $DER.front.cornerR.tieRod.revolute.r_b[1] * front.cornerR.tieRod.revolute.r_a[1] + front.cornerR.tieRod.revolute.r_b[2] * $DER.front.cornerR.tieRod.revolute.r_a[2] + $DER.front.cornerR.tieRod.revolute.r_b[2] * front.cornerR.tieRod.revolute.r_a[2] + front.cornerR.tieRod.revolute.r_b[3] * $DER.front.cornerR.tieRod.revolute.r_a[3] + $DER.front.cornerR.tieRod.revolute.r_b[3] * front.cornerR.tieRod.revolute.r_a[3] + (-front.cornerR.tieRod.revolute.e_r_b) * $DER.front.cornerR.tieRod.revolute.e_r_a - $DER.front.cornerR.tieRod.revolute.e_r_b * front.cornerR.tieRod.revolute.e_r_a)
*/
void Steering_eqFunction_5143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[455]] /* der(front.cornerR.tieRod.revolute.A) DUMMY_DER */) = (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* front.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* der(front.cornerR.tieRod.revolute.r_a[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[482]] /* der(front.cornerR.tieRod.revolute.r_b[1]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* front.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2272]] /* front.cornerR.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* der(front.cornerR.tieRod.revolute.r_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* der(front.cornerR.tieRod.revolute.r_b[2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2269]] /* front.cornerR.tieRod.revolute.r_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2273]] /* front.cornerR.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* der(front.cornerR.tieRod.revolute.r_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* der(front.cornerR.tieRod.revolute.r_b[3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2270]] /* front.cornerR.tieRod.revolute.r_a[3] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2254]] /* front.cornerR.tieRod.revolute.e_r_b DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* der(front.cornerR.tieRod.revolute.e_r_a) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* der(front.cornerR.tieRod.revolute.e_r_b) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* front.cornerR.tieRod.revolute.e_r_a DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 5144
type: SIMPLE_ASSIGN
$DER.front.cornerR.tieRod.revolute.B = 2.0 * (front.cornerR.tieRod.revolute.r_b[1] * (0.24752939586124137 * $DER.front.cornerR.tieRod.revolute.r_a[3] + (-0.9626143172381612) * $DER.front.cornerR.tieRod.revolute.r_a[2]) + $DER.front.cornerR.tieRod.revolute.r_b[1] * (0.24752939586124137 * front.cornerR.tieRod.revolute.r_a[3] + (-0.9626143172381612) * front.cornerR.tieRod.revolute.r_a[2]) + front.cornerR.tieRod.revolute.r_b[2] * (0.9626143172381612 * $DER.front.cornerR.tieRod.revolute.r_a[1] + (-0.11001306482721843) * $DER.front.cornerR.tieRod.revolute.r_a[3]) + $DER.front.cornerR.tieRod.revolute.r_b[2] * (0.9626143172381612 * front.cornerR.tieRod.revolute.r_a[1] + (-0.11001306482721843) * front.cornerR.tieRod.revolute.r_a[3]) + front.cornerR.tieRod.revolute.r_b[3] * (0.11001306482721843 * $DER.front.cornerR.tieRod.revolute.r_a[2] + (-0.24752939586124137) * $DER.front.cornerR.tieRod.revolute.r_a[1]) + $DER.front.cornerR.tieRod.revolute.r_b[3] * (0.11001306482721843 * front.cornerR.tieRod.revolute.r_a[2] + (-0.24752939586124137) * front.cornerR.tieRod.revolute.r_a[1]))
*/
void Steering_eqFunction_5144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[456]] /* der(front.cornerR.tieRod.revolute.B) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* front.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* der(front.cornerR.tieRod.revolute.r_a[3]) DUMMY_DER */)) + (-0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* der(front.cornerR.tieRod.revolute.r_a[2]) DUMMY_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[482]] /* der(front.cornerR.tieRod.revolute.r_b[1]) DUMMY_DER */)) * ((0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2270]] /* front.cornerR.tieRod.revolute.r_a[3] DUMMY_STATE */)) + (-0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2269]] /* front.cornerR.tieRod.revolute.r_a[2] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2272]] /* front.cornerR.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* der(front.cornerR.tieRod.revolute.r_a[1]) DUMMY_DER */)) + (-0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* der(front.cornerR.tieRod.revolute.r_a[3]) DUMMY_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* der(front.cornerR.tieRod.revolute.r_b[2]) DUMMY_DER */)) * ((0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* front.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */)) + (-0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2270]] /* front.cornerR.tieRod.revolute.r_a[3] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2273]] /* front.cornerR.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* der(front.cornerR.tieRod.revolute.r_a[2]) DUMMY_DER */)) + (-0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* der(front.cornerR.tieRod.revolute.r_a[1]) DUMMY_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* der(front.cornerR.tieRod.revolute.r_b[3]) DUMMY_DER */)) * ((0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2269]] /* front.cornerR.tieRod.revolute.r_a[2] DUMMY_STATE */)) + (-0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* front.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */))));
  TRACE_POP
}
extern void Steering_eqFunction_8592(DATA *data, threadData_t *threadData);


/*
equation index: 5146
type: SIMPLE_ASSIGN
$DER.front.cornerR.tieRod.revolute.C = 2.0 * front.cornerR.tieRod.revolute.r_a[1] * $DER.front.cornerR.tieRod.revolute.r_a[1] + 2.0 * front.cornerR.tieRod.revolute.r_a[2] * $DER.front.cornerR.tieRod.revolute.r_a[2] + 2.0 * front.cornerR.tieRod.revolute.r_a[3] * $DER.front.cornerR.tieRod.revolute.r_a[3] + 2.0 * front.cornerR.tieRod.revolute.r_b[1] * $DER.front.cornerR.tieRod.revolute.r_b[1] + 2.0 * front.cornerR.tieRod.revolute.r_b[2] * $DER.front.cornerR.tieRod.revolute.r_b[2] + 2.0 * front.cornerR.tieRod.revolute.r_b[3] * $DER.front.cornerR.tieRod.revolute.r_b[3] + (-2.0) * (front.cornerR.tieRod.revolute.e_r_b * $DER.front.cornerR.tieRod.revolute.e_r_a + $DER.front.cornerR.tieRod.revolute.e_r_b * front.cornerR.tieRod.revolute.e_r_a)
*/
void Steering_eqFunction_5146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[457]] /* der(front.cornerR.tieRod.revolute.C) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* front.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[479]] /* der(front.cornerR.tieRod.revolute.r_a[1]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2269]] /* front.cornerR.tieRod.revolute.r_a[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[480]] /* der(front.cornerR.tieRod.revolute.r_a[2]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2270]] /* front.cornerR.tieRod.revolute.r_a[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[481]] /* der(front.cornerR.tieRod.revolute.r_a[3]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* front.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[482]] /* der(front.cornerR.tieRod.revolute.r_b[1]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2272]] /* front.cornerR.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* der(front.cornerR.tieRod.revolute.r_b[2]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2273]] /* front.cornerR.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* der(front.cornerR.tieRod.revolute.r_b[3]) DUMMY_DER */))) + (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2254]] /* front.cornerR.tieRod.revolute.e_r_b DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[471]] /* der(front.cornerR.tieRod.revolute.e_r_a) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* der(front.cornerR.tieRod.revolute.e_r_b) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2253]] /* front.cornerR.tieRod.revolute.e_r_a DUMMY_STATE */)));
  TRACE_POP
}
extern void Steering_eqFunction_8593(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8594(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8595(DATA *data, threadData_t *threadData);


/*
equation index: 5150
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.rod1.rRod_a[1] = front.cornerR.jointUSR.frame_a.R.T[1,1] * $DER.front.cornerR.jointUSR.rod1.rRod_0[1] + front.cornerR.jointUSR.frame_a.R.T[1,2] * $DER.front.cornerR.jointUSR.rod1.rRod_0[2] + front.cornerR.jointUSR.frame_a.R.T[1,3] * $DER.front.cornerR.jointUSR.rod1.rRod_0[3] + front.cornerR.jointUSR.frame_a.R.w[3] * (front.cornerR.jointUSR.frame_a.R.T[2,1] * front.cornerR.jointUSR.rod1.rRod_0[1] + front.cornerR.jointUSR.frame_a.R.T[2,2] * front.cornerR.jointUSR.rod1.rRod_0[2] + front.cornerR.jointUSR.frame_a.R.T[2,3] * front.cornerR.jointUSR.rod1.rRod_0[3]) - front.cornerR.jointUSR.frame_a.R.w[2] * (front.cornerR.jointUSR.frame_a.R.T[3,1] * front.cornerR.jointUSR.rod1.rRod_0[1] + front.cornerR.jointUSR.frame_a.R.T[3,2] * front.cornerR.jointUSR.rod1.rRod_0[2] + front.cornerR.jointUSR.frame_a.R.T[3,3] * front.cornerR.jointUSR.rod1.rRod_0[3])
*/
void Steering_eqFunction_5150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[445]] /* der(front.cornerR.jointUSR.rod1.rRod_a[1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1788]] /* front.cornerR.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* der(front.cornerR.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1789]] /* front.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* der(front.cornerR.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* front.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* der(front.cornerR.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1799]] /* front.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* front.cornerR.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1975]] /* front.cornerR.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* front.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1976]] /* front.cornerR.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* front.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1977]] /* front.cornerR.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* front.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1794]] /* front.cornerR.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1975]] /* front.cornerR.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* front.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1976]] /* front.cornerR.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* front.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1977]] /* front.cornerR.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Steering_eqFunction_6869(DATA *data, threadData_t *threadData);


/*
equation index: 5152
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.rod1.rRod_a[2] = front.cornerR.jointUSR.frame_a.R.T[2,1] * $DER.front.cornerR.jointUSR.rod1.rRod_0[1] + front.cornerR.jointUSR.frame_a.R.T[2,2] * $DER.front.cornerR.jointUSR.rod1.rRod_0[2] + front.cornerR.jointUSR.frame_a.R.T[2,3] * $DER.front.cornerR.jointUSR.rod1.rRod_0[3] + front.cornerR.jointUSR.frame_a.R.w[1] * (front.cornerR.jointUSR.frame_a.R.T[3,1] * front.cornerR.jointUSR.rod1.rRod_0[1] + front.cornerR.jointUSR.frame_a.R.T[3,2] * front.cornerR.jointUSR.rod1.rRod_0[2] + front.cornerR.jointUSR.frame_a.R.T[3,3] * front.cornerR.jointUSR.rod1.rRod_0[3]) - front.cornerR.jointUSR.frame_a.R.w[3] * (front.cornerR.jointUSR.frame_a.R.T[1,1] * front.cornerR.jointUSR.rod1.rRod_0[1] + front.cornerR.jointUSR.frame_a.R.T[1,2] * front.cornerR.jointUSR.rod1.rRod_0[2] + front.cornerR.jointUSR.frame_a.R.T[1,3] * front.cornerR.jointUSR.rod1.rRod_0[3])
*/
void Steering_eqFunction_5152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[446]] /* der(front.cornerR.jointUSR.rod1.rRod_a[2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* front.cornerR.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* der(front.cornerR.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* front.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* der(front.cornerR.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* front.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* der(front.cornerR.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* front.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1794]] /* front.cornerR.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1975]] /* front.cornerR.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* front.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1976]] /* front.cornerR.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* front.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1977]] /* front.cornerR.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1799]] /* front.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1788]] /* front.cornerR.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1975]] /* front.cornerR.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1789]] /* front.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1976]] /* front.cornerR.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* front.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1977]] /* front.cornerR.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Steering_eqFunction_6871(DATA *data, threadData_t *threadData);


/*
equation index: 5154
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.rod1.rRod_a[3] = front.cornerR.jointUSR.frame_a.R.T[3,1] * $DER.front.cornerR.jointUSR.rod1.rRod_0[1] + front.cornerR.jointUSR.frame_a.R.T[3,2] * $DER.front.cornerR.jointUSR.rod1.rRod_0[2] + front.cornerR.jointUSR.frame_a.R.T[3,3] * $DER.front.cornerR.jointUSR.rod1.rRod_0[3] + front.cornerR.jointUSR.frame_a.R.w[2] * (front.cornerR.jointUSR.frame_a.R.T[1,1] * front.cornerR.jointUSR.rod1.rRod_0[1] + front.cornerR.jointUSR.frame_a.R.T[1,2] * front.cornerR.jointUSR.rod1.rRod_0[2] + front.cornerR.jointUSR.frame_a.R.T[1,3] * front.cornerR.jointUSR.rod1.rRod_0[3]) - front.cornerR.jointUSR.frame_a.R.w[1] * (front.cornerR.jointUSR.frame_a.R.T[2,1] * front.cornerR.jointUSR.rod1.rRod_0[1] + front.cornerR.jointUSR.frame_a.R.T[2,2] * front.cornerR.jointUSR.rod1.rRod_0[2] + front.cornerR.jointUSR.frame_a.R.T[2,3] * front.cornerR.jointUSR.rod1.rRod_0[3])
*/
void Steering_eqFunction_5154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[447]] /* der(front.cornerR.jointUSR.rod1.rRod_a[3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1794]] /* front.cornerR.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* der(front.cornerR.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* front.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* der(front.cornerR.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* front.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[444]] /* der(front.cornerR.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* front.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1788]] /* front.cornerR.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1975]] /* front.cornerR.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1789]] /* front.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1976]] /* front.cornerR.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* front.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1977]] /* front.cornerR.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* front.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* front.cornerR.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1975]] /* front.cornerR.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* front.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1976]] /* front.cornerR.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* front.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1977]] /* front.cornerR.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Steering_eqFunction_6873(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6874(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6875(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6876(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6877(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6878(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6879(DATA *data, threadData_t *threadData);


/*
equation index: 5162
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.rod1.R_rel_ia.T[1,2] = 0.11001306482721841 * $DER.front.cornerR.jointUSR.rod1.eRod_a[2] + front.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] * $DER.front.cornerR.jointUSR.rod1.e2_a[2] + $DER.front.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] * front.cornerR.jointUSR.rod1.e2_a[2] + front.cornerR.jointUSR.rod1.e3_ia[1] * $DER.front.cornerR.jointUSR.rod1.e3_a[2]
*/
void Steering_eqFunction_5162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* der(front.cornerR.jointUSR.rod1.R_rel_ia.T[1,2]) DUMMY_DER */) = (0.11001306482721841) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* der(front.cornerR.jointUSR.rod1.eRod_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1936]] /* front.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* der(front.cornerR.jointUSR.rod1.e2_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* der(front.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1949]] /* front.cornerR.jointUSR.rod1.e2_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[855] /* front.cornerR.jointUSR.rod1.e3_ia[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* der(front.cornerR.jointUSR.rod1.e3_a[2]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 5163
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.rod1.R_rel_ia.T[2,2] = 0.24752939586124134 * $DER.front.cornerR.jointUSR.rod1.eRod_a[2] + front.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] * $DER.front.cornerR.jointUSR.rod1.e2_a[2] + $DER.front.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] * front.cornerR.jointUSR.rod1.e2_a[2] + front.cornerR.jointUSR.rod1.e3_ia[2] * $DER.front.cornerR.jointUSR.rod1.e3_a[2]
*/
void Steering_eqFunction_5163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* der(front.cornerR.jointUSR.rod1.R_rel_ia.T[2,2]) DUMMY_DER */) = (0.24752939586124134) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* der(front.cornerR.jointUSR.rod1.eRod_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1938]] /* front.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* der(front.cornerR.jointUSR.rod1.e2_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* der(front.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1949]] /* front.cornerR.jointUSR.rod1.e2_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[856] /* front.cornerR.jointUSR.rod1.e3_ia[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* der(front.cornerR.jointUSR.rod1.e3_a[2]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 5164
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.rod1.R_rel_ia.T[3,2] = 0.962614317238161 * $DER.front.cornerR.jointUSR.rod1.eRod_a[2] + front.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] * $DER.front.cornerR.jointUSR.rod1.e2_a[2] + $DER.front.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] * front.cornerR.jointUSR.rod1.e2_a[2] + front.cornerR.jointUSR.rod1.e3_ia[3] * $DER.front.cornerR.jointUSR.rod1.e3_a[2]
*/
void Steering_eqFunction_5164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[421]] /* der(front.cornerR.jointUSR.rod1.R_rel_ia.T[3,2]) DUMMY_DER */) = (0.962614317238161) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* der(front.cornerR.jointUSR.rod1.eRod_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1940]] /* front.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* der(front.cornerR.jointUSR.rod1.e2_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* der(front.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1949]] /* front.cornerR.jointUSR.rod1.e2_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[857] /* front.cornerR.jointUSR.rod1.e3_ia[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* der(front.cornerR.jointUSR.rod1.e3_a[2]) DUMMY_DER */));
  TRACE_POP
}
extern void Steering_eqFunction_6883(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6884(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6885(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6886(DATA *data, threadData_t *threadData);


/*
equation index: 5169
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.rod1.R_rel_ia.T[1,3] = 0.11001306482721841 * $DER.front.cornerR.jointUSR.rod1.eRod_a[3] + front.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] * $DER.front.cornerR.jointUSR.rod1.e2_a[3] + $DER.front.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] * front.cornerR.jointUSR.rod1.e2_a[3] + front.cornerR.jointUSR.rod1.e3_ia[1] * $DER.front.cornerR.jointUSR.rod1.e3_a[3]
*/
void Steering_eqFunction_5169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* der(front.cornerR.jointUSR.rod1.R_rel_ia.T[1,3]) DUMMY_DER */) = (0.11001306482721841) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* der(front.cornerR.jointUSR.rod1.eRod_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1936]] /* front.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* der(front.cornerR.jointUSR.rod1.e2_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* der(front.cornerR.jointUSR.rod1.R_rel_ia2.T[1,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1950]] /* front.cornerR.jointUSR.rod1.e2_a[3] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[855] /* front.cornerR.jointUSR.rod1.e3_ia[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* der(front.cornerR.jointUSR.rod1.e3_a[3]) DUMMY_DER */));
  TRACE_POP
}
extern void Steering_eqFunction_6898(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6902(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6906(DATA *data, threadData_t *threadData);


/*
equation index: 5173
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.rod1.R_rel_ia.T[2,3] = 0.24752939586124134 * $DER.front.cornerR.jointUSR.rod1.eRod_a[3] + front.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] * $DER.front.cornerR.jointUSR.rod1.e2_a[3] + $DER.front.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] * front.cornerR.jointUSR.rod1.e2_a[3] + front.cornerR.jointUSR.rod1.e3_ia[2] * $DER.front.cornerR.jointUSR.rod1.e3_a[3]
*/
void Steering_eqFunction_5173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[419]] /* der(front.cornerR.jointUSR.rod1.R_rel_ia.T[2,3]) DUMMY_DER */) = (0.24752939586124134) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* der(front.cornerR.jointUSR.rod1.eRod_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1938]] /* front.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* der(front.cornerR.jointUSR.rod1.e2_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* der(front.cornerR.jointUSR.rod1.R_rel_ia2.T[2,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1950]] /* front.cornerR.jointUSR.rod1.e2_a[3] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[856] /* front.cornerR.jointUSR.rod1.e3_ia[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* der(front.cornerR.jointUSR.rod1.e3_a[3]) DUMMY_DER */));
  TRACE_POP
}
extern void Steering_eqFunction_6899(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6903(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6907(DATA *data, threadData_t *threadData);


/*
equation index: 5177
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.rod1.R_rel_ia.T[3,3] = 0.962614317238161 * $DER.front.cornerR.jointUSR.rod1.eRod_a[3] + front.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] * $DER.front.cornerR.jointUSR.rod1.e2_a[3] + $DER.front.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] * front.cornerR.jointUSR.rod1.e2_a[3] + front.cornerR.jointUSR.rod1.e3_ia[3] * $DER.front.cornerR.jointUSR.rod1.e3_a[3]
*/
void Steering_eqFunction_5177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* der(front.cornerR.jointUSR.rod1.R_rel_ia.T[3,3]) DUMMY_DER */) = (0.962614317238161) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* der(front.cornerR.jointUSR.rod1.eRod_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1940]] /* front.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* der(front.cornerR.jointUSR.rod1.e2_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* der(front.cornerR.jointUSR.rod1.R_rel_ia2.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1950]] /* front.cornerR.jointUSR.rod1.e2_a[3] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[857] /* front.cornerR.jointUSR.rod1.e3_ia[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* der(front.cornerR.jointUSR.rod1.e3_a[3]) DUMMY_DER */));
  TRACE_POP
}
extern void Steering_eqFunction_6900(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6904(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6908(DATA *data, threadData_t *threadData);


/*
equation index: 5181
type: SIMPLE_ASSIGN
$DER.points[2,11,2] = $DER.front.cornerR.springArm.frame_a.r_0[2] + 0.009999999999999981 * front.cornerR.jointUSR.revolute.R_rel.T[3,3] * front.cornerR.springArm.frame_b.R.w[1] + 0.39 * front.cornerR.jointUSR.revolute.R_rel.T[3,2] * front.cornerR.springArm.frame_b.R.w[1]
*/
void Steering_eqFunction_5181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[540]] /* der(points[2,11,2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[452]] /* der(front.cornerR.springArm.frame_a.r_0[2]) DUMMY_DER */) + (0.009999999999999981) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2110]] /* front.cornerR.springArm.frame_b.R.w[1] DUMMY_STATE */))) + (0.39) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2110]] /* front.cornerR.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Steering_eqFunction_6790(DATA *data, threadData_t *threadData);


/*
equation index: 5183
type: SIMPLE_ASSIGN
$DER.points[2,11,3] = $DER.front.cornerR.springArm.frame_a.r_0[3] + 0.39 * front.cornerR.jointUSR.revolute.R_rel.T[3,3] * front.cornerR.springArm.frame_b.R.w[1] + 0.009999999999999981 * (-front.cornerR.jointUSR.revolute.R_rel.T[3,2]) * front.cornerR.springArm.frame_b.R.w[1]
*/
void Steering_eqFunction_5183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[541]] /* der(points[2,11,3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[453]] /* der(front.cornerR.springArm.frame_a.r_0[3]) DUMMY_DER */) + (0.39) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2110]] /* front.cornerR.springArm.frame_b.R.w[1] DUMMY_STATE */))) + (0.009999999999999981) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2110]] /* front.cornerR.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Steering_eqFunction_6792(DATA *data, threadData_t *threadData);


/*
equation index: 5185
type: SIMPLE_ASSIGN
$DER.front.cornerR.coilover.length = 0.5 * (front.cornerR.coilover.r_rel_0 * $DER.front.cornerR.coilover.r_rel_0 + $DER.front.cornerR.coilover.r_rel_0 * front.cornerR.coilover.r_rel_0) / sqrt(front.cornerR.coilover.r_rel_0 * front.cornerR.coilover.r_rel_0)
*/
void Steering_eqFunction_5185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5185};
  real_array tmp212;
  real_array tmp213;
  real_array tmp214;
  real_array tmp215;
  real_array tmp216;
  real_array tmp217;
  modelica_real tmp218;
  real_array_create(&tmp212, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* front.cornerR.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp213, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* der(front.cornerR.coilover.r_rel_0[1]) DUMMY_DER */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp214, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* der(front.cornerR.coilover.r_rel_0[1]) DUMMY_DER */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp215, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* front.cornerR.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp216, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* front.cornerR.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp217, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* front.cornerR.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  tmp218 = mul_real_scalar_product(tmp216, tmp217);
  if(!(tmp218 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(front.cornerR.coilover.r_rel_0 * front.cornerR.coilover.r_rel_0) was %g should be >= 0", tmp218);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[366]] /* der(front.cornerR.coilover.length) DUMMY_DER */) = (0.5) * (DIVISION_SIM(mul_real_scalar_product(tmp212, tmp213) + mul_real_scalar_product(tmp214, tmp215),sqrt(tmp218),"sqrt(front.cornerR.coilover.r_rel_0 * front.cornerR.coilover.r_rel_0)",equationIndexes));
  TRACE_POP
}
extern void Steering_eqFunction_6794(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6795(DATA *data, threadData_t *threadData);


/*
equation index: 5188
type: SIMPLE_ASSIGN
front.cornerR.coilover.f = front.cornerR.coilover.c * (front.cornerR.coilover.s - front.cornerR.coilover.s_unstretched) + front.cornerR.coilover.f_d
*/
void Steering_eqFunction_5188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1734]] /* front.cornerR.coilover.f variable */) = ((data->simulationInfo->realParameter[712] /* front.cornerR.coilover.c PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1750]] /* front.cornerR.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[717] /* front.cornerR.coilover.s_unstretched PARAM */)) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1735]] /* front.cornerR.coilover.f_d variable */);
  TRACE_POP
}

/*
equation index: 5189
type: SIMPLE_ASSIGN
front.cornerR.springChassis.frame_a.f[1] = (-front.cornerR.coilover.e_a[1]) * front.cornerR.coilover.f
*/
void Steering_eqFunction_5189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2128]] /* front.cornerR.springChassis.frame_a.f[1] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1728]] /* front.cornerR.coilover.e_a[1] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1734]] /* front.cornerR.coilover.f variable */));
  TRACE_POP
}

/*
equation index: 5190
type: SIMPLE_ASSIGN
front.cornerR.springChassis.frame_a.t[2] = (-0.25) * front.cornerR.springChassis.frame_a.f[1]
*/
void Steering_eqFunction_5190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5190};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2132]] /* front.cornerR.springChassis.frame_a.t[2] variable */) = (-0.25) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2128]] /* front.cornerR.springChassis.frame_a.f[1] variable */));
  TRACE_POP
}

/*
equation index: 5191
type: SIMPLE_ASSIGN
front.cornerR.springChassis.frame_a.t[3] = (-0.62) * front.cornerR.springChassis.frame_a.f[1]
*/
void Steering_eqFunction_5191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2133]] /* front.cornerR.springChassis.frame_a.t[3] variable */) = (-0.62) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2128]] /* front.cornerR.springChassis.frame_a.f[1] variable */));
  TRACE_POP
}

/*
equation index: 5192
type: SIMPLE_ASSIGN
front.cornerR.springArm.frame_a.f[1] = -front.cornerR.springChassis.frame_a.f[1]
*/
void Steering_eqFunction_5192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5192};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2096]] /* front.cornerR.springArm.frame_a.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2128]] /* front.cornerR.springChassis.frame_a.f[1] variable */));
  TRACE_POP
}
extern void Steering_eqFunction_6805(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6804(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6798(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6797(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6802(DATA *data, threadData_t *threadData);


/*
equation index: 5198
type: SIMPLE_ASSIGN
front.cornerR.springArm.frame_a.f[2] = front.cornerR.jointUSR.revolute.R_rel.T[3,2] * front.cornerR.springChassis.frame_a.f[3] - front.cornerR.jointUSR.revolute.R_rel.T[3,3] * front.cornerR.springChassis.frame_a.f[2]
*/
void Steering_eqFunction_5198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2097]] /* front.cornerR.springArm.frame_a.f[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2130]] /* front.cornerR.springChassis.frame_a.f[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2129]] /* front.cornerR.springChassis.frame_a.f[2] variable */)));
  TRACE_POP
}

/*
equation index: 5199
type: SIMPLE_ASSIGN
front.cornerR.springArm.frame_a.f[3] = (-front.cornerR.jointUSR.revolute.R_rel.T[3,2]) * front.cornerR.springChassis.frame_a.f[2] - front.cornerR.jointUSR.revolute.R_rel.T[3,3] * front.cornerR.springChassis.frame_a.f[3]
*/
void Steering_eqFunction_5199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2098]] /* front.cornerR.springArm.frame_a.f[3] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2129]] /* front.cornerR.springChassis.frame_a.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2130]] /* front.cornerR.springChassis.frame_a.f[3] variable */)));
  TRACE_POP
}
extern void Steering_eqFunction_6801(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_6809(DATA *data, threadData_t *threadData);


/*
equation index: 5202
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.revolute.R_rel.T[3,3] = (-sin(front.cornerR.jointUSR.revolute.angle)) * $DER.front.cornerR.jointUSR.revolute.angle
*/
void Steering_eqFunction_5202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* der(front.cornerR.jointUSR.revolute.R_rel.T[3,3]) DUMMY_DER */) = ((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1888]] /* front.cornerR.jointUSR.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* der(front.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 5203
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.revolute.R_rel.T[3,2] = cos(front.cornerR.jointUSR.revolute.angle) * $DER.front.cornerR.jointUSR.revolute.angle
*/
void Steering_eqFunction_5203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* der(front.cornerR.jointUSR.revolute.R_rel.T[3,2]) DUMMY_DER */) = (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1888]] /* front.cornerR.jointUSR.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* der(front.cornerR.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 5204
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.positiveBranch = AlyssaAnimation.Steering.front.cornerR.tieRod.revolute.selectBranch(front.cornerR.tieRod.revolute.lengthConstraint, {0.11001306482721843, 0.24752939586124137, 0.9626143172381612}, 0.017453292519943295 * (front.cornerR.tieRod.revolute.phi_offset + front.cornerR.tieRod.revolute.phi_guess), front.cornerR.tieRod.revolute.r_a, front.cornerR.tieRod.revolute.r_b)
*/
void Steering_eqFunction_5204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5204};
  real_array tmp219;
  real_array tmp220;
  real_array_create(&tmp219, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2268]] /* front.cornerR.tieRod.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp220, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* front.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[67] /* front.cornerR.tieRod.revolute.positiveBranch PARAM */) = omc_AlyssaAnimation_Steering_front_cornerR_tieRod_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[1152] /* front.cornerR.tieRod.revolute.lengthConstraint PARAM */), _OMC_LIT28, (0.017453292519943295) * ((data->simulationInfo->realParameter[1157] /* front.cornerR.tieRod.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[1156] /* front.cornerR.tieRod.revolute.phi_guess PARAM */)), tmp219, tmp220);
  TRACE_POP
}
extern void Steering_eqFunction_7840(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8597(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7839(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7841(DATA *data, threadData_t *threadData);


/*
equation index: 5209
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.R_rel.T[1,1] = 0.012102874432677765 + 0.9878971255673222 * cos(front.cornerR.tieRod.revolute.angle)
*/
void Steering_eqFunction_5209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2226]] /* front.cornerR.tieRod.revolute.R_rel.T[1,1] DUMMY_STATE */) = 0.012102874432677765 + (0.9878971255673222) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 5210
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.R_rel.T[1,2] = 0.027231467473524958 + (-0.027231467473524958) * cos(front.cornerR.tieRod.revolute.angle) - (-0.9626143172381612) * sin(front.cornerR.tieRod.revolute.angle)
*/
void Steering_eqFunction_5210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5210};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2227]] /* front.cornerR.tieRod.revolute.R_rel.T[1,2] DUMMY_STATE */) = 0.027231467473524958 + (-0.027231467473524958) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))) - ((-0.9626143172381612) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 5211
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.R_rel.T[1,3] = 0.10590015128593043 + (-0.10590015128593043) * cos(front.cornerR.tieRod.revolute.angle) - 0.24752939586124137 * sin(front.cornerR.tieRod.revolute.angle)
*/
void Steering_eqFunction_5211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5211};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2228]] /* front.cornerR.tieRod.revolute.R_rel.T[1,3] DUMMY_STATE */) = 0.10590015128593043 + (-0.10590015128593043) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))) - ((0.24752939586124137) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}
extern void Steering_eqFunction_7885(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7875(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7859(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8289(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8290(DATA *data, threadData_t *threadData);


/*
equation index: 5217
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.R_rel.T[2,1] = 0.027231467473524958 + (-0.027231467473524958) * cos(front.cornerR.tieRod.revolute.angle) - 0.9626143172381612 * sin(front.cornerR.tieRod.revolute.angle)
*/
void Steering_eqFunction_5217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2229]] /* front.cornerR.tieRod.revolute.R_rel.T[2,1] DUMMY_STATE */) = 0.027231467473524958 + (-0.027231467473524958) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))) - ((0.9626143172381612) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 5218
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.R_rel.T[2,2] = 0.06127080181543114 + 0.9387291981845689 * cos(front.cornerR.tieRod.revolute.angle)
*/
void Steering_eqFunction_5218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5218};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2230]] /* front.cornerR.tieRod.revolute.R_rel.T[2,2] DUMMY_STATE */) = 0.06127080181543114 + (0.9387291981845689) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 5219
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.R_rel.T[2,3] = 0.2382753403933434 + (-0.2382753403933434) * cos(front.cornerR.tieRod.revolute.angle) - (-0.11001306482721843) * sin(front.cornerR.tieRod.revolute.angle)
*/
void Steering_eqFunction_5219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5219};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2231]] /* front.cornerR.tieRod.revolute.R_rel.T[2,3] DUMMY_STATE */) = 0.2382753403933434 + (-0.2382753403933434) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))) - ((-0.11001306482721843) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}
extern void Steering_eqFunction_7856(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7855(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7854(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8287(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8288(DATA *data, threadData_t *threadData);


/*
equation index: 5225
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.R_rel.T[3,1] = 0.10590015128593043 + (-0.10590015128593043) * cos(front.cornerR.tieRod.revolute.angle) - (-0.24752939586124137) * sin(front.cornerR.tieRod.revolute.angle)
*/
void Steering_eqFunction_5225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2232]] /* front.cornerR.tieRod.revolute.R_rel.T[3,1] DUMMY_STATE */) = 0.10590015128593043 + (-0.10590015128593043) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))) - ((-0.24752939586124137) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 5226
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.R_rel.T[3,2] = 0.2382753403933434 + (-0.2382753403933434) * cos(front.cornerR.tieRod.revolute.angle) - 0.11001306482721843 * sin(front.cornerR.tieRod.revolute.angle)
*/
void Steering_eqFunction_5226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2233]] /* front.cornerR.tieRod.revolute.R_rel.T[3,2] DUMMY_STATE */) = 0.2382753403933434 + (-0.2382753403933434) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))) - ((0.11001306482721843) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 5227
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.R_rel.T[3,3] = 0.9266263237518911 + 0.07337367624810887 * cos(front.cornerR.tieRod.revolute.angle)
*/
void Steering_eqFunction_5227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2234]] /* front.cornerR.tieRod.revolute.R_rel.T[3,3] DUMMY_STATE */) = 0.9266263237518911 + (0.07337367624810887) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void Steering_eqFunction_7851(DATA *data, threadData_t *threadData);


/*
equation index: 5229
type: SIMPLE_ASSIGN
front.cornerR.upright.frame_a.r_0[1] = points[2,5,1] + 0.02 * front.cornerR.wheelAngles.R_rel.T[1,1] + 0.15000000000000002 * front.cornerR.wheelAngles.R_rel.T[2,1] + 0.2 * front.cornerR.wheelAngles.R_rel.T[3,1]
*/
void Steering_eqFunction_5229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5229};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* front.cornerR.upright.frame_a.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* points[2,5,1] DUMMY_STATE */) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2475]] /* front.cornerR.wheelAngles.R_rel.T[1,1] DUMMY_STATE */)) + (0.15000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2478]] /* front.cornerR.wheelAngles.R_rel.T[2,1] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2481]] /* front.cornerR.wheelAngles.R_rel.T[3,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 5230
type: SIMPLE_ASSIGN
points[2,9,1] = front.cornerR.upright.frame_a.r_0[1]
*/
void Steering_eqFunction_5230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2887]] /* points[2,9,1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2435]] /* front.cornerR.upright.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void Steering_eqFunction_7887(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7888(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7901(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7891(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7893(DATA *data, threadData_t *threadData);


/*
equation index: 5236
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.rRod_0[1] = front.cornerR.tieRod.frame_im.r_0[1] - points[2,7,1]
*/
void Steering_eqFunction_5236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* front.cornerR.tieRod.rod1.rRod_0[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2178]] /* front.cornerR.tieRod.frame_im.r_0[1] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2881]] /* points[2,7,1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 5237
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.rRod_a[1] = front.cornerR.tieRod.rod1.rRod_0[1]
*/
void Steering_eqFunction_5237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2299]] /* front.cornerR.tieRod.rod1.rRod_a[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2296]] /* front.cornerR.tieRod.rod1.rRod_0[1] variable */);
  TRACE_POP
}
extern void Steering_eqFunction_7895(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7897(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7896(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7899(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7900(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7890(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7850(DATA *data, threadData_t *threadData);


/*
equation index: 5245
type: SIMPLE_ASSIGN
front.cornerR.upright.frame_a.r_0[2] = points[2,5,2] + 0.02 * front.cornerR.wheelAngles.R_rel.T[1,2] + 0.15000000000000002 * front.cornerR.wheelAngles.R_rel.T[2,2] + 0.2 * front.cornerR.wheelAngles.R_rel.T[3,2]
*/
void Steering_eqFunction_5245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2436]] /* front.cornerR.upright.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2876]] /* points[2,5,2] DUMMY_STATE */) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2476]] /* front.cornerR.wheelAngles.R_rel.T[1,2] DUMMY_STATE */)) + (0.15000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2479]] /* front.cornerR.wheelAngles.R_rel.T[2,2] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2482]] /* front.cornerR.wheelAngles.R_rel.T[3,2] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 5246
type: SIMPLE_ASSIGN
points[2,9,2] = front.cornerR.upright.frame_a.r_0[2]
*/
void Steering_eqFunction_5246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5246};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2888]] /* points[2,9,2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2436]] /* front.cornerR.upright.frame_a.r_0[2] DUMMY_STATE */);
  TRACE_POP
}
extern void Steering_eqFunction_7877(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7878(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7884(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7880(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7882(DATA *data, threadData_t *threadData);


/*
equation index: 5252
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.rRod_0[2] = front.cornerR.tieRod.frame_im.r_0[2] - points[2,7,2]
*/
void Steering_eqFunction_5252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* front.cornerR.tieRod.rod1.rRod_0[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2179]] /* front.cornerR.tieRod.frame_im.r_0[2] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2882]] /* points[2,7,2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 5253
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.rRod_a[2] = front.cornerR.tieRod.rod1.rRod_0[2]
*/
void Steering_eqFunction_5253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2300]] /* front.cornerR.tieRod.rod1.rRod_a[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2297]] /* front.cornerR.tieRod.rod1.rRod_0[2] variable */);
  TRACE_POP
}
extern void Steering_eqFunction_7904(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7906(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7905(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7883(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7909(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7879(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7849(DATA *data, threadData_t *threadData);


/*
equation index: 5261
type: SIMPLE_ASSIGN
front.cornerR.upright.frame_a.r_0[3] = points[2,5,3] + 0.02 * front.cornerR.wheelAngles.R_rel.T[1,3] + 0.15000000000000002 * front.cornerR.wheelAngles.R_rel.T[2,3] + 0.2 * front.cornerR.wheelAngles.R_rel.T[3,3]
*/
void Steering_eqFunction_5261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5261};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2437]] /* front.cornerR.upright.frame_a.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2877]] /* points[2,5,3] DUMMY_STATE */) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2477]] /* front.cornerR.wheelAngles.R_rel.T[1,3] DUMMY_STATE */)) + (0.15000000000000002) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2480]] /* front.cornerR.wheelAngles.R_rel.T[2,3] DUMMY_STATE */)) + (0.2) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2483]] /* front.cornerR.wheelAngles.R_rel.T[3,3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 5262
type: SIMPLE_ASSIGN
points[2,9,3] = front.cornerR.upright.frame_a.r_0[3]
*/
void Steering_eqFunction_5262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2889]] /* points[2,9,3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2437]] /* front.cornerR.upright.frame_a.r_0[3] DUMMY_STATE */);
  TRACE_POP
}
extern void Steering_eqFunction_7861(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7862(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7889(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7874(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7864(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7866(DATA *data, threadData_t *threadData);


/*
equation index: 5269
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.rRod_0[3] = front.cornerR.tieRod.frame_im.r_0[3] - points[2,7,3]
*/
void Steering_eqFunction_5269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2298]] /* front.cornerR.tieRod.rod1.rRod_0[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2180]] /* front.cornerR.tieRod.frame_im.r_0[3] variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* points[2,7,3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 5270
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.rRod_a[3] = front.cornerR.tieRod.rod1.rRod_0[3]
*/
void Steering_eqFunction_5270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2301]] /* front.cornerR.tieRod.rod1.rRod_a[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2298]] /* front.cornerR.tieRod.rod1.rRod_0[3] variable */);
  TRACE_POP
}
extern void Steering_eqFunction_7868(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7870(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7869(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7907(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8285(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8286(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7872(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7873(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7910(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7863(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_7902(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8596(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8598(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8607(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8608(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8619(DATA *data, threadData_t *threadData);


/*
equation index: 5287
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.R_rel.w[1] = loads[2].frame_b.R.w[1]
*/
void Steering_eqFunction_5287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2484]] /* front.cornerR.wheelAngles.R_rel.w[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2716]] /* loads[2].frame_b.R.w[1] variable */);
  TRACE_POP
}
extern void Steering_eqFunction_8603(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8604(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8605(DATA *data, threadData_t *threadData);


/*
equation index: 5291
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.R_rel.w[2] = loads[2].frame_b.R.w[2]
*/
void Steering_eqFunction_5291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2485]] /* front.cornerR.wheelAngles.R_rel.w[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2717]] /* loads[2].frame_b.R.w[2] variable */);
  TRACE_POP
}
extern void Steering_eqFunction_8599(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8600(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8613(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8614(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8611(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8612(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8609(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8610(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8601(DATA *data, threadData_t *threadData);


/*
equation index: 5301
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.R_rel.w[3] = loads[2].frame_b.R.w[3]
*/
void Steering_eqFunction_5301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5301};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2486]] /* front.cornerR.wheelAngles.R_rel.w[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2718]] /* loads[2].frame_b.R.w[3] variable */);
  TRACE_POP
}

/*
equation index: 5305
type: ARRAY_CALL_ASSIGN

$TMP_5302 = Modelica.Mechanics.MultiBody.Frames.axesRotationsAngles(front.cornerR.wheelAngles.R_rel, {3, 1, 2}, front.cornerR.wheelAngles.guessAngle1)
*/
void Steering_eqFunction_5305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5305};
  real_array tmp221;
  real_array tmp222;
  Modelica_Mechanics_MultiBody_Frames_Orientation tmp223;
  real_array tmp224;
  real_array_create(&tmp221, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2475]] /* front.cornerR.wheelAngles.R_rel.T[1,1] DUMMY_STATE */)[(((modelica_integer) 1) - 1) * 3 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)3);
  real_array_create(&tmp222, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2484]] /* front.cornerR.wheelAngles.R_rel.w[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  Modelica_Mechanics_MultiBody_Frames_Orientation_wrap_vars(threadData,tmp223, tmp221, tmp222);
  real_array_create(&tmp224, ((modelica_real*)&((&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[848]] /* $TMP_5302[1] variable */))[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_copy_data(omc_Modelica_Mechanics_MultiBody_Frames_axesRotationsAngles(threadData, tmp223, _OMC_LIT22, (data->simulationInfo->realParameter[1406] /* front.cornerR.wheelAngles.guessAngle1 PARAM */)), tmp224);
  TRACE_POP
}

/*
equation index: 5302
type: SIMPLE_ASSIGN
telemetry[2,3] = -$TMP_5302[1]
*/
void Steering_eqFunction_5302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4736]] /* telemetry[2,3] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[848]] /* $TMP_5302[1] variable */));
  TRACE_POP
}

/*
equation index: 5303
type: SIMPLE_ASSIGN
telemetry[2,2] = $TMP_5302[2]
*/
void Steering_eqFunction_5303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5303};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4735]] /* telemetry[2,2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[849]] /* $TMP_5302[2] variable */);
  TRACE_POP
}

/*
equation index: 5304
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.angles[3] = $TMP_5302[3]
*/
void Steering_eqFunction_5304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5304};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2487]] /* front.cornerR.wheelAngles.angles[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[850]] /* $TMP_5302[3] variable */);
  TRACE_POP
}

/*
equation index: 5306
type: SIMPLE_ASSIGN
$DER.front.cornerR.tieRod.revolute.R_rel.T[1,1] = 0.9878971255673222 * (-sin(front.cornerR.tieRod.revolute.angle)) * $DER.front.cornerR.tieRod.revolute.angle
*/
void Steering_eqFunction_5306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[458]] /* der(front.cornerR.tieRod.revolute.R_rel.T[1,1]) DUMMY_DER */) = (0.9878971255673222) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 5307
type: SIMPLE_ASSIGN
$DER.front.cornerR.tieRod.revolute.R_rel.T[1,2] = (-0.027231467473524958) * (-sin(front.cornerR.tieRod.revolute.angle)) * $DER.front.cornerR.tieRod.revolute.angle + 0.9626143172381612 * cos(front.cornerR.tieRod.revolute.angle) * $DER.front.cornerR.tieRod.revolute.angle
*/
void Steering_eqFunction_5307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[459]] /* der(front.cornerR.tieRod.revolute.R_rel.T[1,2]) DUMMY_DER */) = (-0.027231467473524958) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */))) + (0.9626143172381612) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 5308
type: SIMPLE_ASSIGN
$DER.front.cornerR.tieRod.revolute.R_rel.T[1,3] = (-0.10590015128593043) * (-sin(front.cornerR.tieRod.revolute.angle)) * $DER.front.cornerR.tieRod.revolute.angle + (-0.24752939586124137) * cos(front.cornerR.tieRod.revolute.angle) * $DER.front.cornerR.tieRod.revolute.angle
*/
void Steering_eqFunction_5308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[460]] /* der(front.cornerR.tieRod.revolute.R_rel.T[1,3]) DUMMY_DER */) = (-0.10590015128593043) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */))) + (-0.24752939586124137) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}
extern void Steering_eqFunction_8624(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8625(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8626(DATA *data, threadData_t *threadData);


/*
equation index: 5312
type: SIMPLE_ASSIGN
$DER.front.cornerR.tieRod.revolute.R_rel.T[2,1] = (-0.027231467473524958) * (-sin(front.cornerR.tieRod.revolute.angle)) * $DER.front.cornerR.tieRod.revolute.angle + (-0.9626143172381612) * cos(front.cornerR.tieRod.revolute.angle) * $DER.front.cornerR.tieRod.revolute.angle
*/
void Steering_eqFunction_5312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[461]] /* der(front.cornerR.tieRod.revolute.R_rel.T[2,1]) DUMMY_DER */) = (-0.027231467473524958) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */))) + (-0.9626143172381612) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 5313
type: SIMPLE_ASSIGN
$DER.front.cornerR.tieRod.revolute.R_rel.T[2,2] = 0.9387291981845689 * (-sin(front.cornerR.tieRod.revolute.angle)) * $DER.front.cornerR.tieRod.revolute.angle
*/
void Steering_eqFunction_5313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[462]] /* der(front.cornerR.tieRod.revolute.R_rel.T[2,2]) DUMMY_DER */) = (0.9387291981845689) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 5314
type: SIMPLE_ASSIGN
$DER.front.cornerR.tieRod.revolute.R_rel.T[2,3] = (-0.2382753403933434) * (-sin(front.cornerR.tieRod.revolute.angle)) * $DER.front.cornerR.tieRod.revolute.angle + 0.11001306482721843 * cos(front.cornerR.tieRod.revolute.angle) * $DER.front.cornerR.tieRod.revolute.angle
*/
void Steering_eqFunction_5314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[463]] /* der(front.cornerR.tieRod.revolute.R_rel.T[2,3]) DUMMY_DER */) = (-0.2382753403933434) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */))) + (0.11001306482721843) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}
extern void Steering_eqFunction_8630(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8631(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8632(DATA *data, threadData_t *threadData);


/*
equation index: 5318
type: SIMPLE_ASSIGN
$DER.front.cornerR.tieRod.revolute.R_rel.T[3,1] = (-0.10590015128593043) * (-sin(front.cornerR.tieRod.revolute.angle)) * $DER.front.cornerR.tieRod.revolute.angle + 0.24752939586124137 * cos(front.cornerR.tieRod.revolute.angle) * $DER.front.cornerR.tieRod.revolute.angle
*/
void Steering_eqFunction_5318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[464]] /* der(front.cornerR.tieRod.revolute.R_rel.T[3,1]) DUMMY_DER */) = (-0.10590015128593043) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */))) + (0.24752939586124137) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 5319
type: SIMPLE_ASSIGN
$DER.front.cornerR.tieRod.revolute.R_rel.T[3,2] = (-0.2382753403933434) * (-sin(front.cornerR.tieRod.revolute.angle)) * $DER.front.cornerR.tieRod.revolute.angle + (-0.11001306482721843) * cos(front.cornerR.tieRod.revolute.angle) * $DER.front.cornerR.tieRod.revolute.angle
*/
void Steering_eqFunction_5319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[465]] /* der(front.cornerR.tieRod.revolute.R_rel.T[3,2]) DUMMY_DER */) = (-0.2382753403933434) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */))) + (-0.11001306482721843) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 5320
type: SIMPLE_ASSIGN
$DER.front.cornerR.tieRod.revolute.R_rel.T[3,3] = 0.07337367624810887 * (-sin(front.cornerR.tieRod.revolute.angle)) * $DER.front.cornerR.tieRod.revolute.angle
*/
void Steering_eqFunction_5320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[466]] /* der(front.cornerR.tieRod.revolute.R_rel.T[3,3]) DUMMY_DER */) = (0.07337367624810887) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2238]] /* front.cornerR.tieRod.revolute.angle DUMMY_STATE */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[470]] /* der(front.cornerR.tieRod.revolute.angle) DUMMY_DER */)));
  TRACE_POP
}
extern void Steering_eqFunction_8636(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8637(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_8638(DATA *data, threadData_t *threadData);


/*
equation index: 5557
type: LINEAR

<var>front.cornerR.ucaPivot.a</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void Steering_eqFunction_5557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5557};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[data->simulationInfo->realVarsIndex[2398]] /* front.cornerR.ucaPivot.a variable */) };
  if(OMC_ACTIVE_STREAM(OMC_LOG_DT))
  {
    infoStreamPrint(OMC_LOG_DT, 1, "Solving linear system 5557 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(OMC_LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 3, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,5557};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 5557 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2398]] /* front.cornerR.ucaPivot.a variable */) = aux_x[0];

  TRACE_POP
}
extern void Steering_eqFunction_9208(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9224(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9219(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9223(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9220(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9275(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9274(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9228(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9226(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9227(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9229(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9217(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9230(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9215(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9231(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9213(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9214(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9216(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9218(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9270(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9266(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9262(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9244(DATA *data, threadData_t *threadData);


/*
equation index: 5581
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.frame_b.f[1] = (-front.cornerR.jointUSR.rod1.frame_b.f[1]) - front.cornerR.springArm.frame_a.f[1]
*/
void Steering_eqFunction_5581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1904]] /* front.cornerR.jointUSR.revolute.frame_b.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1966]] /* front.cornerR.jointUSR.rod1.frame_b.f[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2096]] /* front.cornerR.springArm.frame_a.f[1] variable */);
  TRACE_POP
}

/*
equation index: 5582
type: SIMPLE_ASSIGN
front.cornerR.lcaMount.frame_a.f[1] = -front.cornerR.jointUSR.revolute.frame_b.f[1]
*/
void Steering_eqFunction_5582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5582};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2056]] /* front.cornerR.lcaMount.frame_a.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1904]] /* front.cornerR.jointUSR.revolute.frame_b.f[1] variable */));
  TRACE_POP
}

/*
equation index: 5583
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.frame_b.f[2] = front.cornerR.jointUSR.revolute.R_rel.T[3,3] * (front.cornerR.jointUSR.frame_a.R.T[1,2] * front.cornerR.jointUSR.rod1.f_b_a[1] + front.cornerR.jointUSR.frame_a.R.T[2,2] * front.cornerR.jointUSR.rod1.f_b_a[2] + front.cornerR.jointUSR.frame_a.R.T[3,2] * front.cornerR.jointUSR.rod1.f_b_a[3]) - front.cornerR.jointUSR.revolute.R_rel.T[3,2] * (front.cornerR.jointUSR.frame_a.R.T[1,3] * front.cornerR.jointUSR.rod1.f_b_a[1] + front.cornerR.jointUSR.frame_a.R.T[2,3] * front.cornerR.jointUSR.rod1.f_b_a[2] + front.cornerR.jointUSR.frame_a.R.T[3,3] * front.cornerR.jointUSR.rod1.f_b_a[3])
*/
void Steering_eqFunction_5583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1967]] /* front.cornerR.jointUSR.rod1.frame_b.f[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1789]] /* front.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1957]] /* front.cornerR.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* front.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1958]] /* front.cornerR.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* front.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1959]] /* front.cornerR.jointUSR.rod1.f_b_a[3] variable */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* front.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1957]] /* front.cornerR.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* front.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1958]] /* front.cornerR.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* front.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1959]] /* front.cornerR.jointUSR.rod1.f_b_a[3] variable */))));
  TRACE_POP
}
extern void Steering_eqFunction_9240(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9245(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9246(DATA *data, threadData_t *threadData);


/*
equation index: 5587
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.frame_b.f[3] = front.cornerR.jointUSR.revolute.R_rel.T[3,2] * (front.cornerR.jointUSR.frame_a.R.T[1,2] * front.cornerR.jointUSR.rod1.f_b_a[1] + front.cornerR.jointUSR.frame_a.R.T[2,2] * front.cornerR.jointUSR.rod1.f_b_a[2] + front.cornerR.jointUSR.frame_a.R.T[3,2] * front.cornerR.jointUSR.rod1.f_b_a[3]) + front.cornerR.jointUSR.revolute.R_rel.T[3,3] * (front.cornerR.jointUSR.frame_a.R.T[1,3] * front.cornerR.jointUSR.rod1.f_b_a[1] + front.cornerR.jointUSR.frame_a.R.T[2,3] * front.cornerR.jointUSR.rod1.f_b_a[2] + front.cornerR.jointUSR.frame_a.R.T[3,3] * front.cornerR.jointUSR.rod1.f_b_a[3])
*/
void Steering_eqFunction_5587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1968]] /* front.cornerR.jointUSR.rod1.frame_b.f[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1789]] /* front.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1957]] /* front.cornerR.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* front.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1958]] /* front.cornerR.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* front.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1959]] /* front.cornerR.jointUSR.rod1.f_b_a[3] variable */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* front.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1957]] /* front.cornerR.jointUSR.rod1.f_b_a[1] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* front.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1958]] /* front.cornerR.jointUSR.rod1.f_b_a[2] variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* front.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1959]] /* front.cornerR.jointUSR.rod1.f_b_a[3] variable */)));
  TRACE_POP
}
extern void Steering_eqFunction_9238(DATA *data, threadData_t *threadData);


/*
equation index: 5589
type: SIMPLE_ASSIGN
front.cornerR.lcaMount.frame_a.f[2] = (-front.cornerR.jointUSR.revolute.R_rel.T[3,3]) * front.cornerR.jointUSR.revolute.frame_b.f[2] - front.cornerR.jointUSR.revolute.R_rel.T[3,2] * front.cornerR.jointUSR.revolute.frame_b.f[3]
*/
void Steering_eqFunction_5589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5589};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2057]] /* front.cornerR.lcaMount.frame_a.f[2] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1905]] /* front.cornerR.jointUSR.revolute.frame_b.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* front.cornerR.jointUSR.revolute.frame_b.f[3] variable */)));
  TRACE_POP
}

/*
equation index: 5590
type: SIMPLE_ASSIGN
front.cornerR.lcaMount.frame_a.f[3] = front.cornerR.jointUSR.revolute.R_rel.T[3,2] * front.cornerR.jointUSR.revolute.frame_b.f[2] - front.cornerR.jointUSR.revolute.R_rel.T[3,3] * front.cornerR.jointUSR.revolute.frame_b.f[3]
*/
void Steering_eqFunction_5590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5590};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2058]] /* front.cornerR.lcaMount.frame_a.f[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1905]] /* front.cornerR.jointUSR.revolute.frame_b.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1906]] /* front.cornerR.jointUSR.revolute.frame_b.f[3] variable */)));
  TRACE_POP
}
extern void Steering_eqFunction_9235(DATA *data, threadData_t *threadData);


/*
equation index: 5592
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.frame_b.t[1] = (-front.cornerR.jointUSR.rod2.frame_a.t[1]) - front.cornerR.springArm.frame_a.t[1]
*/
void Steering_eqFunction_5592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5592};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* front.cornerR.jointUSR.revolute.frame_b.t[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2037]] /* front.cornerR.jointUSR.rod2.frame_a.t[1] variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2102]] /* front.cornerR.springArm.frame_a.t[1] variable */);
  TRACE_POP
}

/*
equation index: 5593
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_b.t[1] = -front.cornerR.jointUSR.revolute.frame_b.t[1]
*/
void Steering_eqFunction_5593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1803]] /* front.cornerR.jointUSR.frame_b.t[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1907]] /* front.cornerR.jointUSR.revolute.frame_b.t[1] variable */));
  TRACE_POP
}
extern void Steering_eqFunction_9243(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9233(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9234(DATA *data, threadData_t *threadData);


/*
equation index: 5597
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_b.t[2] = (-front.cornerR.jointUSR.revolute.R_rel.T[3,3]) * front.cornerR.jointUSR.revolute.frame_b.t[2] - front.cornerR.jointUSR.revolute.R_rel.T[3,2] * front.cornerR.jointUSR.revolute.frame_b.t[3]
*/
void Steering_eqFunction_5597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1804]] /* front.cornerR.jointUSR.frame_b.t[2] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* front.cornerR.jointUSR.revolute.frame_b.t[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1909]] /* front.cornerR.jointUSR.revolute.frame_b.t[3] variable */)));
  TRACE_POP
}
extern void Steering_eqFunction_9251(DATA *data, threadData_t *threadData);


/*
equation index: 5599
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_b.t[3] = front.cornerR.jointUSR.revolute.R_rel.T[3,2] * front.cornerR.jointUSR.revolute.frame_b.t[2] - front.cornerR.jointUSR.revolute.R_rel.T[3,3] * front.cornerR.jointUSR.revolute.frame_b.t[3]
*/
void Steering_eqFunction_5599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5599};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1805]] /* front.cornerR.jointUSR.frame_b.t[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1883]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1908]] /* front.cornerR.jointUSR.revolute.frame_b.t[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1884]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1909]] /* front.cornerR.jointUSR.revolute.frame_b.t[3] variable */)));
  TRACE_POP
}
extern void Steering_eqFunction_9250(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9259(DATA *data, threadData_t *threadData);


/*
equation index: 5602
type: SIMPLE_ASSIGN
front.cornerR.chassisConnect.f[1] = front.cornerR.springChassis.frame_a.f[1] + front.cornerR.lcaMount.frame_a.f[1] + front.cornerR.ucaMount.frame_a.f[1]
*/
void Steering_eqFunction_5602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1719]] /* front.cornerR.chassisConnect.f[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2128]] /* front.cornerR.springChassis.frame_a.f[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2056]] /* front.cornerR.lcaMount.frame_a.f[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2376]] /* front.cornerR.ucaMount.frame_a.f[1] variable */);
  TRACE_POP
}
extern void Steering_eqFunction_9261(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9267(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9268(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9269(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9263(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9264(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9265(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9256(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9257(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9258(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9253(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9254(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9255(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9271(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9272(DATA *data, threadData_t *threadData);

extern void Steering_eqFunction_9273(DATA *data, threadData_t *threadData);


/*
equation index: 5619
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.e2_a[1] = 0.0
*/
void Steering_eqFunction_5619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5619};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3216]] /* rear.cornerL.jointUSR.rod1.e2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5620
type: SIMPLE_ASSIGN
rear.cornerL.springArm.frame_b.R.T[3,1] = 0.0
*/
void Steering_eqFunction_5620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3377]] /* rear.cornerL.springArm.frame_b.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5621
type: SIMPLE_ASSIGN
rear.cornerL.springArm.frame_b.R.T[2,1] = 0.0
*/
void Steering_eqFunction_5621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5621};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3376]] /* rear.cornerL.springArm.frame_b.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5622
type: SIMPLE_ASSIGN
rear.cornerL.springArm.frame_b.R.T[1,3] = 0.0
*/
void Steering_eqFunction_5622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5622};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3375]] /* rear.cornerL.springArm.frame_b.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5623
type: SIMPLE_ASSIGN
rear.cornerL.springArm.frame_b.R.T[1,2] = 0.0
*/
void Steering_eqFunction_5623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5623};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3374]] /* rear.cornerL.springArm.frame_b.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5624
type: SIMPLE_ASSIGN
rear.cornerL.springArm.frame_b.R.T[1,1] = 1.0
*/
void Steering_eqFunction_5624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5624};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3373]] /* rear.cornerL.springArm.frame_b.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 5625
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.e2_a[1] = 0.0
*/
void Steering_eqFunction_5625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5625};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4050]] /* rear.cornerR.jointUSR.rod1.e2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5626
type: SIMPLE_ASSIGN
rear.cornerR.springArm.frame_b.R.T[3,1] = 0.0
*/
void Steering_eqFunction_5626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5626};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4211]] /* rear.cornerR.springArm.frame_b.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5627
type: SIMPLE_ASSIGN
rear.cornerR.springArm.frame_b.R.T[2,1] = 0.0
*/
void Steering_eqFunction_5627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5627};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4210]] /* rear.cornerR.springArm.frame_b.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5628
type: SIMPLE_ASSIGN
rear.cornerR.springArm.frame_b.R.T[1,3] = 0.0
*/
void Steering_eqFunction_5628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5628};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4209]] /* rear.cornerR.springArm.frame_b.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5629
type: SIMPLE_ASSIGN
rear.cornerR.springArm.frame_b.R.T[1,2] = 0.0
*/
void Steering_eqFunction_5629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5629};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4208]] /* rear.cornerR.springArm.frame_b.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5630
type: SIMPLE_ASSIGN
rear.cornerR.springArm.frame_b.R.T[1,1] = 1.0
*/
void Steering_eqFunction_5630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5630};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4207]] /* rear.cornerR.springArm.frame_b.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 5631
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1.e2_a[1] = 0.0
*/
void Steering_eqFunction_5631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5631};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1123]] /* front.cornerL.jointUSR.rod1.e2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5632
type: SIMPLE_ASSIGN
front.cornerL.springArm.frame_b.R.T[3,1] = 0.0
*/
void Steering_eqFunction_5632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5632};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1284]] /* front.cornerL.springArm.frame_b.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5633
type: SIMPLE_ASSIGN
front.cornerL.springArm.frame_b.R.T[2,1] = 0.0
*/
void Steering_eqFunction_5633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5633};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1283]] /* front.cornerL.springArm.frame_b.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5634
type: SIMPLE_ASSIGN
front.cornerL.springArm.frame_b.R.T[1,3] = 0.0
*/
void Steering_eqFunction_5634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5634};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1282]] /* front.cornerL.springArm.frame_b.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5635
type: SIMPLE_ASSIGN
front.cornerL.springArm.frame_b.R.T[1,2] = 0.0
*/
void Steering_eqFunction_5635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5635};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1281]] /* front.cornerL.springArm.frame_b.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5636
type: SIMPLE_ASSIGN
front.cornerL.springArm.frame_b.R.T[1,1] = 1.0
*/
void Steering_eqFunction_5636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5636};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1280]] /* front.cornerL.springArm.frame_b.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 5637
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.e2_a[1] = 0.0
*/
void Steering_eqFunction_5637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5637};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1948]] /* front.cornerR.jointUSR.rod1.e2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5638
type: SIMPLE_ASSIGN
front.cornerR.springArm.frame_b.R.T[3,1] = 0.0
*/
void Steering_eqFunction_5638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5638};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2109]] /* front.cornerR.springArm.frame_b.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5639
type: SIMPLE_ASSIGN
front.cornerR.springArm.frame_b.R.T[2,1] = 0.0
*/
void Steering_eqFunction_5639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5639};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2108]] /* front.cornerR.springArm.frame_b.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5640
type: SIMPLE_ASSIGN
front.cornerR.springArm.frame_b.R.T[1,3] = 0.0
*/
void Steering_eqFunction_5640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5640};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2107]] /* front.cornerR.springArm.frame_b.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5641
type: SIMPLE_ASSIGN
front.cornerR.springArm.frame_b.R.T[1,2] = 0.0
*/
void Steering_eqFunction_5641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5641};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2106]] /* front.cornerR.springArm.frame_b.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5642
type: SIMPLE_ASSIGN
front.cornerR.springArm.frame_b.R.T[1,1] = 1.0
*/
void Steering_eqFunction_5642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5642};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2105]] /* front.cornerR.springArm.frame_b.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 5643
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5643};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3310]] /* rear.cornerL.jointUSR.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5644
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.frame_a.t[2] = 0.0
*/
void Steering_eqFunction_5644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5644};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3306]] /* rear.cornerL.jointUSR.rod2.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5645
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5645};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3308]] /* rear.cornerL.jointUSR.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5646
type: SIMPLE_ASSIGN
rear.cornerL.staticAlign.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5646};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3425]] /* rear.cornerL.staticAlign.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5647
type: SIMPLE_ASSIGN
rear.cornerL.staticAlign.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5647};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3424]] /* rear.cornerL.staticAlign.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5648
type: SIMPLE_ASSIGN
rear.cornerL.staticAlign.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5648};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3423]] /* rear.cornerL.staticAlign.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5649
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod2.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5649};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3611]] /* rear.cornerL.tieRod.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5650
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod2.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5650};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3610]] /* rear.cornerL.tieRod.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5651
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod2.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5651};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3609]] /* rear.cornerL.tieRod.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5652
type: SIMPLE_ASSIGN
rear.toeLinks.tieRodInnerL.t[3] = 0.0
*/
void Steering_eqFunction_5652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5652};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4680]] /* rear.toeLinks.tieRodInnerL.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5653
type: SIMPLE_ASSIGN
rear.toeLinks.tieRodInnerL.t[2] = 0.0
*/
void Steering_eqFunction_5653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5653};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4679]] /* rear.toeLinks.tieRodInnerL.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5654
type: SIMPLE_ASSIGN
rear.toeLinks.tieRodInnerL.t[1] = 0.0
*/
void Steering_eqFunction_5654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5654};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4678]] /* rear.toeLinks.tieRodInnerL.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5655
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod2.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5655};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4144]] /* rear.cornerR.jointUSR.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5656
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod2.frame_a.t[2] = 0.0
*/
void Steering_eqFunction_5656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5656};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4140]] /* rear.cornerR.jointUSR.rod2.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5657
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod2.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5657};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4142]] /* rear.cornerR.jointUSR.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5658
type: SIMPLE_ASSIGN
rear.cornerR.staticAlign.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5658};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4259]] /* rear.cornerR.staticAlign.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5659
type: SIMPLE_ASSIGN
rear.cornerR.staticAlign.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5659};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4258]] /* rear.cornerR.staticAlign.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5660
type: SIMPLE_ASSIGN
rear.cornerR.staticAlign.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5660};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4257]] /* rear.cornerR.staticAlign.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5661
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod2.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5661};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4445]] /* rear.cornerR.tieRod.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5662
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod2.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5662};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4444]] /* rear.cornerR.tieRod.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5663
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod2.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4443]] /* rear.cornerR.tieRod.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5664
type: SIMPLE_ASSIGN
rear.toeLinks.tieRodInnerR.t[3] = 0.0
*/
void Steering_eqFunction_5664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5664};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4686]] /* rear.toeLinks.tieRodInnerR.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5665
type: SIMPLE_ASSIGN
rear.toeLinks.tieRodInnerR.t[2] = 0.0
*/
void Steering_eqFunction_5665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5665};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4685]] /* rear.toeLinks.tieRodInnerR.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5666
type: SIMPLE_ASSIGN
rear.toeLinks.tieRodInnerR.t[1] = 0.0
*/
void Steering_eqFunction_5666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5666};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4684]] /* rear.toeLinks.tieRodInnerR.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5667
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod2.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5667};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1217]] /* front.cornerL.jointUSR.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5668
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod2.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5668};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1216]] /* front.cornerL.jointUSR.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5669
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod2.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5669};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1215]] /* front.cornerL.jointUSR.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5670
type: SIMPLE_ASSIGN
front.cornerL.staticAlign.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5670};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1332]] /* front.cornerL.staticAlign.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5671
type: SIMPLE_ASSIGN
front.cornerL.staticAlign.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5671};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1331]] /* front.cornerL.staticAlign.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5672
type: SIMPLE_ASSIGN
front.cornerL.staticAlign.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5672};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1330]] /* front.cornerL.staticAlign.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5673
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod2.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5673};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1516]] /* front.cornerL.tieRod.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5674
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod2.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5674};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1515]] /* front.cornerL.tieRod.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5675
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod2.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1514]] /* front.cornerL.tieRod.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5676
type: SIMPLE_ASSIGN
front.cornerL.tieRodInner.t[3] = 0.0
*/
void Steering_eqFunction_5676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1529]] /* front.cornerL.tieRodInner.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5677
type: SIMPLE_ASSIGN
front.steering.tieRodInnerL.t[2] = 0.0
*/
void Steering_eqFunction_5677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5677};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2639]] /* front.steering.tieRodInnerL.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5678
type: SIMPLE_ASSIGN
front.cornerL.tieRodInner.t[1] = 0.0
*/
void Steering_eqFunction_5678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5678};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1527]] /* front.cornerL.tieRodInner.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5679
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod2.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5679};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2042]] /* front.cornerR.jointUSR.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5680
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod2.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2041]] /* front.cornerR.jointUSR.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5681
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod2.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2040]] /* front.cornerR.jointUSR.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5682
type: SIMPLE_ASSIGN
front.cornerR.staticAlign.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5682};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2157]] /* front.cornerR.staticAlign.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5683
type: SIMPLE_ASSIGN
front.cornerR.staticAlign.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5683};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2156]] /* front.cornerR.staticAlign.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5684
type: SIMPLE_ASSIGN
front.cornerR.staticAlign.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2155]] /* front.cornerR.staticAlign.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5685
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod2.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5685};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2341]] /* front.cornerR.tieRod.rod2.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5686
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod2.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5686};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2340]] /* front.cornerR.tieRod.rod2.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5687
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod2.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5687};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2339]] /* front.cornerR.tieRod.rod2.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5688
type: SIMPLE_ASSIGN
front.cornerR.tieRodInner.t[3] = 0.0
*/
void Steering_eqFunction_5688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5688};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2354]] /* front.cornerR.tieRodInner.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5689
type: SIMPLE_ASSIGN
front.steering.tieRodInnerR.t[2] = 0.0
*/
void Steering_eqFunction_5689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5689};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2645]] /* front.steering.tieRodInnerR.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5690
type: SIMPLE_ASSIGN
front.cornerR.tieRodInner.t[1] = 0.0
*/
void Steering_eqFunction_5690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2352]] /* front.cornerR.tieRodInner.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5691
type: SIMPLE_ASSIGN
front.cornerR.tieRod.frame_im.f[1] = 0.0
*/
void Steering_eqFunction_5691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2175]] /* front.cornerR.tieRod.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5692
type: SIMPLE_ASSIGN
front.cornerR.tieRod.frame_im.f[2] = 0.0
*/
void Steering_eqFunction_5692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2176]] /* front.cornerR.tieRod.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5693
type: SIMPLE_ASSIGN
front.cornerR.tieRod.frame_im.f[3] = 0.0
*/
void Steering_eqFunction_5693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5693};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2177]] /* front.cornerR.tieRod.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5694
type: SIMPLE_ASSIGN
front.cornerR.tieRod.frame_im.t[1] = 0.0
*/
void Steering_eqFunction_5694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2181]] /* front.cornerR.tieRod.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5695
type: SIMPLE_ASSIGN
front.cornerR.tieRod.frame_im.t[2] = 0.0
*/
void Steering_eqFunction_5695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5695};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2182]] /* front.cornerR.tieRod.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5696
type: SIMPLE_ASSIGN
front.cornerR.tieRod.frame_im.t[3] = 0.0
*/
void Steering_eqFunction_5696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2183]] /* front.cornerR.tieRod.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5697
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_im.f[1] = 0.0
*/
void Steering_eqFunction_5697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1824]] /* front.cornerR.jointUSR.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5698
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_im.f[2] = 0.0
*/
void Steering_eqFunction_5698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1825]] /* front.cornerR.jointUSR.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5699
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_im.f[3] = 0.0
*/
void Steering_eqFunction_5699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5699};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1826]] /* front.cornerR.jointUSR.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5700
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_im.t[1] = 0.0
*/
void Steering_eqFunction_5700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5700};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1830]] /* front.cornerR.jointUSR.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5701
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_im.t[2] = 0.0
*/
void Steering_eqFunction_5701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1831]] /* front.cornerR.jointUSR.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5702
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_im.t[3] = 0.0
*/
void Steering_eqFunction_5702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1832]] /* front.cornerR.jointUSR.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5703
type: SIMPLE_ASSIGN
front.cornerL.tieRod.frame_im.f[1] = 0.0
*/
void Steering_eqFunction_5703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1350]] /* front.cornerL.tieRod.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5704
type: SIMPLE_ASSIGN
front.cornerL.tieRod.frame_im.f[2] = 0.0
*/
void Steering_eqFunction_5704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5704};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1351]] /* front.cornerL.tieRod.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5705
type: SIMPLE_ASSIGN
front.cornerL.tieRod.frame_im.f[3] = 0.0
*/
void Steering_eqFunction_5705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5705};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1352]] /* front.cornerL.tieRod.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5706
type: SIMPLE_ASSIGN
front.cornerL.tieRod.frame_im.t[1] = 0.0
*/
void Steering_eqFunction_5706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5706};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1356]] /* front.cornerL.tieRod.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5707
type: SIMPLE_ASSIGN
front.cornerL.tieRod.frame_im.t[2] = 0.0
*/
void Steering_eqFunction_5707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5707};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1357]] /* front.cornerL.tieRod.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5708
type: SIMPLE_ASSIGN
front.cornerL.tieRod.frame_im.t[3] = 0.0
*/
void Steering_eqFunction_5708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5708};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1358]] /* front.cornerL.tieRod.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5709
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_im.f[1] = 0.0
*/
void Steering_eqFunction_5709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5709};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[999]] /* front.cornerL.jointUSR.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5710
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_im.f[2] = 0.0
*/
void Steering_eqFunction_5710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5710};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1000]] /* front.cornerL.jointUSR.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5711
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_im.f[3] = 0.0
*/
void Steering_eqFunction_5711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5711};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1001]] /* front.cornerL.jointUSR.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5712
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_im.t[1] = 0.0
*/
void Steering_eqFunction_5712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5712};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1005]] /* front.cornerL.jointUSR.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5713
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_im.t[2] = 0.0
*/
void Steering_eqFunction_5713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5713};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1006]] /* front.cornerL.jointUSR.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5714
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_im.t[3] = 0.0
*/
void Steering_eqFunction_5714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5714};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1007]] /* front.cornerL.jointUSR.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5715
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.frame_im.f[1] = 0.0
*/
void Steering_eqFunction_5715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5715};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4279]] /* rear.cornerR.tieRod.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5716
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.frame_im.f[2] = 0.0
*/
void Steering_eqFunction_5716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4280]] /* rear.cornerR.tieRod.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5717
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.frame_im.f[3] = 0.0
*/
void Steering_eqFunction_5717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4281]] /* rear.cornerR.tieRod.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5718
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.frame_im.t[1] = 0.0
*/
void Steering_eqFunction_5718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5718};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4285]] /* rear.cornerR.tieRod.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5719
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.frame_im.t[2] = 0.0
*/
void Steering_eqFunction_5719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5719};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4286]] /* rear.cornerR.tieRod.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5720
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.frame_im.t[3] = 0.0
*/
void Steering_eqFunction_5720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5720};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4287]] /* rear.cornerR.tieRod.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5721
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_im.f[1] = 0.0
*/
void Steering_eqFunction_5721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5721};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3927]] /* rear.cornerR.jointUSR.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5722
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_im.f[2] = 0.0
*/
void Steering_eqFunction_5722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5722};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3928]] /* rear.cornerR.jointUSR.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5723
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_im.f[3] = 0.0
*/
void Steering_eqFunction_5723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5723};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3929]] /* rear.cornerR.jointUSR.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5724
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_im.t[1] = 0.0
*/
void Steering_eqFunction_5724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5724};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3933]] /* rear.cornerR.jointUSR.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5725
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_im.t[2] = 0.0
*/
void Steering_eqFunction_5725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5725};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3934]] /* rear.cornerR.jointUSR.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5726
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_im.t[3] = 0.0
*/
void Steering_eqFunction_5726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5726};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3935]] /* rear.cornerR.jointUSR.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5727
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.frame_im.f[1] = 0.0
*/
void Steering_eqFunction_5727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3445]] /* rear.cornerL.tieRod.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5728
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.frame_im.f[2] = 0.0
*/
void Steering_eqFunction_5728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3446]] /* rear.cornerL.tieRod.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5729
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.frame_im.f[3] = 0.0
*/
void Steering_eqFunction_5729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3447]] /* rear.cornerL.tieRod.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5730
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.frame_im.t[1] = 0.0
*/
void Steering_eqFunction_5730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3451]] /* rear.cornerL.tieRod.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5731
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.frame_im.t[2] = 0.0
*/
void Steering_eqFunction_5731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5731};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3452]] /* rear.cornerL.tieRod.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5732
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.frame_im.t[3] = 0.0
*/
void Steering_eqFunction_5732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5732};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3453]] /* rear.cornerL.tieRod.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5733
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_im.f[1] = 0.0
*/
void Steering_eqFunction_5733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5733};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3093]] /* rear.cornerL.jointUSR.frame_im.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5734
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_im.f[2] = 0.0
*/
void Steering_eqFunction_5734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5734};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3094]] /* rear.cornerL.jointUSR.frame_im.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5735
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_im.f[3] = 0.0
*/
void Steering_eqFunction_5735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5735};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3095]] /* rear.cornerL.jointUSR.frame_im.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5736
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_im.t[1] = 0.0
*/
void Steering_eqFunction_5736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5736};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3099]] /* rear.cornerL.jointUSR.frame_im.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5737
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_im.t[2] = 0.0
*/
void Steering_eqFunction_5737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5737};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3100]] /* rear.cornerL.jointUSR.frame_im.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5738
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_im.t[3] = 0.0
*/
void Steering_eqFunction_5738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3101]] /* rear.cornerL.jointUSR.frame_im.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5739
type: SIMPLE_ASSIGN
front.cornerR.tieRod.axis.tau = 0.0
*/
void Steering_eqFunction_5739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5739};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2171]] /* front.cornerR.tieRod.axis.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5740
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.constraintResidue = 0.0
*/
void Steering_eqFunction_5740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5740};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2274]] /* front.cornerR.tieRod.rod1.constraintResidue variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5741
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.frame_a.t[1] = 0.0
*/
void Steering_eqFunction_5741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5741};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2287]] /* front.cornerR.tieRod.rod1.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5742
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.frame_a.t[2] = 0.0
*/
void Steering_eqFunction_5742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5742};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2288]] /* front.cornerR.tieRod.rod1.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5743
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.frame_a.t[3] = 0.0
*/
void Steering_eqFunction_5743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2289]] /* front.cornerR.tieRod.rod1.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5744
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2293]] /* front.cornerR.tieRod.rod1.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5745
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2294]] /* front.cornerR.tieRod.rod1.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5746
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5746};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2295]] /* front.cornerR.tieRod.rod1.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5747
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.f_b_a1[1] = 0.0
*/
void Steering_eqFunction_5747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5747};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2284]] /* front.cornerR.tieRod.rod1.f_b_a1[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5748
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.f_b_a1[2] = 0.0
*/
void Steering_eqFunction_5748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5748};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2285]] /* front.cornerR.tieRod.rod1.f_b_a1[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5749
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod1.f_b_a1[3] = 0.0
*/
void Steering_eqFunction_5749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5749};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2286]] /* front.cornerR.tieRod.rod1.f_b_a1[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5750
type: SIMPLE_ASSIGN
front.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[1] = 0.0
*/
void Steering_eqFunction_5750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5750};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2184]] /* front.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5751
type: SIMPLE_ASSIGN
front.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[2] = 0.0
*/
void Steering_eqFunction_5751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5751};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2185]] /* front.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5752
type: SIMPLE_ASSIGN
front.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[3] = 0.0
*/
void Steering_eqFunction_5752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5752};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2186]] /* front.cornerR.tieRod.relativePosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5753
type: SIMPLE_ASSIGN
front.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[1] = 0.0
*/
void Steering_eqFunction_5753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5753};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2187]] /* front.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5754
type: SIMPLE_ASSIGN
front.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[2] = 0.0
*/
void Steering_eqFunction_5754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2188]] /* front.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5755
type: SIMPLE_ASSIGN
front.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[3] = 0.0
*/
void Steering_eqFunction_5755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5755};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2189]] /* front.cornerR.tieRod.relativePosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5756
type: SIMPLE_ASSIGN
front.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[1] = 0.0
*/
void Steering_eqFunction_5756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5756};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2190]] /* front.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5757
type: SIMPLE_ASSIGN
front.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[2] = 0.0
*/
void Steering_eqFunction_5757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5757};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2191]] /* front.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5758
type: SIMPLE_ASSIGN
front.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[3] = 0.0
*/
void Steering_eqFunction_5758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5758};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2192]] /* front.cornerR.tieRod.relativePosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5759
type: SIMPLE_ASSIGN
front.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5759};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2193]] /* front.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5760
type: SIMPLE_ASSIGN
front.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5760};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2194]] /* front.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5761
type: SIMPLE_ASSIGN
front.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5761};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2195]] /* front.cornerR.tieRod.relativePosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5762
type: SIMPLE_ASSIGN
front.cornerR.upright.g_0[1] = 0.0
*/
void Steering_eqFunction_5762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5762};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2441]] /* front.cornerR.upright.g_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5763
type: SIMPLE_ASSIGN
front.cornerR.upright.g_0[2] = 0.0
*/
void Steering_eqFunction_5763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5763};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2442]] /* front.cornerR.upright.g_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5764
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.frame_a.f[1] = 0.0
*/
void Steering_eqFunction_5764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5764};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2488]] /* front.cornerR.wheelAngles.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5765
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.frame_a.f[2] = 0.0
*/
void Steering_eqFunction_5765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2489]] /* front.cornerR.wheelAngles.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5766
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.frame_a.f[3] = 0.0
*/
void Steering_eqFunction_5766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5766};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2490]] /* front.cornerR.wheelAngles.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5767
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.frame_a.t[1] = 0.0
*/
void Steering_eqFunction_5767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5767};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2491]] /* front.cornerR.wheelAngles.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5768
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.frame_a.t[2] = 0.0
*/
void Steering_eqFunction_5768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5768};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2492]] /* front.cornerR.wheelAngles.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5769
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.frame_a.t[3] = 0.0
*/
void Steering_eqFunction_5769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2493]] /* front.cornerR.wheelAngles.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5770
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.frame_b.f[1] = 0.0
*/
void Steering_eqFunction_5770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5770};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2494]] /* front.cornerR.wheelAngles.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5771
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.frame_b.f[2] = 0.0
*/
void Steering_eqFunction_5771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5771};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2495]] /* front.cornerR.wheelAngles.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5772
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.frame_b.f[3] = 0.0
*/
void Steering_eqFunction_5772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5772};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2496]] /* front.cornerR.wheelAngles.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5773
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5773};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2497]] /* front.cornerR.wheelAngles.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5774
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5774};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2498]] /* front.cornerR.wheelAngles.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5775
type: SIMPLE_ASSIGN
front.cornerR.wheelAngles.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5775};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2499]] /* front.cornerR.wheelAngles.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5776
type: SIMPLE_ASSIGN
front.cornerR.wheelPosition.relativePosition.frame_a.f[1] = 0.0
*/
void Steering_eqFunction_5776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5776};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2505]] /* front.cornerR.wheelPosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5777
type: SIMPLE_ASSIGN
front.cornerR.wheelPosition.relativePosition.frame_a.f[2] = 0.0
*/
void Steering_eqFunction_5777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5777};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2506]] /* front.cornerR.wheelPosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5778
type: SIMPLE_ASSIGN
front.cornerR.wheelPosition.relativePosition.frame_a.f[3] = 0.0
*/
void Steering_eqFunction_5778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5778};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2507]] /* front.cornerR.wheelPosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5779
type: SIMPLE_ASSIGN
front.cornerR.wheelPosition.relativePosition.frame_a.t[1] = 0.0
*/
void Steering_eqFunction_5779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5779};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2508]] /* front.cornerR.wheelPosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5780
type: SIMPLE_ASSIGN
front.cornerR.wheelPosition.relativePosition.frame_a.t[2] = 0.0
*/
void Steering_eqFunction_5780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5780};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2509]] /* front.cornerR.wheelPosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5781
type: SIMPLE_ASSIGN
front.cornerR.wheelPosition.relativePosition.frame_a.t[3] = 0.0
*/
void Steering_eqFunction_5781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5781};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2510]] /* front.cornerR.wheelPosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5782
type: SIMPLE_ASSIGN
front.cornerR.wheelPosition.relativePosition.frame_b.f[1] = 0.0
*/
void Steering_eqFunction_5782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5782};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2511]] /* front.cornerR.wheelPosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5783
type: SIMPLE_ASSIGN
front.cornerR.wheelPosition.relativePosition.frame_b.f[2] = 0.0
*/
void Steering_eqFunction_5783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5783};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2512]] /* front.cornerR.wheelPosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5784
type: SIMPLE_ASSIGN
front.cornerR.wheelPosition.relativePosition.frame_b.f[3] = 0.0
*/
void Steering_eqFunction_5784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5784};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2513]] /* front.cornerR.wheelPosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5785
type: SIMPLE_ASSIGN
front.cornerR.wheelPosition.relativePosition.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5785};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2514]] /* front.cornerR.wheelPosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5786
type: SIMPLE_ASSIGN
front.cornerR.wheelPosition.relativePosition.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5786};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2515]] /* front.cornerR.wheelPosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5787
type: SIMPLE_ASSIGN
front.cornerR.wheelPosition.relativePosition.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5787};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2516]] /* front.cornerR.wheelPosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5788
type: SIMPLE_ASSIGN
front.cornerR.ucaPivot.constantTorque.phi_support = 0.0
*/
void Steering_eqFunction_5788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5788};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2399]] /* front.cornerR.ucaPivot.constantTorque.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5789
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.axis.tau = 0.0
*/
void Steering_eqFunction_5789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5789};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1785]] /* front.cornerR.jointUSR.axis.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5790
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.R_rel.w[2] = 0.0
*/
void Steering_eqFunction_5790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5790};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1886]] /* front.cornerR.jointUSR.revolute.R_rel.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5791
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.R_rel.w[3] = 0.0
*/
void Steering_eqFunction_5791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5791};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1887]] /* front.cornerR.jointUSR.revolute.R_rel.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5792
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.R_rel.T[1,1] = 1.0
*/
void Steering_eqFunction_5792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5792};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1878]] /* front.cornerR.jointUSR.revolute.R_rel.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 5793
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.R_rel.T[1,2] = 0.0
*/
void Steering_eqFunction_5793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5793};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1879]] /* front.cornerR.jointUSR.revolute.R_rel.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5794
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.R_rel.T[1,3] = 0.0
*/
void Steering_eqFunction_5794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5794};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1880]] /* front.cornerR.jointUSR.revolute.R_rel.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5795
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.R_rel.T[2,1] = 0.0
*/
void Steering_eqFunction_5795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5795};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1881]] /* front.cornerR.jointUSR.revolute.R_rel.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5796
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.R_rel.T[3,1] = 0.0
*/
void Steering_eqFunction_5796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5796};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1882]] /* front.cornerR.jointUSR.revolute.R_rel.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5797
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.constraintResidue = 0.0
*/
void Steering_eqFunction_5797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5797};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1944]] /* front.cornerR.jointUSR.rod1.constraintResidue variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5798
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.n2_a[1] = 0.0
*/
void Steering_eqFunction_5798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5798};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1974]] /* front.cornerR.jointUSR.rod1.n2_a[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5799
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.R_rel_ia2.w[1] = 0.0
*/
void Steering_eqFunction_5799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5799};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1941]] /* front.cornerR.jointUSR.rod1.R_rel_ia2.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5800
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.R_rel_ia2.w[2] = 0.0
*/
void Steering_eqFunction_5800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5800};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1942]] /* front.cornerR.jointUSR.rod1.R_rel_ia2.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5801
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.R_rel_ia2.w[3] = 0.0
*/
void Steering_eqFunction_5801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5801};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1943]] /* front.cornerR.jointUSR.rod1.R_rel_ia2.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5802
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.R_rel_ia2.T[1,1] = 0.11001306482721841
*/
void Steering_eqFunction_5802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5802};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1935]] /* front.cornerR.jointUSR.rod1.R_rel_ia2.T[1,1] variable */) = 0.11001306482721841;
  TRACE_POP
}

/*
equation index: 5803
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.R_rel_ia2.T[2,1] = 0.24752939586124134
*/
void Steering_eqFunction_5803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5803};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1937]] /* front.cornerR.jointUSR.rod1.R_rel_ia2.T[2,1] variable */) = 0.24752939586124134;
  TRACE_POP
}

/*
equation index: 5804
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.R_rel_ia2.T[3,1] = 0.962614317238161
*/
void Steering_eqFunction_5804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5804};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1939]] /* front.cornerR.jointUSR.rod1.R_rel_ia2.T[3,1] variable */) = 0.962614317238161;
  TRACE_POP
}

/*
equation index: 5805
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5805};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1969]] /* front.cornerR.jointUSR.rod1.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5806
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5806};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1970]] /* front.cornerR.jointUSR.rod1.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5807
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5807};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1971]] /* front.cornerR.jointUSR.rod1.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5808
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[1] = 0.0
*/
void Steering_eqFunction_5808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1836]] /* front.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5809
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[2] = 0.0
*/
void Steering_eqFunction_5809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5809};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1837]] /* front.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5810
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[3] = 0.0
*/
void Steering_eqFunction_5810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5810};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1838]] /* front.cornerR.jointUSR.relativePosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5811
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[1] = 0.0
*/
void Steering_eqFunction_5811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5811};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1839]] /* front.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5812
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[2] = 0.0
*/
void Steering_eqFunction_5812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1840]] /* front.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5813
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[3] = 0.0
*/
void Steering_eqFunction_5813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5813};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1841]] /* front.cornerR.jointUSR.relativePosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5814
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[1] = 0.0
*/
void Steering_eqFunction_5814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5814};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1842]] /* front.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5815
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[2] = 0.0
*/
void Steering_eqFunction_5815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5815};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1843]] /* front.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5816
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[3] = 0.0
*/
void Steering_eqFunction_5816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5816};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1844]] /* front.cornerR.jointUSR.relativePosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5817
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5817};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1845]] /* front.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5818
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5818};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1846]] /* front.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5819
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5819};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1847]] /* front.cornerR.jointUSR.relativePosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5820
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.position_b[1].y = 0.02
*/
void Steering_eqFunction_5820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5820};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1833]] /* front.cornerR.jointUSR.position_b[1].y variable */) = 0.02;
  TRACE_POP
}

/*
equation index: 5821
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.position_b[2].y = 0.5499999999999999
*/
void Steering_eqFunction_5821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5821};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1834]] /* front.cornerR.jointUSR.position_b[2].y variable */) = 0.5499999999999999;
  TRACE_POP
}

/*
equation index: 5822
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.position_b[3].y = 0.0
*/
void Steering_eqFunction_5822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5822};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1835]] /* front.cornerR.jointUSR.position_b[3].y variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5823
type: SIMPLE_ASSIGN
front.cornerR.coilover.frame_a.t[1] = 0.0
*/
void Steering_eqFunction_5823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5823};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1736]] /* front.cornerR.coilover.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5824
type: SIMPLE_ASSIGN
front.cornerR.coilover.frame_a.t[2] = 0.0
*/
void Steering_eqFunction_5824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5824};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1737]] /* front.cornerR.coilover.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5825
type: SIMPLE_ASSIGN
front.cornerR.coilover.frame_a.t[3] = 0.0
*/
void Steering_eqFunction_5825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5825};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1738]] /* front.cornerR.coilover.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5826
type: SIMPLE_ASSIGN
front.cornerR.coilover.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5826};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1739]] /* front.cornerR.coilover.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5827
type: SIMPLE_ASSIGN
front.cornerR.coilover.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5827};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1740]] /* front.cornerR.coilover.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5828
type: SIMPLE_ASSIGN
front.cornerR.coilover.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5828};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1741]] /* front.cornerR.coilover.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5829
type: SIMPLE_ASSIGN
front.cornerL.tieRod.axis.tau = 0.0
*/
void Steering_eqFunction_5829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5829};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1346]] /* front.cornerL.tieRod.axis.tau variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5830
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.constraintResidue = 0.0
*/
void Steering_eqFunction_5830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5830};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1449]] /* front.cornerL.tieRod.rod1.constraintResidue variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5831
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.frame_a.t[1] = 0.0
*/
void Steering_eqFunction_5831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1462]] /* front.cornerL.tieRod.rod1.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5832
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.frame_a.t[2] = 0.0
*/
void Steering_eqFunction_5832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5832};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1463]] /* front.cornerL.tieRod.rod1.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5833
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.frame_a.t[3] = 0.0
*/
void Steering_eqFunction_5833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5833};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1464]] /* front.cornerL.tieRod.rod1.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5834
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5834};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1468]] /* front.cornerL.tieRod.rod1.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5835
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5835};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1469]] /* front.cornerL.tieRod.rod1.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5836
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5836};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1470]] /* front.cornerL.tieRod.rod1.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5837
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.f_b_a1[1] = 0.0
*/
void Steering_eqFunction_5837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5837};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1459]] /* front.cornerL.tieRod.rod1.f_b_a1[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5838
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.f_b_a1[2] = 0.0
*/
void Steering_eqFunction_5838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5838};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1460]] /* front.cornerL.tieRod.rod1.f_b_a1[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5839
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod1.f_b_a1[3] = 0.0
*/
void Steering_eqFunction_5839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5839};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1461]] /* front.cornerL.tieRod.rod1.f_b_a1[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5840
type: SIMPLE_ASSIGN
front.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[1] = 0.0
*/
void Steering_eqFunction_5840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5840};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1359]] /* front.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5841
type: SIMPLE_ASSIGN
front.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[2] = 0.0
*/
void Steering_eqFunction_5841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5841};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1360]] /* front.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5842
type: SIMPLE_ASSIGN
front.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[3] = 0.0
*/
void Steering_eqFunction_5842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1361]] /* front.cornerL.tieRod.relativePosition.relativePosition.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5843
type: SIMPLE_ASSIGN
front.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[1] = 0.0
*/
void Steering_eqFunction_5843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5843};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1362]] /* front.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5844
type: SIMPLE_ASSIGN
front.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[2] = 0.0
*/
void Steering_eqFunction_5844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5844};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1363]] /* front.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5845
type: SIMPLE_ASSIGN
front.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[3] = 0.0
*/
void Steering_eqFunction_5845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5845};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1364]] /* front.cornerL.tieRod.relativePosition.relativePosition.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5846
type: SIMPLE_ASSIGN
front.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[1] = 0.0
*/
void Steering_eqFunction_5846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5846};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1365]] /* front.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5847
type: SIMPLE_ASSIGN
front.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[2] = 0.0
*/
void Steering_eqFunction_5847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5847};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1366]] /* front.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5848
type: SIMPLE_ASSIGN
front.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[3] = 0.0
*/
void Steering_eqFunction_5848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5848};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1367]] /* front.cornerL.tieRod.relativePosition.relativePosition.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5849
type: SIMPLE_ASSIGN
front.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5849};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1368]] /* front.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5850
type: SIMPLE_ASSIGN
front.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5850};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1369]] /* front.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5851
type: SIMPLE_ASSIGN
front.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5851};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1370]] /* front.cornerL.tieRod.relativePosition.relativePosition.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5852
type: SIMPLE_ASSIGN
front.cornerL.upright.g_0[1] = 0.0
*/
void Steering_eqFunction_5852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5852};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1616]] /* front.cornerL.upright.g_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5853
type: SIMPLE_ASSIGN
front.cornerL.upright.g_0[2] = 0.0
*/
void Steering_eqFunction_5853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5853};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1617]] /* front.cornerL.upright.g_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5854
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.frame_a.f[1] = 0.0
*/
void Steering_eqFunction_5854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5854};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1663]] /* front.cornerL.wheelAngles.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5855
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.frame_a.f[2] = 0.0
*/
void Steering_eqFunction_5855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1664]] /* front.cornerL.wheelAngles.frame_a.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5856
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.frame_a.f[3] = 0.0
*/
void Steering_eqFunction_5856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1665]] /* front.cornerL.wheelAngles.frame_a.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5857
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.frame_a.t[1] = 0.0
*/
void Steering_eqFunction_5857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5857};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1666]] /* front.cornerL.wheelAngles.frame_a.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5858
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.frame_a.t[2] = 0.0
*/
void Steering_eqFunction_5858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5858};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1667]] /* front.cornerL.wheelAngles.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5859
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.frame_a.t[3] = 0.0
*/
void Steering_eqFunction_5859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5859};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1668]] /* front.cornerL.wheelAngles.frame_a.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5860
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.frame_b.f[1] = 0.0
*/
void Steering_eqFunction_5860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5860};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1669]] /* front.cornerL.wheelAngles.frame_b.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5861
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.frame_b.f[2] = 0.0
*/
void Steering_eqFunction_5861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5861};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1670]] /* front.cornerL.wheelAngles.frame_b.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5862
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.frame_b.f[3] = 0.0
*/
void Steering_eqFunction_5862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5862};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1671]] /* front.cornerL.wheelAngles.frame_b.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5863
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.frame_b.t[1] = 0.0
*/
void Steering_eqFunction_5863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5863};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1672]] /* front.cornerL.wheelAngles.frame_b.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5864
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.frame_b.t[2] = 0.0
*/
void Steering_eqFunction_5864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5864};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1673]] /* front.cornerL.wheelAngles.frame_b.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5865
type: SIMPLE_ASSIGN
front.cornerL.wheelAngles.frame_b.t[3] = 0.0
*/
void Steering_eqFunction_5865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5865};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1674]] /* front.cornerL.wheelAngles.frame_b.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 5866
type: SIMPLE_ASSIGN
front.cornerL.wheelPosition.relativePosition.frame_a.f[1] = 0.0
*/
void Steering_eqFunction_5866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5866};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1680]] /* front.cornerL.wheelPosition.relativePosition.frame_a.f[1] variable */) = 0.0;
  TRACE_POP
}
OMC_DISABLE_OPT
void Steering_functionInitialEquations_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Steering_eqFunction_6863(data, threadData);
  Steering_eqFunction_8587(data, threadData);
  Steering_eqFunction_8586(data, threadData);
  Steering_eqFunction_8589(data, threadData);
  Steering_eqFunction_5143(data, threadData);
  Steering_eqFunction_5144(data, threadData);
  Steering_eqFunction_8592(data, threadData);
  Steering_eqFunction_5146(data, threadData);
  Steering_eqFunction_8593(data, threadData);
  Steering_eqFunction_8594(data, threadData);
  Steering_eqFunction_8595(data, threadData);
  Steering_eqFunction_5150(data, threadData);
  Steering_eqFunction_6869(data, threadData);
  Steering_eqFunction_5152(data, threadData);
  Steering_eqFunction_6871(data, threadData);
  Steering_eqFunction_5154(data, threadData);
  Steering_eqFunction_6873(data, threadData);
  Steering_eqFunction_6874(data, threadData);
  Steering_eqFunction_6875(data, threadData);
  Steering_eqFunction_6876(data, threadData);
  Steering_eqFunction_6877(data, threadData);
  Steering_eqFunction_6878(data, threadData);
  Steering_eqFunction_6879(data, threadData);
  Steering_eqFunction_5162(data, threadData);
  Steering_eqFunction_5163(data, threadData);
  Steering_eqFunction_5164(data, threadData);
  Steering_eqFunction_6883(data, threadData);
  Steering_eqFunction_6884(data, threadData);
  Steering_eqFunction_6885(data, threadData);
  Steering_eqFunction_6886(data, threadData);
  Steering_eqFunction_5169(data, threadData);
  Steering_eqFunction_6898(data, threadData);
  Steering_eqFunction_6902(data, threadData);
  Steering_eqFunction_6906(data, threadData);
  Steering_eqFunction_5173(data, threadData);
  Steering_eqFunction_6899(data, threadData);
  Steering_eqFunction_6903(data, threadData);
  Steering_eqFunction_6907(data, threadData);
  Steering_eqFunction_5177(data, threadData);
  Steering_eqFunction_6900(data, threadData);
  Steering_eqFunction_6904(data, threadData);
  Steering_eqFunction_6908(data, threadData);
  Steering_eqFunction_5181(data, threadData);
  Steering_eqFunction_6790(data, threadData);
  Steering_eqFunction_5183(data, threadData);
  Steering_eqFunction_6792(data, threadData);
  Steering_eqFunction_5185(data, threadData);
  Steering_eqFunction_6794(data, threadData);
  Steering_eqFunction_6795(data, threadData);
  Steering_eqFunction_5188(data, threadData);
  Steering_eqFunction_5189(data, threadData);
  Steering_eqFunction_5190(data, threadData);
  Steering_eqFunction_5191(data, threadData);
  Steering_eqFunction_5192(data, threadData);
  Steering_eqFunction_6805(data, threadData);
  Steering_eqFunction_6804(data, threadData);
  Steering_eqFunction_6798(data, threadData);
  Steering_eqFunction_6797(data, threadData);
  Steering_eqFunction_6802(data, threadData);
  Steering_eqFunction_5198(data, threadData);
  Steering_eqFunction_5199(data, threadData);
  Steering_eqFunction_6801(data, threadData);
  Steering_eqFunction_6809(data, threadData);
  Steering_eqFunction_5202(data, threadData);
  Steering_eqFunction_5203(data, threadData);
  Steering_eqFunction_5204(data, threadData);
  Steering_eqFunction_7840(data, threadData);
  Steering_eqFunction_8597(data, threadData);
  Steering_eqFunction_7839(data, threadData);
  Steering_eqFunction_7841(data, threadData);
  Steering_eqFunction_5209(data, threadData);
  Steering_eqFunction_5210(data, threadData);
  Steering_eqFunction_5211(data, threadData);
  Steering_eqFunction_7885(data, threadData);
  Steering_eqFunction_7875(data, threadData);
  Steering_eqFunction_7859(data, threadData);
  Steering_eqFunction_8289(data, threadData);
  Steering_eqFunction_8290(data, threadData);
  Steering_eqFunction_5217(data, threadData);
  Steering_eqFunction_5218(data, threadData);
  Steering_eqFunction_5219(data, threadData);
  Steering_eqFunction_7856(data, threadData);
  Steering_eqFunction_7855(data, threadData);
  Steering_eqFunction_7854(data, threadData);
  Steering_eqFunction_8287(data, threadData);
  Steering_eqFunction_8288(data, threadData);
  Steering_eqFunction_5225(data, threadData);
  Steering_eqFunction_5226(data, threadData);
  Steering_eqFunction_5227(data, threadData);
  Steering_eqFunction_7851(data, threadData);
  Steering_eqFunction_5229(data, threadData);
  Steering_eqFunction_5230(data, threadData);
  Steering_eqFunction_7887(data, threadData);
  Steering_eqFunction_7888(data, threadData);
  Steering_eqFunction_7901(data, threadData);
  Steering_eqFunction_7891(data, threadData);
  Steering_eqFunction_7893(data, threadData);
  Steering_eqFunction_5236(data, threadData);
  Steering_eqFunction_5237(data, threadData);
  Steering_eqFunction_7895(data, threadData);
  Steering_eqFunction_7897(data, threadData);
  Steering_eqFunction_7896(data, threadData);
  Steering_eqFunction_7899(data, threadData);
  Steering_eqFunction_7900(data, threadData);
  Steering_eqFunction_7890(data, threadData);
  Steering_eqFunction_7850(data, threadData);
  Steering_eqFunction_5245(data, threadData);
  Steering_eqFunction_5246(data, threadData);
  Steering_eqFunction_7877(data, threadData);
  Steering_eqFunction_7878(data, threadData);
  Steering_eqFunction_7884(data, threadData);
  Steering_eqFunction_7880(data, threadData);
  Steering_eqFunction_7882(data, threadData);
  Steering_eqFunction_5252(data, threadData);
  Steering_eqFunction_5253(data, threadData);
  Steering_eqFunction_7904(data, threadData);
  Steering_eqFunction_7906(data, threadData);
  Steering_eqFunction_7905(data, threadData);
  Steering_eqFunction_7883(data, threadData);
  Steering_eqFunction_7909(data, threadData);
  Steering_eqFunction_7879(data, threadData);
  Steering_eqFunction_7849(data, threadData);
  Steering_eqFunction_5261(data, threadData);
  Steering_eqFunction_5262(data, threadData);
  Steering_eqFunction_7861(data, threadData);
  Steering_eqFunction_7862(data, threadData);
  Steering_eqFunction_7889(data, threadData);
  Steering_eqFunction_7874(data, threadData);
  Steering_eqFunction_7864(data, threadData);
  Steering_eqFunction_7866(data, threadData);
  Steering_eqFunction_5269(data, threadData);
  Steering_eqFunction_5270(data, threadData);
  Steering_eqFunction_7868(data, threadData);
  Steering_eqFunction_7870(data, threadData);
  Steering_eqFunction_7869(data, threadData);
  Steering_eqFunction_7907(data, threadData);
  Steering_eqFunction_8285(data, threadData);
  Steering_eqFunction_8286(data, threadData);
  Steering_eqFunction_7872(data, threadData);
  Steering_eqFunction_7873(data, threadData);
  Steering_eqFunction_7910(data, threadData);
  Steering_eqFunction_7863(data, threadData);
  Steering_eqFunction_7902(data, threadData);
  Steering_eqFunction_8596(data, threadData);
  Steering_eqFunction_8598(data, threadData);
  Steering_eqFunction_8607(data, threadData);
  Steering_eqFunction_8608(data, threadData);
  Steering_eqFunction_8619(data, threadData);
  Steering_eqFunction_5287(data, threadData);
  Steering_eqFunction_8603(data, threadData);
  Steering_eqFunction_8604(data, threadData);
  Steering_eqFunction_8605(data, threadData);
  Steering_eqFunction_5291(data, threadData);
  Steering_eqFunction_8599(data, threadData);
  Steering_eqFunction_8600(data, threadData);
  Steering_eqFunction_8613(data, threadData);
  Steering_eqFunction_8614(data, threadData);
  Steering_eqFunction_8611(data, threadData);
  Steering_eqFunction_8612(data, threadData);
  Steering_eqFunction_8609(data, threadData);
  Steering_eqFunction_8610(data, threadData);
  Steering_eqFunction_8601(data, threadData);
  Steering_eqFunction_5301(data, threadData);
  Steering_eqFunction_5305(data, threadData);
  Steering_eqFunction_5302(data, threadData);
  Steering_eqFunction_5303(data, threadData);
  Steering_eqFunction_5304(data, threadData);
  Steering_eqFunction_5306(data, threadData);
  Steering_eqFunction_5307(data, threadData);
  Steering_eqFunction_5308(data, threadData);
  Steering_eqFunction_8624(data, threadData);
  Steering_eqFunction_8625(data, threadData);
  Steering_eqFunction_8626(data, threadData);
  Steering_eqFunction_5312(data, threadData);
  Steering_eqFunction_5313(data, threadData);
  Steering_eqFunction_5314(data, threadData);
  Steering_eqFunction_8630(data, threadData);
  Steering_eqFunction_8631(data, threadData);
  Steering_eqFunction_8632(data, threadData);
  Steering_eqFunction_5318(data, threadData);
  Steering_eqFunction_5319(data, threadData);
  Steering_eqFunction_5320(data, threadData);
  Steering_eqFunction_8636(data, threadData);
  Steering_eqFunction_8637(data, threadData);
  Steering_eqFunction_8638(data, threadData);
  Steering_eqFunction_5557(data, threadData);
  Steering_eqFunction_9208(data, threadData);
  Steering_eqFunction_9224(data, threadData);
  Steering_eqFunction_9219(data, threadData);
  Steering_eqFunction_9223(data, threadData);
  Steering_eqFunction_9220(data, threadData);
  Steering_eqFunction_9275(data, threadData);
  Steering_eqFunction_9274(data, threadData);
  Steering_eqFunction_9228(data, threadData);
  Steering_eqFunction_9226(data, threadData);
  Steering_eqFunction_9227(data, threadData);
  Steering_eqFunction_9229(data, threadData);
  Steering_eqFunction_9217(data, threadData);
  Steering_eqFunction_9230(data, threadData);
  Steering_eqFunction_9215(data, threadData);
  Steering_eqFunction_9231(data, threadData);
  Steering_eqFunction_9213(data, threadData);
  Steering_eqFunction_9214(data, threadData);
  Steering_eqFunction_9216(data, threadData);
  Steering_eqFunction_9218(data, threadData);
  Steering_eqFunction_9270(data, threadData);
  Steering_eqFunction_9266(data, threadData);
  Steering_eqFunction_9262(data, threadData);
  Steering_eqFunction_9244(data, threadData);
  Steering_eqFunction_5581(data, threadData);
  Steering_eqFunction_5582(data, threadData);
  Steering_eqFunction_5583(data, threadData);
  Steering_eqFunction_9240(data, threadData);
  Steering_eqFunction_9245(data, threadData);
  Steering_eqFunction_9246(data, threadData);
  Steering_eqFunction_5587(data, threadData);
  Steering_eqFunction_9238(data, threadData);
  Steering_eqFunction_5589(data, threadData);
  Steering_eqFunction_5590(data, threadData);
  Steering_eqFunction_9235(data, threadData);
  Steering_eqFunction_5592(data, threadData);
  Steering_eqFunction_5593(data, threadData);
  Steering_eqFunction_9243(data, threadData);
  Steering_eqFunction_9233(data, threadData);
  Steering_eqFunction_9234(data, threadData);
  Steering_eqFunction_5597(data, threadData);
  Steering_eqFunction_9251(data, threadData);
  Steering_eqFunction_5599(data, threadData);
  Steering_eqFunction_9250(data, threadData);
  Steering_eqFunction_9259(data, threadData);
  Steering_eqFunction_5602(data, threadData);
  Steering_eqFunction_9261(data, threadData);
  Steering_eqFunction_9267(data, threadData);
  Steering_eqFunction_9268(data, threadData);
  Steering_eqFunction_9269(data, threadData);
  Steering_eqFunction_9263(data, threadData);
  Steering_eqFunction_9264(data, threadData);
  Steering_eqFunction_9265(data, threadData);
  Steering_eqFunction_9256(data, threadData);
  Steering_eqFunction_9257(data, threadData);
  Steering_eqFunction_9258(data, threadData);
  Steering_eqFunction_9253(data, threadData);
  Steering_eqFunction_9254(data, threadData);
  Steering_eqFunction_9255(data, threadData);
  Steering_eqFunction_9271(data, threadData);
  Steering_eqFunction_9272(data, threadData);
  Steering_eqFunction_9273(data, threadData);
  Steering_eqFunction_5619(data, threadData);
  Steering_eqFunction_5620(data, threadData);
  Steering_eqFunction_5621(data, threadData);
  Steering_eqFunction_5622(data, threadData);
  Steering_eqFunction_5623(data, threadData);
  Steering_eqFunction_5624(data, threadData);
  Steering_eqFunction_5625(data, threadData);
  Steering_eqFunction_5626(data, threadData);
  Steering_eqFunction_5627(data, threadData);
  Steering_eqFunction_5628(data, threadData);
  Steering_eqFunction_5629(data, threadData);
  Steering_eqFunction_5630(data, threadData);
  Steering_eqFunction_5631(data, threadData);
  Steering_eqFunction_5632(data, threadData);
  Steering_eqFunction_5633(data, threadData);
  Steering_eqFunction_5634(data, threadData);
  Steering_eqFunction_5635(data, threadData);
  Steering_eqFunction_5636(data, threadData);
  Steering_eqFunction_5637(data, threadData);
  Steering_eqFunction_5638(data, threadData);
  Steering_eqFunction_5639(data, threadData);
  Steering_eqFunction_5640(data, threadData);
  Steering_eqFunction_5641(data, threadData);
  Steering_eqFunction_5642(data, threadData);
  Steering_eqFunction_5643(data, threadData);
  Steering_eqFunction_5644(data, threadData);
  Steering_eqFunction_5645(data, threadData);
  Steering_eqFunction_5646(data, threadData);
  Steering_eqFunction_5647(data, threadData);
  Steering_eqFunction_5648(data, threadData);
  Steering_eqFunction_5649(data, threadData);
  Steering_eqFunction_5650(data, threadData);
  Steering_eqFunction_5651(data, threadData);
  Steering_eqFunction_5652(data, threadData);
  Steering_eqFunction_5653(data, threadData);
  Steering_eqFunction_5654(data, threadData);
  Steering_eqFunction_5655(data, threadData);
  Steering_eqFunction_5656(data, threadData);
  Steering_eqFunction_5657(data, threadData);
  Steering_eqFunction_5658(data, threadData);
  Steering_eqFunction_5659(data, threadData);
  Steering_eqFunction_5660(data, threadData);
  Steering_eqFunction_5661(data, threadData);
  Steering_eqFunction_5662(data, threadData);
  Steering_eqFunction_5663(data, threadData);
  Steering_eqFunction_5664(data, threadData);
  Steering_eqFunction_5665(data, threadData);
  Steering_eqFunction_5666(data, threadData);
  Steering_eqFunction_5667(data, threadData);
  Steering_eqFunction_5668(data, threadData);
  Steering_eqFunction_5669(data, threadData);
  Steering_eqFunction_5670(data, threadData);
  Steering_eqFunction_5671(data, threadData);
  Steering_eqFunction_5672(data, threadData);
  Steering_eqFunction_5673(data, threadData);
  Steering_eqFunction_5674(data, threadData);
  Steering_eqFunction_5675(data, threadData);
  Steering_eqFunction_5676(data, threadData);
  Steering_eqFunction_5677(data, threadData);
  Steering_eqFunction_5678(data, threadData);
  Steering_eqFunction_5679(data, threadData);
  Steering_eqFunction_5680(data, threadData);
  Steering_eqFunction_5681(data, threadData);
  Steering_eqFunction_5682(data, threadData);
  Steering_eqFunction_5683(data, threadData);
  Steering_eqFunction_5684(data, threadData);
  Steering_eqFunction_5685(data, threadData);
  Steering_eqFunction_5686(data, threadData);
  Steering_eqFunction_5687(data, threadData);
  Steering_eqFunction_5688(data, threadData);
  Steering_eqFunction_5689(data, threadData);
  Steering_eqFunction_5690(data, threadData);
  Steering_eqFunction_5691(data, threadData);
  Steering_eqFunction_5692(data, threadData);
  Steering_eqFunction_5693(data, threadData);
  Steering_eqFunction_5694(data, threadData);
  Steering_eqFunction_5695(data, threadData);
  Steering_eqFunction_5696(data, threadData);
  Steering_eqFunction_5697(data, threadData);
  Steering_eqFunction_5698(data, threadData);
  Steering_eqFunction_5699(data, threadData);
  Steering_eqFunction_5700(data, threadData);
  Steering_eqFunction_5701(data, threadData);
  Steering_eqFunction_5702(data, threadData);
  Steering_eqFunction_5703(data, threadData);
  Steering_eqFunction_5704(data, threadData);
  Steering_eqFunction_5705(data, threadData);
  Steering_eqFunction_5706(data, threadData);
  Steering_eqFunction_5707(data, threadData);
  Steering_eqFunction_5708(data, threadData);
  Steering_eqFunction_5709(data, threadData);
  Steering_eqFunction_5710(data, threadData);
  Steering_eqFunction_5711(data, threadData);
  Steering_eqFunction_5712(data, threadData);
  Steering_eqFunction_5713(data, threadData);
  Steering_eqFunction_5714(data, threadData);
  Steering_eqFunction_5715(data, threadData);
  Steering_eqFunction_5716(data, threadData);
  Steering_eqFunction_5717(data, threadData);
  Steering_eqFunction_5718(data, threadData);
  Steering_eqFunction_5719(data, threadData);
  Steering_eqFunction_5720(data, threadData);
  Steering_eqFunction_5721(data, threadData);
  Steering_eqFunction_5722(data, threadData);
  Steering_eqFunction_5723(data, threadData);
  Steering_eqFunction_5724(data, threadData);
  Steering_eqFunction_5725(data, threadData);
  Steering_eqFunction_5726(data, threadData);
  Steering_eqFunction_5727(data, threadData);
  Steering_eqFunction_5728(data, threadData);
  Steering_eqFunction_5729(data, threadData);
  Steering_eqFunction_5730(data, threadData);
  Steering_eqFunction_5731(data, threadData);
  Steering_eqFunction_5732(data, threadData);
  Steering_eqFunction_5733(data, threadData);
  Steering_eqFunction_5734(data, threadData);
  Steering_eqFunction_5735(data, threadData);
  Steering_eqFunction_5736(data, threadData);
  Steering_eqFunction_5737(data, threadData);
  Steering_eqFunction_5738(data, threadData);
  Steering_eqFunction_5739(data, threadData);
  Steering_eqFunction_5740(data, threadData);
  Steering_eqFunction_5741(data, threadData);
  Steering_eqFunction_5742(data, threadData);
  Steering_eqFunction_5743(data, threadData);
  Steering_eqFunction_5744(data, threadData);
  Steering_eqFunction_5745(data, threadData);
  Steering_eqFunction_5746(data, threadData);
  Steering_eqFunction_5747(data, threadData);
  Steering_eqFunction_5748(data, threadData);
  Steering_eqFunction_5749(data, threadData);
  Steering_eqFunction_5750(data, threadData);
  Steering_eqFunction_5751(data, threadData);
  Steering_eqFunction_5752(data, threadData);
  Steering_eqFunction_5753(data, threadData);
  Steering_eqFunction_5754(data, threadData);
  Steering_eqFunction_5755(data, threadData);
  Steering_eqFunction_5756(data, threadData);
  Steering_eqFunction_5757(data, threadData);
  Steering_eqFunction_5758(data, threadData);
  Steering_eqFunction_5759(data, threadData);
  Steering_eqFunction_5760(data, threadData);
  Steering_eqFunction_5761(data, threadData);
  Steering_eqFunction_5762(data, threadData);
  Steering_eqFunction_5763(data, threadData);
  Steering_eqFunction_5764(data, threadData);
  Steering_eqFunction_5765(data, threadData);
  Steering_eqFunction_5766(data, threadData);
  Steering_eqFunction_5767(data, threadData);
  Steering_eqFunction_5768(data, threadData);
  Steering_eqFunction_5769(data, threadData);
  Steering_eqFunction_5770(data, threadData);
  Steering_eqFunction_5771(data, threadData);
  Steering_eqFunction_5772(data, threadData);
  Steering_eqFunction_5773(data, threadData);
  Steering_eqFunction_5774(data, threadData);
  Steering_eqFunction_5775(data, threadData);
  Steering_eqFunction_5776(data, threadData);
  Steering_eqFunction_5777(data, threadData);
  Steering_eqFunction_5778(data, threadData);
  Steering_eqFunction_5779(data, threadData);
  Steering_eqFunction_5780(data, threadData);
  Steering_eqFunction_5781(data, threadData);
  Steering_eqFunction_5782(data, threadData);
  Steering_eqFunction_5783(data, threadData);
  Steering_eqFunction_5784(data, threadData);
  Steering_eqFunction_5785(data, threadData);
  Steering_eqFunction_5786(data, threadData);
  Steering_eqFunction_5787(data, threadData);
  Steering_eqFunction_5788(data, threadData);
  Steering_eqFunction_5789(data, threadData);
  Steering_eqFunction_5790(data, threadData);
  Steering_eqFunction_5791(data, threadData);
  Steering_eqFunction_5792(data, threadData);
  Steering_eqFunction_5793(data, threadData);
  Steering_eqFunction_5794(data, threadData);
  Steering_eqFunction_5795(data, threadData);
  Steering_eqFunction_5796(data, threadData);
  Steering_eqFunction_5797(data, threadData);
  Steering_eqFunction_5798(data, threadData);
  Steering_eqFunction_5799(data, threadData);
  Steering_eqFunction_5800(data, threadData);
  Steering_eqFunction_5801(data, threadData);
  Steering_eqFunction_5802(data, threadData);
  Steering_eqFunction_5803(data, threadData);
  Steering_eqFunction_5804(data, threadData);
  Steering_eqFunction_5805(data, threadData);
  Steering_eqFunction_5806(data, threadData);
  Steering_eqFunction_5807(data, threadData);
  Steering_eqFunction_5808(data, threadData);
  Steering_eqFunction_5809(data, threadData);
  Steering_eqFunction_5810(data, threadData);
  Steering_eqFunction_5811(data, threadData);
  Steering_eqFunction_5812(data, threadData);
  Steering_eqFunction_5813(data, threadData);
  Steering_eqFunction_5814(data, threadData);
  Steering_eqFunction_5815(data, threadData);
  Steering_eqFunction_5816(data, threadData);
  Steering_eqFunction_5817(data, threadData);
  Steering_eqFunction_5818(data, threadData);
  Steering_eqFunction_5819(data, threadData);
  Steering_eqFunction_5820(data, threadData);
  Steering_eqFunction_5821(data, threadData);
  Steering_eqFunction_5822(data, threadData);
  Steering_eqFunction_5823(data, threadData);
  Steering_eqFunction_5824(data, threadData);
  Steering_eqFunction_5825(data, threadData);
  Steering_eqFunction_5826(data, threadData);
  Steering_eqFunction_5827(data, threadData);
  Steering_eqFunction_5828(data, threadData);
  Steering_eqFunction_5829(data, threadData);
  Steering_eqFunction_5830(data, threadData);
  Steering_eqFunction_5831(data, threadData);
  Steering_eqFunction_5832(data, threadData);
  Steering_eqFunction_5833(data, threadData);
  Steering_eqFunction_5834(data, threadData);
  Steering_eqFunction_5835(data, threadData);
  Steering_eqFunction_5836(data, threadData);
  Steering_eqFunction_5837(data, threadData);
  Steering_eqFunction_5838(data, threadData);
  Steering_eqFunction_5839(data, threadData);
  Steering_eqFunction_5840(data, threadData);
  Steering_eqFunction_5841(data, threadData);
  Steering_eqFunction_5842(data, threadData);
  Steering_eqFunction_5843(data, threadData);
  Steering_eqFunction_5844(data, threadData);
  Steering_eqFunction_5845(data, threadData);
  Steering_eqFunction_5846(data, threadData);
  Steering_eqFunction_5847(data, threadData);
  Steering_eqFunction_5848(data, threadData);
  Steering_eqFunction_5849(data, threadData);
  Steering_eqFunction_5850(data, threadData);
  Steering_eqFunction_5851(data, threadData);
  Steering_eqFunction_5852(data, threadData);
  Steering_eqFunction_5853(data, threadData);
  Steering_eqFunction_5854(data, threadData);
  Steering_eqFunction_5855(data, threadData);
  Steering_eqFunction_5856(data, threadData);
  Steering_eqFunction_5857(data, threadData);
  Steering_eqFunction_5858(data, threadData);
  Steering_eqFunction_5859(data, threadData);
  Steering_eqFunction_5860(data, threadData);
  Steering_eqFunction_5861(data, threadData);
  Steering_eqFunction_5862(data, threadData);
  Steering_eqFunction_5863(data, threadData);
  Steering_eqFunction_5864(data, threadData);
  Steering_eqFunction_5865(data, threadData);
  Steering_eqFunction_5866(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif