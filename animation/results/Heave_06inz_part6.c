#include "Heave_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void Heave_eqFunction_6512(DATA *data, threadData_t *threadData);


/*
equation index: 2972
type: SIMPLE_ASSIGN
$DER.front.steering.pos.s = front.steering.rackRatioGain.k * $DER.steering
*/
void Heave_eqFunction_2972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* der(front.steering.pos.s) DUMMY_DER */) = ((data->simulationInfo->realParameter[1583] /* front.steering.rackRatioGain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[837]] /* der(steering) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_7824(DATA *data, threadData_t *threadData);


/*
equation index: 2974
type: SIMPLE_ASSIGN
front.steering.rack.v = $DER.front.steering.pos.s
*/
void Heave_eqFunction_2974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2974};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2634]] /* front.steering.rack.v DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[512]] /* der(front.steering.pos.s) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2975
type: SIMPLE_ASSIGN
$DER.front.steering.rack.s = front.steering.rack.v
*/
void Heave_eqFunction_2975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2975};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[516]] /* der(front.steering.rack.s) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2634]] /* front.steering.rack.v DUMMY_STATE */);
  TRACE_POP
}
extern void Heave_eqFunction_7825(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7995(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6377(DATA *data, threadData_t *threadData);


/*
equation index: 2979
type: SIMPLE_ASSIGN
$DER.front.steering.endR.frame_a.r_0[3] = $DER.front.steering.rack.frame_a.r_0[3]
*/
void Heave_eqFunction_2979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2979};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* der(front.steering.endR.frame_a.r_0[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[515]] /* der(front.steering.rack.frame_a.r_0[3]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2980
type: SIMPLE_ASSIGN
$DER.points[1,7,3] = $DER.front.steering.endR.frame_a.r_0[3]
*/
void Heave_eqFunction_2980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2980};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[523]] /* der(points[1,7,3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* der(front.steering.endR.frame_a.r_0[3]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2981
type: SIMPLE_ASSIGN
$DER.points[2,7,3] = $DER.front.steering.endR.frame_a.r_0[3]
*/
void Heave_eqFunction_2981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2981};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[535]] /* der(points[2,7,3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[511]] /* der(front.steering.endR.frame_a.r_0[3]) DUMMY_DER */);
  TRACE_POP
}
extern void Heave_eqFunction_6376(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6513(DATA *data, threadData_t *threadData);


/*
equation index: 2984
type: SIMPLE_ASSIGN
points[1,7,3] = front.steering.endR.frame_a.r_0[3]
*/
void Heave_eqFunction_2984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2984};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2841]] /* points[1,7,3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2574]] /* front.steering.endR.frame_a.r_0[3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2985
type: SIMPLE_ASSIGN
points[2,7,3] = front.steering.endR.frame_a.r_0[3]
*/
void Heave_eqFunction_2985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2985};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2883]] /* points[2,7,3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2574]] /* front.steering.endR.frame_a.r_0[3] DUMMY_STATE */);
  TRACE_POP
}
extern void Heave_eqFunction_6375(DATA *data, threadData_t *threadData);


/*
equation index: 2987
type: SIMPLE_ASSIGN
$DER.front.steering.endR.frame_a.r_0[2] = $DER.front.steering.rack.frame_a.r_0[2] + front.steering.rack.v
*/
void Heave_eqFunction_2987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2987};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* der(front.steering.endR.frame_a.r_0[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[514]] /* der(front.steering.rack.frame_a.r_0[2]) DUMMY_DER */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2634]] /* front.steering.rack.v DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2988
type: SIMPLE_ASSIGN
$DER.points[1,7,2] = $DER.front.steering.endR.frame_a.r_0[2]
*/
void Heave_eqFunction_2988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2988};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[522]] /* der(points[1,7,2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* der(front.steering.endR.frame_a.r_0[2]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2989
type: SIMPLE_ASSIGN
$DER.points[2,7,2] = $DER.front.steering.endR.frame_a.r_0[2]
*/
void Heave_eqFunction_2989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2989};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[534]] /* der(points[2,7,2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[510]] /* der(front.steering.endR.frame_a.r_0[2]) DUMMY_DER */);
  TRACE_POP
}
extern void Heave_eqFunction_6515(DATA *data, threadData_t *threadData);


/*
equation index: 2991
type: SIMPLE_ASSIGN
front.steering.endR.frame_a.r_0[2] = front.steering.rack.frame_a.r_0[2] + front.steering.rack.s
*/
void Heave_eqFunction_2991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2991};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2573]] /* front.steering.endR.frame_a.r_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2625]] /* front.steering.rack.frame_a.r_0[2] DUMMY_STATE */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2633]] /* front.steering.rack.s DUMMY_STATE */);
  TRACE_POP
}
extern void Heave_eqFunction_7911(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7827(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6374(DATA *data, threadData_t *threadData);


/*
equation index: 2995
type: SIMPLE_ASSIGN
$DER.front.steering.endR.frame_a.r_0[1] = $DER.front.steering.rack.frame_a.r_0[1]
*/
void Heave_eqFunction_2995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2995};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* der(front.steering.endR.frame_a.r_0[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[513]] /* der(front.steering.rack.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2996
type: SIMPLE_ASSIGN
$DER.points[1,7,1] = $DER.front.steering.endR.frame_a.r_0[1]
*/
void Heave_eqFunction_2996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2996};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[521]] /* der(points[1,7,1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* der(front.steering.endR.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2997
type: SIMPLE_ASSIGN
$DER.points[2,7,1] = $DER.front.steering.endR.frame_a.r_0[1]
*/
void Heave_eqFunction_2997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[533]] /* der(points[2,7,1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[509]] /* der(front.steering.endR.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}
extern void Heave_eqFunction_6373(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6514(DATA *data, threadData_t *threadData);


/*
equation index: 3000
type: SIMPLE_ASSIGN
points[1,7,1] = front.steering.endR.frame_a.r_0[1]
*/
void Heave_eqFunction_3000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3000};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2839]] /* points[1,7,1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2572]] /* front.steering.endR.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3001
type: SIMPLE_ASSIGN
points[2,7,1] = front.steering.endR.frame_a.r_0[1]
*/
void Heave_eqFunction_3001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3001};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2881]] /* points[2,7,1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2572]] /* front.steering.endR.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void Heave_eqFunction_6372(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6516(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6371(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6517(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6370(DATA *data, threadData_t *threadData);


/*
equation index: 3007
type: SIMPLE_ASSIGN
$DER.front.cornerR.tieRod.revolute.e_r_b = 0.11001306482721843 * $DER.front.cornerR.tieRod.revolute.r_b[1] + 0.24752939586124137 * $DER.front.cornerR.tieRod.revolute.r_b[2] + 0.9626143172381612 * $DER.front.cornerR.tieRod.revolute.r_b[3]
*/
void Heave_eqFunction_3007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3007};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[472]] /* der(front.cornerR.tieRod.revolute.e_r_b) DUMMY_DER */) = (0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[482]] /* der(front.cornerR.tieRod.revolute.r_b[1]) DUMMY_DER */)) + (0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[483]] /* der(front.cornerR.tieRod.revolute.r_b[2]) DUMMY_DER */)) + (0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[484]] /* der(front.cornerR.tieRod.revolute.r_b[3]) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_6518(DATA *data, threadData_t *threadData);


/*
equation index: 3009
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.e_r_b = 0.11001306482721843 * front.cornerR.tieRod.revolute.r_b[1] + 0.24752939586124137 * front.cornerR.tieRod.revolute.r_b[2] + 0.9626143172381612 * front.cornerR.tieRod.revolute.r_b[3]
*/
void Heave_eqFunction_3009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3009};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2254]] /* front.cornerR.tieRod.revolute.e_r_b DUMMY_STATE */) = (0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2271]] /* front.cornerR.tieRod.revolute.r_b[1] DUMMY_STATE */)) + (0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2272]] /* front.cornerR.tieRod.revolute.r_b[2] DUMMY_STATE */)) + (0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2273]] /* front.cornerR.tieRod.revolute.r_b[3] DUMMY_STATE */));
  TRACE_POP
}
extern void Heave_eqFunction_6369(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6519(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6368(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6520(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6367(DATA *data, threadData_t *threadData);


/*
equation index: 3015
type: SIMPLE_ASSIGN
$DER.front.cornerL.tieRod.revolute.e_r_b = 0.11001306482721843 * $DER.front.cornerL.tieRod.revolute.r_b[1] + (-0.24752939586124137) * $DER.front.cornerL.tieRod.revolute.r_b[2] + 0.9626143172381612 * $DER.front.cornerL.tieRod.revolute.r_b[3]
*/
void Heave_eqFunction_3015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3015};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* der(front.cornerL.tieRod.revolute.e_r_b) DUMMY_DER */) = (0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* der(front.cornerL.tieRod.revolute.r_b[1]) DUMMY_DER */)) + (-0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* der(front.cornerL.tieRod.revolute.r_b[2]) DUMMY_DER */)) + (0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* der(front.cornerL.tieRod.revolute.r_b[3]) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_6521(DATA *data, threadData_t *threadData);


/*
equation index: 3017
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.e_r_b = 0.11001306482721843 * front.cornerL.tieRod.revolute.r_b[1] + (-0.24752939586124137) * front.cornerL.tieRod.revolute.r_b[2] + 0.9626143172381612 * front.cornerL.tieRod.revolute.r_b[3]
*/
void Heave_eqFunction_3017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3017};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1429]] /* front.cornerL.tieRod.revolute.e_r_b DUMMY_STATE */) = (0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1446]] /* front.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */)) + (-0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1447]] /* front.cornerL.tieRod.revolute.r_b[2] DUMMY_STATE */)) + (0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1448]] /* front.cornerL.tieRod.revolute.r_b[3] DUMMY_STATE */));
  TRACE_POP
}
extern void Heave_eqFunction_6366(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6522(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6365(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6523(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6364(DATA *data, threadData_t *threadData);


/*
equation index: 3023
type: SIMPLE_ASSIGN
$DER.rear.cornerR.tieRod.revolute.e_r_b = 0.222824801502141 * $DER.rear.cornerR.tieRod.revolute.r_b[2] + 0.9748585065718673 * $DER.rear.cornerR.tieRod.revolute.r_b[3]
*/
void Heave_eqFunction_3023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3023};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[803]] /* der(rear.cornerR.tieRod.revolute.e_r_b) DUMMY_DER */) = (0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[814]] /* der(rear.cornerR.tieRod.revolute.r_b[2]) DUMMY_DER */)) + (0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[815]] /* der(rear.cornerR.tieRod.revolute.r_b[3]) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_6524(DATA *data, threadData_t *threadData);


/*
equation index: 3025
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.revolute.e_r_b = 0.222824801502141 * rear.cornerR.tieRod.revolute.r_b[2] + 0.9748585065718673 * rear.cornerR.tieRod.revolute.r_b[3]
*/
void Heave_eqFunction_3025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3025};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4358]] /* rear.cornerR.tieRod.revolute.e_r_b DUMMY_STATE */) = (0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4376]] /* rear.cornerR.tieRod.revolute.r_b[2] DUMMY_STATE */)) + (0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4377]] /* rear.cornerR.tieRod.revolute.r_b[3] DUMMY_STATE */));
  TRACE_POP
}
extern void Heave_eqFunction_6363(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6525(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6362(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6526(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6361(DATA *data, threadData_t *threadData);


/*
equation index: 3031
type: SIMPLE_ASSIGN
$DER.rear.cornerL.tieRod.revolute.e_r_b = (-0.222824801502141) * $DER.rear.cornerL.tieRod.revolute.r_b[2] + 0.9748585065718673 * $DER.rear.cornerL.tieRod.revolute.r_b[3]
*/
void Heave_eqFunction_3031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3031};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* der(rear.cornerL.tieRod.revolute.e_r_b) DUMMY_DER */) = (-0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* der(rear.cornerL.tieRod.revolute.r_b[2]) DUMMY_DER */)) + (0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* der(rear.cornerL.tieRod.revolute.r_b[3]) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_6527(DATA *data, threadData_t *threadData);


/*
equation index: 3033
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.revolute.e_r_b = (-0.222824801502141) * rear.cornerL.tieRod.revolute.r_b[2] + 0.9748585065718673 * rear.cornerL.tieRod.revolute.r_b[3]
*/
void Heave_eqFunction_3033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3033};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3524]] /* rear.cornerL.tieRod.revolute.e_r_b DUMMY_STATE */) = (-0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3542]] /* rear.cornerL.tieRod.revolute.r_b[2] DUMMY_STATE */)) + (0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3543]] /* rear.cornerL.tieRod.revolute.r_b[3] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3034
type: SIMPLE_ASSIGN
front.cornerR.ucaPivot.phi = $START.front.cornerR.ucaPivot.phi
*/
void Heave_eqFunction_3034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3034};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */) = (data->modelData->realVarsData[2] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */).attribute .start;
  TRACE_POP
}

/*
equation index: 3035
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_a.R.T[1,1] = front.cornerR.ucaPivot.e[1] ^ 2.0 + (1.0 - front.cornerR.ucaPivot.e[1] ^ 2.0) * cos(front.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3035};
  modelica_real tmp57;
  modelica_real tmp58;
  tmp57 = (data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */);
  tmp58 = (data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1788]] /* front.cornerR.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */) = (tmp57 * tmp57) + (1.0 - ((tmp58 * tmp58))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3036
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_a.R.T[1,2] = (front.cornerR.ucaPivot.e[1] - front.cornerR.ucaPivot.e[1] * cos(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.e[2] + front.cornerR.ucaPivot.e[3] * sin(front.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3036};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1789]] /* front.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */)) + ((data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3037
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_a.R.T[1,3] = (front.cornerR.ucaPivot.e[1] - front.cornerR.ucaPivot.e[1] * cos(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.e[3] - front.cornerR.ucaPivot.e[2] * sin(front.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3037};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* front.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */)) - (((data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 3038
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_a.R.T[2,1] = (front.cornerR.ucaPivot.e[2] - front.cornerR.ucaPivot.e[2] * cos(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.e[1] - front.cornerR.ucaPivot.e[3] * sin(front.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3038};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* front.cornerR.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */)) - (((data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 3039
type: SIMPLE_ASSIGN
points[2,5,1] = front.cornerR.uca.frame_a.r_0[1] + (-0.02) * front.cornerR.jointUSR.frame_a.R.T[1,1] + 0.33999999999999997 * front.cornerR.jointUSR.frame_a.R.T[2,1]
*/
void Heave_eqFunction_3039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3039};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* points[2,5,1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2358]] /* front.cornerR.uca.frame_a.r_0[1] DUMMY_STATE */) + (-0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1788]] /* front.cornerR.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) + (0.33999999999999997) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* front.cornerR.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */));
  TRACE_POP
}
extern void Heave_eqFunction_6710(DATA *data, threadData_t *threadData);


/*
equation index: 3041
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.r_a[1] = points[2,5,1] - front.cornerR.springArm.frame_a.r_0[1]
*/
void Heave_eqFunction_3041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3041};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1917]] /* front.cornerR.jointUSR.revolute.r_a[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2875]] /* points[2,5,1] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2099]] /* front.cornerR.springArm.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void Heave_eqFunction_6712(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6713(DATA *data, threadData_t *threadData);


/*
equation index: 3044
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_a.R.T[2,2] = front.cornerR.ucaPivot.e[2] ^ 2.0 + (1.0 - front.cornerR.ucaPivot.e[2] ^ 2.0) * cos(front.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3044};
  modelica_real tmp59;
  modelica_real tmp60;
  tmp59 = (data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */);
  tmp60 = (data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* front.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */) = (tmp59 * tmp59) + (1.0 - ((tmp60 * tmp60))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)));
  TRACE_POP
}
extern void Heave_eqFunction_6703(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6704(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6705(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6706(DATA *data, threadData_t *threadData);


/*
equation index: 3049
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_a.R.T[2,3] = (front.cornerR.ucaPivot.e[2] - front.cornerR.ucaPivot.e[2] * cos(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.e[3] + front.cornerR.ucaPivot.e[1] * sin(front.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3049};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* front.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */)) + ((data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)));
  TRACE_POP
}
extern void Heave_eqFunction_6715(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6716(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6719(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6718(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6720(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6760(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6761(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6762(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6763(DATA *data, threadData_t *threadData);


/*
equation index: 3059
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_a.R.T[3,1] = (front.cornerR.ucaPivot.e[3] - front.cornerR.ucaPivot.e[3] * cos(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.e[1] + front.cornerR.ucaPivot.e[2] * sin(front.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3059};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1794]] /* front.cornerR.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */)) + ((data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3060
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_a.R.T[3,2] = (front.cornerR.ucaPivot.e[3] - front.cornerR.ucaPivot.e[3] * cos(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.e[2] - front.cornerR.ucaPivot.e[1] * sin(front.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3060};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* front.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */)) - (((data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 3061
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_a.R.T[3,3] = front.cornerR.ucaPivot.e[3] ^ 2.0 + (1.0 - front.cornerR.ucaPivot.e[3] ^ 2.0) * cos(front.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3061};
  modelica_real tmp61;
  modelica_real tmp62;
  tmp61 = (data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */);
  tmp62 = (data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* front.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */) = (tmp61 * tmp61) + (1.0 - ((tmp62 * tmp62))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3062
type: SIMPLE_ASSIGN
front.cornerR.ucaPivot.w = $START.front.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3062};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */) = (data->modelData->realVarsData[3] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */).attribute .start;
  TRACE_POP
}

/*
equation index: 3063
type: SIMPLE_ASSIGN
front.cornerR.ucaPivot.R_rel.w[1] = front.cornerR.ucaPivot.e[1] * front.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3063};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2395]] /* front.cornerR.ucaPivot.R_rel.w[1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */));
  TRACE_POP
}

/*
equation index: 3064
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_a.R.w[1] = front.cornerR.ucaPivot.R_rel.w[1]
*/
void Heave_eqFunction_3064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3064};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* front.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2395]] /* front.cornerR.ucaPivot.R_rel.w[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3065
type: SIMPLE_ASSIGN
front.cornerR.ucaPivot.R_rel.w[2] = front.cornerR.ucaPivot.e[2] * front.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3065};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2396]] /* front.cornerR.ucaPivot.R_rel.w[2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */));
  TRACE_POP
}

/*
equation index: 3066
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_a.R.w[2] = front.cornerR.ucaPivot.R_rel.w[2]
*/
void Heave_eqFunction_3066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3066};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* front.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2396]] /* front.cornerR.ucaPivot.R_rel.w[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3067
type: SIMPLE_ASSIGN
front.cornerR.ucaPivot.R_rel.w[3] = front.cornerR.ucaPivot.e[3] * front.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3067};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2397]] /* front.cornerR.ucaPivot.R_rel.w[3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */));
  TRACE_POP
}

/*
equation index: 3068
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_a.R.w[3] = front.cornerR.ucaPivot.R_rel.w[3]
*/
void Heave_eqFunction_3068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3068};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1799]] /* front.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2397]] /* front.cornerR.ucaPivot.R_rel.w[3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3069
type: SIMPLE_ASSIGN
$DER.points[2,5,1] = $DER.front.cornerR.uca.frame_a.r_0[1] + (-0.33999999999999997) * front.cornerR.jointUSR.frame_a.R.T[1,1] * front.cornerR.jointUSR.frame_a.R.w[3] + (-0.02) * front.cornerR.jointUSR.frame_a.R.T[2,1] * front.cornerR.jointUSR.frame_a.R.w[3] + front.cornerR.jointUSR.frame_a.R.T[3,1] * (0.33999999999999997 * front.cornerR.jointUSR.frame_a.R.w[1] + 0.02 * front.cornerR.jointUSR.frame_a.R.w[2])
*/
void Heave_eqFunction_3069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3069};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* der(points[2,5,1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[485]] /* der(front.cornerR.uca.frame_a.r_0[1]) DUMMY_DER */) + (-0.33999999999999997) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1788]] /* front.cornerR.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1799]] /* front.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + (-0.02) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1791]] /* front.cornerR.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1799]] /* front.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1794]] /* front.cornerR.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((0.33999999999999997) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* front.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* front.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3070
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.rod1.rRod_0[1] = $DER.front.cornerR.jointUSR.frame_im.r_0[1] - $DER.points[2,5,1]
*/
void Heave_eqFunction_3070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3070};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* der(front.cornerR.jointUSR.rod1.rRod_0[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[395]] /* der(front.cornerR.jointUSR.frame_im.r_0[1]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* der(points[2,5,1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3071
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.revolute.r_a[1] = $DER.points[2,5,1] - $DER.front.cornerR.springArm.frame_a.r_0[1]
*/
void Heave_eqFunction_3071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3071};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* der(front.cornerR.jointUSR.revolute.r_a[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[530]] /* der(points[2,5,1]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[451]] /* der(front.cornerR.springArm.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3072
type: SIMPLE_ASSIGN
$DER.points[2,5,2] = $DER.front.cornerR.uca.frame_a.r_0[2] + (-0.33999999999999997) * front.cornerR.jointUSR.frame_a.R.T[1,2] * front.cornerR.jointUSR.frame_a.R.w[3] + (-0.02) * front.cornerR.jointUSR.frame_a.R.T[2,2] * front.cornerR.jointUSR.frame_a.R.w[3] + front.cornerR.jointUSR.frame_a.R.T[3,2] * (0.33999999999999997 * front.cornerR.jointUSR.frame_a.R.w[1] + 0.02 * front.cornerR.jointUSR.frame_a.R.w[2])
*/
void Heave_eqFunction_3072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3072};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* der(points[2,5,2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[486]] /* der(front.cornerR.uca.frame_a.r_0[2]) DUMMY_DER */) + (-0.33999999999999997) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1789]] /* front.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1799]] /* front.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + (-0.02) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1792]] /* front.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1799]] /* front.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1795]] /* front.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((0.33999999999999997) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* front.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* front.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3073
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.revolute.r_a[2] = $DER.points[2,5,2] - $DER.front.cornerR.springArm.frame_a.r_0[2]
*/
void Heave_eqFunction_3073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3073};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* der(front.cornerR.jointUSR.revolute.r_a[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[531]] /* der(points[2,5,2]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[452]] /* der(front.cornerR.springArm.frame_a.r_0[2]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3074
type: SIMPLE_ASSIGN
$DER.points[2,5,3] = $DER.front.cornerR.uca.frame_a.r_0[3] + (-0.33999999999999997) * front.cornerR.jointUSR.frame_a.R.T[1,3] * front.cornerR.jointUSR.frame_a.R.w[3] + (-0.02) * front.cornerR.jointUSR.frame_a.R.T[2,3] * front.cornerR.jointUSR.frame_a.R.w[3] + front.cornerR.jointUSR.frame_a.R.T[3,3] * (0.33999999999999997 * front.cornerR.jointUSR.frame_a.R.w[1] + 0.02 * front.cornerR.jointUSR.frame_a.R.w[2])
*/
void Heave_eqFunction_3074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3074};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* der(points[2,5,3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[487]] /* der(front.cornerR.uca.frame_a.r_0[3]) DUMMY_DER */) + (-0.33999999999999997) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1790]] /* front.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1799]] /* front.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + (-0.02) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1793]] /* front.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1799]] /* front.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1796]] /* front.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((0.33999999999999997) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1797]] /* front.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1798]] /* front.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3075
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.revolute.r_a[3] = $DER.points[2,5,3] - $DER.front.cornerR.springArm.frame_a.r_0[3]
*/
void Heave_eqFunction_3075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3075};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* der(front.cornerR.jointUSR.revolute.r_a[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[532]] /* der(points[2,5,3]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[453]] /* der(front.cornerR.springArm.frame_a.r_0[3]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3076
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.revolute.A = (-2.0) * (front.cornerR.jointUSR.revolute.r_b[1] * $DER.front.cornerR.jointUSR.revolute.r_a[1] + front.cornerR.jointUSR.revolute.r_b[2] * $DER.front.cornerR.jointUSR.revolute.r_a[2] + front.cornerR.jointUSR.revolute.r_b[3] * $DER.front.cornerR.jointUSR.revolute.r_a[3] + (-0.02) * $DER.front.cornerR.jointUSR.revolute.r_a[1])
*/
void Heave_eqFunction_3076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3076};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[398]] /* der(front.cornerR.jointUSR.revolute.A) DUMMY_DER */) = (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1920]] /* front.cornerR.jointUSR.revolute.r_b[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* der(front.cornerR.jointUSR.revolute.r_a[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1921]] /* front.cornerR.jointUSR.revolute.r_b[2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* der(front.cornerR.jointUSR.revolute.r_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* front.cornerR.jointUSR.revolute.r_b[3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* der(front.cornerR.jointUSR.revolute.r_a[3]) DUMMY_DER */)) + (-0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* der(front.cornerR.jointUSR.revolute.r_a[1]) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3077
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.revolute.B = 2.0 * (front.cornerR.jointUSR.revolute.r_b[2] * $DER.front.cornerR.jointUSR.revolute.r_a[3] - front.cornerR.jointUSR.revolute.r_b[3] * $DER.front.cornerR.jointUSR.revolute.r_a[2])
*/
void Heave_eqFunction_3077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3077};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* der(front.cornerR.jointUSR.revolute.B) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1921]] /* front.cornerR.jointUSR.revolute.r_b[2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* der(front.cornerR.jointUSR.revolute.r_a[3]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* front.cornerR.jointUSR.revolute.r_b[3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* der(front.cornerR.jointUSR.revolute.r_a[2]) DUMMY_DER */))));
  TRACE_POP
}
extern void Heave_eqFunction_6777(DATA *data, threadData_t *threadData);


/*
equation index: 3079
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.revolute.C = 2.0 * front.cornerR.jointUSR.revolute.r_a[1] * $DER.front.cornerR.jointUSR.revolute.r_a[1] + 2.0 * front.cornerR.jointUSR.revolute.r_a[2] * $DER.front.cornerR.jointUSR.revolute.r_a[2] + 2.0 * front.cornerR.jointUSR.revolute.r_a[3] * $DER.front.cornerR.jointUSR.revolute.r_a[3] + (-0.04) * $DER.front.cornerR.jointUSR.revolute.r_a[1]
*/
void Heave_eqFunction_3079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3079};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* der(front.cornerR.jointUSR.revolute.C) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1917]] /* front.cornerR.jointUSR.revolute.r_a[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* der(front.cornerR.jointUSR.revolute.r_a[1]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1918]] /* front.cornerR.jointUSR.revolute.r_a[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* der(front.cornerR.jointUSR.revolute.r_a[2]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1919]] /* front.cornerR.jointUSR.revolute.r_a[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* der(front.cornerR.jointUSR.revolute.r_a[3]) DUMMY_DER */))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* der(front.cornerR.jointUSR.revolute.r_a[1]) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_6606(DATA *data, threadData_t *threadData);


/*
equation index: 3081
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.frame_a.R.T[1,1] = (1.0 - front.cornerR.ucaPivot.e[1] ^ 2.0) * (-sin(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3081};
  modelica_real tmp63;
  tmp63 = (data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* der(front.cornerR.jointUSR.frame_a.R.T[1,1]) DUMMY_DER */) = (1.0 - ((tmp63 * tmp63))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 3082
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.frame_a.R.T[1,2] = front.cornerR.ucaPivot.e[3] * cos(front.cornerR.ucaPivot.phi) * front.cornerR.ucaPivot.w - front.cornerR.ucaPivot.e[1] * (-sin(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.w * front.cornerR.ucaPivot.e[2]
*/
void Heave_eqFunction_3082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* der(front.cornerR.jointUSR.frame_a.R.T[1,2]) DUMMY_DER */) = ((data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */)))));
  TRACE_POP
}

/*
equation index: 3083
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.frame_a.R.T[1,3] = (-front.cornerR.ucaPivot.e[1]) * (-sin(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.w * front.cornerR.ucaPivot.e[3] - front.cornerR.ucaPivot.e[2] * cos(front.cornerR.ucaPivot.phi) * front.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3083};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* der(front.cornerR.jointUSR.frame_a.R.T[1,3]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */)))) - (((data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 3084
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.frame_a.R.T[2,1] = (-front.cornerR.ucaPivot.e[2]) * (-sin(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.w * front.cornerR.ucaPivot.e[1] - front.cornerR.ucaPivot.e[3] * cos(front.cornerR.ucaPivot.phi) * front.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3084};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* der(front.cornerR.jointUSR.frame_a.R.T[2,1]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */)))) - (((data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 3085
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.frame_a.R.T[2,2] = (1.0 - front.cornerR.ucaPivot.e[2] ^ 2.0) * (-sin(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3085};
  modelica_real tmp64;
  tmp64 = (data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* der(front.cornerR.jointUSR.frame_a.R.T[2,2]) DUMMY_DER */) = (1.0 - ((tmp64 * tmp64))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 3086
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.frame_a.R.T[2,3] = front.cornerR.ucaPivot.e[1] * cos(front.cornerR.ucaPivot.phi) * front.cornerR.ucaPivot.w - front.cornerR.ucaPivot.e[2] * (-sin(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.w * front.cornerR.ucaPivot.e[3]
*/
void Heave_eqFunction_3086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3086};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* der(front.cornerR.jointUSR.frame_a.R.T[2,3]) DUMMY_DER */) = ((data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */)))));
  TRACE_POP
}

/*
equation index: 3087
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.frame_a.R.T[3,1] = front.cornerR.ucaPivot.e[2] * cos(front.cornerR.ucaPivot.phi) * front.cornerR.ucaPivot.w - front.cornerR.ucaPivot.e[3] * (-sin(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.w * front.cornerR.ucaPivot.e[1]
*/
void Heave_eqFunction_3087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3087};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[377]] /* der(front.cornerR.jointUSR.frame_a.R.T[3,1]) DUMMY_DER */) = ((data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */)))));
  TRACE_POP
}

/*
equation index: 3088
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.frame_a.R.T[3,2] = (-front.cornerR.ucaPivot.e[3]) * (-sin(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.w * front.cornerR.ucaPivot.e[2] - front.cornerR.ucaPivot.e[1] * cos(front.cornerR.ucaPivot.phi) * front.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3088};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* der(front.cornerR.jointUSR.frame_a.R.T[3,2]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[1278] /* front.cornerR.ucaPivot.e[2] PARAM */)))) - (((data->simulationInfo->realParameter[1277] /* front.cornerR.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 3089
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.frame_a.R.T[3,3] = (1.0 - front.cornerR.ucaPivot.e[3] ^ 2.0) * (-sin(front.cornerR.ucaPivot.phi)) * front.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3089};
  modelica_real tmp65;
  tmp65 = (data->simulationInfo->realParameter[1279] /* front.cornerR.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* der(front.cornerR.jointUSR.frame_a.R.T[3,3]) DUMMY_DER */) = (1.0 - ((tmp65 * tmp65))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* front.cornerR.ucaPivot.phi STATE(1,front.cornerR.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* front.cornerR.ucaPivot.w STATE(1,front.cornerR.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 3090
type: SIMPLE_ASSIGN
front.cornerL.ucaPivot.phi = $START.front.cornerL.ucaPivot.phi
*/
void Heave_eqFunction_3090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3090};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */) = (data->modelData->realVarsData[0] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */).attribute .start;
  TRACE_POP
}

/*
equation index: 3091
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_a.R.T[1,1] = front.cornerL.ucaPivot.e[1] ^ 2.0 + (1.0 - front.cornerL.ucaPivot.e[1] ^ 2.0) * cos(front.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3091};
  modelica_real tmp66;
  modelica_real tmp67;
  tmp66 = (data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */);
  tmp67 = (data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* front.cornerL.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */) = (tmp66 * tmp66) + (1.0 - ((tmp67 * tmp67))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3092
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_a.R.T[1,2] = (front.cornerL.ucaPivot.e[1] - front.cornerL.ucaPivot.e[1] * cos(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.e[2] + front.cornerL.ucaPivot.e[3] * sin(front.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3092};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* front.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */)) + ((data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3093
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_a.R.T[1,3] = (front.cornerL.ucaPivot.e[1] - front.cornerL.ucaPivot.e[1] * cos(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.e[3] - front.cornerL.ucaPivot.e[2] * sin(front.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3093};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* front.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */)) - (((data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 3094
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_a.R.T[2,1] = (front.cornerL.ucaPivot.e[2] - front.cornerL.ucaPivot.e[2] * cos(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.e[1] - front.cornerL.ucaPivot.e[3] * sin(front.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3094};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* front.cornerL.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */)) - (((data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 3095
type: SIMPLE_ASSIGN
points[1,5,1] = front.cornerL.uca.frame_a.r_0[1] + (-0.02) * front.cornerL.jointUSR.frame_a.R.T[1,1] + (-0.33999999999999997) * front.cornerL.jointUSR.frame_a.R.T[2,1]
*/
void Heave_eqFunction_3095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3095};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* points[1,5,1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1533]] /* front.cornerL.uca.frame_a.r_0[1] DUMMY_STATE */) + (-0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* front.cornerL.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) + (-0.33999999999999997) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* front.cornerL.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */));
  TRACE_POP
}
extern void Heave_eqFunction_6922(DATA *data, threadData_t *threadData);


/*
equation index: 3097
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.revolute.r_a[1] = points[1,5,1] - front.cornerL.springArm.frame_a.r_0[1]
*/
void Heave_eqFunction_3097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3097};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* front.cornerL.jointUSR.revolute.r_a[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2833]] /* points[1,5,1] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* front.cornerL.springArm.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void Heave_eqFunction_6924(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6925(DATA *data, threadData_t *threadData);


/*
equation index: 3100
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_a.R.T[2,2] = front.cornerL.ucaPivot.e[2] ^ 2.0 + (1.0 - front.cornerL.ucaPivot.e[2] ^ 2.0) * cos(front.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3100};
  modelica_real tmp68;
  modelica_real tmp69;
  tmp68 = (data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */);
  tmp69 = (data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* front.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */) = (tmp68 * tmp68) + (1.0 - ((tmp69 * tmp69))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)));
  TRACE_POP
}
extern void Heave_eqFunction_6915(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6916(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6917(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6918(DATA *data, threadData_t *threadData);


/*
equation index: 3105
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_a.R.T[2,3] = (front.cornerL.ucaPivot.e[2] - front.cornerL.ucaPivot.e[2] * cos(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.e[3] + front.cornerL.ucaPivot.e[1] * sin(front.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3105};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* front.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */)) + ((data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)));
  TRACE_POP
}
extern void Heave_eqFunction_6927(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6928(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6931(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6930(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6932(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6972(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6973(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6974(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_6975(DATA *data, threadData_t *threadData);


/*
equation index: 3115
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_a.R.T[3,1] = (front.cornerL.ucaPivot.e[3] - front.cornerL.ucaPivot.e[3] * cos(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.e[1] + front.cornerL.ucaPivot.e[2] * sin(front.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3115};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* front.cornerL.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */)) + ((data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3116
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_a.R.T[3,2] = (front.cornerL.ucaPivot.e[3] - front.cornerL.ucaPivot.e[3] * cos(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.e[2] - front.cornerL.ucaPivot.e[1] * sin(front.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* front.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */)) - (((data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 3117
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_a.R.T[3,3] = front.cornerL.ucaPivot.e[3] ^ 2.0 + (1.0 - front.cornerL.ucaPivot.e[3] ^ 2.0) * cos(front.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3117};
  modelica_real tmp70;
  modelica_real tmp71;
  tmp70 = (data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */);
  tmp71 = (data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* front.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */) = (tmp70 * tmp70) + (1.0 - ((tmp71 * tmp71))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3118
type: SIMPLE_ASSIGN
front.cornerL.ucaPivot.w = $START.front.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3118};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */) = (data->modelData->realVarsData[1] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */).attribute .start;
  TRACE_POP
}

/*
equation index: 3119
type: SIMPLE_ASSIGN
front.cornerL.ucaPivot.R_rel.w[1] = front.cornerL.ucaPivot.e[1] * front.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3119};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1570]] /* front.cornerL.ucaPivot.R_rel.w[1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */));
  TRACE_POP
}

/*
equation index: 3120
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_a.R.w[1] = front.cornerL.ucaPivot.R_rel.w[1]
*/
void Heave_eqFunction_3120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3120};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* front.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1570]] /* front.cornerL.ucaPivot.R_rel.w[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3121
type: SIMPLE_ASSIGN
front.cornerL.ucaPivot.R_rel.w[2] = front.cornerL.ucaPivot.e[2] * front.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3121};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1571]] /* front.cornerL.ucaPivot.R_rel.w[2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */));
  TRACE_POP
}

/*
equation index: 3122
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_a.R.w[2] = front.cornerL.ucaPivot.R_rel.w[2]
*/
void Heave_eqFunction_3122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* front.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1571]] /* front.cornerL.ucaPivot.R_rel.w[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3123
type: SIMPLE_ASSIGN
front.cornerL.ucaPivot.R_rel.w[3] = front.cornerL.ucaPivot.e[3] * front.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1572]] /* front.cornerL.ucaPivot.R_rel.w[3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */));
  TRACE_POP
}

/*
equation index: 3124
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_a.R.w[3] = front.cornerL.ucaPivot.R_rel.w[3]
*/
void Heave_eqFunction_3124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3124};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* front.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1572]] /* front.cornerL.ucaPivot.R_rel.w[3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3125
type: SIMPLE_ASSIGN
$DER.points[1,5,1] = $DER.front.cornerL.uca.frame_a.r_0[1] + 0.33999999999999997 * front.cornerL.jointUSR.frame_a.R.T[1,1] * front.cornerL.jointUSR.frame_a.R.w[3] + (-0.02) * front.cornerL.jointUSR.frame_a.R.T[2,1] * front.cornerL.jointUSR.frame_a.R.w[3] + front.cornerL.jointUSR.frame_a.R.T[3,1] * ((-0.33999999999999997) * front.cornerL.jointUSR.frame_a.R.w[1] + 0.02 * front.cornerL.jointUSR.frame_a.R.w[2])
*/
void Heave_eqFunction_3125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3125};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[518]] /* der(points[1,5,1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* der(front.cornerL.uca.frame_a.r_0[1]) DUMMY_DER */) + (0.33999999999999997) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[963]] /* front.cornerL.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* front.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + (-0.02) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[966]] /* front.cornerL.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* front.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[969]] /* front.cornerL.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((-0.33999999999999997) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* front.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* front.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3126
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.rod1.rRod_0[1] = $DER.front.cornerL.jointUSR.frame_im.r_0[1] - $DER.points[1,5,1]
*/
void Heave_eqFunction_3126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3126};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* der(front.cornerL.jointUSR.rod1.rRod_0[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* der(front.cornerL.jointUSR.frame_im.r_0[1]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[518]] /* der(points[1,5,1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3127
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.revolute.r_a[1] = $DER.points[1,5,1] - $DER.front.cornerL.springArm.frame_a.r_0[1]
*/
void Heave_eqFunction_3127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3127};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* der(front.cornerL.jointUSR.revolute.r_a[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[518]] /* der(points[1,5,1]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* der(front.cornerL.springArm.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3128
type: SIMPLE_ASSIGN
$DER.points[1,5,2] = $DER.front.cornerL.uca.frame_a.r_0[2] + 0.33999999999999997 * front.cornerL.jointUSR.frame_a.R.T[1,2] * front.cornerL.jointUSR.frame_a.R.w[3] + (-0.02) * front.cornerL.jointUSR.frame_a.R.T[2,2] * front.cornerL.jointUSR.frame_a.R.w[3] + front.cornerL.jointUSR.frame_a.R.T[3,2] * ((-0.33999999999999997) * front.cornerL.jointUSR.frame_a.R.w[1] + 0.02 * front.cornerL.jointUSR.frame_a.R.w[2])
*/
void Heave_eqFunction_3128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* der(points[1,5,2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* der(front.cornerL.uca.frame_a.r_0[2]) DUMMY_DER */) + (0.33999999999999997) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[964]] /* front.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* front.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + (-0.02) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[967]] /* front.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* front.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[970]] /* front.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((-0.33999999999999997) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* front.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* front.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3129
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.revolute.r_a[2] = $DER.points[1,5,2] - $DER.front.cornerL.springArm.frame_a.r_0[2]
*/
void Heave_eqFunction_3129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3129};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* der(front.cornerL.jointUSR.revolute.r_a[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[519]] /* der(points[1,5,2]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* der(front.cornerL.springArm.frame_a.r_0[2]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3130
type: SIMPLE_ASSIGN
$DER.points[1,5,3] = $DER.front.cornerL.uca.frame_a.r_0[3] + 0.33999999999999997 * front.cornerL.jointUSR.frame_a.R.T[1,3] * front.cornerL.jointUSR.frame_a.R.w[3] + (-0.02) * front.cornerL.jointUSR.frame_a.R.T[2,3] * front.cornerL.jointUSR.frame_a.R.w[3] + front.cornerL.jointUSR.frame_a.R.T[3,3] * ((-0.33999999999999997) * front.cornerL.jointUSR.frame_a.R.w[1] + 0.02 * front.cornerL.jointUSR.frame_a.R.w[2])
*/
void Heave_eqFunction_3130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3130};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* der(points[1,5,3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* der(front.cornerL.uca.frame_a.r_0[3]) DUMMY_DER */) + (0.33999999999999997) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[965]] /* front.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* front.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + (-0.02) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[968]] /* front.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[974]] /* front.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[971]] /* front.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((-0.33999999999999997) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[972]] /* front.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) + (0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[973]] /* front.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3131
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.revolute.r_a[3] = $DER.points[1,5,3] - $DER.front.cornerL.springArm.frame_a.r_0[3]
*/
void Heave_eqFunction_3131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3131};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* der(front.cornerL.jointUSR.revolute.r_a[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[520]] /* der(points[1,5,3]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* der(front.cornerL.springArm.frame_a.r_0[3]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3132
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.revolute.A = (-2.0) * (front.cornerL.jointUSR.revolute.r_b[1] * $DER.front.cornerL.jointUSR.revolute.r_a[1] + front.cornerL.jointUSR.revolute.r_b[2] * $DER.front.cornerL.jointUSR.revolute.r_a[2] + front.cornerL.jointUSR.revolute.r_b[3] * $DER.front.cornerL.jointUSR.revolute.r_a[3] + (-0.02) * $DER.front.cornerL.jointUSR.revolute.r_a[1])
*/
void Heave_eqFunction_3132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3132};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* der(front.cornerL.jointUSR.revolute.A) DUMMY_DER */) = (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* front.cornerL.jointUSR.revolute.r_b[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* der(front.cornerL.jointUSR.revolute.r_a[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* front.cornerL.jointUSR.revolute.r_b[2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* der(front.cornerL.jointUSR.revolute.r_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* front.cornerL.jointUSR.revolute.r_b[3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* der(front.cornerL.jointUSR.revolute.r_a[3]) DUMMY_DER */)) + (-0.02) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* der(front.cornerL.jointUSR.revolute.r_a[1]) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3133
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.revolute.B = 2.0 * (front.cornerL.jointUSR.revolute.r_b[2] * $DER.front.cornerL.jointUSR.revolute.r_a[3] - front.cornerL.jointUSR.revolute.r_b[3] * $DER.front.cornerL.jointUSR.revolute.r_a[2])
*/
void Heave_eqFunction_3133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3133};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* der(front.cornerL.jointUSR.revolute.B) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* front.cornerL.jointUSR.revolute.r_b[2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* der(front.cornerL.jointUSR.revolute.r_a[3]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* front.cornerL.jointUSR.revolute.r_b[3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* der(front.cornerL.jointUSR.revolute.r_a[2]) DUMMY_DER */))));
  TRACE_POP
}
extern void Heave_eqFunction_6989(DATA *data, threadData_t *threadData);


/*
equation index: 3135
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.revolute.C = 2.0 * front.cornerL.jointUSR.revolute.r_a[1] * $DER.front.cornerL.jointUSR.revolute.r_a[1] + 2.0 * front.cornerL.jointUSR.revolute.r_a[2] * $DER.front.cornerL.jointUSR.revolute.r_a[2] + 2.0 * front.cornerL.jointUSR.revolute.r_a[3] * $DER.front.cornerL.jointUSR.revolute.r_a[3] + (-0.04) * $DER.front.cornerL.jointUSR.revolute.r_a[1]
*/
void Heave_eqFunction_3135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3135};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* der(front.cornerL.jointUSR.revolute.C) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1092]] /* front.cornerL.jointUSR.revolute.r_a[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* der(front.cornerL.jointUSR.revolute.r_a[1]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1093]] /* front.cornerL.jointUSR.revolute.r_a[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* der(front.cornerL.jointUSR.revolute.r_a[2]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1094]] /* front.cornerL.jointUSR.revolute.r_a[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* der(front.cornerL.jointUSR.revolute.r_a[3]) DUMMY_DER */))) + (-0.04) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* der(front.cornerL.jointUSR.revolute.r_a[1]) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_6600(DATA *data, threadData_t *threadData);


/*
equation index: 3137
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.frame_a.R.T[1,1] = (1.0 - front.cornerL.ucaPivot.e[1] ^ 2.0) * (-sin(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3137};
  modelica_real tmp72;
  tmp72 = (data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* der(front.cornerL.jointUSR.frame_a.R.T[1,1]) DUMMY_DER */) = (1.0 - ((tmp72 * tmp72))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 3138
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.frame_a.R.T[1,2] = front.cornerL.ucaPivot.e[3] * cos(front.cornerL.ucaPivot.phi) * front.cornerL.ucaPivot.w - front.cornerL.ucaPivot.e[1] * (-sin(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.w * front.cornerL.ucaPivot.e[2]
*/
void Heave_eqFunction_3138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3138};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* der(front.cornerL.jointUSR.frame_a.R.T[1,2]) DUMMY_DER */) = ((data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */)))));
  TRACE_POP
}

/*
equation index: 3139
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.frame_a.R.T[1,3] = (-front.cornerL.ucaPivot.e[1]) * (-sin(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.w * front.cornerL.ucaPivot.e[3] - front.cornerL.ucaPivot.e[2] * cos(front.cornerL.ucaPivot.phi) * front.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3139};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* der(front.cornerL.jointUSR.frame_a.R.T[1,3]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */)))) - (((data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 3140
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.frame_a.R.T[2,1] = (-front.cornerL.ucaPivot.e[2]) * (-sin(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.w * front.cornerL.ucaPivot.e[1] - front.cornerL.ucaPivot.e[3] * cos(front.cornerL.ucaPivot.phi) * front.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3140};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* der(front.cornerL.jointUSR.frame_a.R.T[2,1]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */)))) - (((data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 3141
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.frame_a.R.T[2,2] = (1.0 - front.cornerL.ucaPivot.e[2] ^ 2.0) * (-sin(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3141};
  modelica_real tmp73;
  tmp73 = (data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[232]] /* der(front.cornerL.jointUSR.frame_a.R.T[2,2]) DUMMY_DER */) = (1.0 - ((tmp73 * tmp73))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 3142
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.frame_a.R.T[2,3] = front.cornerL.ucaPivot.e[1] * cos(front.cornerL.ucaPivot.phi) * front.cornerL.ucaPivot.w - front.cornerL.ucaPivot.e[2] * (-sin(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.w * front.cornerL.ucaPivot.e[3]
*/
void Heave_eqFunction_3142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3142};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* der(front.cornerL.jointUSR.frame_a.R.T[2,3]) DUMMY_DER */) = ((data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */)))));
  TRACE_POP
}

/*
equation index: 3143
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.frame_a.R.T[3,1] = front.cornerL.ucaPivot.e[2] * cos(front.cornerL.ucaPivot.phi) * front.cornerL.ucaPivot.w - front.cornerL.ucaPivot.e[3] * (-sin(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.w * front.cornerL.ucaPivot.e[1]
*/
void Heave_eqFunction_3143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3143};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* der(front.cornerL.jointUSR.frame_a.R.T[3,1]) DUMMY_DER */) = ((data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */)))));
  TRACE_POP
}

/*
equation index: 3144
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.frame_a.R.T[3,2] = (-front.cornerL.ucaPivot.e[3]) * (-sin(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.w * front.cornerL.ucaPivot.e[2] - front.cornerL.ucaPivot.e[1] * cos(front.cornerL.ucaPivot.phi) * front.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* der(front.cornerL.jointUSR.frame_a.R.T[3,2]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[572] /* front.cornerL.ucaPivot.e[2] PARAM */)))) - (((data->simulationInfo->realParameter[571] /* front.cornerL.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 3145
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.frame_a.R.T[3,3] = (1.0 - front.cornerL.ucaPivot.e[3] ^ 2.0) * (-sin(front.cornerL.ucaPivot.phi)) * front.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3145};
  modelica_real tmp74;
  tmp74 = (data->simulationInfo->realParameter[573] /* front.cornerL.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* der(front.cornerL.jointUSR.frame_a.R.T[3,3]) DUMMY_DER */) = (1.0 - ((tmp74 * tmp74))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* front.cornerL.ucaPivot.phi STATE(1,front.cornerL.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* front.cornerL.ucaPivot.w STATE(1,front.cornerL.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 3146
type: SIMPLE_ASSIGN
rear.cornerR.ucaPivot.phi = $START.rear.cornerR.ucaPivot.phi
*/
void Heave_eqFunction_3146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */) = (data->modelData->realVarsData[6] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */).attribute .start;
  TRACE_POP
}

/*
equation index: 3147
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_a.R.T[1,1] = rear.cornerR.ucaPivot.e[1] ^ 2.0 + (1.0 - rear.cornerR.ucaPivot.e[1] ^ 2.0) * cos(rear.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3147};
  modelica_real tmp75;
  modelica_real tmp76;
  tmp75 = (data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */);
  tmp76 = (data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3892]] /* rear.cornerR.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */) = (tmp75 * tmp75) + (1.0 - ((tmp76 * tmp76))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3148
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_a.R.T[1,2] = (rear.cornerR.ucaPivot.e[1] - rear.cornerR.ucaPivot.e[1] * cos(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.e[2] + rear.cornerR.ucaPivot.e[3] * sin(rear.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3893]] /* rear.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */)) + ((data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3149
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_a.R.T[1,3] = (rear.cornerR.ucaPivot.e[1] - rear.cornerR.ucaPivot.e[1] * cos(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.e[3] - rear.cornerR.ucaPivot.e[2] * sin(rear.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3149};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* rear.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */)) - (((data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 3150
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_a.R.T[2,1] = (rear.cornerR.ucaPivot.e[2] - rear.cornerR.ucaPivot.e[2] * cos(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.e[1] - rear.cornerR.ucaPivot.e[3] * sin(rear.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3150};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3895]] /* rear.cornerR.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */)) - (((data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 3151
type: SIMPLE_ASSIGN
points[4,5,1] = rear.cornerR.uca.frame_a.r_0[1] + 0.4 * rear.cornerR.jointUSR.frame_a.R.T[2,1]
*/
void Heave_eqFunction_3151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3151};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2959]] /* points[4,5,1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4462]] /* rear.cornerR.uca.frame_a.r_0[1] DUMMY_STATE */) + (0.4) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3895]] /* rear.cornerR.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3152
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.rRod_0[1] = rear.cornerR.jointUSR.frame_im.r_0[1] - points[4,5,1]
*/
void Heave_eqFunction_3152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4077]] /* rear.cornerR.jointUSR.rod1.rRod_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3930]] /* rear.cornerR.jointUSR.frame_im.r_0[1] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2959]] /* points[4,5,1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3153
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.revolute.r_a[1] = points[4,5,1] - rear.cornerR.springArm.frame_a.r_0[1]
*/
void Heave_eqFunction_3153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4019]] /* rear.cornerR.jointUSR.revolute.r_a[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2959]] /* points[4,5,1] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4201]] /* rear.cornerR.springArm.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void Heave_eqFunction_7138(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7139(DATA *data, threadData_t *threadData);


/*
equation index: 3156
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_a.R.T[2,2] = rear.cornerR.ucaPivot.e[2] ^ 2.0 + (1.0 - rear.cornerR.ucaPivot.e[2] ^ 2.0) * cos(rear.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3156};
  modelica_real tmp77;
  modelica_real tmp78;
  tmp77 = (data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */);
  tmp78 = (data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3896]] /* rear.cornerR.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */) = (tmp77 * tmp77) + (1.0 - ((tmp78 * tmp78))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)));
  TRACE_POP
}
extern void Heave_eqFunction_7124(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7125(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7126(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7127(DATA *data, threadData_t *threadData);


/*
equation index: 3161
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_a.R.T[2,3] = (rear.cornerR.ucaPivot.e[2] - rear.cornerR.ucaPivot.e[2] * cos(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.e[3] + rear.cornerR.ucaPivot.e[1] * sin(rear.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3897]] /* rear.cornerR.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */)) + ((data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)));
  TRACE_POP
}
extern void Heave_eqFunction_7141(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7142(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7145(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7144(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7146(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7186(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7187(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7188(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7189(DATA *data, threadData_t *threadData);


/*
equation index: 3171
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_a.R.T[3,1] = (rear.cornerR.ucaPivot.e[3] - rear.cornerR.ucaPivot.e[3] * cos(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.e[1] + rear.cornerR.ucaPivot.e[2] * sin(rear.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3171};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3898]] /* rear.cornerR.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */)) + ((data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3172
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_a.R.T[3,2] = (rear.cornerR.ucaPivot.e[3] - rear.cornerR.ucaPivot.e[3] * cos(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.e[2] - rear.cornerR.ucaPivot.e[1] * sin(rear.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3172};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* rear.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */)) - (((data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 3173
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_a.R.T[3,3] = rear.cornerR.ucaPivot.e[3] ^ 2.0 + (1.0 - rear.cornerR.ucaPivot.e[3] ^ 2.0) * cos(rear.cornerR.ucaPivot.phi)
*/
void Heave_eqFunction_3173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3173};
  modelica_real tmp79;
  modelica_real tmp80;
  tmp79 = (data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */);
  tmp80 = (data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* rear.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */) = (tmp79 * tmp79) + (1.0 - ((tmp80 * tmp80))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3174
type: SIMPLE_ASSIGN
rear.cornerR.ucaPivot.w = $START.rear.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3174};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */) = (data->modelData->realVarsData[7] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */).attribute .start;
  TRACE_POP
}

/*
equation index: 3175
type: SIMPLE_ASSIGN
rear.cornerR.ucaPivot.R_rel.w[1] = rear.cornerR.ucaPivot.e[1] * rear.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3175};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4499]] /* rear.cornerR.ucaPivot.R_rel.w[1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */));
  TRACE_POP
}

/*
equation index: 3176
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_a.R.w[1] = rear.cornerR.ucaPivot.R_rel.w[1]
*/
void Heave_eqFunction_3176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3176};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3901]] /* rear.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4499]] /* rear.cornerR.ucaPivot.R_rel.w[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3177
type: SIMPLE_ASSIGN
rear.cornerR.ucaPivot.R_rel.w[2] = rear.cornerR.ucaPivot.e[2] * rear.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4500]] /* rear.cornerR.ucaPivot.R_rel.w[2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */));
  TRACE_POP
}

/*
equation index: 3178
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_a.R.w[2] = rear.cornerR.ucaPivot.R_rel.w[2]
*/
void Heave_eqFunction_3178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3902]] /* rear.cornerR.jointUSR.frame_a.R.w[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4500]] /* rear.cornerR.ucaPivot.R_rel.w[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3179
type: SIMPLE_ASSIGN
rear.cornerR.ucaPivot.R_rel.w[3] = rear.cornerR.ucaPivot.e[3] * rear.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4501]] /* rear.cornerR.ucaPivot.R_rel.w[3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */));
  TRACE_POP
}

/*
equation index: 3180
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_a.R.w[3] = rear.cornerR.ucaPivot.R_rel.w[3]
*/
void Heave_eqFunction_3180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3180};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3903]] /* rear.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4501]] /* rear.cornerR.ucaPivot.R_rel.w[3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3181
type: SIMPLE_ASSIGN
$DER.points[4,5,1] = $DER.rear.cornerR.uca.frame_a.r_0[1] + (-0.4) * rear.cornerR.jointUSR.frame_a.R.T[1,1] * rear.cornerR.jointUSR.frame_a.R.w[3] + 0.4 * rear.cornerR.jointUSR.frame_a.R.T[3,1] * rear.cornerR.jointUSR.frame_a.R.w[1]
*/
void Heave_eqFunction_3181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* der(points[4,5,1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[816]] /* der(rear.cornerR.uca.frame_a.r_0[1]) DUMMY_DER */) + (-0.4) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3892]] /* rear.cornerR.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3903]] /* rear.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + (0.4) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3898]] /* rear.cornerR.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3901]] /* rear.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3182
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.rod1.rRod_0[1] = $DER.rear.cornerR.jointUSR.frame_im.r_0[1] - $DER.points[4,5,1]
*/
void Heave_eqFunction_3182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[774]] /* der(rear.cornerR.jointUSR.rod1.rRod_0[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* der(rear.cornerR.jointUSR.frame_im.r_0[1]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* der(points[4,5,1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3183
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.revolute.r_a[1] = $DER.points[4,5,1] - $DER.rear.cornerR.springArm.frame_a.r_0[1]
*/
void Heave_eqFunction_3183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* der(rear.cornerR.jointUSR.revolute.r_a[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[554]] /* der(points[4,5,1]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* der(rear.cornerR.springArm.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3184
type: SIMPLE_ASSIGN
$DER.points[4,5,2] = $DER.rear.cornerR.uca.frame_a.r_0[2] + (-0.4) * rear.cornerR.jointUSR.frame_a.R.T[1,2] * rear.cornerR.jointUSR.frame_a.R.w[3] + 0.4 * rear.cornerR.jointUSR.frame_a.R.T[3,2] * rear.cornerR.jointUSR.frame_a.R.w[1]
*/
void Heave_eqFunction_3184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* der(points[4,5,2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[817]] /* der(rear.cornerR.uca.frame_a.r_0[2]) DUMMY_DER */) + (-0.4) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3893]] /* rear.cornerR.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3903]] /* rear.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + (0.4) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3899]] /* rear.cornerR.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3901]] /* rear.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3185
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.revolute.r_a[2] = $DER.points[4,5,2] - $DER.rear.cornerR.springArm.frame_a.r_0[2]
*/
void Heave_eqFunction_3185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* der(rear.cornerR.jointUSR.revolute.r_a[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[555]] /* der(points[4,5,2]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[784]] /* der(rear.cornerR.springArm.frame_a.r_0[2]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3186
type: SIMPLE_ASSIGN
$DER.points[4,5,3] = $DER.rear.cornerR.uca.frame_a.r_0[3] + (-0.4) * rear.cornerR.jointUSR.frame_a.R.T[1,3] * rear.cornerR.jointUSR.frame_a.R.w[3] + 0.4 * rear.cornerR.jointUSR.frame_a.R.T[3,3] * rear.cornerR.jointUSR.frame_a.R.w[1]
*/
void Heave_eqFunction_3186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3186};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* der(points[4,5,3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[818]] /* der(rear.cornerR.uca.frame_a.r_0[3]) DUMMY_DER */) + (-0.4) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3894]] /* rear.cornerR.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3903]] /* rear.cornerR.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + (0.4) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3900]] /* rear.cornerR.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3901]] /* rear.cornerR.jointUSR.frame_a.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3187
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.revolute.r_a[3] = $DER.points[4,5,3] - $DER.rear.cornerR.springArm.frame_a.r_0[3]
*/
void Heave_eqFunction_3187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* der(rear.cornerR.jointUSR.revolute.r_a[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[556]] /* der(points[4,5,3]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[785]] /* der(rear.cornerR.springArm.frame_a.r_0[3]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3188
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.revolute.A = (-2.0) * (rear.cornerR.jointUSR.revolute.r_b[1] * $DER.rear.cornerR.jointUSR.revolute.r_a[1] + rear.cornerR.jointUSR.revolute.r_b[2] * $DER.rear.cornerR.jointUSR.revolute.r_a[2] + rear.cornerR.jointUSR.revolute.r_b[3] * $DER.rear.cornerR.jointUSR.revolute.r_a[3])
*/
void Heave_eqFunction_3188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3188};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[730]] /* der(rear.cornerR.jointUSR.revolute.A) DUMMY_DER */) = (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4022]] /* rear.cornerR.jointUSR.revolute.r_b[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* der(rear.cornerR.jointUSR.revolute.r_a[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4023]] /* rear.cornerR.jointUSR.revolute.r_b[2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* der(rear.cornerR.jointUSR.revolute.r_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4024]] /* rear.cornerR.jointUSR.revolute.r_b[3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* der(rear.cornerR.jointUSR.revolute.r_a[3]) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3189
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.revolute.B = 2.0 * (rear.cornerR.jointUSR.revolute.r_b[2] * $DER.rear.cornerR.jointUSR.revolute.r_a[3] - rear.cornerR.jointUSR.revolute.r_b[3] * $DER.rear.cornerR.jointUSR.revolute.r_a[2])
*/
void Heave_eqFunction_3189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3189};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[731]] /* der(rear.cornerR.jointUSR.revolute.B) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4023]] /* rear.cornerR.jointUSR.revolute.r_b[2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* der(rear.cornerR.jointUSR.revolute.r_a[3]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4024]] /* rear.cornerR.jointUSR.revolute.r_b[3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* der(rear.cornerR.jointUSR.revolute.r_a[2]) DUMMY_DER */))));
  TRACE_POP
}
extern void Heave_eqFunction_7201(DATA *data, threadData_t *threadData);


/*
equation index: 3191
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.revolute.C = 2.0 * (rear.cornerR.jointUSR.revolute.r_a[1] * $DER.rear.cornerR.jointUSR.revolute.r_a[1] + rear.cornerR.jointUSR.revolute.r_a[2] * $DER.rear.cornerR.jointUSR.revolute.r_a[2] + rear.cornerR.jointUSR.revolute.r_a[3] * $DER.rear.cornerR.jointUSR.revolute.r_a[3])
*/
void Heave_eqFunction_3191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3191};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[732]] /* der(rear.cornerR.jointUSR.revolute.C) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4019]] /* rear.cornerR.jointUSR.revolute.r_a[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[743]] /* der(rear.cornerR.jointUSR.revolute.r_a[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4020]] /* rear.cornerR.jointUSR.revolute.r_a[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[744]] /* der(rear.cornerR.jointUSR.revolute.r_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4021]] /* rear.cornerR.jointUSR.revolute.r_a[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[745]] /* der(rear.cornerR.jointUSR.revolute.r_a[3]) DUMMY_DER */)));
  TRACE_POP
}
extern void Heave_eqFunction_6588(DATA *data, threadData_t *threadData);


/*
equation index: 3193
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.frame_a.R.T[1,1] = (1.0 - rear.cornerR.ucaPivot.e[1] ^ 2.0) * (-sin(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3193};
  modelica_real tmp81;
  tmp81 = (data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[703]] /* der(rear.cornerR.jointUSR.frame_a.R.T[1,1]) DUMMY_DER */) = (1.0 - ((tmp81 * tmp81))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 3194
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.frame_a.R.T[1,2] = rear.cornerR.ucaPivot.e[3] * cos(rear.cornerR.ucaPivot.phi) * rear.cornerR.ucaPivot.w - rear.cornerR.ucaPivot.e[1] * (-sin(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.w * rear.cornerR.ucaPivot.e[2]
*/
void Heave_eqFunction_3194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3194};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[704]] /* der(rear.cornerR.jointUSR.frame_a.R.T[1,2]) DUMMY_DER */) = ((data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */)))));
  TRACE_POP
}

/*
equation index: 3195
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.frame_a.R.T[1,3] = (-rear.cornerR.ucaPivot.e[1]) * (-sin(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.w * rear.cornerR.ucaPivot.e[3] - rear.cornerR.ucaPivot.e[2] * cos(rear.cornerR.ucaPivot.phi) * rear.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[705]] /* der(rear.cornerR.jointUSR.frame_a.R.T[1,3]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */)))) - (((data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 3196
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.frame_a.R.T[2,1] = (-rear.cornerR.ucaPivot.e[2]) * (-sin(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.w * rear.cornerR.ucaPivot.e[1] - rear.cornerR.ucaPivot.e[3] * cos(rear.cornerR.ucaPivot.phi) * rear.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3196};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[706]] /* der(rear.cornerR.jointUSR.frame_a.R.T[2,1]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */)))) - (((data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 3197
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.frame_a.R.T[2,2] = (1.0 - rear.cornerR.ucaPivot.e[2] ^ 2.0) * (-sin(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3197};
  modelica_real tmp82;
  tmp82 = (data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[707]] /* der(rear.cornerR.jointUSR.frame_a.R.T[2,2]) DUMMY_DER */) = (1.0 - ((tmp82 * tmp82))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 3198
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.frame_a.R.T[2,3] = rear.cornerR.ucaPivot.e[1] * cos(rear.cornerR.ucaPivot.phi) * rear.cornerR.ucaPivot.w - rear.cornerR.ucaPivot.e[2] * (-sin(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.w * rear.cornerR.ucaPivot.e[3]
*/
void Heave_eqFunction_3198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3198};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[708]] /* der(rear.cornerR.jointUSR.frame_a.R.T[2,3]) DUMMY_DER */) = ((data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */)))));
  TRACE_POP
}

/*
equation index: 3199
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.frame_a.R.T[3,1] = rear.cornerR.ucaPivot.e[2] * cos(rear.cornerR.ucaPivot.phi) * rear.cornerR.ucaPivot.w - rear.cornerR.ucaPivot.e[3] * (-sin(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.w * rear.cornerR.ucaPivot.e[1]
*/
void Heave_eqFunction_3199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[709]] /* der(rear.cornerR.jointUSR.frame_a.R.T[3,1]) DUMMY_DER */) = ((data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */)))));
  TRACE_POP
}

/*
equation index: 3200
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.frame_a.R.T[3,2] = (-rear.cornerR.ucaPivot.e[3]) * (-sin(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.w * rear.cornerR.ucaPivot.e[2] - rear.cornerR.ucaPivot.e[1] * cos(rear.cornerR.ucaPivot.phi) * rear.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3200};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[710]] /* der(rear.cornerR.jointUSR.frame_a.R.T[3,2]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2947] /* rear.cornerR.ucaPivot.e[2] PARAM */)))) - (((data->simulationInfo->realParameter[2946] /* rear.cornerR.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 3201
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.frame_a.R.T[3,3] = (1.0 - rear.cornerR.ucaPivot.e[3] ^ 2.0) * (-sin(rear.cornerR.ucaPivot.phi)) * rear.cornerR.ucaPivot.w
*/
void Heave_eqFunction_3201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3201};
  modelica_real tmp83;
  tmp83 = (data->simulationInfo->realParameter[2948] /* rear.cornerR.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[711]] /* der(rear.cornerR.jointUSR.frame_a.R.T[3,3]) DUMMY_DER */) = (1.0 - ((tmp83 * tmp83))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* rear.cornerR.ucaPivot.phi STATE(1,rear.cornerR.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* rear.cornerR.ucaPivot.w STATE(1,rear.cornerR.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 3202
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.phi = $START.rear.cornerL.ucaPivot.phi
*/
void Heave_eqFunction_3202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */) = (data->modelData->realVarsData[4] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */).attribute .start;
  TRACE_POP
}

/*
equation index: 3203
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_a.R.T[1,1] = rear.cornerL.ucaPivot.e[1] ^ 2.0 + (1.0 - rear.cornerL.ucaPivot.e[1] ^ 2.0) * cos(rear.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3203};
  modelica_real tmp84;
  modelica_real tmp85;
  tmp84 = (data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */);
  tmp85 = (data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3058]] /* rear.cornerL.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */) = (tmp84 * tmp84) + (1.0 - ((tmp85 * tmp85))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3204
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_a.R.T[1,2] = (rear.cornerL.ucaPivot.e[1] - rear.cornerL.ucaPivot.e[1] * cos(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.e[2] + rear.cornerL.ucaPivot.e[3] * sin(rear.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3059]] /* rear.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */)) + ((data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3205
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_a.R.T[1,3] = (rear.cornerL.ucaPivot.e[1] - rear.cornerL.ucaPivot.e[1] * cos(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.e[3] - rear.cornerL.ucaPivot.e[2] * sin(rear.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* rear.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */) - (((data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */)) - (((data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 3206
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_a.R.T[2,1] = (rear.cornerL.ucaPivot.e[2] - rear.cornerL.ucaPivot.e[2] * cos(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.e[1] - rear.cornerL.ucaPivot.e[3] * sin(rear.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* rear.cornerL.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */)) - (((data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 3207
type: SIMPLE_ASSIGN
points[3,5,1] = rear.cornerL.uca.frame_a.r_0[1] + (-0.4) * rear.cornerL.jointUSR.frame_a.R.T[2,1]
*/
void Heave_eqFunction_3207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* points[3,5,1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3628]] /* rear.cornerL.uca.frame_a.r_0[1] DUMMY_STATE */) + (-0.4) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* rear.cornerL.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3208
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rRod_0[1] = rear.cornerL.jointUSR.frame_im.r_0[1] - points[3,5,1]
*/
void Heave_eqFunction_3208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3208};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* rear.cornerL.jointUSR.rod1.rRod_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3096]] /* rear.cornerL.jointUSR.frame_im.r_0[1] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* points[3,5,1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3209
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.r_a[1] = points[3,5,1] - rear.cornerL.springArm.frame_a.r_0[1]
*/
void Heave_eqFunction_3209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3209};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3185]] /* rear.cornerL.jointUSR.revolute.r_a[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2917]] /* points[3,5,1] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3367]] /* rear.cornerL.springArm.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void Heave_eqFunction_7491(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7492(DATA *data, threadData_t *threadData);


/*
equation index: 3212
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_a.R.T[2,2] = rear.cornerL.ucaPivot.e[2] ^ 2.0 + (1.0 - rear.cornerL.ucaPivot.e[2] ^ 2.0) * cos(rear.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3212};
  modelica_real tmp86;
  modelica_real tmp87;
  tmp86 = (data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */);
  tmp87 = (data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* rear.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */) = (tmp86 * tmp86) + (1.0 - ((tmp87 * tmp87))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)));
  TRACE_POP
}
extern void Heave_eqFunction_7477(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7478(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7479(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7480(DATA *data, threadData_t *threadData);


/*
equation index: 3217
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_a.R.T[2,3] = (rear.cornerL.ucaPivot.e[2] - rear.cornerL.ucaPivot.e[2] * cos(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.e[3] + rear.cornerL.ucaPivot.e[1] * sin(rear.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3217};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* rear.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */) - (((data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */)) + ((data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)));
  TRACE_POP
}
extern void Heave_eqFunction_7494(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7495(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7498(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7497(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7499(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7539(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7540(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7541(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7542(DATA *data, threadData_t *threadData);


/*
equation index: 3227
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_a.R.T[3,1] = (rear.cornerL.ucaPivot.e[3] - rear.cornerL.ucaPivot.e[3] * cos(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.e[1] + rear.cornerL.ucaPivot.e[2] * sin(rear.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3064]] /* rear.cornerL.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */)) + ((data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3228
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_a.R.T[3,2] = (rear.cornerL.ucaPivot.e[3] - rear.cornerL.ucaPivot.e[3] * cos(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.e[2] - rear.cornerL.ucaPivot.e[1] * sin(rear.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3065]] /* rear.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */) - (((data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */)) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))))) * ((data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */)) - (((data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */)) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))));
  TRACE_POP
}

/*
equation index: 3229
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_a.R.T[3,3] = rear.cornerL.ucaPivot.e[3] ^ 2.0 + (1.0 - rear.cornerL.ucaPivot.e[3] ^ 2.0) * cos(rear.cornerL.ucaPivot.phi)
*/
void Heave_eqFunction_3229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3229};
  modelica_real tmp88;
  modelica_real tmp89;
  tmp88 = (data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */);
  tmp89 = (data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3066]] /* rear.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */) = (tmp88 * tmp88) + (1.0 - ((tmp89 * tmp89))) * (cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)));
  TRACE_POP
}

/*
equation index: 3230
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.w = $START.rear.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */) = (data->modelData->realVarsData[5] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */).attribute .start;
  TRACE_POP
}

/*
equation index: 3231
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.R_rel.w[1] = rear.cornerL.ucaPivot.e[1] * rear.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3231};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* rear.cornerL.ucaPivot.R_rel.w[1] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */));
  TRACE_POP
}

/*
equation index: 3232
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_a.R.w[1] = rear.cornerL.ucaPivot.R_rel.w[1]
*/
void Heave_eqFunction_3232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3232};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3067]] /* rear.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3665]] /* rear.cornerL.ucaPivot.R_rel.w[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3233
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.R_rel.w[2] = rear.cornerL.ucaPivot.e[2] * rear.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3233};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3666]] /* rear.cornerL.ucaPivot.R_rel.w[2] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */));
  TRACE_POP
}

/*
equation index: 3234
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_a.R.w[2] = rear.cornerL.ucaPivot.R_rel.w[2]
*/
void Heave_eqFunction_3234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3234};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3068]] /* rear.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3666]] /* rear.cornerL.ucaPivot.R_rel.w[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3235
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.R_rel.w[3] = rear.cornerL.ucaPivot.e[3] * rear.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3235};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3667]] /* rear.cornerL.ucaPivot.R_rel.w[3] DUMMY_STATE */) = ((data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */));
  TRACE_POP
}

/*
equation index: 3236
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_a.R.w[3] = rear.cornerL.ucaPivot.R_rel.w[3]
*/
void Heave_eqFunction_3236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3069]] /* rear.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3667]] /* rear.cornerL.ucaPivot.R_rel.w[3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3237
type: SIMPLE_ASSIGN
$DER.points[3,5,1] = $DER.rear.cornerL.uca.frame_a.r_0[1] + 0.4 * rear.cornerL.jointUSR.frame_a.R.T[1,1] * rear.cornerL.jointUSR.frame_a.R.w[3] + (-0.4) * rear.cornerL.jointUSR.frame_a.R.T[3,1] * rear.cornerL.jointUSR.frame_a.R.w[1]
*/
void Heave_eqFunction_3237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3237};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* der(points[3,5,1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[682]] /* der(rear.cornerL.uca.frame_a.r_0[1]) DUMMY_DER */) + (0.4) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3058]] /* rear.cornerL.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3069]] /* rear.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + (-0.4) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3064]] /* rear.cornerL.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3067]] /* rear.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3238
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.rod1.rRod_0[1] = $DER.rear.cornerL.jointUSR.frame_im.r_0[1] - $DER.points[3,5,1]
*/
void Heave_eqFunction_3238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3238};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* der(rear.cornerL.jointUSR.frame_im.r_0[1]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* der(points[3,5,1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3239
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.revolute.r_a[1] = $DER.points[3,5,1] - $DER.rear.cornerL.springArm.frame_a.r_0[1]
*/
void Heave_eqFunction_3239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* der(rear.cornerL.jointUSR.revolute.r_a[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[542]] /* der(points[3,5,1]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* der(rear.cornerL.springArm.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3240
type: SIMPLE_ASSIGN
$DER.points[3,5,2] = $DER.rear.cornerL.uca.frame_a.r_0[2] + 0.4 * rear.cornerL.jointUSR.frame_a.R.T[1,2] * rear.cornerL.jointUSR.frame_a.R.w[3] + (-0.4) * rear.cornerL.jointUSR.frame_a.R.T[3,2] * rear.cornerL.jointUSR.frame_a.R.w[1]
*/
void Heave_eqFunction_3240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* der(points[3,5,2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[683]] /* der(rear.cornerL.uca.frame_a.r_0[2]) DUMMY_DER */) + (0.4) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3059]] /* rear.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3069]] /* rear.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + (-0.4) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3065]] /* rear.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3067]] /* rear.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3241
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.revolute.r_a[2] = $DER.points[3,5,2] - $DER.rear.cornerL.springArm.frame_a.r_0[2]
*/
void Heave_eqFunction_3241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* der(rear.cornerL.jointUSR.revolute.r_a[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[543]] /* der(points[3,5,2]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* der(rear.cornerL.springArm.frame_a.r_0[2]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3242
type: SIMPLE_ASSIGN
$DER.points[3,5,3] = $DER.rear.cornerL.uca.frame_a.r_0[3] + 0.4 * rear.cornerL.jointUSR.frame_a.R.T[1,3] * rear.cornerL.jointUSR.frame_a.R.w[3] + (-0.4) * rear.cornerL.jointUSR.frame_a.R.T[3,3] * rear.cornerL.jointUSR.frame_a.R.w[1]
*/
void Heave_eqFunction_3242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3242};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* der(points[3,5,3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[684]] /* der(rear.cornerL.uca.frame_a.r_0[3]) DUMMY_DER */) + (0.4) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* rear.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3069]] /* rear.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */))) + (-0.4) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3066]] /* rear.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3067]] /* rear.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3243
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.revolute.r_a[3] = $DER.points[3,5,3] - $DER.rear.cornerL.springArm.frame_a.r_0[3]
*/
void Heave_eqFunction_3243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3243};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* der(rear.cornerL.jointUSR.revolute.r_a[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[544]] /* der(points[3,5,3]) DUMMY_DER */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* der(rear.cornerL.springArm.frame_a.r_0[3]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 3244
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.revolute.A = (-2.0) * (rear.cornerL.jointUSR.revolute.r_b[1] * $DER.rear.cornerL.jointUSR.revolute.r_a[1] + rear.cornerL.jointUSR.revolute.r_b[2] * $DER.rear.cornerL.jointUSR.revolute.r_a[2] + rear.cornerL.jointUSR.revolute.r_b[3] * $DER.rear.cornerL.jointUSR.revolute.r_a[3])
*/
void Heave_eqFunction_3244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3244};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[598]] /* der(rear.cornerL.jointUSR.revolute.A) DUMMY_DER */) = (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3188]] /* rear.cornerL.jointUSR.revolute.r_b[1] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* der(rear.cornerL.jointUSR.revolute.r_a[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3189]] /* rear.cornerL.jointUSR.revolute.r_b[2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* der(rear.cornerL.jointUSR.revolute.r_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* rear.cornerL.jointUSR.revolute.r_b[3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* der(rear.cornerL.jointUSR.revolute.r_a[3]) DUMMY_DER */)));
  TRACE_POP
}

/*
equation index: 3245
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.revolute.B = 2.0 * (rear.cornerL.jointUSR.revolute.r_b[2] * $DER.rear.cornerL.jointUSR.revolute.r_a[3] - rear.cornerL.jointUSR.revolute.r_b[3] * $DER.rear.cornerL.jointUSR.revolute.r_a[2])
*/
void Heave_eqFunction_3245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[599]] /* der(rear.cornerL.jointUSR.revolute.B) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3189]] /* rear.cornerL.jointUSR.revolute.r_b[2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* der(rear.cornerL.jointUSR.revolute.r_a[3]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* rear.cornerL.jointUSR.revolute.r_b[3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* der(rear.cornerL.jointUSR.revolute.r_a[2]) DUMMY_DER */))));
  TRACE_POP
}
extern void Heave_eqFunction_7554(DATA *data, threadData_t *threadData);


/*
equation index: 3247
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.revolute.C = 2.0 * (rear.cornerL.jointUSR.revolute.r_a[1] * $DER.rear.cornerL.jointUSR.revolute.r_a[1] + rear.cornerL.jointUSR.revolute.r_a[2] * $DER.rear.cornerL.jointUSR.revolute.r_a[2] + rear.cornerL.jointUSR.revolute.r_a[3] * $DER.rear.cornerL.jointUSR.revolute.r_a[3])
*/
void Heave_eqFunction_3247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[600]] /* der(rear.cornerL.jointUSR.revolute.C) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3185]] /* rear.cornerL.jointUSR.revolute.r_a[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[609]] /* der(rear.cornerL.jointUSR.revolute.r_a[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3186]] /* rear.cornerL.jointUSR.revolute.r_a[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[610]] /* der(rear.cornerL.jointUSR.revolute.r_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3187]] /* rear.cornerL.jointUSR.revolute.r_a[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[611]] /* der(rear.cornerL.jointUSR.revolute.r_a[3]) DUMMY_DER */)));
  TRACE_POP
}
extern void Heave_eqFunction_6582(DATA *data, threadData_t *threadData);


/*
equation index: 3249
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.frame_a.R.T[1,1] = (1.0 - rear.cornerL.ucaPivot.e[1] ^ 2.0) * (-sin(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3249};
  modelica_real tmp90;
  tmp90 = (data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[571]] /* der(rear.cornerL.jointUSR.frame_a.R.T[1,1]) DUMMY_DER */) = (1.0 - ((tmp90 * tmp90))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 3250
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.frame_a.R.T[1,2] = rear.cornerL.ucaPivot.e[3] * cos(rear.cornerL.ucaPivot.phi) * rear.cornerL.ucaPivot.w - rear.cornerL.ucaPivot.e[1] * (-sin(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.w * rear.cornerL.ucaPivot.e[2]
*/
void Heave_eqFunction_3250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[572]] /* der(rear.cornerL.jointUSR.frame_a.R.T[1,2]) DUMMY_DER */) = ((data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */)))));
  TRACE_POP
}

/*
equation index: 3251
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.frame_a.R.T[1,3] = (-rear.cornerL.ucaPivot.e[1]) * (-sin(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.w * rear.cornerL.ucaPivot.e[3] - rear.cornerL.ucaPivot.e[2] * cos(rear.cornerL.ucaPivot.phi) * rear.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[573]] /* der(rear.cornerL.jointUSR.frame_a.R.T[1,3]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */)))) - (((data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 3252
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.frame_a.R.T[2,1] = (-rear.cornerL.ucaPivot.e[2]) * (-sin(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.w * rear.cornerL.ucaPivot.e[1] - rear.cornerL.ucaPivot.e[3] * cos(rear.cornerL.ucaPivot.phi) * rear.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[574]] /* der(rear.cornerL.jointUSR.frame_a.R.T[2,1]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */)))) - (((data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 3253
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.frame_a.R.T[2,2] = (1.0 - rear.cornerL.ucaPivot.e[2] ^ 2.0) * (-sin(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3253};
  modelica_real tmp91;
  tmp91 = (data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[575]] /* der(rear.cornerL.jointUSR.frame_a.R.T[2,2]) DUMMY_DER */) = (1.0 - ((tmp91 * tmp91))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 3254
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.frame_a.R.T[2,3] = rear.cornerL.ucaPivot.e[1] * cos(rear.cornerL.ucaPivot.phi) * rear.cornerL.ucaPivot.w - rear.cornerL.ucaPivot.e[2] * (-sin(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.w * rear.cornerL.ucaPivot.e[3]
*/
void Heave_eqFunction_3254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3254};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[576]] /* der(rear.cornerL.jointUSR.frame_a.R.T[2,3]) DUMMY_DER */) = ((data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */)))));
  TRACE_POP
}

/*
equation index: 3255
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.frame_a.R.T[3,1] = rear.cornerL.ucaPivot.e[2] * cos(rear.cornerL.ucaPivot.phi) * rear.cornerL.ucaPivot.w - rear.cornerL.ucaPivot.e[3] * (-sin(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.w * rear.cornerL.ucaPivot.e[1]
*/
void Heave_eqFunction_3255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3255};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[577]] /* der(rear.cornerL.jointUSR.frame_a.R.T[3,1]) DUMMY_DER */) = ((data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */))) - (((data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */)) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */)))));
  TRACE_POP
}

/*
equation index: 3256
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.frame_a.R.T[3,2] = (-rear.cornerL.ucaPivot.e[3]) * (-sin(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.w * rear.cornerL.ucaPivot.e[2] - rear.cornerL.ucaPivot.e[1] * cos(rear.cornerL.ucaPivot.phi) * rear.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[578]] /* der(rear.cornerL.jointUSR.frame_a.R.T[3,2]) DUMMY_DER */) = ((-(data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)))) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */)) * ((data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */)))) - (((data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */)) * ((cos((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */))));
  TRACE_POP
}

/*
equation index: 3257
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.frame_a.R.T[3,3] = (1.0 - rear.cornerL.ucaPivot.e[3] ^ 2.0) * (-sin(rear.cornerL.ucaPivot.phi)) * rear.cornerL.ucaPivot.w
*/
void Heave_eqFunction_3257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3257};
  modelica_real tmp92;
  tmp92 = (data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[579]] /* der(rear.cornerL.jointUSR.frame_a.R.T[3,3]) DUMMY_DER */) = (1.0 - ((tmp92 * tmp92))) * (((-sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* rear.cornerL.ucaPivot.phi STATE(1,rear.cornerL.ucaPivot.w) */)))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* rear.cornerL.ucaPivot.w STATE(1,rear.cornerL.ucaPivot.a) */)));
  TRACE_POP
}

/*
equation index: 3258
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodLength = 0.3590264614203248
*/
void Heave_eqFunction_3258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3258};
  (data->simulationInfo->realParameter[1827] /* rear.cornerL.jointUSR.rod1.rodLength PARAM */) = 0.3590264614203248;
  TRACE_POP
}

/*
equation index: 3259
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodShape.length = rear.cornerL.jointUSR.rod1.rodLength
*/
void Heave_eqFunction_3259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3259};
  (data->simulationInfo->realParameter[1829] /* rear.cornerL.jointUSR.rod1.rodShape.length PARAM */) = (data->simulationInfo->realParameter[1827] /* rear.cornerL.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3260
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1Length = rear.cornerL.jointUSR.rod1.rodLength
*/
void Heave_eqFunction_3260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3260};
  (data->simulationInfo->realParameter[1849] /* rear.cornerL.jointUSR.rod1Length PARAM */) = (data->simulationInfo->realParameter[1827] /* rear.cornerL.jointUSR.rod1.rodLength PARAM */);
  TRACE_POP
}

/*
equation index: 3261
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.lengthConstraint = rear.cornerL.jointUSR.rod1Length
*/
void Heave_eqFunction_3261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3261};
  (data->simulationInfo->realParameter[1795] /* rear.cornerL.jointUSR.revolute.lengthConstraint PARAM */) = (data->simulationInfo->realParameter[1849] /* rear.cornerL.jointUSR.rod1Length PARAM */);
  TRACE_POP
}
extern void Heave_eqFunction_7496(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7500(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7501(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7502(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7555(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7556(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7557(DATA *data, threadData_t *threadData);


/*
equation index: 3269
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.positiveBranch = AlyssaAnimation.Heave.rear.cornerL.jointUSR.revolute.selectBranch(rear.cornerL.jointUSR.revolute.lengthConstraint, {-1.0, -0.0, 0.0}, 0.017453292519943295 * (rear.cornerL.jointUSR.revolute.phi_offset + rear.cornerL.jointUSR.revolute.phi_guess), rear.cornerL.jointUSR.revolute.r_a, rear.cornerL.jointUSR.revolute.r_b)
*/
void Heave_eqFunction_3269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3269};
  real_array tmp93;
  real_array tmp94;
  real_array_create(&tmp93, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3185]] /* rear.cornerL.jointUSR.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp94, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3188]] /* rear.cornerL.jointUSR.revolute.r_b[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[106] /* rear.cornerL.jointUSR.revolute.positiveBranch PARAM */) = omc_AlyssaAnimation_Heave_rear_cornerL_jointUSR_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[1795] /* rear.cornerL.jointUSR.revolute.lengthConstraint PARAM */), _OMC_LIT23, (0.017453292519943295) * ((data->simulationInfo->realParameter[1800] /* rear.cornerL.jointUSR.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[1799] /* rear.cornerL.jointUSR.revolute.phi_guess PARAM */)), tmp93, tmp94);
  TRACE_POP
}
extern void Heave_eqFunction_7504(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7559(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7503(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7505(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7535(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7506(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7507(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7508(DATA *data, threadData_t *threadData);


/*
equation index: 3278
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.R_rel.T[3,2] = sin(rear.cornerL.jointUSR.revolute.angle)
*/
void Heave_eqFunction_3278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3278};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */) = sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3157]] /* rear.cornerL.jointUSR.revolute.angle DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3279
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_im.r_0[3] = rear.cornerL.springArm.frame_a.r_0[3] - (-0.6199999999999999) * rear.cornerL.jointUSR.revolute.R_rel.T[3,2]
*/
void Heave_eqFunction_3279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3098]] /* rear.cornerL.jointUSR.frame_im.r_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3369]] /* rear.cornerL.springArm.frame_a.r_0[3] DUMMY_STATE */) - ((-0.6199999999999999) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */)));
  TRACE_POP
}
extern void Heave_eqFunction_7536(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7537(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7538(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7543(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7544(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7589(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7590(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7591(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7592(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7593(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7594(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7595(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7596(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7597(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7600(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7599(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7598(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7601(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7602(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7604(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7635(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7603(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7636(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7606(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7605(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7610(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7616(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7625(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7611(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7626(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7607(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7609(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7617(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7620(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7619(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7618(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7623(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7628(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7633(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7631(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7629(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7608(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7624(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7627(DATA *data, threadData_t *threadData);


/*
equation index: 3324
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.revolute.A = (-2.0) * (rear.cornerL.tieRod.revolute.r_b[1] * rear.cornerL.tieRod.revolute.r_a[1] + rear.cornerL.tieRod.revolute.r_b[2] * rear.cornerL.tieRod.revolute.r_a[2] + rear.cornerL.tieRod.revolute.r_b[3] * rear.cornerL.tieRod.revolute.r_a[3] - rear.cornerL.tieRod.revolute.e_r_b * rear.cornerL.tieRod.revolute.e_r_a)
*/
void Heave_eqFunction_3324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3493]] /* rear.cornerL.tieRod.revolute.A DUMMY_STATE */) = (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3541]] /* rear.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3538]] /* rear.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3542]] /* rear.cornerL.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* rear.cornerL.tieRod.revolute.r_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3543]] /* rear.cornerL.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* rear.cornerL.tieRod.revolute.r_a[3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3524]] /* rear.cornerL.tieRod.revolute.e_r_b DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3523]] /* rear.cornerL.tieRod.revolute.e_r_a DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 3325
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.revolute.B = 2.0 * (rear.cornerL.tieRod.revolute.r_b[1] * ((-0.222824801502141) * rear.cornerL.tieRod.revolute.r_a[3] + (-0.9748585065718673) * rear.cornerL.tieRod.revolute.r_a[2]) + 0.9748585065718673 * rear.cornerL.tieRod.revolute.r_b[2] * rear.cornerL.tieRod.revolute.r_a[1] + (-0.222824801502141) * (-rear.cornerL.tieRod.revolute.r_b[3]) * rear.cornerL.tieRod.revolute.r_a[1])
*/
void Heave_eqFunction_3325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3494]] /* rear.cornerL.tieRod.revolute.B DUMMY_STATE */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3541]] /* rear.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((-0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* rear.cornerL.tieRod.revolute.r_a[3] DUMMY_STATE */)) + (-0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* rear.cornerL.tieRod.revolute.r_a[2] DUMMY_STATE */))) + (0.9748585065718673) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3542]] /* rear.cornerL.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3538]] /* rear.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */))) + (-0.222824801502141) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3543]] /* rear.cornerL.tieRod.revolute.r_b[3] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3538]] /* rear.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */))));
  TRACE_POP
}
extern void Heave_eqFunction_7640(DATA *data, threadData_t *threadData);


/*
equation index: 3327
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.revolute.C = rear.cornerL.tieRod.revolute.r_a[1] ^ 2.0 + rear.cornerL.tieRod.revolute.r_a[2] ^ 2.0 + rear.cornerL.tieRod.revolute.r_a[3] ^ 2.0 + rear.cornerL.tieRod.revolute.r_b[1] ^ 2.0 + rear.cornerL.tieRod.revolute.r_b[2] ^ 2.0 + rear.cornerL.tieRod.revolute.r_b[3] ^ 2.0 + (-2.0) * rear.cornerL.tieRod.revolute.e_r_b * rear.cornerL.tieRod.revolute.e_r_a - rear.cornerL.tieRod.revolute.lengthConstraint ^ 2.0
*/
void Heave_eqFunction_3327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3327};
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_real tmp101;
  tmp95 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3538]] /* rear.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */);
  tmp96 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* rear.cornerL.tieRod.revolute.r_a[2] DUMMY_STATE */);
  tmp97 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* rear.cornerL.tieRod.revolute.r_a[3] DUMMY_STATE */);
  tmp98 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3541]] /* rear.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */);
  tmp99 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3542]] /* rear.cornerL.tieRod.revolute.r_b[2] DUMMY_STATE */);
  tmp100 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3543]] /* rear.cornerL.tieRod.revolute.r_b[3] DUMMY_STATE */);
  tmp101 = (data->simulationInfo->realParameter[2112] /* rear.cornerL.tieRod.revolute.lengthConstraint PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3495]] /* rear.cornerL.tieRod.revolute.C DUMMY_STATE */) = (tmp95 * tmp95) + (tmp96 * tmp96) + (tmp97 * tmp97) + (tmp98 * tmp98) + (tmp99 * tmp99) + (tmp100 * tmp100) + (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3524]] /* rear.cornerL.tieRod.revolute.e_r_b DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3523]] /* rear.cornerL.tieRod.revolute.e_r_a DUMMY_STATE */))) - ((tmp101 * tmp101));
  TRACE_POP
}
extern void Heave_eqFunction_7641(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7642(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7643(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7612(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7615(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7634(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7614(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7632(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7613(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7630(DATA *data, threadData_t *threadData);


/*
equation index: 3338
type: SIMPLE_ASSIGN
points[3,11,2] = rear.cornerL.springArm.frame_a.r_0[2] + (-0.47000000000000003) * rear.cornerL.jointUSR.revolute.R_rel.T[3,3] + (-0.009999999999999981) * rear.cornerL.jointUSR.revolute.R_rel.T[3,2]
*/
void Heave_eqFunction_3338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3338};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2936]] /* points[3,11,2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3368]] /* rear.cornerL.springArm.frame_a.r_0[2] DUMMY_STATE */) + (-0.47000000000000003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,3] variable */)) + (-0.009999999999999981) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */));
  TRACE_POP
}

/*
equation index: 3339
type: SIMPLE_ASSIGN
rear.cornerL.coilover.r_rel_0[2] = points[3,11,2] - points[3,10,2]
*/
void Heave_eqFunction_3339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3339};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3015]] /* rear.cornerL.coilover.r_rel_0[2] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2936]] /* points[3,11,2] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2933]] /* points[3,10,2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3340
type: SIMPLE_ASSIGN
rear.cornerL.coilover.r_rel_a[2] = rear.cornerL.coilover.r_rel_0[2]
*/
void Heave_eqFunction_3340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3340};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3018]] /* rear.cornerL.coilover.r_rel_a[2] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3015]] /* rear.cornerL.coilover.r_rel_0[2] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3341
type: SIMPLE_ASSIGN
points[3,11,3] = rear.cornerL.springArm.frame_a.r_0[3] + (-0.009999999999999981) * rear.cornerL.jointUSR.revolute.R_rel.T[3,3] - (-0.47000000000000003) * rear.cornerL.jointUSR.revolute.R_rel.T[3,2]
*/
void Heave_eqFunction_3341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3341};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2937]] /* points[3,11,3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3369]] /* rear.cornerL.springArm.frame_a.r_0[3] DUMMY_STATE */) + (-0.009999999999999981) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,3] variable */)) - ((-0.47000000000000003) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */)));
  TRACE_POP
}

/*
equation index: 3342
type: SIMPLE_ASSIGN
rear.cornerL.coilover.r_rel_0[3] = points[3,11,3] - points[3,10,3]
*/
void Heave_eqFunction_3342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3342};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3016]] /* rear.cornerL.coilover.r_rel_0[3] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2937]] /* points[3,11,3] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2934]] /* points[3,10,3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3343
type: SIMPLE_ASSIGN
rear.cornerL.coilover.length = sqrt(rear.cornerL.coilover.r_rel_0 * rear.cornerL.coilover.r_rel_0)
*/
void Heave_eqFunction_3343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3343};
  real_array tmp102;
  real_array tmp103;
  modelica_real tmp104;
  real_array_create(&tmp102, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3014]] /* rear.cornerL.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp103, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3014]] /* rear.cornerL.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  tmp104 = mul_real_scalar_product(tmp102, tmp103);
  if(!(tmp104 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rear.cornerL.coilover.r_rel_0 * rear.cornerL.coilover.r_rel_0) was %g should be >= 0", tmp104);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3012]] /* rear.cornerL.coilover.length DUMMY_STATE */) = sqrt(tmp104);
  TRACE_POP
}

/*
equation index: 3344
type: SIMPLE_ASSIGN
rear.cornerL.coilover.s = Modelica.Mechanics.MultiBody.Frames.Internal.maxWithoutEvent(rear.cornerL.coilover.length, rear.cornerL.coilover.s_small)
*/
void Heave_eqFunction_3344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3344};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* rear.cornerL.coilover.s DUMMY_STATE */) = omc_Modelica_Mechanics_MultiBody_Frames_Internal_maxWithoutEvent(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3012]] /* rear.cornerL.coilover.length DUMMY_STATE */), (data->simulationInfo->realParameter[1673] /* rear.cornerL.coilover.s_small PARAM */));
  TRACE_POP
}

/*
equation index: 3345
type: SIMPLE_ASSIGN
telemetry[3,4] = rear.cornerL.coilover.s
*/
void Heave_eqFunction_3345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3345};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4741]] /* telemetry[3,4] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* rear.cornerL.coilover.s DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3346
type: SIMPLE_ASSIGN
rear.cornerL.coilover.e_a[1] = rear.cornerL.coilover.r_rel_a[1] / rear.cornerL.coilover.s
*/
void Heave_eqFunction_3346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3346};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2998]] /* rear.cornerL.coilover.e_a[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3017]] /* rear.cornerL.coilover.r_rel_a[1] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* rear.cornerL.coilover.s DUMMY_STATE */),"rear.cornerL.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 3347
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_b.r_shape[1] = rear.cornerL.coilover.e_a[1] * min(rear.cornerL.coilover.length_a, rear.cornerL.coilover.s)
*/
void Heave_eqFunction_3347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3347};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3048]] /* rear.cornerL.coilover.shape_b.r_shape[1] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2998]] /* rear.cornerL.coilover.e_a[1] variable */)) * (fmin((data->simulationInfo->realParameter[1672] /* rear.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* rear.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3348
type: SIMPLE_ASSIGN
rear.cornerL.coilover.e_a[2] = rear.cornerL.coilover.r_rel_a[2] / rear.cornerL.coilover.s
*/
void Heave_eqFunction_3348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3348};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2999]] /* rear.cornerL.coilover.e_a[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3018]] /* rear.cornerL.coilover.r_rel_a[2] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* rear.cornerL.coilover.s DUMMY_STATE */),"rear.cornerL.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 3349
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_b.r_shape[2] = rear.cornerL.coilover.e_a[2] * min(rear.cornerL.coilover.length_a, rear.cornerL.coilover.s)
*/
void Heave_eqFunction_3349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3349};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3049]] /* rear.cornerL.coilover.shape_b.r_shape[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2999]] /* rear.cornerL.coilover.e_a[2] variable */)) * (fmin((data->simulationInfo->realParameter[1672] /* rear.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* rear.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3350
type: SIMPLE_ASSIGN
rear.cornerL.coilover.e_rel_0[1] = rear.cornerL.coilover.r_rel_0[1] / rear.cornerL.coilover.s
*/
void Heave_eqFunction_3350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3350};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3001]] /* rear.cornerL.coilover.e_rel_0[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3014]] /* rear.cornerL.coilover.r_rel_0[1] DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* rear.cornerL.coilover.s DUMMY_STATE */),"rear.cornerL.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 3351
type: SIMPLE_ASSIGN
rear.cornerL.coilover.e_rel_0[2] = rear.cornerL.coilover.r_rel_0[2] / rear.cornerL.coilover.s
*/
void Heave_eqFunction_3351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3351};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3002]] /* rear.cornerL.coilover.e_rel_0[2] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3015]] /* rear.cornerL.coilover.r_rel_0[2] DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* rear.cornerL.coilover.s DUMMY_STATE */),"rear.cornerL.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 3352
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_a.length = min(rear.cornerL.coilover.length_a, rear.cornerL.coilover.s)
*/
void Heave_eqFunction_3352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3352};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3036]] /* rear.cornerL.coilover.shape_a.length variable */) = fmin((data->simulationInfo->realParameter[1672] /* rear.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* rear.cornerL.coilover.s DUMMY_STATE */));
  TRACE_POP
}

/*
equation index: 3353
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_b.length = max(rear.cornerL.coilover.s - rear.cornerL.coilover.length_a, 0.0)
*/
void Heave_eqFunction_3353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3353};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3047]] /* rear.cornerL.coilover.shape_b.length variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* rear.cornerL.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[1672] /* rear.cornerL.coilover.length_a PARAM */),0.0);
  TRACE_POP
}

/*
equation index: 3354
type: SIMPLE_ASSIGN
rear.cornerL.coilover.r_rel_a[3] = rear.cornerL.coilover.r_rel_0[3]
*/
void Heave_eqFunction_3354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3354};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3019]] /* rear.cornerL.coilover.r_rel_a[3] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3016]] /* rear.cornerL.coilover.r_rel_0[3] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 3355
type: SIMPLE_ASSIGN
rear.cornerL.coilover.e_a[3] = rear.cornerL.coilover.r_rel_a[3] / rear.cornerL.coilover.s
*/
void Heave_eqFunction_3355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3355};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3000]] /* rear.cornerL.coilover.e_a[3] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3019]] /* rear.cornerL.coilover.r_rel_a[3] variable */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* rear.cornerL.coilover.s DUMMY_STATE */),"rear.cornerL.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 3356
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_b.r_shape[3] = rear.cornerL.coilover.e_a[3] * min(rear.cornerL.coilover.length_a, rear.cornerL.coilover.s)
*/
void Heave_eqFunction_3356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3356};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3050]] /* rear.cornerL.coilover.shape_b.r_shape[3] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3000]] /* rear.cornerL.coilover.e_a[3] variable */)) * (fmin((data->simulationInfo->realParameter[1672] /* rear.cornerL.coilover.length_a PARAM */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* rear.cornerL.coilover.s DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3357
type: SIMPLE_ASSIGN
rear.cornerL.coilover.e_rel_0[3] = rear.cornerL.coilover.r_rel_0[3] / rear.cornerL.coilover.s
*/
void Heave_eqFunction_3357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3357};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3003]] /* rear.cornerL.coilover.e_rel_0[3] variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3016]] /* rear.cornerL.coilover.r_rel_0[3] DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* rear.cornerL.coilover.s DUMMY_STATE */),"rear.cornerL.coilover.s",equationIndexes);
  TRACE_POP
}

/*
equation index: 3358
type: SIMPLE_ASSIGN
view[3].spring.shape.length = sqrt(rear.cornerL.coilover.r_rel_0[1] ^ 2.0 + rear.cornerL.coilover.r_rel_0[2] ^ 2.0 + rear.cornerL.coilover.r_rel_0[3] ^ 2.0)
*/
void Heave_eqFunction_3358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3358};
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  tmp105 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3014]] /* rear.cornerL.coilover.r_rel_0[1] DUMMY_STATE */);
  tmp106 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3015]] /* rear.cornerL.coilover.r_rel_0[2] DUMMY_STATE */);
  tmp107 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3016]] /* rear.cornerL.coilover.r_rel_0[3] DUMMY_STATE */);
  tmp108 = (tmp105 * tmp105) + (tmp106 * tmp106) + (tmp107 * tmp107);
  if(!(tmp108 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rear.cornerL.coilover.r_rel_0[1] ^ 2.0 + rear.cornerL.coilover.r_rel_0[2] ^ 2.0 + rear.cornerL.coilover.r_rel_0[3] ^ 2.0) was %g should be >= 0", tmp108);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5088]] /* view[3].spring.shape.length variable */) = sqrt(tmp108);
  TRACE_POP
}

/*
equation index: 3359
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.aux = 0.6199999999999999 * (rear.cornerL.jointUSR.revolute.R_rel.T[3,2] * (rear.cornerL.jointUSR.frame_a.R.T[1,2] * rear.cornerL.jointUSR.rod1.eRod_a[1] + rear.cornerL.jointUSR.frame_a.R.T[2,2] * rear.cornerL.jointUSR.rod1.eRod_a[2] + rear.cornerL.jointUSR.frame_a.R.T[3,2] * rear.cornerL.jointUSR.rod1.eRod_a[3]) + rear.cornerL.jointUSR.revolute.R_rel.T[3,3] * (rear.cornerL.jointUSR.frame_a.R.T[1,3] * rear.cornerL.jointUSR.rod1.eRod_a[1] + rear.cornerL.jointUSR.frame_a.R.T[2,3] * rear.cornerL.jointUSR.rod1.eRod_a[2] + rear.cornerL.jointUSR.frame_a.R.T[3,3] * rear.cornerL.jointUSR.rod1.eRod_a[3]))
*/
void Heave_eqFunction_3359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3359};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3054]] /* rear.cornerL.jointUSR.aux variable */) = (0.6199999999999999) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3059]] /* rear.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3222]] /* rear.cornerL.jointUSR.rod1.eRod_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* rear.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3223]] /* rear.cornerL.jointUSR.rod1.eRod_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3065]] /* rear.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3224]] /* rear.cornerL.jointUSR.rod1.eRod_a[3] DUMMY_STATE */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,3] variable */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* rear.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3222]] /* rear.cornerL.jointUSR.rod1.eRod_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* rear.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3223]] /* rear.cornerL.jointUSR.rod1.eRod_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3066]] /* rear.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3224]] /* rear.cornerL.jointUSR.rod1.eRod_a[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Heave_eqFunction_7558(DATA *data, threadData_t *threadData);


/*
equation index: 3361
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.revolute.angle = if noEvent(rear.cornerL.jointUSR.revolute.kcos_angle == 0.0) then rear.cornerL.jointUSR.revolute.kcos_angle else ($DER.rear.cornerL.jointUSR.revolute.ksin_angle * rear.cornerL.jointUSR.revolute.kcos_angle - rear.cornerL.jointUSR.revolute.ksin_angle * $DER.rear.cornerL.jointUSR.revolute.kcos_angle) / (rear.cornerL.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (rear.cornerL.jointUSR.revolute.ksin_angle / rear.cornerL.jointUSR.revolute.kcos_angle) ^ 2.0))
*/
void Heave_eqFunction_3361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3361};
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_boolean tmp111;
  modelica_real tmp112;
  tmp111 = (modelica_boolean)((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* rear.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */) == 0.0);
  if(tmp111)
  {
    tmp112 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* rear.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */);
  }
  else
  {
    tmp109 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* rear.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */);
    tmp110 = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* rear.cornerL.jointUSR.revolute.ksin_angle DUMMY_STATE */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* rear.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */),"rear.cornerL.jointUSR.revolute.kcos_angle",equationIndexes);
    tmp112 = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[608]] /* der(rear.cornerL.jointUSR.revolute.ksin_angle) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3182]] /* rear.cornerL.jointUSR.revolute.kcos_angle DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3183]] /* rear.cornerL.jointUSR.revolute.ksin_angle DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[607]] /* der(rear.cornerL.jointUSR.revolute.kcos_angle) DUMMY_DER */))),((tmp109 * tmp109)) * (1.0 + (tmp110 * tmp110)),"rear.cornerL.jointUSR.revolute.kcos_angle ^ 2.0 * (1.0 + (rear.cornerL.jointUSR.revolute.ksin_angle / rear.cornerL.jointUSR.revolute.kcos_angle) ^ 2.0)",equationIndexes);
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* der(rear.cornerL.jointUSR.revolute.angle) DUMMY_DER */) = tmp112;
  TRACE_POP
}

/*
equation index: 3362
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.R_rel.w[1] = -$DER.rear.cornerL.jointUSR.revolute.angle
*/
void Heave_eqFunction_3362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3362};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3154]] /* rear.cornerL.jointUSR.revolute.R_rel.w[1] DUMMY_STATE */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[602]] /* der(rear.cornerL.jointUSR.revolute.angle) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_7586(DATA *data, threadData_t *threadData);


/*
equation index: 3364
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.frame_im.r_0[2] = $DER.rear.cornerL.springArm.frame_a.r_0[2] + (-0.6199999999999999) * rear.cornerL.jointUSR.revolute.R_rel.T[3,2] * rear.cornerL.springArm.frame_b.R.w[1]
*/
void Heave_eqFunction_3364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3364};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[596]] /* der(rear.cornerL.jointUSR.frame_im.r_0[2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* der(rear.cornerL.springArm.frame_a.r_0[2]) DUMMY_DER */) + (-0.6199999999999999) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* rear.cornerL.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7587(DATA *data, threadData_t *threadData);


/*
equation index: 3366
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.frame_im.r_0[3] = $DER.rear.cornerL.springArm.frame_a.r_0[3] + (-0.6199999999999999) * rear.cornerL.jointUSR.revolute.R_rel.T[3,3] * rear.cornerL.springArm.frame_b.R.w[1]
*/
void Heave_eqFunction_3366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3366};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[597]] /* der(rear.cornerL.jointUSR.frame_im.r_0[3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* der(rear.cornerL.springArm.frame_a.r_0[3]) DUMMY_DER */) + (-0.6199999999999999) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* rear.cornerL.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7562(DATA *data, threadData_t *threadData);


/*
equation index: 3368
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.der_rRod_a_L[1] = (rear.cornerL.jointUSR.frame_a.R.T[1,1] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[1] + rear.cornerL.jointUSR.frame_a.R.T[1,2] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[2] + rear.cornerL.jointUSR.frame_a.R.T[1,3] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[3] + rear.cornerL.jointUSR.frame_a.R.w[3] * rear.cornerL.jointUSR.rod1.rRod_a[2] - rear.cornerL.jointUSR.frame_a.R.w[2] * rear.cornerL.jointUSR.rod1.rRod_a[3]) / rear.cornerL.jointUSR.rod1.rodLength
*/
void Heave_eqFunction_3368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3368};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3213]] /* rear.cornerL.jointUSR.rod1.der_rRod_a_L[1] DUMMY_STATE */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3058]] /* rear.cornerL.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3059]] /* rear.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* rear.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3069]] /* rear.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3247]] /* rear.cornerL.jointUSR.rod1.rRod_a[2] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3068]] /* rear.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3248]] /* rear.cornerL.jointUSR.rod1.rRod_a[3] DUMMY_STATE */))),(data->simulationInfo->realParameter[1827] /* rear.cornerL.jointUSR.rod1.rodLength PARAM */),"rear.cornerL.jointUSR.rod1.rodLength",equationIndexes);
  TRACE_POP
}

/*
equation index: 3369
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.der_rRod_a_L[2] = (rear.cornerL.jointUSR.frame_a.R.T[2,1] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[1] + rear.cornerL.jointUSR.frame_a.R.T[2,2] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[2] + rear.cornerL.jointUSR.frame_a.R.T[2,3] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[3] + rear.cornerL.jointUSR.frame_a.R.w[1] * rear.cornerL.jointUSR.rod1.rRod_a[3] - rear.cornerL.jointUSR.frame_a.R.w[3] * rear.cornerL.jointUSR.rod1.rRod_a[1]) / rear.cornerL.jointUSR.rod1.rodLength
*/
void Heave_eqFunction_3369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3369};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3214]] /* rear.cornerL.jointUSR.rod1.der_rRod_a_L[2] DUMMY_STATE */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* rear.cornerL.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* rear.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* rear.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3067]] /* rear.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3248]] /* rear.cornerL.jointUSR.rod1.rRod_a[3] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3069]] /* rear.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3246]] /* rear.cornerL.jointUSR.rod1.rRod_a[1] DUMMY_STATE */))),(data->simulationInfo->realParameter[1827] /* rear.cornerL.jointUSR.rod1.rodLength PARAM */),"rear.cornerL.jointUSR.rod1.rodLength",equationIndexes);
  TRACE_POP
}

/*
equation index: 3370
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.der_rRod_a_L[3] = (rear.cornerL.jointUSR.frame_a.R.T[3,1] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[1] + rear.cornerL.jointUSR.frame_a.R.T[3,2] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[2] + rear.cornerL.jointUSR.frame_a.R.T[3,3] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[3] + rear.cornerL.jointUSR.frame_a.R.w[2] * rear.cornerL.jointUSR.rod1.rRod_a[1] - rear.cornerL.jointUSR.frame_a.R.w[1] * rear.cornerL.jointUSR.rod1.rRod_a[2]) / rear.cornerL.jointUSR.rod1.rodLength
*/
void Heave_eqFunction_3370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3215]] /* rear.cornerL.jointUSR.rod1.der_rRod_a_L[3] DUMMY_STATE */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3064]] /* rear.cornerL.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3065]] /* rear.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3066]] /* rear.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3068]] /* rear.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3246]] /* rear.cornerL.jointUSR.rod1.rRod_a[1] DUMMY_STATE */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3067]] /* rear.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3247]] /* rear.cornerL.jointUSR.rod1.rRod_a[2] DUMMY_STATE */))),(data->simulationInfo->realParameter[1827] /* rear.cornerL.jointUSR.rod1.rodLength PARAM */),"rear.cornerL.jointUSR.rod1.rodLength",equationIndexes);
  TRACE_POP
}
extern void Heave_eqFunction_7726(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7727(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7725(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7733(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7734(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7730(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7731(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7735(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7728(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7729(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7732(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7736(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7738(DATA *data, threadData_t *threadData);


/*
equation index: 3384
type: SIMPLE_ASSIGN
$DER.rear.cornerL.tieRod.revolute.A = (-2.0) * (rear.cornerL.tieRod.revolute.r_b[1] * $DER.rear.cornerL.tieRod.revolute.r_a[1] + $DER.rear.cornerL.tieRod.revolute.r_b[1] * rear.cornerL.tieRod.revolute.r_a[1] + rear.cornerL.tieRod.revolute.r_b[2] * $DER.rear.cornerL.tieRod.revolute.r_a[2] + $DER.rear.cornerL.tieRod.revolute.r_b[2] * rear.cornerL.tieRod.revolute.r_a[2] + rear.cornerL.tieRod.revolute.r_b[3] * $DER.rear.cornerL.tieRod.revolute.r_a[3] + $DER.rear.cornerL.tieRod.revolute.r_b[3] * rear.cornerL.tieRod.revolute.r_a[3] + (-rear.cornerL.tieRod.revolute.e_r_b) * $DER.rear.cornerL.tieRod.revolute.e_r_a - $DER.rear.cornerL.tieRod.revolute.e_r_b * rear.cornerL.tieRod.revolute.e_r_a)
*/
void Heave_eqFunction_3384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3384};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[653]] /* der(rear.cornerL.tieRod.revolute.A) DUMMY_DER */) = (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3541]] /* rear.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* der(rear.cornerL.tieRod.revolute.r_a[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* der(rear.cornerL.tieRod.revolute.r_b[1]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3538]] /* rear.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3542]] /* rear.cornerL.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* der(rear.cornerL.tieRod.revolute.r_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* der(rear.cornerL.tieRod.revolute.r_b[2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* rear.cornerL.tieRod.revolute.r_a[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3543]] /* rear.cornerL.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* der(rear.cornerL.tieRod.revolute.r_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* der(rear.cornerL.tieRod.revolute.r_b[3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* rear.cornerL.tieRod.revolute.r_a[3] DUMMY_STATE */)) + ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3524]] /* rear.cornerL.tieRod.revolute.e_r_b DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[668]] /* der(rear.cornerL.tieRod.revolute.e_r_a) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* der(rear.cornerL.tieRod.revolute.e_r_b) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3523]] /* rear.cornerL.tieRod.revolute.e_r_a DUMMY_STATE */))));
  TRACE_POP
}

/*
equation index: 3385
type: SIMPLE_ASSIGN
$DER.rear.cornerL.tieRod.revolute.B = 2.0 * (rear.cornerL.tieRod.revolute.r_b[1] * ((-0.222824801502141) * $DER.rear.cornerL.tieRod.revolute.r_a[3] + (-0.9748585065718673) * $DER.rear.cornerL.tieRod.revolute.r_a[2]) + $DER.rear.cornerL.tieRod.revolute.r_b[1] * ((-0.222824801502141) * rear.cornerL.tieRod.revolute.r_a[3] + (-0.9748585065718673) * rear.cornerL.tieRod.revolute.r_a[2]) + 0.9748585065718673 * (rear.cornerL.tieRod.revolute.r_b[2] * $DER.rear.cornerL.tieRod.revolute.r_a[1] + $DER.rear.cornerL.tieRod.revolute.r_b[2] * rear.cornerL.tieRod.revolute.r_a[1]) + (-0.222824801502141) * ((-rear.cornerL.tieRod.revolute.r_b[3]) * $DER.rear.cornerL.tieRod.revolute.r_a[1] - $DER.rear.cornerL.tieRod.revolute.r_b[3] * rear.cornerL.tieRod.revolute.r_a[1]))
*/
void Heave_eqFunction_3385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3385};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[654]] /* der(rear.cornerL.tieRod.revolute.B) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3541]] /* rear.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((-0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* der(rear.cornerL.tieRod.revolute.r_a[3]) DUMMY_DER */)) + (-0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* der(rear.cornerL.tieRod.revolute.r_a[2]) DUMMY_DER */))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* der(rear.cornerL.tieRod.revolute.r_b[1]) DUMMY_DER */)) * ((-0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* rear.cornerL.tieRod.revolute.r_a[3] DUMMY_STATE */)) + (-0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* rear.cornerL.tieRod.revolute.r_a[2] DUMMY_STATE */))) + (0.9748585065718673) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3542]] /* rear.cornerL.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* der(rear.cornerL.tieRod.revolute.r_a[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* der(rear.cornerL.tieRod.revolute.r_b[2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3538]] /* rear.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */))) + (-0.222824801502141) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3543]] /* rear.cornerL.tieRod.revolute.r_b[3] DUMMY_STATE */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* der(rear.cornerL.tieRod.revolute.r_a[1]) DUMMY_DER */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* der(rear.cornerL.tieRod.revolute.r_b[3]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3538]] /* rear.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)))));
  TRACE_POP
}
extern void Heave_eqFunction_7741(DATA *data, threadData_t *threadData);


/*
equation index: 3387
type: SIMPLE_ASSIGN
$DER.rear.cornerL.tieRod.revolute.C = 2.0 * rear.cornerL.tieRod.revolute.r_a[1] * $DER.rear.cornerL.tieRod.revolute.r_a[1] + 2.0 * rear.cornerL.tieRod.revolute.r_a[2] * $DER.rear.cornerL.tieRod.revolute.r_a[2] + 2.0 * rear.cornerL.tieRod.revolute.r_a[3] * $DER.rear.cornerL.tieRod.revolute.r_a[3] + 2.0 * rear.cornerL.tieRod.revolute.r_b[1] * $DER.rear.cornerL.tieRod.revolute.r_b[1] + 2.0 * rear.cornerL.tieRod.revolute.r_b[2] * $DER.rear.cornerL.tieRod.revolute.r_b[2] + 2.0 * rear.cornerL.tieRod.revolute.r_b[3] * $DER.rear.cornerL.tieRod.revolute.r_b[3] + (-2.0) * (rear.cornerL.tieRod.revolute.e_r_b * $DER.rear.cornerL.tieRod.revolute.e_r_a + $DER.rear.cornerL.tieRod.revolute.e_r_b * rear.cornerL.tieRod.revolute.e_r_a)
*/
void Heave_eqFunction_3387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3387};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[655]] /* der(rear.cornerL.tieRod.revolute.C) DUMMY_DER */) = (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3538]] /* rear.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[676]] /* der(rear.cornerL.tieRod.revolute.r_a[1]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3539]] /* rear.cornerL.tieRod.revolute.r_a[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[677]] /* der(rear.cornerL.tieRod.revolute.r_a[2]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3540]] /* rear.cornerL.tieRod.revolute.r_a[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[678]] /* der(rear.cornerL.tieRod.revolute.r_a[3]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3541]] /* rear.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[679]] /* der(rear.cornerL.tieRod.revolute.r_b[1]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3542]] /* rear.cornerL.tieRod.revolute.r_b[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[680]] /* der(rear.cornerL.tieRod.revolute.r_b[2]) DUMMY_DER */))) + (2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3543]] /* rear.cornerL.tieRod.revolute.r_b[3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[681]] /* der(rear.cornerL.tieRod.revolute.r_b[3]) DUMMY_DER */))) + (-2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3524]] /* rear.cornerL.tieRod.revolute.e_r_b DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[668]] /* der(rear.cornerL.tieRod.revolute.e_r_a) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[669]] /* der(rear.cornerL.tieRod.revolute.e_r_b) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3523]] /* rear.cornerL.tieRod.revolute.e_r_a DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7742(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7743(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7744(DATA *data, threadData_t *threadData);


/*
equation index: 3391
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.rod1.rRod_a[1] = rear.cornerL.jointUSR.frame_a.R.T[1,1] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[1] + rear.cornerL.jointUSR.frame_a.R.T[1,2] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[2] + rear.cornerL.jointUSR.frame_a.R.T[1,3] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[3] + rear.cornerL.jointUSR.frame_a.R.w[3] * (rear.cornerL.jointUSR.frame_a.R.T[2,1] * rear.cornerL.jointUSR.rod1.rRod_0[1] + rear.cornerL.jointUSR.frame_a.R.T[2,2] * rear.cornerL.jointUSR.rod1.rRod_0[2] + rear.cornerL.jointUSR.frame_a.R.T[2,3] * rear.cornerL.jointUSR.rod1.rRod_0[3]) - rear.cornerL.jointUSR.frame_a.R.w[2] * (rear.cornerL.jointUSR.frame_a.R.T[3,1] * rear.cornerL.jointUSR.rod1.rRod_0[1] + rear.cornerL.jointUSR.frame_a.R.T[3,2] * rear.cornerL.jointUSR.rod1.rRod_0[2] + rear.cornerL.jointUSR.frame_a.R.T[3,3] * rear.cornerL.jointUSR.rod1.rRod_0[3])
*/
void Heave_eqFunction_3391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3391};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[643]] /* der(rear.cornerL.jointUSR.rod1.rRod_a[1]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3058]] /* rear.cornerL.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3059]] /* rear.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* rear.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3069]] /* rear.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* rear.cornerL.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* rear.cornerL.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* rear.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3244]] /* rear.cornerL.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* rear.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3245]] /* rear.cornerL.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3068]] /* rear.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3064]] /* rear.cornerL.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* rear.cornerL.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3065]] /* rear.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3244]] /* rear.cornerL.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3066]] /* rear.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3245]] /* rear.cornerL.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Heave_eqFunction_7779(DATA *data, threadData_t *threadData);


/*
equation index: 3393
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.rod1.rRod_a[2] = rear.cornerL.jointUSR.frame_a.R.T[2,1] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[1] + rear.cornerL.jointUSR.frame_a.R.T[2,2] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[2] + rear.cornerL.jointUSR.frame_a.R.T[2,3] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[3] + rear.cornerL.jointUSR.frame_a.R.w[1] * (rear.cornerL.jointUSR.frame_a.R.T[3,1] * rear.cornerL.jointUSR.rod1.rRod_0[1] + rear.cornerL.jointUSR.frame_a.R.T[3,2] * rear.cornerL.jointUSR.rod1.rRod_0[2] + rear.cornerL.jointUSR.frame_a.R.T[3,3] * rear.cornerL.jointUSR.rod1.rRod_0[3]) - rear.cornerL.jointUSR.frame_a.R.w[3] * (rear.cornerL.jointUSR.frame_a.R.T[1,1] * rear.cornerL.jointUSR.rod1.rRod_0[1] + rear.cornerL.jointUSR.frame_a.R.T[1,2] * rear.cornerL.jointUSR.rod1.rRod_0[2] + rear.cornerL.jointUSR.frame_a.R.T[1,3] * rear.cornerL.jointUSR.rod1.rRod_0[3])
*/
void Heave_eqFunction_3393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3393};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[644]] /* der(rear.cornerL.jointUSR.rod1.rRod_a[2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* rear.cornerL.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* rear.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* rear.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3067]] /* rear.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3064]] /* rear.cornerL.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* rear.cornerL.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3065]] /* rear.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3244]] /* rear.cornerL.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3066]] /* rear.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3245]] /* rear.cornerL.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3069]] /* rear.cornerL.jointUSR.frame_a.R.w[3] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3058]] /* rear.cornerL.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* rear.cornerL.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3059]] /* rear.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3244]] /* rear.cornerL.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* rear.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3245]] /* rear.cornerL.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Heave_eqFunction_7781(DATA *data, threadData_t *threadData);


/*
equation index: 3395
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.rod1.rRod_a[3] = rear.cornerL.jointUSR.frame_a.R.T[3,1] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[1] + rear.cornerL.jointUSR.frame_a.R.T[3,2] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[2] + rear.cornerL.jointUSR.frame_a.R.T[3,3] * $DER.rear.cornerL.jointUSR.rod1.rRod_0[3] + rear.cornerL.jointUSR.frame_a.R.w[2] * (rear.cornerL.jointUSR.frame_a.R.T[1,1] * rear.cornerL.jointUSR.rod1.rRod_0[1] + rear.cornerL.jointUSR.frame_a.R.T[1,2] * rear.cornerL.jointUSR.rod1.rRod_0[2] + rear.cornerL.jointUSR.frame_a.R.T[1,3] * rear.cornerL.jointUSR.rod1.rRod_0[3]) - rear.cornerL.jointUSR.frame_a.R.w[1] * (rear.cornerL.jointUSR.frame_a.R.T[2,1] * rear.cornerL.jointUSR.rod1.rRod_0[1] + rear.cornerL.jointUSR.frame_a.R.T[2,2] * rear.cornerL.jointUSR.rod1.rRod_0[2] + rear.cornerL.jointUSR.frame_a.R.T[2,3] * rear.cornerL.jointUSR.rod1.rRod_0[3])
*/
void Heave_eqFunction_3395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3395};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[645]] /* der(rear.cornerL.jointUSR.rod1.rRod_a[3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3064]] /* rear.cornerL.jointUSR.frame_a.R.T[3,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[640]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[1]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3065]] /* rear.cornerL.jointUSR.frame_a.R.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[641]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3066]] /* rear.cornerL.jointUSR.frame_a.R.T[3,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[642]] /* der(rear.cornerL.jointUSR.rod1.rRod_0[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3068]] /* rear.cornerL.jointUSR.frame_a.R.w[2] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3058]] /* rear.cornerL.jointUSR.frame_a.R.T[1,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* rear.cornerL.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3059]] /* rear.cornerL.jointUSR.frame_a.R.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3244]] /* rear.cornerL.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3060]] /* rear.cornerL.jointUSR.frame_a.R.T[1,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3245]] /* rear.cornerL.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3067]] /* rear.cornerL.jointUSR.frame_a.R.w[1] DUMMY_STATE */)) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3061]] /* rear.cornerL.jointUSR.frame_a.R.T[2,1] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3243]] /* rear.cornerL.jointUSR.rod1.rRod_0[1] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3062]] /* rear.cornerL.jointUSR.frame_a.R.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3244]] /* rear.cornerL.jointUSR.rod1.rRod_0[2] DUMMY_STATE */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3063]] /* rear.cornerL.jointUSR.frame_a.R.T[2,3] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3245]] /* rear.cornerL.jointUSR.rod1.rRod_0[3] DUMMY_STATE */))));
  TRACE_POP
}
extern void Heave_eqFunction_7783(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7784(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7785(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7786(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7787(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7788(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7789(DATA *data, threadData_t *threadData);


/*
equation index: 3403
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.rod1.R_rel_ia.T[1,3] = rear.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] * $DER.rear.cornerL.jointUSR.rod1.e2_a[3] + $DER.rear.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] * rear.cornerL.jointUSR.rod1.e2_a[3] + rear.cornerL.jointUSR.rod1.e3_ia[1] * $DER.rear.cornerL.jointUSR.rod1.e3_a[3]
*/
void Heave_eqFunction_3403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3403};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[614]] /* der(rear.cornerL.jointUSR.rod1.R_rel_ia.T[1,3]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3204]] /* rear.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* der(rear.cornerL.jointUSR.rod1.e2_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[624]] /* der(rear.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3218]] /* rear.cornerL.jointUSR.rod1.e2_a[3] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[1812] /* rear.cornerL.jointUSR.rod1.e3_ia[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* der(rear.cornerL.jointUSR.rod1.e3_a[3]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3404
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.rod1.R_rel_ia.T[1,2] = rear.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] * $DER.rear.cornerL.jointUSR.rod1.e2_a[2] + $DER.rear.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] * rear.cornerL.jointUSR.rod1.e2_a[2] + rear.cornerL.jointUSR.rod1.e3_ia[1] * $DER.rear.cornerL.jointUSR.rod1.e3_a[2]
*/
void Heave_eqFunction_3404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3404};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[613]] /* der(rear.cornerL.jointUSR.rod1.R_rel_ia.T[1,2]) DUMMY_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3204]] /* rear.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* der(rear.cornerL.jointUSR.rod1.e2_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[624]] /* der(rear.cornerL.jointUSR.rod1.R_rel_ia2.T[1,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3217]] /* rear.cornerL.jointUSR.rod1.e2_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[1812] /* rear.cornerL.jointUSR.rod1.e3_ia[1] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* der(rear.cornerL.jointUSR.rod1.e3_a[2]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3405
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.rod1.R_rel_ia.T[2,2] = (-0.222824801502141) * $DER.rear.cornerL.jointUSR.rod1.eRod_a[2] + rear.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] * $DER.rear.cornerL.jointUSR.rod1.e2_a[2] + $DER.rear.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] * rear.cornerL.jointUSR.rod1.e2_a[2] + rear.cornerL.jointUSR.rod1.e3_ia[2] * $DER.rear.cornerL.jointUSR.rod1.e3_a[2]
*/
void Heave_eqFunction_3405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3405};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[616]] /* der(rear.cornerL.jointUSR.rod1.R_rel_ia.T[2,2]) DUMMY_DER */) = (-0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* der(rear.cornerL.jointUSR.rod1.eRod_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3206]] /* rear.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* der(rear.cornerL.jointUSR.rod1.e2_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* der(rear.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3217]] /* rear.cornerL.jointUSR.rod1.e2_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[1813] /* rear.cornerL.jointUSR.rod1.e3_ia[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* der(rear.cornerL.jointUSR.rod1.e3_a[2]) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 3406
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.rod1.R_rel_ia.T[3,2] = 0.9748585065718673 * $DER.rear.cornerL.jointUSR.rod1.eRod_a[2] + rear.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] * $DER.rear.cornerL.jointUSR.rod1.e2_a[2] + $DER.rear.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] * rear.cornerL.jointUSR.rod1.e2_a[2] + rear.cornerL.jointUSR.rod1.e3_ia[3] * $DER.rear.cornerL.jointUSR.rod1.e3_a[2]
*/
void Heave_eqFunction_3406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3406};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[619]] /* der(rear.cornerL.jointUSR.rod1.R_rel_ia.T[3,2]) DUMMY_DER */) = (0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[636]] /* der(rear.cornerL.jointUSR.rod1.eRod_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3208]] /* rear.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[630]] /* der(rear.cornerL.jointUSR.rod1.e2_a[2]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* der(rear.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3217]] /* rear.cornerL.jointUSR.rod1.e2_a[2] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[1814] /* rear.cornerL.jointUSR.rod1.e3_ia[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[633]] /* der(rear.cornerL.jointUSR.rod1.e3_a[2]) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_7794(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7795(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7808(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7812(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7816(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7796(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7797(DATA *data, threadData_t *threadData);


/*
equation index: 3414
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.rod1.R_rel_ia.T[2,3] = (-0.222824801502141) * $DER.rear.cornerL.jointUSR.rod1.eRod_a[3] + rear.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] * $DER.rear.cornerL.jointUSR.rod1.e2_a[3] + $DER.rear.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] * rear.cornerL.jointUSR.rod1.e2_a[3] + rear.cornerL.jointUSR.rod1.e3_ia[2] * $DER.rear.cornerL.jointUSR.rod1.e3_a[3]
*/
void Heave_eqFunction_3414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3414};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[617]] /* der(rear.cornerL.jointUSR.rod1.R_rel_ia.T[2,3]) DUMMY_DER */) = (-0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* der(rear.cornerL.jointUSR.rod1.eRod_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3206]] /* rear.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* der(rear.cornerL.jointUSR.rod1.e2_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[625]] /* der(rear.cornerL.jointUSR.rod1.R_rel_ia2.T[2,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3218]] /* rear.cornerL.jointUSR.rod1.e2_a[3] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[1813] /* rear.cornerL.jointUSR.rod1.e3_ia[2] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* der(rear.cornerL.jointUSR.rod1.e3_a[3]) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_7809(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7813(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7817(DATA *data, threadData_t *threadData);


/*
equation index: 3418
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.rod1.R_rel_ia.T[3,3] = 0.9748585065718673 * $DER.rear.cornerL.jointUSR.rod1.eRod_a[3] + rear.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] * $DER.rear.cornerL.jointUSR.rod1.e2_a[3] + $DER.rear.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] * rear.cornerL.jointUSR.rod1.e2_a[3] + rear.cornerL.jointUSR.rod1.e3_ia[3] * $DER.rear.cornerL.jointUSR.rod1.e3_a[3]
*/
void Heave_eqFunction_3418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3418};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[620]] /* der(rear.cornerL.jointUSR.rod1.R_rel_ia.T[3,3]) DUMMY_DER */) = (0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[637]] /* der(rear.cornerL.jointUSR.rod1.eRod_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3208]] /* rear.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2] DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[631]] /* der(rear.cornerL.jointUSR.rod1.e2_a[3]) DUMMY_DER */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[626]] /* der(rear.cornerL.jointUSR.rod1.R_rel_ia2.T[3,2]) DUMMY_DER */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3218]] /* rear.cornerL.jointUSR.rod1.e2_a[3] DUMMY_STATE */)) + ((data->simulationInfo->realParameter[1814] /* rear.cornerL.jointUSR.rod1.e3_ia[3] PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[634]] /* der(rear.cornerL.jointUSR.rod1.e3_a[3]) DUMMY_DER */));
  TRACE_POP
}
extern void Heave_eqFunction_7810(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7814(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7818(DATA *data, threadData_t *threadData);


/*
equation index: 3422
type: SIMPLE_ASSIGN
$DER.points[3,11,2] = $DER.rear.cornerL.springArm.frame_a.r_0[2] + 0.009999999999999981 * rear.cornerL.jointUSR.revolute.R_rel.T[3,3] * rear.cornerL.springArm.frame_b.R.w[1] + (-0.47000000000000003) * rear.cornerL.jointUSR.revolute.R_rel.T[3,2] * rear.cornerL.springArm.frame_b.R.w[1]
*/
void Heave_eqFunction_3422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3422};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[552]] /* der(points[3,11,2]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[650]] /* der(rear.cornerL.springArm.frame_a.r_0[2]) DUMMY_DER */) + (0.009999999999999981) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* rear.cornerL.springArm.frame_b.R.w[1] DUMMY_STATE */))) + (-0.47000000000000003) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* rear.cornerL.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7565(DATA *data, threadData_t *threadData);


/*
equation index: 3424
type: SIMPLE_ASSIGN
$DER.points[3,11,3] = $DER.rear.cornerL.springArm.frame_a.r_0[3] + (-0.47000000000000003) * rear.cornerL.jointUSR.revolute.R_rel.T[3,3] * rear.cornerL.springArm.frame_b.R.w[1] + 0.009999999999999981 * (-rear.cornerL.jointUSR.revolute.R_rel.T[3,2]) * rear.cornerL.springArm.frame_b.R.w[1]
*/
void Heave_eqFunction_3424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3424};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[553]] /* der(points[3,11,3]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[651]] /* der(rear.cornerL.springArm.frame_a.r_0[3]) DUMMY_DER */) + (-0.47000000000000003) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* rear.cornerL.springArm.frame_b.R.w[1] DUMMY_STATE */))) + (0.009999999999999981) * (((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3378]] /* rear.cornerL.springArm.frame_b.R.w[1] DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7567(DATA *data, threadData_t *threadData);


/*
equation index: 3426
type: SIMPLE_ASSIGN
$DER.rear.cornerL.coilover.length = 0.5 * (rear.cornerL.coilover.r_rel_0 * $DER.rear.cornerL.coilover.r_rel_0 + $DER.rear.cornerL.coilover.r_rel_0 * rear.cornerL.coilover.r_rel_0) / sqrt(rear.cornerL.coilover.r_rel_0 * rear.cornerL.coilover.r_rel_0)
*/
void Heave_eqFunction_3426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3426};
  real_array tmp113;
  real_array tmp114;
  real_array tmp115;
  real_array tmp116;
  real_array tmp117;
  real_array tmp118;
  modelica_real tmp119;
  real_array_create(&tmp113, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3014]] /* rear.cornerL.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp114, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[567]] /* der(rear.cornerL.coilover.r_rel_0[1]) DUMMY_DER */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp115, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[567]] /* der(rear.cornerL.coilover.r_rel_0[1]) DUMMY_DER */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp116, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3014]] /* rear.cornerL.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp117, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3014]] /* rear.cornerL.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp118, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3014]] /* rear.cornerL.coilover.r_rel_0[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  tmp119 = mul_real_scalar_product(tmp117, tmp118);
  if(!(tmp119 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rear.cornerL.coilover.r_rel_0 * rear.cornerL.coilover.r_rel_0) was %g should be >= 0", tmp119);
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[566]] /* der(rear.cornerL.coilover.length) DUMMY_DER */) = (0.5) * (DIVISION_SIM(mul_real_scalar_product(tmp113, tmp114) + mul_real_scalar_product(tmp115, tmp116),sqrt(tmp119),"sqrt(rear.cornerL.coilover.r_rel_0 * rear.cornerL.coilover.r_rel_0)",equationIndexes));
  TRACE_POP
}
extern void Heave_eqFunction_7569(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7570(DATA *data, threadData_t *threadData);


/*
equation index: 3429
type: SIMPLE_ASSIGN
rear.cornerL.coilover.f = rear.cornerL.coilover.c * (rear.cornerL.coilover.s - rear.cornerL.coilover.s_unstretched) + rear.cornerL.coilover.f_d
*/
void Heave_eqFunction_3429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3429};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3004]] /* rear.cornerL.coilover.f variable */) = ((data->simulationInfo->realParameter[1669] /* rear.cornerL.coilover.c PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3020]] /* rear.cornerL.coilover.s DUMMY_STATE */) - (data->simulationInfo->realParameter[1674] /* rear.cornerL.coilover.s_unstretched PARAM */)) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3005]] /* rear.cornerL.coilover.f_d variable */);
  TRACE_POP
}

/*
equation index: 3430
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.frame_a.f[1] = (-rear.cornerL.coilover.e_a[1]) * rear.cornerL.coilover.f
*/
void Heave_eqFunction_3430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3430};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* rear.cornerL.springChassis.frame_a.f[1] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2998]] /* rear.cornerL.coilover.e_a[1] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3004]] /* rear.cornerL.coilover.f variable */));
  TRACE_POP
}

/*
equation index: 3431
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.frame_a.t[2] = (-0.25) * rear.cornerL.springChassis.frame_a.f[1]
*/
void Heave_eqFunction_3431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3431};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3400]] /* rear.cornerL.springChassis.frame_a.t[2] variable */) = (-0.25) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* rear.cornerL.springChassis.frame_a.f[1] variable */));
  TRACE_POP
}

/*
equation index: 3432
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.frame_a.t[3] = 0.65 * rear.cornerL.springChassis.frame_a.f[1]
*/
void Heave_eqFunction_3432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3432};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3401]] /* rear.cornerL.springChassis.frame_a.t[3] variable */) = (0.65) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* rear.cornerL.springChassis.frame_a.f[1] variable */));
  TRACE_POP
}

/*
equation index: 3433
type: SIMPLE_ASSIGN
rear.cornerL.springArm.frame_a.f[1] = -rear.cornerL.springChassis.frame_a.f[1]
*/
void Heave_eqFunction_3433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3433};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3364]] /* rear.cornerL.springArm.frame_a.f[1] variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3396]] /* rear.cornerL.springChassis.frame_a.f[1] variable */));
  TRACE_POP
}
extern void Heave_eqFunction_7580(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7579(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7573(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7572(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7577(DATA *data, threadData_t *threadData);


/*
equation index: 3439
type: SIMPLE_ASSIGN
rear.cornerL.springArm.frame_a.f[2] = rear.cornerL.jointUSR.revolute.R_rel.T[3,2] * rear.cornerL.springChassis.frame_a.f[3] - rear.cornerL.jointUSR.revolute.R_rel.T[3,3] * rear.cornerL.springChassis.frame_a.f[2]
*/
void Heave_eqFunction_3439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3439};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3365]] /* rear.cornerL.springArm.frame_a.f[2] variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3398]] /* rear.cornerL.springChassis.frame_a.f[3] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3397]] /* rear.cornerL.springChassis.frame_a.f[2] variable */)));
  TRACE_POP
}

/*
equation index: 3440
type: SIMPLE_ASSIGN
rear.cornerL.springArm.frame_a.f[3] = (-rear.cornerL.jointUSR.revolute.R_rel.T[3,2]) * rear.cornerL.springChassis.frame_a.f[2] - rear.cornerL.jointUSR.revolute.R_rel.T[3,3] * rear.cornerL.springChassis.frame_a.f[3]
*/
void Heave_eqFunction_3440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3440};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3366]] /* rear.cornerL.springArm.frame_a.f[3] variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3152]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,2] variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3397]] /* rear.cornerL.springChassis.frame_a.f[2] variable */)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3153]] /* rear.cornerL.jointUSR.revolute.R_rel.T[3,3] variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3398]] /* rear.cornerL.springChassis.frame_a.f[3] variable */)));
  TRACE_POP
}
extern void Heave_eqFunction_7576(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7584(DATA *data, threadData_t *threadData);


/*
equation index: 3443
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.revolute.positiveBranch = AlyssaAnimation.Heave.rear.cornerL.tieRod.revolute.selectBranch(rear.cornerL.tieRod.revolute.lengthConstraint, {0.0, -0.222824801502141, 0.9748585065718673}, 0.017453292519943295 * (rear.cornerL.tieRod.revolute.phi_offset + rear.cornerL.tieRod.revolute.phi_guess), rear.cornerL.tieRod.revolute.r_a, rear.cornerL.tieRod.revolute.r_b)
*/
void Heave_eqFunction_3443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3443};
  real_array tmp120;
  real_array tmp121;
  real_array_create(&tmp120, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3538]] /* rear.cornerL.tieRod.revolute.r_a[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp121, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3541]] /* rear.cornerL.tieRod.revolute.r_b[1] DUMMY_STATE */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  (data->simulationInfo->booleanParameter[122] /* rear.cornerL.tieRod.revolute.positiveBranch PARAM */) = omc_AlyssaAnimation_Heave_rear_cornerL_tieRod_revolute_selectBranch(threadData, (data->simulationInfo->realParameter[2112] /* rear.cornerL.tieRod.revolute.lengthConstraint PARAM */), _OMC_LIT24, (0.017453292519943295) * ((data->simulationInfo->realParameter[2117] /* rear.cornerL.tieRod.revolute.phi_offset PARAM */) + (data->simulationInfo->realParameter[2116] /* rear.cornerL.tieRod.revolute.phi_guess PARAM */)), tmp120, tmp121);
  TRACE_POP
}
extern void Heave_eqFunction_7645(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7746(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7644(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7646(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7653(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7661(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7660(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7657(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7656(DATA *data, threadData_t *threadData);


/*
equation index: 3453
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.revolute.R_rel.T[1,2] = 0.9748585065718673 * sin(rear.cornerL.tieRod.revolute.angle)
*/
void Heave_eqFunction_3453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3453};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3497]] /* rear.cornerL.tieRod.revolute.R_rel.T[1,2] DUMMY_STATE */) = (0.9748585065718673) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* rear.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}

/*
equation index: 3454
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.revolute.R_rel.T[1,3] = 0.222824801502141 * sin(rear.cornerL.tieRod.revolute.angle)
*/
void Heave_eqFunction_3454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3454};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3498]] /* rear.cornerL.tieRod.revolute.R_rel.T[1,3] DUMMY_STATE */) = (0.222824801502141) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* rear.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7761(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7655(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7700(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7654(DATA *data, threadData_t *threadData);


/*
equation index: 3459
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.revolute.R_rel.T[2,1] = (-0.9748585065718673) * sin(rear.cornerL.tieRod.revolute.angle)
*/
void Heave_eqFunction_3459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3459};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3499]] /* rear.cornerL.tieRod.revolute.R_rel.T[2,1] DUMMY_STATE */) = (-0.9748585065718673) * (sin((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3508]] /* rear.cornerL.tieRod.revolute.angle DUMMY_STATE */)));
  TRACE_POP
}
extern void Heave_eqFunction_7681(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7684(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7702(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7705(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7662(DATA *data, threadData_t *threadData);

extern void Heave_eqFunction_7665(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void Heave_functionInitialEquations_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Heave_eqFunction_6512(data, threadData);
  Heave_eqFunction_2972(data, threadData);
  Heave_eqFunction_7824(data, threadData);
  Heave_eqFunction_2974(data, threadData);
  Heave_eqFunction_2975(data, threadData);
  Heave_eqFunction_7825(data, threadData);
  Heave_eqFunction_7995(data, threadData);
  Heave_eqFunction_6377(data, threadData);
  Heave_eqFunction_2979(data, threadData);
  Heave_eqFunction_2980(data, threadData);
  Heave_eqFunction_2981(data, threadData);
  Heave_eqFunction_6376(data, threadData);
  Heave_eqFunction_6513(data, threadData);
  Heave_eqFunction_2984(data, threadData);
  Heave_eqFunction_2985(data, threadData);
  Heave_eqFunction_6375(data, threadData);
  Heave_eqFunction_2987(data, threadData);
  Heave_eqFunction_2988(data, threadData);
  Heave_eqFunction_2989(data, threadData);
  Heave_eqFunction_6515(data, threadData);
  Heave_eqFunction_2991(data, threadData);
  Heave_eqFunction_7911(data, threadData);
  Heave_eqFunction_7827(data, threadData);
  Heave_eqFunction_6374(data, threadData);
  Heave_eqFunction_2995(data, threadData);
  Heave_eqFunction_2996(data, threadData);
  Heave_eqFunction_2997(data, threadData);
  Heave_eqFunction_6373(data, threadData);
  Heave_eqFunction_6514(data, threadData);
  Heave_eqFunction_3000(data, threadData);
  Heave_eqFunction_3001(data, threadData);
  Heave_eqFunction_6372(data, threadData);
  Heave_eqFunction_6516(data, threadData);
  Heave_eqFunction_6371(data, threadData);
  Heave_eqFunction_6517(data, threadData);
  Heave_eqFunction_6370(data, threadData);
  Heave_eqFunction_3007(data, threadData);
  Heave_eqFunction_6518(data, threadData);
  Heave_eqFunction_3009(data, threadData);
  Heave_eqFunction_6369(data, threadData);
  Heave_eqFunction_6519(data, threadData);
  Heave_eqFunction_6368(data, threadData);
  Heave_eqFunction_6520(data, threadData);
  Heave_eqFunction_6367(data, threadData);
  Heave_eqFunction_3015(data, threadData);
  Heave_eqFunction_6521(data, threadData);
  Heave_eqFunction_3017(data, threadData);
  Heave_eqFunction_6366(data, threadData);
  Heave_eqFunction_6522(data, threadData);
  Heave_eqFunction_6365(data, threadData);
  Heave_eqFunction_6523(data, threadData);
  Heave_eqFunction_6364(data, threadData);
  Heave_eqFunction_3023(data, threadData);
  Heave_eqFunction_6524(data, threadData);
  Heave_eqFunction_3025(data, threadData);
  Heave_eqFunction_6363(data, threadData);
  Heave_eqFunction_6525(data, threadData);
  Heave_eqFunction_6362(data, threadData);
  Heave_eqFunction_6526(data, threadData);
  Heave_eqFunction_6361(data, threadData);
  Heave_eqFunction_3031(data, threadData);
  Heave_eqFunction_6527(data, threadData);
  Heave_eqFunction_3033(data, threadData);
  Heave_eqFunction_3034(data, threadData);
  Heave_eqFunction_3035(data, threadData);
  Heave_eqFunction_3036(data, threadData);
  Heave_eqFunction_3037(data, threadData);
  Heave_eqFunction_3038(data, threadData);
  Heave_eqFunction_3039(data, threadData);
  Heave_eqFunction_6710(data, threadData);
  Heave_eqFunction_3041(data, threadData);
  Heave_eqFunction_6712(data, threadData);
  Heave_eqFunction_6713(data, threadData);
  Heave_eqFunction_3044(data, threadData);
  Heave_eqFunction_6703(data, threadData);
  Heave_eqFunction_6704(data, threadData);
  Heave_eqFunction_6705(data, threadData);
  Heave_eqFunction_6706(data, threadData);
  Heave_eqFunction_3049(data, threadData);
  Heave_eqFunction_6715(data, threadData);
  Heave_eqFunction_6716(data, threadData);
  Heave_eqFunction_6719(data, threadData);
  Heave_eqFunction_6718(data, threadData);
  Heave_eqFunction_6720(data, threadData);
  Heave_eqFunction_6760(data, threadData);
  Heave_eqFunction_6761(data, threadData);
  Heave_eqFunction_6762(data, threadData);
  Heave_eqFunction_6763(data, threadData);
  Heave_eqFunction_3059(data, threadData);
  Heave_eqFunction_3060(data, threadData);
  Heave_eqFunction_3061(data, threadData);
  Heave_eqFunction_3062(data, threadData);
  Heave_eqFunction_3063(data, threadData);
  Heave_eqFunction_3064(data, threadData);
  Heave_eqFunction_3065(data, threadData);
  Heave_eqFunction_3066(data, threadData);
  Heave_eqFunction_3067(data, threadData);
  Heave_eqFunction_3068(data, threadData);
  Heave_eqFunction_3069(data, threadData);
  Heave_eqFunction_3070(data, threadData);
  Heave_eqFunction_3071(data, threadData);
  Heave_eqFunction_3072(data, threadData);
  Heave_eqFunction_3073(data, threadData);
  Heave_eqFunction_3074(data, threadData);
  Heave_eqFunction_3075(data, threadData);
  Heave_eqFunction_3076(data, threadData);
  Heave_eqFunction_3077(data, threadData);
  Heave_eqFunction_6777(data, threadData);
  Heave_eqFunction_3079(data, threadData);
  Heave_eqFunction_6606(data, threadData);
  Heave_eqFunction_3081(data, threadData);
  Heave_eqFunction_3082(data, threadData);
  Heave_eqFunction_3083(data, threadData);
  Heave_eqFunction_3084(data, threadData);
  Heave_eqFunction_3085(data, threadData);
  Heave_eqFunction_3086(data, threadData);
  Heave_eqFunction_3087(data, threadData);
  Heave_eqFunction_3088(data, threadData);
  Heave_eqFunction_3089(data, threadData);
  Heave_eqFunction_3090(data, threadData);
  Heave_eqFunction_3091(data, threadData);
  Heave_eqFunction_3092(data, threadData);
  Heave_eqFunction_3093(data, threadData);
  Heave_eqFunction_3094(data, threadData);
  Heave_eqFunction_3095(data, threadData);
  Heave_eqFunction_6922(data, threadData);
  Heave_eqFunction_3097(data, threadData);
  Heave_eqFunction_6924(data, threadData);
  Heave_eqFunction_6925(data, threadData);
  Heave_eqFunction_3100(data, threadData);
  Heave_eqFunction_6915(data, threadData);
  Heave_eqFunction_6916(data, threadData);
  Heave_eqFunction_6917(data, threadData);
  Heave_eqFunction_6918(data, threadData);
  Heave_eqFunction_3105(data, threadData);
  Heave_eqFunction_6927(data, threadData);
  Heave_eqFunction_6928(data, threadData);
  Heave_eqFunction_6931(data, threadData);
  Heave_eqFunction_6930(data, threadData);
  Heave_eqFunction_6932(data, threadData);
  Heave_eqFunction_6972(data, threadData);
  Heave_eqFunction_6973(data, threadData);
  Heave_eqFunction_6974(data, threadData);
  Heave_eqFunction_6975(data, threadData);
  Heave_eqFunction_3115(data, threadData);
  Heave_eqFunction_3116(data, threadData);
  Heave_eqFunction_3117(data, threadData);
  Heave_eqFunction_3118(data, threadData);
  Heave_eqFunction_3119(data, threadData);
  Heave_eqFunction_3120(data, threadData);
  Heave_eqFunction_3121(data, threadData);
  Heave_eqFunction_3122(data, threadData);
  Heave_eqFunction_3123(data, threadData);
  Heave_eqFunction_3124(data, threadData);
  Heave_eqFunction_3125(data, threadData);
  Heave_eqFunction_3126(data, threadData);
  Heave_eqFunction_3127(data, threadData);
  Heave_eqFunction_3128(data, threadData);
  Heave_eqFunction_3129(data, threadData);
  Heave_eqFunction_3130(data, threadData);
  Heave_eqFunction_3131(data, threadData);
  Heave_eqFunction_3132(data, threadData);
  Heave_eqFunction_3133(data, threadData);
  Heave_eqFunction_6989(data, threadData);
  Heave_eqFunction_3135(data, threadData);
  Heave_eqFunction_6600(data, threadData);
  Heave_eqFunction_3137(data, threadData);
  Heave_eqFunction_3138(data, threadData);
  Heave_eqFunction_3139(data, threadData);
  Heave_eqFunction_3140(data, threadData);
  Heave_eqFunction_3141(data, threadData);
  Heave_eqFunction_3142(data, threadData);
  Heave_eqFunction_3143(data, threadData);
  Heave_eqFunction_3144(data, threadData);
  Heave_eqFunction_3145(data, threadData);
  Heave_eqFunction_3146(data, threadData);
  Heave_eqFunction_3147(data, threadData);
  Heave_eqFunction_3148(data, threadData);
  Heave_eqFunction_3149(data, threadData);
  Heave_eqFunction_3150(data, threadData);
  Heave_eqFunction_3151(data, threadData);
  Heave_eqFunction_3152(data, threadData);
  Heave_eqFunction_3153(data, threadData);
  Heave_eqFunction_7138(data, threadData);
  Heave_eqFunction_7139(data, threadData);
  Heave_eqFunction_3156(data, threadData);
  Heave_eqFunction_7124(data, threadData);
  Heave_eqFunction_7125(data, threadData);
  Heave_eqFunction_7126(data, threadData);
  Heave_eqFunction_7127(data, threadData);
  Heave_eqFunction_3161(data, threadData);
  Heave_eqFunction_7141(data, threadData);
  Heave_eqFunction_7142(data, threadData);
  Heave_eqFunction_7145(data, threadData);
  Heave_eqFunction_7144(data, threadData);
  Heave_eqFunction_7146(data, threadData);
  Heave_eqFunction_7186(data, threadData);
  Heave_eqFunction_7187(data, threadData);
  Heave_eqFunction_7188(data, threadData);
  Heave_eqFunction_7189(data, threadData);
  Heave_eqFunction_3171(data, threadData);
  Heave_eqFunction_3172(data, threadData);
  Heave_eqFunction_3173(data, threadData);
  Heave_eqFunction_3174(data, threadData);
  Heave_eqFunction_3175(data, threadData);
  Heave_eqFunction_3176(data, threadData);
  Heave_eqFunction_3177(data, threadData);
  Heave_eqFunction_3178(data, threadData);
  Heave_eqFunction_3179(data, threadData);
  Heave_eqFunction_3180(data, threadData);
  Heave_eqFunction_3181(data, threadData);
  Heave_eqFunction_3182(data, threadData);
  Heave_eqFunction_3183(data, threadData);
  Heave_eqFunction_3184(data, threadData);
  Heave_eqFunction_3185(data, threadData);
  Heave_eqFunction_3186(data, threadData);
  Heave_eqFunction_3187(data, threadData);
  Heave_eqFunction_3188(data, threadData);
  Heave_eqFunction_3189(data, threadData);
  Heave_eqFunction_7201(data, threadData);
  Heave_eqFunction_3191(data, threadData);
  Heave_eqFunction_6588(data, threadData);
  Heave_eqFunction_3193(data, threadData);
  Heave_eqFunction_3194(data, threadData);
  Heave_eqFunction_3195(data, threadData);
  Heave_eqFunction_3196(data, threadData);
  Heave_eqFunction_3197(data, threadData);
  Heave_eqFunction_3198(data, threadData);
  Heave_eqFunction_3199(data, threadData);
  Heave_eqFunction_3200(data, threadData);
  Heave_eqFunction_3201(data, threadData);
  Heave_eqFunction_3202(data, threadData);
  Heave_eqFunction_3203(data, threadData);
  Heave_eqFunction_3204(data, threadData);
  Heave_eqFunction_3205(data, threadData);
  Heave_eqFunction_3206(data, threadData);
  Heave_eqFunction_3207(data, threadData);
  Heave_eqFunction_3208(data, threadData);
  Heave_eqFunction_3209(data, threadData);
  Heave_eqFunction_7491(data, threadData);
  Heave_eqFunction_7492(data, threadData);
  Heave_eqFunction_3212(data, threadData);
  Heave_eqFunction_7477(data, threadData);
  Heave_eqFunction_7478(data, threadData);
  Heave_eqFunction_7479(data, threadData);
  Heave_eqFunction_7480(data, threadData);
  Heave_eqFunction_3217(data, threadData);
  Heave_eqFunction_7494(data, threadData);
  Heave_eqFunction_7495(data, threadData);
  Heave_eqFunction_7498(data, threadData);
  Heave_eqFunction_7497(data, threadData);
  Heave_eqFunction_7499(data, threadData);
  Heave_eqFunction_7539(data, threadData);
  Heave_eqFunction_7540(data, threadData);
  Heave_eqFunction_7541(data, threadData);
  Heave_eqFunction_7542(data, threadData);
  Heave_eqFunction_3227(data, threadData);
  Heave_eqFunction_3228(data, threadData);
  Heave_eqFunction_3229(data, threadData);
  Heave_eqFunction_3230(data, threadData);
  Heave_eqFunction_3231(data, threadData);
  Heave_eqFunction_3232(data, threadData);
  Heave_eqFunction_3233(data, threadData);
  Heave_eqFunction_3234(data, threadData);
  Heave_eqFunction_3235(data, threadData);
  Heave_eqFunction_3236(data, threadData);
  Heave_eqFunction_3237(data, threadData);
  Heave_eqFunction_3238(data, threadData);
  Heave_eqFunction_3239(data, threadData);
  Heave_eqFunction_3240(data, threadData);
  Heave_eqFunction_3241(data, threadData);
  Heave_eqFunction_3242(data, threadData);
  Heave_eqFunction_3243(data, threadData);
  Heave_eqFunction_3244(data, threadData);
  Heave_eqFunction_3245(data, threadData);
  Heave_eqFunction_7554(data, threadData);
  Heave_eqFunction_3247(data, threadData);
  Heave_eqFunction_6582(data, threadData);
  Heave_eqFunction_3249(data, threadData);
  Heave_eqFunction_3250(data, threadData);
  Heave_eqFunction_3251(data, threadData);
  Heave_eqFunction_3252(data, threadData);
  Heave_eqFunction_3253(data, threadData);
  Heave_eqFunction_3254(data, threadData);
  Heave_eqFunction_3255(data, threadData);
  Heave_eqFunction_3256(data, threadData);
  Heave_eqFunction_3257(data, threadData);
  Heave_eqFunction_3258(data, threadData);
  Heave_eqFunction_3259(data, threadData);
  Heave_eqFunction_3260(data, threadData);
  Heave_eqFunction_3261(data, threadData);
  Heave_eqFunction_7496(data, threadData);
  Heave_eqFunction_7500(data, threadData);
  Heave_eqFunction_7501(data, threadData);
  Heave_eqFunction_7502(data, threadData);
  Heave_eqFunction_7555(data, threadData);
  Heave_eqFunction_7556(data, threadData);
  Heave_eqFunction_7557(data, threadData);
  Heave_eqFunction_3269(data, threadData);
  Heave_eqFunction_7504(data, threadData);
  Heave_eqFunction_7559(data, threadData);
  Heave_eqFunction_7503(data, threadData);
  Heave_eqFunction_7505(data, threadData);
  Heave_eqFunction_7535(data, threadData);
  Heave_eqFunction_7506(data, threadData);
  Heave_eqFunction_7507(data, threadData);
  Heave_eqFunction_7508(data, threadData);
  Heave_eqFunction_3278(data, threadData);
  Heave_eqFunction_3279(data, threadData);
  Heave_eqFunction_7536(data, threadData);
  Heave_eqFunction_7537(data, threadData);
  Heave_eqFunction_7538(data, threadData);
  Heave_eqFunction_7543(data, threadData);
  Heave_eqFunction_7544(data, threadData);
  Heave_eqFunction_7589(data, threadData);
  Heave_eqFunction_7590(data, threadData);
  Heave_eqFunction_7591(data, threadData);
  Heave_eqFunction_7592(data, threadData);
  Heave_eqFunction_7593(data, threadData);
  Heave_eqFunction_7594(data, threadData);
  Heave_eqFunction_7595(data, threadData);
  Heave_eqFunction_7596(data, threadData);
  Heave_eqFunction_7597(data, threadData);
  Heave_eqFunction_7600(data, threadData);
  Heave_eqFunction_7599(data, threadData);
  Heave_eqFunction_7598(data, threadData);
  Heave_eqFunction_7601(data, threadData);
  Heave_eqFunction_7602(data, threadData);
  Heave_eqFunction_7604(data, threadData);
  Heave_eqFunction_7635(data, threadData);
  Heave_eqFunction_7603(data, threadData);
  Heave_eqFunction_7636(data, threadData);
  Heave_eqFunction_7606(data, threadData);
  Heave_eqFunction_7605(data, threadData);
  Heave_eqFunction_7610(data, threadData);
  Heave_eqFunction_7616(data, threadData);
  Heave_eqFunction_7625(data, threadData);
  Heave_eqFunction_7611(data, threadData);
  Heave_eqFunction_7626(data, threadData);
  Heave_eqFunction_7607(data, threadData);
  Heave_eqFunction_7609(data, threadData);
  Heave_eqFunction_7617(data, threadData);
  Heave_eqFunction_7620(data, threadData);
  Heave_eqFunction_7619(data, threadData);
  Heave_eqFunction_7618(data, threadData);
  Heave_eqFunction_7623(data, threadData);
  Heave_eqFunction_7628(data, threadData);
  Heave_eqFunction_7633(data, threadData);
  Heave_eqFunction_7631(data, threadData);
  Heave_eqFunction_7629(data, threadData);
  Heave_eqFunction_7608(data, threadData);
  Heave_eqFunction_7624(data, threadData);
  Heave_eqFunction_7627(data, threadData);
  Heave_eqFunction_3324(data, threadData);
  Heave_eqFunction_3325(data, threadData);
  Heave_eqFunction_7640(data, threadData);
  Heave_eqFunction_3327(data, threadData);
  Heave_eqFunction_7641(data, threadData);
  Heave_eqFunction_7642(data, threadData);
  Heave_eqFunction_7643(data, threadData);
  Heave_eqFunction_7612(data, threadData);
  Heave_eqFunction_7615(data, threadData);
  Heave_eqFunction_7634(data, threadData);
  Heave_eqFunction_7614(data, threadData);
  Heave_eqFunction_7632(data, threadData);
  Heave_eqFunction_7613(data, threadData);
  Heave_eqFunction_7630(data, threadData);
  Heave_eqFunction_3338(data, threadData);
  Heave_eqFunction_3339(data, threadData);
  Heave_eqFunction_3340(data, threadData);
  Heave_eqFunction_3341(data, threadData);
  Heave_eqFunction_3342(data, threadData);
  Heave_eqFunction_3343(data, threadData);
  Heave_eqFunction_3344(data, threadData);
  Heave_eqFunction_3345(data, threadData);
  Heave_eqFunction_3346(data, threadData);
  Heave_eqFunction_3347(data, threadData);
  Heave_eqFunction_3348(data, threadData);
  Heave_eqFunction_3349(data, threadData);
  Heave_eqFunction_3350(data, threadData);
  Heave_eqFunction_3351(data, threadData);
  Heave_eqFunction_3352(data, threadData);
  Heave_eqFunction_3353(data, threadData);
  Heave_eqFunction_3354(data, threadData);
  Heave_eqFunction_3355(data, threadData);
  Heave_eqFunction_3356(data, threadData);
  Heave_eqFunction_3357(data, threadData);
  Heave_eqFunction_3358(data, threadData);
  Heave_eqFunction_3359(data, threadData);
  Heave_eqFunction_7558(data, threadData);
  Heave_eqFunction_3361(data, threadData);
  Heave_eqFunction_3362(data, threadData);
  Heave_eqFunction_7586(data, threadData);
  Heave_eqFunction_3364(data, threadData);
  Heave_eqFunction_7587(data, threadData);
  Heave_eqFunction_3366(data, threadData);
  Heave_eqFunction_7562(data, threadData);
  Heave_eqFunction_3368(data, threadData);
  Heave_eqFunction_3369(data, threadData);
  Heave_eqFunction_3370(data, threadData);
  Heave_eqFunction_7726(data, threadData);
  Heave_eqFunction_7727(data, threadData);
  Heave_eqFunction_7725(data, threadData);
  Heave_eqFunction_7733(data, threadData);
  Heave_eqFunction_7734(data, threadData);
  Heave_eqFunction_7730(data, threadData);
  Heave_eqFunction_7731(data, threadData);
  Heave_eqFunction_7735(data, threadData);
  Heave_eqFunction_7728(data, threadData);
  Heave_eqFunction_7729(data, threadData);
  Heave_eqFunction_7732(data, threadData);
  Heave_eqFunction_7736(data, threadData);
  Heave_eqFunction_7738(data, threadData);
  Heave_eqFunction_3384(data, threadData);
  Heave_eqFunction_3385(data, threadData);
  Heave_eqFunction_7741(data, threadData);
  Heave_eqFunction_3387(data, threadData);
  Heave_eqFunction_7742(data, threadData);
  Heave_eqFunction_7743(data, threadData);
  Heave_eqFunction_7744(data, threadData);
  Heave_eqFunction_3391(data, threadData);
  Heave_eqFunction_7779(data, threadData);
  Heave_eqFunction_3393(data, threadData);
  Heave_eqFunction_7781(data, threadData);
  Heave_eqFunction_3395(data, threadData);
  Heave_eqFunction_7783(data, threadData);
  Heave_eqFunction_7784(data, threadData);
  Heave_eqFunction_7785(data, threadData);
  Heave_eqFunction_7786(data, threadData);
  Heave_eqFunction_7787(data, threadData);
  Heave_eqFunction_7788(data, threadData);
  Heave_eqFunction_7789(data, threadData);
  Heave_eqFunction_3403(data, threadData);
  Heave_eqFunction_3404(data, threadData);
  Heave_eqFunction_3405(data, threadData);
  Heave_eqFunction_3406(data, threadData);
  Heave_eqFunction_7794(data, threadData);
  Heave_eqFunction_7795(data, threadData);
  Heave_eqFunction_7808(data, threadData);
  Heave_eqFunction_7812(data, threadData);
  Heave_eqFunction_7816(data, threadData);
  Heave_eqFunction_7796(data, threadData);
  Heave_eqFunction_7797(data, threadData);
  Heave_eqFunction_3414(data, threadData);
  Heave_eqFunction_7809(data, threadData);
  Heave_eqFunction_7813(data, threadData);
  Heave_eqFunction_7817(data, threadData);
  Heave_eqFunction_3418(data, threadData);
  Heave_eqFunction_7810(data, threadData);
  Heave_eqFunction_7814(data, threadData);
  Heave_eqFunction_7818(data, threadData);
  Heave_eqFunction_3422(data, threadData);
  Heave_eqFunction_7565(data, threadData);
  Heave_eqFunction_3424(data, threadData);
  Heave_eqFunction_7567(data, threadData);
  Heave_eqFunction_3426(data, threadData);
  Heave_eqFunction_7569(data, threadData);
  Heave_eqFunction_7570(data, threadData);
  Heave_eqFunction_3429(data, threadData);
  Heave_eqFunction_3430(data, threadData);
  Heave_eqFunction_3431(data, threadData);
  Heave_eqFunction_3432(data, threadData);
  Heave_eqFunction_3433(data, threadData);
  Heave_eqFunction_7580(data, threadData);
  Heave_eqFunction_7579(data, threadData);
  Heave_eqFunction_7573(data, threadData);
  Heave_eqFunction_7572(data, threadData);
  Heave_eqFunction_7577(data, threadData);
  Heave_eqFunction_3439(data, threadData);
  Heave_eqFunction_3440(data, threadData);
  Heave_eqFunction_7576(data, threadData);
  Heave_eqFunction_7584(data, threadData);
  Heave_eqFunction_3443(data, threadData);
  Heave_eqFunction_7645(data, threadData);
  Heave_eqFunction_7746(data, threadData);
  Heave_eqFunction_7644(data, threadData);
  Heave_eqFunction_7646(data, threadData);
  Heave_eqFunction_7653(data, threadData);
  Heave_eqFunction_7661(data, threadData);
  Heave_eqFunction_7660(data, threadData);
  Heave_eqFunction_7657(data, threadData);
  Heave_eqFunction_7656(data, threadData);
  Heave_eqFunction_3453(data, threadData);
  Heave_eqFunction_3454(data, threadData);
  Heave_eqFunction_7761(data, threadData);
  Heave_eqFunction_7655(data, threadData);
  Heave_eqFunction_7700(data, threadData);
  Heave_eqFunction_7654(data, threadData);
  Heave_eqFunction_3459(data, threadData);
  Heave_eqFunction_7681(data, threadData);
  Heave_eqFunction_7684(data, threadData);
  Heave_eqFunction_7702(data, threadData);
  Heave_eqFunction_7705(data, threadData);
  Heave_eqFunction_7662(data, threadData);
  Heave_eqFunction_7665(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif