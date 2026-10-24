#include "Roll_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 2476
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod1.shape_b.extra = 0.0
*/
void Roll_eqFunction_2476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2476};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4419]] /* rear.cornerR.tieRod.rod1.shape_b.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2477
type: SIMPLE_ASSIGN
rear.cornerR.upright.cylinder.length = if sqrt(rear.cornerR.upright.r_CM * rear.cornerR.upright.r_CM) > 0.05555555555555555 then sqrt(rear.cornerR.upright.r_CM * rear.cornerR.upright.r_CM) - (if rear.cornerR.upright.cylinderDiameter > 0.12222222222222223 then 0.05555555555555555 else 0.0) else 0.0
*/
void Roll_eqFunction_2477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2477};
  real_array tmp20;
  real_array tmp21;
  modelica_real tmp22;
  modelica_boolean tmp23;
  real_array tmp24;
  real_array tmp25;
  modelica_real tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  real_array_create(&tmp20, ((modelica_real*)&((&data->simulationInfo->realParameter[3006] /* rear.cornerR.upright.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp21, ((modelica_real*)&((&data->simulationInfo->realParameter[3006] /* rear.cornerR.upright.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  tmp22 = mul_real_scalar_product(tmp20, tmp21);
  if(!(tmp22 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rear.cornerR.upright.r_CM * rear.cornerR.upright.r_CM) was %g should be >= 0", tmp22);
    }
  }tmp23 = Greater(sqrt(tmp22),0.05555555555555555);
  tmp28 = (modelica_boolean)tmp23;
  if(tmp28)
  {
    real_array_create(&tmp24, ((modelica_real*)&((&data->simulationInfo->realParameter[3006] /* rear.cornerR.upright.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
    real_array_create(&tmp25, ((modelica_real*)&((&data->simulationInfo->realParameter[3006] /* rear.cornerR.upright.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
    tmp26 = mul_real_scalar_product(tmp24, tmp25);
    if(!(tmp26 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rear.cornerR.upright.r_CM * rear.cornerR.upright.r_CM) was %g should be >= 0", tmp26);
      }
    }tmp27 = Greater((data->simulationInfo->realParameter[3000] /* rear.cornerR.upright.cylinderDiameter PARAM */),0.12222222222222223);
    tmp29 = sqrt(tmp26) - ((tmp27?0.05555555555555555:0.0));
  }
  else
  {
    tmp29 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4529]] /* rear.cornerR.upright.cylinder.length variable */) = tmp29;
  TRACE_POP
}

/*
equation index: 2478
type: SIMPLE_ASSIGN
rear.cornerR.upright.cylinder.extra = 0.0
*/
void Roll_eqFunction_2478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2478};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4528]] /* rear.cornerR.upright.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2479
type: SIMPLE_ASSIGN
rear.cornerR.upright.sphere.length = 0.1111111111111111
*/
void Roll_eqFunction_2479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2479};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4570]] /* rear.cornerR.upright.sphere.length variable */) = 0.1111111111111111;
  TRACE_POP
}

/*
equation index: 2480
type: SIMPLE_ASSIGN
rear.cornerR.upright.sphere.width = 0.1111111111111111
*/
void Roll_eqFunction_2480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2480};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4575]] /* rear.cornerR.upright.sphere.width variable */) = 0.1111111111111111;
  TRACE_POP
}

/*
equation index: 2481
type: SIMPLE_ASSIGN
rear.cornerR.upright.sphere.height = 0.1111111111111111
*/
void Roll_eqFunction_2481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2481};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4569]] /* rear.cornerR.upright.sphere.height variable */) = 0.1111111111111111;
  TRACE_POP
}

/*
equation index: 2482
type: SIMPLE_ASSIGN
rear.cornerR.upright.sphere.extra = 0.0
*/
void Roll_eqFunction_2482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2482};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4568]] /* rear.cornerR.upright.sphere.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2483
type: SIMPLE_ASSIGN
rear.cornerR.ucaMount.shape.length = 0.5107837115648853
*/
void Roll_eqFunction_2483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2483};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4489]] /* rear.cornerR.ucaMount.shape.length variable */) = 0.5107837115648853;
  TRACE_POP
}

/*
equation index: 2484
type: SIMPLE_ASSIGN
rear.cornerR.ucaPivot.cylinder.extra = 0.0
*/
void Roll_eqFunction_2484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2484};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4507]] /* rear.cornerR.ucaPivot.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2485
type: SIMPLE_ASSIGN
rear.cornerR.lcaMount.shape.length = 0.3624913792078372
*/
void Roll_eqFunction_2485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2485};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4167]] /* rear.cornerR.lcaMount.shape.length variable */) = 0.3624913792078372;
  TRACE_POP
}

/*
equation index: 2486
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.revolute.cylinder.extra = 0.0
*/
void Roll_eqFunction_2486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2486};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3996]] /* rear.cornerR.jointUSR.revolute.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2487
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.rodShape.extra = 0.0
*/
void Roll_eqFunction_2487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2487};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4086]] /* rear.cornerR.jointUSR.rod1.rodShape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2488
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.sphericalShape_b.extra = 0.0
*/
void Roll_eqFunction_2488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2488};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4099]] /* rear.cornerR.jointUSR.rod1.sphericalShape_b.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2489
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.universalShape1.extra = 0.0
*/
void Roll_eqFunction_2489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2489};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4113]] /* rear.cornerR.jointUSR.rod1.universalShape1.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2490
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.universalShape2.extra = 0.0
*/
void Roll_eqFunction_2490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2490};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4126]] /* rear.cornerR.jointUSR.rod1.universalShape2.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2491
type: SIMPLE_ASSIGN
rear.cornerR.coilover.shape_a.extra = 0.0
*/
void Roll_eqFunction_2491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2491};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3869]] /* rear.cornerR.coilover.shape_a.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2492
type: SIMPLE_ASSIGN
rear.cornerR.coilover.diameter_b = 0.6 * world.defaultForceWidth
*/
void Roll_eqFunction_2492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2492};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3831]] /* rear.cornerR.coilover.diameter_b variable */) = (0.6) * ((data->simulationInfo->realParameter[3636] /* world.defaultForceWidth PARAM */));
  TRACE_POP
}

/*
equation index: 2493
type: SIMPLE_ASSIGN
rear.cornerR.coilover.shape_b.extra = 0.0
*/
void Roll_eqFunction_2493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2493};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3880]] /* rear.cornerR.coilover.shape_b.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2494
type: SIMPLE_ASSIGN
rear.cornerR.coilover.shape.extra = (*Real*)(rear.cornerR.coilover.numberOfWindings)
*/
void Roll_eqFunction_2494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2494};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3858]] /* rear.cornerR.coilover.shape.extra variable */) = ((modelica_real)(data->simulationInfo->integerParameter[76] /* rear.cornerR.coilover.numberOfWindings PARAM */));
  TRACE_POP
}

/*
equation index: 2495
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.revolute.cylinder.extra = 0.0
*/
void Roll_eqFunction_2495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2495};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3513]] /* rear.cornerL.tieRod.revolute.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2496
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod1.shape_rod.extra = 0.0
*/
void Roll_eqFunction_2496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2496};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3595]] /* rear.cornerL.tieRod.rod1.shape_rod.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2497
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod1.shape_a.extra = 0.0
*/
void Roll_eqFunction_2497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2497};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3575]] /* rear.cornerL.tieRod.rod1.shape_a.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2498
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod1.shape_b.extra = 0.0
*/
void Roll_eqFunction_2498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2498};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3585]] /* rear.cornerL.tieRod.rod1.shape_b.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2499
type: SIMPLE_ASSIGN
rear.cornerL.upright.cylinder.length = if sqrt(rear.cornerL.upright.r_CM * rear.cornerL.upright.r_CM) > 0.05555555555555555 then sqrt(rear.cornerL.upright.r_CM * rear.cornerL.upright.r_CM) - (if rear.cornerL.upright.cylinderDiameter > 0.12222222222222223 then 0.05555555555555555 else 0.0) else 0.0
*/
void Roll_eqFunction_2499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2499};
  real_array tmp30;
  real_array tmp31;
  modelica_real tmp32;
  modelica_boolean tmp33;
  real_array tmp34;
  real_array tmp35;
  modelica_real tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_real tmp39;
  real_array_create(&tmp30, ((modelica_real*)&((&data->simulationInfo->realParameter[2297] /* rear.cornerL.upright.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  real_array_create(&tmp31, ((modelica_real*)&((&data->simulationInfo->realParameter[2297] /* rear.cornerL.upright.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
  tmp32 = mul_real_scalar_product(tmp30, tmp31);
  if(!(tmp32 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rear.cornerL.upright.r_CM * rear.cornerL.upright.r_CM) was %g should be >= 0", tmp32);
    }
  }tmp33 = Greater(sqrt(tmp32),0.05555555555555555);
  tmp38 = (modelica_boolean)tmp33;
  if(tmp38)
  {
    real_array_create(&tmp34, ((modelica_real*)&((&data->simulationInfo->realParameter[2297] /* rear.cornerL.upright.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
    real_array_create(&tmp35, ((modelica_real*)&((&data->simulationInfo->realParameter[2297] /* rear.cornerL.upright.r_CM[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)3);
    tmp36 = mul_real_scalar_product(tmp34, tmp35);
    if(!(tmp36 >= 0.0))
    {
      if (data->simulationInfo->noThrowAsserts) {
        FILE_INFO info = {"",0,0,0,0,0};
        infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        data->simulationInfo->needToReThrow = 1;
      } else {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rear.cornerL.upright.r_CM * rear.cornerL.upright.r_CM) was %g should be >= 0", tmp36);
      }
    }tmp37 = Greater((data->simulationInfo->realParameter[2291] /* rear.cornerL.upright.cylinderDiameter PARAM */),0.12222222222222223);
    tmp39 = sqrt(tmp36) - ((tmp37?0.05555555555555555:0.0));
  }
  else
  {
    tmp39 = 0.0;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3695]] /* rear.cornerL.upright.cylinder.length variable */) = tmp39;
  TRACE_POP
}

/*
equation index: 2500
type: SIMPLE_ASSIGN
rear.cornerL.upright.cylinder.extra = 0.0
*/
void Roll_eqFunction_2500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2500};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3694]] /* rear.cornerL.upright.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2501
type: SIMPLE_ASSIGN
rear.cornerL.upright.sphere.length = 0.1111111111111111
*/
void Roll_eqFunction_2501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2501};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3736]] /* rear.cornerL.upright.sphere.length variable */) = 0.1111111111111111;
  TRACE_POP
}

/*
equation index: 2502
type: SIMPLE_ASSIGN
rear.cornerL.upright.sphere.width = 0.1111111111111111
*/
void Roll_eqFunction_2502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2502};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3741]] /* rear.cornerL.upright.sphere.width variable */) = 0.1111111111111111;
  TRACE_POP
}

/*
equation index: 2503
type: SIMPLE_ASSIGN
rear.cornerL.upright.sphere.height = 0.1111111111111111
*/
void Roll_eqFunction_2503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2503};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3735]] /* rear.cornerL.upright.sphere.height variable */) = 0.1111111111111111;
  TRACE_POP
}

/*
equation index: 2504
type: SIMPLE_ASSIGN
rear.cornerL.upright.sphere.extra = 0.0
*/
void Roll_eqFunction_2504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2504};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3734]] /* rear.cornerL.upright.sphere.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2505
type: SIMPLE_ASSIGN
rear.cornerL.ucaMount.shape.length = 0.5107837115648853
*/
void Roll_eqFunction_2505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2505};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3655]] /* rear.cornerL.ucaMount.shape.length variable */) = 0.5107837115648853;
  TRACE_POP
}

/*
equation index: 2506
type: SIMPLE_ASSIGN
rear.cornerL.ucaPivot.cylinder.extra = 0.0
*/
void Roll_eqFunction_2506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2506};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3673]] /* rear.cornerL.ucaPivot.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2507
type: SIMPLE_ASSIGN
rear.cornerL.lcaMount.shape.length = 0.3624913792078372
*/
void Roll_eqFunction_2507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2507};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3333]] /* rear.cornerL.lcaMount.shape.length variable */) = 0.3624913792078372;
  TRACE_POP
}

/*
equation index: 2508
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.cylinder.extra = 0.0
*/
void Roll_eqFunction_2508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2508};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3162]] /* rear.cornerL.jointUSR.revolute.cylinder.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2509
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.rodShape.extra = 0.0
*/
void Roll_eqFunction_2509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2509};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3252]] /* rear.cornerL.jointUSR.rod1.rodShape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2510
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.sphericalShape_b.extra = 0.0
*/
void Roll_eqFunction_2510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2510};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3265]] /* rear.cornerL.jointUSR.rod1.sphericalShape_b.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2511
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape1.extra = 0.0
*/
void Roll_eqFunction_2511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2511};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3279]] /* rear.cornerL.jointUSR.rod1.universalShape1.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2512
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.universalShape2.extra = 0.0
*/
void Roll_eqFunction_2512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2512};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3292]] /* rear.cornerL.jointUSR.rod1.universalShape2.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2513
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_a.extra = 0.0
*/
void Roll_eqFunction_2513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2513};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3035]] /* rear.cornerL.coilover.shape_a.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2514
type: SIMPLE_ASSIGN
rear.cornerL.coilover.diameter_b = 0.6 * world.defaultForceWidth
*/
void Roll_eqFunction_2514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2514};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2997]] /* rear.cornerL.coilover.diameter_b variable */) = (0.6) * ((data->simulationInfo->realParameter[3636] /* world.defaultForceWidth PARAM */));
  TRACE_POP
}

/*
equation index: 2515
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape_b.extra = 0.0
*/
void Roll_eqFunction_2515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2515};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3046]] /* rear.cornerL.coilover.shape_b.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2516
type: SIMPLE_ASSIGN
rear.cornerL.coilover.shape.extra = (*Real*)(rear.cornerL.coilover.numberOfWindings)
*/
void Roll_eqFunction_2516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2516};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3024]] /* rear.cornerL.coilover.shape.extra variable */) = ((modelica_real)(data->simulationInfo->integerParameter[54] /* rear.cornerL.coilover.numberOfWindings PARAM */));
  TRACE_POP
}

/*
equation index: 2517
type: SIMPLE_ASSIGN
view[1].upper[1].shape.extra = 0.0
*/
void Roll_eqFunction_2517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2517};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5310]] /* view[1].upper[1].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2518
type: SIMPLE_ASSIGN
view[1].upper[1].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2518};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5374]] /* view[1].upper[1].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2519
type: SIMPLE_ASSIGN
view[1].upper[2].shape.extra = 0.0
*/
void Roll_eqFunction_2519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2519};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5311]] /* view[1].upper[2].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2520
type: SIMPLE_ASSIGN
view[1].upper[2].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2520};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5375]] /* view[1].upper[2].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2521
type: SIMPLE_ASSIGN
view[1].lower[1].shape.extra = 0.0
*/
void Roll_eqFunction_2521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2521};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4842]] /* view[1].lower[1].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2522
type: SIMPLE_ASSIGN
view[1].lower[1].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2522};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4906]] /* view[1].lower[1].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2523
type: SIMPLE_ASSIGN
view[1].lower[2].shape.extra = 0.0
*/
void Roll_eqFunction_2523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2523};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4843]] /* view[1].lower[2].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2524
type: SIMPLE_ASSIGN
view[1].lower[2].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2524};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4907]] /* view[1].lower[2].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2525
type: SIMPLE_ASSIGN
view[1].upright.shape.extra = 0.0
*/
void Roll_eqFunction_2525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2525};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5454]] /* view[1].upright.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2526
type: SIMPLE_ASSIGN
view[1].upright.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2526};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5486]] /* view[1].upright.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2527
type: SIMPLE_ASSIGN
view[1].tieRod.shape.extra = 0.0
*/
void Roll_eqFunction_2527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5166]] /* view[1].tieRod.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2528
type: SIMPLE_ASSIGN
view[1].tieRod.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2528};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5198]] /* view[1].tieRod.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2529
type: SIMPLE_ASSIGN
view[1].spring.shape.extra = 0.0
*/
void Roll_eqFunction_2529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2529};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5082]] /* view[1].spring.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2530
type: SIMPLE_ASSIGN
view[1].spring.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2530};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5102]] /* view[1].spring.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2531
type: SIMPLE_ASSIGN
view[1].spindle.shape.extra = 0.0
*/
void Roll_eqFunction_2531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2531};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4986]] /* view[1].spindle.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2532
type: SIMPLE_ASSIGN
view[1].spindle.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2532};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5018]] /* view[1].spindle.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2533
type: SIMPLE_ASSIGN
view[2].upper[1].shape.extra = 0.0
*/
void Roll_eqFunction_2533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2533};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5312]] /* view[2].upper[1].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2534
type: SIMPLE_ASSIGN
view[2].upper[1].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2534};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5376]] /* view[2].upper[1].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2535
type: SIMPLE_ASSIGN
view[2].upper[2].shape.extra = 0.0
*/
void Roll_eqFunction_2535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2535};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5313]] /* view[2].upper[2].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2536
type: SIMPLE_ASSIGN
view[2].upper[2].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2536};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5377]] /* view[2].upper[2].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2537
type: SIMPLE_ASSIGN
view[2].lower[1].shape.extra = 0.0
*/
void Roll_eqFunction_2537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2537};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4844]] /* view[2].lower[1].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2538
type: SIMPLE_ASSIGN
view[2].lower[1].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2538};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4908]] /* view[2].lower[1].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2539
type: SIMPLE_ASSIGN
view[2].lower[2].shape.extra = 0.0
*/
void Roll_eqFunction_2539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2539};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4845]] /* view[2].lower[2].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2540
type: SIMPLE_ASSIGN
view[2].lower[2].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2540};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4909]] /* view[2].lower[2].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2541
type: SIMPLE_ASSIGN
view[2].upright.shape.extra = 0.0
*/
void Roll_eqFunction_2541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2541};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5455]] /* view[2].upright.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2542
type: SIMPLE_ASSIGN
view[2].upright.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2542};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5487]] /* view[2].upright.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2543
type: SIMPLE_ASSIGN
view[2].tieRod.shape.extra = 0.0
*/
void Roll_eqFunction_2543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2543};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5167]] /* view[2].tieRod.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2544
type: SIMPLE_ASSIGN
view[2].tieRod.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2544};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5199]] /* view[2].tieRod.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2545
type: SIMPLE_ASSIGN
view[2].spring.shape.extra = 0.0
*/
void Roll_eqFunction_2545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2545};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5083]] /* view[2].spring.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2546
type: SIMPLE_ASSIGN
view[2].spring.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2546};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5103]] /* view[2].spring.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2547
type: SIMPLE_ASSIGN
view[2].spindle.shape.extra = 0.0
*/
void Roll_eqFunction_2547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2547};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4987]] /* view[2].spindle.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2548
type: SIMPLE_ASSIGN
view[2].spindle.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2548};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5019]] /* view[2].spindle.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2549
type: SIMPLE_ASSIGN
view[3].upper[1].shape.extra = 0.0
*/
void Roll_eqFunction_2549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2549};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5314]] /* view[3].upper[1].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2550
type: SIMPLE_ASSIGN
view[3].upper[1].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2550};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5378]] /* view[3].upper[1].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2551
type: SIMPLE_ASSIGN
view[3].upper[2].shape.extra = 0.0
*/
void Roll_eqFunction_2551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2551};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5315]] /* view[3].upper[2].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2552
type: SIMPLE_ASSIGN
view[3].upper[2].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2552};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5379]] /* view[3].upper[2].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2553
type: SIMPLE_ASSIGN
view[3].lower[1].shape.extra = 0.0
*/
void Roll_eqFunction_2553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2553};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4846]] /* view[3].lower[1].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2554
type: SIMPLE_ASSIGN
view[3].lower[1].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2554};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4910]] /* view[3].lower[1].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2555
type: SIMPLE_ASSIGN
view[3].lower[2].shape.extra = 0.0
*/
void Roll_eqFunction_2555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2555};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4847]] /* view[3].lower[2].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2556
type: SIMPLE_ASSIGN
view[3].lower[2].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2556};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4911]] /* view[3].lower[2].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2557
type: SIMPLE_ASSIGN
view[3].upright.shape.extra = 0.0
*/
void Roll_eqFunction_2557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2557};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5456]] /* view[3].upright.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2558
type: SIMPLE_ASSIGN
view[3].upright.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2558};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5488]] /* view[3].upright.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2559
type: SIMPLE_ASSIGN
view[3].tieRod.shape.extra = 0.0
*/
void Roll_eqFunction_2559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2559};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5168]] /* view[3].tieRod.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2560
type: SIMPLE_ASSIGN
view[3].tieRod.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2560};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5200]] /* view[3].tieRod.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2561
type: SIMPLE_ASSIGN
view[3].spring.shape.extra = 0.0
*/
void Roll_eqFunction_2561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2561};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5084]] /* view[3].spring.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2562
type: SIMPLE_ASSIGN
view[3].spring.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2562};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5104]] /* view[3].spring.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2563
type: SIMPLE_ASSIGN
view[3].spindle.shape.extra = 0.0
*/
void Roll_eqFunction_2563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2563};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4988]] /* view[3].spindle.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2564
type: SIMPLE_ASSIGN
view[3].spindle.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2564};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5020]] /* view[3].spindle.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2565
type: SIMPLE_ASSIGN
view[4].upper[1].shape.extra = 0.0
*/
void Roll_eqFunction_2565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5316]] /* view[4].upper[1].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2566
type: SIMPLE_ASSIGN
view[4].upper[1].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5380]] /* view[4].upper[1].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2567
type: SIMPLE_ASSIGN
view[4].upper[2].shape.extra = 0.0
*/
void Roll_eqFunction_2567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5317]] /* view[4].upper[2].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2568
type: SIMPLE_ASSIGN
view[4].upper[2].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5381]] /* view[4].upper[2].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2569
type: SIMPLE_ASSIGN
view[4].lower[1].shape.extra = 0.0
*/
void Roll_eqFunction_2569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4848]] /* view[4].lower[1].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2570
type: SIMPLE_ASSIGN
view[4].lower[1].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4912]] /* view[4].lower[1].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2571
type: SIMPLE_ASSIGN
view[4].lower[2].shape.extra = 0.0
*/
void Roll_eqFunction_2571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2571};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4849]] /* view[4].lower[2].shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2572
type: SIMPLE_ASSIGN
view[4].lower[2].shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2572};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4913]] /* view[4].lower[2].shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2573
type: SIMPLE_ASSIGN
view[4].upright.shape.extra = 0.0
*/
void Roll_eqFunction_2573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2573};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5457]] /* view[4].upright.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2574
type: SIMPLE_ASSIGN
view[4].upright.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2574};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5489]] /* view[4].upright.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2575
type: SIMPLE_ASSIGN
view[4].tieRod.shape.extra = 0.0
*/
void Roll_eqFunction_2575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2575};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5169]] /* view[4].tieRod.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2576
type: SIMPLE_ASSIGN
view[4].tieRod.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2576};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5201]] /* view[4].tieRod.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2577
type: SIMPLE_ASSIGN
view[4].spring.shape.extra = 0.0
*/
void Roll_eqFunction_2577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2577};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5085]] /* view[4].spring.shape.extra variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2578
type: SIMPLE_ASSIGN
view[4].spring.shape.specularCoefficient = 0.7
*/
void Roll_eqFunction_2578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2578};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5105]] /* view[4].spring.shape.specularCoefficient variable */) = 0.7;
  TRACE_POP
}

/*
equation index: 2579
type: SIMPLE_ASSIGN
front.steering.rack.frame_a.t[2] = 0.0
*/
void Roll_eqFunction_2579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2579};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2628]] /* front.steering.rack.frame_a.t[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2580
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.r_b[1] = 0.02
*/
void Roll_eqFunction_2580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2580};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1920]] /* front.cornerR.jointUSR.revolute.r_b[1] variable */) = 0.02;
  TRACE_POP
}

/*
equation index: 2581
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.r_b[2] = 0.5499999999999999
*/
void Roll_eqFunction_2581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2581};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1921]] /* front.cornerR.jointUSR.revolute.r_b[2] variable */) = 0.5499999999999999;
  TRACE_POP
}

/*
equation index: 2582
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.revolute.r_b[3] = 0.0
*/
void Roll_eqFunction_2582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2582};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1922]] /* front.cornerR.jointUSR.revolute.r_b[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2583
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.revolute.r_b[1] = 0.02
*/
void Roll_eqFunction_2583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2583};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1095]] /* front.cornerL.jointUSR.revolute.r_b[1] variable */) = 0.02;
  TRACE_POP
}

/*
equation index: 2584
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.revolute.r_b[2] = -0.5499999999999999
*/
void Roll_eqFunction_2584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2584};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1096]] /* front.cornerL.jointUSR.revolute.r_b[2] variable */) = -0.5499999999999999;
  TRACE_POP
}

/*
equation index: 2585
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.revolute.r_b[3] = 0.0
*/
void Roll_eqFunction_2585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2585};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1097]] /* front.cornerL.jointUSR.revolute.r_b[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2586
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.revolute.r_b[1] = 0.0
*/
void Roll_eqFunction_2586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2586};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4022]] /* rear.cornerR.jointUSR.revolute.r_b[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2587
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.revolute.r_b[2] = 0.6199999999999999
*/
void Roll_eqFunction_2587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2587};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4023]] /* rear.cornerR.jointUSR.revolute.r_b[2] variable */) = 0.6199999999999999;
  TRACE_POP
}

/*
equation index: 2588
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.revolute.r_b[3] = 0.0
*/
void Roll_eqFunction_2588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2588};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4024]] /* rear.cornerR.jointUSR.revolute.r_b[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2589
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.r_b[1] = 0.0
*/
void Roll_eqFunction_2589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2589};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3188]] /* rear.cornerL.jointUSR.revolute.r_b[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2590
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.r_b[2] = -0.6199999999999999
*/
void Roll_eqFunction_2590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2590};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3189]] /* rear.cornerL.jointUSR.revolute.r_b[2] variable */) = -0.6199999999999999;
  TRACE_POP
}

/*
equation index: 2591
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.revolute.r_b[3] = 0.0
*/
void Roll_eqFunction_2591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2591};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3190]] /* rear.cornerL.jointUSR.revolute.r_b[3] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2592
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.e3_ia[3] = 0.222824801502141 * rear.cornerL.jointUSR.rod1.e2_ia[1]
*/
void Roll_eqFunction_2592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2592};
  (data->simulationInfo->realParameter[1814] /* rear.cornerL.jointUSR.rod1.e3_ia[3] PARAM */) = (0.222824801502141) * ((data->simulationInfo->realParameter[1809] /* rear.cornerL.jointUSR.rod1.e2_ia[1] PARAM */));
  TRACE_POP
}

/*
equation index: 2593
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.R_rel_ia2.T[3,3] = rear.cornerL.jointUSR.rod1.e3_ia[3]
*/
void Roll_eqFunction_2593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2593};
  (data->simulationInfo->realParameter[1806] /* rear.cornerL.jointUSR.rod1.R_rel_ia2.T[3,3] PARAM */) = (data->simulationInfo->realParameter[1814] /* rear.cornerL.jointUSR.rod1.e3_ia[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2594
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.e3_ia[2] = 0.9748585065718673 * rear.cornerL.jointUSR.rod1.e2_ia[1]
*/
void Roll_eqFunction_2594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2594};
  (data->simulationInfo->realParameter[1813] /* rear.cornerL.jointUSR.rod1.e3_ia[2] PARAM */) = (0.9748585065718673) * ((data->simulationInfo->realParameter[1809] /* rear.cornerL.jointUSR.rod1.e2_ia[1] PARAM */));
  TRACE_POP
}

/*
equation index: 2595
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.R_rel_ia2.T[2,3] = rear.cornerL.jointUSR.rod1.e3_ia[2]
*/
void Roll_eqFunction_2595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2595};
  (data->simulationInfo->realParameter[1805] /* rear.cornerL.jointUSR.rod1.R_rel_ia2.T[2,3] PARAM */) = (data->simulationInfo->realParameter[1813] /* rear.cornerL.jointUSR.rod1.e3_ia[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2596
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.e3_ia[1] = (-0.222824801502141) * rear.cornerL.jointUSR.rod1.e2_ia[3] + (-0.9748585065718673) * rear.cornerL.jointUSR.rod1.e2_ia[2]
*/
void Roll_eqFunction_2596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2596};
  (data->simulationInfo->realParameter[1812] /* rear.cornerL.jointUSR.rod1.e3_ia[1] PARAM */) = (-0.222824801502141) * ((data->simulationInfo->realParameter[1811] /* rear.cornerL.jointUSR.rod1.e2_ia[3] PARAM */)) + (-0.9748585065718673) * ((data->simulationInfo->realParameter[1810] /* rear.cornerL.jointUSR.rod1.e2_ia[2] PARAM */));
  TRACE_POP
}

/*
equation index: 2597
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.rod1.R_rel_ia2.T[1,3] = rear.cornerL.jointUSR.rod1.e3_ia[1]
*/
void Roll_eqFunction_2597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2597};
  (data->simulationInfo->realParameter[1804] /* rear.cornerL.jointUSR.rod1.R_rel_ia2.T[1,3] PARAM */) = (data->simulationInfo->realParameter[1812] /* rear.cornerL.jointUSR.rod1.e3_ia[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2598
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.position_b[3].k = rear.cornerL.tieRod.rRod2_ib[3]
*/
void Roll_eqFunction_2598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2598};
  (data->simulationInfo->realParameter[2096] /* rear.cornerL.tieRod.position_b[3].k PARAM */) = (data->simulationInfo->realParameter[2102] /* rear.cornerL.tieRod.rRod2_ib[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2599
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.revolute.position_b[3] = rear.cornerL.tieRod.position_b[3].k
*/
void Roll_eqFunction_2599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2599};
  (data->simulationInfo->realParameter[2120] /* rear.cornerL.tieRod.revolute.position_b[3] PARAM */) = (data->simulationInfo->realParameter[2096] /* rear.cornerL.tieRod.position_b[3].k PARAM */);
  TRACE_POP
}

/*
equation index: 2600
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.position_b[3].y = rear.cornerL.tieRod.position_b[3].k
*/
void Roll_eqFunction_2600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2600};
  (data->simulationInfo->realParameter[2099] /* rear.cornerL.tieRod.position_b[3].y PARAM */) = (data->simulationInfo->realParameter[2096] /* rear.cornerL.tieRod.position_b[3].k PARAM */);
  TRACE_POP
}

/*
equation index: 2601
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.position_b[2].k = rear.cornerL.tieRod.rRod2_ib[2]
*/
void Roll_eqFunction_2601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2601};
  (data->simulationInfo->realParameter[2095] /* rear.cornerL.tieRod.position_b[2].k PARAM */) = (data->simulationInfo->realParameter[2101] /* rear.cornerL.tieRod.rRod2_ib[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2602
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.revolute.position_b[2] = rear.cornerL.tieRod.position_b[2].k
*/
void Roll_eqFunction_2602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2602};
  (data->simulationInfo->realParameter[2119] /* rear.cornerL.tieRod.revolute.position_b[2] PARAM */) = (data->simulationInfo->realParameter[2095] /* rear.cornerL.tieRod.position_b[2].k PARAM */);
  TRACE_POP
}

/*
equation index: 2603
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.position_b[2].y = rear.cornerL.tieRod.position_b[2].k
*/
void Roll_eqFunction_2603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2603};
  (data->simulationInfo->realParameter[2098] /* rear.cornerL.tieRod.position_b[2].y PARAM */) = (data->simulationInfo->realParameter[2095] /* rear.cornerL.tieRod.position_b[2].k PARAM */);
  TRACE_POP
}

/*
equation index: 2604
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.position_b[1].k = rear.cornerL.tieRod.rRod2_ib[1]
*/
void Roll_eqFunction_2604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2604};
  (data->simulationInfo->realParameter[2094] /* rear.cornerL.tieRod.position_b[1].k PARAM */) = (data->simulationInfo->realParameter[2100] /* rear.cornerL.tieRod.rRod2_ib[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2605
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.revolute.position_b[1] = rear.cornerL.tieRod.position_b[1].k
*/
void Roll_eqFunction_2605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2605};
  (data->simulationInfo->realParameter[2118] /* rear.cornerL.tieRod.revolute.position_b[1] PARAM */) = (data->simulationInfo->realParameter[2094] /* rear.cornerL.tieRod.position_b[1].k PARAM */);
  TRACE_POP
}

/*
equation index: 2606
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.position_b[1].y = rear.cornerL.tieRod.position_b[1].k
*/
void Roll_eqFunction_2606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2606};
  (data->simulationInfo->realParameter[2097] /* rear.cornerL.tieRod.position_b[1].y PARAM */) = (data->simulationInfo->realParameter[2094] /* rear.cornerL.tieRod.position_b[1].k PARAM */);
  TRACE_POP
}

/*
equation index: 2607
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.e3_ia[3] = (-0.222824801502141) * rear.cornerR.jointUSR.rod1.e2_ia[1]
*/
void Roll_eqFunction_2607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2607};
  (data->simulationInfo->realParameter[2523] /* rear.cornerR.jointUSR.rod1.e3_ia[3] PARAM */) = (-0.222824801502141) * ((data->simulationInfo->realParameter[2518] /* rear.cornerR.jointUSR.rod1.e2_ia[1] PARAM */));
  TRACE_POP
}

/*
equation index: 2608
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.R_rel_ia2.T[3,3] = rear.cornerR.jointUSR.rod1.e3_ia[3]
*/
void Roll_eqFunction_2608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2608};
  (data->simulationInfo->realParameter[2515] /* rear.cornerR.jointUSR.rod1.R_rel_ia2.T[3,3] PARAM */) = (data->simulationInfo->realParameter[2523] /* rear.cornerR.jointUSR.rod1.e3_ia[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2609
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.e3_ia[2] = 0.9748585065718673 * rear.cornerR.jointUSR.rod1.e2_ia[1]
*/
void Roll_eqFunction_2609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2609};
  (data->simulationInfo->realParameter[2522] /* rear.cornerR.jointUSR.rod1.e3_ia[2] PARAM */) = (0.9748585065718673) * ((data->simulationInfo->realParameter[2518] /* rear.cornerR.jointUSR.rod1.e2_ia[1] PARAM */));
  TRACE_POP
}

/*
equation index: 2610
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.R_rel_ia2.T[2,3] = rear.cornerR.jointUSR.rod1.e3_ia[2]
*/
void Roll_eqFunction_2610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2610};
  (data->simulationInfo->realParameter[2514] /* rear.cornerR.jointUSR.rod1.R_rel_ia2.T[2,3] PARAM */) = (data->simulationInfo->realParameter[2522] /* rear.cornerR.jointUSR.rod1.e3_ia[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2611
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.e3_ia[1] = 0.222824801502141 * rear.cornerR.jointUSR.rod1.e2_ia[3] + (-0.9748585065718673) * rear.cornerR.jointUSR.rod1.e2_ia[2]
*/
void Roll_eqFunction_2611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2611};
  (data->simulationInfo->realParameter[2521] /* rear.cornerR.jointUSR.rod1.e3_ia[1] PARAM */) = (0.222824801502141) * ((data->simulationInfo->realParameter[2520] /* rear.cornerR.jointUSR.rod1.e2_ia[3] PARAM */)) + (-0.9748585065718673) * ((data->simulationInfo->realParameter[2519] /* rear.cornerR.jointUSR.rod1.e2_ia[2] PARAM */));
  TRACE_POP
}

/*
equation index: 2612
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.rod1.R_rel_ia2.T[1,3] = rear.cornerR.jointUSR.rod1.e3_ia[1]
*/
void Roll_eqFunction_2612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2612};
  (data->simulationInfo->realParameter[2513] /* rear.cornerR.jointUSR.rod1.R_rel_ia2.T[1,3] PARAM */) = (data->simulationInfo->realParameter[2521] /* rear.cornerR.jointUSR.rod1.e3_ia[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2613
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.position_b[3].k = rear.cornerR.tieRod.rRod2_ib[3]
*/
void Roll_eqFunction_2613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2613};
  (data->simulationInfo->realParameter[2805] /* rear.cornerR.tieRod.position_b[3].k PARAM */) = (data->simulationInfo->realParameter[2811] /* rear.cornerR.tieRod.rRod2_ib[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2614
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.revolute.position_b[3] = rear.cornerR.tieRod.position_b[3].k
*/
void Roll_eqFunction_2614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2614};
  (data->simulationInfo->realParameter[2829] /* rear.cornerR.tieRod.revolute.position_b[3] PARAM */) = (data->simulationInfo->realParameter[2805] /* rear.cornerR.tieRod.position_b[3].k PARAM */);
  TRACE_POP
}

/*
equation index: 2615
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.position_b[3].y = rear.cornerR.tieRod.position_b[3].k
*/
void Roll_eqFunction_2615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2615};
  (data->simulationInfo->realParameter[2808] /* rear.cornerR.tieRod.position_b[3].y PARAM */) = (data->simulationInfo->realParameter[2805] /* rear.cornerR.tieRod.position_b[3].k PARAM */);
  TRACE_POP
}

/*
equation index: 2616
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.position_b[2].k = rear.cornerR.tieRod.rRod2_ib[2]
*/
void Roll_eqFunction_2616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2616};
  (data->simulationInfo->realParameter[2804] /* rear.cornerR.tieRod.position_b[2].k PARAM */) = (data->simulationInfo->realParameter[2810] /* rear.cornerR.tieRod.rRod2_ib[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2617
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.revolute.position_b[2] = rear.cornerR.tieRod.position_b[2].k
*/
void Roll_eqFunction_2617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2617};
  (data->simulationInfo->realParameter[2828] /* rear.cornerR.tieRod.revolute.position_b[2] PARAM */) = (data->simulationInfo->realParameter[2804] /* rear.cornerR.tieRod.position_b[2].k PARAM */);
  TRACE_POP
}

/*
equation index: 2618
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.position_b[2].y = rear.cornerR.tieRod.position_b[2].k
*/
void Roll_eqFunction_2618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2618};
  (data->simulationInfo->realParameter[2807] /* rear.cornerR.tieRod.position_b[2].y PARAM */) = (data->simulationInfo->realParameter[2804] /* rear.cornerR.tieRod.position_b[2].k PARAM */);
  TRACE_POP
}

/*
equation index: 2619
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.position_b[1].k = rear.cornerR.tieRod.rRod2_ib[1]
*/
void Roll_eqFunction_2619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2619};
  (data->simulationInfo->realParameter[2803] /* rear.cornerR.tieRod.position_b[1].k PARAM */) = (data->simulationInfo->realParameter[2809] /* rear.cornerR.tieRod.rRod2_ib[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2620
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.revolute.position_b[1] = rear.cornerR.tieRod.position_b[1].k
*/
void Roll_eqFunction_2620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2620};
  (data->simulationInfo->realParameter[2827] /* rear.cornerR.tieRod.revolute.position_b[1] PARAM */) = (data->simulationInfo->realParameter[2803] /* rear.cornerR.tieRod.position_b[1].k PARAM */);
  TRACE_POP
}

/*
equation index: 2621
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.position_b[1].y = rear.cornerR.tieRod.position_b[1].k
*/
void Roll_eqFunction_2621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2621};
  (data->simulationInfo->realParameter[2806] /* rear.cornerR.tieRod.position_b[1].y PARAM */) = (data->simulationInfo->realParameter[2803] /* rear.cornerR.tieRod.position_b[1].k PARAM */);
  TRACE_POP
}

/*
equation index: 2622
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1.e3_ia[3] = 0.11001306482721841 * front.cornerL.jointUSR.rod1.e2_ia[2] + 0.24752939586124134 * front.cornerL.jointUSR.rod1.e2_ia[1]
*/
void Roll_eqFunction_2622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2622};
  (data->simulationInfo->realParameter[151] /* front.cornerL.jointUSR.rod1.e3_ia[3] PARAM */) = (0.11001306482721841) * ((data->simulationInfo->realParameter[147] /* front.cornerL.jointUSR.rod1.e2_ia[2] PARAM */)) + (0.24752939586124134) * ((data->simulationInfo->realParameter[146] /* front.cornerL.jointUSR.rod1.e2_ia[1] PARAM */));
  TRACE_POP
}

/*
equation index: 2623
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1.R_rel_ia2.T[3,3] = front.cornerL.jointUSR.rod1.e3_ia[3]
*/
void Roll_eqFunction_2623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2623};
  (data->simulationInfo->realParameter[143] /* front.cornerL.jointUSR.rod1.R_rel_ia2.T[3,3] PARAM */) = (data->simulationInfo->realParameter[151] /* front.cornerL.jointUSR.rod1.e3_ia[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2624
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1.e3_ia[2] = 0.962614317238161 * front.cornerL.jointUSR.rod1.e2_ia[1] + (-0.11001306482721841) * front.cornerL.jointUSR.rod1.e2_ia[3]
*/
void Roll_eqFunction_2624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2624};
  (data->simulationInfo->realParameter[150] /* front.cornerL.jointUSR.rod1.e3_ia[2] PARAM */) = (0.962614317238161) * ((data->simulationInfo->realParameter[146] /* front.cornerL.jointUSR.rod1.e2_ia[1] PARAM */)) + (-0.11001306482721841) * ((data->simulationInfo->realParameter[148] /* front.cornerL.jointUSR.rod1.e2_ia[3] PARAM */));
  TRACE_POP
}

/*
equation index: 2625
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1.R_rel_ia2.T[2,3] = front.cornerL.jointUSR.rod1.e3_ia[2]
*/
void Roll_eqFunction_2625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2625};
  (data->simulationInfo->realParameter[142] /* front.cornerL.jointUSR.rod1.R_rel_ia2.T[2,3] PARAM */) = (data->simulationInfo->realParameter[150] /* front.cornerL.jointUSR.rod1.e3_ia[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2626
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1.e3_ia[1] = (-0.24752939586124134) * front.cornerL.jointUSR.rod1.e2_ia[3] + (-0.962614317238161) * front.cornerL.jointUSR.rod1.e2_ia[2]
*/
void Roll_eqFunction_2626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2626};
  (data->simulationInfo->realParameter[149] /* front.cornerL.jointUSR.rod1.e3_ia[1] PARAM */) = (-0.24752939586124134) * ((data->simulationInfo->realParameter[148] /* front.cornerL.jointUSR.rod1.e2_ia[3] PARAM */)) + (-0.962614317238161) * ((data->simulationInfo->realParameter[147] /* front.cornerL.jointUSR.rod1.e2_ia[2] PARAM */));
  TRACE_POP
}

/*
equation index: 2627
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.rod1.R_rel_ia2.T[1,3] = front.cornerL.jointUSR.rod1.e3_ia[1]
*/
void Roll_eqFunction_2627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2627};
  (data->simulationInfo->realParameter[141] /* front.cornerL.jointUSR.rod1.R_rel_ia2.T[1,3] PARAM */) = (data->simulationInfo->realParameter[149] /* front.cornerL.jointUSR.rod1.e3_ia[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2628
type: SIMPLE_ASSIGN
front.cornerL.tieRod.position_b[3].k = front.cornerL.tieRod.rRod2_ib[3]
*/
void Roll_eqFunction_2628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2628};
  (data->simulationInfo->realParameter[430] /* front.cornerL.tieRod.position_b[3].k PARAM */) = (data->simulationInfo->realParameter[436] /* front.cornerL.tieRod.rRod2_ib[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2629
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.position_b[3] = front.cornerL.tieRod.position_b[3].k
*/
void Roll_eqFunction_2629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2629};
  (data->simulationInfo->realParameter[454] /* front.cornerL.tieRod.revolute.position_b[3] PARAM */) = (data->simulationInfo->realParameter[430] /* front.cornerL.tieRod.position_b[3].k PARAM */);
  TRACE_POP
}

/*
equation index: 2630
type: SIMPLE_ASSIGN
front.cornerL.tieRod.position_b[3].y = front.cornerL.tieRod.position_b[3].k
*/
void Roll_eqFunction_2630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2630};
  (data->simulationInfo->realParameter[433] /* front.cornerL.tieRod.position_b[3].y PARAM */) = (data->simulationInfo->realParameter[430] /* front.cornerL.tieRod.position_b[3].k PARAM */);
  TRACE_POP
}

/*
equation index: 2631
type: SIMPLE_ASSIGN
front.cornerL.tieRod.position_b[2].k = front.cornerL.tieRod.rRod2_ib[2]
*/
void Roll_eqFunction_2631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2631};
  (data->simulationInfo->realParameter[429] /* front.cornerL.tieRod.position_b[2].k PARAM */) = (data->simulationInfo->realParameter[435] /* front.cornerL.tieRod.rRod2_ib[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2632
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.position_b[2] = front.cornerL.tieRod.position_b[2].k
*/
void Roll_eqFunction_2632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2632};
  (data->simulationInfo->realParameter[453] /* front.cornerL.tieRod.revolute.position_b[2] PARAM */) = (data->simulationInfo->realParameter[429] /* front.cornerL.tieRod.position_b[2].k PARAM */);
  TRACE_POP
}

/*
equation index: 2633
type: SIMPLE_ASSIGN
front.cornerL.tieRod.position_b[2].y = front.cornerL.tieRod.position_b[2].k
*/
void Roll_eqFunction_2633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2633};
  (data->simulationInfo->realParameter[432] /* front.cornerL.tieRod.position_b[2].y PARAM */) = (data->simulationInfo->realParameter[429] /* front.cornerL.tieRod.position_b[2].k PARAM */);
  TRACE_POP
}

/*
equation index: 2634
type: SIMPLE_ASSIGN
front.cornerL.tieRod.position_b[1].k = front.cornerL.tieRod.rRod2_ib[1]
*/
void Roll_eqFunction_2634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2634};
  (data->simulationInfo->realParameter[428] /* front.cornerL.tieRod.position_b[1].k PARAM */) = (data->simulationInfo->realParameter[434] /* front.cornerL.tieRod.rRod2_ib[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2635
type: SIMPLE_ASSIGN
front.cornerL.tieRod.revolute.position_b[1] = front.cornerL.tieRod.position_b[1].k
*/
void Roll_eqFunction_2635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2635};
  (data->simulationInfo->realParameter[452] /* front.cornerL.tieRod.revolute.position_b[1] PARAM */) = (data->simulationInfo->realParameter[428] /* front.cornerL.tieRod.position_b[1].k PARAM */);
  TRACE_POP
}

/*
equation index: 2636
type: SIMPLE_ASSIGN
front.cornerL.tieRod.position_b[1].y = front.cornerL.tieRod.position_b[1].k
*/
void Roll_eqFunction_2636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2636};
  (data->simulationInfo->realParameter[431] /* front.cornerL.tieRod.position_b[1].y PARAM */) = (data->simulationInfo->realParameter[428] /* front.cornerL.tieRod.position_b[1].k PARAM */);
  TRACE_POP
}

/*
equation index: 2637
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.e3_ia[3] = 0.11001306482721841 * front.cornerR.jointUSR.rod1.e2_ia[2] + (-0.24752939586124134) * front.cornerR.jointUSR.rod1.e2_ia[1]
*/
void Roll_eqFunction_2637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2637};
  (data->simulationInfo->realParameter[857] /* front.cornerR.jointUSR.rod1.e3_ia[3] PARAM */) = (0.11001306482721841) * ((data->simulationInfo->realParameter[853] /* front.cornerR.jointUSR.rod1.e2_ia[2] PARAM */)) + (-0.24752939586124134) * ((data->simulationInfo->realParameter[852] /* front.cornerR.jointUSR.rod1.e2_ia[1] PARAM */));
  TRACE_POP
}

/*
equation index: 2638
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.R_rel_ia2.T[3,3] = front.cornerR.jointUSR.rod1.e3_ia[3]
*/
void Roll_eqFunction_2638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2638};
  (data->simulationInfo->realParameter[849] /* front.cornerR.jointUSR.rod1.R_rel_ia2.T[3,3] PARAM */) = (data->simulationInfo->realParameter[857] /* front.cornerR.jointUSR.rod1.e3_ia[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2639
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.e3_ia[2] = 0.962614317238161 * front.cornerR.jointUSR.rod1.e2_ia[1] + (-0.11001306482721841) * front.cornerR.jointUSR.rod1.e2_ia[3]
*/
void Roll_eqFunction_2639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2639};
  (data->simulationInfo->realParameter[856] /* front.cornerR.jointUSR.rod1.e3_ia[2] PARAM */) = (0.962614317238161) * ((data->simulationInfo->realParameter[852] /* front.cornerR.jointUSR.rod1.e2_ia[1] PARAM */)) + (-0.11001306482721841) * ((data->simulationInfo->realParameter[854] /* front.cornerR.jointUSR.rod1.e2_ia[3] PARAM */));
  TRACE_POP
}

/*
equation index: 2640
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.R_rel_ia2.T[2,3] = front.cornerR.jointUSR.rod1.e3_ia[2]
*/
void Roll_eqFunction_2640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2640};
  (data->simulationInfo->realParameter[848] /* front.cornerR.jointUSR.rod1.R_rel_ia2.T[2,3] PARAM */) = (data->simulationInfo->realParameter[856] /* front.cornerR.jointUSR.rod1.e3_ia[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2641
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.e3_ia[1] = 0.24752939586124134 * front.cornerR.jointUSR.rod1.e2_ia[3] + (-0.962614317238161) * front.cornerR.jointUSR.rod1.e2_ia[2]
*/
void Roll_eqFunction_2641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2641};
  (data->simulationInfo->realParameter[855] /* front.cornerR.jointUSR.rod1.e3_ia[1] PARAM */) = (0.24752939586124134) * ((data->simulationInfo->realParameter[854] /* front.cornerR.jointUSR.rod1.e2_ia[3] PARAM */)) + (-0.962614317238161) * ((data->simulationInfo->realParameter[853] /* front.cornerR.jointUSR.rod1.e2_ia[2] PARAM */));
  TRACE_POP
}

/*
equation index: 2642
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.rod1.R_rel_ia2.T[1,3] = front.cornerR.jointUSR.rod1.e3_ia[1]
*/
void Roll_eqFunction_2642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2642};
  (data->simulationInfo->realParameter[847] /* front.cornerR.jointUSR.rod1.R_rel_ia2.T[1,3] PARAM */) = (data->simulationInfo->realParameter[855] /* front.cornerR.jointUSR.rod1.e3_ia[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2643
type: SIMPLE_ASSIGN
front.cornerR.tieRod.position_b[3].k = front.cornerR.tieRod.rRod2_ib[3]
*/
void Roll_eqFunction_2643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2643};
  (data->simulationInfo->realParameter[1136] /* front.cornerR.tieRod.position_b[3].k PARAM */) = (data->simulationInfo->realParameter[1142] /* front.cornerR.tieRod.rRod2_ib[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2644
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.position_b[3] = front.cornerR.tieRod.position_b[3].k
*/
void Roll_eqFunction_2644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2644};
  (data->simulationInfo->realParameter[1160] /* front.cornerR.tieRod.revolute.position_b[3] PARAM */) = (data->simulationInfo->realParameter[1136] /* front.cornerR.tieRod.position_b[3].k PARAM */);
  TRACE_POP
}

/*
equation index: 2645
type: SIMPLE_ASSIGN
front.cornerR.tieRod.position_b[3].y = front.cornerR.tieRod.position_b[3].k
*/
void Roll_eqFunction_2645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2645};
  (data->simulationInfo->realParameter[1139] /* front.cornerR.tieRod.position_b[3].y PARAM */) = (data->simulationInfo->realParameter[1136] /* front.cornerR.tieRod.position_b[3].k PARAM */);
  TRACE_POP
}

/*
equation index: 2646
type: SIMPLE_ASSIGN
front.cornerR.tieRod.position_b[2].k = front.cornerR.tieRod.rRod2_ib[2]
*/
void Roll_eqFunction_2646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2646};
  (data->simulationInfo->realParameter[1135] /* front.cornerR.tieRod.position_b[2].k PARAM */) = (data->simulationInfo->realParameter[1141] /* front.cornerR.tieRod.rRod2_ib[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2647
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.position_b[2] = front.cornerR.tieRod.position_b[2].k
*/
void Roll_eqFunction_2647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2647};
  (data->simulationInfo->realParameter[1159] /* front.cornerR.tieRod.revolute.position_b[2] PARAM */) = (data->simulationInfo->realParameter[1135] /* front.cornerR.tieRod.position_b[2].k PARAM */);
  TRACE_POP
}

/*
equation index: 2648
type: SIMPLE_ASSIGN
front.cornerR.tieRod.position_b[2].y = front.cornerR.tieRod.position_b[2].k
*/
void Roll_eqFunction_2648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2648};
  (data->simulationInfo->realParameter[1138] /* front.cornerR.tieRod.position_b[2].y PARAM */) = (data->simulationInfo->realParameter[1135] /* front.cornerR.tieRod.position_b[2].k PARAM */);
  TRACE_POP
}

/*
equation index: 2649
type: SIMPLE_ASSIGN
front.cornerR.tieRod.position_b[1].k = front.cornerR.tieRod.rRod2_ib[1]
*/
void Roll_eqFunction_2649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2649};
  (data->simulationInfo->realParameter[1134] /* front.cornerR.tieRod.position_b[1].k PARAM */) = (data->simulationInfo->realParameter[1140] /* front.cornerR.tieRod.rRod2_ib[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2650
type: SIMPLE_ASSIGN
front.cornerR.tieRod.revolute.position_b[1] = front.cornerR.tieRod.position_b[1].k
*/
void Roll_eqFunction_2650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2650};
  (data->simulationInfo->realParameter[1158] /* front.cornerR.tieRod.revolute.position_b[1] PARAM */) = (data->simulationInfo->realParameter[1134] /* front.cornerR.tieRod.position_b[1].k PARAM */);
  TRACE_POP
}

/*
equation index: 2651
type: SIMPLE_ASSIGN
front.cornerR.tieRod.position_b[1].y = front.cornerR.tieRod.position_b[1].k
*/
void Roll_eqFunction_2651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2651};
  (data->simulationInfo->realParameter[1137] /* front.cornerR.tieRod.position_b[1].y PARAM */) = (data->simulationInfo->realParameter[1134] /* front.cornerR.tieRod.position_b[1].k PARAM */);
  TRACE_POP
}

/*
equation index: 2652
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod2.r[3] = rear.cornerL.tieRod.rRod2_ib[3]
*/
void Roll_eqFunction_2652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2652};
  (data->simulationInfo->realParameter[2153] /* rear.cornerL.tieRod.rod2.r[3] PARAM */) = (data->simulationInfo->realParameter[2102] /* rear.cornerL.tieRod.rRod2_ib[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2653
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod2.lengthDirection[3] = rear.cornerL.tieRod.rod2.r[3]
*/
void Roll_eqFunction_2653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2653};
  (data->simulationInfo->realParameter[2150] /* rear.cornerL.tieRod.rod2.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[2153] /* rear.cornerL.tieRod.rod2.r[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2654
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod2.shape.lengthDirection[3] = rear.cornerL.tieRod.rod2.lengthDirection[3]
*/
void Roll_eqFunction_2654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2654};
  (data->simulationInfo->realParameter[2162] /* rear.cornerL.tieRod.rod2.shape.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[2150] /* rear.cornerL.tieRod.rod2.lengthDirection[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2655
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod2.r[2] = rear.cornerL.tieRod.rRod2_ib[2]
*/
void Roll_eqFunction_2655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2655};
  (data->simulationInfo->realParameter[2152] /* rear.cornerL.tieRod.rod2.r[2] PARAM */) = (data->simulationInfo->realParameter[2101] /* rear.cornerL.tieRod.rRod2_ib[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2656
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod2.lengthDirection[2] = rear.cornerL.tieRod.rod2.r[2]
*/
void Roll_eqFunction_2656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2656};
  (data->simulationInfo->realParameter[2149] /* rear.cornerL.tieRod.rod2.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[2152] /* rear.cornerL.tieRod.rod2.r[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2657
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod2.shape.lengthDirection[2] = rear.cornerL.tieRod.rod2.lengthDirection[2]
*/
void Roll_eqFunction_2657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2657};
  (data->simulationInfo->realParameter[2161] /* rear.cornerL.tieRod.rod2.shape.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[2149] /* rear.cornerL.tieRod.rod2.lengthDirection[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2658
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod2.r[1] = rear.cornerL.tieRod.rRod2_ib[1]
*/
void Roll_eqFunction_2658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2658};
  (data->simulationInfo->realParameter[2151] /* rear.cornerL.tieRod.rod2.r[1] PARAM */) = (data->simulationInfo->realParameter[2100] /* rear.cornerL.tieRod.rRod2_ib[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2659
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod2.lengthDirection[1] = rear.cornerL.tieRod.rod2.r[1]
*/
void Roll_eqFunction_2659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2659};
  (data->simulationInfo->realParameter[2148] /* rear.cornerL.tieRod.rod2.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[2151] /* rear.cornerL.tieRod.rod2.r[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2660
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod2.shape.lengthDirection[1] = rear.cornerL.tieRod.rod2.lengthDirection[1]
*/
void Roll_eqFunction_2660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2660};
  (data->simulationInfo->realParameter[2160] /* rear.cornerL.tieRod.rod2.shape.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[2148] /* rear.cornerL.tieRod.rod2.lengthDirection[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2661
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod2.length = sqrt(rear.cornerL.tieRod.rod2.r[1] ^ 2.0 + rear.cornerL.tieRod.rod2.r[2] ^ 2.0 + rear.cornerL.tieRod.rod2.r[3] ^ 2.0)
*/
void Roll_eqFunction_2661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2661};
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  tmp40 = (data->simulationInfo->realParameter[2151] /* rear.cornerL.tieRod.rod2.r[1] PARAM */);
  tmp41 = (data->simulationInfo->realParameter[2152] /* rear.cornerL.tieRod.rod2.r[2] PARAM */);
  tmp42 = (data->simulationInfo->realParameter[2153] /* rear.cornerL.tieRod.rod2.r[3] PARAM */);
  tmp43 = (tmp40 * tmp40) + (tmp41 * tmp41) + (tmp42 * tmp42);
  if(!(tmp43 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rear.cornerL.tieRod.rod2.r[1] ^ 2.0 + rear.cornerL.tieRod.rod2.r[2] ^ 2.0 + rear.cornerL.tieRod.rod2.r[3] ^ 2.0) was %g should be >= 0", tmp43);
    }
  }
  (data->simulationInfo->realParameter[2147] /* rear.cornerL.tieRod.rod2.length PARAM */) = sqrt(tmp43);
  TRACE_POP
}

/*
equation index: 2662
type: SIMPLE_ASSIGN
rear.cornerL.tieRod.rod2.shape.length = rear.cornerL.tieRod.rod2.length
*/
void Roll_eqFunction_2662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2662};
  (data->simulationInfo->realParameter[2159] /* rear.cornerL.tieRod.rod2.shape.length PARAM */) = (data->simulationInfo->realParameter[2147] /* rear.cornerL.tieRod.rod2.length PARAM */);
  TRACE_POP
}

/*
equation index: 2663
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod2.r[3] = rear.cornerR.tieRod.rRod2_ib[3]
*/
void Roll_eqFunction_2663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2663};
  (data->simulationInfo->realParameter[2862] /* rear.cornerR.tieRod.rod2.r[3] PARAM */) = (data->simulationInfo->realParameter[2811] /* rear.cornerR.tieRod.rRod2_ib[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2664
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod2.lengthDirection[3] = rear.cornerR.tieRod.rod2.r[3]
*/
void Roll_eqFunction_2664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2664};
  (data->simulationInfo->realParameter[2859] /* rear.cornerR.tieRod.rod2.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[2862] /* rear.cornerR.tieRod.rod2.r[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2665
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod2.shape.lengthDirection[3] = rear.cornerR.tieRod.rod2.lengthDirection[3]
*/
void Roll_eqFunction_2665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2665};
  (data->simulationInfo->realParameter[2871] /* rear.cornerR.tieRod.rod2.shape.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[2859] /* rear.cornerR.tieRod.rod2.lengthDirection[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2666
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod2.r[2] = rear.cornerR.tieRod.rRod2_ib[2]
*/
void Roll_eqFunction_2666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2666};
  (data->simulationInfo->realParameter[2861] /* rear.cornerR.tieRod.rod2.r[2] PARAM */) = (data->simulationInfo->realParameter[2810] /* rear.cornerR.tieRod.rRod2_ib[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2667
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod2.lengthDirection[2] = rear.cornerR.tieRod.rod2.r[2]
*/
void Roll_eqFunction_2667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2667};
  (data->simulationInfo->realParameter[2858] /* rear.cornerR.tieRod.rod2.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[2861] /* rear.cornerR.tieRod.rod2.r[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2668
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod2.shape.lengthDirection[2] = rear.cornerR.tieRod.rod2.lengthDirection[2]
*/
void Roll_eqFunction_2668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2668};
  (data->simulationInfo->realParameter[2870] /* rear.cornerR.tieRod.rod2.shape.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[2858] /* rear.cornerR.tieRod.rod2.lengthDirection[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2669
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod2.r[1] = rear.cornerR.tieRod.rRod2_ib[1]
*/
void Roll_eqFunction_2669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2669};
  (data->simulationInfo->realParameter[2860] /* rear.cornerR.tieRod.rod2.r[1] PARAM */) = (data->simulationInfo->realParameter[2809] /* rear.cornerR.tieRod.rRod2_ib[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2670
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod2.lengthDirection[1] = rear.cornerR.tieRod.rod2.r[1]
*/
void Roll_eqFunction_2670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2670};
  (data->simulationInfo->realParameter[2857] /* rear.cornerR.tieRod.rod2.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[2860] /* rear.cornerR.tieRod.rod2.r[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2671
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod2.shape.lengthDirection[1] = rear.cornerR.tieRod.rod2.lengthDirection[1]
*/
void Roll_eqFunction_2671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2671};
  (data->simulationInfo->realParameter[2869] /* rear.cornerR.tieRod.rod2.shape.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[2857] /* rear.cornerR.tieRod.rod2.lengthDirection[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2672
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod2.length = sqrt(rear.cornerR.tieRod.rod2.r[1] ^ 2.0 + rear.cornerR.tieRod.rod2.r[2] ^ 2.0 + rear.cornerR.tieRod.rod2.r[3] ^ 2.0)
*/
void Roll_eqFunction_2672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2672};
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  tmp44 = (data->simulationInfo->realParameter[2860] /* rear.cornerR.tieRod.rod2.r[1] PARAM */);
  tmp45 = (data->simulationInfo->realParameter[2861] /* rear.cornerR.tieRod.rod2.r[2] PARAM */);
  tmp46 = (data->simulationInfo->realParameter[2862] /* rear.cornerR.tieRod.rod2.r[3] PARAM */);
  tmp47 = (tmp44 * tmp44) + (tmp45 * tmp45) + (tmp46 * tmp46);
  if(!(tmp47 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(rear.cornerR.tieRod.rod2.r[1] ^ 2.0 + rear.cornerR.tieRod.rod2.r[2] ^ 2.0 + rear.cornerR.tieRod.rod2.r[3] ^ 2.0) was %g should be >= 0", tmp47);
    }
  }
  (data->simulationInfo->realParameter[2856] /* rear.cornerR.tieRod.rod2.length PARAM */) = sqrt(tmp47);
  TRACE_POP
}

/*
equation index: 2673
type: SIMPLE_ASSIGN
rear.cornerR.tieRod.rod2.shape.length = rear.cornerR.tieRod.rod2.length
*/
void Roll_eqFunction_2673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2673};
  (data->simulationInfo->realParameter[2868] /* rear.cornerR.tieRod.rod2.shape.length PARAM */) = (data->simulationInfo->realParameter[2856] /* rear.cornerR.tieRod.rod2.length PARAM */);
  TRACE_POP
}

/*
equation index: 2674
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod2.r[3] = front.cornerL.tieRod.rRod2_ib[3]
*/
void Roll_eqFunction_2674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2674};
  (data->simulationInfo->realParameter[487] /* front.cornerL.tieRod.rod2.r[3] PARAM */) = (data->simulationInfo->realParameter[436] /* front.cornerL.tieRod.rRod2_ib[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2675
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod2.lengthDirection[3] = front.cornerL.tieRod.rod2.r[3]
*/
void Roll_eqFunction_2675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2675};
  (data->simulationInfo->realParameter[484] /* front.cornerL.tieRod.rod2.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[487] /* front.cornerL.tieRod.rod2.r[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2676
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod2.shape.lengthDirection[3] = front.cornerL.tieRod.rod2.lengthDirection[3]
*/
void Roll_eqFunction_2676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2676};
  (data->simulationInfo->realParameter[496] /* front.cornerL.tieRod.rod2.shape.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[484] /* front.cornerL.tieRod.rod2.lengthDirection[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2677
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod2.r[2] = front.cornerL.tieRod.rRod2_ib[2]
*/
void Roll_eqFunction_2677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2677};
  (data->simulationInfo->realParameter[486] /* front.cornerL.tieRod.rod2.r[2] PARAM */) = (data->simulationInfo->realParameter[435] /* front.cornerL.tieRod.rRod2_ib[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2678
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod2.lengthDirection[2] = front.cornerL.tieRod.rod2.r[2]
*/
void Roll_eqFunction_2678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2678};
  (data->simulationInfo->realParameter[483] /* front.cornerL.tieRod.rod2.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[486] /* front.cornerL.tieRod.rod2.r[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2679
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod2.shape.lengthDirection[2] = front.cornerL.tieRod.rod2.lengthDirection[2]
*/
void Roll_eqFunction_2679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2679};
  (data->simulationInfo->realParameter[495] /* front.cornerL.tieRod.rod2.shape.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[483] /* front.cornerL.tieRod.rod2.lengthDirection[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2680
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod2.r[1] = front.cornerL.tieRod.rRod2_ib[1]
*/
void Roll_eqFunction_2680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2680};
  (data->simulationInfo->realParameter[485] /* front.cornerL.tieRod.rod2.r[1] PARAM */) = (data->simulationInfo->realParameter[434] /* front.cornerL.tieRod.rRod2_ib[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2681
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod2.lengthDirection[1] = front.cornerL.tieRod.rod2.r[1]
*/
void Roll_eqFunction_2681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2681};
  (data->simulationInfo->realParameter[482] /* front.cornerL.tieRod.rod2.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[485] /* front.cornerL.tieRod.rod2.r[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2682
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod2.shape.lengthDirection[1] = front.cornerL.tieRod.rod2.lengthDirection[1]
*/
void Roll_eqFunction_2682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2682};
  (data->simulationInfo->realParameter[494] /* front.cornerL.tieRod.rod2.shape.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[482] /* front.cornerL.tieRod.rod2.lengthDirection[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2683
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod2.length = sqrt(front.cornerL.tieRod.rod2.r[1] ^ 2.0 + front.cornerL.tieRod.rod2.r[2] ^ 2.0 + front.cornerL.tieRod.rod2.r[3] ^ 2.0)
*/
void Roll_eqFunction_2683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2683};
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  tmp48 = (data->simulationInfo->realParameter[485] /* front.cornerL.tieRod.rod2.r[1] PARAM */);
  tmp49 = (data->simulationInfo->realParameter[486] /* front.cornerL.tieRod.rod2.r[2] PARAM */);
  tmp50 = (data->simulationInfo->realParameter[487] /* front.cornerL.tieRod.rod2.r[3] PARAM */);
  tmp51 = (tmp48 * tmp48) + (tmp49 * tmp49) + (tmp50 * tmp50);
  if(!(tmp51 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(front.cornerL.tieRod.rod2.r[1] ^ 2.0 + front.cornerL.tieRod.rod2.r[2] ^ 2.0 + front.cornerL.tieRod.rod2.r[3] ^ 2.0) was %g should be >= 0", tmp51);
    }
  }
  (data->simulationInfo->realParameter[481] /* front.cornerL.tieRod.rod2.length PARAM */) = sqrt(tmp51);
  TRACE_POP
}

/*
equation index: 2684
type: SIMPLE_ASSIGN
front.cornerL.tieRod.rod2.shape.length = front.cornerL.tieRod.rod2.length
*/
void Roll_eqFunction_2684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2684};
  (data->simulationInfo->realParameter[493] /* front.cornerL.tieRod.rod2.shape.length PARAM */) = (data->simulationInfo->realParameter[481] /* front.cornerL.tieRod.rod2.length PARAM */);
  TRACE_POP
}

/*
equation index: 2685
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod2.r[3] = front.cornerR.tieRod.rRod2_ib[3]
*/
void Roll_eqFunction_2685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2685};
  (data->simulationInfo->realParameter[1193] /* front.cornerR.tieRod.rod2.r[3] PARAM */) = (data->simulationInfo->realParameter[1142] /* front.cornerR.tieRod.rRod2_ib[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2686
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod2.lengthDirection[3] = front.cornerR.tieRod.rod2.r[3]
*/
void Roll_eqFunction_2686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2686};
  (data->simulationInfo->realParameter[1190] /* front.cornerR.tieRod.rod2.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[1193] /* front.cornerR.tieRod.rod2.r[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2687
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod2.shape.lengthDirection[3] = front.cornerR.tieRod.rod2.lengthDirection[3]
*/
void Roll_eqFunction_2687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2687};
  (data->simulationInfo->realParameter[1202] /* front.cornerR.tieRod.rod2.shape.lengthDirection[3] PARAM */) = (data->simulationInfo->realParameter[1190] /* front.cornerR.tieRod.rod2.lengthDirection[3] PARAM */);
  TRACE_POP
}

/*
equation index: 2688
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod2.r[2] = front.cornerR.tieRod.rRod2_ib[2]
*/
void Roll_eqFunction_2688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2688};
  (data->simulationInfo->realParameter[1192] /* front.cornerR.tieRod.rod2.r[2] PARAM */) = (data->simulationInfo->realParameter[1141] /* front.cornerR.tieRod.rRod2_ib[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2689
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod2.lengthDirection[2] = front.cornerR.tieRod.rod2.r[2]
*/
void Roll_eqFunction_2689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2689};
  (data->simulationInfo->realParameter[1189] /* front.cornerR.tieRod.rod2.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[1192] /* front.cornerR.tieRod.rod2.r[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2690
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod2.shape.lengthDirection[2] = front.cornerR.tieRod.rod2.lengthDirection[2]
*/
void Roll_eqFunction_2690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2690};
  (data->simulationInfo->realParameter[1201] /* front.cornerR.tieRod.rod2.shape.lengthDirection[2] PARAM */) = (data->simulationInfo->realParameter[1189] /* front.cornerR.tieRod.rod2.lengthDirection[2] PARAM */);
  TRACE_POP
}

/*
equation index: 2691
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod2.r[1] = front.cornerR.tieRod.rRod2_ib[1]
*/
void Roll_eqFunction_2691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2691};
  (data->simulationInfo->realParameter[1191] /* front.cornerR.tieRod.rod2.r[1] PARAM */) = (data->simulationInfo->realParameter[1140] /* front.cornerR.tieRod.rRod2_ib[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2692
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod2.lengthDirection[1] = front.cornerR.tieRod.rod2.r[1]
*/
void Roll_eqFunction_2692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2692};
  (data->simulationInfo->realParameter[1188] /* front.cornerR.tieRod.rod2.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[1191] /* front.cornerR.tieRod.rod2.r[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2693
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod2.shape.lengthDirection[1] = front.cornerR.tieRod.rod2.lengthDirection[1]
*/
void Roll_eqFunction_2693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2693};
  (data->simulationInfo->realParameter[1200] /* front.cornerR.tieRod.rod2.shape.lengthDirection[1] PARAM */) = (data->simulationInfo->realParameter[1188] /* front.cornerR.tieRod.rod2.lengthDirection[1] PARAM */);
  TRACE_POP
}

/*
equation index: 2694
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod2.length = sqrt(front.cornerR.tieRod.rod2.r[1] ^ 2.0 + front.cornerR.tieRod.rod2.r[2] ^ 2.0 + front.cornerR.tieRod.rod2.r[3] ^ 2.0)
*/
void Roll_eqFunction_2694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2694};
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  tmp52 = (data->simulationInfo->realParameter[1191] /* front.cornerR.tieRod.rod2.r[1] PARAM */);
  tmp53 = (data->simulationInfo->realParameter[1192] /* front.cornerR.tieRod.rod2.r[2] PARAM */);
  tmp54 = (data->simulationInfo->realParameter[1193] /* front.cornerR.tieRod.rod2.r[3] PARAM */);
  tmp55 = (tmp52 * tmp52) + (tmp53 * tmp53) + (tmp54 * tmp54);
  if(!(tmp55 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(front.cornerR.tieRod.rod2.r[1] ^ 2.0 + front.cornerR.tieRod.rod2.r[2] ^ 2.0 + front.cornerR.tieRod.rod2.r[3] ^ 2.0) was %g should be >= 0", tmp55);
    }
  }
  (data->simulationInfo->realParameter[1187] /* front.cornerR.tieRod.rod2.length PARAM */) = sqrt(tmp55);
  TRACE_POP
}

/*
equation index: 2695
type: SIMPLE_ASSIGN
front.cornerR.tieRod.rod2.shape.length = front.cornerR.tieRod.rod2.length
*/
void Roll_eqFunction_2695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2695};
  (data->simulationInfo->realParameter[1199] /* front.cornerR.tieRod.rod2.shape.length PARAM */) = (data->simulationInfo->realParameter[1187] /* front.cornerR.tieRod.rod2.length PARAM */);
  TRACE_POP
}
extern void Roll_eqFunction_6528(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6529(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6530(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6531(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6532(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6533(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6534(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6535(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6536(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6537(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6538(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6539(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6540(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6541(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6542(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6543(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6544(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6545(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6546(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6547(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6548(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6549(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6550(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6551(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6552(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6553(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6554(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6555(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6556(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6557(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6558(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6559(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6560(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6561(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6562(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6563(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6564(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6565(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6566(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6567(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6568(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6569(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6570(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6571(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6572(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6573(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6574(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6575(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6576(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6578(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6579(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6580(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6501(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6500(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6499(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6498(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6497(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6496(DATA *data, threadData_t *threadData);


/*
equation index: 2754
type: SIMPLE_ASSIGN
$DER.$DER.rear.cornerL.jointUSR.frame_im.r_0[1] = $DER.$DER.rear.cornerL.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2754};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* der(der(rear.cornerL.jointUSR.frame_im.r_0[1])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* der(der(rear.cornerL.springArm.frame_a.r_0[1])) DUMMY_DER */);
  TRACE_POP
}
extern void Roll_eqFunction_6495(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6494(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6493(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6492(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6491(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6490(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6584(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6585(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6586(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6487(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6486(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6485(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6484(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6483(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6482(DATA *data, threadData_t *threadData);


/*
equation index: 2770
type: SIMPLE_ASSIGN
$DER.$DER.rear.cornerR.jointUSR.frame_im.r_0[1] = $DER.$DER.rear.cornerR.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2770};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* der(der(rear.cornerR.jointUSR.frame_im.r_0[1])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* der(der(rear.cornerR.springArm.frame_a.r_0[1])) DUMMY_DER */);
  TRACE_POP
}
extern void Roll_eqFunction_6481(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6480(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6479(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6478(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6477(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6476(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6589(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6590(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6591(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6592(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6593(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6594(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6596(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6597(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6598(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6473(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6472(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6471(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6470(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6469(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6468(DATA *data, threadData_t *threadData);


/*
equation index: 2792
type: SIMPLE_ASSIGN
$DER.$DER.front.cornerL.jointUSR.frame_im.r_0[1] = $DER.$DER.front.cornerL.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2792};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* der(der(front.cornerL.jointUSR.frame_im.r_0[1])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* der(der(front.cornerL.springArm.frame_a.r_0[1])) DUMMY_DER */);
  TRACE_POP
}
extern void Roll_eqFunction_6467(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6466(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6465(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6464(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6463(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6462(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6602(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6603(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6604(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6459(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6458(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6457(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6456(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6455(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6454(DATA *data, threadData_t *threadData);


/*
equation index: 2808
type: SIMPLE_ASSIGN
$DER.$DER.front.cornerR.jointUSR.frame_im.r_0[1] = $DER.$DER.front.cornerR.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* der(der(front.cornerR.jointUSR.frame_im.r_0[1])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* der(der(front.cornerR.springArm.frame_a.r_0[1])) DUMMY_DER */);
  TRACE_POP
}
extern void Roll_eqFunction_6453(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6452(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6451(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6450(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6449(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6448(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6444(DATA *data, threadData_t *threadData);


/*
equation index: 2816
type: SIMPLE_ASSIGN
$DER.$DER.front.steering.endR.frame_a.r_0[3] = $DER.$DER.front.steering.rack.frame_a.r_0[3]
*/
void Roll_eqFunction_2816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2816};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* der(der(front.steering.endR.frame_a.r_0[3])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* der(der(front.steering.rack.frame_a.r_0[3])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2817
type: SIMPLE_ASSIGN
$DER.$DER.points[1,7,3] = $DER.$DER.front.steering.endR.frame_a.r_0[3]
*/
void Roll_eqFunction_2817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2817};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* der(der(points[1,7,3])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* der(der(front.steering.endR.frame_a.r_0[3])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2818
type: SIMPLE_ASSIGN
$DER.$DER.points[2,7,3] = $DER.$DER.front.steering.endR.frame_a.r_0[3]
*/
void Roll_eqFunction_2818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2818};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* der(der(points[2,7,3])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* der(der(front.steering.endR.frame_a.r_0[3])) DUMMY_DER */);
  TRACE_POP
}
extern void Roll_eqFunction_6443(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6442(DATA *data, threadData_t *threadData);


/*
equation index: 2821
type: SIMPLE_ASSIGN
$DER.$DER.front.steering.endR.frame_a.r_0[1] = $DER.$DER.front.steering.rack.frame_a.r_0[1]
*/
void Roll_eqFunction_2821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2821};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* der(der(front.steering.endR.frame_a.r_0[1])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* der(der(front.steering.rack.frame_a.r_0[1])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2822
type: SIMPLE_ASSIGN
$DER.$DER.points[1,7,1] = $DER.$DER.front.steering.endR.frame_a.r_0[1]
*/
void Roll_eqFunction_2822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2822};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* der(der(points[1,7,1])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* der(der(front.steering.endR.frame_a.r_0[1])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2823
type: SIMPLE_ASSIGN
$DER.$DER.points[2,7,1] = $DER.$DER.front.steering.endR.frame_a.r_0[1]
*/
void Roll_eqFunction_2823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2823};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* der(der(points[2,7,1])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* der(der(front.steering.endR.frame_a.r_0[1])) DUMMY_DER */);
  TRACE_POP
}
extern void Roll_eqFunction_6441(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6440(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6439(DATA *data, threadData_t *threadData);


/*
equation index: 2827
type: SIMPLE_ASSIGN
$DER.$DER.front.cornerR.tieRod.revolute.e_r_b = 0.11001306482721843 * $DER.$DER.front.cornerR.tieRod.revolute.r_b[1] + 0.24752939586124137 * $DER.$DER.front.cornerR.tieRod.revolute.r_b[2] + 0.9626143172381612 * $DER.$DER.front.cornerR.tieRod.revolute.r_b[3]
*/
void Roll_eqFunction_2827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2827};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* der(der(front.cornerR.tieRod.revolute.e_r_b)) DUMMY_DER */) = (0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* der(der(front.cornerR.tieRod.revolute.r_b[1])) DUMMY_DER */)) + (0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* der(der(front.cornerR.tieRod.revolute.r_b[2])) DUMMY_DER */)) + (0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* der(der(front.cornerR.tieRod.revolute.r_b[3])) DUMMY_DER */));
  TRACE_POP
}
extern void Roll_eqFunction_6438(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6437(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6436(DATA *data, threadData_t *threadData);


/*
equation index: 2831
type: SIMPLE_ASSIGN
$DER.$DER.front.cornerL.tieRod.revolute.e_r_b = 0.11001306482721843 * $DER.$DER.front.cornerL.tieRod.revolute.r_b[1] + (-0.24752939586124137) * $DER.$DER.front.cornerL.tieRod.revolute.r_b[2] + 0.9626143172381612 * $DER.$DER.front.cornerL.tieRod.revolute.r_b[3]
*/
void Roll_eqFunction_2831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* der(der(front.cornerL.tieRod.revolute.e_r_b)) DUMMY_DER */) = (0.11001306482721843) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* der(der(front.cornerL.tieRod.revolute.r_b[1])) DUMMY_DER */)) + (-0.24752939586124137) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* der(der(front.cornerL.tieRod.revolute.r_b[2])) DUMMY_DER */)) + (0.9626143172381612) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* der(der(front.cornerL.tieRod.revolute.r_b[3])) DUMMY_DER */));
  TRACE_POP
}
extern void Roll_eqFunction_6435(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6434(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6433(DATA *data, threadData_t *threadData);


/*
equation index: 2835
type: SIMPLE_ASSIGN
$DER.$DER.rear.cornerR.tieRod.revolute.e_r_b = 0.222824801502141 * $DER.$DER.rear.cornerR.tieRod.revolute.r_b[2] + 0.9748585065718673 * $DER.$DER.rear.cornerR.tieRod.revolute.r_b[3]
*/
void Roll_eqFunction_2835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2835};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* der(der(rear.cornerR.tieRod.revolute.e_r_b)) DUMMY_DER */) = (0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* der(der(rear.cornerR.tieRod.revolute.r_b[2])) DUMMY_DER */)) + (0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* der(der(rear.cornerR.tieRod.revolute.r_b[3])) DUMMY_DER */));
  TRACE_POP
}
extern void Roll_eqFunction_6432(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6431(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6430(DATA *data, threadData_t *threadData);


/*
equation index: 2839
type: SIMPLE_ASSIGN
$DER.$DER.rear.cornerL.tieRod.revolute.e_r_b = (-0.222824801502141) * $DER.$DER.rear.cornerL.tieRod.revolute.r_b[2] + 0.9748585065718673 * $DER.$DER.rear.cornerL.tieRod.revolute.r_b[3]
*/
void Roll_eqFunction_2839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2839};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* der(der(rear.cornerL.tieRod.revolute.e_r_b)) DUMMY_DER */) = (-0.222824801502141) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* der(der(rear.cornerL.tieRod.revolute.r_b[2])) DUMMY_DER */)) + (0.9748585065718673) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* der(der(rear.cornerL.tieRod.revolute.r_b[3])) DUMMY_DER */));
  TRACE_POP
}
extern void Roll_eqFunction_6611(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6612(DATA *data, threadData_t *threadData);


/*
equation index: 2842
type: SIMPLE_ASSIGN
wave = envelope * sin(6.283185307179586 * frequency * time)
*/
void Roll_eqFunction_2842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5502]] /* wave DUMMY_STATE */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* envelope DUMMY_STATE */)) * (sin(((6.283185307179586) * ((data->simulationInfo->realParameter[0] /* frequency PARAM */))) * (data->localData[0]->timeValue)));
  TRACE_POP
}
extern void Roll_eqFunction_7823(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7996(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_7997(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8004(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8283(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8284(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_8291(DATA *data, threadData_t *threadData);


/*
equation index: 2850
type: SIMPLE_ASSIGN
$DER.wave = 6.283185307179586 * envelope * cos(6.283185307179586 * frequency * time) * frequency + $DER.envelope * sin(6.283185307179586 * frequency * time)
*/
void Roll_eqFunction_2850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2850};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[838]] /* der(wave) DUMMY_DER */) = (6.283185307179586) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* envelope DUMMY_STATE */)) * ((cos(((6.283185307179586) * ((data->simulationInfo->realParameter[0] /* frequency PARAM */))) * (data->localData[0]->timeValue))) * ((data->simulationInfo->realParameter[0] /* frequency PARAM */)))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* der(envelope) DUMMY_DER */)) * (sin(((6.283185307179586) * ((data->simulationInfo->realParameter[0] /* frequency PARAM */))) * (data->localData[0]->timeValue)));
  TRACE_POP
}
extern void Roll_eqFunction_8583(DATA *data, threadData_t *threadData);


/*
equation index: 2852
type: SIMPLE_ASSIGN
$DER.$DER.wave = 6.283185307179586 * (6.283185307179586 * envelope * (-sin(6.283185307179586 * frequency * time)) * frequency ^ 2.0 + $DER.envelope * cos(6.283185307179586 * frequency * time) * frequency) + 6.283185307179586 * $DER.envelope * cos(6.283185307179586 * frequency * time) * frequency + $DER.$DER.envelope * sin(6.283185307179586 * frequency * time)
*/
void Roll_eqFunction_2852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2852};
  modelica_real tmp56;
  tmp56 = (data->simulationInfo->realParameter[0] /* frequency PARAM */);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* der(der(wave)) DUMMY_DER */) = (6.283185307179586) * ((6.283185307179586) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[891]] /* envelope DUMMY_STATE */)) * (((-sin(((6.283185307179586) * ((data->simulationInfo->realParameter[0] /* frequency PARAM */))) * (data->localData[0]->timeValue)))) * ((tmp56 * tmp56)))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* der(envelope) DUMMY_DER */)) * ((cos(((6.283185307179586) * ((data->simulationInfo->realParameter[0] /* frequency PARAM */))) * (data->localData[0]->timeValue))) * ((data->simulationInfo->realParameter[0] /* frequency PARAM */)))) + (6.283185307179586) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* der(envelope) DUMMY_DER */)) * ((cos(((6.283185307179586) * ((data->simulationInfo->realParameter[0] /* frequency PARAM */))) * (data->localData[0]->timeValue))) * ((data->simulationInfo->realParameter[0] /* frequency PARAM */)))) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* der(der(envelope)) DUMMY_DER */)) * (sin(((6.283185307179586) * ((data->simulationInfo->realParameter[0] /* frequency PARAM */))) * (data->localData[0]->timeValue)));
  TRACE_POP
}
extern void Roll_eqFunction_8699(DATA *data, threadData_t *threadData);


/*
equation index: 2854
type: SIMPLE_ASSIGN
$DER.$DER.front.steering.pos.s = front.steering.rackRatioGain.k * $DER.$DER.steering
*/
void Roll_eqFunction_2854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2854};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* der(der(front.steering.pos.s)) DUMMY_DER */) = ((data->simulationInfo->realParameter[1583] /* front.steering.rackRatioGain.k PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* der(der(steering)) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 2855
type: SIMPLE_ASSIGN
front.steering.rack.a = $DER.$DER.front.steering.pos.s
*/
void Roll_eqFunction_2855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2608]] /* front.steering.rack.a variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* der(der(front.steering.pos.s)) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2856
type: SIMPLE_ASSIGN
$DER.front.steering.rack.v = front.steering.rack.a
*/
void Roll_eqFunction_2856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[517]] /* der(front.steering.rack.v) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2608]] /* front.steering.rack.a variable */);
  TRACE_POP
}

/*
equation index: 2857
type: SIMPLE_ASSIGN
$DER.$DER.front.steering.endR.frame_a.r_0[2] = $DER.$DER.front.steering.rack.frame_a.r_0[2] + front.steering.rack.a
*/
void Roll_eqFunction_2857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2857};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* der(der(front.steering.endR.frame_a.r_0[2])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* der(der(front.steering.rack.frame_a.r_0[2])) DUMMY_DER */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2608]] /* front.steering.rack.a variable */);
  TRACE_POP
}

/*
equation index: 2858
type: SIMPLE_ASSIGN
$DER.$DER.points[1,7,2] = $DER.$DER.front.steering.endR.frame_a.r_0[2]
*/
void Roll_eqFunction_2858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2858};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* der(der(points[1,7,2])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* der(der(front.steering.endR.frame_a.r_0[2])) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2859
type: SIMPLE_ASSIGN
$DER.$DER.points[2,7,2] = $DER.$DER.front.steering.endR.frame_a.r_0[2]
*/
void Roll_eqFunction_2859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2859};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* der(der(points[2,7,2])) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* der(der(front.steering.endR.frame_a.r_0[2])) DUMMY_DER */);
  TRACE_POP
}
extern void Roll_eqFunction_6614(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6615(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6616(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6619(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6620(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6621(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6428(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6427(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6426(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6425(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6424(DATA *data, threadData_t *threadData);


/*
equation index: 2871
type: SIMPLE_ASSIGN
$DER.rear.cornerL.jointUSR.frame_im.r_0[1] = $DER.rear.cornerL.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2871};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[595]] /* der(rear.cornerL.jointUSR.frame_im.r_0[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* der(rear.cornerL.springArm.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2872
type: SIMPLE_ASSIGN
$DER.points[3,11,1] = $DER.rear.cornerL.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2872};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[551]] /* der(points[3,11,1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[649]] /* der(rear.cornerL.springArm.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}
extern void Roll_eqFunction_6581(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6504(DATA *data, threadData_t *threadData);


/*
equation index: 2875
type: SIMPLE_ASSIGN
rear.cornerL.jointUSR.frame_im.r_0[1] = rear.cornerL.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2875};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3096]] /* rear.cornerL.jointUSR.frame_im.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3367]] /* rear.cornerL.springArm.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2876
type: SIMPLE_ASSIGN
points[3,11,1] = rear.cornerL.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2876};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2935]] /* points[3,11,1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3367]] /* rear.cornerL.springArm.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2877
type: SIMPLE_ASSIGN
rear.cornerL.coilover.r_rel_0[1] = points[3,11,1] - points[3,10,1]
*/
void Roll_eqFunction_2877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2877};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3014]] /* rear.cornerL.coilover.r_rel_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2935]] /* points[3,11,1] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2932]] /* points[3,10,1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2878
type: SIMPLE_ASSIGN
rear.cornerL.coilover.r_rel_a[1] = rear.cornerL.coilover.r_rel_0[1]
*/
void Roll_eqFunction_2878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2878};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3017]] /* rear.cornerL.coilover.r_rel_a[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3014]] /* rear.cornerL.coilover.r_rel_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void Roll_eqFunction_6423(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6422(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6421(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6420(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6419(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6505(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6630(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6631(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6632(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6635(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6636(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6637(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6416(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6415(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6414(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6413(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6412(DATA *data, threadData_t *threadData);


/*
equation index: 2896
type: SIMPLE_ASSIGN
$DER.rear.cornerR.jointUSR.frame_im.r_0[1] = $DER.rear.cornerR.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2896};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[727]] /* der(rear.cornerR.jointUSR.frame_im.r_0[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* der(rear.cornerR.springArm.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2897
type: SIMPLE_ASSIGN
$DER.points[4,11,1] = $DER.rear.cornerR.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2897};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[563]] /* der(points[4,11,1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[783]] /* der(rear.cornerR.springArm.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}
extern void Roll_eqFunction_6587(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6507(DATA *data, threadData_t *threadData);


/*
equation index: 2900
type: SIMPLE_ASSIGN
rear.cornerR.jointUSR.frame_im.r_0[1] = rear.cornerR.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2900};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3930]] /* rear.cornerR.jointUSR.frame_im.r_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4201]] /* rear.cornerR.springArm.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2901
type: SIMPLE_ASSIGN
points[4,11,1] = rear.cornerR.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2901};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2977]] /* points[4,11,1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4201]] /* rear.cornerR.springArm.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2902
type: SIMPLE_ASSIGN
rear.cornerR.coilover.r_rel_0[1] = points[4,11,1] - points[4,10,1]
*/
void Roll_eqFunction_2902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2902};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3848]] /* rear.cornerR.coilover.r_rel_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2977]] /* points[4,11,1] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2974]] /* points[4,10,1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2903
type: SIMPLE_ASSIGN
rear.cornerR.coilover.r_rel_a[1] = rear.cornerR.coilover.r_rel_0[1]
*/
void Roll_eqFunction_2903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2903};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3851]] /* rear.cornerR.coilover.r_rel_a[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3848]] /* rear.cornerR.coilover.r_rel_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void Roll_eqFunction_6411(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6410(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6409(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6408(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6407(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6508(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6645(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6646(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6647(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6648(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6649(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6650(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6651(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6652(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6653(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6654(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6655(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6656(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6658(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6659(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6660(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6663(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6664(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6665(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6403(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6402(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6401(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6400(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6399(DATA *data, threadData_t *threadData);


/*
equation index: 2933
type: SIMPLE_ASSIGN
$DER.front.cornerL.jointUSR.frame_im.r_0[1] = $DER.front.cornerL.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2933};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* der(front.cornerL.jointUSR.frame_im.r_0[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* der(front.cornerL.springArm.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2934
type: SIMPLE_ASSIGN
$DER.points[1,11,1] = $DER.front.cornerL.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2934};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[527]] /* der(points[1,11,1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* der(front.cornerL.springArm.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}
extern void Roll_eqFunction_6599(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6509(DATA *data, threadData_t *threadData);


/*
equation index: 2937
type: SIMPLE_ASSIGN
front.cornerL.jointUSR.frame_im.r_0[1] = 0.02 + front.cornerL.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2937};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1002]] /* front.cornerL.jointUSR.frame_im.r_0[1] DUMMY_STATE */) = 0.02 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* front.cornerL.springArm.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2938
type: SIMPLE_ASSIGN
points[1,11,1] = front.cornerL.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2938};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2851]] /* points[1,11,1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1274]] /* front.cornerL.springArm.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2939
type: SIMPLE_ASSIGN
front.cornerL.coilover.r_rel_0[1] = points[1,11,1] - points[1,10,1]
*/
void Roll_eqFunction_2939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2939};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* front.cornerL.coilover.r_rel_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2851]] /* points[1,11,1] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2848]] /* points[1,10,1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2940
type: SIMPLE_ASSIGN
front.cornerL.coilover.r_rel_a[1] = front.cornerL.coilover.r_rel_0[1]
*/
void Roll_eqFunction_2940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2940};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[922]] /* front.cornerL.coilover.r_rel_a[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[919]] /* front.cornerL.coilover.r_rel_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void Roll_eqFunction_6398(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6397(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6396(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6395(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6394(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6510(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6674(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6675(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6676(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6679(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6680(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6681(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6390(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6389(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6388(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6387(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6386(DATA *data, threadData_t *threadData);


/*
equation index: 2958
type: SIMPLE_ASSIGN
$DER.front.cornerR.jointUSR.frame_im.r_0[1] = $DER.front.cornerR.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2958};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[395]] /* der(front.cornerR.jointUSR.frame_im.r_0[1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[451]] /* der(front.cornerR.springArm.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2959
type: SIMPLE_ASSIGN
$DER.points[2,11,1] = $DER.front.cornerR.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2959};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[539]] /* der(points[2,11,1]) DUMMY_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[451]] /* der(front.cornerR.springArm.frame_a.r_0[1]) DUMMY_DER */);
  TRACE_POP
}
extern void Roll_eqFunction_6605(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6511(DATA *data, threadData_t *threadData);


/*
equation index: 2962
type: SIMPLE_ASSIGN
front.cornerR.jointUSR.frame_im.r_0[1] = 0.02 + front.cornerR.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2962};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1827]] /* front.cornerR.jointUSR.frame_im.r_0[1] DUMMY_STATE */) = 0.02 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2099]] /* front.cornerR.springArm.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2963
type: SIMPLE_ASSIGN
points[2,11,1] = front.cornerR.springArm.frame_a.r_0[1]
*/
void Roll_eqFunction_2963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2963};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2893]] /* points[2,11,1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2099]] /* front.cornerR.springArm.frame_a.r_0[1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2964
type: SIMPLE_ASSIGN
front.cornerR.coilover.r_rel_0[1] = points[2,11,1] - points[2,10,1]
*/
void Roll_eqFunction_2964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2964};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* front.cornerR.coilover.r_rel_0[1] DUMMY_STATE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2893]] /* points[2,11,1] DUMMY_STATE */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2890]] /* points[2,10,1] DUMMY_STATE */);
  TRACE_POP
}

/*
equation index: 2965
type: SIMPLE_ASSIGN
front.cornerR.coilover.r_rel_a[1] = front.cornerR.coilover.r_rel_0[1]
*/
void Roll_eqFunction_2965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2965};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1747]] /* front.cornerR.coilover.r_rel_a[1] variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1744]] /* front.cornerR.coilover.r_rel_0[1] DUMMY_STATE */);
  TRACE_POP
}
extern void Roll_eqFunction_6385(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6384(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6383(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6382(DATA *data, threadData_t *threadData);

extern void Roll_eqFunction_6381(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void Roll_functionInitialEquations_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Roll_eqFunction_2476(data, threadData);
  Roll_eqFunction_2477(data, threadData);
  Roll_eqFunction_2478(data, threadData);
  Roll_eqFunction_2479(data, threadData);
  Roll_eqFunction_2480(data, threadData);
  Roll_eqFunction_2481(data, threadData);
  Roll_eqFunction_2482(data, threadData);
  Roll_eqFunction_2483(data, threadData);
  Roll_eqFunction_2484(data, threadData);
  Roll_eqFunction_2485(data, threadData);
  Roll_eqFunction_2486(data, threadData);
  Roll_eqFunction_2487(data, threadData);
  Roll_eqFunction_2488(data, threadData);
  Roll_eqFunction_2489(data, threadData);
  Roll_eqFunction_2490(data, threadData);
  Roll_eqFunction_2491(data, threadData);
  Roll_eqFunction_2492(data, threadData);
  Roll_eqFunction_2493(data, threadData);
  Roll_eqFunction_2494(data, threadData);
  Roll_eqFunction_2495(data, threadData);
  Roll_eqFunction_2496(data, threadData);
  Roll_eqFunction_2497(data, threadData);
  Roll_eqFunction_2498(data, threadData);
  Roll_eqFunction_2499(data, threadData);
  Roll_eqFunction_2500(data, threadData);
  Roll_eqFunction_2501(data, threadData);
  Roll_eqFunction_2502(data, threadData);
  Roll_eqFunction_2503(data, threadData);
  Roll_eqFunction_2504(data, threadData);
  Roll_eqFunction_2505(data, threadData);
  Roll_eqFunction_2506(data, threadData);
  Roll_eqFunction_2507(data, threadData);
  Roll_eqFunction_2508(data, threadData);
  Roll_eqFunction_2509(data, threadData);
  Roll_eqFunction_2510(data, threadData);
  Roll_eqFunction_2511(data, threadData);
  Roll_eqFunction_2512(data, threadData);
  Roll_eqFunction_2513(data, threadData);
  Roll_eqFunction_2514(data, threadData);
  Roll_eqFunction_2515(data, threadData);
  Roll_eqFunction_2516(data, threadData);
  Roll_eqFunction_2517(data, threadData);
  Roll_eqFunction_2518(data, threadData);
  Roll_eqFunction_2519(data, threadData);
  Roll_eqFunction_2520(data, threadData);
  Roll_eqFunction_2521(data, threadData);
  Roll_eqFunction_2522(data, threadData);
  Roll_eqFunction_2523(data, threadData);
  Roll_eqFunction_2524(data, threadData);
  Roll_eqFunction_2525(data, threadData);
  Roll_eqFunction_2526(data, threadData);
  Roll_eqFunction_2527(data, threadData);
  Roll_eqFunction_2528(data, threadData);
  Roll_eqFunction_2529(data, threadData);
  Roll_eqFunction_2530(data, threadData);
  Roll_eqFunction_2531(data, threadData);
  Roll_eqFunction_2532(data, threadData);
  Roll_eqFunction_2533(data, threadData);
  Roll_eqFunction_2534(data, threadData);
  Roll_eqFunction_2535(data, threadData);
  Roll_eqFunction_2536(data, threadData);
  Roll_eqFunction_2537(data, threadData);
  Roll_eqFunction_2538(data, threadData);
  Roll_eqFunction_2539(data, threadData);
  Roll_eqFunction_2540(data, threadData);
  Roll_eqFunction_2541(data, threadData);
  Roll_eqFunction_2542(data, threadData);
  Roll_eqFunction_2543(data, threadData);
  Roll_eqFunction_2544(data, threadData);
  Roll_eqFunction_2545(data, threadData);
  Roll_eqFunction_2546(data, threadData);
  Roll_eqFunction_2547(data, threadData);
  Roll_eqFunction_2548(data, threadData);
  Roll_eqFunction_2549(data, threadData);
  Roll_eqFunction_2550(data, threadData);
  Roll_eqFunction_2551(data, threadData);
  Roll_eqFunction_2552(data, threadData);
  Roll_eqFunction_2553(data, threadData);
  Roll_eqFunction_2554(data, threadData);
  Roll_eqFunction_2555(data, threadData);
  Roll_eqFunction_2556(data, threadData);
  Roll_eqFunction_2557(data, threadData);
  Roll_eqFunction_2558(data, threadData);
  Roll_eqFunction_2559(data, threadData);
  Roll_eqFunction_2560(data, threadData);
  Roll_eqFunction_2561(data, threadData);
  Roll_eqFunction_2562(data, threadData);
  Roll_eqFunction_2563(data, threadData);
  Roll_eqFunction_2564(data, threadData);
  Roll_eqFunction_2565(data, threadData);
  Roll_eqFunction_2566(data, threadData);
  Roll_eqFunction_2567(data, threadData);
  Roll_eqFunction_2568(data, threadData);
  Roll_eqFunction_2569(data, threadData);
  Roll_eqFunction_2570(data, threadData);
  Roll_eqFunction_2571(data, threadData);
  Roll_eqFunction_2572(data, threadData);
  Roll_eqFunction_2573(data, threadData);
  Roll_eqFunction_2574(data, threadData);
  Roll_eqFunction_2575(data, threadData);
  Roll_eqFunction_2576(data, threadData);
  Roll_eqFunction_2577(data, threadData);
  Roll_eqFunction_2578(data, threadData);
  Roll_eqFunction_2579(data, threadData);
  Roll_eqFunction_2580(data, threadData);
  Roll_eqFunction_2581(data, threadData);
  Roll_eqFunction_2582(data, threadData);
  Roll_eqFunction_2583(data, threadData);
  Roll_eqFunction_2584(data, threadData);
  Roll_eqFunction_2585(data, threadData);
  Roll_eqFunction_2586(data, threadData);
  Roll_eqFunction_2587(data, threadData);
  Roll_eqFunction_2588(data, threadData);
  Roll_eqFunction_2589(data, threadData);
  Roll_eqFunction_2590(data, threadData);
  Roll_eqFunction_2591(data, threadData);
  Roll_eqFunction_2592(data, threadData);
  Roll_eqFunction_2593(data, threadData);
  Roll_eqFunction_2594(data, threadData);
  Roll_eqFunction_2595(data, threadData);
  Roll_eqFunction_2596(data, threadData);
  Roll_eqFunction_2597(data, threadData);
  Roll_eqFunction_2598(data, threadData);
  Roll_eqFunction_2599(data, threadData);
  Roll_eqFunction_2600(data, threadData);
  Roll_eqFunction_2601(data, threadData);
  Roll_eqFunction_2602(data, threadData);
  Roll_eqFunction_2603(data, threadData);
  Roll_eqFunction_2604(data, threadData);
  Roll_eqFunction_2605(data, threadData);
  Roll_eqFunction_2606(data, threadData);
  Roll_eqFunction_2607(data, threadData);
  Roll_eqFunction_2608(data, threadData);
  Roll_eqFunction_2609(data, threadData);
  Roll_eqFunction_2610(data, threadData);
  Roll_eqFunction_2611(data, threadData);
  Roll_eqFunction_2612(data, threadData);
  Roll_eqFunction_2613(data, threadData);
  Roll_eqFunction_2614(data, threadData);
  Roll_eqFunction_2615(data, threadData);
  Roll_eqFunction_2616(data, threadData);
  Roll_eqFunction_2617(data, threadData);
  Roll_eqFunction_2618(data, threadData);
  Roll_eqFunction_2619(data, threadData);
  Roll_eqFunction_2620(data, threadData);
  Roll_eqFunction_2621(data, threadData);
  Roll_eqFunction_2622(data, threadData);
  Roll_eqFunction_2623(data, threadData);
  Roll_eqFunction_2624(data, threadData);
  Roll_eqFunction_2625(data, threadData);
  Roll_eqFunction_2626(data, threadData);
  Roll_eqFunction_2627(data, threadData);
  Roll_eqFunction_2628(data, threadData);
  Roll_eqFunction_2629(data, threadData);
  Roll_eqFunction_2630(data, threadData);
  Roll_eqFunction_2631(data, threadData);
  Roll_eqFunction_2632(data, threadData);
  Roll_eqFunction_2633(data, threadData);
  Roll_eqFunction_2634(data, threadData);
  Roll_eqFunction_2635(data, threadData);
  Roll_eqFunction_2636(data, threadData);
  Roll_eqFunction_2637(data, threadData);
  Roll_eqFunction_2638(data, threadData);
  Roll_eqFunction_2639(data, threadData);
  Roll_eqFunction_2640(data, threadData);
  Roll_eqFunction_2641(data, threadData);
  Roll_eqFunction_2642(data, threadData);
  Roll_eqFunction_2643(data, threadData);
  Roll_eqFunction_2644(data, threadData);
  Roll_eqFunction_2645(data, threadData);
  Roll_eqFunction_2646(data, threadData);
  Roll_eqFunction_2647(data, threadData);
  Roll_eqFunction_2648(data, threadData);
  Roll_eqFunction_2649(data, threadData);
  Roll_eqFunction_2650(data, threadData);
  Roll_eqFunction_2651(data, threadData);
  Roll_eqFunction_2652(data, threadData);
  Roll_eqFunction_2653(data, threadData);
  Roll_eqFunction_2654(data, threadData);
  Roll_eqFunction_2655(data, threadData);
  Roll_eqFunction_2656(data, threadData);
  Roll_eqFunction_2657(data, threadData);
  Roll_eqFunction_2658(data, threadData);
  Roll_eqFunction_2659(data, threadData);
  Roll_eqFunction_2660(data, threadData);
  Roll_eqFunction_2661(data, threadData);
  Roll_eqFunction_2662(data, threadData);
  Roll_eqFunction_2663(data, threadData);
  Roll_eqFunction_2664(data, threadData);
  Roll_eqFunction_2665(data, threadData);
  Roll_eqFunction_2666(data, threadData);
  Roll_eqFunction_2667(data, threadData);
  Roll_eqFunction_2668(data, threadData);
  Roll_eqFunction_2669(data, threadData);
  Roll_eqFunction_2670(data, threadData);
  Roll_eqFunction_2671(data, threadData);
  Roll_eqFunction_2672(data, threadData);
  Roll_eqFunction_2673(data, threadData);
  Roll_eqFunction_2674(data, threadData);
  Roll_eqFunction_2675(data, threadData);
  Roll_eqFunction_2676(data, threadData);
  Roll_eqFunction_2677(data, threadData);
  Roll_eqFunction_2678(data, threadData);
  Roll_eqFunction_2679(data, threadData);
  Roll_eqFunction_2680(data, threadData);
  Roll_eqFunction_2681(data, threadData);
  Roll_eqFunction_2682(data, threadData);
  Roll_eqFunction_2683(data, threadData);
  Roll_eqFunction_2684(data, threadData);
  Roll_eqFunction_2685(data, threadData);
  Roll_eqFunction_2686(data, threadData);
  Roll_eqFunction_2687(data, threadData);
  Roll_eqFunction_2688(data, threadData);
  Roll_eqFunction_2689(data, threadData);
  Roll_eqFunction_2690(data, threadData);
  Roll_eqFunction_2691(data, threadData);
  Roll_eqFunction_2692(data, threadData);
  Roll_eqFunction_2693(data, threadData);
  Roll_eqFunction_2694(data, threadData);
  Roll_eqFunction_2695(data, threadData);
  Roll_eqFunction_6528(data, threadData);
  Roll_eqFunction_6529(data, threadData);
  Roll_eqFunction_6530(data, threadData);
  Roll_eqFunction_6531(data, threadData);
  Roll_eqFunction_6532(data, threadData);
  Roll_eqFunction_6533(data, threadData);
  Roll_eqFunction_6534(data, threadData);
  Roll_eqFunction_6535(data, threadData);
  Roll_eqFunction_6536(data, threadData);
  Roll_eqFunction_6537(data, threadData);
  Roll_eqFunction_6538(data, threadData);
  Roll_eqFunction_6539(data, threadData);
  Roll_eqFunction_6540(data, threadData);
  Roll_eqFunction_6541(data, threadData);
  Roll_eqFunction_6542(data, threadData);
  Roll_eqFunction_6543(data, threadData);
  Roll_eqFunction_6544(data, threadData);
  Roll_eqFunction_6545(data, threadData);
  Roll_eqFunction_6546(data, threadData);
  Roll_eqFunction_6547(data, threadData);
  Roll_eqFunction_6548(data, threadData);
  Roll_eqFunction_6549(data, threadData);
  Roll_eqFunction_6550(data, threadData);
  Roll_eqFunction_6551(data, threadData);
  Roll_eqFunction_6552(data, threadData);
  Roll_eqFunction_6553(data, threadData);
  Roll_eqFunction_6554(data, threadData);
  Roll_eqFunction_6555(data, threadData);
  Roll_eqFunction_6556(data, threadData);
  Roll_eqFunction_6557(data, threadData);
  Roll_eqFunction_6558(data, threadData);
  Roll_eqFunction_6559(data, threadData);
  Roll_eqFunction_6560(data, threadData);
  Roll_eqFunction_6561(data, threadData);
  Roll_eqFunction_6562(data, threadData);
  Roll_eqFunction_6563(data, threadData);
  Roll_eqFunction_6564(data, threadData);
  Roll_eqFunction_6565(data, threadData);
  Roll_eqFunction_6566(data, threadData);
  Roll_eqFunction_6567(data, threadData);
  Roll_eqFunction_6568(data, threadData);
  Roll_eqFunction_6569(data, threadData);
  Roll_eqFunction_6570(data, threadData);
  Roll_eqFunction_6571(data, threadData);
  Roll_eqFunction_6572(data, threadData);
  Roll_eqFunction_6573(data, threadData);
  Roll_eqFunction_6574(data, threadData);
  Roll_eqFunction_6575(data, threadData);
  Roll_eqFunction_6576(data, threadData);
  Roll_eqFunction_6578(data, threadData);
  Roll_eqFunction_6579(data, threadData);
  Roll_eqFunction_6580(data, threadData);
  Roll_eqFunction_6501(data, threadData);
  Roll_eqFunction_6500(data, threadData);
  Roll_eqFunction_6499(data, threadData);
  Roll_eqFunction_6498(data, threadData);
  Roll_eqFunction_6497(data, threadData);
  Roll_eqFunction_6496(data, threadData);
  Roll_eqFunction_2754(data, threadData);
  Roll_eqFunction_6495(data, threadData);
  Roll_eqFunction_6494(data, threadData);
  Roll_eqFunction_6493(data, threadData);
  Roll_eqFunction_6492(data, threadData);
  Roll_eqFunction_6491(data, threadData);
  Roll_eqFunction_6490(data, threadData);
  Roll_eqFunction_6584(data, threadData);
  Roll_eqFunction_6585(data, threadData);
  Roll_eqFunction_6586(data, threadData);
  Roll_eqFunction_6487(data, threadData);
  Roll_eqFunction_6486(data, threadData);
  Roll_eqFunction_6485(data, threadData);
  Roll_eqFunction_6484(data, threadData);
  Roll_eqFunction_6483(data, threadData);
  Roll_eqFunction_6482(data, threadData);
  Roll_eqFunction_2770(data, threadData);
  Roll_eqFunction_6481(data, threadData);
  Roll_eqFunction_6480(data, threadData);
  Roll_eqFunction_6479(data, threadData);
  Roll_eqFunction_6478(data, threadData);
  Roll_eqFunction_6477(data, threadData);
  Roll_eqFunction_6476(data, threadData);
  Roll_eqFunction_6589(data, threadData);
  Roll_eqFunction_6590(data, threadData);
  Roll_eqFunction_6591(data, threadData);
  Roll_eqFunction_6592(data, threadData);
  Roll_eqFunction_6593(data, threadData);
  Roll_eqFunction_6594(data, threadData);
  Roll_eqFunction_6596(data, threadData);
  Roll_eqFunction_6597(data, threadData);
  Roll_eqFunction_6598(data, threadData);
  Roll_eqFunction_6473(data, threadData);
  Roll_eqFunction_6472(data, threadData);
  Roll_eqFunction_6471(data, threadData);
  Roll_eqFunction_6470(data, threadData);
  Roll_eqFunction_6469(data, threadData);
  Roll_eqFunction_6468(data, threadData);
  Roll_eqFunction_2792(data, threadData);
  Roll_eqFunction_6467(data, threadData);
  Roll_eqFunction_6466(data, threadData);
  Roll_eqFunction_6465(data, threadData);
  Roll_eqFunction_6464(data, threadData);
  Roll_eqFunction_6463(data, threadData);
  Roll_eqFunction_6462(data, threadData);
  Roll_eqFunction_6602(data, threadData);
  Roll_eqFunction_6603(data, threadData);
  Roll_eqFunction_6604(data, threadData);
  Roll_eqFunction_6459(data, threadData);
  Roll_eqFunction_6458(data, threadData);
  Roll_eqFunction_6457(data, threadData);
  Roll_eqFunction_6456(data, threadData);
  Roll_eqFunction_6455(data, threadData);
  Roll_eqFunction_6454(data, threadData);
  Roll_eqFunction_2808(data, threadData);
  Roll_eqFunction_6453(data, threadData);
  Roll_eqFunction_6452(data, threadData);
  Roll_eqFunction_6451(data, threadData);
  Roll_eqFunction_6450(data, threadData);
  Roll_eqFunction_6449(data, threadData);
  Roll_eqFunction_6448(data, threadData);
  Roll_eqFunction_6444(data, threadData);
  Roll_eqFunction_2816(data, threadData);
  Roll_eqFunction_2817(data, threadData);
  Roll_eqFunction_2818(data, threadData);
  Roll_eqFunction_6443(data, threadData);
  Roll_eqFunction_6442(data, threadData);
  Roll_eqFunction_2821(data, threadData);
  Roll_eqFunction_2822(data, threadData);
  Roll_eqFunction_2823(data, threadData);
  Roll_eqFunction_6441(data, threadData);
  Roll_eqFunction_6440(data, threadData);
  Roll_eqFunction_6439(data, threadData);
  Roll_eqFunction_2827(data, threadData);
  Roll_eqFunction_6438(data, threadData);
  Roll_eqFunction_6437(data, threadData);
  Roll_eqFunction_6436(data, threadData);
  Roll_eqFunction_2831(data, threadData);
  Roll_eqFunction_6435(data, threadData);
  Roll_eqFunction_6434(data, threadData);
  Roll_eqFunction_6433(data, threadData);
  Roll_eqFunction_2835(data, threadData);
  Roll_eqFunction_6432(data, threadData);
  Roll_eqFunction_6431(data, threadData);
  Roll_eqFunction_6430(data, threadData);
  Roll_eqFunction_2839(data, threadData);
  Roll_eqFunction_6611(data, threadData);
  Roll_eqFunction_6612(data, threadData);
  Roll_eqFunction_2842(data, threadData);
  Roll_eqFunction_7823(data, threadData);
  Roll_eqFunction_7996(data, threadData);
  Roll_eqFunction_7997(data, threadData);
  Roll_eqFunction_8004(data, threadData);
  Roll_eqFunction_8283(data, threadData);
  Roll_eqFunction_8284(data, threadData);
  Roll_eqFunction_8291(data, threadData);
  Roll_eqFunction_2850(data, threadData);
  Roll_eqFunction_8583(data, threadData);
  Roll_eqFunction_2852(data, threadData);
  Roll_eqFunction_8699(data, threadData);
  Roll_eqFunction_2854(data, threadData);
  Roll_eqFunction_2855(data, threadData);
  Roll_eqFunction_2856(data, threadData);
  Roll_eqFunction_2857(data, threadData);
  Roll_eqFunction_2858(data, threadData);
  Roll_eqFunction_2859(data, threadData);
  Roll_eqFunction_6614(data, threadData);
  Roll_eqFunction_6615(data, threadData);
  Roll_eqFunction_6616(data, threadData);
  Roll_eqFunction_6619(data, threadData);
  Roll_eqFunction_6620(data, threadData);
  Roll_eqFunction_6621(data, threadData);
  Roll_eqFunction_6428(data, threadData);
  Roll_eqFunction_6427(data, threadData);
  Roll_eqFunction_6426(data, threadData);
  Roll_eqFunction_6425(data, threadData);
  Roll_eqFunction_6424(data, threadData);
  Roll_eqFunction_2871(data, threadData);
  Roll_eqFunction_2872(data, threadData);
  Roll_eqFunction_6581(data, threadData);
  Roll_eqFunction_6504(data, threadData);
  Roll_eqFunction_2875(data, threadData);
  Roll_eqFunction_2876(data, threadData);
  Roll_eqFunction_2877(data, threadData);
  Roll_eqFunction_2878(data, threadData);
  Roll_eqFunction_6423(data, threadData);
  Roll_eqFunction_6422(data, threadData);
  Roll_eqFunction_6421(data, threadData);
  Roll_eqFunction_6420(data, threadData);
  Roll_eqFunction_6419(data, threadData);
  Roll_eqFunction_6505(data, threadData);
  Roll_eqFunction_6630(data, threadData);
  Roll_eqFunction_6631(data, threadData);
  Roll_eqFunction_6632(data, threadData);
  Roll_eqFunction_6635(data, threadData);
  Roll_eqFunction_6636(data, threadData);
  Roll_eqFunction_6637(data, threadData);
  Roll_eqFunction_6416(data, threadData);
  Roll_eqFunction_6415(data, threadData);
  Roll_eqFunction_6414(data, threadData);
  Roll_eqFunction_6413(data, threadData);
  Roll_eqFunction_6412(data, threadData);
  Roll_eqFunction_2896(data, threadData);
  Roll_eqFunction_2897(data, threadData);
  Roll_eqFunction_6587(data, threadData);
  Roll_eqFunction_6507(data, threadData);
  Roll_eqFunction_2900(data, threadData);
  Roll_eqFunction_2901(data, threadData);
  Roll_eqFunction_2902(data, threadData);
  Roll_eqFunction_2903(data, threadData);
  Roll_eqFunction_6411(data, threadData);
  Roll_eqFunction_6410(data, threadData);
  Roll_eqFunction_6409(data, threadData);
  Roll_eqFunction_6408(data, threadData);
  Roll_eqFunction_6407(data, threadData);
  Roll_eqFunction_6508(data, threadData);
  Roll_eqFunction_6645(data, threadData);
  Roll_eqFunction_6646(data, threadData);
  Roll_eqFunction_6647(data, threadData);
  Roll_eqFunction_6648(data, threadData);
  Roll_eqFunction_6649(data, threadData);
  Roll_eqFunction_6650(data, threadData);
  Roll_eqFunction_6651(data, threadData);
  Roll_eqFunction_6652(data, threadData);
  Roll_eqFunction_6653(data, threadData);
  Roll_eqFunction_6654(data, threadData);
  Roll_eqFunction_6655(data, threadData);
  Roll_eqFunction_6656(data, threadData);
  Roll_eqFunction_6658(data, threadData);
  Roll_eqFunction_6659(data, threadData);
  Roll_eqFunction_6660(data, threadData);
  Roll_eqFunction_6663(data, threadData);
  Roll_eqFunction_6664(data, threadData);
  Roll_eqFunction_6665(data, threadData);
  Roll_eqFunction_6403(data, threadData);
  Roll_eqFunction_6402(data, threadData);
  Roll_eqFunction_6401(data, threadData);
  Roll_eqFunction_6400(data, threadData);
  Roll_eqFunction_6399(data, threadData);
  Roll_eqFunction_2933(data, threadData);
  Roll_eqFunction_2934(data, threadData);
  Roll_eqFunction_6599(data, threadData);
  Roll_eqFunction_6509(data, threadData);
  Roll_eqFunction_2937(data, threadData);
  Roll_eqFunction_2938(data, threadData);
  Roll_eqFunction_2939(data, threadData);
  Roll_eqFunction_2940(data, threadData);
  Roll_eqFunction_6398(data, threadData);
  Roll_eqFunction_6397(data, threadData);
  Roll_eqFunction_6396(data, threadData);
  Roll_eqFunction_6395(data, threadData);
  Roll_eqFunction_6394(data, threadData);
  Roll_eqFunction_6510(data, threadData);
  Roll_eqFunction_6674(data, threadData);
  Roll_eqFunction_6675(data, threadData);
  Roll_eqFunction_6676(data, threadData);
  Roll_eqFunction_6679(data, threadData);
  Roll_eqFunction_6680(data, threadData);
  Roll_eqFunction_6681(data, threadData);
  Roll_eqFunction_6390(data, threadData);
  Roll_eqFunction_6389(data, threadData);
  Roll_eqFunction_6388(data, threadData);
  Roll_eqFunction_6387(data, threadData);
  Roll_eqFunction_6386(data, threadData);
  Roll_eqFunction_2958(data, threadData);
  Roll_eqFunction_2959(data, threadData);
  Roll_eqFunction_6605(data, threadData);
  Roll_eqFunction_6511(data, threadData);
  Roll_eqFunction_2962(data, threadData);
  Roll_eqFunction_2963(data, threadData);
  Roll_eqFunction_2964(data, threadData);
  Roll_eqFunction_2965(data, threadData);
  Roll_eqFunction_6385(data, threadData);
  Roll_eqFunction_6384(data, threadData);
  Roll_eqFunction_6383(data, threadData);
  Roll_eqFunction_6382(data, threadData);
  Roll_eqFunction_6381(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif