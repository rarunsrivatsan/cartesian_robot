/*
 * backup_test2.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "backup_test2".
 *
 * Model version              : 1.167
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Thu Nov 24 00:10:44 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "backup_test2_capi.h"
#include "backup_test2.h"
#include "backup_test2_private.h"

/* Block signals (auto storage) */
B_backup_test2_T backup_test2_B;

/* Block states (auto storage) */
DW_backup_test2_T backup_test2_DW;

/* Real-time model */
RT_MODEL_backup_test2_T backup_test2_M_;
RT_MODEL_backup_test2_T *const backup_test2_M = &backup_test2_M_;

/* Model output function */
static void backup_test2_output(void)
{
  real_T currX;
  real_T currY;
  real_T remY;
  real_T quotY;
  real_T maxX;
  real_T minX;

  /* ok to acquire for <S1>/S-Function */
  backup_test2_DW.SFunction_IWORK.AcquireOK = 1;

  /* ok to acquire for <S2>/S-Function */
  backup_test2_DW.SFunction_IWORK_o.AcquireOK = 1;

  /* ok to acquire for <S3>/S-Function */
  backup_test2_DW.SFunction_IWORK_j.AcquireOK = 1;

  /* ok to acquire for <S4>/S-Function */
  backup_test2_DW.SFunction_IWORK_n.AcquireOK = 1;

  /* ok to acquire for <S5>/S-Function */
  backup_test2_DW.SFunction_IWORK_a.AcquireOK = 1;

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* Sum: '<Root>/Sum3' incorporates:
   *  Constant: '<Root>/encoder offsets2'
   */
  backup_test2_B.Sum3 = backup_test2_B.counts -
    backup_test2_P.encoderoffsets2_Value;

  /* Gain: '<Root>/count_to_mm1' */
  backup_test2_B.CurrentX = backup_test2_P.count_to_mm1_Gain *
    backup_test2_B.Sum3;

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* Sum: '<Root>/Sum2' incorporates:
   *  Constant: '<Root>/encoder offsets1'
   */
  backup_test2_B.Sum2 = backup_test2_B.counts_o -
    backup_test2_P.encoderoffsets1_Value;

  /* Gain: '<Root>/count_to_mm' */
  backup_test2_B.CurrentY = backup_test2_P.count_to_mm_Gain *
    backup_test2_B.Sum2;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  /* MATLAB Function 'MATLAB Function': '<S6>:1' */
  /* '<S6>:1:4' */
  currX = ceil(backup_test2_B.CurrentX);

  /* '<S6>:1:5' */
  currY = ceil(backup_test2_B.CurrentY);

  /* '<S6>:1:7' */
  remY = currY - floor(currY / 2.0) * 2.0;

  /* '<S6>:1:8' */
  quotY = currY / 2.0;

  /* '<S6>:1:9' */
  backup_test2_B.motX = 0.0;

  /* '<S6>:1:10' */
  backup_test2_B.motY = 0.0;

  /* '<S6>:1:11' */
  maxX = 80.0;

  /* '<S6>:1:12' */
  minX = 0.0;

  /* '<S6>:1:13' */
  if (currX > 80.0) {
    /* '<S6>:1:15' */
    /* '<S6>:1:16' */
    maxX = currX;
  }

  if (currX < 0.0) {
    /* '<S6>:1:18' */
    /* '<S6>:1:19' */
    minX = currX;
  }

  if ((currX >= minX) && (currX < maxX) && (remY == 0.0) && (quotY - floor(quotY
        / 2.0) * 2.0 == 0.0)) {
    /* '<S6>:1:22' */
    /* '<S6>:1:23' */
    backup_test2_B.motX = -1.0;
  } else if ((currX > minX) && (currX <= maxX) && (remY == 0.0) && (quotY -
              floor(quotY / 2.0) * 2.0 == 1.0)) {
    /* '<S6>:1:24' */
    /* '<S6>:1:25' */
    backup_test2_B.motX = 1.0;
  } else if (((currX == minX) || (currX >= maxX)) && (remY != 0.0)) {
    /* '<S6>:1:26' */
    /* '<S6>:1:27' */
    backup_test2_B.motY = -1.0;
  } else if ((currX == minX) && (remY == 0.0) && (quotY - floor(quotY / 2.0) *
              2.0 == 1.0)) {
    /* '<S6>:1:28' */
    /* '<S6>:1:29' */
    backup_test2_B.motY = -1.0;
  } else {
    if ((currX >= maxX) && (remY == 0.0) && (quotY - floor(quotY / 2.0) * 2.0 ==
         0.0)) {
      /* '<S6>:1:30' */
      /* '<S6>:1:31' */
      backup_test2_B.motY = -1.0;
    }
  }

  if (currY > 80.0) {
    /* '<S6>:1:34' */
    /* '<S6>:1:35' */
    backup_test2_B.motX = 0.0;

    /* '<S6>:1:36' */
    backup_test2_B.motY = 0.0;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */

  /* Abs: '<Root>/Abs1' */
  backup_test2_B.XEnable = fabs(backup_test2_B.motX);

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_Abs1_at_outport_0' */
  {
    {
      double time = backup_test2_M->Timing.t[0];
      void *pData = (void *)&backup_test2_B.XEnable;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(525712808U, time, pData, size);
    }
  }

  /* Abs: '<Root>/Abs' */
  backup_test2_B.Yenable = fabs(backup_test2_B.motY);

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_Abs_at_outport_0' */
  {
    {
      double time = backup_test2_M->Timing.t[0];
      void *pData = (void *)&backup_test2_B.Yenable;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(1232697578U, time, pData, size);
    }
  }

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_MATLAB Function_at_outport_0' */
  {
    {
      double time = backup_test2_M->Timing.t[0];
      void *pData = (void *)&backup_test2_B.motX;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(1587765268U, time, pData, size);
    }
  }

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_MATLAB Function_at_outport_1' */
  {
    {
      double time = backup_test2_M->Timing.t[0];
      void *pData = (void *)&backup_test2_B.motY;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(478312847U, time, pData, size);
    }
  }

  /* Signum: '<Root>/Sign1' */
  currX = backup_test2_B.motX;
  if (currX < 0.0) {
    backup_test2_B.Sign1 = -1.0;
  } else if (currX > 0.0) {
    backup_test2_B.Sign1 = 1.0;
  } else if (currX == 0.0) {
    backup_test2_B.Sign1 = 0.0;
  } else {
    backup_test2_B.Sign1 = currX;
  }

  /* End of Signum: '<Root>/Sign1' */

  /* Gain: '<Root>/Voltage1' */
  backup_test2_B.xVoltage = backup_test2_P.Voltage1_Gain * backup_test2_B.Sign1;

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_Voltage1_at_outport_0' */
  {
    {
      double time = backup_test2_M->Timing.t[0];
      void *pData = (void *)&backup_test2_B.xVoltage;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(3383056017U, time, pData, size);
    }
  }

  /* Signum: '<Root>/Sign' */
  currX = backup_test2_B.motY;
  if (currX < 0.0) {
    backup_test2_B.Sign = -1.0;
  } else if (currX > 0.0) {
    backup_test2_B.Sign = 1.0;
  } else if (currX == 0.0) {
    backup_test2_B.Sign = 0.0;
  } else {
    backup_test2_B.Sign = currX;
  }

  /* End of Signum: '<Root>/Sign' */

  /* Gain: '<Root>/Voltage' */
  backup_test2_B.VoltageY = backup_test2_P.Voltage_Gain * backup_test2_B.Sign;

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_Voltage_at_outport_0' */
  {
    {
      double time = backup_test2_M->Timing.t[0];
      void *pData = (void *)&backup_test2_B.VoltageY;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(336694733U, time, pData, size);
    }
  }

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_count_to_mm1_at_outport_0' */
  {
    {
      double time = backup_test2_M->Timing.t[0];
      void *pData = (void *)&backup_test2_B.CurrentX;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(3212504832U, time, pData, size);
    }
  }

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_count_to_mm_at_outport_0' */
  {
    {
      double time = backup_test2_M->Timing.t[0];
      void *pData = (void *)&backup_test2_B.CurrentY;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(2755736490U, time, pData, size);
    }
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[2];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[3];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[4];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<Root>/Receive 1' (xpcudpbytereceive) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[5];
    sfcnOutputs(rts, 0);
  }

  /* Byte Unpacking: <Root>/Byte Unpacking 1 */
  (void)memcpy((uint8_T*)&backup_test2_B.ForceData[0], (uint8_T*)
               &backup_test2_B.Receive1_o1[0] + 0, 48);

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_Byte Unpacking 1_at_outport_0' */
  {
    {
      double time = backup_test2_M->Timing.t[0];
      void *pData = (void *)&backup_test2_B.ForceData[0];
      int32_T size = 6*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(3033877052U, time, pData, size);
    }
  }

  /* ok to acquire for <S7>/S-Function */
  backup_test2_DW.SFunction_IWORK_d.AcquireOK = 1;

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 1' (dipci8255) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[6];
    sfcnOutputs(rts, 0);
  }
}

/* Model update function */
static void backup_test2_update(void)
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
  if (!(++backup_test2_M->Timing.clockTick0)) {
    ++backup_test2_M->Timing.clockTickH0;
  }

  backup_test2_M->Timing.t[0] = backup_test2_M->Timing.clockTick0 *
    backup_test2_M->Timing.stepSize0 + backup_test2_M->Timing.clockTickH0 *
    backup_test2_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void backup_test2_initialize(void)
{
  /* S-Function Block: <S1>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,2)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo("MATLAB Function/p1"));
        rl32eSetScope(3, 4, 1000);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        rl32eSetScope(3, 3, rl32eGetSignalNo("MATLAB Function/p1"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 0);
        rl32eSetScope(3, 9, 0);
        rl32eSetTargetScope(3, 1, 3.0);
        rl32eSetTargetScope(3, 11, 0.0);
        rl32eSetTargetScope(3, 10, 0.0);
        xpceScopeAcqOK(3, &backup_test2_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* S-Function Block: <S2>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,2)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("MATLAB Function/p2"));
        rl32eSetScope(4, 4, 1000);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo("MATLAB Function/p2"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 9, 0);
        rl32eSetTargetScope(4, 1, 3.0);
        rl32eSetTargetScope(4, 11, 0.0);
        rl32eSetTargetScope(4, 10, 0.0);
        xpceScopeAcqOK(4, &backup_test2_DW.SFunction_IWORK_o.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* S-Function Block: <S3>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo("count_to_mm"));
        rl32eSetScope(2, 4, 1000);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo("count_to_mm"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 3.0);
        rl32eSetTargetScope(2, 11, 0.0);
        rl32eSetTargetScope(2, 10, 0.0);
        xpceScopeAcqOK(2, &backup_test2_DW.SFunction_IWORK_j.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* S-Function Block: <S4>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("count_to_mm1"));
        rl32eSetScope(1, 4, 1000);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("count_to_mm1"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        rl32eSetTargetScope(1, 1, 3.0);
        rl32eSetTargetScope(1, 11, 0.0);
        rl32eSetTargetScope(1, 10, 0.0);
        xpceScopeAcqOK(1, &backup_test2_DW.SFunction_IWORK_n.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* S-Function Block: <S5>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(6)) == 0) {
      if ((i = rl32eDefScope(6,3)) != 0) {
        printf("Error creating scope 6\n");
      } else {
        rl32eAddSignal(6, rl32eGetSignalNo("count_to_mm1"));
        rl32eSetScope(6, 4, 1000);
        rl32eSetScope(6, 5, 0);
        rl32eSetScope(6, 6, 1);
        rl32eSetScope(6, 0, 0);
        xpceFSScopeSet(6, "data.mat", 1, 512, 0, 536870912);
        rl32eSetScope (6, 10, 0);
        rl32eSetScope(6, 3, rl32eGetSignalNo("count_to_mm1"));
        rl32eSetScope(6, 1, 0.0);
        rl32eSetScope(6, 2, 0);
        rl32eSetScope(6, 9, 0);
        xpceScopeAcqOK(6, &backup_test2_DW.SFunction_IWORK_a.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(6);
    }
  }

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/Receive 1' (xpcudpbytereceive) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S7>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,2)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eAddSignal(5, rl32eGetSignalNo("Byte Unpacking 1/s1"));
        rl32eAddSignal(5, rl32eGetSignalNo("Byte Unpacking 1/s2"));
        rl32eAddSignal(5, rl32eGetSignalNo("Byte Unpacking 1/s3"));
        rl32eAddSignal(5, rl32eGetSignalNo("Byte Unpacking 1/s4"));
        rl32eAddSignal(5, rl32eGetSignalNo("Byte Unpacking 1/s5"));
        rl32eAddSignal(5, rl32eGetSignalNo("Byte Unpacking 1/s6"));
        rl32eSetScope(5, 4, 5000);
        rl32eSetScope(5, 5, 0);
        rl32eSetScope(5, 6, 1);
        rl32eSetScope(5, 0, 0);
        rl32eSetScope(5, 3, rl32eGetSignalNo("Byte Unpacking 1/s1"));
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 0);
        rl32eSetScope(5, 9, 0);
        rl32eSetTargetScope(5, 1, 3.0);
        rl32eSetTargetScope(5, 11, 0.0);
        rl32eSetTargetScope(5, 10, 0.0);
        xpceScopeAcqOK(5, &backup_test2_DW.SFunction_IWORK_d.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(5);
    }
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 1' (dipci8255) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
static void backup_test2_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/Receive 1' (xpcudpbytereceive) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 1' (dipci8255) */
  {
    SimStruct *rts = backup_test2_M->childSfunctions[6];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  backup_test2_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  backup_test2_update();
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
  backup_test2_initialize();
}

void MdlTerminate(void)
{
  backup_test2_terminate();
}

/* Registration function */
RT_MODEL_backup_test2_T *backup_test2(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)backup_test2_M, 0,
                sizeof(RT_MODEL_backup_test2_T));
  rtsiSetSolverName(&backup_test2_M->solverInfo,"FixedStepDiscrete");
  backup_test2_M->solverInfoPtr = (&backup_test2_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = backup_test2_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    backup_test2_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    backup_test2_M->Timing.sampleTimes =
      (&backup_test2_M->Timing.sampleTimesArray[0]);
    backup_test2_M->Timing.offsetTimes =
      (&backup_test2_M->Timing.offsetTimesArray[0]);

    /* task periods */
    backup_test2_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    backup_test2_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(backup_test2_M, &backup_test2_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = backup_test2_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    backup_test2_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(backup_test2_M, -1);
  backup_test2_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    backup_test2_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(backup_test2_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(backup_test2_M->rtwLogInfo, (NULL));
    rtliSetLogT(backup_test2_M->rtwLogInfo, "tout");
    rtliSetLogX(backup_test2_M->rtwLogInfo, "");
    rtliSetLogXFinal(backup_test2_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(backup_test2_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(backup_test2_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(backup_test2_M->rtwLogInfo, 0);
    rtliSetLogDecimation(backup_test2_M->rtwLogInfo, 1);
    rtliSetLogY(backup_test2_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(backup_test2_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(backup_test2_M->rtwLogInfo, (NULL));
  }

  backup_test2_M->solverInfoPtr = (&backup_test2_M->solverInfo);
  backup_test2_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&backup_test2_M->solverInfo, 0.001);
  rtsiSetSolverMode(&backup_test2_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  backup_test2_M->ModelData.blockIO = ((void *) &backup_test2_B);
  (void) memset(((void *) &backup_test2_B), 0,
                sizeof(B_backup_test2_T));

  /* parameters */
  backup_test2_M->ModelData.defaultParam = ((real_T *)&backup_test2_P);

  /* states (dwork) */
  backup_test2_M->ModelData.dwork = ((void *) &backup_test2_DW);
  (void) memset((void *)&backup_test2_DW, 0,
                sizeof(DW_backup_test2_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  backup_test2_InitializeDataMapInfo(backup_test2_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &backup_test2_M->NonInlinedSFcns.sfcnInfo;
    backup_test2_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(backup_test2_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &backup_test2_M->Sizes.numSampTimes);
    backup_test2_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (backup_test2_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,backup_test2_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(backup_test2_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(backup_test2_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(backup_test2_M));
    rtssSetStepSizePtr(sfcnInfo, &backup_test2_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(backup_test2_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &backup_test2_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &backup_test2_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &backup_test2_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &backup_test2_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &backup_test2_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &backup_test2_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &backup_test2_M->solverInfoPtr);
  }

  backup_test2_M->Sizes.numSFcns = (7);

  /* register each child */
  {
    (void) memset((void *)&backup_test2_M->NonInlinedSFcns.childSFunctions[0], 0,
                  7*sizeof(SimStruct));
    backup_test2_M->childSfunctions =
      (&backup_test2_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 7; i++) {
        backup_test2_M->childSfunctions[i] =
          (&backup_test2_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: backup_test2/<Root>/CNT32-8M(PCI) 2 (encconteccnt328mpci) */
    {
      SimStruct *rts = backup_test2_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = backup_test2_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = backup_test2_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = backup_test2_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &backup_test2_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, backup_test2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &backup_test2_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &backup_test2_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &backup_test2_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &backup_test2_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &backup_test2_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &backup_test2_B.counts));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) 2");
      ssSetPath(rts, "backup_test2/CNT32-8M(PCI) 2");
      ssSetRTModel(rts,backup_test2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &backup_test2_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)backup_test2_P.CNT328MPCI2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)backup_test2_P.CNT328MPCI2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)backup_test2_P.CNT328MPCI2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)backup_test2_P.CNT328MPCI2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)backup_test2_P.CNT328MPCI2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)backup_test2_P.CNT328MPCI2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)backup_test2_P.CNT328MPCI2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)backup_test2_P.CNT328MPCI2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)backup_test2_P.CNT328MPCI2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)backup_test2_P.CNT328MPCI2_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)backup_test2_P.CNT328MPCI2_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)backup_test2_P.CNT328MPCI2_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)backup_test2_P.CNT328MPCI2_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)backup_test2_P.CNT328MPCI2_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)backup_test2_P.CNT328MPCI2_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)backup_test2_P.CNT328MPCI2_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)backup_test2_P.CNT328MPCI2_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)backup_test2_P.CNT328MPCI2_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)backup_test2_P.CNT328MPCI2_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)backup_test2_P.CNT328MPCI2_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)backup_test2_P.CNT328MPCI2_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)backup_test2_P.CNT328MPCI2_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)backup_test2_P.CNT328MPCI2_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)backup_test2_P.CNT328MPCI2_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)backup_test2_P.CNT328MPCI2_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)backup_test2_P.CNT328MPCI2_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)backup_test2_P.CNT328MPCI2_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)backup_test2_P.CNT328MPCI2_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)backup_test2_P.CNT328MPCI2_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)backup_test2_P.CNT328MPCI2_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)backup_test2_P.CNT328MPCI2_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)backup_test2_P.CNT328MPCI2_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)backup_test2_P.CNT328MPCI2_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)backup_test2_P.CNT328MPCI2_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)backup_test2_P.CNT328MPCI2_P35_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &backup_test2_DW.CNT328MPCI2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &backup_test2_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &backup_test2_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &backup_test2_DW.CNT328MPCI2_IWORK[0]);
      }

      /* registration */
      encconteccnt328mpci(rts);
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

    /* Level2 S-Function Block: backup_test2/<Root>/CNT32-8M(PCI) 1 (encconteccnt328mpci) */
    {
      SimStruct *rts = backup_test2_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = backup_test2_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = backup_test2_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = backup_test2_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &backup_test2_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, backup_test2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &backup_test2_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &backup_test2_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &backup_test2_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &backup_test2_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &backup_test2_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &backup_test2_B.counts_o));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) 1");
      ssSetPath(rts, "backup_test2/CNT32-8M(PCI) 1");
      ssSetRTModel(rts,backup_test2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &backup_test2_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)backup_test2_P.CNT328MPCI1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)backup_test2_P.CNT328MPCI1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)backup_test2_P.CNT328MPCI1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)backup_test2_P.CNT328MPCI1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)backup_test2_P.CNT328MPCI1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)backup_test2_P.CNT328MPCI1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)backup_test2_P.CNT328MPCI1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)backup_test2_P.CNT328MPCI1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)backup_test2_P.CNT328MPCI1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)backup_test2_P.CNT328MPCI1_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)backup_test2_P.CNT328MPCI1_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)backup_test2_P.CNT328MPCI1_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)backup_test2_P.CNT328MPCI1_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)backup_test2_P.CNT328MPCI1_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)backup_test2_P.CNT328MPCI1_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)backup_test2_P.CNT328MPCI1_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)backup_test2_P.CNT328MPCI1_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)backup_test2_P.CNT328MPCI1_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)backup_test2_P.CNT328MPCI1_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)backup_test2_P.CNT328MPCI1_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)backup_test2_P.CNT328MPCI1_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)backup_test2_P.CNT328MPCI1_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)backup_test2_P.CNT328MPCI1_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)backup_test2_P.CNT328MPCI1_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)backup_test2_P.CNT328MPCI1_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)backup_test2_P.CNT328MPCI1_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)backup_test2_P.CNT328MPCI1_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)backup_test2_P.CNT328MPCI1_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)backup_test2_P.CNT328MPCI1_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)backup_test2_P.CNT328MPCI1_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)backup_test2_P.CNT328MPCI1_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)backup_test2_P.CNT328MPCI1_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)backup_test2_P.CNT328MPCI1_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)backup_test2_P.CNT328MPCI1_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)backup_test2_P.CNT328MPCI1_P35_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &backup_test2_DW.CNT328MPCI1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &backup_test2_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &backup_test2_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &backup_test2_DW.CNT328MPCI1_IWORK[0]);
      }

      /* registration */
      encconteccnt328mpci(rts);
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

    /* Level2 S-Function Block: backup_test2/<Root>/PCI-DDA 08 12 3 (dopci8255) */
    {
      SimStruct *rts = backup_test2_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = backup_test2_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = backup_test2_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = backup_test2_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &backup_test2_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, backup_test2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &backup_test2_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &backup_test2_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &backup_test2_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &backup_test2_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &backup_test2_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &backup_test2_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &backup_test2_B.Yenable;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 3");
      ssSetPath(rts, "backup_test2/PCI-DDA 08 12 3");
      ssSetRTModel(rts,backup_test2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &backup_test2_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)backup_test2_P.PCIDDA08123_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)backup_test2_P.PCIDDA08123_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)backup_test2_P.PCIDDA08123_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)backup_test2_P.PCIDDA08123_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)backup_test2_P.PCIDDA08123_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)backup_test2_P.PCIDDA08123_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)backup_test2_P.PCIDDA08123_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)backup_test2_P.PCIDDA08123_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)backup_test2_P.PCIDDA08123_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)backup_test2_P.PCIDDA08123_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &backup_test2_DW.PCIDDA08123_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &backup_test2_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &backup_test2_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &backup_test2_DW.PCIDDA08123_IWORK[0]);
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

    /* Level2 S-Function Block: backup_test2/<Root>/PCI-DDA 08 12 4 (dopci8255) */
    {
      SimStruct *rts = backup_test2_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = backup_test2_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = backup_test2_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = backup_test2_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &backup_test2_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, backup_test2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &backup_test2_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &backup_test2_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &backup_test2_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &backup_test2_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &backup_test2_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &backup_test2_M->NonInlinedSFcns.Sfcn3.UPtrs0;
          sfcnUPtrs[0] = &backup_test2_B.XEnable;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 4");
      ssSetPath(rts, "backup_test2/PCI-DDA 08 12 4");
      ssSetRTModel(rts,backup_test2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &backup_test2_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)backup_test2_P.PCIDDA08124_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)backup_test2_P.PCIDDA08124_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)backup_test2_P.PCIDDA08124_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)backup_test2_P.PCIDDA08124_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)backup_test2_P.PCIDDA08124_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)backup_test2_P.PCIDDA08124_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)backup_test2_P.PCIDDA08124_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)backup_test2_P.PCIDDA08124_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)backup_test2_P.PCIDDA08124_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)backup_test2_P.PCIDDA08124_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &backup_test2_DW.PCIDDA08124_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &backup_test2_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &backup_test2_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &backup_test2_DW.PCIDDA08124_IWORK[0]);
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

    /* Level2 S-Function Block: backup_test2/<Root>/PCI-DDA08 12  (dacbpcidda0x12) */
    {
      SimStruct *rts = backup_test2_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = backup_test2_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = backup_test2_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = backup_test2_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &backup_test2_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, backup_test2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &backup_test2_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &backup_test2_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &backup_test2_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &backup_test2_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &backup_test2_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &backup_test2_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &backup_test2_B.xVoltage;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &backup_test2_M->NonInlinedSFcns.Sfcn4.UPtrs1;
          sfcnUPtrs[0] = &backup_test2_B.VoltageY;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 ");
      ssSetPath(rts, "backup_test2/PCI-DDA08 12 ");
      ssSetRTModel(rts,backup_test2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &backup_test2_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)backup_test2_P.PCIDDA0812_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)backup_test2_P.PCIDDA0812_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)backup_test2_P.PCIDDA0812_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)backup_test2_P.PCIDDA0812_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)backup_test2_P.PCIDDA0812_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)backup_test2_P.PCIDDA0812_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)backup_test2_P.PCIDDA0812_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &backup_test2_DW.PCIDDA0812_RWORK[0]);
      ssSetIWork(rts, (int_T *) &backup_test2_DW.PCIDDA0812_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &backup_test2_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &backup_test2_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 16);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &backup_test2_DW.PCIDDA0812_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 4);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &backup_test2_DW.PCIDDA0812_IWORK[0]);
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

    /* Level2 S-Function Block: backup_test2/<Root>/Receive 1 (xpcudpbytereceive) */
    {
      SimStruct *rts = backup_test2_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = backup_test2_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = backup_test2_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = backup_test2_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &backup_test2_M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, backup_test2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &backup_test2_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &backup_test2_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &backup_test2_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &backup_test2_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &backup_test2_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 48);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *) backup_test2_B.Receive1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *) &backup_test2_B.Receive1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Receive 1");
      ssSetPath(rts, "backup_test2/Receive 1");
      ssSetRTModel(rts,backup_test2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &backup_test2_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)backup_test2_P.Receive1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)backup_test2_P.Receive1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)backup_test2_P.Receive1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)backup_test2_P.Receive1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)backup_test2_P.Receive1_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &backup_test2_DW.Receive1_IWORK[0]);
      ssSetPWork(rts, (void **) &backup_test2_DW.Receive1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &backup_test2_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &backup_test2_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &backup_test2_DW.Receive1_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &backup_test2_DW.Receive1_PWORK);
      }

      /* registration */
      xpcudpbytereceive(rts);
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
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: backup_test2/<Root>/PCI-DDA08 12 1 (dipci8255) */
    {
      SimStruct *rts = backup_test2_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = backup_test2_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = backup_test2_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = backup_test2_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &backup_test2_M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, backup_test2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &backup_test2_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &backup_test2_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &backup_test2_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &backup_test2_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &backup_test2_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &backup_test2_B.LimitSwitch));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 1");
      ssSetPath(rts, "backup_test2/PCI-DDA08 12 1");
      ssSetRTModel(rts,backup_test2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &backup_test2_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)backup_test2_P.PCIDDA08121_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)backup_test2_P.PCIDDA08121_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)backup_test2_P.PCIDDA08121_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)backup_test2_P.PCIDDA08121_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)backup_test2_P.PCIDDA08121_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)backup_test2_P.PCIDDA08121_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)backup_test2_P.PCIDDA08121_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)backup_test2_P.PCIDDA08121_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &backup_test2_DW.PCIDDA08121_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &backup_test2_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &backup_test2_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &backup_test2_DW.PCIDDA08121_IWORK[0]);
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
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Initialize Sizes */
  backup_test2_M->Sizes.numContStates = (0);/* Number of continuous states */
  backup_test2_M->Sizes.numY = (0);    /* Number of model outputs */
  backup_test2_M->Sizes.numU = (0);    /* Number of model inputs */
  backup_test2_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  backup_test2_M->Sizes.numSampTimes = (1);/* Number of sample times */
  backup_test2_M->Sizes.numBlocks = (37);/* Number of blocks */
  backup_test2_M->Sizes.numBlockIO = (18);/* Number of block outputs */
  backup_test2_M->Sizes.numBlockPrms = (358);/* Sum of parameter "widths" */
  return backup_test2_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
