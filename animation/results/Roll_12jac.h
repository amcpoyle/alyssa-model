/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;

#if defined(__cplusplus)
extern "C" {
#endif

/* Jacobian Variables */
#define Roll_INDEX_JAC_LSJac8 0
int Roll_functionJacLSJac8_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Roll_initialAnalyticJacobianLSJac8(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Roll_INDEX_JAC_LSJac9 1
int Roll_functionJacLSJac9_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Roll_initialAnalyticJacobianLSJac9(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Roll_INDEX_JAC_LSJac10 2
int Roll_functionJacLSJac10_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Roll_initialAnalyticJacobianLSJac10(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Roll_INDEX_JAC_LSJac11 3
int Roll_functionJacLSJac11_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Roll_initialAnalyticJacobianLSJac11(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Roll_INDEX_JAC_LSJac12 4
int Roll_functionJacLSJac12_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Roll_initialAnalyticJacobianLSJac12(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Roll_INDEX_JAC_LSJac13 5
int Roll_functionJacLSJac13_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Roll_initialAnalyticJacobianLSJac13(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Roll_INDEX_JAC_LSJac14 6
int Roll_functionJacLSJac14_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Roll_initialAnalyticJacobianLSJac14(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Roll_INDEX_JAC_LSJac15 7
int Roll_functionJacLSJac15_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Roll_initialAnalyticJacobianLSJac15(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Roll_INDEX_JAC_H 8
int Roll_functionJacH_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Roll_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Roll_INDEX_JAC_F 9
int Roll_functionJacF_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Roll_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Roll_INDEX_JAC_D 10
int Roll_functionJacD_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Roll_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Roll_INDEX_JAC_C 11
int Roll_functionJacC_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Roll_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Roll_INDEX_JAC_B 12
int Roll_functionJacB_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Roll_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);


#define Roll_INDEX_JAC_A 13
int Roll_functionJacA_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
int Roll_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif

