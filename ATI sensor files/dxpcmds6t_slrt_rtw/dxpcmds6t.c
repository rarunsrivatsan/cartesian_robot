/*
 * dxpcmds6t.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "dxpcmds6t".
 *
 * Model version              : 1.25
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Sat Nov 19 19:12:22 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "dxpcmds6t_capi.h"
#include "dxpcmds6t.h"
#include "dxpcmds6t_private.h"

/* Tasks */
RT_MODEL_dxpcmds6t_T task_M_[7];
RT_MODEL_dxpcmds6t_T *task_M[7];

/* Block signals (auto storage) */
B_dxpcmds6t_T dxpcmds6t_B;

/* Block states (auto storage) */
DW_dxpcmds6t_T dxpcmds6t_DW;

/* Real-time model */
RT_MODEL_dxpcmds6t_T dxpcmds6t_M_;
RT_MODEL_dxpcmds6t_T *const dxpcmds6t_M = &dxpcmds6t_M_;
time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(dxpcmds6t_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(dxpcmds6t_M, 2);
  rtmSampleHitPtr[3] = rtmStepTask(dxpcmds6t_M, 3);
  UNUSED_PARAMETER(rtmNumSampTimes);
  UNUSED_PARAMETER(rtmTimingData);
  UNUSED_PARAMETER(rtmPerTaskSampleHits);
  return(-1);
}

/*   This function updates active task counters and model execution time. */
void AdvanceTaskCounters(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (dxpcmds6t_M->Timing.TaskCounters.TID[1])++;
  if ((dxpcmds6t_M->Timing.TaskCounters.TID[1]) > 1) {/* Sample time: [0.002s, 0.0s] */
    dxpcmds6t_M->Timing.TaskCounters.TID[1] = 0;
  }

  (dxpcmds6t_M->Timing.TaskCounters.TID[2])++;
  if ((dxpcmds6t_M->Timing.TaskCounters.TID[2]) > 2) {/* Sample time: [0.003s, 0.0s] */
    dxpcmds6t_M->Timing.TaskCounters.TID[2] = 0;
  }

  (dxpcmds6t_M->Timing.TaskCounters.TID[3])++;
  if ((dxpcmds6t_M->Timing.TaskCounters.TID[3]) > 3) {/* Sample time: [0.004s, 0.0s] */
    dxpcmds6t_M->Timing.TaskCounters.TID[3] = 0;
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++dxpcmds6t_M->Timing.clockTick0)) {
    ++dxpcmds6t_M->Timing.clockTickH0;
  }

  dxpcmds6t_M->Timing.t[0] = dxpcmds6t_M->Timing.clockTick0 *
    dxpcmds6t_M->Timing.stepSize0 + dxpcmds6t_M->Timing.clockTickH0 *
    dxpcmds6t_M->Timing.stepSize0 * 4294967296.0;
}

/* Output for Task: Periodic_Model1_R1 */
void Periodic_Model1_R1_output(void)   /* Sample time: [0.001s, 0.0s] */
{
  /* ModelReference: '<Root>/Model1' */
  dxpcmds_ref1TID0(&dxpcmds6t_B.Model1_o1, &(dxpcmds6t_DW.Model1_DWORK1.rtb));
}

/* Update for Task: Periodic_Model1_R1 */
void Periodic_Model1_R1_update(void)   /* Sample time: [0.001s, 0.0s] */
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
  if (!(++task_M[0]->Timing.clockTick0)) {
    ++task_M[0]->Timing.clockTickH0;
  }

  task_M[0]->Timing.t[0] = task_M[0]->Timing.clockTick0 * task_M[0]
    ->Timing.stepSize0 + task_M[0]->Timing.clockTickH0 * task_M[0]
    ->Timing.stepSize0 * 4294967296.0;
}

/* Output for Task: Periodic_Model2_R1 */
void Periodic_Model2_R1_output(void)   /* Sample time: [0.001s, 0.0s] */
{
  /* ModelReference: '<Root>/Model2' */
  dxpcmds_ref2TID0(&dxpcmds6t_B.Model2_o1, &(dxpcmds6t_DW.Model2_DWORK1.rtb));
}

/* Update for Task: Periodic_Model2_R1 */
void Periodic_Model2_R1_update(void)   /* Sample time: [0.001s, 0.0s] */
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
  if (!(++task_M[1]->Timing.clockTick0)) {
    ++task_M[1]->Timing.clockTickH0;
  }

  task_M[1]->Timing.t[0] = task_M[1]->Timing.clockTick0 * task_M[1]
    ->Timing.stepSize0 + task_M[1]->Timing.clockTickH0 * task_M[1]
    ->Timing.stepSize0 * 4294967296.0;
}

/* Output for Task: Periodic_Model1_R2 */
void Periodic_Model1_R2_output(void)   /* Sample time: [0.002s, 0.0s] */
{
  /* ModelReference: '<Root>/Model1' */
  dxpcmds_ref1TID1(&dxpcmds6t_B.Model1_o2, &(dxpcmds6t_DW.Model1_DWORK1.rtb));
}

/* Update for Task: Periodic_Model1_R2 */
void Periodic_Model1_R2_update(void)   /* Sample time: [0.002s, 0.0s] */
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
  if (!(++task_M[2]->Timing.clockTick1)) {
    ++task_M[2]->Timing.clockTickH1;
  }

  task_M[2]->Timing.t[1] = task_M[2]->Timing.clockTick1 * task_M[2]
    ->Timing.stepSize1 + task_M[2]->Timing.clockTickH1 * task_M[2]
    ->Timing.stepSize1 * 4294967296.0;
}

/* Output for Task: Periodic_Model1_R3 */
void Periodic_Model1_R3_output(void)   /* Sample time: [0.003s, 0.0s] */
{
  /* ModelReference: '<Root>/Model1' */
  dxpcmds_ref1TID2(&dxpcmds6t_B.Model1_o3, &(dxpcmds6t_DW.Model1_DWORK1.rtb),
                   &(dxpcmds6t_DW.Model1_DWORK1.rtdw));
}

/* Update for Task: Periodic_Model1_R3 */
void Periodic_Model1_R3_update(void)   /* Sample time: [0.003s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++task_M[3]->Timing.clockTick2)) {
    ++task_M[3]->Timing.clockTickH2;
  }

  task_M[3]->Timing.t[2] = task_M[3]->Timing.clockTick2 * task_M[3]
    ->Timing.stepSize2 + task_M[3]->Timing.clockTickH2 * task_M[3]
    ->Timing.stepSize2 * 4294967296.0;
}

/* Output for Task: Periodic_Model2_R3 */
void Periodic_Model2_R3_output(void)   /* Sample time: [0.003s, 0.0s] */
{
  /* ModelReference: '<Root>/Model2' */
  dxpcmds_ref2TID1(&dxpcmds6t_B.Model2_o3, &(dxpcmds6t_DW.Model2_DWORK1.rtb));
}

/* Update for Task: Periodic_Model2_R3 */
void Periodic_Model2_R3_update(void)   /* Sample time: [0.003s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++task_M[4]->Timing.clockTick2)) {
    ++task_M[4]->Timing.clockTickH2;
  }

  task_M[4]->Timing.t[2] = task_M[4]->Timing.clockTick2 * task_M[4]
    ->Timing.stepSize2 + task_M[4]->Timing.clockTickH2 * task_M[4]
    ->Timing.stepSize2 * 4294967296.0;
}

/* Output for Task: Periodic_Model1_R4 */
void Periodic_Model1_R4_output(void)   /* Sample time: [0.004s, 0.0s] */
{
  {
    int32_T i;

    /* ModelReference: '<Root>/Model1' */
    dxpcmds_ref1TID3(&dxpcmds6t_B.Model1_o4[0],
                     &(dxpcmds6t_DW.Model1_DWORK1.rtdw));

    /* TaskTransBlk: '<Root>/TmpTaskTransAtModel1Outport4' */
    for (i = 0; i < 6000; i++) {
      dxpcmds6t_DW.TmpTaskTransAtModel1Outport4_buf_1[i + dxpcmds6t_DW.fw_buf_1 *
        6000] = dxpcmds6t_B.Model1_o4[i];
    }

    dxpcmds6t_DW.fw_buf_1 = 1 - dxpcmds6t_DW.fw_buf_1;

    /* End of TaskTransBlk: '<Root>/TmpTaskTransAtModel1Outport4' */
  }
}

/* Update for Task: Periodic_Model1_R4 */
void Periodic_Model1_R4_update(void)   /* Sample time: [0.004s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick3" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick3"
   * and "Timing.stepSize3". Size of "clockTick3" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick3 and the high bits
   * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++task_M[5]->Timing.clockTick3)) {
    ++task_M[5]->Timing.clockTickH3;
  }

  task_M[5]->Timing.t[3] = task_M[5]->Timing.clockTick3 * task_M[5]
    ->Timing.stepSize3 + task_M[5]->Timing.clockTickH3 * task_M[5]
    ->Timing.stepSize3 * 4294967296.0;
}

/* Output for Task: Periodic_Model2_R4 */
void Periodic_Model2_R4_output(void)   /* Sample time: [0.004s, 0.0s] */
{
  {
    int_T tmp;

    /* TaskTransBlk: '<Root>/TmpTaskTransAtModel2Inport1' */
    tmp = dxpcmds6t_DW.fr_buf_1 * 6000;
    memcpy(&dxpcmds6t_B.TmpTaskTransAtModel2Inport1[0],
           &dxpcmds6t_DW.TmpTaskTransAtModel1Outport4_buf_1[tmp], 6000U * sizeof
           (real_T));
    dxpcmds6t_DW.fr_buf_1 = 1 - dxpcmds6t_DW.fr_buf_1;

    /* ModelReference: '<Root>/Model2' */
    dxpcmds_ref2TID2(&dxpcmds6t_B.TmpTaskTransAtModel2Inport1[0],
                     &dxpcmds6t_B.Model2_o2, &(dxpcmds6t_DW.Model2_DWORK1.rtb));
  }
}

/* Update for Task: Periodic_Model2_R4 */
void Periodic_Model2_R4_update(void)   /* Sample time: [0.004s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick3" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick3"
   * and "Timing.stepSize3". Size of "clockTick3" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick3 and the high bits
   * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++task_M[6]->Timing.clockTick3)) {
    ++task_M[6]->Timing.clockTickH3;
  }

  task_M[6]->Timing.t[3] = task_M[6]->Timing.clockTick3 * task_M[6]
    ->Timing.stepSize3 + task_M[6]->Timing.clockTickH3 * task_M[6]
    ->Timing.stepSize3 * 4294967296.0;
}

void dxpcmds6t_output(int_T tid)
{
  switch (tid) {
   case 0 :
    Periodic_Model1_R1_output();
    break;

   case 1 :
    Periodic_Model2_R1_output();
    break;

   case 2 :
    Periodic_Model1_R2_output();
    break;

   case 3 :
    Periodic_Model1_R3_output();
    break;

   case 4 :
    Periodic_Model2_R3_output();
    break;

   case 5 :
    Periodic_Model1_R4_output();
    break;

   case 6 :
    Periodic_Model2_R4_output();
    break;

   default :
    break;
  }
}

void dxpcmds6t_update(int_T tid)
{
  switch (tid) {
   case 0 :
    Periodic_Model1_R1_update();
    break;

   case 1 :
    Periodic_Model2_R1_update();
    break;

   case 2 :
    Periodic_Model1_R2_update();
    break;

   case 3 :
    Periodic_Model1_R3_update();
    break;

   case 4 :
    Periodic_Model2_R3_update();
    break;

   case 5 :
    Periodic_Model1_R4_update();
    break;

   case 6 :
    Periodic_Model2_R4_update();
    break;

   default :
    break;
  }
}

/* Model initialize function */
static void dxpcmds6t_initialize(void)
{
  /* Start for atomic system: 'synthesized block' */

  /* Start for ModelReference: '<Root>/Model1' */
  dxpcmds_ref1_Start(&dxpcmds6t_B.Model1_o4[0],
                     &(dxpcmds6t_DW.Model1_DWORK1.rtdw));

  /* System initialize for atomic system: 'synthesized block' */

  /* InitializeConditions for TaskTransBlk: '<Root>/TmpTaskTransAtModel1Outport4' */
  dxpcmds6t_DW.fw_buf_1 = 0;

  /* SystemInitialize for ModelReference: '<Root>/Model1' */
  dxpcmds_ref1_Init(&(dxpcmds6t_DW.Model1_DWORK1.rtdw));

  /* System initialize for atomic system: 'synthesized block' */
  {
    int32_T i;

    /* InitializeConditions for TaskTransBlk: '<Root>/TmpTaskTransAtModel2Inport1' */
    dxpcmds6t_DW.fr_buf_1 = 1;
    for (i = 0; i < 6000; i++) {
      dxpcmds6t_DW.TmpTaskTransAtModel1Outport4_buf_1[i + 6000] =
        dxpcmds6t_P.TmpTaskTransAtModel2Inport1_IC;
    }

    /* End of InitializeConditions for TaskTransBlk: '<Root>/TmpTaskTransAtModel2Inport1' */
  }
}

/* Model terminate function */
static void dxpcmds6t_terminate(void)
{
  /* Termination for atomic system: 'synthesized block' */

  /* Terminate for ModelReference: '<Root>/Model1' */
  dxpcmds_ref1_Term(&(dxpcmds6t_DW.Model1_DWORK1.rtdw));
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  dxpcmds6t_output(tid);
}

void MdlUpdate(int_T tid)
{
  dxpcmds6t_update(tid);
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
  dxpcmds6t_initialize();
}

void MdlTerminate(void)
{
  dxpcmds6t_terminate();
}

/* Registration function */
RT_MODEL_dxpcmds6t_T *dxpcmds6t(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)dxpcmds6t_M, 0,
                sizeof(RT_MODEL_dxpcmds6t_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = dxpcmds6t_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    mdlTsMap[3] = 3;
    dxpcmds6t_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    dxpcmds6t_M->Timing.sampleTimes = (&dxpcmds6t_M->Timing.sampleTimesArray[0]);
    dxpcmds6t_M->Timing.offsetTimes = (&dxpcmds6t_M->Timing.offsetTimesArray[0]);

    /* task periods */
    dxpcmds6t_M->Timing.sampleTimes[0] = (0.001);
    dxpcmds6t_M->Timing.sampleTimes[1] = (0.002);
    dxpcmds6t_M->Timing.sampleTimes[2] = (0.003);
    dxpcmds6t_M->Timing.sampleTimes[3] = (0.004);

    /* task offsets */
    dxpcmds6t_M->Timing.offsetTimes[0] = (0.0);
    dxpcmds6t_M->Timing.offsetTimes[1] = (0.0);
    dxpcmds6t_M->Timing.offsetTimes[2] = (0.0);
    dxpcmds6t_M->Timing.offsetTimes[3] = (0.0);
  }

  rtmSetTPtr(dxpcmds6t_M, &dxpcmds6t_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = dxpcmds6t_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits = dxpcmds6t_M->Timing.perTaskSampleHitsArray;
    dxpcmds6t_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    dxpcmds6t_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(dxpcmds6t_M, 2.0);
  dxpcmds6t_M->Timing.stepSize0 = 0.001;
  dxpcmds6t_M->Timing.stepSize1 = 0.002;
  dxpcmds6t_M->Timing.stepSize2 = 0.003;
  dxpcmds6t_M->Timing.stepSize3 = 0.004;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    dxpcmds6t_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(dxpcmds6t_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(dxpcmds6t_M->rtwLogInfo, (NULL));
    rtliSetLogT(dxpcmds6t_M->rtwLogInfo, "tout");
    rtliSetLogX(dxpcmds6t_M->rtwLogInfo, "");
    rtliSetLogXFinal(dxpcmds6t_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(dxpcmds6t_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(dxpcmds6t_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(dxpcmds6t_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(dxpcmds6t_M->rtwLogInfo, 1);
    rtliSetLogY(dxpcmds6t_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(dxpcmds6t_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(dxpcmds6t_M->rtwLogInfo, (NULL));
  }

  dxpcmds6t_M->solverInfoPtr = (&dxpcmds6t_M->solverInfo);
  dxpcmds6t_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&dxpcmds6t_M->solverInfo, 0.001);
  rtsiSetSolverMode(&dxpcmds6t_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  dxpcmds6t_M->ModelData.blockIO = ((void *) &dxpcmds6t_B);
  (void) memset(((void *) &dxpcmds6t_B), 0,
                sizeof(B_dxpcmds6t_T));

  /* parameters */
  dxpcmds6t_M->ModelData.defaultParam = ((real_T *)&dxpcmds6t_P);

  /* states (dwork) */
  dxpcmds6t_M->ModelData.dwork = ((void *) &dxpcmds6t_DW);
  (void) memset((void *)&dxpcmds6t_DW, 0,
                sizeof(DW_dxpcmds6t_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  dxpcmds6t_InitializeDataMapInfo(dxpcmds6t_M);

  {
    /* user code (registration function declaration) */
    int_T tIdx;
    for (tIdx = 0; tIdx < 7; tIdx++) {
      task_M[tIdx] = &task_M_[tIdx];

      /* initialize real-time model */
      (void) memset((void *) task_M[tIdx], 0,
                    sizeof(RT_MODEL_dxpcmds6t_T));
    }

    for (tIdx = 0; tIdx < 7; tIdx++) {
      /* Initialize timing info */
      {
        int_T *mdlTsMap = task_M[tIdx]->Timing.sampleTimeTaskIDArray;
        mdlTsMap[0] = 0;
        mdlTsMap[1] = 1;
        mdlTsMap[2] = 2;
        mdlTsMap[3] = 3;
        task_M[tIdx]->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
        task_M[tIdx]->Timing.sampleTimes = (&task_M[tIdx]
          ->Timing.sampleTimesArray[0]);
        task_M[tIdx]->Timing.offsetTimes = (&task_M[tIdx]
          ->Timing.offsetTimesArray[0]);

        /* task periods */
        task_M[tIdx]->Timing.sampleTimes[0] = (0.001);
        task_M[tIdx]->Timing.sampleTimes[1] = (0.002);
        task_M[tIdx]->Timing.sampleTimes[2] = (0.003);
        task_M[tIdx]->Timing.sampleTimes[3] = (0.004);

        /* task offsets */
        task_M[tIdx]->Timing.offsetTimes[0] = (0.0);
        task_M[tIdx]->Timing.offsetTimes[1] = (0.0);
        task_M[tIdx]->Timing.offsetTimes[2] = (0.0);
        task_M[tIdx]->Timing.offsetTimes[3] = (0.0);
      }

      rtmSetTPtr(task_M[tIdx], &task_M[tIdx]->Timing.tArray[0]);

      {
        int_T *mdlSampleHits = task_M[tIdx]->Timing.sampleHitArray;
        int_T *mdlPerTaskSampleHits = task_M[tIdx]
          ->Timing.perTaskSampleHitsArray;
        task_M[tIdx]->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
        mdlSampleHits[0] = 1;
        task_M[tIdx]->Timing.sampleHits = (&mdlSampleHits[0]);
      }

      rtmSetTFinal(task_M[tIdx], 2.0);
      task_M[tIdx]->Timing.stepSize0 = 0.001;
      task_M[tIdx]->Timing.stepSize1 = 0.002;
      task_M[tIdx]->Timing.stepSize2 = 0.003;
      task_M[tIdx]->Timing.stepSize3 = 0.004;
      task_M[tIdx]->solverInfoPtr = (&task_M[tIdx]->solverInfo);
      task_M[tIdx]->Timing.stepSize = (0.001);
      rtsiSetFixedStepSize(&task_M[tIdx]->solverInfo, 0.001);
      rtsiSetSolverMode(&task_M[tIdx]->solverInfo, SOLVER_MODE_MULTITASKING);
    }

    task_M[0]->ModelData.contStates = ((NULL));
    task_M[1]->ModelData.contStates = ((NULL));
    task_M[2]->ModelData.contStates = ((NULL));
    task_M[3]->ModelData.contStates = ((NULL));
    task_M[4]->ModelData.contStates = ((NULL));
    task_M[5]->ModelData.contStates = ((NULL));
    task_M[6]->ModelData.contStates = ((NULL));
  }

  /* Model Initialize fcn for ModelReference Block: '<Root>/Model1' */
  dxpcmds_ref1_initialize(rtmGetErrorStatusPointer(dxpcmds6t_M),
    &(dxpcmds6t_DW.Model1_DWORK1.rtm), &(dxpcmds6t_DW.Model1_DWORK1.rtb),
    &(dxpcmds6t_DW.Model1_DWORK1.rtdw), &(dxpcmds6t_M->DataMapInfo.mmi),
    "dxpcmds6t/Model1", 0, -1);

  /* Model Initialize fcn for ModelReference Block: '<Root>/Model2' */
  dxpcmds_ref2_initialize(rtmGetErrorStatusPointer(dxpcmds6t_M),
    &(dxpcmds6t_DW.Model2_DWORK1.rtm), &(dxpcmds6t_DW.Model2_DWORK1.rtb),
    &(dxpcmds6t_M->DataMapInfo.mmi), "dxpcmds6t/Model2", 1, -1);

  /* Initialize Sizes */
  dxpcmds6t_M->Sizes.numContStates = (0);/* Number of continuous states */
  dxpcmds6t_M->Sizes.numY = (0);       /* Number of model outputs */
  dxpcmds6t_M->Sizes.numU = (0);       /* Number of model inputs */
  dxpcmds6t_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  dxpcmds6t_M->Sizes.numSampTimes = (4);/* Number of sample times */
  dxpcmds6t_M->Sizes.numBlocks = (6);  /* Number of blocks */
  dxpcmds6t_M->Sizes.numBlockIO = (9); /* Number of block outputs */
  dxpcmds6t_M->Sizes.numBlockPrms = (1);/* Sum of parameter "widths" */
  return dxpcmds6t_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
