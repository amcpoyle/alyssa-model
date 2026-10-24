/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;

#if defined(__cplusplus)
extern "C" {
#endif

/* Jacobian Variables */
#define Heave_INDEX_JAC_LSJac0 0
int Heave_functionJacLSJac0_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Heave_initialAnalyticJacobianLSJac0(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Heave_INDEX_JAC_LSJac1 1
int Heave_functionJacLSJac1_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Heave_initialAnalyticJacobianLSJac1(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Heave_INDEX_JAC_LSJac2 2
int Heave_functionJacLSJac2_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Heave_initialAnalyticJacobianLSJac2(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Heave_INDEX_JAC_LSJac3 3
int Heave_functionJacLSJac3_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Heave_initialAnalyticJacobianLSJac3(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Heave_INDEX_JAC_LSJac4 4
int Heave_functionJacLSJac4_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Heave_initialAnalyticJacobianLSJac4(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Heave_INDEX_JAC_LSJac5 5
int Heave_functionJacLSJac5_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Heave_initialAnalyticJacobianLSJac5(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Heave_INDEX_JAC_LSJac6 6
int Heave_functionJacLSJac6_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Heave_initialAnalyticJacobianLSJac6(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Heave_INDEX_JAC_LSJac7 7
int Heave_functionJacLSJac7_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Heave_initialAnalyticJacobianLSJac7(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Heave_INDEX_JAC_H 8
int Heave_functionJacH_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Heave_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Heave_INDEX_JAC_F 9
int Heave_functionJacF_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Heave_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Heave_INDEX_JAC_D 10
int Heave_functionJacD_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Heave_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Heave_INDEX_JAC_C 11
int Heave_functionJacC_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Heave_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Heave_INDEX_JAC_B 12
int Heave_functionJacB_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Heave_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Heave_INDEX_JAC_A 13
int Heave_functionJacA_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Heave_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif

