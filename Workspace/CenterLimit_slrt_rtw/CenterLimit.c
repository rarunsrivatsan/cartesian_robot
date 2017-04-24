/*
 * CenterLimit.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "CenterLimit".
 *
 * Model version              : 1.169
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Sat Apr 22 16:56:21 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "CenterLimit_capi.h"
#include "CenterLimit.h"
#include "CenterLimit_private.h"

/* Block signals (auto storage) */
B_CenterLimit_T CenterLimit_B;

/* Block states (auto storage) */
DW_CenterLimit_T CenterLimit_DW;

/* Real-time model */
RT_MODEL_CenterLimit_T CenterLimit_M_;
RT_MODEL_CenterLimit_T *const CenterLimit_M = &CenterLimit_M_;

/* Model output function */
static void CenterLimit_output(void)
{
  /* Constant: '<Root>/Constant' */
  CenterLimit_B.Constant = CenterLimit_P.Constant_Value;

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 3' (dipci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 1' (dopci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[2];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 2' (dipci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[3];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[4];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 1' (dipci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[5];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[6];
    sfcnOutputs(rts, 0);
  }
}

/* Model update function */
static void CenterLimit_update(void)
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
  if (!(++CenterLimit_M->Timing.clockTick0)) {
    ++CenterLimit_M->Timing.clockTickH0;
  }

  CenterLimit_M->Timing.t[0] = CenterLimit_M->Timing.clockTick0 *
    CenterLimit_M->Timing.stepSize0 + CenterLimit_M->Timing.clockTickH0 *
    CenterLimit_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void CenterLimit_initialize(void)
{
  /* Start for Constant: '<Root>/Constant' */
  CenterLimit_B.Constant = CenterLimit_P.Constant_Value;

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 3' (dipci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 1' (dopci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 2' (dipci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 1' (dipci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
static void CenterLimit_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 3' (dipci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 1' (dopci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 2' (dipci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 1' (dipci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = CenterLimit_M->childSfunctions[6];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  CenterLimit_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  CenterLimit_update();
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
  CenterLimit_initialize();
}

void MdlTerminate(void)
{
  CenterLimit_terminate();
}

/* Registration function */
RT_MODEL_CenterLimit_T *CenterLimit(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)CenterLimit_M, 0,
                sizeof(RT_MODEL_CenterLimit_T));
  rtsiSetSolverName(&CenterLimit_M->solverInfo,"FixedStepDiscrete");
  CenterLimit_M->solverInfoPtr = (&CenterLimit_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = CenterLimit_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    CenterLimit_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    CenterLimit_M->Timing.sampleTimes = (&CenterLimit_M->
      Timing.sampleTimesArray[0]);
    CenterLimit_M->Timing.offsetTimes = (&CenterLimit_M->
      Timing.offsetTimesArray[0]);

    /* task periods */
    CenterLimit_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    CenterLimit_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(CenterLimit_M, &CenterLimit_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = CenterLimit_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    CenterLimit_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(CenterLimit_M, -1);
  CenterLimit_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    CenterLimit_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(CenterLimit_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(CenterLimit_M->rtwLogInfo, (NULL));
    rtliSetLogT(CenterLimit_M->rtwLogInfo, "tout");
    rtliSetLogX(CenterLimit_M->rtwLogInfo, "");
    rtliSetLogXFinal(CenterLimit_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(CenterLimit_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(CenterLimit_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(CenterLimit_M->rtwLogInfo, 0);
    rtliSetLogDecimation(CenterLimit_M->rtwLogInfo, 1);
    rtliSetLogY(CenterLimit_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(CenterLimit_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(CenterLimit_M->rtwLogInfo, (NULL));
  }

  CenterLimit_M->solverInfoPtr = (&CenterLimit_M->solverInfo);
  CenterLimit_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&CenterLimit_M->solverInfo, 0.001);
  rtsiSetSolverMode(&CenterLimit_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  CenterLimit_M->ModelData.blockIO = ((void *) &CenterLimit_B);
  (void) memset(((void *) &CenterLimit_B), 0,
                sizeof(B_CenterLimit_T));

  /* parameters */
  CenterLimit_M->ModelData.defaultParam = ((real_T *)&CenterLimit_P);

  /* states (dwork) */
  CenterLimit_M->ModelData.dwork = ((void *) &CenterLimit_DW);
  (void) memset((void *)&CenterLimit_DW, 0,
                sizeof(DW_CenterLimit_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  CenterLimit_InitializeDataMapInfo(CenterLimit_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &CenterLimit_M->NonInlinedSFcns.sfcnInfo;
    CenterLimit_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(CenterLimit_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &CenterLimit_M->Sizes.numSampTimes);
    CenterLimit_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(CenterLimit_M)
      [0]);
    rtssSetTPtrPtr(sfcnInfo,CenterLimit_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(CenterLimit_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(CenterLimit_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(CenterLimit_M));
    rtssSetStepSizePtr(sfcnInfo, &CenterLimit_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(CenterLimit_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &CenterLimit_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &CenterLimit_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &CenterLimit_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &CenterLimit_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &CenterLimit_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &CenterLimit_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &CenterLimit_M->solverInfoPtr);
  }

  CenterLimit_M->Sizes.numSFcns = (7);

  /* register each child */
  {
    (void) memset((void *)&CenterLimit_M->NonInlinedSFcns.childSFunctions[0], 0,
                  7*sizeof(SimStruct));
    CenterLimit_M->childSfunctions =
      (&CenterLimit_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 7; i++) {
        CenterLimit_M->childSfunctions[i] =
          (&CenterLimit_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: CenterLimit/<Root>/PCI-DDA08 12  (dacbpcidda0x12) */
    {
      SimStruct *rts = CenterLimit_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = CenterLimit_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = CenterLimit_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = CenterLimit_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &CenterLimit_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, CenterLimit_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &CenterLimit_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &CenterLimit_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &CenterLimit_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &CenterLimit_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &CenterLimit_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &CenterLimit_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &CenterLimit_B.Constant;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &CenterLimit_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = &CenterLimit_B.Constant;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &CenterLimit_M->NonInlinedSFcns.Sfcn0.UPtrs2;
          sfcnUPtrs[0] = &CenterLimit_B.Constant;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 ");
      ssSetPath(rts, "CenterLimit/PCI-DDA08 12 ");
      ssSetRTModel(rts,CenterLimit_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &CenterLimit_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)CenterLimit_P.PCIDDA0812_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)CenterLimit_P.PCIDDA0812_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)CenterLimit_P.PCIDDA0812_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)CenterLimit_P.PCIDDA0812_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)CenterLimit_P.PCIDDA0812_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)CenterLimit_P.PCIDDA0812_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)CenterLimit_P.PCIDDA0812_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &CenterLimit_DW.PCIDDA0812_RWORK[0]);
      ssSetIWork(rts, (int_T *) &CenterLimit_DW.PCIDDA0812_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &CenterLimit_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &CenterLimit_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 16);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &CenterLimit_DW.PCIDDA0812_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 4);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &CenterLimit_DW.PCIDDA0812_IWORK[0]);
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
      _ssSetInputPortConnected(rts, 2, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: CenterLimit/<Root>/PCI-DDA08 12 3 (dipci8255) */
    {
      SimStruct *rts = CenterLimit_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = CenterLimit_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = CenterLimit_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = CenterLimit_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &CenterLimit_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, CenterLimit_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &CenterLimit_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &CenterLimit_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &CenterLimit_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &CenterLimit_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &CenterLimit_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &CenterLimit_B.PCIDDA08123));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 3");
      ssSetPath(rts, "CenterLimit/PCI-DDA08 12 3");
      ssSetRTModel(rts,CenterLimit_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &CenterLimit_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)CenterLimit_P.PCIDDA08123_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)CenterLimit_P.PCIDDA08123_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)CenterLimit_P.PCIDDA08123_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)CenterLimit_P.PCIDDA08123_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)CenterLimit_P.PCIDDA08123_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)CenterLimit_P.PCIDDA08123_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)CenterLimit_P.PCIDDA08123_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)CenterLimit_P.PCIDDA08123_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &CenterLimit_DW.PCIDDA08123_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &CenterLimit_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &CenterLimit_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &CenterLimit_DW.PCIDDA08123_IWORK[0]);
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

    /* Level2 S-Function Block: CenterLimit/<Root>/PCI-DDA 08 12 1 (dopci8255) */
    {
      SimStruct *rts = CenterLimit_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = CenterLimit_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = CenterLimit_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = CenterLimit_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &CenterLimit_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, CenterLimit_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &CenterLimit_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &CenterLimit_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &CenterLimit_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &CenterLimit_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &CenterLimit_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &CenterLimit_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &CenterLimit_B.PCIDDA08123;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 1");
      ssSetPath(rts, "CenterLimit/PCI-DDA 08 12 1");
      ssSetRTModel(rts,CenterLimit_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &CenterLimit_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)CenterLimit_P.PCIDDA08121_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)CenterLimit_P.PCIDDA08121_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)CenterLimit_P.PCIDDA08121_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)CenterLimit_P.PCIDDA08121_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)CenterLimit_P.PCIDDA08121_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)CenterLimit_P.PCIDDA08121_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)CenterLimit_P.PCIDDA08121_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)CenterLimit_P.PCIDDA08121_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)CenterLimit_P.PCIDDA08121_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)CenterLimit_P.PCIDDA08121_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &CenterLimit_DW.PCIDDA08121_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &CenterLimit_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &CenterLimit_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &CenterLimit_DW.PCIDDA08121_IWORK[0]);
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

    /* Level2 S-Function Block: CenterLimit/<Root>/PCI-DDA08 12 2 (dipci8255) */
    {
      SimStruct *rts = CenterLimit_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = CenterLimit_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = CenterLimit_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = CenterLimit_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &CenterLimit_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, CenterLimit_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &CenterLimit_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &CenterLimit_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &CenterLimit_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &CenterLimit_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &CenterLimit_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &CenterLimit_B.PCIDDA08122));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 2");
      ssSetPath(rts, "CenterLimit/PCI-DDA08 12 2");
      ssSetRTModel(rts,CenterLimit_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &CenterLimit_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)CenterLimit_P.PCIDDA08122_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)CenterLimit_P.PCIDDA08122_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)CenterLimit_P.PCIDDA08122_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)CenterLimit_P.PCIDDA08122_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)CenterLimit_P.PCIDDA08122_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)CenterLimit_P.PCIDDA08122_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)CenterLimit_P.PCIDDA08122_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)CenterLimit_P.PCIDDA08122_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &CenterLimit_DW.PCIDDA08122_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &CenterLimit_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &CenterLimit_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &CenterLimit_DW.PCIDDA08122_IWORK[0]);
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

    /* Level2 S-Function Block: CenterLimit/<Root>/PCI-DDA 08 12 3 (dopci8255) */
    {
      SimStruct *rts = CenterLimit_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = CenterLimit_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = CenterLimit_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = CenterLimit_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &CenterLimit_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, CenterLimit_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &CenterLimit_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &CenterLimit_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &CenterLimit_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &CenterLimit_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &CenterLimit_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &CenterLimit_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &CenterLimit_B.PCIDDA08122;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 3");
      ssSetPath(rts, "CenterLimit/PCI-DDA 08 12 3");
      ssSetRTModel(rts,CenterLimit_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &CenterLimit_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)CenterLimit_P.PCIDDA08123_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)CenterLimit_P.PCIDDA08123_P2_Size_f);
        ssSetSFcnParam(rts, 2, (mxArray*)CenterLimit_P.PCIDDA08123_P3_Size_f);
        ssSetSFcnParam(rts, 3, (mxArray*)CenterLimit_P.PCIDDA08123_P4_Size_g);
        ssSetSFcnParam(rts, 4, (mxArray*)CenterLimit_P.PCIDDA08123_P5_Size_h);
        ssSetSFcnParam(rts, 5, (mxArray*)CenterLimit_P.PCIDDA08123_P6_Size_d);
        ssSetSFcnParam(rts, 6, (mxArray*)CenterLimit_P.PCIDDA08123_P7_Size_l);
        ssSetSFcnParam(rts, 7, (mxArray*)CenterLimit_P.PCIDDA08123_P8_Size_m);
        ssSetSFcnParam(rts, 8, (mxArray*)CenterLimit_P.PCIDDA08123_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)CenterLimit_P.PCIDDA08123_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &CenterLimit_DW.PCIDDA08123_IWORK_o[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &CenterLimit_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &CenterLimit_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &CenterLimit_DW.PCIDDA08123_IWORK_o[0]);
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

    /* Level2 S-Function Block: CenterLimit/<Root>/PCI-DDA08 12 1 (dipci8255) */
    {
      SimStruct *rts = CenterLimit_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = CenterLimit_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = CenterLimit_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = CenterLimit_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &CenterLimit_M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, CenterLimit_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &CenterLimit_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &CenterLimit_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &CenterLimit_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &CenterLimit_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &CenterLimit_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &CenterLimit_B.PCIDDA08121));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 1");
      ssSetPath(rts, "CenterLimit/PCI-DDA08 12 1");
      ssSetRTModel(rts,CenterLimit_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &CenterLimit_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)CenterLimit_P.PCIDDA08121_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)CenterLimit_P.PCIDDA08121_P2_Size_o);
        ssSetSFcnParam(rts, 2, (mxArray*)CenterLimit_P.PCIDDA08121_P3_Size_c);
        ssSetSFcnParam(rts, 3, (mxArray*)CenterLimit_P.PCIDDA08121_P4_Size_l);
        ssSetSFcnParam(rts, 4, (mxArray*)CenterLimit_P.PCIDDA08121_P5_Size_e);
        ssSetSFcnParam(rts, 5, (mxArray*)CenterLimit_P.PCIDDA08121_P6_Size_g);
        ssSetSFcnParam(rts, 6, (mxArray*)CenterLimit_P.PCIDDA08121_P7_Size_e);
        ssSetSFcnParam(rts, 7, (mxArray*)CenterLimit_P.PCIDDA08121_P8_Size_b);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &CenterLimit_DW.PCIDDA08121_IWORK_m[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &CenterLimit_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &CenterLimit_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &CenterLimit_DW.PCIDDA08121_IWORK_m[0]);
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

    /* Level2 S-Function Block: CenterLimit/<Root>/PCI-DDA 08 12 4 (dopci8255) */
    {
      SimStruct *rts = CenterLimit_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = CenterLimit_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = CenterLimit_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = CenterLimit_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &CenterLimit_M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, CenterLimit_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &CenterLimit_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &CenterLimit_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &CenterLimit_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &CenterLimit_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &CenterLimit_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &CenterLimit_M->NonInlinedSFcns.Sfcn6.UPtrs0;
          sfcnUPtrs[0] = &CenterLimit_B.PCIDDA08121;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 4");
      ssSetPath(rts, "CenterLimit/PCI-DDA 08 12 4");
      ssSetRTModel(rts,CenterLimit_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &CenterLimit_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)CenterLimit_P.PCIDDA08124_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)CenterLimit_P.PCIDDA08124_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)CenterLimit_P.PCIDDA08124_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)CenterLimit_P.PCIDDA08124_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)CenterLimit_P.PCIDDA08124_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)CenterLimit_P.PCIDDA08124_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)CenterLimit_P.PCIDDA08124_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)CenterLimit_P.PCIDDA08124_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)CenterLimit_P.PCIDDA08124_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)CenterLimit_P.PCIDDA08124_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &CenterLimit_DW.PCIDDA08124_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &CenterLimit_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &CenterLimit_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &CenterLimit_DW.PCIDDA08124_IWORK[0]);
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
  CenterLimit_M->Sizes.numContStates = (0);/* Number of continuous states */
  CenterLimit_M->Sizes.numY = (0);     /* Number of model outputs */
  CenterLimit_M->Sizes.numU = (0);     /* Number of model inputs */
  CenterLimit_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  CenterLimit_M->Sizes.numSampTimes = (1);/* Number of sample times */
  CenterLimit_M->Sizes.numBlocks = (8);/* Number of blocks */
  CenterLimit_M->Sizes.numBlockIO = (4);/* Number of block outputs */
  CenterLimit_M->Sizes.numBlockPrms = (204);/* Sum of parameter "widths" */
  return CenterLimit_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
