#include "Steering_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 1486
type: SIMPLE_ASSIGN
rear.cornerL.upright.cylinder.color[3] = 255.0
*/
void Steering_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3693]] /* rear.cornerL.upright.cylinder.color[3] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 1487
type: SIMPLE_ASSIGN
rear.cornerL.upright.cylinder.color[2] = 128.0
*/
void Steering_eqFunction_1487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3692]] /* rear.cornerL.upright.cylinder.color[2] variable */) = 128.0;
  TRACE_POP
}

/*
equation index: 1488
type: SIMPLE_ASSIGN
rear.cornerL.upright.cylinder.color[1] = 0.0
*/
void Steering_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3691]] /* rear.cornerL.upright.cylinder.color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1489
type: SIMPLE_ASSIGN
rear.cornerL.upright.sphereColor[1] = 0.0
*/
void Steering_eqFunction_1489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1489};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[204]] /* rear.cornerL.upright.sphereColor[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1490
type: SIMPLE_ASSIGN
rear.cornerL.upright.sphereColor[2] = 128
*/
void Steering_eqFunction_1490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1490};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[205]] /* rear.cornerL.upright.sphereColor[2] DISCRETE */) = ((modelica_integer) 128);
  TRACE_POP
}

/*
equation index: 1491
type: SIMPLE_ASSIGN
rear.cornerL.upright.sphereColor[3] = 255
*/
void Steering_eqFunction_1491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1491};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[206]] /* rear.cornerL.upright.sphereColor[3] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 1492
type: SIMPLE_ASSIGN
$START.rear.cornerL.upright.Q[1] = rear.cornerL.upright.Q_start[1]
*/
void Steering_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1492};
  (data->modelData->realVarsData[3684] /* rear.cornerL.upright.Q[1] variable */).attribute .start = (data->simulationInfo->realParameter[2266] /* rear.cornerL.upright.Q_start[1] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3684]] /* rear.cornerL.upright.Q[1] variable */) = (data->modelData->realVarsData[3684] /* rear.cornerL.upright.Q[1] variable */).attribute .start;
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3684].info /* rear.cornerL.upright.Q[1] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3684]] /* rear.cornerL.upright.Q[1] variable */));
  TRACE_POP
}

/*
equation index: 1493
type: SIMPLE_ASSIGN
rear.cornerL.upright.Q[1] = 0.0
*/
void Steering_eqFunction_1493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1493};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3684]] /* rear.cornerL.upright.Q[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1494
type: SIMPLE_ASSIGN
$START.rear.cornerL.upright.Q[2] = rear.cornerL.upright.Q_start[2]
*/
void Steering_eqFunction_1494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1494};
  (data->modelData->realVarsData[3685] /* rear.cornerL.upright.Q[2] variable */).attribute .start = (data->simulationInfo->realParameter[2267] /* rear.cornerL.upright.Q_start[2] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3685]] /* rear.cornerL.upright.Q[2] variable */) = (data->modelData->realVarsData[3685] /* rear.cornerL.upright.Q[2] variable */).attribute .start;
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3685].info /* rear.cornerL.upright.Q[2] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3685]] /* rear.cornerL.upright.Q[2] variable */));
  TRACE_POP
}

/*
equation index: 1495
type: SIMPLE_ASSIGN
rear.cornerL.upright.Q[2] = 0.0
*/
void Steering_eqFunction_1495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1495};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3685]] /* rear.cornerL.upright.Q[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1496
type: SIMPLE_ASSIGN
$START.rear.cornerL.upright.Q[3] = rear.cornerL.upright.Q_start[3]
*/
void Steering_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1496};
  (data->modelData->realVarsData[3686] /* rear.cornerL.upright.Q[3] variable */).attribute .start = (data->simulationInfo->realParameter[2268] /* rear.cornerL.upright.Q_start[3] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3686]] /* rear.cornerL.upright.Q[3] variable */) = (data->modelData->realVarsData[3686] /* rear.cornerL.upright.Q[3] variable */).attribute .start;
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3686].info /* rear.cornerL.upright.Q[3] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3686]] /* rear.cornerL.upright.Q[3] variable */));
  TRACE_POP
}

/*
equation index: 1497
type: SIMPLE_ASSIGN
rear.cornerL.upright.Q[3] = 0.0
*/
void Steering_eqFunction_1497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1497};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3686]] /* rear.cornerL.upright.Q[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1498
type: SIMPLE_ASSIGN
$START.rear.cornerL.upright.Q[4] = rear.cornerL.upright.Q_start[4]
*/
void Steering_eqFunction_1498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1498};
  (data->modelData->realVarsData[3687] /* rear.cornerL.upright.Q[4] variable */).attribute .start = (data->simulationInfo->realParameter[2269] /* rear.cornerL.upright.Q_start[4] PARAM */);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3687]] /* rear.cornerL.upright.Q[4] variable */) = (data->modelData->realVarsData[3687] /* rear.cornerL.upright.Q[4] variable */).attribute .start;
    infoStreamPrint(OMC_LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3687].info /* rear.cornerL.upright.Q[4] */.name, (modelica_real) (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3687]] /* rear.cornerL.upright.Q[4] variable */));
  TRACE_POP
}

/*
equation index: 1499
type: SIMPLE_ASSIGN
rear.cornerL.upright.Q[4] = 1.0
*/
void Steering_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1499};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3687]] /* rear.cornerL.upright.Q[4] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1500
type: SIMPLE_ASSIGN
rear.cornerL.upright.phi[1] = 0.0
*/
void Steering_eqFunction_1500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1500};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3722]] /* rear.cornerL.upright.phi[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1501
type: SIMPLE_ASSIGN
rear.cornerL.upright.phi[2] = 0.0
*/
void Steering_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1501};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3723]] /* rear.cornerL.upright.phi[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1502
type: SIMPLE_ASSIGN
rear.cornerL.upright.phi[3] = 0.0
*/
void Steering_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1502};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3724]] /* rear.cornerL.upright.phi[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1503
type: SIMPLE_ASSIGN
rear.cornerL.upright.phi_d[1] = 0.0
*/
void Steering_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1503};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3725]] /* rear.cornerL.upright.phi_d[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1504
type: SIMPLE_ASSIGN
rear.cornerL.upright.phi_d[2] = 0.0
*/
void Steering_eqFunction_1504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1504};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3726]] /* rear.cornerL.upright.phi_d[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1505
type: SIMPLE_ASSIGN
rear.cornerL.upright.phi_d[3] = 0.0
*/
void Steering_eqFunction_1505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1505};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3727]] /* rear.cornerL.upright.phi_d[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1506
type: SIMPLE_ASSIGN
rear.cornerL.upright.phi_dd[1] = 0.0
*/
void Steering_eqFunction_1506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1506};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3728]] /* rear.cornerL.upright.phi_dd[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1507
type: SIMPLE_ASSIGN
rear.cornerL.upright.phi_dd[2] = 0.0
*/
void Steering_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1507};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3729]] /* rear.cornerL.upright.phi_dd[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1508
type: SIMPLE_ASSIGN
rear.cornerL.upright.phi_dd[3] = 0.0
*/
void Steering_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1508};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3730]] /* rear.cornerL.upright.phi_dd[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1509
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.relativePosition.frame_resolve.f[1] = 0.0
*/
void Steering_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1509};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3796]] /* rear.cornerL.wheelPosition.relativePosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1510
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.relativePosition.frame_resolve.f[2] = 0.0
*/
void Steering_eqFunction_1510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1510};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3797]] /* rear.cornerL.wheelPosition.relativePosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1511
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.relativePosition.frame_resolve.f[3] = 0.0
*/
void Steering_eqFunction_1511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1511};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3798]] /* rear.cornerL.wheelPosition.relativePosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1512
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.relativePosition.frame_resolve.t[1] = 0.0
*/
void Steering_eqFunction_1512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1512};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3799]] /* rear.cornerL.wheelPosition.relativePosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1513
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.relativePosition.frame_resolve.t[2] = 0.0
*/
void Steering_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1513};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3800]] /* rear.cornerL.wheelPosition.relativePosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1514
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.relativePosition.frame_resolve.t[3] = 0.0
*/
void Steering_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1514};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3801]] /* rear.cornerL.wheelPosition.relativePosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1515
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.w[1] = 0.0
*/
void Steering_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1515};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3811]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1516
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.w[2] = 0.0
*/
void Steering_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1516};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3812]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1517
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.w[3] = 0.0
*/
void Steering_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3813]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1518
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[1,1] = 1.0
*/
void Steering_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1518};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3802]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1519
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[1,2] = 0.0
*/
void Steering_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1519};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3803]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1520
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[1,3] = 0.0
*/
void Steering_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3804]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1521
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[2,1] = 0.0
*/
void Steering_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3805]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1522
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[2,2] = 1.0
*/
void Steering_eqFunction_1522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1522};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3806]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1523
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[2,3] = 0.0
*/
void Steering_eqFunction_1523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3807]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1524
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[3,1] = 0.0
*/
void Steering_eqFunction_1524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1524};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3808]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1525
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[3,2] = 0.0
*/
void Steering_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3809]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1526
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[3,3] = 1.0
*/
void Steering_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1526};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3810]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1527
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.r_0[1] = 0.0
*/
void Steering_eqFunction_1527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3817]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.r_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1528
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.r_0[2] = 0.0
*/
void Steering_eqFunction_1528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1528};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3818]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.r_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1529
type: SIMPLE_ASSIGN
rear.cornerL.wheelPosition.zeroPosition.frame_resolve.r_0[3] = 0.0
*/
void Steering_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3819]] /* rear.cornerL.wheelPosition.zeroPosition.frame_resolve.r_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1530
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.shape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1530};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3659]] /* rear.cornerL.ucaMount.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1531
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.shape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3660]] /* rear.cornerL.ucaMount.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1532
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.shape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1532};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3661]] /* rear.cornerL.ucaMount.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1533
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.shape.lengthDirection[1] = 0.0
*/
void Steering_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3656]] /* rear.cornerL.ucaMount.shape.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1534
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.shape.lengthDirection[2] = -0.47
*/
void Steering_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3657]] /* rear.cornerL.ucaMount.shape.lengthDirection[2] variable */) = -0.47;
  TRACE_POP
}

/*
equation index: 1535
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.shape.lengthDirection[3] = -0.2
*/
void Steering_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3658]] /* rear.cornerL.ucaMount.shape.lengthDirection[3] variable */) = -0.2;
  TRACE_POP
}

/*
equation index: 1536
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.shape.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1536};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3662]] /* rear.cornerL.ucaMount.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1537
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.shape.widthDirection[2] = 1.0
*/
void Steering_eqFunction_1537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3663]] /* rear.cornerL.ucaMount.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1538
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.shape.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3664]] /* rear.cornerL.ucaMount.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1539
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.shape.color[3] = 155.0
*/
void Steering_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3654]] /* rear.cornerL.ucaMount.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1540
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.shape.color[2] = 155.0
*/
void Steering_eqFunction_1540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1540};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3653]] /* rear.cornerL.ucaMount.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1541
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.shape.color[1] = 155.0
*/
void Steering_eqFunction_1541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1541};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3652]] /* rear.cornerL.ucaMount.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1542
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.color[1] = 155
*/
void Steering_eqFunction_1542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1542};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[198]] /* rear.cornerL.ucaMount.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1543
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.color[2] = 155
*/
void Steering_eqFunction_1543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1543};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[199]] /* rear.cornerL.ucaMount.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1544
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.color[3] = 155
*/
void Steering_eqFunction_1544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1544};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[200]] /* rear.cornerL.ucaMount.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1545
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.cylinder.r_shape[1] = (-rear.cornerL.ucaPivot.e[1]) * 0.5 * rear.cornerL.ucaPivot.cylinderLength
*/
void Steering_eqFunction_1545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3674]] /* rear.cornerL.ucaPivot.cylinder.r_shape[1] variable */) = ((-(data->simulationInfo->realParameter[2237] /* rear.cornerL.ucaPivot.e[1] PARAM */))) * ((0.5) * ((data->simulationInfo->realParameter[2236] /* rear.cornerL.ucaPivot.cylinderLength PARAM */)));
  TRACE_POP
}

/*
equation index: 1546
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.cylinder.r_shape[2] = (-rear.cornerL.ucaPivot.e[2]) * 0.5 * rear.cornerL.ucaPivot.cylinderLength
*/
void Steering_eqFunction_1546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1546};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3675]] /* rear.cornerL.ucaPivot.cylinder.r_shape[2] variable */) = ((-(data->simulationInfo->realParameter[2238] /* rear.cornerL.ucaPivot.e[2] PARAM */))) * ((0.5) * ((data->simulationInfo->realParameter[2236] /* rear.cornerL.ucaPivot.cylinderLength PARAM */)));
  TRACE_POP
}

/*
equation index: 1547
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.cylinder.r_shape[3] = (-rear.cornerL.ucaPivot.e[3]) * 0.5 * rear.cornerL.ucaPivot.cylinderLength
*/
void Steering_eqFunction_1547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1547};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3676]] /* rear.cornerL.ucaPivot.cylinder.r_shape[3] variable */) = ((-(data->simulationInfo->realParameter[2239] /* rear.cornerL.ucaPivot.e[3] PARAM */))) * ((0.5) * ((data->simulationInfo->realParameter[2236] /* rear.cornerL.ucaPivot.cylinderLength PARAM */)));
  TRACE_POP
}

/*
equation index: 1548
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.cylinder.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1548};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3677]] /* rear.cornerL.ucaPivot.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1549
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.cylinder.widthDirection[2] = 1.0
*/
void Steering_eqFunction_1549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1549};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3678]] /* rear.cornerL.ucaPivot.cylinder.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1550
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.cylinder.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1550};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3679]] /* rear.cornerL.ucaPivot.cylinder.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1551
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.cylinder.color[3] = 0.0
*/
void Steering_eqFunction_1551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1551};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3672]] /* rear.cornerL.ucaPivot.cylinder.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1552
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.cylinder.color[2] = 0.0
*/
void Steering_eqFunction_1552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3671]] /* rear.cornerL.ucaPivot.cylinder.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1553
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.cylinder.color[1] = 255.0
*/
void Steering_eqFunction_1553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3670]] /* rear.cornerL.ucaPivot.cylinder.color[1] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 1554
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.cylinderColor[1] = 255
*/
void Steering_eqFunction_1554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1554};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[201]] /* rear.cornerL.ucaPivot.cylinderColor[1] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 1555
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.cylinderColor[2] = 0.0
*/
void Steering_eqFunction_1555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1555};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[202]] /* rear.cornerL.ucaPivot.cylinderColor[2] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1556
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.cylinderColor[3] = 0.0
*/
void Steering_eqFunction_1556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1556};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[203]] /* rear.cornerL.ucaPivot.cylinderColor[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1557
type: SIMPLE_ASSIGN
rear.cornerL.uca.shape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1557};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3640]] /* rear.cornerL.uca.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1558
type: SIMPLE_ASSIGN
rear.cornerL.uca.shape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3641]] /* rear.cornerL.uca.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1559
type: SIMPLE_ASSIGN
rear.cornerL.uca.shape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3642]] /* rear.cornerL.uca.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1560
type: SIMPLE_ASSIGN
rear.cornerL.uca.shape.lengthDirection[1] = 0.0
*/
void Steering_eqFunction_1560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3637]] /* rear.cornerL.uca.shape.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1561
type: SIMPLE_ASSIGN
rear.cornerL.uca.shape.lengthDirection[2] = -0.4
*/
void Steering_eqFunction_1561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1561};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3638]] /* rear.cornerL.uca.shape.lengthDirection[2] variable */) = -0.4;
  TRACE_POP
}

/*
equation index: 1562
type: SIMPLE_ASSIGN
rear.cornerL.uca.shape.lengthDirection[3] = 0.0
*/
void Steering_eqFunction_1562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3639]] /* rear.cornerL.uca.shape.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1563
type: SIMPLE_ASSIGN
rear.cornerL.uca.shape.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1563};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3643]] /* rear.cornerL.uca.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1564
type: SIMPLE_ASSIGN
rear.cornerL.uca.shape.widthDirection[2] = 1.0
*/
void Steering_eqFunction_1564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3644]] /* rear.cornerL.uca.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1565
type: SIMPLE_ASSIGN
rear.cornerL.uca.shape.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3645]] /* rear.cornerL.uca.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1566
type: SIMPLE_ASSIGN
rear.cornerL.uca.shape.color[3] = 155.0
*/
void Steering_eqFunction_1566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3636]] /* rear.cornerL.uca.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1567
type: SIMPLE_ASSIGN
rear.cornerL.uca.shape.color[2] = 155.0
*/
void Steering_eqFunction_1567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3635]] /* rear.cornerL.uca.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1568
type: SIMPLE_ASSIGN
rear.cornerL.uca.shape.color[1] = 155.0
*/
void Steering_eqFunction_1568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3634]] /* rear.cornerL.uca.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1569
type: SIMPLE_ASSIGN
rear.cornerL.uca.color[1] = 155
*/
void Steering_eqFunction_1569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1569};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[195]] /* rear.cornerL.uca.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1570
type: SIMPLE_ASSIGN
rear.cornerL.uca.color[2] = 155
*/
void Steering_eqFunction_1570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1570};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[196]] /* rear.cornerL.uca.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1571
type: SIMPLE_ASSIGN
rear.cornerL.uca.color[3] = 155
*/
void Steering_eqFunction_1571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1571};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[197]] /* rear.cornerL.uca.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1572
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.shape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1572};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3337]] /* rear.cornerL.lcaMount.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1573
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.shape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3338]] /* rear.cornerL.lcaMount.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1574
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.shape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1574};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3339]] /* rear.cornerL.lcaMount.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1575
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.shape.lengthDirection[1] = 0.0
*/
void Steering_eqFunction_1575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1575};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3334]] /* rear.cornerL.lcaMount.shape.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1576
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.shape.lengthDirection[2] = -0.33
*/
void Steering_eqFunction_1576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3335]] /* rear.cornerL.lcaMount.shape.lengthDirection[2] variable */) = -0.33;
  TRACE_POP
}

/*
equation index: 1577
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.shape.lengthDirection[3] = 0.15
*/
void Steering_eqFunction_1577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3336]] /* rear.cornerL.lcaMount.shape.lengthDirection[3] variable */) = 0.15;
  TRACE_POP
}

/*
equation index: 1578
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.shape.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1578};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3340]] /* rear.cornerL.lcaMount.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1579
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.shape.widthDirection[2] = 1.0
*/
void Steering_eqFunction_1579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1579};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3341]] /* rear.cornerL.lcaMount.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1580
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.shape.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1580};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3342]] /* rear.cornerL.lcaMount.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1581
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.shape.color[3] = 155.0
*/
void Steering_eqFunction_1581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3332]] /* rear.cornerL.lcaMount.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1582
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.shape.color[2] = 155.0
*/
void Steering_eqFunction_1582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1582};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3331]] /* rear.cornerL.lcaMount.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1583
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.shape.color[1] = 155.0
*/
void Steering_eqFunction_1583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3330]] /* rear.cornerL.lcaMount.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1584
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.color[1] = 155
*/
void Steering_eqFunction_1584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1584};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[168]] /* rear.cornerL.lcaMount.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1585
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.color[2] = 155
*/
void Steering_eqFunction_1585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1585};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[169]] /* rear.cornerL.lcaMount.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1586
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.color[3] = 155
*/
void Steering_eqFunction_1586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1586};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[170]] /* rear.cornerL.lcaMount.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1587
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.cylinder.r_shape[1] = 0.5 * rear.cornerL.jointUSR.revolute.cylinderLength
*/
void Steering_eqFunction_1587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3166]] /* rear.cornerL.jointUSR.revolute.cylinder.r_shape[1] variable */) = (0.5) * ((data->simulationInfo->realParameter[1789] /* rear.cornerL.jointUSR.revolute.cylinderLength PARAM */));
  TRACE_POP
}

/*
equation index: 1588
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.cylinder.r_shape[2] = 0.0
*/
void Steering_eqFunction_1588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3167]] /* rear.cornerL.jointUSR.revolute.cylinder.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1589
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.cylinder.r_shape[3] = 0.0
*/
void Steering_eqFunction_1589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1589};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3168]] /* rear.cornerL.jointUSR.revolute.cylinder.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1590
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.cylinder.lengthDirection[1] = -1.0
*/
void Steering_eqFunction_1590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1590};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3163]] /* rear.cornerL.jointUSR.revolute.cylinder.lengthDirection[1] variable */) = -1.0;
  TRACE_POP
}

/*
equation index: 1591
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.cylinder.lengthDirection[2] = 0.0
*/
void Steering_eqFunction_1591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3164]] /* rear.cornerL.jointUSR.revolute.cylinder.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1592
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.cylinder.lengthDirection[3] = 0.0
*/
void Steering_eqFunction_1592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1592};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3165]] /* rear.cornerL.jointUSR.revolute.cylinder.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1593
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.cylinder.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1593};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3169]] /* rear.cornerL.jointUSR.revolute.cylinder.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1594
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.cylinder.widthDirection[2] = 1.0
*/
void Steering_eqFunction_1594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1594};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3170]] /* rear.cornerL.jointUSR.revolute.cylinder.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1595
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.cylinder.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1595};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3171]] /* rear.cornerL.jointUSR.revolute.cylinder.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1596
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.cylinder.color[3] = 0.0
*/
void Steering_eqFunction_1596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1596};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3161]] /* rear.cornerL.jointUSR.revolute.cylinder.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1597
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.cylinder.color[2] = 0.0
*/
void Steering_eqFunction_1597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1597};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3160]] /* rear.cornerL.jointUSR.revolute.cylinder.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1598
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.cylinder.color[1] = 255.0
*/
void Steering_eqFunction_1598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1598};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3159]] /* rear.cornerL.jointUSR.revolute.cylinder.color[1] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 1599
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revoluteColor[1] = 255
*/
void Steering_eqFunction_1599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1599};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[159]] /* rear.cornerL.jointUSR.revoluteColor[1] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 1600
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revoluteColor[2] = 0.0
*/
void Steering_eqFunction_1600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1600};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[160]] /* rear.cornerL.jointUSR.revoluteColor[2] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1601
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revoluteColor[3] = 0.0
*/
void Steering_eqFunction_1601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1601};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[161]] /* rear.cornerL.jointUSR.revoluteColor[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1602
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.bearing.phi = 0.0
*/
void Steering_eqFunction_1602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1602};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3158]] /* rear.cornerL.jointUSR.revolute.bearing.phi variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1603
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodShape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1603};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3256]] /* rear.cornerL.jointUSR.rod1.rodShape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1604
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodShape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1604};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3257]] /* rear.cornerL.jointUSR.rod1.rodShape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1605
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodShape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1605};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3258]] /* rear.cornerL.jointUSR.rod1.rodShape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1606
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodShape.lengthDirection[1] = 0.0
*/
void Steering_eqFunction_1606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3253]] /* rear.cornerL.jointUSR.rod1.rodShape.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1607
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodShape.lengthDirection[2] = -0.222824801502141
*/
void Steering_eqFunction_1607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1607};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3254]] /* rear.cornerL.jointUSR.rod1.rodShape.lengthDirection[2] variable */) = -0.222824801502141;
  TRACE_POP
}

/*
equation index: 1608
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodShape.lengthDirection[3] = 0.9748585065718673
*/
void Steering_eqFunction_1608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1608};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3255]] /* rear.cornerL.jointUSR.rod1.rodShape.lengthDirection[3] variable */) = 0.9748585065718673;
  TRACE_POP
}

/*
equation index: 1609
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodShape.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1609};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3259]] /* rear.cornerL.jointUSR.rod1.rodShape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1610
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodShape.widthDirection[2] = 0.9748585065718673
*/
void Steering_eqFunction_1610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3260]] /* rear.cornerL.jointUSR.rod1.rodShape.widthDirection[2] variable */) = 0.9748585065718673;
  TRACE_POP
}

/*
equation index: 1611
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodShape.widthDirection[3] = 0.222824801502141
*/
void Steering_eqFunction_1611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3261]] /* rear.cornerL.jointUSR.rod1.rodShape.widthDirection[3] variable */) = 0.222824801502141;
  TRACE_POP
}

/*
equation index: 1612
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.sphericalShape_b.r_shape[1] = (-0.5) * rear.cornerL.jointUSR.rod1.sphereDiameter
*/
void Steering_eqFunction_1612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1612};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3269]] /* rear.cornerL.jointUSR.rod1.sphericalShape_b.r_shape[1] variable */) = (-0.5) * ((data->simulationInfo->realParameter[1834] /* rear.cornerL.jointUSR.rod1.sphereDiameter PARAM */));
  TRACE_POP
}

/*
equation index: 1613
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.sphericalShape_b.r_shape[2] = 0.0
*/
void Steering_eqFunction_1613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1613};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3270]] /* rear.cornerL.jointUSR.rod1.sphericalShape_b.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1614
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.sphericalShape_b.r_shape[3] = 0.0
*/
void Steering_eqFunction_1614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1614};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3271]] /* rear.cornerL.jointUSR.rod1.sphericalShape_b.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1615
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.sphericalShape_b.lengthDirection[1] = 1.0
*/
void Steering_eqFunction_1615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1615};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3266]] /* rear.cornerL.jointUSR.rod1.sphericalShape_b.lengthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1616
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.sphericalShape_b.lengthDirection[2] = 0.0
*/
void Steering_eqFunction_1616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1616};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3267]] /* rear.cornerL.jointUSR.rod1.sphericalShape_b.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1617
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.sphericalShape_b.lengthDirection[3] = 0.0
*/
void Steering_eqFunction_1617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1617};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3268]] /* rear.cornerL.jointUSR.rod1.sphericalShape_b.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1618
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.sphericalShape_b.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1618};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3272]] /* rear.cornerL.jointUSR.rod1.sphericalShape_b.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1619
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.sphericalShape_b.widthDirection[2] = 1.0
*/
void Steering_eqFunction_1619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1619};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3273]] /* rear.cornerL.jointUSR.rod1.sphericalShape_b.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1620
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.sphericalShape_b.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1620};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3274]] /* rear.cornerL.jointUSR.rod1.sphericalShape_b.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1621
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.sphericalShape_b.color[3] = 0.0
*/
void Steering_eqFunction_1621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1621};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3264]] /* rear.cornerL.jointUSR.rod1.sphericalShape_b.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1622
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.sphericalShape_b.color[2] = 0.0
*/
void Steering_eqFunction_1622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1622};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3263]] /* rear.cornerL.jointUSR.rod1.sphericalShape_b.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1623
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.sphericalShape_b.color[1] = 255.0
*/
void Steering_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1623};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3262]] /* rear.cornerL.jointUSR.rod1.sphericalShape_b.color[1] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 1624
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.sphereColor[1] = 255
*/
void Steering_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1624};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[165]] /* rear.cornerL.jointUSR.sphereColor[1] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 1625
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.sphereColor[2] = 0.0
*/
void Steering_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1625};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[166]] /* rear.cornerL.jointUSR.sphereColor[2] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1626
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.sphereColor[3] = 0.0
*/
void Steering_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1626};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[167]] /* rear.cornerL.jointUSR.sphereColor[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1627
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape1.r_shape[1] = 0.5 * rear.cornerL.jointUSR.rod1.cylinderLength
*/
void Steering_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1627};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3283]] /* rear.cornerL.jointUSR.rod1.universalShape1.r_shape[1] variable */) = (0.5) * ((data->simulationInfo->realParameter[1808] /* rear.cornerL.jointUSR.rod1.cylinderLength PARAM */));
  TRACE_POP
}

/*
equation index: 1628
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape1.r_shape[2] = 0.0
*/
void Steering_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1628};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3284]] /* rear.cornerL.jointUSR.rod1.universalShape1.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1629
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape1.r_shape[3] = 0.0
*/
void Steering_eqFunction_1629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1629};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3285]] /* rear.cornerL.jointUSR.rod1.universalShape1.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1630
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape1.lengthDirection[1] = -1.0
*/
void Steering_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1630};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3280]] /* rear.cornerL.jointUSR.rod1.universalShape1.lengthDirection[1] variable */) = -1.0;
  TRACE_POP
}

/*
equation index: 1631
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape1.lengthDirection[2] = 0.0
*/
void Steering_eqFunction_1631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1631};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3281]] /* rear.cornerL.jointUSR.rod1.universalShape1.lengthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1632
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape1.lengthDirection[3] = 0.0
*/
void Steering_eqFunction_1632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1632};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3282]] /* rear.cornerL.jointUSR.rod1.universalShape1.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1633
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape1.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1633};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3286]] /* rear.cornerL.jointUSR.rod1.universalShape1.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1634
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape1.widthDirection[2] = 1.0
*/
void Steering_eqFunction_1634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1634};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3287]] /* rear.cornerL.jointUSR.rod1.universalShape1.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1635
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape1.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1635};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3288]] /* rear.cornerL.jointUSR.rod1.universalShape1.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1636
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape2.r_shape[1] = (-rear.cornerL.jointUSR.rod1.e2_ia[1]) * 0.5 * rear.cornerL.jointUSR.rod1.cylinderLength
*/
void Steering_eqFunction_1636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1636};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3296]] /* rear.cornerL.jointUSR.rod1.universalShape2.r_shape[1] variable */) = ((-(data->simulationInfo->realParameter[1809] /* rear.cornerL.jointUSR.rod1.e2_ia[1] PARAM */))) * ((0.5) * ((data->simulationInfo->realParameter[1808] /* rear.cornerL.jointUSR.rod1.cylinderLength PARAM */)));
  TRACE_POP
}

/*
equation index: 1637
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape2.r_shape[2] = (-rear.cornerL.jointUSR.rod1.e2_ia[2]) * 0.5 * rear.cornerL.jointUSR.rod1.cylinderLength
*/
void Steering_eqFunction_1637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1637};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3297]] /* rear.cornerL.jointUSR.rod1.universalShape2.r_shape[2] variable */) = ((-(data->simulationInfo->realParameter[1810] /* rear.cornerL.jointUSR.rod1.e2_ia[2] PARAM */))) * ((0.5) * ((data->simulationInfo->realParameter[1808] /* rear.cornerL.jointUSR.rod1.cylinderLength PARAM */)));
  TRACE_POP
}

/*
equation index: 1638
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape2.r_shape[3] = (-rear.cornerL.jointUSR.rod1.e2_ia[3]) * 0.5 * rear.cornerL.jointUSR.rod1.cylinderLength
*/
void Steering_eqFunction_1638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1638};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3298]] /* rear.cornerL.jointUSR.rod1.universalShape2.r_shape[3] variable */) = ((-(data->simulationInfo->realParameter[1811] /* rear.cornerL.jointUSR.rod1.e2_ia[3] PARAM */))) * ((0.5) * ((data->simulationInfo->realParameter[1808] /* rear.cornerL.jointUSR.rod1.cylinderLength PARAM */)));
  TRACE_POP
}

/*
equation index: 1639
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape2.lengthDirection[1] = 0.0
*/
void Steering_eqFunction_1639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1639};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3293]] /* rear.cornerL.jointUSR.rod1.universalShape2.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1640
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape2.lengthDirection[2] = 0.9748585065718673
*/
void Steering_eqFunction_1640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1640};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3294]] /* rear.cornerL.jointUSR.rod1.universalShape2.lengthDirection[2] variable */) = 0.9748585065718673;
  TRACE_POP
}

/*
equation index: 1641
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape2.lengthDirection[3] = 0.222824801502141
*/
void Steering_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1641};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3295]] /* rear.cornerL.jointUSR.rod1.universalShape2.lengthDirection[3] variable */) = 0.222824801502141;
  TRACE_POP
}

/*
equation index: 1642
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape2.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1642};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3299]] /* rear.cornerL.jointUSR.rod1.universalShape2.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1643
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape2.widthDirection[2] = 1.0
*/
void Steering_eqFunction_1643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1643};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3300]] /* rear.cornerL.jointUSR.rod1.universalShape2.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1644
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape2.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1644};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3301]] /* rear.cornerL.jointUSR.rod1.universalShape2.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1645
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape2.color[3] = 0.0
*/
void Steering_eqFunction_1645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1645};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3291]] /* rear.cornerL.jointUSR.rod1.universalShape2.color[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1646
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape2.color[2] = 0.0
*/
void Steering_eqFunction_1646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1646};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3290]] /* rear.cornerL.jointUSR.rod1.universalShape2.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1647
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape2.color[1] = 255.0
*/
void Steering_eqFunction_1647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1647};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3289]] /* rear.cornerL.jointUSR.rod1.universalShape2.color[1] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 1648
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.cylinderColor[1] = 255
*/
void Steering_eqFunction_1648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1648};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[156]] /* rear.cornerL.jointUSR.cylinderColor[1] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 1649
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.cylinderColor[2] = 0.0
*/
void Steering_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1649};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[157]] /* rear.cornerL.jointUSR.cylinderColor[2] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1650
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.cylinderColor[3] = 0.0
*/
void Steering_eqFunction_1650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1650};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[158]] /* rear.cornerL.jointUSR.cylinderColor[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1651
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.totalPower = 0.0
*/
void Steering_eqFunction_1651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1651};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3278]] /* rear.cornerL.jointUSR.rod1.totalPower variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1652
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.shape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1652};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3317]] /* rear.cornerL.jointUSR.rod2.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1653
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.shape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1653};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3318]] /* rear.cornerL.jointUSR.rod2.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1654
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.shape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1654};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3319]] /* rear.cornerL.jointUSR.rod2.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1655
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.shape.lengthDirection[1] = 0.0
*/
void Steering_eqFunction_1655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1655};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3314]] /* rear.cornerL.jointUSR.rod2.shape.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1656
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.shape.lengthDirection[2] = -0.6199999999999999
*/
void Steering_eqFunction_1656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1656};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3315]] /* rear.cornerL.jointUSR.rod2.shape.lengthDirection[2] variable */) = -0.6199999999999999;
  TRACE_POP
}

/*
equation index: 1657
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.shape.lengthDirection[3] = 0.0
*/
void Steering_eqFunction_1657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1657};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3316]] /* rear.cornerL.jointUSR.rod2.shape.lengthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1658
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.shape.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1658};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3320]] /* rear.cornerL.jointUSR.rod2.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1659
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.shape.widthDirection[2] = 1.0
*/
void Steering_eqFunction_1659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1659};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3321]] /* rear.cornerL.jointUSR.rod2.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1660
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.shape.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1660};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3322]] /* rear.cornerL.jointUSR.rod2.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1661
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.shape.color[3] = 155.0
*/
void Steering_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1661};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3313]] /* rear.cornerL.jointUSR.rod2.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1662
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.shape.color[2] = 155.0
*/
void Steering_eqFunction_1662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1662};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3312]] /* rear.cornerL.jointUSR.rod2.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1663
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod2.shape.color[1] = 155.0
*/
void Steering_eqFunction_1663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1663};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3311]] /* rear.cornerL.jointUSR.rod2.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1664
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodShape.color[3] = 155.0
*/
void Steering_eqFunction_1664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1664};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3251]] /* rear.cornerL.jointUSR.rod1.rodShape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1665
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodShape.color[2] = 155.0
*/
void Steering_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1665};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3250]] /* rear.cornerL.jointUSR.rod1.rodShape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1666
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodShape.color[1] = 155.0
*/
void Steering_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1666};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3249]] /* rear.cornerL.jointUSR.rod1.rodShape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1667
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1Color[1] = 155
*/
void Steering_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1667};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[162]] /* rear.cornerL.jointUSR.rod1Color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1668
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1Color[2] = 155
*/
void Steering_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1668};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[163]] /* rear.cornerL.jointUSR.rod1Color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1669
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1Color[3] = 155
*/
void Steering_eqFunction_1669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1669};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[164]] /* rear.cornerL.jointUSR.rod1Color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1670
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.relativePosition.frame_resolve.f[1] = 0.0
*/
void Steering_eqFunction_1670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1670};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3117]] /* rear.cornerL.jointUSR.relativePosition.relativePosition.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1671
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.relativePosition.frame_resolve.f[2] = 0.0
*/
void Steering_eqFunction_1671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1671};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3118]] /* rear.cornerL.jointUSR.relativePosition.relativePosition.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1672
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.relativePosition.frame_resolve.f[3] = 0.0
*/
void Steering_eqFunction_1672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1672};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3119]] /* rear.cornerL.jointUSR.relativePosition.relativePosition.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1673
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.relativePosition.frame_resolve.t[1] = 0.0
*/
void Steering_eqFunction_1673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1673};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3120]] /* rear.cornerL.jointUSR.relativePosition.relativePosition.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1674
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.relativePosition.frame_resolve.t[2] = 0.0
*/
void Steering_eqFunction_1674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1674};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3121]] /* rear.cornerL.jointUSR.relativePosition.relativePosition.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1675
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.relativePosition.frame_resolve.t[3] = 0.0
*/
void Steering_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1675};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3122]] /* rear.cornerL.jointUSR.relativePosition.relativePosition.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1676
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.w[1] = 0.0
*/
void Steering_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1676};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3132]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1677
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.w[2] = 0.0
*/
void Steering_eqFunction_1677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1677};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3133]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1678
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.w[3] = 0.0
*/
void Steering_eqFunction_1678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1678};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3134]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1679
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[1,1] = 1.0
*/
void Steering_eqFunction_1679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1679};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3123]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1680
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[1,2] = 0.0
*/
void Steering_eqFunction_1680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1680};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3124]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1681
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[1,3] = 0.0
*/
void Steering_eqFunction_1681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1681};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3125]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1682
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[2,1] = 0.0
*/
void Steering_eqFunction_1682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1682};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3126]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1683
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[2,2] = 1.0
*/
void Steering_eqFunction_1683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1683};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3127]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1684
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[2,3] = 0.0
*/
void Steering_eqFunction_1684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1684};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3128]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1685
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[3,1] = 0.0
*/
void Steering_eqFunction_1685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1685};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3129]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1686
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[3,2] = 0.0
*/
void Steering_eqFunction_1686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1686};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3130]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1687
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[3,3] = 1.0
*/
void Steering_eqFunction_1687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1687};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3131]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1688
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.r_0[1] = 0.0
*/
void Steering_eqFunction_1688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1688};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3138]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.r_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1689
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.r_0[2] = 0.0
*/
void Steering_eqFunction_1689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1689};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3139]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.r_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1690
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.r_0[3] = 0.0
*/
void Steering_eqFunction_1690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1690};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3140]] /* rear.cornerL.jointUSR.relativePosition.zeroPosition.frame_resolve.r_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1691
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.totalPower = 0.0
*/
void Steering_eqFunction_1691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1691};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3323]] /* rear.cornerL.jointUSR.totalPower variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1692
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.shape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1692};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3411]] /* rear.cornerL.springChassis.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1693
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.shape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1693};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3412]] /* rear.cornerL.springChassis.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1694
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.shape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3413]] /* rear.cornerL.springChassis.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1695
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.shape.lengthDirection[1] = 0.0
*/
void Steering_eqFunction_1695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1695};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3408]] /* rear.cornerL.springChassis.shape.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1696
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.shape.lengthDirection[2] = -0.65
*/
void Steering_eqFunction_1696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3409]] /* rear.cornerL.springChassis.shape.lengthDirection[2] variable */) = -0.65;
  TRACE_POP
}

/*
equation index: 1697
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.shape.lengthDirection[3] = -0.25
*/
void Steering_eqFunction_1697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3410]] /* rear.cornerL.springChassis.shape.lengthDirection[3] variable */) = -0.25;
  TRACE_POP
}

/*
equation index: 1698
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.shape.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3414]] /* rear.cornerL.springChassis.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1699
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.shape.widthDirection[2] = 1.0
*/
void Steering_eqFunction_1699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1699};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3415]] /* rear.cornerL.springChassis.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1700
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.shape.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1700};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3416]] /* rear.cornerL.springChassis.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1701
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.shape.color[3] = 155.0
*/
void Steering_eqFunction_1701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1701};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3407]] /* rear.cornerL.springChassis.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1702
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.shape.color[2] = 155.0
*/
void Steering_eqFunction_1702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1702};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3406]] /* rear.cornerL.springChassis.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1703
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.shape.color[1] = 155.0
*/
void Steering_eqFunction_1703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1703};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3405]] /* rear.cornerL.springChassis.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1704
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.color[1] = 155
*/
void Steering_eqFunction_1704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1704};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[177]] /* rear.cornerL.springChassis.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1705
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.color[2] = 155
*/
void Steering_eqFunction_1705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1705};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[178]] /* rear.cornerL.springChassis.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1706
type: SIMPLE_ASSIGN
rear.cornerL.springChassis.color[3] = 155
*/
void Steering_eqFunction_1706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1706};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[179]] /* rear.cornerL.springChassis.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1707
type: SIMPLE_ASSIGN
rear.cornerL.springArm.shape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1707};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3390]] /* rear.cornerL.springArm.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1708
type: SIMPLE_ASSIGN
rear.cornerL.springArm.shape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1708};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3391]] /* rear.cornerL.springArm.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1709
type: SIMPLE_ASSIGN
rear.cornerL.springArm.shape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1709};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3392]] /* rear.cornerL.springArm.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1710
type: SIMPLE_ASSIGN
rear.cornerL.springArm.shape.lengthDirection[1] = 0.0
*/
void Steering_eqFunction_1710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1710};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3387]] /* rear.cornerL.springArm.shape.lengthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1711
type: SIMPLE_ASSIGN
rear.cornerL.springArm.shape.lengthDirection[2] = -0.47000000000000003
*/
void Steering_eqFunction_1711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1711};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3388]] /* rear.cornerL.springArm.shape.lengthDirection[2] variable */) = -0.47000000000000003;
  TRACE_POP
}

/*
equation index: 1712
type: SIMPLE_ASSIGN
rear.cornerL.springArm.shape.lengthDirection[3] = -0.009999999999999981
*/
void Steering_eqFunction_1712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1712};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3389]] /* rear.cornerL.springArm.shape.lengthDirection[3] variable */) = -0.009999999999999981;
  TRACE_POP
}

/*
equation index: 1713
type: SIMPLE_ASSIGN
rear.cornerL.springArm.shape.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1713};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3393]] /* rear.cornerL.springArm.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1714
type: SIMPLE_ASSIGN
rear.cornerL.springArm.shape.widthDirection[2] = 1.0
*/
void Steering_eqFunction_1714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1714};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3394]] /* rear.cornerL.springArm.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1715
type: SIMPLE_ASSIGN
rear.cornerL.springArm.shape.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1715};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3395]] /* rear.cornerL.springArm.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1716
type: SIMPLE_ASSIGN
rear.cornerL.springArm.shape.color[3] = 155.0
*/
void Steering_eqFunction_1716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1716};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3386]] /* rear.cornerL.springArm.shape.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1717
type: SIMPLE_ASSIGN
rear.cornerL.springArm.shape.color[2] = 155.0
*/
void Steering_eqFunction_1717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1717};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3385]] /* rear.cornerL.springArm.shape.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1718
type: SIMPLE_ASSIGN
rear.cornerL.springArm.shape.color[1] = 155.0
*/
void Steering_eqFunction_1718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1718};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3384]] /* rear.cornerL.springArm.shape.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1719
type: SIMPLE_ASSIGN
rear.cornerL.springArm.color[1] = 155
*/
void Steering_eqFunction_1719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1719};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[174]] /* rear.cornerL.springArm.color[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1720
type: SIMPLE_ASSIGN
rear.cornerL.springArm.color[2] = 155
*/
void Steering_eqFunction_1720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1720};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[175]] /* rear.cornerL.springArm.color[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1721
type: SIMPLE_ASSIGN
rear.cornerL.springArm.color[3] = 155
*/
void Steering_eqFunction_1721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1721};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[176]] /* rear.cornerL.springArm.color[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1722
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_a.r_shape[1] = 0.0
*/
void Steering_eqFunction_1722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1722};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3037]] /* rear.cornerL.coilover.shape_a.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1723
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_a.r_shape[2] = 0.0
*/
void Steering_eqFunction_1723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1723};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3038]] /* rear.cornerL.coilover.shape_a.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1724
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_a.r_shape[3] = 0.0
*/
void Steering_eqFunction_1724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1724};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3039]] /* rear.cornerL.coilover.shape_a.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1725
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_a.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1725};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3040]] /* rear.cornerL.coilover.shape_a.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1726
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_a.widthDirection[2] = 1.0
*/
void Steering_eqFunction_1726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1726};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3041]] /* rear.cornerL.coilover.shape_a.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1727
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_a.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1727};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3042]] /* rear.cornerL.coilover.shape_a.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1728
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_a.color[3] = 100.0
*/
void Steering_eqFunction_1728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1728};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3034]] /* rear.cornerL.coilover.shape_a.color[3] variable */) = 100.0;
  TRACE_POP
}

/*
equation index: 1729
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_a.color[2] = 100.0
*/
void Steering_eqFunction_1729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1729};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3033]] /* rear.cornerL.coilover.shape_a.color[2] variable */) = 100.0;
  TRACE_POP
}

/*
equation index: 1730
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_a.color[1] = 100.0
*/
void Steering_eqFunction_1730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1730};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3032]] /* rear.cornerL.coilover.shape_a.color[1] variable */) = 100.0;
  TRACE_POP
}

/*
equation index: 1731
type: SIMPLE_ASSIGN
rear.cornerL.coilover.color_a[1] = 100
*/
void Steering_eqFunction_1731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1731};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[150]] /* rear.cornerL.coilover.color_a[1] DISCRETE */) = ((modelica_integer) 100);
  TRACE_POP
}

/*
equation index: 1732
type: SIMPLE_ASSIGN
rear.cornerL.coilover.color_a[2] = 100
*/
void Steering_eqFunction_1732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1732};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[151]] /* rear.cornerL.coilover.color_a[2] DISCRETE */) = ((modelica_integer) 100);
  TRACE_POP
}

/*
equation index: 1733
type: SIMPLE_ASSIGN
rear.cornerL.coilover.color_a[3] = 100
*/
void Steering_eqFunction_1733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1733};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[152]] /* rear.cornerL.coilover.color_a[3] DISCRETE */) = ((modelica_integer) 100);
  TRACE_POP
}

/*
equation index: 1734
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_b.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1734};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3051]] /* rear.cornerL.coilover.shape_b.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1735
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_b.widthDirection[2] = 1.0
*/
void Steering_eqFunction_1735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1735};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3052]] /* rear.cornerL.coilover.shape_b.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1736
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_b.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1736};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3053]] /* rear.cornerL.coilover.shape_b.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1737
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_b.color[3] = 155.0
*/
void Steering_eqFunction_1737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1737};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3045]] /* rear.cornerL.coilover.shape_b.color[3] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1738
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_b.color[2] = 155.0
*/
void Steering_eqFunction_1738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1738};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3044]] /* rear.cornerL.coilover.shape_b.color[2] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1739
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_b.color[1] = 155.0
*/
void Steering_eqFunction_1739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1739};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3043]] /* rear.cornerL.coilover.shape_b.color[1] variable */) = 155.0;
  TRACE_POP
}

/*
equation index: 1740
type: SIMPLE_ASSIGN
rear.cornerL.coilover.color_b[1] = 155
*/
void Steering_eqFunction_1740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1740};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[153]] /* rear.cornerL.coilover.color_b[1] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1741
type: SIMPLE_ASSIGN
rear.cornerL.coilover.color_b[2] = 155
*/
void Steering_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1741};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[154]] /* rear.cornerL.coilover.color_b[2] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1742
type: SIMPLE_ASSIGN
rear.cornerL.coilover.color_b[3] = 155
*/
void Steering_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1742};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[155]] /* rear.cornerL.coilover.color_b[3] DISCRETE */) = ((modelica_integer) 155);
  TRACE_POP
}

/*
equation index: 1743
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1743};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3026]] /* rear.cornerL.coilover.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1744
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1744};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3027]] /* rear.cornerL.coilover.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1745
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1745};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3028]] /* rear.cornerL.coilover.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1746
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape.widthDirection[1] = 0.0
*/
void Steering_eqFunction_1746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1746};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3029]] /* rear.cornerL.coilover.shape.widthDirection[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1747
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape.widthDirection[2] = 1.0
*/
void Steering_eqFunction_1747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1747};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3030]] /* rear.cornerL.coilover.shape.widthDirection[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1748
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1748};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3031]] /* rear.cornerL.coilover.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1749
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape.color[3] = 255.0
*/
void Steering_eqFunction_1749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1749};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3023]] /* rear.cornerL.coilover.shape.color[3] variable */) = 255.0;
  TRACE_POP
}

/*
equation index: 1750
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape.color[2] = 0.0
*/
void Steering_eqFunction_1750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1750};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3022]] /* rear.cornerL.coilover.shape.color[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1751
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape.color[1] = 0.0
*/
void Steering_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1751};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3021]] /* rear.cornerL.coilover.shape.color[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1752
type: SIMPLE_ASSIGN
rear.cornerL.coilover.color[1] = 0.0
*/
void Steering_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1752};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[147]] /* rear.cornerL.coilover.color[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1753
type: SIMPLE_ASSIGN
rear.cornerL.coilover.color[2] = 0.0
*/
void Steering_eqFunction_1753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1753};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[148]] /* rear.cornerL.coilover.color[2] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1754
type: SIMPLE_ASSIGN
rear.cornerL.coilover.color[3] = 255
*/
void Steering_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1754};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[149]] /* rear.cornerL.coilover.color[3] DISCRETE */) = ((modelica_integer) 255);
  TRACE_POP
}

/*
equation index: 1755
type: SIMPLE_ASSIGN
rear.cornerL.coilover.TheatPort = 293.15
*/
void Steering_eqFunction_1755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1755};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2995]] /* rear.cornerL.coilover.TheatPort variable */) = 293.15;
  TRACE_POP
}

/*
equation index: 1756
type: SIMPLE_ASSIGN
loads[1].color[1] = 0.0
*/
void Steering_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1756};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[135]] /* loads[1].color[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1757
type: SIMPLE_ASSIGN
loads[1].color[2] = 128
*/
void Steering_eqFunction_1757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1757};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[136]] /* loads[1].color[2] DISCRETE */) = ((modelica_integer) 128);
  TRACE_POP
}

/*
equation index: 1758
type: SIMPLE_ASSIGN
loads[1].color[3] = 0.0
*/
void Steering_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1758};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[137]] /* loads[1].color[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1759
type: SIMPLE_ASSIGN
loads[1].basicWorldForce.frame_resolve.f[1] = 0.0
*/
void Steering_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1759};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2677]] /* loads[1].basicWorldForce.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1760
type: SIMPLE_ASSIGN
loads[1].basicWorldForce.frame_resolve.f[2] = 0.0
*/
void Steering_eqFunction_1760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1760};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2678]] /* loads[1].basicWorldForce.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1761
type: SIMPLE_ASSIGN
loads[1].basicWorldForce.frame_resolve.f[3] = 0.0
*/
void Steering_eqFunction_1761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1761};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2679]] /* loads[1].basicWorldForce.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1762
type: SIMPLE_ASSIGN
loads[1].basicWorldForce.frame_resolve.t[1] = 0.0
*/
void Steering_eqFunction_1762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1762};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2689]] /* loads[1].basicWorldForce.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1763
type: SIMPLE_ASSIGN
loads[1].basicWorldForce.frame_resolve.t[2] = 0.0
*/
void Steering_eqFunction_1763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1763};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2690]] /* loads[1].basicWorldForce.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1764
type: SIMPLE_ASSIGN
loads[1].basicWorldForce.frame_resolve.t[3] = 0.0
*/
void Steering_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1764};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2691]] /* loads[1].basicWorldForce.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1765
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.R.w[1] = 0.0
*/
void Steering_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1765};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2773]] /* loads[1].zeroPosition.frame_resolve.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1766
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.R.w[2] = 0.0
*/
void Steering_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1766};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2774]] /* loads[1].zeroPosition.frame_resolve.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1767
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.R.w[3] = 0.0
*/
void Steering_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1767};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2775]] /* loads[1].zeroPosition.frame_resolve.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1768
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.R.T[1,1] = 1.0
*/
void Steering_eqFunction_1768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1768};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2737]] /* loads[1].zeroPosition.frame_resolve.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1769
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.R.T[1,2] = 0.0
*/
void Steering_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1769};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2738]] /* loads[1].zeroPosition.frame_resolve.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1770
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.R.T[1,3] = 0.0
*/
void Steering_eqFunction_1770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1770};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2739]] /* loads[1].zeroPosition.frame_resolve.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1771
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.R.T[2,1] = 0.0
*/
void Steering_eqFunction_1771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1771};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2740]] /* loads[1].zeroPosition.frame_resolve.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1772
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.R.T[2,2] = 1.0
*/
void Steering_eqFunction_1772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1772};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2741]] /* loads[1].zeroPosition.frame_resolve.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1773
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.R.T[2,3] = 0.0
*/
void Steering_eqFunction_1773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1773};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2742]] /* loads[1].zeroPosition.frame_resolve.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1774
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.R.T[3,1] = 0.0
*/
void Steering_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1774};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2743]] /* loads[1].zeroPosition.frame_resolve.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1775
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.R.T[3,2] = 0.0
*/
void Steering_eqFunction_1775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1775};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2744]] /* loads[1].zeroPosition.frame_resolve.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1776
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.R.T[3,3] = 1.0
*/
void Steering_eqFunction_1776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1776};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2745]] /* loads[1].zeroPosition.frame_resolve.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1777
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.r_0[1] = 0.0
*/
void Steering_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1777};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2797]] /* loads[1].zeroPosition.frame_resolve.r_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1778
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.r_0[2] = 0.0
*/
void Steering_eqFunction_1778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1778};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2798]] /* loads[1].zeroPosition.frame_resolve.r_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1779
type: SIMPLE_ASSIGN
loads[1].zeroPosition.frame_resolve.r_0[3] = 0.0
*/
void Steering_eqFunction_1779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1779};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2799]] /* loads[1].zeroPosition.frame_resolve.r_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1780
type: SIMPLE_ASSIGN
loads[2].color[1] = 0.0
*/
void Steering_eqFunction_1780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1780};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[138]] /* loads[2].color[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1781
type: SIMPLE_ASSIGN
loads[2].color[2] = 128
*/
void Steering_eqFunction_1781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1781};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[139]] /* loads[2].color[2] DISCRETE */) = ((modelica_integer) 128);
  TRACE_POP
}

/*
equation index: 1782
type: SIMPLE_ASSIGN
loads[2].color[3] = 0.0
*/
void Steering_eqFunction_1782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1782};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[140]] /* loads[2].color[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1783
type: SIMPLE_ASSIGN
loads[2].basicWorldForce.frame_resolve.f[1] = 0.0
*/
void Steering_eqFunction_1783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1783};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2680]] /* loads[2].basicWorldForce.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1784
type: SIMPLE_ASSIGN
loads[2].basicWorldForce.frame_resolve.f[2] = 0.0
*/
void Steering_eqFunction_1784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1784};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2681]] /* loads[2].basicWorldForce.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1785
type: SIMPLE_ASSIGN
loads[2].basicWorldForce.frame_resolve.f[3] = 0.0
*/
void Steering_eqFunction_1785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1785};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2682]] /* loads[2].basicWorldForce.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1786
type: SIMPLE_ASSIGN
loads[2].basicWorldForce.frame_resolve.t[1] = 0.0
*/
void Steering_eqFunction_1786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1786};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2692]] /* loads[2].basicWorldForce.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1787
type: SIMPLE_ASSIGN
loads[2].basicWorldForce.frame_resolve.t[2] = 0.0
*/
void Steering_eqFunction_1787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1787};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2693]] /* loads[2].basicWorldForce.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1788
type: SIMPLE_ASSIGN
loads[2].basicWorldForce.frame_resolve.t[3] = 0.0
*/
void Steering_eqFunction_1788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1788};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2694]] /* loads[2].basicWorldForce.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1789
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.R.w[1] = 0.0
*/
void Steering_eqFunction_1789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1789};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2776]] /* loads[2].zeroPosition.frame_resolve.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1790
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.R.w[2] = 0.0
*/
void Steering_eqFunction_1790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1790};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2777]] /* loads[2].zeroPosition.frame_resolve.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1791
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.R.w[3] = 0.0
*/
void Steering_eqFunction_1791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1791};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2778]] /* loads[2].zeroPosition.frame_resolve.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1792
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.R.T[1,1] = 1.0
*/
void Steering_eqFunction_1792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1792};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2746]] /* loads[2].zeroPosition.frame_resolve.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1793
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.R.T[1,2] = 0.0
*/
void Steering_eqFunction_1793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1793};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2747]] /* loads[2].zeroPosition.frame_resolve.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1794
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.R.T[1,3] = 0.0
*/
void Steering_eqFunction_1794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1794};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2748]] /* loads[2].zeroPosition.frame_resolve.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1795
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.R.T[2,1] = 0.0
*/
void Steering_eqFunction_1795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1795};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2749]] /* loads[2].zeroPosition.frame_resolve.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1796
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.R.T[2,2] = 1.0
*/
void Steering_eqFunction_1796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1796};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2750]] /* loads[2].zeroPosition.frame_resolve.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1797
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.R.T[2,3] = 0.0
*/
void Steering_eqFunction_1797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1797};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2751]] /* loads[2].zeroPosition.frame_resolve.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1798
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.R.T[3,1] = 0.0
*/
void Steering_eqFunction_1798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1798};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2752]] /* loads[2].zeroPosition.frame_resolve.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1799
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.R.T[3,2] = 0.0
*/
void Steering_eqFunction_1799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1799};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2753]] /* loads[2].zeroPosition.frame_resolve.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1800
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.R.T[3,3] = 1.0
*/
void Steering_eqFunction_1800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1800};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2754]] /* loads[2].zeroPosition.frame_resolve.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1801
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.r_0[1] = 0.0
*/
void Steering_eqFunction_1801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1801};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2800]] /* loads[2].zeroPosition.frame_resolve.r_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1802
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.r_0[2] = 0.0
*/
void Steering_eqFunction_1802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1802};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2801]] /* loads[2].zeroPosition.frame_resolve.r_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1803
type: SIMPLE_ASSIGN
loads[2].zeroPosition.frame_resolve.r_0[3] = 0.0
*/
void Steering_eqFunction_1803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1803};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2802]] /* loads[2].zeroPosition.frame_resolve.r_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1804
type: SIMPLE_ASSIGN
loads[3].color[1] = 0.0
*/
void Steering_eqFunction_1804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1804};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[141]] /* loads[3].color[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1805
type: SIMPLE_ASSIGN
loads[3].color[2] = 128
*/
void Steering_eqFunction_1805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1805};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[142]] /* loads[3].color[2] DISCRETE */) = ((modelica_integer) 128);
  TRACE_POP
}

/*
equation index: 1806
type: SIMPLE_ASSIGN
loads[3].color[3] = 0.0
*/
void Steering_eqFunction_1806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1806};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[143]] /* loads[3].color[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1807
type: SIMPLE_ASSIGN
loads[3].basicWorldForce.frame_resolve.f[1] = 0.0
*/
void Steering_eqFunction_1807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1807};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2683]] /* loads[3].basicWorldForce.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1808
type: SIMPLE_ASSIGN
loads[3].basicWorldForce.frame_resolve.f[2] = 0.0
*/
void Steering_eqFunction_1808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2684]] /* loads[3].basicWorldForce.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1809
type: SIMPLE_ASSIGN
loads[3].basicWorldForce.frame_resolve.f[3] = 0.0
*/
void Steering_eqFunction_1809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1809};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2685]] /* loads[3].basicWorldForce.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1810
type: SIMPLE_ASSIGN
loads[3].basicWorldForce.frame_resolve.t[1] = 0.0
*/
void Steering_eqFunction_1810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1810};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2695]] /* loads[3].basicWorldForce.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1811
type: SIMPLE_ASSIGN
loads[3].basicWorldForce.frame_resolve.t[2] = 0.0
*/
void Steering_eqFunction_1811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1811};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2696]] /* loads[3].basicWorldForce.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1812
type: SIMPLE_ASSIGN
loads[3].basicWorldForce.frame_resolve.t[3] = 0.0
*/
void Steering_eqFunction_1812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2697]] /* loads[3].basicWorldForce.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1813
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.R.w[1] = 0.0
*/
void Steering_eqFunction_1813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1813};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2779]] /* loads[3].zeroPosition.frame_resolve.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1814
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.R.w[2] = 0.0
*/
void Steering_eqFunction_1814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1814};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2780]] /* loads[3].zeroPosition.frame_resolve.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1815
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.R.w[3] = 0.0
*/
void Steering_eqFunction_1815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1815};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2781]] /* loads[3].zeroPosition.frame_resolve.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1816
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.R.T[1,1] = 1.0
*/
void Steering_eqFunction_1816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1816};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2755]] /* loads[3].zeroPosition.frame_resolve.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1817
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.R.T[1,2] = 0.0
*/
void Steering_eqFunction_1817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1817};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2756]] /* loads[3].zeroPosition.frame_resolve.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1818
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.R.T[1,3] = 0.0
*/
void Steering_eqFunction_1818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1818};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2757]] /* loads[3].zeroPosition.frame_resolve.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1819
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.R.T[2,1] = 0.0
*/
void Steering_eqFunction_1819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1819};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2758]] /* loads[3].zeroPosition.frame_resolve.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1820
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.R.T[2,2] = 1.0
*/
void Steering_eqFunction_1820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1820};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2759]] /* loads[3].zeroPosition.frame_resolve.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1821
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.R.T[2,3] = 0.0
*/
void Steering_eqFunction_1821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1821};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2760]] /* loads[3].zeroPosition.frame_resolve.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1822
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.R.T[3,1] = 0.0
*/
void Steering_eqFunction_1822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1822};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2761]] /* loads[3].zeroPosition.frame_resolve.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1823
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.R.T[3,2] = 0.0
*/
void Steering_eqFunction_1823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1823};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2762]] /* loads[3].zeroPosition.frame_resolve.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1824
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.R.T[3,3] = 1.0
*/
void Steering_eqFunction_1824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1824};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2763]] /* loads[3].zeroPosition.frame_resolve.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1825
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.r_0[1] = 0.0
*/
void Steering_eqFunction_1825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1825};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2803]] /* loads[3].zeroPosition.frame_resolve.r_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1826
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.r_0[2] = 0.0
*/
void Steering_eqFunction_1826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1826};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2804]] /* loads[3].zeroPosition.frame_resolve.r_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1827
type: SIMPLE_ASSIGN
loads[3].zeroPosition.frame_resolve.r_0[3] = 0.0
*/
void Steering_eqFunction_1827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1827};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2805]] /* loads[3].zeroPosition.frame_resolve.r_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1828
type: SIMPLE_ASSIGN
loads[4].color[1] = 0.0
*/
void Steering_eqFunction_1828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1828};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[144]] /* loads[4].color[1] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1829
type: SIMPLE_ASSIGN
loads[4].color[2] = 128
*/
void Steering_eqFunction_1829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1829};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[145]] /* loads[4].color[2] DISCRETE */) = ((modelica_integer) 128);
  TRACE_POP
}

/*
equation index: 1830
type: SIMPLE_ASSIGN
loads[4].color[3] = 0.0
*/
void Steering_eqFunction_1830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1830};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[146]] /* loads[4].color[3] DISCRETE */) = 0.0;
  TRACE_POP
}

/*
equation index: 1831
type: SIMPLE_ASSIGN
loads[4].basicWorldForce.frame_resolve.f[1] = 0.0
*/
void Steering_eqFunction_1831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2686]] /* loads[4].basicWorldForce.frame_resolve.f[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1832
type: SIMPLE_ASSIGN
loads[4].basicWorldForce.frame_resolve.f[2] = 0.0
*/
void Steering_eqFunction_1832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1832};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2687]] /* loads[4].basicWorldForce.frame_resolve.f[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1833
type: SIMPLE_ASSIGN
loads[4].basicWorldForce.frame_resolve.f[3] = 0.0
*/
void Steering_eqFunction_1833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1833};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2688]] /* loads[4].basicWorldForce.frame_resolve.f[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1834
type: SIMPLE_ASSIGN
loads[4].basicWorldForce.frame_resolve.t[1] = 0.0
*/
void Steering_eqFunction_1834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1834};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2698]] /* loads[4].basicWorldForce.frame_resolve.t[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1835
type: SIMPLE_ASSIGN
loads[4].basicWorldForce.frame_resolve.t[2] = 0.0
*/
void Steering_eqFunction_1835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1835};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2699]] /* loads[4].basicWorldForce.frame_resolve.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1836
type: SIMPLE_ASSIGN
loads[4].basicWorldForce.frame_resolve.t[3] = 0.0
*/
void Steering_eqFunction_1836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1836};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2700]] /* loads[4].basicWorldForce.frame_resolve.t[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1837
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.R.w[1] = 0.0
*/
void Steering_eqFunction_1837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1837};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2782]] /* loads[4].zeroPosition.frame_resolve.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1838
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.R.w[2] = 0.0
*/
void Steering_eqFunction_1838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1838};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2783]] /* loads[4].zeroPosition.frame_resolve.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1839
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.R.w[3] = 0.0
*/
void Steering_eqFunction_1839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1839};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2784]] /* loads[4].zeroPosition.frame_resolve.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1840
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.R.T[1,1] = 1.0
*/
void Steering_eqFunction_1840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1840};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2764]] /* loads[4].zeroPosition.frame_resolve.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1841
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.R.T[1,2] = 0.0
*/
void Steering_eqFunction_1841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1841};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2765]] /* loads[4].zeroPosition.frame_resolve.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1842
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.R.T[1,3] = 0.0
*/
void Steering_eqFunction_1842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2766]] /* loads[4].zeroPosition.frame_resolve.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1843
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.R.T[2,1] = 0.0
*/
void Steering_eqFunction_1843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1843};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2767]] /* loads[4].zeroPosition.frame_resolve.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1844
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.R.T[2,2] = 1.0
*/
void Steering_eqFunction_1844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1844};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2768]] /* loads[4].zeroPosition.frame_resolve.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1845
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.R.T[2,3] = 0.0
*/
void Steering_eqFunction_1845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1845};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2769]] /* loads[4].zeroPosition.frame_resolve.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1846
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.R.T[3,1] = 0.0
*/
void Steering_eqFunction_1846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1846};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2770]] /* loads[4].zeroPosition.frame_resolve.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1847
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.R.T[3,2] = 0.0
*/
void Steering_eqFunction_1847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1847};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2771]] /* loads[4].zeroPosition.frame_resolve.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1848
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.R.T[3,3] = 1.0
*/
void Steering_eqFunction_1848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1848};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2772]] /* loads[4].zeroPosition.frame_resolve.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1849
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.r_0[1] = 0.0
*/
void Steering_eqFunction_1849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1849};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2806]] /* loads[4].zeroPosition.frame_resolve.r_0[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1850
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.r_0[2] = 0.0
*/
void Steering_eqFunction_1850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1850};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2807]] /* loads[4].zeroPosition.frame_resolve.r_0[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1851
type: SIMPLE_ASSIGN
loads[4].zeroPosition.frame_resolve.r_0[3] = 0.0
*/
void Steering_eqFunction_1851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1851};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2808]] /* loads[4].zeroPosition.frame_resolve.r_0[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1852
type: SIMPLE_ASSIGN
view[1].upper[1].shape.R.T[1,1] = 1.0
*/
void Steering_eqFunction_1852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1852};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5214]] /* view[1].upper[1].shape.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1853
type: SIMPLE_ASSIGN
view[1].upper[1].shape.R.T[1,2] = 0.0
*/
void Steering_eqFunction_1853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1853};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5215]] /* view[1].upper[1].shape.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1854
type: SIMPLE_ASSIGN
view[1].upper[1].shape.R.T[1,3] = 0.0
*/
void Steering_eqFunction_1854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1854};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5216]] /* view[1].upper[1].shape.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1855
type: SIMPLE_ASSIGN
view[1].upper[1].shape.R.T[2,1] = 0.0
*/
void Steering_eqFunction_1855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5217]] /* view[1].upper[1].shape.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1856
type: SIMPLE_ASSIGN
view[1].upper[1].shape.R.T[2,2] = 1.0
*/
void Steering_eqFunction_1856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5218]] /* view[1].upper[1].shape.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1857
type: SIMPLE_ASSIGN
view[1].upper[1].shape.R.T[2,3] = 0.0
*/
void Steering_eqFunction_1857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1857};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5219]] /* view[1].upper[1].shape.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1858
type: SIMPLE_ASSIGN
view[1].upper[1].shape.R.T[3,1] = 0.0
*/
void Steering_eqFunction_1858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1858};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5220]] /* view[1].upper[1].shape.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1859
type: SIMPLE_ASSIGN
view[1].upper[1].shape.R.T[3,2] = 0.0
*/
void Steering_eqFunction_1859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1859};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5221]] /* view[1].upper[1].shape.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1860
type: SIMPLE_ASSIGN
view[1].upper[1].shape.R.T[3,3] = 1.0
*/
void Steering_eqFunction_1860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1860};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5222]] /* view[1].upper[1].shape.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1861
type: SIMPLE_ASSIGN
view[1].upper[1].shape.R.w[1] = 0.0
*/
void Steering_eqFunction_1861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1861};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5286]] /* view[1].upper[1].shape.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1862
type: SIMPLE_ASSIGN
view[1].upper[1].shape.R.w[2] = 0.0
*/
void Steering_eqFunction_1862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1862};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5287]] /* view[1].upper[1].shape.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1863
type: SIMPLE_ASSIGN
view[1].upper[1].shape.R.w[3] = 0.0
*/
void Steering_eqFunction_1863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1863};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5288]] /* view[1].upper[1].shape.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1864
type: SIMPLE_ASSIGN
view[1].upper[1].shape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1864};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5350]] /* view[1].upper[1].shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1865
type: SIMPLE_ASSIGN
view[1].upper[1].shape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1865};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5351]] /* view[1].upper[1].shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1866
type: SIMPLE_ASSIGN
view[1].upper[1].shape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1866};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5352]] /* view[1].upper[1].shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1867
type: SIMPLE_ASSIGN
view[1].upper[1].shape.widthDirection[1] = 1.0
*/
void Steering_eqFunction_1867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1867};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5382]] /* view[1].upper[1].shape.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1868
type: SIMPLE_ASSIGN
view[1].upper[1].shape.widthDirection[2] = 0.0
*/
void Steering_eqFunction_1868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1868};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5383]] /* view[1].upper[1].shape.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1869
type: SIMPLE_ASSIGN
view[1].upper[1].shape.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1869};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5384]] /* view[1].upper[1].shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1870
type: SIMPLE_ASSIGN
view[1].upper[2].shape.R.T[1,1] = 1.0
*/
void Steering_eqFunction_1870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1870};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5223]] /* view[1].upper[2].shape.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1871
type: SIMPLE_ASSIGN
view[1].upper[2].shape.R.T[1,2] = 0.0
*/
void Steering_eqFunction_1871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1871};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5224]] /* view[1].upper[2].shape.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1872
type: SIMPLE_ASSIGN
view[1].upper[2].shape.R.T[1,3] = 0.0
*/
void Steering_eqFunction_1872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1872};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5225]] /* view[1].upper[2].shape.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1873
type: SIMPLE_ASSIGN
view[1].upper[2].shape.R.T[2,1] = 0.0
*/
void Steering_eqFunction_1873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1873};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5226]] /* view[1].upper[2].shape.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1874
type: SIMPLE_ASSIGN
view[1].upper[2].shape.R.T[2,2] = 1.0
*/
void Steering_eqFunction_1874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1874};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5227]] /* view[1].upper[2].shape.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1875
type: SIMPLE_ASSIGN
view[1].upper[2].shape.R.T[2,3] = 0.0
*/
void Steering_eqFunction_1875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1875};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5228]] /* view[1].upper[2].shape.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1876
type: SIMPLE_ASSIGN
view[1].upper[2].shape.R.T[3,1] = 0.0
*/
void Steering_eqFunction_1876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1876};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5229]] /* view[1].upper[2].shape.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1877
type: SIMPLE_ASSIGN
view[1].upper[2].shape.R.T[3,2] = 0.0
*/
void Steering_eqFunction_1877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1877};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5230]] /* view[1].upper[2].shape.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1878
type: SIMPLE_ASSIGN
view[1].upper[2].shape.R.T[3,3] = 1.0
*/
void Steering_eqFunction_1878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1878};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5231]] /* view[1].upper[2].shape.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1879
type: SIMPLE_ASSIGN
view[1].upper[2].shape.R.w[1] = 0.0
*/
void Steering_eqFunction_1879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1879};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5289]] /* view[1].upper[2].shape.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1880
type: SIMPLE_ASSIGN
view[1].upper[2].shape.R.w[2] = 0.0
*/
void Steering_eqFunction_1880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1880};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5290]] /* view[1].upper[2].shape.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1881
type: SIMPLE_ASSIGN
view[1].upper[2].shape.R.w[3] = 0.0
*/
void Steering_eqFunction_1881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1881};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5291]] /* view[1].upper[2].shape.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1882
type: SIMPLE_ASSIGN
view[1].upper[2].shape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1882};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5353]] /* view[1].upper[2].shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1883
type: SIMPLE_ASSIGN
view[1].upper[2].shape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1883};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5354]] /* view[1].upper[2].shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1884
type: SIMPLE_ASSIGN
view[1].upper[2].shape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1884};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5355]] /* view[1].upper[2].shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1885
type: SIMPLE_ASSIGN
view[1].upper[2].shape.widthDirection[1] = 1.0
*/
void Steering_eqFunction_1885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1885};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5385]] /* view[1].upper[2].shape.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1886
type: SIMPLE_ASSIGN
view[1].upper[2].shape.widthDirection[2] = 0.0
*/
void Steering_eqFunction_1886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1886};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5386]] /* view[1].upper[2].shape.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1887
type: SIMPLE_ASSIGN
view[1].upper[2].shape.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1887};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5387]] /* view[1].upper[2].shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1888
type: SIMPLE_ASSIGN
view[1].lower[1].shape.R.T[1,1] = 1.0
*/
void Steering_eqFunction_1888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1888};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4746]] /* view[1].lower[1].shape.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1889
type: SIMPLE_ASSIGN
view[1].lower[1].shape.R.T[1,2] = 0.0
*/
void Steering_eqFunction_1889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1889};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4747]] /* view[1].lower[1].shape.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1890
type: SIMPLE_ASSIGN
view[1].lower[1].shape.R.T[1,3] = 0.0
*/
void Steering_eqFunction_1890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1890};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4748]] /* view[1].lower[1].shape.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1891
type: SIMPLE_ASSIGN
view[1].lower[1].shape.R.T[2,1] = 0.0
*/
void Steering_eqFunction_1891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1891};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4749]] /* view[1].lower[1].shape.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1892
type: SIMPLE_ASSIGN
view[1].lower[1].shape.R.T[2,2] = 1.0
*/
void Steering_eqFunction_1892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1892};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4750]] /* view[1].lower[1].shape.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1893
type: SIMPLE_ASSIGN
view[1].lower[1].shape.R.T[2,3] = 0.0
*/
void Steering_eqFunction_1893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1893};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4751]] /* view[1].lower[1].shape.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1894
type: SIMPLE_ASSIGN
view[1].lower[1].shape.R.T[3,1] = 0.0
*/
void Steering_eqFunction_1894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1894};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4752]] /* view[1].lower[1].shape.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1895
type: SIMPLE_ASSIGN
view[1].lower[1].shape.R.T[3,2] = 0.0
*/
void Steering_eqFunction_1895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1895};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4753]] /* view[1].lower[1].shape.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1896
type: SIMPLE_ASSIGN
view[1].lower[1].shape.R.T[3,3] = 1.0
*/
void Steering_eqFunction_1896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1896};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4754]] /* view[1].lower[1].shape.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1897
type: SIMPLE_ASSIGN
view[1].lower[1].shape.R.w[1] = 0.0
*/
void Steering_eqFunction_1897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1897};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4818]] /* view[1].lower[1].shape.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1898
type: SIMPLE_ASSIGN
view[1].lower[1].shape.R.w[2] = 0.0
*/
void Steering_eqFunction_1898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1898};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4819]] /* view[1].lower[1].shape.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1899
type: SIMPLE_ASSIGN
view[1].lower[1].shape.R.w[3] = 0.0
*/
void Steering_eqFunction_1899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1899};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4820]] /* view[1].lower[1].shape.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1900
type: SIMPLE_ASSIGN
view[1].lower[1].shape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1900};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4882]] /* view[1].lower[1].shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1901
type: SIMPLE_ASSIGN
view[1].lower[1].shape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1901};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4883]] /* view[1].lower[1].shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1902
type: SIMPLE_ASSIGN
view[1].lower[1].shape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1902};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4884]] /* view[1].lower[1].shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1903
type: SIMPLE_ASSIGN
view[1].lower[1].shape.widthDirection[1] = 1.0
*/
void Steering_eqFunction_1903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1903};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4914]] /* view[1].lower[1].shape.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1904
type: SIMPLE_ASSIGN
view[1].lower[1].shape.widthDirection[2] = 0.0
*/
void Steering_eqFunction_1904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1904};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4915]] /* view[1].lower[1].shape.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1905
type: SIMPLE_ASSIGN
view[1].lower[1].shape.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1905};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4916]] /* view[1].lower[1].shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1906
type: SIMPLE_ASSIGN
view[1].lower[2].shape.R.T[1,1] = 1.0
*/
void Steering_eqFunction_1906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1906};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4755]] /* view[1].lower[2].shape.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1907
type: SIMPLE_ASSIGN
view[1].lower[2].shape.R.T[1,2] = 0.0
*/
void Steering_eqFunction_1907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1907};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4756]] /* view[1].lower[2].shape.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1908
type: SIMPLE_ASSIGN
view[1].lower[2].shape.R.T[1,3] = 0.0
*/
void Steering_eqFunction_1908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1908};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4757]] /* view[1].lower[2].shape.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1909
type: SIMPLE_ASSIGN
view[1].lower[2].shape.R.T[2,1] = 0.0
*/
void Steering_eqFunction_1909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1909};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4758]] /* view[1].lower[2].shape.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1910
type: SIMPLE_ASSIGN
view[1].lower[2].shape.R.T[2,2] = 1.0
*/
void Steering_eqFunction_1910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1910};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4759]] /* view[1].lower[2].shape.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1911
type: SIMPLE_ASSIGN
view[1].lower[2].shape.R.T[2,3] = 0.0
*/
void Steering_eqFunction_1911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1911};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4760]] /* view[1].lower[2].shape.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1912
type: SIMPLE_ASSIGN
view[1].lower[2].shape.R.T[3,1] = 0.0
*/
void Steering_eqFunction_1912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1912};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4761]] /* view[1].lower[2].shape.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1913
type: SIMPLE_ASSIGN
view[1].lower[2].shape.R.T[3,2] = 0.0
*/
void Steering_eqFunction_1913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1913};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4762]] /* view[1].lower[2].shape.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1914
type: SIMPLE_ASSIGN
view[1].lower[2].shape.R.T[3,3] = 1.0
*/
void Steering_eqFunction_1914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1914};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4763]] /* view[1].lower[2].shape.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1915
type: SIMPLE_ASSIGN
view[1].lower[2].shape.R.w[1] = 0.0
*/
void Steering_eqFunction_1915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1915};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4821]] /* view[1].lower[2].shape.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1916
type: SIMPLE_ASSIGN
view[1].lower[2].shape.R.w[2] = 0.0
*/
void Steering_eqFunction_1916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1916};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4822]] /* view[1].lower[2].shape.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1917
type: SIMPLE_ASSIGN
view[1].lower[2].shape.R.w[3] = 0.0
*/
void Steering_eqFunction_1917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1917};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4823]] /* view[1].lower[2].shape.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1918
type: SIMPLE_ASSIGN
view[1].lower[2].shape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1918};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4885]] /* view[1].lower[2].shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1919
type: SIMPLE_ASSIGN
view[1].lower[2].shape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1919};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4886]] /* view[1].lower[2].shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1920
type: SIMPLE_ASSIGN
view[1].lower[2].shape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1920};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4887]] /* view[1].lower[2].shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1921
type: SIMPLE_ASSIGN
view[1].lower[2].shape.widthDirection[1] = 1.0
*/
void Steering_eqFunction_1921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1921};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4917]] /* view[1].lower[2].shape.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1922
type: SIMPLE_ASSIGN
view[1].lower[2].shape.widthDirection[2] = 0.0
*/
void Steering_eqFunction_1922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1922};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4918]] /* view[1].lower[2].shape.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1923
type: SIMPLE_ASSIGN
view[1].lower[2].shape.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1923};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4919]] /* view[1].lower[2].shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1924
type: SIMPLE_ASSIGN
view[1].upright.shape.R.T[1,1] = 1.0
*/
void Steering_eqFunction_1924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1924};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5406]] /* view[1].upright.shape.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1925
type: SIMPLE_ASSIGN
view[1].upright.shape.R.T[1,2] = 0.0
*/
void Steering_eqFunction_1925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1925};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5407]] /* view[1].upright.shape.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1926
type: SIMPLE_ASSIGN
view[1].upright.shape.R.T[1,3] = 0.0
*/
void Steering_eqFunction_1926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1926};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5408]] /* view[1].upright.shape.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1927
type: SIMPLE_ASSIGN
view[1].upright.shape.R.T[2,1] = 0.0
*/
void Steering_eqFunction_1927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1927};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5409]] /* view[1].upright.shape.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1928
type: SIMPLE_ASSIGN
view[1].upright.shape.R.T[2,2] = 1.0
*/
void Steering_eqFunction_1928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1928};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5410]] /* view[1].upright.shape.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1929
type: SIMPLE_ASSIGN
view[1].upright.shape.R.T[2,3] = 0.0
*/
void Steering_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1929};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5411]] /* view[1].upright.shape.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1930
type: SIMPLE_ASSIGN
view[1].upright.shape.R.T[3,1] = 0.0
*/
void Steering_eqFunction_1930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1930};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5412]] /* view[1].upright.shape.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1931
type: SIMPLE_ASSIGN
view[1].upright.shape.R.T[3,2] = 0.0
*/
void Steering_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1931};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5413]] /* view[1].upright.shape.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1932
type: SIMPLE_ASSIGN
view[1].upright.shape.R.T[3,3] = 1.0
*/
void Steering_eqFunction_1932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1932};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5414]] /* view[1].upright.shape.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1933
type: SIMPLE_ASSIGN
view[1].upright.shape.R.w[1] = 0.0
*/
void Steering_eqFunction_1933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1933};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5442]] /* view[1].upright.shape.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1934
type: SIMPLE_ASSIGN
view[1].upright.shape.R.w[2] = 0.0
*/
void Steering_eqFunction_1934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1934};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5443]] /* view[1].upright.shape.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1935
type: SIMPLE_ASSIGN
view[1].upright.shape.R.w[3] = 0.0
*/
void Steering_eqFunction_1935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1935};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5444]] /* view[1].upright.shape.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1936
type: SIMPLE_ASSIGN
view[1].upright.shape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1936};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5474]] /* view[1].upright.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1937
type: SIMPLE_ASSIGN
view[1].upright.shape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1937};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5475]] /* view[1].upright.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1938
type: SIMPLE_ASSIGN
view[1].upright.shape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1938};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5476]] /* view[1].upright.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1939
type: SIMPLE_ASSIGN
view[1].upright.shape.widthDirection[1] = 1.0
*/
void Steering_eqFunction_1939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1939};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5490]] /* view[1].upright.shape.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1940
type: SIMPLE_ASSIGN
view[1].upright.shape.widthDirection[2] = 0.0
*/
void Steering_eqFunction_1940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1940};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5491]] /* view[1].upright.shape.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1941
type: SIMPLE_ASSIGN
view[1].upright.shape.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1941};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5492]] /* view[1].upright.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1942
type: SIMPLE_ASSIGN
view[1].tieRod.shape.R.T[1,1] = 1.0
*/
void Steering_eqFunction_1942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1942};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5118]] /* view[1].tieRod.shape.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1943
type: SIMPLE_ASSIGN
view[1].tieRod.shape.R.T[1,2] = 0.0
*/
void Steering_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1943};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5119]] /* view[1].tieRod.shape.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1944
type: SIMPLE_ASSIGN
view[1].tieRod.shape.R.T[1,3] = 0.0
*/
void Steering_eqFunction_1944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1944};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5120]] /* view[1].tieRod.shape.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1945
type: SIMPLE_ASSIGN
view[1].tieRod.shape.R.T[2,1] = 0.0
*/
void Steering_eqFunction_1945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1945};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5121]] /* view[1].tieRod.shape.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1946
type: SIMPLE_ASSIGN
view[1].tieRod.shape.R.T[2,2] = 1.0
*/
void Steering_eqFunction_1946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1946};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5122]] /* view[1].tieRod.shape.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1947
type: SIMPLE_ASSIGN
view[1].tieRod.shape.R.T[2,3] = 0.0
*/
void Steering_eqFunction_1947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1947};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5123]] /* view[1].tieRod.shape.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1948
type: SIMPLE_ASSIGN
view[1].tieRod.shape.R.T[3,1] = 0.0
*/
void Steering_eqFunction_1948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1948};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5124]] /* view[1].tieRod.shape.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1949
type: SIMPLE_ASSIGN
view[1].tieRod.shape.R.T[3,2] = 0.0
*/
void Steering_eqFunction_1949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1949};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5125]] /* view[1].tieRod.shape.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1950
type: SIMPLE_ASSIGN
view[1].tieRod.shape.R.T[3,3] = 1.0
*/
void Steering_eqFunction_1950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1950};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5126]] /* view[1].tieRod.shape.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1951
type: SIMPLE_ASSIGN
view[1].tieRod.shape.R.w[1] = 0.0
*/
void Steering_eqFunction_1951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1951};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5154]] /* view[1].tieRod.shape.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1952
type: SIMPLE_ASSIGN
view[1].tieRod.shape.R.w[2] = 0.0
*/
void Steering_eqFunction_1952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1952};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5155]] /* view[1].tieRod.shape.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1953
type: SIMPLE_ASSIGN
view[1].tieRod.shape.R.w[3] = 0.0
*/
void Steering_eqFunction_1953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1953};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5156]] /* view[1].tieRod.shape.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1954
type: SIMPLE_ASSIGN
view[1].tieRod.shape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1954};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5186]] /* view[1].tieRod.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1955
type: SIMPLE_ASSIGN
view[1].tieRod.shape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1955};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5187]] /* view[1].tieRod.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1956
type: SIMPLE_ASSIGN
view[1].tieRod.shape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1956};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5188]] /* view[1].tieRod.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1957
type: SIMPLE_ASSIGN
view[1].tieRod.shape.widthDirection[1] = 1.0
*/
void Steering_eqFunction_1957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1957};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5202]] /* view[1].tieRod.shape.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1958
type: SIMPLE_ASSIGN
view[1].tieRod.shape.widthDirection[2] = 0.0
*/
void Steering_eqFunction_1958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1958};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5203]] /* view[1].tieRod.shape.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1959
type: SIMPLE_ASSIGN
view[1].tieRod.shape.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1959};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5204]] /* view[1].tieRod.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1960
type: SIMPLE_ASSIGN
view[1].spring.shape.R.T[1,1] = 1.0
*/
void Steering_eqFunction_1960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1960};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5034]] /* view[1].spring.shape.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1961
type: SIMPLE_ASSIGN
view[1].spring.shape.R.T[1,2] = 0.0
*/
void Steering_eqFunction_1961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1961};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5035]] /* view[1].spring.shape.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1962
type: SIMPLE_ASSIGN
view[1].spring.shape.R.T[1,3] = 0.0
*/
void Steering_eqFunction_1962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1962};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5036]] /* view[1].spring.shape.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1963
type: SIMPLE_ASSIGN
view[1].spring.shape.R.T[2,1] = 0.0
*/
void Steering_eqFunction_1963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1963};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5037]] /* view[1].spring.shape.R.T[2,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1964
type: SIMPLE_ASSIGN
view[1].spring.shape.R.T[2,2] = 1.0
*/
void Steering_eqFunction_1964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1964};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5038]] /* view[1].spring.shape.R.T[2,2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1965
type: SIMPLE_ASSIGN
view[1].spring.shape.R.T[2,3] = 0.0
*/
void Steering_eqFunction_1965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1965};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5039]] /* view[1].spring.shape.R.T[2,3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1966
type: SIMPLE_ASSIGN
view[1].spring.shape.R.T[3,1] = 0.0
*/
void Steering_eqFunction_1966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1966};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5040]] /* view[1].spring.shape.R.T[3,1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1967
type: SIMPLE_ASSIGN
view[1].spring.shape.R.T[3,2] = 0.0
*/
void Steering_eqFunction_1967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1967};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5041]] /* view[1].spring.shape.R.T[3,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1968
type: SIMPLE_ASSIGN
view[1].spring.shape.R.T[3,3] = 1.0
*/
void Steering_eqFunction_1968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1968};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5042]] /* view[1].spring.shape.R.T[3,3] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1969
type: SIMPLE_ASSIGN
view[1].spring.shape.R.w[1] = 0.0
*/
void Steering_eqFunction_1969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1969};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5070]] /* view[1].spring.shape.R.w[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1970
type: SIMPLE_ASSIGN
view[1].spring.shape.R.w[2] = 0.0
*/
void Steering_eqFunction_1970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1970};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5071]] /* view[1].spring.shape.R.w[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1971
type: SIMPLE_ASSIGN
view[1].spring.shape.R.w[3] = 0.0
*/
void Steering_eqFunction_1971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1971};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5072]] /* view[1].spring.shape.R.w[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1972
type: SIMPLE_ASSIGN
view[1].spring.shape.r_shape[1] = 0.0
*/
void Steering_eqFunction_1972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5090]] /* view[1].spring.shape.r_shape[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1973
type: SIMPLE_ASSIGN
view[1].spring.shape.r_shape[2] = 0.0
*/
void Steering_eqFunction_1973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1973};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5091]] /* view[1].spring.shape.r_shape[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1974
type: SIMPLE_ASSIGN
view[1].spring.shape.r_shape[3] = 0.0
*/
void Steering_eqFunction_1974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1974};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5092]] /* view[1].spring.shape.r_shape[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1975
type: SIMPLE_ASSIGN
view[1].spring.shape.widthDirection[1] = 1.0
*/
void Steering_eqFunction_1975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1975};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5106]] /* view[1].spring.shape.widthDirection[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1976
type: SIMPLE_ASSIGN
view[1].spring.shape.widthDirection[2] = 0.0
*/
void Steering_eqFunction_1976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1976};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5107]] /* view[1].spring.shape.widthDirection[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1977
type: SIMPLE_ASSIGN
view[1].spring.shape.widthDirection[3] = 0.0
*/
void Steering_eqFunction_1977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1977};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5108]] /* view[1].spring.shape.widthDirection[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1978
type: SIMPLE_ASSIGN
view[1].spindle.shape.R.T[1,1] = 1.0
*/
void Steering_eqFunction_1978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1978};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4938]] /* view[1].spindle.shape.R.T[1,1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 1979
type: SIMPLE_ASSIGN
view[1].spindle.shape.R.T[1,2] = 0.0
*/
void Steering_eqFunction_1979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1979};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4939]] /* view[1].spindle.shape.R.T[1,2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 1980
type: SIMPLE_ASSIGN
view[1].spindle.shape.R.T[1,3] = 0.0
*/
void Steering_eqFunction_1980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1980};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4940]] /* view[1].spindle.shape.R.T[1,3] variable */) = 0.0;
  TRACE_POP
}
OMC_DISABLE_OPT
void Steering_functionInitialEquations_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Steering_eqFunction_1486(data, threadData);
  Steering_eqFunction_1487(data, threadData);
  Steering_eqFunction_1488(data, threadData);
  Steering_eqFunction_1489(data, threadData);
  Steering_eqFunction_1490(data, threadData);
  Steering_eqFunction_1491(data, threadData);
  Steering_eqFunction_1492(data, threadData);
  Steering_eqFunction_1493(data, threadData);
  Steering_eqFunction_1494(data, threadData);
  Steering_eqFunction_1495(data, threadData);
  Steering_eqFunction_1496(data, threadData);
  Steering_eqFunction_1497(data, threadData);
  Steering_eqFunction_1498(data, threadData);
  Steering_eqFunction_1499(data, threadData);
  Steering_eqFunction_1500(data, threadData);
  Steering_eqFunction_1501(data, threadData);
  Steering_eqFunction_1502(data, threadData);
  Steering_eqFunction_1503(data, threadData);
  Steering_eqFunction_1504(data, threadData);
  Steering_eqFunction_1505(data, threadData);
  Steering_eqFunction_1506(data, threadData);
  Steering_eqFunction_1507(data, threadData);
  Steering_eqFunction_1508(data, threadData);
  Steering_eqFunction_1509(data, threadData);
  Steering_eqFunction_1510(data, threadData);
  Steering_eqFunction_1511(data, threadData);
  Steering_eqFunction_1512(data, threadData);
  Steering_eqFunction_1513(data, threadData);
  Steering_eqFunction_1514(data, threadData);
  Steering_eqFunction_1515(data, threadData);
  Steering_eqFunction_1516(data, threadData);
  Steering_eqFunction_1517(data, threadData);
  Steering_eqFunction_1518(data, threadData);
  Steering_eqFunction_1519(data, threadData);
  Steering_eqFunction_1520(data, threadData);
  Steering_eqFunction_1521(data, threadData);
  Steering_eqFunction_1522(data, threadData);
  Steering_eqFunction_1523(data, threadData);
  Steering_eqFunction_1524(data, threadData);
  Steering_eqFunction_1525(data, threadData);
  Steering_eqFunction_1526(data, threadData);
  Steering_eqFunction_1527(data, threadData);
  Steering_eqFunction_1528(data, threadData);
  Steering_eqFunction_1529(data, threadData);
  Steering_eqFunction_1530(data, threadData);
  Steering_eqFunction_1531(data, threadData);
  Steering_eqFunction_1532(data, threadData);
  Steering_eqFunction_1533(data, threadData);
  Steering_eqFunction_1534(data, threadData);
  Steering_eqFunction_1535(data, threadData);
  Steering_eqFunction_1536(data, threadData);
  Steering_eqFunction_1537(data, threadData);
  Steering_eqFunction_1538(data, threadData);
  Steering_eqFunction_1539(data, threadData);
  Steering_eqFunction_1540(data, threadData);
  Steering_eqFunction_1541(data, threadData);
  Steering_eqFunction_1542(data, threadData);
  Steering_eqFunction_1543(data, threadData);
  Steering_eqFunction_1544(data, threadData);
  Steering_eqFunction_1545(data, threadData);
  Steering_eqFunction_1546(data, threadData);
  Steering_eqFunction_1547(data, threadData);
  Steering_eqFunction_1548(data, threadData);
  Steering_eqFunction_1549(data, threadData);
  Steering_eqFunction_1550(data, threadData);
  Steering_eqFunction_1551(data, threadData);
  Steering_eqFunction_1552(data, threadData);
  Steering_eqFunction_1553(data, threadData);
  Steering_eqFunction_1554(data, threadData);
  Steering_eqFunction_1555(data, threadData);
  Steering_eqFunction_1556(data, threadData);
  Steering_eqFunction_1557(data, threadData);
  Steering_eqFunction_1558(data, threadData);
  Steering_eqFunction_1559(data, threadData);
  Steering_eqFunction_1560(data, threadData);
  Steering_eqFunction_1561(data, threadData);
  Steering_eqFunction_1562(data, threadData);
  Steering_eqFunction_1563(data, threadData);
  Steering_eqFunction_1564(data, threadData);
  Steering_eqFunction_1565(data, threadData);
  Steering_eqFunction_1566(data, threadData);
  Steering_eqFunction_1567(data, threadData);
  Steering_eqFunction_1568(data, threadData);
  Steering_eqFunction_1569(data, threadData);
  Steering_eqFunction_1570(data, threadData);
  Steering_eqFunction_1571(data, threadData);
  Steering_eqFunction_1572(data, threadData);
  Steering_eqFunction_1573(data, threadData);
  Steering_eqFunction_1574(data, threadData);
  Steering_eqFunction_1575(data, threadData);
  Steering_eqFunction_1576(data, threadData);
  Steering_eqFunction_1577(data, threadData);
  Steering_eqFunction_1578(data, threadData);
  Steering_eqFunction_1579(data, threadData);
  Steering_eqFunction_1580(data, threadData);
  Steering_eqFunction_1581(data, threadData);
  Steering_eqFunction_1582(data, threadData);
  Steering_eqFunction_1583(data, threadData);
  Steering_eqFunction_1584(data, threadData);
  Steering_eqFunction_1585(data, threadData);
  Steering_eqFunction_1586(data, threadData);
  Steering_eqFunction_1587(data, threadData);
  Steering_eqFunction_1588(data, threadData);
  Steering_eqFunction_1589(data, threadData);
  Steering_eqFunction_1590(data, threadData);
  Steering_eqFunction_1591(data, threadData);
  Steering_eqFunction_1592(data, threadData);
  Steering_eqFunction_1593(data, threadData);
  Steering_eqFunction_1594(data, threadData);
  Steering_eqFunction_1595(data, threadData);
  Steering_eqFunction_1596(data, threadData);
  Steering_eqFunction_1597(data, threadData);
  Steering_eqFunction_1598(data, threadData);
  Steering_eqFunction_1599(data, threadData);
  Steering_eqFunction_1600(data, threadData);
  Steering_eqFunction_1601(data, threadData);
  Steering_eqFunction_1602(data, threadData);
  Steering_eqFunction_1603(data, threadData);
  Steering_eqFunction_1604(data, threadData);
  Steering_eqFunction_1605(data, threadData);
  Steering_eqFunction_1606(data, threadData);
  Steering_eqFunction_1607(data, threadData);
  Steering_eqFunction_1608(data, threadData);
  Steering_eqFunction_1609(data, threadData);
  Steering_eqFunction_1610(data, threadData);
  Steering_eqFunction_1611(data, threadData);
  Steering_eqFunction_1612(data, threadData);
  Steering_eqFunction_1613(data, threadData);
  Steering_eqFunction_1614(data, threadData);
  Steering_eqFunction_1615(data, threadData);
  Steering_eqFunction_1616(data, threadData);
  Steering_eqFunction_1617(data, threadData);
  Steering_eqFunction_1618(data, threadData);
  Steering_eqFunction_1619(data, threadData);
  Steering_eqFunction_1620(data, threadData);
  Steering_eqFunction_1621(data, threadData);
  Steering_eqFunction_1622(data, threadData);
  Steering_eqFunction_1623(data, threadData);
  Steering_eqFunction_1624(data, threadData);
  Steering_eqFunction_1625(data, threadData);
  Steering_eqFunction_1626(data, threadData);
  Steering_eqFunction_1627(data, threadData);
  Steering_eqFunction_1628(data, threadData);
  Steering_eqFunction_1629(data, threadData);
  Steering_eqFunction_1630(data, threadData);
  Steering_eqFunction_1631(data, threadData);
  Steering_eqFunction_1632(data, threadData);
  Steering_eqFunction_1633(data, threadData);
  Steering_eqFunction_1634(data, threadData);
  Steering_eqFunction_1635(data, threadData);
  Steering_eqFunction_1636(data, threadData);
  Steering_eqFunction_1637(data, threadData);
  Steering_eqFunction_1638(data, threadData);
  Steering_eqFunction_1639(data, threadData);
  Steering_eqFunction_1640(data, threadData);
  Steering_eqFunction_1641(data, threadData);
  Steering_eqFunction_1642(data, threadData);
  Steering_eqFunction_1643(data, threadData);
  Steering_eqFunction_1644(data, threadData);
  Steering_eqFunction_1645(data, threadData);
  Steering_eqFunction_1646(data, threadData);
  Steering_eqFunction_1647(data, threadData);
  Steering_eqFunction_1648(data, threadData);
  Steering_eqFunction_1649(data, threadData);
  Steering_eqFunction_1650(data, threadData);
  Steering_eqFunction_1651(data, threadData);
  Steering_eqFunction_1652(data, threadData);
  Steering_eqFunction_1653(data, threadData);
  Steering_eqFunction_1654(data, threadData);
  Steering_eqFunction_1655(data, threadData);
  Steering_eqFunction_1656(data, threadData);
  Steering_eqFunction_1657(data, threadData);
  Steering_eqFunction_1658(data, threadData);
  Steering_eqFunction_1659(data, threadData);
  Steering_eqFunction_1660(data, threadData);
  Steering_eqFunction_1661(data, threadData);
  Steering_eqFunction_1662(data, threadData);
  Steering_eqFunction_1663(data, threadData);
  Steering_eqFunction_1664(data, threadData);
  Steering_eqFunction_1665(data, threadData);
  Steering_eqFunction_1666(data, threadData);
  Steering_eqFunction_1667(data, threadData);
  Steering_eqFunction_1668(data, threadData);
  Steering_eqFunction_1669(data, threadData);
  Steering_eqFunction_1670(data, threadData);
  Steering_eqFunction_1671(data, threadData);
  Steering_eqFunction_1672(data, threadData);
  Steering_eqFunction_1673(data, threadData);
  Steering_eqFunction_1674(data, threadData);
  Steering_eqFunction_1675(data, threadData);
  Steering_eqFunction_1676(data, threadData);
  Steering_eqFunction_1677(data, threadData);
  Steering_eqFunction_1678(data, threadData);
  Steering_eqFunction_1679(data, threadData);
  Steering_eqFunction_1680(data, threadData);
  Steering_eqFunction_1681(data, threadData);
  Steering_eqFunction_1682(data, threadData);
  Steering_eqFunction_1683(data, threadData);
  Steering_eqFunction_1684(data, threadData);
  Steering_eqFunction_1685(data, threadData);
  Steering_eqFunction_1686(data, threadData);
  Steering_eqFunction_1687(data, threadData);
  Steering_eqFunction_1688(data, threadData);
  Steering_eqFunction_1689(data, threadData);
  Steering_eqFunction_1690(data, threadData);
  Steering_eqFunction_1691(data, threadData);
  Steering_eqFunction_1692(data, threadData);
  Steering_eqFunction_1693(data, threadData);
  Steering_eqFunction_1694(data, threadData);
  Steering_eqFunction_1695(data, threadData);
  Steering_eqFunction_1696(data, threadData);
  Steering_eqFunction_1697(data, threadData);
  Steering_eqFunction_1698(data, threadData);
  Steering_eqFunction_1699(data, threadData);
  Steering_eqFunction_1700(data, threadData);
  Steering_eqFunction_1701(data, threadData);
  Steering_eqFunction_1702(data, threadData);
  Steering_eqFunction_1703(data, threadData);
  Steering_eqFunction_1704(data, threadData);
  Steering_eqFunction_1705(data, threadData);
  Steering_eqFunction_1706(data, threadData);
  Steering_eqFunction_1707(data, threadData);
  Steering_eqFunction_1708(data, threadData);
  Steering_eqFunction_1709(data, threadData);
  Steering_eqFunction_1710(data, threadData);
  Steering_eqFunction_1711(data, threadData);
  Steering_eqFunction_1712(data, threadData);
  Steering_eqFunction_1713(data, threadData);
  Steering_eqFunction_1714(data, threadData);
  Steering_eqFunction_1715(data, threadData);
  Steering_eqFunction_1716(data, threadData);
  Steering_eqFunction_1717(data, threadData);
  Steering_eqFunction_1718(data, threadData);
  Steering_eqFunction_1719(data, threadData);
  Steering_eqFunction_1720(data, threadData);
  Steering_eqFunction_1721(data, threadData);
  Steering_eqFunction_1722(data, threadData);
  Steering_eqFunction_1723(data, threadData);
  Steering_eqFunction_1724(data, threadData);
  Steering_eqFunction_1725(data, threadData);
  Steering_eqFunction_1726(data, threadData);
  Steering_eqFunction_1727(data, threadData);
  Steering_eqFunction_1728(data, threadData);
  Steering_eqFunction_1729(data, threadData);
  Steering_eqFunction_1730(data, threadData);
  Steering_eqFunction_1731(data, threadData);
  Steering_eqFunction_1732(data, threadData);
  Steering_eqFunction_1733(data, threadData);
  Steering_eqFunction_1734(data, threadData);
  Steering_eqFunction_1735(data, threadData);
  Steering_eqFunction_1736(data, threadData);
  Steering_eqFunction_1737(data, threadData);
  Steering_eqFunction_1738(data, threadData);
  Steering_eqFunction_1739(data, threadData);
  Steering_eqFunction_1740(data, threadData);
  Steering_eqFunction_1741(data, threadData);
  Steering_eqFunction_1742(data, threadData);
  Steering_eqFunction_1743(data, threadData);
  Steering_eqFunction_1744(data, threadData);
  Steering_eqFunction_1745(data, threadData);
  Steering_eqFunction_1746(data, threadData);
  Steering_eqFunction_1747(data, threadData);
  Steering_eqFunction_1748(data, threadData);
  Steering_eqFunction_1749(data, threadData);
  Steering_eqFunction_1750(data, threadData);
  Steering_eqFunction_1751(data, threadData);
  Steering_eqFunction_1752(data, threadData);
  Steering_eqFunction_1753(data, threadData);
  Steering_eqFunction_1754(data, threadData);
  Steering_eqFunction_1755(data, threadData);
  Steering_eqFunction_1756(data, threadData);
  Steering_eqFunction_1757(data, threadData);
  Steering_eqFunction_1758(data, threadData);
  Steering_eqFunction_1759(data, threadData);
  Steering_eqFunction_1760(data, threadData);
  Steering_eqFunction_1761(data, threadData);
  Steering_eqFunction_1762(data, threadData);
  Steering_eqFunction_1763(data, threadData);
  Steering_eqFunction_1764(data, threadData);
  Steering_eqFunction_1765(data, threadData);
  Steering_eqFunction_1766(data, threadData);
  Steering_eqFunction_1767(data, threadData);
  Steering_eqFunction_1768(data, threadData);
  Steering_eqFunction_1769(data, threadData);
  Steering_eqFunction_1770(data, threadData);
  Steering_eqFunction_1771(data, threadData);
  Steering_eqFunction_1772(data, threadData);
  Steering_eqFunction_1773(data, threadData);
  Steering_eqFunction_1774(data, threadData);
  Steering_eqFunction_1775(data, threadData);
  Steering_eqFunction_1776(data, threadData);
  Steering_eqFunction_1777(data, threadData);
  Steering_eqFunction_1778(data, threadData);
  Steering_eqFunction_1779(data, threadData);
  Steering_eqFunction_1780(data, threadData);
  Steering_eqFunction_1781(data, threadData);
  Steering_eqFunction_1782(data, threadData);
  Steering_eqFunction_1783(data, threadData);
  Steering_eqFunction_1784(data, threadData);
  Steering_eqFunction_1785(data, threadData);
  Steering_eqFunction_1786(data, threadData);
  Steering_eqFunction_1787(data, threadData);
  Steering_eqFunction_1788(data, threadData);
  Steering_eqFunction_1789(data, threadData);
  Steering_eqFunction_1790(data, threadData);
  Steering_eqFunction_1791(data, threadData);
  Steering_eqFunction_1792(data, threadData);
  Steering_eqFunction_1793(data, threadData);
  Steering_eqFunction_1794(data, threadData);
  Steering_eqFunction_1795(data, threadData);
  Steering_eqFunction_1796(data, threadData);
  Steering_eqFunction_1797(data, threadData);
  Steering_eqFunction_1798(data, threadData);
  Steering_eqFunction_1799(data, threadData);
  Steering_eqFunction_1800(data, threadData);
  Steering_eqFunction_1801(data, threadData);
  Steering_eqFunction_1802(data, threadData);
  Steering_eqFunction_1803(data, threadData);
  Steering_eqFunction_1804(data, threadData);
  Steering_eqFunction_1805(data, threadData);
  Steering_eqFunction_1806(data, threadData);
  Steering_eqFunction_1807(data, threadData);
  Steering_eqFunction_1808(data, threadData);
  Steering_eqFunction_1809(data, threadData);
  Steering_eqFunction_1810(data, threadData);
  Steering_eqFunction_1811(data, threadData);
  Steering_eqFunction_1812(data, threadData);
  Steering_eqFunction_1813(data, threadData);
  Steering_eqFunction_1814(data, threadData);
  Steering_eqFunction_1815(data, threadData);
  Steering_eqFunction_1816(data, threadData);
  Steering_eqFunction_1817(data, threadData);
  Steering_eqFunction_1818(data, threadData);
  Steering_eqFunction_1819(data, threadData);
  Steering_eqFunction_1820(data, threadData);
  Steering_eqFunction_1821(data, threadData);
  Steering_eqFunction_1822(data, threadData);
  Steering_eqFunction_1823(data, threadData);
  Steering_eqFunction_1824(data, threadData);
  Steering_eqFunction_1825(data, threadData);
  Steering_eqFunction_1826(data, threadData);
  Steering_eqFunction_1827(data, threadData);
  Steering_eqFunction_1828(data, threadData);
  Steering_eqFunction_1829(data, threadData);
  Steering_eqFunction_1830(data, threadData);
  Steering_eqFunction_1831(data, threadData);
  Steering_eqFunction_1832(data, threadData);
  Steering_eqFunction_1833(data, threadData);
  Steering_eqFunction_1834(data, threadData);
  Steering_eqFunction_1835(data, threadData);
  Steering_eqFunction_1836(data, threadData);
  Steering_eqFunction_1837(data, threadData);
  Steering_eqFunction_1838(data, threadData);
  Steering_eqFunction_1839(data, threadData);
  Steering_eqFunction_1840(data, threadData);
  Steering_eqFunction_1841(data, threadData);
  Steering_eqFunction_1842(data, threadData);
  Steering_eqFunction_1843(data, threadData);
  Steering_eqFunction_1844(data, threadData);
  Steering_eqFunction_1845(data, threadData);
  Steering_eqFunction_1846(data, threadData);
  Steering_eqFunction_1847(data, threadData);
  Steering_eqFunction_1848(data, threadData);
  Steering_eqFunction_1849(data, threadData);
  Steering_eqFunction_1850(data, threadData);
  Steering_eqFunction_1851(data, threadData);
  Steering_eqFunction_1852(data, threadData);
  Steering_eqFunction_1853(data, threadData);
  Steering_eqFunction_1854(data, threadData);
  Steering_eqFunction_1855(data, threadData);
  Steering_eqFunction_1856(data, threadData);
  Steering_eqFunction_1857(data, threadData);
  Steering_eqFunction_1858(data, threadData);
  Steering_eqFunction_1859(data, threadData);
  Steering_eqFunction_1860(data, threadData);
  Steering_eqFunction_1861(data, threadData);
  Steering_eqFunction_1862(data, threadData);
  Steering_eqFunction_1863(data, threadData);
  Steering_eqFunction_1864(data, threadData);
  Steering_eqFunction_1865(data, threadData);
  Steering_eqFunction_1866(data, threadData);
  Steering_eqFunction_1867(data, threadData);
  Steering_eqFunction_1868(data, threadData);
  Steering_eqFunction_1869(data, threadData);
  Steering_eqFunction_1870(data, threadData);
  Steering_eqFunction_1871(data, threadData);
  Steering_eqFunction_1872(data, threadData);
  Steering_eqFunction_1873(data, threadData);
  Steering_eqFunction_1874(data, threadData);
  Steering_eqFunction_1875(data, threadData);
  Steering_eqFunction_1876(data, threadData);
  Steering_eqFunction_1877(data, threadData);
  Steering_eqFunction_1878(data, threadData);
  Steering_eqFunction_1879(data, threadData);
  Steering_eqFunction_1880(data, threadData);
  Steering_eqFunction_1881(data, threadData);
  Steering_eqFunction_1882(data, threadData);
  Steering_eqFunction_1883(data, threadData);
  Steering_eqFunction_1884(data, threadData);
  Steering_eqFunction_1885(data, threadData);
  Steering_eqFunction_1886(data, threadData);
  Steering_eqFunction_1887(data, threadData);
  Steering_eqFunction_1888(data, threadData);
  Steering_eqFunction_1889(data, threadData);
  Steering_eqFunction_1890(data, threadData);
  Steering_eqFunction_1891(data, threadData);
  Steering_eqFunction_1892(data, threadData);
  Steering_eqFunction_1893(data, threadData);
  Steering_eqFunction_1894(data, threadData);
  Steering_eqFunction_1895(data, threadData);
  Steering_eqFunction_1896(data, threadData);
  Steering_eqFunction_1897(data, threadData);
  Steering_eqFunction_1898(data, threadData);
  Steering_eqFunction_1899(data, threadData);
  Steering_eqFunction_1900(data, threadData);
  Steering_eqFunction_1901(data, threadData);
  Steering_eqFunction_1902(data, threadData);
  Steering_eqFunction_1903(data, threadData);
  Steering_eqFunction_1904(data, threadData);
  Steering_eqFunction_1905(data, threadData);
  Steering_eqFunction_1906(data, threadData);
  Steering_eqFunction_1907(data, threadData);
  Steering_eqFunction_1908(data, threadData);
  Steering_eqFunction_1909(data, threadData);
  Steering_eqFunction_1910(data, threadData);
  Steering_eqFunction_1911(data, threadData);
  Steering_eqFunction_1912(data, threadData);
  Steering_eqFunction_1913(data, threadData);
  Steering_eqFunction_1914(data, threadData);
  Steering_eqFunction_1915(data, threadData);
  Steering_eqFunction_1916(data, threadData);
  Steering_eqFunction_1917(data, threadData);
  Steering_eqFunction_1918(data, threadData);
  Steering_eqFunction_1919(data, threadData);
  Steering_eqFunction_1920(data, threadData);
  Steering_eqFunction_1921(data, threadData);
  Steering_eqFunction_1922(data, threadData);
  Steering_eqFunction_1923(data, threadData);
  Steering_eqFunction_1924(data, threadData);
  Steering_eqFunction_1925(data, threadData);
  Steering_eqFunction_1926(data, threadData);
  Steering_eqFunction_1927(data, threadData);
  Steering_eqFunction_1928(data, threadData);
  Steering_eqFunction_1929(data, threadData);
  Steering_eqFunction_1930(data, threadData);
  Steering_eqFunction_1931(data, threadData);
  Steering_eqFunction_1932(data, threadData);
  Steering_eqFunction_1933(data, threadData);
  Steering_eqFunction_1934(data, threadData);
  Steering_eqFunction_1935(data, threadData);
  Steering_eqFunction_1936(data, threadData);
  Steering_eqFunction_1937(data, threadData);
  Steering_eqFunction_1938(data, threadData);
  Steering_eqFunction_1939(data, threadData);
  Steering_eqFunction_1940(data, threadData);
  Steering_eqFunction_1941(data, threadData);
  Steering_eqFunction_1942(data, threadData);
  Steering_eqFunction_1943(data, threadData);
  Steering_eqFunction_1944(data, threadData);
  Steering_eqFunction_1945(data, threadData);
  Steering_eqFunction_1946(data, threadData);
  Steering_eqFunction_1947(data, threadData);
  Steering_eqFunction_1948(data, threadData);
  Steering_eqFunction_1949(data, threadData);
  Steering_eqFunction_1950(data, threadData);
  Steering_eqFunction_1951(data, threadData);
  Steering_eqFunction_1952(data, threadData);
  Steering_eqFunction_1953(data, threadData);
  Steering_eqFunction_1954(data, threadData);
  Steering_eqFunction_1955(data, threadData);
  Steering_eqFunction_1956(data, threadData);
  Steering_eqFunction_1957(data, threadData);
  Steering_eqFunction_1958(data, threadData);
  Steering_eqFunction_1959(data, threadData);
  Steering_eqFunction_1960(data, threadData);
  Steering_eqFunction_1961(data, threadData);
  Steering_eqFunction_1962(data, threadData);
  Steering_eqFunction_1963(data, threadData);
  Steering_eqFunction_1964(data, threadData);
  Steering_eqFunction_1965(data, threadData);
  Steering_eqFunction_1966(data, threadData);
  Steering_eqFunction_1967(data, threadData);
  Steering_eqFunction_1968(data, threadData);
  Steering_eqFunction_1969(data, threadData);
  Steering_eqFunction_1970(data, threadData);
  Steering_eqFunction_1971(data, threadData);
  Steering_eqFunction_1972(data, threadData);
  Steering_eqFunction_1973(data, threadData);
  Steering_eqFunction_1974(data, threadData);
  Steering_eqFunction_1975(data, threadData);
  Steering_eqFunction_1976(data, threadData);
  Steering_eqFunction_1977(data, threadData);
  Steering_eqFunction_1978(data, threadData);
  Steering_eqFunction_1979(data, threadData);
  Steering_eqFunction_1980(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif