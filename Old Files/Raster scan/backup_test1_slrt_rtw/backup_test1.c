/*
 * backup_test1.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "backup_test1".
 *
 * Model version              : 1.147
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Mon Nov 28 16:40:16 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "backup_test1_capi.h"
#include "backup_test1.h"
#include "backup_test1_private.h"

/* Block signals (auto storage) */
B_backup_test1_T backup_test1_B;

/* Block states (auto storage) */
DW_backup_test1_T backup_test1_DW;

/* Real-time model */
RT_MODEL_backup_test1_T backup_test1_M_;
RT_MODEL_backup_test1_T *const backup_test1_M = &backup_test1_M_;

/* Model output function */
static void backup_test1_output(void)
{
  /* Constant: '<Root>/Constant' */
  backup_test1_B.Constant = backup_test1_P.Constant_Value;

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 2' (dipci8255) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[2];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 1' (dipci8255) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[3];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[4];
    sfcnOutputs(rts, 0);
  }
}

/* Model update function */
static void backup_test1_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++backup_test1_M->Timing.clockTick0)) {
    ++backup_test1_M->Timing.clockTickH0;
  }

  backup_test1_M->Timing.t[0] = backup_test1_M->Timing.clockTick0 *
    backup_test1_M->Timing.stepSize0 + backup_test1_M->Timing.clockTickH0 *
    backup_test1_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void backup_test1_initialize(void)
{
  /* Start for Constant: '<Root>/Constant' */
  backup_test1_B.Constant = backup_test1_P.Constant_Value;

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 2' (dipci8255) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 1' (dipci8255) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
static void backup_test1_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 2' (dipci8255) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 1' (dipci8255) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = backup_test1_M->childSfunctions[4];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  backup_test1_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  backup_test1_update();
  UNUSED_PARAMETER(tid);
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
  backup_test1_initialize();
}

void MdlTerminate(void)
{
  backup_test1_terminate();
}

/* Registration function */
RT_MODEL_backup_test1_T *backup_test1(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)backup_test1_M, 0,
                sizeof(RT_MODEL_backup_test1_T));
  rtsiSetSolverName(&backup_test1_M->solverInfo,"FixedStepDiscrete");
  backup_test1_M->solverInfoPtr = (&backup_test1_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = backup_test1_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    backup_test1_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    backup_test1_M->Timing.sampleTimes =
      (&backup_test1_M->Timing.sampleTimesArray[0]);
    backup_test1_M->Timing.offsetTimes =
      (&backup_test1_M->Timing.offsetTimesArray[0]);

    /* task periods */
    backup_test1_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    backup_test1_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(backup_test1_M, &backup_test1_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = backup_test1_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    backup_test1_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(backup_test1_M, -1);
  backup_test1_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    backup_test1_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(backup_test1_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(backup_test1_M->rtwLogInfo, (NULL));
    rtliSetLogT(backup_test1_M->rtwLogInfo, "tout");
    rtliSetLogX(backup_test1_M->rtwLogInfo, "");
    rtliSetLogXFinal(backup_test1_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(backup_test1_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(backup_test1_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(backup_test1_M->rtwLogInfo, 0);
    rtliSetLogDecimation(backup_test1_M->rtwLogInfo, 1);
    rtliSetLogY(backup_test1_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(backup_test1_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(backup_test1_M->rtwLogInfo, (NULL));
  }

  backup_test1_M->solverInfoPtr = (&backup_test1_M->solverInfo);
  backup_test1_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&backup_test1_M->solverInfo, 0.001);
  rtsiSetSolverMode(&backup_test1_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  backup_test1_M->ModelData.blockIO = ((void *) &backup_test1_B);
  (void) memset(((void *) &backup_test1_B), 0,
                sizeof(B_backup_test1_T));

  /* parameters */
  backup_test1_M->ModelData.defaultParam = ((real_T *)&backup_test1_P);

  /* states (dwork) */
  backup_test1_M->ModelData.dwork = ((void *) &backup_test1_DW);
  (void) memset((void *)&backup_test1_DW, 0,
                sizeof(DW_backup_test1_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  backup_test1_InitializeDataMapInfo(backup_test1_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &backup_test1_M->NonInlinedSFcns.sfcnInfo;
    backup_test1_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(backup_test1_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &backup_test1_M->Sizes.numSampTimes);
    backup_test1_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (backup_test1_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,backup_test1_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(backup_test1_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(backup_test1_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(backup_test1_M));
    rtssSetStepSizePtr(sfcnInfo, &backup_test1_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(backup_test1_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &backup_test1_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &backup_test1_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &backup_test1_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &backup_test1_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &backup_test1_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &backup_test1_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &backup_test1_M->solverInfoPtr);
  }

  backup_test1_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) memset((void *)&backup_test1_M->NonInlinedSFcns.childSFunctions[0], 0,
                  5*sizeof(SimStruct));
    backup_test1_M->childSfunctions =
      (&backup_test1_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        backup_test1_M->childSfunctions[i] =
          (&backup_test1_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: backup_test1/<Root>/PCI-DDA08 12  (dacbpcidda0x12) */
    {
      SimStruct *rts = backup_test1_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = backup_test1_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = backup_test1_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = backup_test1_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &backup_test1_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, backup_test1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &backup_test1_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &backup_test1_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &backup_test1_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &backup_test1_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &backup_test1_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &backup_test1_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &backup_test1_B.Constant;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &backup_test1_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = &backup_test1_B.Constant;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 ");
      ssSetPath(rts, "backup_test1/PCI-DDA08 12 ");
      ssSetRTModel(rts,backup_test1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &backup_test1_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)backup_test1_P.PCIDDA0812_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)backup_test1_P.PCIDDA0812_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)backup_test1_P.PCIDDA0812_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)backup_test1_P.PCIDDA0812_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)backup_test1_P.PCIDDA0812_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)backup_test1_P.PCIDDA0812_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)backup_test1_P.PCIDDA0812_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &backup_test1_DW.PCIDDA0812_RWORK[0]);
      ssSetIWork(rts, (int_T *) &backup_test1_DW.PCIDDA0812_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &backup_test1_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &backup_test1_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 16);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &backup_test1_DW.PCIDDA0812_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 4);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &backup_test1_DW.PCIDDA0812_IWORK[0]);
      }

      /* registration */
      dacbpcidda0x12(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: backup_test1/<Root>/PCI-DDA08 12 2 (dipci8255) */
    {
      SimStruct *rts = backup_test1_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = backup_test1_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = backup_test1_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = backup_test1_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &backup_test1_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, backup_test1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &backup_test1_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &backup_test1_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &backup_test1_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &backup_test1_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &backup_test1_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &backup_test1_B.PCIDDA08122));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 2");
      ssSetPath(rts, "backup_test1/PCI-DDA08 12 2");
      ssSetRTModel(rts,backup_test1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &backup_test1_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)backup_test1_P.PCIDDA08122_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)backup_test1_P.PCIDDA08122_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)backup_test1_P.PCIDDA08122_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)backup_test1_P.PCIDDA08122_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)backup_test1_P.PCIDDA08122_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)backup_test1_P.PCIDDA08122_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)backup_test1_P.PCIDDA08122_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)backup_test1_P.PCIDDA08122_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &backup_test1_DW.PCIDDA08122_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &backup_test1_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &backup_test1_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &backup_test1_DW.PCIDDA08122_IWORK[0]);
      }

      /* registration */
      dipci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: backup_test1/<Root>/PCI-DDA 08 12 3 (dopci8255) */
    {
      SimStruct *rts = backup_test1_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = backup_test1_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = backup_test1_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = backup_test1_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &backup_test1_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, backup_test1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &backup_test1_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &backup_test1_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &backup_test1_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &backup_test1_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &backup_test1_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &backup_test1_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &backup_test1_B.PCIDDA08122;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 3");
      ssSetPath(rts, "backup_test1/PCI-DDA 08 12 3");
      ssSetRTModel(rts,backup_test1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &backup_test1_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)backup_test1_P.PCIDDA08123_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)backup_test1_P.PCIDDA08123_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)backup_test1_P.PCIDDA08123_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)backup_test1_P.PCIDDA08123_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)backup_test1_P.PCIDDA08123_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)backup_test1_P.PCIDDA08123_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)backup_test1_P.PCIDDA08123_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)backup_test1_P.PCIDDA08123_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)backup_test1_P.PCIDDA08123_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)backup_test1_P.PCIDDA08123_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &backup_test1_DW.PCIDDA08123_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &backup_test1_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &backup_test1_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &backup_test1_DW.PCIDDA08123_IWORK[0]);
      }

      /* registration */
      dopci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: backup_test1/<Root>/PCI-DDA08 12 1 (dipci8255) */
    {
      SimStruct *rts = backup_test1_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = backup_test1_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = backup_test1_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = backup_test1_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &backup_test1_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, backup_test1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &backup_test1_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &backup_test1_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &backup_test1_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &backup_test1_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &backup_test1_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &backup_test1_B.PCIDDA08121));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 1");
      ssSetPath(rts, "backup_test1/PCI-DDA08 12 1");
      ssSetRTModel(rts,backup_test1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &backup_test1_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)backup_test1_P.PCIDDA08121_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)backup_test1_P.PCIDDA08121_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)backup_test1_P.PCIDDA08121_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)backup_test1_P.PCIDDA08121_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)backup_test1_P.PCIDDA08121_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)backup_test1_P.PCIDDA08121_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)backup_test1_P.PCIDDA08121_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)backup_test1_P.PCIDDA08121_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &backup_test1_DW.PCIDDA08121_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &backup_test1_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &backup_test1_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &backup_test1_DW.PCIDDA08121_IWORK[0]);
      }

      /* registration */
      dipci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: backup_test1/<Root>/PCI-DDA 08 12 4 (dopci8255) */
    {
      SimStruct *rts = backup_test1_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = backup_test1_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = backup_test1_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = backup_test1_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &backup_test1_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, backup_test1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &backup_test1_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &backup_test1_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &backup_test1_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &backup_test1_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &backup_test1_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &backup_test1_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &backup_test1_B.PCIDDA08121;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 4");
      ssSetPath(rts, "backup_test1/PCI-DDA 08 12 4");
      ssSetRTModel(rts,backup_test1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &backup_test1_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)backup_test1_P.PCIDDA08124_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)backup_test1_P.PCIDDA08124_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)backup_test1_P.PCIDDA08124_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)backup_test1_P.PCIDDA08124_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)backup_test1_P.PCIDDA08124_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)backup_test1_P.PCIDDA08124_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)backup_test1_P.PCIDDA08124_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)backup_test1_P.PCIDDA08124_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)backup_test1_P.PCIDDA08124_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)backup_test1_P.PCIDDA08124_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &backup_test1_DW.PCIDDA08124_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &backup_test1_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &backup_test1_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &backup_test1_DW.PCIDDA08124_IWORK[0]);
      }

      /* registration */
      dopci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  backup_test1_M->Sizes.numContStates = (0);/* Number of continuous states */
  backup_test1_M->Sizes.numY = (0);    /* Number of model outputs */
  backup_test1_M->Sizes.numU = (0);    /* Number of model inputs */
  backup_test1_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  backup_test1_M->Sizes.numSampTimes = (1);/* Number of sample times */
  backup_test1_M->Sizes.numBlocks = (6);/* Number of blocks */
  backup_test1_M->Sizes.numBlockIO = (3);/* Number of block outputs */
  backup_test1_M->Sizes.numBlockPrms = (142);/* Sum of parameter "widths" */
  return backup_test1_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
