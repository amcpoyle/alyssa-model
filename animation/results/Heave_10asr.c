/* Asserts */
#include "Heave_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 16150
type: ALGORITHM

  assert(front.cornerR.coilover.length >= 0.0, "Variable violating min constraint: 0.0 <= front.cornerR.coilover.length, has value: " + String(front.cornerR.coilover.length, "g"));
*/
void Heave_eqFunction_16150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16150};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,84,"Variable violating min constraint: 0.0 <= front.cornerR.coilover.length, has value: ");
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  static int tmp4 = 0;
  if(!tmp4)
  {
    tmp0 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1742]] /* front.cornerR.coilover.length DUMMY_STATE */),0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1742]] /* front.cornerR.coilover.length DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3 = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        const char* assert_cond = "(front.cornerR.coilover.length >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Interfaces/LineForceBase.mo",14,3,15,71,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3));
        } else {
          FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Interfaces/LineForceBase.mo",14,3,15,71,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3));
        }
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 16151
type: ALGORITHM

  assert(front.cornerL.coilover.length >= 0.0, "Variable violating min constraint: 0.0 <= front.cornerL.coilover.length, has value: " + String(front.cornerL.coilover.length, "g"));
*/
void Heave_eqFunction_16151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16151};
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,84,"Variable violating min constraint: 0.0 <= front.cornerL.coilover.length, has value: ");
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  static int tmp9 = 0;
  if(!tmp9)
  {
    tmp5 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* front.cornerL.coilover.length DUMMY_STATE */),0.0);
    if(!tmp5)
    {
      tmp7 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[917]] /* front.cornerL.coilover.length DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta8 = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      {
        const char* assert_cond = "(front.cornerL.coilover.length >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Interfaces/LineForceBase.mo",14,3,15,71,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta8));
        } else {
          FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Interfaces/LineForceBase.mo",14,3,15,71,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta8));
        }
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 16152
type: ALGORITHM

  assert(rear.cornerR.coilover.length >= 0.0, "Variable violating min constraint: 0.0 <= rear.cornerR.coilover.length, has value: " + String(rear.cornerR.coilover.length, "g"));
*/
void Heave_eqFunction_16152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16152};
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,83,"Variable violating min constraint: 0.0 <= rear.cornerR.coilover.length, has value: ");
  modelica_string tmp12;
  modelica_metatype tmpMeta13;
  static int tmp14 = 0;
  if(!tmp14)
  {
    tmp10 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3846]] /* rear.cornerR.coilover.length DUMMY_STATE */),0.0);
    if(!tmp10)
    {
      tmp12 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3846]] /* rear.cornerR.coilover.length DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta13 = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        const char* assert_cond = "(rear.cornerR.coilover.length >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Interfaces/LineForceBase.mo",14,3,15,71,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta13));
        } else {
          FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Interfaces/LineForceBase.mo",14,3,15,71,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta13));
        }
      }
      tmp14 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 16153
type: ALGORITHM

  assert(rear.cornerL.coilover.length >= 0.0, "Variable violating min constraint: 0.0 <= rear.cornerL.coilover.length, has value: " + String(rear.cornerL.coilover.length, "g"));
*/
void Heave_eqFunction_16153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16153};
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,83,"Variable violating min constraint: 0.0 <= rear.cornerL.coilover.length, has value: ");
  modelica_string tmp17;
  modelica_metatype tmpMeta18;
  static int tmp19 = 0;
  if(!tmp19)
  {
    tmp15 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3012]] /* rear.cornerL.coilover.length DUMMY_STATE */),0.0);
    if(!tmp15)
    {
      tmp17 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3012]] /* rear.cornerL.coilover.length DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta18 = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      {
        const char* assert_cond = "(rear.cornerL.coilover.length >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Interfaces/LineForceBase.mo",14,3,15,71,1};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta18));
        } else {
          FILE_INFO info = {"C:/Users/amcpo/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/MultiBody/Interfaces/LineForceBase.mo",14,3,15,71,1};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta18));
        }
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Heave_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  Heave_eqFunction_16150(data, threadData);

  Heave_eqFunction_16151(data, threadData);

  Heave_eqFunction_16152(data, threadData);

  Heave_eqFunction_16153(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

