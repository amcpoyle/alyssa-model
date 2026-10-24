#if defined(__cplusplus)
  extern "C" {
#endif
  int Roll_mayer(DATA* data, modelica_real** res, short*);
  int Roll_lagrange(DATA* data, modelica_real** res, short *, short *);
  int Roll_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int Roll_setInputData(DATA *data, const modelica_boolean file);
  int Roll_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif