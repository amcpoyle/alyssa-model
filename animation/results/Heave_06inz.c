/* Initialization */
#include "Heave_model.h"
#include "Heave_11mix.h"
#include "Heave_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void Heave_functionInitialEquations_0(DATA *data, threadData_t *threadData);
void Heave_functionInitialEquations_1(DATA *data, threadData_t *threadData);
void Heave_functionInitialEquations_2(DATA *data, threadData_t *threadData);
void Heave_functionInitialEquations_3(DATA *data, threadData_t *threadData);
void Heave_functionInitialEquations_4(DATA *data, threadData_t *threadData);
void Heave_functionInitialEquations_5(DATA *data, threadData_t *threadData);
void Heave_functionInitialEquations_6(DATA *data, threadData_t *threadData);
void Heave_functionInitialEquations_7(DATA *data, threadData_t *threadData);
void Heave_functionInitialEquations_8(DATA *data, threadData_t *threadData);
void Heave_functionInitialEquations_9(DATA *data, threadData_t *threadData);
void Heave_functionInitialEquations_10(DATA *data, threadData_t *threadData);

int Heave_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  Heave_functionInitialEquations_0(data, threadData);
  Heave_functionInitialEquations_1(data, threadData);
  Heave_functionInitialEquations_2(data, threadData);
  Heave_functionInitialEquations_3(data, threadData);
  Heave_functionInitialEquations_4(data, threadData);
  Heave_functionInitialEquations_5(data, threadData);
  Heave_functionInitialEquations_6(data, threadData);
  Heave_functionInitialEquations_7(data, threadData);
  Heave_functionInitialEquations_8(data, threadData);
  Heave_functionInitialEquations_9(data, threadData);
  Heave_functionInitialEquations_10(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No Heave_functionInitialEquations_lambda0 function */

int Heave_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

