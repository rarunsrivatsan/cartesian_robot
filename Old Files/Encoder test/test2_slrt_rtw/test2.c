/*
 * test2.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "test2".
 *
 * Model version              : 1.71
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Fri Dec 16 02:58:05 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "test2_capi.h"
#include "test2.h"
#include "test2_private.h"

/* Block signals (auto storage) */
B_test2_T test2_B;

/* Block states (auto storage) */
DW_test2_T test2_DW;

/* Real-time model */
RT_MODEL_test2_T test2_M_;
RT_MODEL_test2_T *const test2_M = &test2_M_;
static void rate_monotonic_scheduler(void);
time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(test2_M, 1);
  UNUSED_PARAMETER(rtmNumSampTimes);
  UNUSED_PARAMETER(rtmTimingData);
  UNUSED_PARAMETER(rtmPerTaskSampleHits);
  return(-1);
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (test2_M->Timing.TaskCounters.TID[1])++;
  if ((test2_M->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [0.001s, 0.0s] */
    test2_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model output function for TID0 */
static void test2_output0(void)        /* Sample time: [0.0001s, 0.0s] */
{
  {                                    /* Sample time: [0.0001s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* ok to acquire for <S5>/S-Function */
  test2_DW.SFunction_IWORK.AcquireOK = 1;

  /* ok to acquire for <S6>/S-Function */
  test2_DW.SFunction_IWORK_j.AcquireOK = 1;

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = test2_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* Sum: '<Root>/Sum2' incorporates:
   *  Constant: '<Root>/encoder offsets1'
   */
  test2_B.Sum2 = test2_B.counts - test2_P.encoderoffsets1_Value;

  /* Gain: '<Root>/count_to_rev2' */
  test2_B.count_to_rev2 = test2_P.count_to_rev2_Gain * test2_B.Sum2;
}

/* Model update function for TID0 */
static void test2_update0(void)        /* Sample time: [0.0001s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++test2_M->Timing.clockTick0)) {
    ++test2_M->Timing.clockTickH0;
  }

  test2_M->Timing.t[0] = test2_M->Timing.clockTick0 * test2_M->Timing.stepSize0
    + test2_M->Timing.clockTickH0 * test2_M->Timing.stepSize0 * 4294967296.0;
}

/* Model output function for TID1 */
static void test2_output1(void)        /* Sample time: [0.001s, 0.0s] */
{
  /* ok to acquire for <S4>/S-Function */
  test2_DW.SFunction_IWORK_j2.AcquireOK = 1;

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 1' (dipci8255) */
  {
    SimStruct *rts = test2_M->childSfunctions[1];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 1' (dopci8255) */
  {
    SimStruct *rts = test2_M->childSfunctions[2];
    sfcnOutputs(rts, 1);
  }

  /* ok to acquire for <S7>/S-Function */
  test2_DW.SFunction_IWORK_i.AcquireOK = 1;

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 3' (dipci8255) */
  {
    SimStruct *rts = test2_M->childSfunctions[3];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 2' (dopci8255) */
  {
    SimStruct *rts = test2_M->childSfunctions[4];
    sfcnOutputs(rts, 1);
  }
}

/* Model update function for TID1 */
static void test2_update1(void)        /* Sample time: [0.001s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++test2_M->Timing.clockTick1)) {
    ++test2_M->Timing.clockTickH1;
  }

  test2_M->Timing.t[1] = test2_M->Timing.clockTick1 * test2_M->Timing.stepSize1
    + test2_M->Timing.clockTickH1 * test2_M->Timing.stepSize1 * 4294967296.0;
}

/* Model output wrapper function for compatibility with a static main program */
static void test2_output(int_T tid)
{
  switch (tid) {
   case 0 :
    test2_output0();
    break;

   case 1 :
    test2_output1();
    break;

   default :
    break;
  }
}

/* Model update wrapper function for compatibility with a static main program */
static void test2_update(int_T tid)
{
  switch (tid) {
   case 0 :
    test2_update0();
    break;

   case 1 :
    test2_update1();
    break;

   default :
    break;
  }
}

/* Model initialize function */
static void test2_initialize(void)
{
  /* S-Function Block: <S5>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,2)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("Sum2"));
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Sum2"),"%15.6f");
        rl32eSetScope(4, 4, 3);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo("Sum2"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 9, 0);
        rl32eSetTargetScope(4, 1, 0.0);
        rl32eSetTargetScope(4, 11, 0.0);
        rl32eSetTargetScope(4, 10, 0.0);
        xpceScopeAcqOK(4, &test2_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* S-Function Block: <S6>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,2)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eAddSignal(5, rl32eGetSignalNo("count_to_rev2"));
        rl32eSetScope(5, 4, 500);
        rl32eSetScope(5, 5, 0);
        rl32eSetScope(5, 6, 1);
        rl32eSetScope(5, 0, 0);
        rl32eSetScope(5, 3, rl32eGetSignalNo("count_to_rev2"));
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 0);
        rl32eSetScope(5, 9, 0);
        rl32eSetTargetScope(5, 1, 3.0);
        rl32eSetTargetScope(5, 11, 0.0);
        rl32eSetTargetScope(5, 10, 0.0);
        xpceScopeAcqOK(5, &test2_DW.SFunction_IWORK_j.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(5);
    }
  }

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = test2_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S4>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo("PCI-DDA08 12 1"));
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("PCI-DDA08 12 1"),"%15.6f");
        rl32eSetScope(2, 4, 1000);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo("PCI-DDA08 12 1"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 0.0);
        rl32eSetTargetScope(2, 11, 0.0);
        rl32eSetTargetScope(2, 10, 0.0);
        xpceScopeAcqOK(2, &test2_DW.SFunction_IWORK_j2.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 1' (dipci8255) */
  {
    SimStruct *rts = test2_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 1' (dopci8255) */
  {
    SimStruct *rts = test2_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S7>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(6)) == 0) {
      if ((i = rl32eDefScope(6,2)) != 0) {
        printf("Error creating scope 6\n");
      } else {
        rl32eAddSignal(6, rl32eGetSignalNo("PCI-DDA08 12 3"));
        rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo("PCI-DDA08 12 3"),"%15.6f");
        rl32eSetScope(6, 4, 1000);
        rl32eSetScope(6, 5, 0);
        rl32eSetScope(6, 6, 1);
        rl32eSetScope(6, 0, 0);
        rl32eSetScope(6, 3, rl32eGetSignalNo("PCI-DDA08 12 3"));
        rl32eSetScope(6, 1, 0.0);
        rl32eSetScope(6, 2, 0);
        rl32eSetScope(6, 9, 0);
        rl32eSetTargetScope(6, 1, 0.0);
        rl32eSetTargetScope(6, 11, 0.0);
        rl32eSetTargetScope(6, 10, 0.0);
        xpceScopeAcqOK(6, &test2_DW.SFunction_IWORK_i.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(6);
    }
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 3' (dipci8255) */
  {
    SimStruct *rts = test2_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 2' (dopci8255) */
  {
    SimStruct *rts = test2_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
static void test2_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = test2_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 1' (dipci8255) */
  {
    SimStruct *rts = test2_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 1' (dopci8255) */
  {
    SimStruct *rts = test2_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 3' (dipci8255) */
  {
    SimStruct *rts = test2_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 2' (dopci8255) */
  {
    SimStruct *rts = test2_M->childSfunctions[4];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  test2_output(tid);
}

void MdlUpdate(int_T tid)
{
  test2_update(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  test2_initialize();
}

void MdlTerminate(void)
{
  test2_terminate();
}

/* Registration function */
RT_MODEL_test2_T *test2(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)test2_M, 0,
                sizeof(RT_MODEL_test2_T));
  rtsiSetSolverName(&test2_M->solverInfo,"FixedStepDiscrete");
  test2_M->solverInfoPtr = (&test2_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = test2_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    test2_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    test2_M->Timing.sampleTimes = (&test2_M->Timing.sampleTimesArray[0]);
    test2_M->Timing.offsetTimes = (&test2_M->Timing.offsetTimesArray[0]);

    /* task periods */
    test2_M->Timing.sampleTimes[0] = (0.0001);
    test2_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    test2_M->Timing.offsetTimes[0] = (0.0);
    test2_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(test2_M, &test2_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = test2_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits = test2_M->Timing.perTaskSampleHitsArray;
    test2_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    test2_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(test2_M, -1);
  test2_M->Timing.stepSize0 = 0.0001;
  test2_M->Timing.stepSize1 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    test2_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(test2_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(test2_M->rtwLogInfo, (NULL));
    rtliSetLogT(test2_M->rtwLogInfo, "tout");
    rtliSetLogX(test2_M->rtwLogInfo, "");
    rtliSetLogXFinal(test2_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(test2_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(test2_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(test2_M->rtwLogInfo, 0);
    rtliSetLogDecimation(test2_M->rtwLogInfo, 1);
    rtliSetLogY(test2_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(test2_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(test2_M->rtwLogInfo, (NULL));
  }

  test2_M->solverInfoPtr = (&test2_M->solverInfo);
  test2_M->Timing.stepSize = (0.0001);
  rtsiSetFixedStepSize(&test2_M->solverInfo, 0.0001);
  rtsiSetSolverMode(&test2_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  test2_M->ModelData.blockIO = ((void *) &test2_B);
  (void) memset(((void *) &test2_B), 0,
                sizeof(B_test2_T));

  /* parameters */
  test2_M->ModelData.defaultParam = ((real_T *)&test2_P);

  /* states (dwork) */
  test2_M->ModelData.dwork = ((void *) &test2_DW);
  (void) memset((void *)&test2_DW, 0,
                sizeof(DW_test2_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  test2_InitializeDataMapInfo(test2_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &test2_M->NonInlinedSFcns.sfcnInfo;
    test2_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(test2_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &test2_M->Sizes.numSampTimes);
    test2_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(test2_M)[0]);
    test2_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(test2_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,test2_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(test2_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(test2_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(test2_M));
    rtssSetStepSizePtr(sfcnInfo, &test2_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(test2_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &test2_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &test2_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &test2_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &test2_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &test2_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &test2_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &test2_M->solverInfoPtr);
  }

  test2_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) memset((void *)&test2_M->NonInlinedSFcns.childSFunctions[0], 0,
                  5*sizeof(SimStruct));
    test2_M->childSfunctions = (&test2_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        test2_M->childSfunctions[i] = (&test2_M->
          NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: test2/<Root>/CNT32-8M(PCI) 1 (encconteccnt328mpci) */
    {
      SimStruct *rts = test2_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = test2_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = test2_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = test2_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &test2_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, test2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &test2_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &test2_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &test2_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &test2_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &test2_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &test2_B.counts));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) 1");
      ssSetPath(rts, "test2/CNT32-8M(PCI) 1");
      ssSetRTModel(rts,test2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &test2_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)test2_P.CNT328MPCI1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)test2_P.CNT328MPCI1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)test2_P.CNT328MPCI1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)test2_P.CNT328MPCI1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)test2_P.CNT328MPCI1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)test2_P.CNT328MPCI1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)test2_P.CNT328MPCI1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)test2_P.CNT328MPCI1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)test2_P.CNT328MPCI1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)test2_P.CNT328MPCI1_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)test2_P.CNT328MPCI1_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)test2_P.CNT328MPCI1_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)test2_P.CNT328MPCI1_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)test2_P.CNT328MPCI1_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)test2_P.CNT328MPCI1_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)test2_P.CNT328MPCI1_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)test2_P.CNT328MPCI1_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)test2_P.CNT328MPCI1_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)test2_P.CNT328MPCI1_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)test2_P.CNT328MPCI1_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)test2_P.CNT328MPCI1_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)test2_P.CNT328MPCI1_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)test2_P.CNT328MPCI1_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)test2_P.CNT328MPCI1_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)test2_P.CNT328MPCI1_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)test2_P.CNT328MPCI1_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)test2_P.CNT328MPCI1_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)test2_P.CNT328MPCI1_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)test2_P.CNT328MPCI1_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)test2_P.CNT328MPCI1_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)test2_P.CNT328MPCI1_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)test2_P.CNT328MPCI1_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)test2_P.CNT328MPCI1_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)test2_P.CNT328MPCI1_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)test2_P.CNT328MPCI1_P35_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &test2_DW.CNT328MPCI1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &test2_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &test2_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &test2_DW.CNT328MPCI1_IWORK[0]);
      }

      /* registration */
      encconteccnt328mpci(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: test2/<Root>/PCI-DDA08 12 1 (dipci8255) */
    {
      SimStruct *rts = test2_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = test2_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = test2_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = test2_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &test2_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, test2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &test2_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &test2_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &test2_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &test2_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &test2_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &test2_B.LimitSwitch));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 1");
      ssSetPath(rts, "test2/PCI-DDA08 12 1");
      ssSetRTModel(rts,test2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &test2_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)test2_P.PCIDDA08121_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)test2_P.PCIDDA08121_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)test2_P.PCIDDA08121_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)test2_P.PCIDDA08121_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)test2_P.PCIDDA08121_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)test2_P.PCIDDA08121_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)test2_P.PCIDDA08121_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)test2_P.PCIDDA08121_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &test2_DW.PCIDDA08121_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &test2_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &test2_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &test2_DW.PCIDDA08121_IWORK[0]);
      }

      /* registration */
      dipci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: test2/<Root>/PCI-DDA 08 12 1 (dopci8255) */
    {
      SimStruct *rts = test2_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = test2_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = test2_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = test2_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &test2_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, test2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &test2_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &test2_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &test2_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &test2_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &test2_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &test2_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &test2_B.LimitSwitch;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 1");
      ssSetPath(rts, "test2/PCI-DDA 08 12 1");
      ssSetRTModel(rts,test2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &test2_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)test2_P.PCIDDA08121_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)test2_P.PCIDDA08121_P2_Size_d);
        ssSetSFcnParam(rts, 2, (mxArray*)test2_P.PCIDDA08121_P3_Size_i);
        ssSetSFcnParam(rts, 3, (mxArray*)test2_P.PCIDDA08121_P4_Size_f);
        ssSetSFcnParam(rts, 4, (mxArray*)test2_P.PCIDDA08121_P5_Size_g);
        ssSetSFcnParam(rts, 5, (mxArray*)test2_P.PCIDDA08121_P6_Size_k);
        ssSetSFcnParam(rts, 6, (mxArray*)test2_P.PCIDDA08121_P7_Size_n);
        ssSetSFcnParam(rts, 7, (mxArray*)test2_P.PCIDDA08121_P8_Size_k);
        ssSetSFcnParam(rts, 8, (mxArray*)test2_P.PCIDDA08121_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)test2_P.PCIDDA08121_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &test2_DW.PCIDDA08121_IWORK_o[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &test2_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &test2_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &test2_DW.PCIDDA08121_IWORK_o[0]);
      }

      /* registration */
      dopci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: test2/<Root>/PCI-DDA08 12 3 (dipci8255) */
    {
      SimStruct *rts = test2_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = test2_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = test2_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = test2_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &test2_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, test2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &test2_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &test2_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &test2_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &test2_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &test2_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &test2_B.LimitSwitch_a));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 3");
      ssSetPath(rts, "test2/PCI-DDA08 12 3");
      ssSetRTModel(rts,test2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &test2_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)test2_P.PCIDDA08123_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)test2_P.PCIDDA08123_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)test2_P.PCIDDA08123_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)test2_P.PCIDDA08123_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)test2_P.PCIDDA08123_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)test2_P.PCIDDA08123_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)test2_P.PCIDDA08123_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)test2_P.PCIDDA08123_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &test2_DW.PCIDDA08123_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &test2_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &test2_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &test2_DW.PCIDDA08123_IWORK[0]);
      }

      /* registration */
      dipci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: test2/<Root>/PCI-DDA 08 12 2 (dopci8255) */
    {
      SimStruct *rts = test2_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = test2_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = test2_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = test2_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &test2_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, test2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &test2_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &test2_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &test2_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &test2_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &test2_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &test2_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &test2_B.LimitSwitch_a;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 2");
      ssSetPath(rts, "test2/PCI-DDA 08 12 2");
      ssSetRTModel(rts,test2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &test2_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)test2_P.PCIDDA08122_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)test2_P.PCIDDA08122_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)test2_P.PCIDDA08122_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)test2_P.PCIDDA08122_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)test2_P.PCIDDA08122_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)test2_P.PCIDDA08122_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)test2_P.PCIDDA08122_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)test2_P.PCIDDA08122_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)test2_P.PCIDDA08122_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)test2_P.PCIDDA08122_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &test2_DW.PCIDDA08122_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &test2_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &test2_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &test2_DW.PCIDDA08122_IWORK[0]);
      }

      /* registration */
      dopci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  test2_M->Sizes.numContStates = (0);  /* Number of continuous states */
  test2_M->Sizes.numY = (0);           /* Number of model outputs */
  test2_M->Sizes.numU = (0);           /* Number of model inputs */
  test2_M->Sizes.sysDirFeedThru = (0); /* The model is not direct feedthrough */
  test2_M->Sizes.numSampTimes = (2);   /* Number of sample times */
  test2_M->Sizes.numBlocks = (12);     /* Number of blocks */
  test2_M->Sizes.numBlockIO = (5);     /* Number of block outputs */
  test2_M->Sizes.numBlockPrms = (224); /* Sum of parameter "widths" */
  return test2_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
