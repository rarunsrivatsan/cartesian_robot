/*
 * rx_target.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "rx_target".
 *
 * Model version              : 1.8
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Sat Nov 19 20:32:21 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "rx_target_capi.h"
#include "rx_target.h"
#include "rx_target_private.h"

/* Block signals (auto storage) */
B_rx_target_T rx_target_B;

/* Block states (auto storage) */
DW_rx_target_T rx_target_DW;

/* Real-time model */
RT_MODEL_rx_target_T rx_target_M_;
RT_MODEL_rx_target_T *const rx_target_M = &rx_target_M_;

/* Model output function */
static void rx_target_output(void)
{
  int32_T RDTPacket[9];
  int32_T j;
  int32_T i;
  static const int32_T y[9] = { 1000000, 1000000, 1000000, 25000000, 25000000,
    35000000, 250000000, 250000000, 250000000 };

  real_T RDTPacket_0[9];

  /* ok to acquire for <S3>/S-Function */
  rx_target_DW.SFunction_IWORK.AcquireOK = 1;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:20' */
  /* '<S1>:1:5' */
  for (i = 0; i < 9; i++) {
    RDTPacket[i] = 0;
  }

  /* '<S1>:1:7' */
  for (i = 0; i < 9; i++) {
    /* '<S1>:1:7' */
    /* display(data(i*4)); */
    /* display(int32(data(i*4))); */
    /* '<S1>:1:10' */
    /* '<S1>:1:11' */
    RDTPacket[8 - i] = rx_target_B.UDPReceive1[(8 - i) << 2];

    /* '<S1>:1:12' */
    for (j = ((8 - i) << 2) + 1; j + 1 < ((8 - i) << 2) + 5; j++) {
      /* '<S1>:1:13' */
      /* '<S1>:1:14' */
      /* '<S1>:1:15' */
      RDTPacket[8 - i] = RDTPacket[8 - i] << 8 | rx_target_B.UDPReceive1[j];

      /* '<S1>:1:17' */
    }

    /* '<S1>:1:7' */
  }

  /* '<S1>:1:20' */
  /* '<S1>:1:21' */
  for (i = 0; i < 9; i++) {
    RDTPacket_0[i] = (real_T)RDTPacket[i] / (real_T)y[i];
  }

  for (i = 0; i < 6; i++) {
    rx_target_B.output[i] = RDTPacket_0[3 + i];
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
}

/* Model update function */
static void rx_target_update(void)
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
  if (!(++rx_target_M->Timing.clockTick0)) {
    ++rx_target_M->Timing.clockTickH0;
  }

  rx_target_M->Timing.t[0] = rx_target_M->Timing.clockTick0 *
    rx_target_M->Timing.stepSize0 + rx_target_M->Timing.clockTickH0 *
    rx_target_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void rx_target_initialize(void)
{
  /* S-Function Block: <S3>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("MATLAB Function/s1"));
        rl32eAddSignal(1, rl32eGetSignalNo("MATLAB Function/s2"));
        rl32eAddSignal(1, rl32eGetSignalNo("MATLAB Function/s3"));
        rl32eAddSignal(1, rl32eGetSignalNo("MATLAB Function/s4"));
        rl32eAddSignal(1, rl32eGetSignalNo("MATLAB Function/s5"));
        rl32eAddSignal(1, rl32eGetSignalNo("MATLAB Function/s6"));
        rl32eSetScope(1, 4, 1000);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("MATLAB Function/s1"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        rl32eSetTargetScope(1, 1, 2.0);
        rl32eSetTargetScope(1, 11, 0.0);
        rl32eSetTargetScope(1, 10, 0.0);
        xpceScopeAcqOK(1, &rx_target_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }
}

/* Model terminate function */
static void rx_target_terminate(void)
{
  /* (no terminate code required) */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  rx_target_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  rx_target_update();
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
  rx_target_initialize();
}

void MdlTerminate(void)
{
  rx_target_terminate();
}

/* Registration function */
RT_MODEL_rx_target_T *rx_target(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)rx_target_M, 0,
                sizeof(RT_MODEL_rx_target_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = rx_target_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    rx_target_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    rx_target_M->Timing.sampleTimes = (&rx_target_M->Timing.sampleTimesArray[0]);
    rx_target_M->Timing.offsetTimes = (&rx_target_M->Timing.offsetTimesArray[0]);

    /* task periods */
    rx_target_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    rx_target_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(rx_target_M, &rx_target_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = rx_target_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    rx_target_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(rx_target_M, -1);
  rx_target_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    rx_target_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(rx_target_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(rx_target_M->rtwLogInfo, (NULL));
    rtliSetLogT(rx_target_M->rtwLogInfo, "tout");
    rtliSetLogX(rx_target_M->rtwLogInfo, "");
    rtliSetLogXFinal(rx_target_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(rx_target_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(rx_target_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(rx_target_M->rtwLogInfo, 0);
    rtliSetLogDecimation(rx_target_M->rtwLogInfo, 1);
    rtliSetLogY(rx_target_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(rx_target_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(rx_target_M->rtwLogInfo, (NULL));
  }

  rx_target_M->solverInfoPtr = (&rx_target_M->solverInfo);
  rx_target_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&rx_target_M->solverInfo, 0.001);
  rtsiSetSolverMode(&rx_target_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  rx_target_M->ModelData.blockIO = ((void *) &rx_target_B);
  (void) memset(((void *) &rx_target_B), 0,
                sizeof(B_rx_target_T));

  /* states (dwork) */
  rx_target_M->ModelData.dwork = ((void *) &rx_target_DW);
  (void) memset((void *)&rx_target_DW, 0,
                sizeof(DW_rx_target_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  rx_target_InitializeDataMapInfo(rx_target_M);

  /* Initialize Sizes */
  rx_target_M->Sizes.numContStates = (0);/* Number of continuous states */
  rx_target_M->Sizes.numY = (0);       /* Number of model outputs */
  rx_target_M->Sizes.numU = (0);       /* Number of model inputs */
  rx_target_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  rx_target_M->Sizes.numSampTimes = (1);/* Number of sample times */
  rx_target_M->Sizes.numBlocks = (5);  /* Number of blocks */
  rx_target_M->Sizes.numBlockIO = (2); /* Number of block outputs */
  return rx_target_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
