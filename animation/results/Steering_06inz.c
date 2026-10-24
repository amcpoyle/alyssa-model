/* Initialization */
#include "Steering_model.h"
#include "Steering_11mix.h"
#include "Steering_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void Steering_functionInitialEquations_0(DATA *data, threadData_t *threadData);
void Steering_functionInitialEquations_1(DATA *data, threadData_t *threadData);
void Steering_functionInitialEquations_2(DATA *data, threadData_t *threadData);
void Steering_functionInitialEquations_3(DATA *data, threadData_t *threadData);
void Steering_functionInitialEquations_4(DATA *data, threadData_t *threadData);
void Steering_functionInitialEquations_5(DATA *data, threadData_t *threadData);
void Steering_functionInitialEquations_6(DATA *data, threadData_t *threadData);
void Steering_functionInitialEquations_7(DATA *data, threadData_t *threadData);
void Steering_functionInitialEquations_8(DATA *data, threadData_t *threadData);
void Steering_functionInitialEquations_9(DATA *data, threadData_t *threadData);
void Steering_functionInitialEquations_10(DATA *data, threadData_t *threadData);

int Steering_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  Steering_functionInitialEquations_0(data, threadData);
  Steering_functionInitialEquations_1(data, threadData);
  Steering_functionInitialEquations_2(data, threadData);
  Steering_functionInitialEquations_3(data, threadData);
  Steering_functionInitialEquations_4(data, threadData);
  Steering_functionInitialEquations_5(data, threadData);
  Steering_functionInitialEquations_6(data, threadData);
  Steering_functionInitialEquations_7(data, threadData);
  Steering_functionInitialEquations_8(data, threadData);
  Steering_functionInitialEquations_9(data, threadData);
  Steering_functionInitialEquations_10(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No Steering_functionInitialEquations_lambda0 function */

int Steering_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

