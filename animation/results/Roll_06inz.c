/* Initialization */
#include "Roll_model.h"
#include "Roll_11mix.h"
#include "Roll_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void Roll_functionInitialEquations_0(DATA *data, threadData_t *threadData);
void Roll_functionInitialEquations_1(DATA *data, threadData_t *threadData);
void Roll_functionInitialEquations_2(DATA *data, threadData_t *threadData);
void Roll_functionInitialEquations_3(DATA *data, threadData_t *threadData);
void Roll_functionInitialEquations_4(DATA *data, threadData_t *threadData);
void Roll_functionInitialEquations_5(DATA *data, threadData_t *threadData);
void Roll_functionInitialEquations_6(DATA *data, threadData_t *threadData);
void Roll_functionInitialEquations_7(DATA *data, threadData_t *threadData);
void Roll_functionInitialEquations_8(DATA *data, threadData_t *threadData);
void Roll_functionInitialEquations_9(DATA *data, threadData_t *threadData);
void Roll_functionInitialEquations_10(DATA *data, threadData_t *threadData);

int Roll_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  Roll_functionInitialEquations_0(data, threadData);
  Roll_functionInitialEquations_1(data, threadData);
  Roll_functionInitialEquations_2(data, threadData);
  Roll_functionInitialEquations_3(data, threadData);
  Roll_functionInitialEquations_4(data, threadData);
  Roll_functionInitialEquations_5(data, threadData);
  Roll_functionInitialEquations_6(data, threadData);
  Roll_functionInitialEquations_7(data, threadData);
  Roll_functionInitialEquations_8(data, threadData);
  Roll_functionInitialEquations_9(data, threadData);
  Roll_functionInitialEquations_10(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No Roll_functionInitialEquations_lambda0 function */

int Roll_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

