/*
 * Pos_PID.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Pos_PID".
 *
 * Model version              : 1.326
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Fri Dec 16 02:59:46 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "Pos_PID_capi.h"
#include "Pos_PID.h"
#include "Pos_PID_private.h"

/* Block signals (auto storage) */
B_Pos_PID_T Pos_PID_B;

/* Continuous states */
X_Pos_PID_T Pos_PID_X;

/* Block states (auto storage) */
DW_Pos_PID_T Pos_PID_DW;

/* Real-time model */
RT_MODEL_Pos_PID_T Pos_PID_M_;
RT_MODEL_Pos_PID_T *const Pos_PID_M = &Pos_PID_M_;

/*
 * This function updates continuous states using the ODE4 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE4_IntgData *id = (ODE4_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T *f3 = id->f[3];
  real_T temp;
  int_T i;
  int_T nXc = 6;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  Pos_PID_derivatives();

  /* f1 = f(t + (h/2), y + (h/2)*f0) */
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f0[i]);
  }

  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  Pos_PID_output();
  Pos_PID_derivatives();

  /* f2 = f(t + (h/2), y + (h/2)*f1) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f1[i]);
  }

  rtsiSetdX(si, f2);
  Pos_PID_output();
  Pos_PID_derivatives();

  /* f3 = f(t + h, y + h*f2) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (h*f2[i]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  Pos_PID_output();
  Pos_PID_derivatives();

  /* tnew = t + h
     ynew = y + (h/6)*(f0 + 2*f1 + 2*f2 + 2*f3) */
  temp = h / 6.0;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + temp*(f0[i] + 2.0*f1[i] + 2.0*f2[i] + f3[i]);
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model output function */
void Pos_PID_output(void)
{
  real_T u;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* set solver stop time */
    if (!(Pos_PID_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&Pos_PID_M->solverInfo,
                            ((Pos_PID_M->Timing.clockTickH0 + 1) *
        Pos_PID_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&Pos_PID_M->solverInfo,
                            ((Pos_PID_M->Timing.clockTick0 + 1) *
        Pos_PID_M->Timing.stepSize0 + Pos_PID_M->Timing.clockTickH0 *
        Pos_PID_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Pos_PID_M)) {
    Pos_PID_M->Timing.t[0] = rtsiGetT(&Pos_PID_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Level2 S-Function Block: '<S5>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[0];
      sfcnOutputs(rts, 1);
    }

    /* Sum: '<S5>/Sum3' incorporates:
     *  Constant: '<S5>/encoder offsets2'
     */
    Pos_PID_B.Sum3 = Pos_PID_B.counts - Pos_PID_P.encoderoffsets2_Value;

    /* Gain: '<S5>/count_to_mm1' */
    Pos_PID_B.XData = Pos_PID_P.count_to_mm1_Gain * Pos_PID_B.Sum3;

    /* DataStoreWrite: '<Root>/Data Store Write' */
    Pos_PID_DW.Xmem = Pos_PID_B.XData;

    /* Level2 S-Function Block: '<S6>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[1];
      sfcnOutputs(rts, 1);
    }

    /* Sum: '<S6>/Sum2' incorporates:
     *  Constant: '<S6>/encoder offsets1'
     */
    Pos_PID_B.Sum2 = Pos_PID_B.counts_o - Pos_PID_P.encoderoffsets1_Value;

    /* Gain: '<S6>/count_to_mm' */
    Pos_PID_B.YData = Pos_PID_P.count_to_mm_Gain * Pos_PID_B.Sum2;

    /* DataStoreWrite: '<Root>/Data Store Write1' */
    Pos_PID_DW.Ymem = Pos_PID_B.YData;

    /* Level2 S-Function Block: '<S7>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[2];
      sfcnOutputs(rts, 1);
    }

    /* Sum: '<S7>/Sum2' incorporates:
     *  Constant: '<S7>/encoder offsets1'
     */
    Pos_PID_B.Sum2_g = Pos_PID_B.counts_f - Pos_PID_P.encoderoffsets1_Value_f;

    /* Gain: '<S7>/count_to_mm' */
    Pos_PID_B.ZData = Pos_PID_P.count_to_mm_Gain_j * Pos_PID_B.Sum2_g;

    /* DataStoreWrite: '<Root>/Data Store Write2' */
    Pos_PID_DW.Zmem = Pos_PID_B.ZData;

    /* Sum: '<Root>/Sum' incorporates:
     *  Constant: '<Root>/Constant'
     */
    Pos_PID_B.Sum = Pos_PID_P.jogX - Pos_PID_B.XData;

    /* Gain: '<S2>/Proportional Gain' */
    Pos_PID_B.ProportionalGain = Pos_PID_P.kpx * Pos_PID_B.Sum;
  }

  /* DataStoreRead: '<Root>/Data Store Read' */
  Pos_PID_B.DataStoreRead = Pos_PID_DW.Xmem;

  /* Integrator: '<S2>/Integrator' */
  Pos_PID_B.Integrator = Pos_PID_X.Integrator_CSTATE;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Gain: '<S2>/Derivative Gain' */
    Pos_PID_B.DerivativeGain = Pos_PID_P.kdx * Pos_PID_B.Sum;
  }

  /* Integrator: '<S2>/Filter' */
  Pos_PID_B.Filter = Pos_PID_X.Filter_CSTATE;

  /* Sum: '<S2>/SumD' */
  Pos_PID_B.SumD = Pos_PID_B.DerivativeGain - Pos_PID_B.Filter;

  /* Gain: '<S2>/Filter Coefficient' */
  Pos_PID_B.FilterCoefficient = Pos_PID_P.PIDController_N * Pos_PID_B.SumD;

  /* Sum: '<S2>/Sum' */
  Pos_PID_B.Sum_l = (Pos_PID_B.ProportionalGain + Pos_PID_B.Integrator) +
    Pos_PID_B.FilterCoefficient;

  /* Sum: '<Root>/Sum1' */
  Pos_PID_B.Sum1 = Pos_PID_B.DataStoreRead - Pos_PID_B.Sum_l;

  /* Signum: '<Root>/Sign2' */
  u = Pos_PID_B.Sum1;
  if (u < 0.0) {
    Pos_PID_B.motX = -1.0;
  } else if (u > 0.0) {
    Pos_PID_B.motX = 1.0;
  } else if (u == 0.0) {
    Pos_PID_B.motX = 0.0;
  } else {
    Pos_PID_B.motX = u;
  }

  /* End of Signum: '<Root>/Sign2' */

  /* Abs: '<Root>/Abs1' */
  Pos_PID_B.XEnable = fabs(Pos_PID_B.motX);
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_Abs1_at_outport_0' */
    if (rtmIsMajorTimeStep(Pos_PID_M)) {
      {
        double time = Pos_PID_M->Timing.t[1];
        void *pData = (void *)&Pos_PID_B.XEnable;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(1310497986U, time, pData, size);
      }
    }

    /* Sum: '<Root>/Sum2' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    Pos_PID_B.Sum2_n = Pos_PID_P.jogY - Pos_PID_B.YData;

    /* Gain: '<S3>/Proportional Gain' */
    Pos_PID_B.ProportionalGain_e = Pos_PID_P.kpy * Pos_PID_B.Sum2_n;
  }

  /* DataStoreRead: '<Root>/Data Store Read1' */
  Pos_PID_B.DataStoreRead1 = Pos_PID_DW.Ymem;

  /* Integrator: '<S3>/Integrator' */
  Pos_PID_B.Integrator_m = Pos_PID_X.Integrator_CSTATE_h;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Gain: '<S3>/Derivative Gain' */
    Pos_PID_B.DerivativeGain_d = Pos_PID_P.kdy * Pos_PID_B.Sum2_n;
  }

  /* Integrator: '<S3>/Filter' */
  Pos_PID_B.Filter_l = Pos_PID_X.Filter_CSTATE_c;

  /* Sum: '<S3>/SumD' */
  Pos_PID_B.SumD_b = Pos_PID_B.DerivativeGain_d - Pos_PID_B.Filter_l;

  /* Gain: '<S3>/Filter Coefficient' */
  Pos_PID_B.FilterCoefficient_p = Pos_PID_P.PIDController1_N * Pos_PID_B.SumD_b;

  /* Sum: '<S3>/Sum' */
  Pos_PID_B.Sum_d = (Pos_PID_B.ProportionalGain_e + Pos_PID_B.Integrator_m) +
    Pos_PID_B.FilterCoefficient_p;

  /* Sum: '<Root>/Sum3' */
  Pos_PID_B.motY = Pos_PID_B.DataStoreRead1 - Pos_PID_B.Sum_d;

  /* Signum: '<Root>/Sign' */
  u = Pos_PID_B.motY;
  if (u < 0.0) {
    Pos_PID_B.Sign = -1.0;
  } else if (u > 0.0) {
    Pos_PID_B.Sign = 1.0;
  } else if (u == 0.0) {
    Pos_PID_B.Sign = 0.0;
  } else {
    Pos_PID_B.Sign = u;
  }

  /* End of Signum: '<Root>/Sign' */

  /* Abs: '<Root>/Abs' */
  Pos_PID_B.Yenable = fabs(Pos_PID_B.Sign);
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_Abs_at_outport_0' */
    if (rtmIsMajorTimeStep(Pos_PID_M)) {
      {
        double time = Pos_PID_M->Timing.t[1];
        void *pData = (void *)&Pos_PID_B.Yenable;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(4197426349U, time, pData, size);
      }
    }
  }

  /* Gain: '<Root>/Voltage1' */
  Pos_PID_B.xVoltage = Pos_PID_P.Voltage1_Gain * Pos_PID_B.motX;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_Voltage1_at_outport_0' */
    if (rtmIsMajorTimeStep(Pos_PID_M)) {
      {
        double time = Pos_PID_M->Timing.t[1];
        void *pData = (void *)&Pos_PID_B.xVoltage;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(2791117337U, time, pData, size);
      }
    }
  }

  /* Gain: '<Root>/Voltage' */
  Pos_PID_B.VoltageY = Pos_PID_P.Voltage_Gain * Pos_PID_B.Sign;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_Voltage_at_outport_0' */
    if (rtmIsMajorTimeStep(Pos_PID_M)) {
      {
        double time = Pos_PID_M->Timing.t[1];
        void *pData = (void *)&Pos_PID_B.VoltageY;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(3104118056U, time, pData, size);
      }
    }

    /* Sum: '<Root>/Sum4' incorporates:
     *  Constant: '<Root>/Constant2'
     */
    Pos_PID_B.Sum4 = Pos_PID_P.jogZ - Pos_PID_B.ZData;

    /* Gain: '<S4>/Proportional Gain' */
    Pos_PID_B.ProportionalGain_d = Pos_PID_P.kpz * Pos_PID_B.Sum4;
  }

  /* DataStoreRead: '<Root>/Data Store Read2' */
  Pos_PID_B.DataStoreRead2 = Pos_PID_DW.Zmem;

  /* Integrator: '<S4>/Integrator' */
  Pos_PID_B.Integrator_f = Pos_PID_X.Integrator_CSTATE_l;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Gain: '<S4>/Derivative Gain' */
    Pos_PID_B.DerivativeGain_f = Pos_PID_P.kdz * Pos_PID_B.Sum4;
  }

  /* Integrator: '<S4>/Filter' */
  Pos_PID_B.Filter_b = Pos_PID_X.Filter_CSTATE_cw;

  /* Sum: '<S4>/SumD' */
  Pos_PID_B.SumD_k = Pos_PID_B.DerivativeGain_f - Pos_PID_B.Filter_b;

  /* Gain: '<S4>/Filter Coefficient' */
  Pos_PID_B.FilterCoefficient_b = Pos_PID_P.PIDController2_N * Pos_PID_B.SumD_k;

  /* Sum: '<S4>/Sum' */
  Pos_PID_B.Sum_a = (Pos_PID_B.ProportionalGain_d + Pos_PID_B.Integrator_f) +
    Pos_PID_B.FilterCoefficient_b;

  /* Sum: '<Root>/Sum5' */
  Pos_PID_B.motZ = Pos_PID_B.DataStoreRead2 - Pos_PID_B.Sum_a;

  /* Signum: '<Root>/Sign1' */
  u = Pos_PID_B.motZ;
  if (u < 0.0) {
    Pos_PID_B.Sign1 = -1.0;
  } else if (u > 0.0) {
    Pos_PID_B.Sign1 = 1.0;
  } else if (u == 0.0) {
    Pos_PID_B.Sign1 = 0.0;
  } else {
    Pos_PID_B.Sign1 = u;
  }

  /* End of Signum: '<Root>/Sign1' */

  /* Abs: '<Root>/Abs2' */
  Pos_PID_B.Zenable = fabs(Pos_PID_B.Sign1);
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 3' (dipci8255) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[3];
      sfcnOutputs(rts, 1);
    }
  }

  /* Logic: '<Root>/Logical Operator' */
  Pos_PID_B.Zenable_e = ((Pos_PID_B.Zenable != 0.0) && (Pos_PID_B.PCIDDA08123 !=
    0.0));

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  Pos_PID_B.DataTypeConversion = Pos_PID_B.Zenable_e;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 1' (dopci8255) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[4];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[5];
      sfcnOutputs(rts, 1);
    }

    /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[6];
      sfcnOutputs(rts, 1);
    }
  }

  /* Gain: '<Root>/Voltage2' */
  Pos_PID_B.VoltageZ = Pos_PID_P.Voltage2_Gain * Pos_PID_B.Sign1;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[7];
      sfcnOutputs(rts, 1);
    }

    /* Gain: '<S2>/Integral Gain' */
    Pos_PID_B.IntegralGain = Pos_PID_P.kix * Pos_PID_B.Sum;

    /* Gain: '<S3>/Integral Gain' */
    Pos_PID_B.IntegralGain_d = Pos_PID_P.kiy * Pos_PID_B.Sum2_n;

    /* Gain: '<S4>/Integral Gain' */
    Pos_PID_B.IntegralGain_l = Pos_PID_P.kiz * Pos_PID_B.Sum4;

    /* ok to acquire for <S8>/S-Function */
    Pos_PID_DW.SFunction_IWORK.AcquireOK = 1;

    /* ok to acquire for <S9>/S-Function */
    Pos_PID_DW.SFunction_IWORK_j.AcquireOK = 1;

    /* ok to acquire for <S10>/S-Function */
    Pos_PID_DW.SFunction_IWORK_c.AcquireOK = 1;

    /* ToAsyncQueueBlock: '<S5>/HiddenToAsyncQueue_InsertedFor_count_to_mm1_at_outport_0' */
    if (rtmIsMajorTimeStep(Pos_PID_M)) {
      {
        double time = Pos_PID_M->Timing.t[1];
        void *pData = (void *)&Pos_PID_B.XData;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(3356557349U, time, pData, size);
      }
    }

    /* ok to acquire for <S11>/S-Function */
    Pos_PID_DW.SFunction_IWORK_o.AcquireOK = 1;

    /* ok to acquire for <S12>/S-Function */
    Pos_PID_DW.SFunction_IWORK_p.AcquireOK = 1;

    /* ok to acquire for <S13>/S-Function */
    Pos_PID_DW.SFunction_IWORK_pr.AcquireOK = 1;

    /* ToAsyncQueueBlock: '<S6>/HiddenToAsyncQueue_InsertedFor_count_to_mm_at_outport_0' */
    if (rtmIsMajorTimeStep(Pos_PID_M)) {
      {
        double time = Pos_PID_M->Timing.t[1];
        void *pData = (void *)&Pos_PID_B.YData;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(1972202012U, time, pData, size);
      }
    }

    /* ok to acquire for <S14>/S-Function */
    Pos_PID_DW.SFunction_IWORK_i.AcquireOK = 1;

    /* ok to acquire for <S15>/S-Function */
    Pos_PID_DW.SFunction_IWORK_ox.AcquireOK = 1;

    /* ok to acquire for <S16>/S-Function */
    Pos_PID_DW.SFunction_IWORK_f.AcquireOK = 1;
  }
}

/* Model update function */
void Pos_PID_update(void)
{
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    rt_ertODEUpdateContinuousStates(&Pos_PID_M->solverInfo);
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
  if (!(++Pos_PID_M->Timing.clockTick0)) {
    ++Pos_PID_M->Timing.clockTickH0;
  }

  Pos_PID_M->Timing.t[0] = rtsiGetSolverStopTime(&Pos_PID_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Pos_PID_M->Timing.clockTick1)) {
      ++Pos_PID_M->Timing.clockTickH1;
    }

    Pos_PID_M->Timing.t[1] = Pos_PID_M->Timing.clockTick1 *
      Pos_PID_M->Timing.stepSize1 + Pos_PID_M->Timing.clockTickH1 *
      Pos_PID_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void Pos_PID_derivatives(void)
{
  XDot_Pos_PID_T *_rtXdot;
  _rtXdot = ((XDot_Pos_PID_T *) Pos_PID_M->ModelData.derivs);

  /* Derivatives for Integrator: '<S2>/Integrator' */
  _rtXdot->Integrator_CSTATE = Pos_PID_B.IntegralGain;

  /* Derivatives for Integrator: '<S2>/Filter' */
  _rtXdot->Filter_CSTATE = Pos_PID_B.FilterCoefficient;

  /* Derivatives for Integrator: '<S3>/Integrator' */
  _rtXdot->Integrator_CSTATE_h = Pos_PID_B.IntegralGain_d;

  /* Derivatives for Integrator: '<S3>/Filter' */
  _rtXdot->Filter_CSTATE_c = Pos_PID_B.FilterCoefficient_p;

  /* Derivatives for Integrator: '<S4>/Integrator' */
  _rtXdot->Integrator_CSTATE_l = Pos_PID_B.IntegralGain_l;

  /* Derivatives for Integrator: '<S4>/Filter' */
  _rtXdot->Filter_CSTATE_cw = Pos_PID_B.FilterCoefficient_b;
}

/* Model initialize function */
void Pos_PID_initialize(void)
{
  /* Level2 S-Function Block: '<S5>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S6>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S7>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 3' (dipci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 1' (dopci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S8>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,2)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo("X_Encoder/count_to_mm1"));
        rl32eSetScope(3, 4, 500);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        rl32eSetScope(3, 3, rl32eGetSignalNo("X_Encoder/count_to_mm1"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 0);
        rl32eSetScope(3, 9, 0);
        rl32eSetTargetScope(3, 1, 2.0);
        rl32eSetTargetScope(3, 11, 0.0);
        rl32eSetTargetScope(3, 10, 0.0);
        xpceScopeAcqOK(3, &Pos_PID_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* S-Function Block: <S9>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo("X_Encoder/count_to_mm1"));
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("X_Encoder/count_to_mm1"),
          "%15.6f");
        rl32eSetScope(2, 4, 3);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo("X_Encoder/count_to_mm1"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 0.0);
        rl32eSetTargetScope(2, 11, 0.0);
        rl32eSetTargetScope(2, 10, 0.0);
        xpceScopeAcqOK(2, &Pos_PID_DW.SFunction_IWORK_j.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* S-Function Block: <S10>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,3)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("X_Encoder/count_to_mm1"));
        rl32eSetScope(1, 4, 5000);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        xpceFSScopeSet(1, "Xdata.dat", 0, 512, 0, 536870912);
        rl32eSetScope (1, 10, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("X_Encoder/count_to_mm1"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        xpceScopeAcqOK(1, &Pos_PID_DW.SFunction_IWORK_c.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* S-Function Block: <S11>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(6)) == 0) {
      if ((i = rl32eDefScope(6,2)) != 0) {
        printf("Error creating scope 6\n");
      } else {
        rl32eAddSignal(6, rl32eGetSignalNo("Y_encoder /count_to_mm"));
        rl32eSetScope(6, 4, 500);
        rl32eSetScope(6, 5, 0);
        rl32eSetScope(6, 6, 1);
        rl32eSetScope(6, 0, 0);
        rl32eSetScope(6, 3, rl32eGetSignalNo("Y_encoder /count_to_mm"));
        rl32eSetScope(6, 1, 0.0);
        rl32eSetScope(6, 2, 0);
        rl32eSetScope(6, 9, 0);
        rl32eSetTargetScope(6, 1, 3.0);
        rl32eSetTargetScope(6, 11, 0.0);
        rl32eSetTargetScope(6, 10, 0.0);
        xpceScopeAcqOK(6, &Pos_PID_DW.SFunction_IWORK_o.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(6);
    }
  }

  /* S-Function Block: <S12>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,2)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eAddSignal(5, rl32eGetSignalNo("Y_encoder /count_to_mm"));
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Y_encoder /count_to_mm"),
          "%15.6f");
        rl32eSetScope(5, 4, 3);
        rl32eSetScope(5, 5, 0);
        rl32eSetScope(5, 6, 1);
        rl32eSetScope(5, 0, 0);
        rl32eSetScope(5, 3, rl32eGetSignalNo("Y_encoder /count_to_mm"));
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 0);
        rl32eSetScope(5, 9, 0);
        rl32eSetTargetScope(5, 1, 0.0);
        rl32eSetTargetScope(5, 11, 0.0);
        rl32eSetTargetScope(5, 10, 0.0);
        xpceScopeAcqOK(5, &Pos_PID_DW.SFunction_IWORK_p.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(5);
    }
  }

  /* S-Function Block: <S13>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,3)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("Y_encoder /count_to_mm"));
        rl32eSetScope(4, 4, 5000);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 0);
        xpceFSScopeSet(4, "Ydata.dat", 0, 512, 0, 536870912);
        rl32eSetScope (4, 10, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo("Y_encoder /count_to_mm"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 9, 0);
        xpceScopeAcqOK(4, &Pos_PID_DW.SFunction_IWORK_pr.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* S-Function Block: <S14>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(7)) == 0) {
      if ((i = rl32eDefScope(7,2)) != 0) {
        printf("Error creating scope 7\n");
      } else {
        rl32eAddSignal(7, rl32eGetSignalNo("Z_encoder 1/count_to_mm"));
        rl32eSetScope(7, 4, 500);
        rl32eSetScope(7, 5, 0);
        rl32eSetScope(7, 6, 1);
        rl32eSetScope(7, 0, 0);
        rl32eSetScope(7, 3, rl32eGetSignalNo("Z_encoder 1/count_to_mm"));
        rl32eSetScope(7, 1, 0.0);
        rl32eSetScope(7, 2, 0);
        rl32eSetScope(7, 9, 0);
        rl32eSetTargetScope(7, 1, 3.0);
        rl32eSetTargetScope(7, 11, 0.0);
        rl32eSetTargetScope(7, 10, 0.0);
        xpceScopeAcqOK(7, &Pos_PID_DW.SFunction_IWORK_i.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(7);
    }
  }

  /* S-Function Block: <S15>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(8)) == 0) {
      if ((i = rl32eDefScope(8,2)) != 0) {
        printf("Error creating scope 8\n");
      } else {
        rl32eAddSignal(8, rl32eGetSignalNo("Z_encoder 1/count_to_mm"));
        rl32eSetTargetScopeSigFt(8,rl32eGetSignalNo("Z_encoder 1/count_to_mm"),
          "%15.6f");
        rl32eSetScope(8, 4, 3);
        rl32eSetScope(8, 5, 0);
        rl32eSetScope(8, 6, 1);
        rl32eSetScope(8, 0, 0);
        rl32eSetScope(8, 3, rl32eGetSignalNo("Z_encoder 1/count_to_mm"));
        rl32eSetScope(8, 1, 0.0);
        rl32eSetScope(8, 2, 0);
        rl32eSetScope(8, 9, 0);
        rl32eSetTargetScope(8, 1, 0.0);
        rl32eSetTargetScope(8, 11, 0.0);
        rl32eSetTargetScope(8, 10, 0.0);
        xpceScopeAcqOK(8, &Pos_PID_DW.SFunction_IWORK_ox.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(8);
    }
  }

  /* S-Function Block: <S16>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(9)) == 0) {
      if ((i = rl32eDefScope(9,3)) != 0) {
        printf("Error creating scope 9\n");
      } else {
        rl32eAddSignal(9, rl32eGetSignalNo("Z_encoder 1/count_to_mm"));
        rl32eSetScope(9, 4, 5000);
        rl32eSetScope(9, 5, 0);
        rl32eSetScope(9, 6, 1);
        rl32eSetScope(9, 0, 0);
        xpceFSScopeSet(9, "Zdata.dat", 0, 512, 0, 536870912);
        rl32eSetScope (9, 10, 0);
        rl32eSetScope(9, 3, rl32eGetSignalNo("Z_encoder 1/count_to_mm"));
        rl32eSetScope(9, 1, 0.0);
        rl32eSetScope(9, 2, 0);
        rl32eSetScope(9, 9, 0);
        xpceScopeAcqOK(9, &Pos_PID_DW.SFunction_IWORK_f.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(9);
    }
  }

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  Pos_PID_DW.Xmem = Pos_PID_P.DataStoreMemory_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  Pos_PID_DW.Ymem = Pos_PID_P.DataStoreMemory1_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory2' */
  Pos_PID_DW.Zmem = Pos_PID_P.DataStoreMemory2_InitialValue;

  /* InitializeConditions for Integrator: '<S2>/Integrator' */
  Pos_PID_X.Integrator_CSTATE = Pos_PID_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S2>/Filter' */
  Pos_PID_X.Filter_CSTATE = Pos_PID_P.Filter_IC;

  /* InitializeConditions for Integrator: '<S3>/Integrator' */
  Pos_PID_X.Integrator_CSTATE_h = Pos_PID_P.Integrator_IC_o;

  /* InitializeConditions for Integrator: '<S3>/Filter' */
  Pos_PID_X.Filter_CSTATE_c = Pos_PID_P.Filter_IC_m;

  /* InitializeConditions for Integrator: '<S4>/Integrator' */
  Pos_PID_X.Integrator_CSTATE_l = Pos_PID_P.Integrator_IC_j;

  /* InitializeConditions for Integrator: '<S4>/Filter' */
  Pos_PID_X.Filter_CSTATE_cw = Pos_PID_P.Filter_IC_k;
}

/* Model terminate function */
void Pos_PID_terminate(void)
{
  /* Level2 S-Function Block: '<S5>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S6>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S7>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 3' (dipci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 1' (dopci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[7];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  Pos_PID_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  Pos_PID_update();
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
  Pos_PID_initialize();
}

void MdlTerminate(void)
{
  Pos_PID_terminate();
}

/* Registration function */
RT_MODEL_Pos_PID_T *Pos_PID(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Pos_PID_M, 0,
                sizeof(RT_MODEL_Pos_PID_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Pos_PID_M->solverInfo, &Pos_PID_M->Timing.simTimeStep);
    rtsiSetTPtr(&Pos_PID_M->solverInfo, &rtmGetTPtr(Pos_PID_M));
    rtsiSetStepSizePtr(&Pos_PID_M->solverInfo, &Pos_PID_M->Timing.stepSize0);
    rtsiSetdXPtr(&Pos_PID_M->solverInfo, &Pos_PID_M->ModelData.derivs);
    rtsiSetContStatesPtr(&Pos_PID_M->solverInfo, (real_T **)
                         &Pos_PID_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&Pos_PID_M->solverInfo,
      &Pos_PID_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&Pos_PID_M->solverInfo,
      &Pos_PID_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&Pos_PID_M->solverInfo,
      &Pos_PID_M->ModelData.periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&Pos_PID_M->solverInfo,
      &Pos_PID_M->ModelData.periodicContStateRanges);
    rtsiSetErrorStatusPtr(&Pos_PID_M->solverInfo, (&rtmGetErrorStatus(Pos_PID_M)));
    rtsiSetRTModelPtr(&Pos_PID_M->solverInfo, Pos_PID_M);
  }

  rtsiSetSimTimeStep(&Pos_PID_M->solverInfo, MAJOR_TIME_STEP);
  Pos_PID_M->ModelData.intgData.y = Pos_PID_M->ModelData.odeY;
  Pos_PID_M->ModelData.intgData.f[0] = Pos_PID_M->ModelData.odeF[0];
  Pos_PID_M->ModelData.intgData.f[1] = Pos_PID_M->ModelData.odeF[1];
  Pos_PID_M->ModelData.intgData.f[2] = Pos_PID_M->ModelData.odeF[2];
  Pos_PID_M->ModelData.intgData.f[3] = Pos_PID_M->ModelData.odeF[3];
  Pos_PID_M->ModelData.contStates = ((real_T *) &Pos_PID_X);
  rtsiSetSolverData(&Pos_PID_M->solverInfo, (void *)
                    &Pos_PID_M->ModelData.intgData);
  rtsiSetSolverName(&Pos_PID_M->solverInfo,"ode4");
  Pos_PID_M->solverInfoPtr = (&Pos_PID_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Pos_PID_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    Pos_PID_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Pos_PID_M->Timing.sampleTimes = (&Pos_PID_M->Timing.sampleTimesArray[0]);
    Pos_PID_M->Timing.offsetTimes = (&Pos_PID_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Pos_PID_M->Timing.sampleTimes[0] = (0.0);
    Pos_PID_M->Timing.sampleTimes[1] = (0.01);

    /* task offsets */
    Pos_PID_M->Timing.offsetTimes[0] = (0.0);
    Pos_PID_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Pos_PID_M, &Pos_PID_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Pos_PID_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    Pos_PID_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Pos_PID_M, -1);
  Pos_PID_M->Timing.stepSize0 = 0.01;
  Pos_PID_M->Timing.stepSize1 = 0.01;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    Pos_PID_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Pos_PID_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Pos_PID_M->rtwLogInfo, (NULL));
    rtliSetLogT(Pos_PID_M->rtwLogInfo, "tout");
    rtliSetLogX(Pos_PID_M->rtwLogInfo, "");
    rtliSetLogXFinal(Pos_PID_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Pos_PID_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Pos_PID_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(Pos_PID_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Pos_PID_M->rtwLogInfo, 1);
    rtliSetLogY(Pos_PID_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Pos_PID_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Pos_PID_M->rtwLogInfo, (NULL));
  }

  Pos_PID_M->solverInfoPtr = (&Pos_PID_M->solverInfo);
  Pos_PID_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&Pos_PID_M->solverInfo, 0.01);
  rtsiSetSolverMode(&Pos_PID_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Pos_PID_M->ModelData.blockIO = ((void *) &Pos_PID_B);
  (void) memset(((void *) &Pos_PID_B), 0,
                sizeof(B_Pos_PID_T));

  /* parameters */
  Pos_PID_M->ModelData.defaultParam = ((real_T *)&Pos_PID_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &Pos_PID_X;
    Pos_PID_M->ModelData.contStates = (x);
    (void) memset((void *)&Pos_PID_X, 0,
                  sizeof(X_Pos_PID_T));
  }

  /* states (dwork) */
  Pos_PID_M->ModelData.dwork = ((void *) &Pos_PID_DW);
  (void) memset((void *)&Pos_PID_DW, 0,
                sizeof(DW_Pos_PID_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  Pos_PID_InitializeDataMapInfo(Pos_PID_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Pos_PID_M->NonInlinedSFcns.sfcnInfo;
    Pos_PID_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(Pos_PID_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &Pos_PID_M->Sizes.numSampTimes);
    Pos_PID_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(Pos_PID_M)[0]);
    Pos_PID_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(Pos_PID_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,Pos_PID_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Pos_PID_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Pos_PID_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(Pos_PID_M));
    rtssSetStepSizePtr(sfcnInfo, &Pos_PID_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(Pos_PID_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Pos_PID_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &Pos_PID_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &Pos_PID_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &Pos_PID_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &Pos_PID_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Pos_PID_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Pos_PID_M->solverInfoPtr);
  }

  Pos_PID_M->Sizes.numSFcns = (8);

  /* register each child */
  {
    (void) memset((void *)&Pos_PID_M->NonInlinedSFcns.childSFunctions[0], 0,
                  8*sizeof(SimStruct));
    Pos_PID_M->childSfunctions = (&Pos_PID_M->
      NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 8; i++) {
        Pos_PID_M->childSfunctions[i] =
          (&Pos_PID_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: Pos_PID/<S5>/CNT32-8M(PCI) 2 (encconteccnt328mpci) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = Pos_PID_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = Pos_PID_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = Pos_PID_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Pos_PID_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, Pos_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Pos_PID_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Pos_PID_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Pos_PID_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &Pos_PID_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Pos_PID_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &Pos_PID_B.counts));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) 2");
      ssSetPath(rts, "Pos_PID/X_Encoder/CNT32-8M(PCI) 2");
      ssSetRTModel(rts,Pos_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Pos_PID_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Pos_PID_P.CNT328MPCI2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Pos_PID_P.CNT328MPCI2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Pos_PID_P.CNT328MPCI2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Pos_PID_P.CNT328MPCI2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Pos_PID_P.CNT328MPCI2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Pos_PID_P.CNT328MPCI2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Pos_PID_P.CNT328MPCI2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Pos_PID_P.CNT328MPCI2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Pos_PID_P.CNT328MPCI2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Pos_PID_P.CNT328MPCI2_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)Pos_PID_P.CNT328MPCI2_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)Pos_PID_P.CNT328MPCI2_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)Pos_PID_P.CNT328MPCI2_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)Pos_PID_P.CNT328MPCI2_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)Pos_PID_P.CNT328MPCI2_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)Pos_PID_P.CNT328MPCI2_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)Pos_PID_P.CNT328MPCI2_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)Pos_PID_P.CNT328MPCI2_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)Pos_PID_P.CNT328MPCI2_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)Pos_PID_P.CNT328MPCI2_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)Pos_PID_P.CNT328MPCI2_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)Pos_PID_P.CNT328MPCI2_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)Pos_PID_P.CNT328MPCI2_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)Pos_PID_P.CNT328MPCI2_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)Pos_PID_P.CNT328MPCI2_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)Pos_PID_P.CNT328MPCI2_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)Pos_PID_P.CNT328MPCI2_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)Pos_PID_P.CNT328MPCI2_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)Pos_PID_P.CNT328MPCI2_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)Pos_PID_P.CNT328MPCI2_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)Pos_PID_P.CNT328MPCI2_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)Pos_PID_P.CNT328MPCI2_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)Pos_PID_P.CNT328MPCI2_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)Pos_PID_P.CNT328MPCI2_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)Pos_PID_P.CNT328MPCI2_P35_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Pos_PID_DW.CNT328MPCI2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Pos_PID_DW.CNT328MPCI2_IWORK[0]);
      }

      /* registration */
      encconteccnt328mpci(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Pos_PID/<S6>/CNT32-8M(PCI) 1 (encconteccnt328mpci) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = Pos_PID_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = Pos_PID_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = Pos_PID_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Pos_PID_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, Pos_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Pos_PID_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Pos_PID_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Pos_PID_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &Pos_PID_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Pos_PID_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &Pos_PID_B.counts_o));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) 1");
      ssSetPath(rts, "Pos_PID/Y_encoder /CNT32-8M(PCI) 1");
      ssSetRTModel(rts,Pos_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Pos_PID_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Pos_PID_P.CNT328MPCI1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Pos_PID_P.CNT328MPCI1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Pos_PID_P.CNT328MPCI1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Pos_PID_P.CNT328MPCI1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Pos_PID_P.CNT328MPCI1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Pos_PID_P.CNT328MPCI1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Pos_PID_P.CNT328MPCI1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Pos_PID_P.CNT328MPCI1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Pos_PID_P.CNT328MPCI1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Pos_PID_P.CNT328MPCI1_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)Pos_PID_P.CNT328MPCI1_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)Pos_PID_P.CNT328MPCI1_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)Pos_PID_P.CNT328MPCI1_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)Pos_PID_P.CNT328MPCI1_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)Pos_PID_P.CNT328MPCI1_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)Pos_PID_P.CNT328MPCI1_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)Pos_PID_P.CNT328MPCI1_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)Pos_PID_P.CNT328MPCI1_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)Pos_PID_P.CNT328MPCI1_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)Pos_PID_P.CNT328MPCI1_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)Pos_PID_P.CNT328MPCI1_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)Pos_PID_P.CNT328MPCI1_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)Pos_PID_P.CNT328MPCI1_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)Pos_PID_P.CNT328MPCI1_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)Pos_PID_P.CNT328MPCI1_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)Pos_PID_P.CNT328MPCI1_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)Pos_PID_P.CNT328MPCI1_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)Pos_PID_P.CNT328MPCI1_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)Pos_PID_P.CNT328MPCI1_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)Pos_PID_P.CNT328MPCI1_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)Pos_PID_P.CNT328MPCI1_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)Pos_PID_P.CNT328MPCI1_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)Pos_PID_P.CNT328MPCI1_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)Pos_PID_P.CNT328MPCI1_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)Pos_PID_P.CNT328MPCI1_P35_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Pos_PID_DW.CNT328MPCI1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Pos_PID_DW.CNT328MPCI1_IWORK[0]);
      }

      /* registration */
      encconteccnt328mpci(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Pos_PID/<S7>/CNT32-8M(PCI) 1 (encconteccnt328mpci) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = Pos_PID_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = Pos_PID_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = Pos_PID_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Pos_PID_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, Pos_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Pos_PID_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Pos_PID_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Pos_PID_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &Pos_PID_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Pos_PID_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &Pos_PID_B.counts_f));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) 1");
      ssSetPath(rts, "Pos_PID/Z_encoder 1/CNT32-8M(PCI) 1");
      ssSetRTModel(rts,Pos_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Pos_PID_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Pos_PID_P.CNT328MPCI1_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)Pos_PID_P.CNT328MPCI1_P2_Size_l);
        ssSetSFcnParam(rts, 2, (mxArray*)Pos_PID_P.CNT328MPCI1_P3_Size_b);
        ssSetSFcnParam(rts, 3, (mxArray*)Pos_PID_P.CNT328MPCI1_P4_Size_g);
        ssSetSFcnParam(rts, 4, (mxArray*)Pos_PID_P.CNT328MPCI1_P5_Size_m);
        ssSetSFcnParam(rts, 5, (mxArray*)Pos_PID_P.CNT328MPCI1_P6_Size_n);
        ssSetSFcnParam(rts, 6, (mxArray*)Pos_PID_P.CNT328MPCI1_P7_Size_d);
        ssSetSFcnParam(rts, 7, (mxArray*)Pos_PID_P.CNT328MPCI1_P8_Size_i);
        ssSetSFcnParam(rts, 8, (mxArray*)Pos_PID_P.CNT328MPCI1_P9_Size_a);
        ssSetSFcnParam(rts, 9, (mxArray*)Pos_PID_P.CNT328MPCI1_P10_Size_h);
        ssSetSFcnParam(rts, 10, (mxArray*)Pos_PID_P.CNT328MPCI1_P11_Size_j);
        ssSetSFcnParam(rts, 11, (mxArray*)Pos_PID_P.CNT328MPCI1_P12_Size_n);
        ssSetSFcnParam(rts, 12, (mxArray*)Pos_PID_P.CNT328MPCI1_P13_Size_a);
        ssSetSFcnParam(rts, 13, (mxArray*)Pos_PID_P.CNT328MPCI1_P14_Size_e);
        ssSetSFcnParam(rts, 14, (mxArray*)Pos_PID_P.CNT328MPCI1_P15_Size_d);
        ssSetSFcnParam(rts, 15, (mxArray*)Pos_PID_P.CNT328MPCI1_P16_Size_i);
        ssSetSFcnParam(rts, 16, (mxArray*)Pos_PID_P.CNT328MPCI1_P17_Size_c);
        ssSetSFcnParam(rts, 17, (mxArray*)Pos_PID_P.CNT328MPCI1_P18_Size_i);
        ssSetSFcnParam(rts, 18, (mxArray*)Pos_PID_P.CNT328MPCI1_P19_Size_j);
        ssSetSFcnParam(rts, 19, (mxArray*)Pos_PID_P.CNT328MPCI1_P20_Size_e);
        ssSetSFcnParam(rts, 20, (mxArray*)Pos_PID_P.CNT328MPCI1_P21_Size_e);
        ssSetSFcnParam(rts, 21, (mxArray*)Pos_PID_P.CNT328MPCI1_P22_Size_p);
        ssSetSFcnParam(rts, 22, (mxArray*)Pos_PID_P.CNT328MPCI1_P23_Size_k);
        ssSetSFcnParam(rts, 23, (mxArray*)Pos_PID_P.CNT328MPCI1_P24_Size_k);
        ssSetSFcnParam(rts, 24, (mxArray*)Pos_PID_P.CNT328MPCI1_P25_Size_m);
        ssSetSFcnParam(rts, 25, (mxArray*)Pos_PID_P.CNT328MPCI1_P26_Size_m);
        ssSetSFcnParam(rts, 26, (mxArray*)Pos_PID_P.CNT328MPCI1_P27_Size_a);
        ssSetSFcnParam(rts, 27, (mxArray*)Pos_PID_P.CNT328MPCI1_P28_Size_i);
        ssSetSFcnParam(rts, 28, (mxArray*)Pos_PID_P.CNT328MPCI1_P29_Size_b);
        ssSetSFcnParam(rts, 29, (mxArray*)Pos_PID_P.CNT328MPCI1_P30_Size_o);
        ssSetSFcnParam(rts, 30, (mxArray*)Pos_PID_P.CNT328MPCI1_P31_Size_j);
        ssSetSFcnParam(rts, 31, (mxArray*)Pos_PID_P.CNT328MPCI1_P32_Size_n);
        ssSetSFcnParam(rts, 32, (mxArray*)Pos_PID_P.CNT328MPCI1_P33_Size_a);
        ssSetSFcnParam(rts, 33, (mxArray*)Pos_PID_P.CNT328MPCI1_P34_Size_l);
        ssSetSFcnParam(rts, 34, (mxArray*)Pos_PID_P.CNT328MPCI1_P35_Size_b);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Pos_PID_DW.CNT328MPCI1_IWORK_h[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Pos_PID_DW.CNT328MPCI1_IWORK_h[0]);
      }

      /* registration */
      encconteccnt328mpci(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Pos_PID/<Root>/PCI-DDA08 12 3 (dipci8255) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = Pos_PID_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = Pos_PID_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = Pos_PID_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Pos_PID_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, Pos_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Pos_PID_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Pos_PID_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Pos_PID_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &Pos_PID_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Pos_PID_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &Pos_PID_B.PCIDDA08123));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 3");
      ssSetPath(rts, "Pos_PID/PCI-DDA08 12 3");
      ssSetRTModel(rts,Pos_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Pos_PID_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Pos_PID_P.PCIDDA08123_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Pos_PID_P.PCIDDA08123_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Pos_PID_P.PCIDDA08123_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Pos_PID_P.PCIDDA08123_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Pos_PID_P.PCIDDA08123_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Pos_PID_P.PCIDDA08123_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Pos_PID_P.PCIDDA08123_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Pos_PID_P.PCIDDA08123_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Pos_PID_DW.PCIDDA08123_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Pos_PID_DW.PCIDDA08123_IWORK[0]);
      }

      /* registration */
      dipci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Pos_PID/<Root>/PCI-DDA 08 12 1 (dopci8255) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = Pos_PID_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = Pos_PID_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = Pos_PID_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Pos_PID_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, Pos_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Pos_PID_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Pos_PID_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Pos_PID_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &Pos_PID_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Pos_PID_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Pos_PID_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &Pos_PID_B.DataTypeConversion;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 1");
      ssSetPath(rts, "Pos_PID/PCI-DDA 08 12 1");
      ssSetRTModel(rts,Pos_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Pos_PID_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Pos_PID_P.PCIDDA08121_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Pos_PID_P.PCIDDA08121_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Pos_PID_P.PCIDDA08121_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Pos_PID_P.PCIDDA08121_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Pos_PID_P.PCIDDA08121_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Pos_PID_P.PCIDDA08121_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Pos_PID_P.PCIDDA08121_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Pos_PID_P.PCIDDA08121_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Pos_PID_P.PCIDDA08121_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Pos_PID_P.PCIDDA08121_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Pos_PID_DW.PCIDDA08121_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Pos_PID_DW.PCIDDA08121_IWORK[0]);
      }

      /* registration */
      dopci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Pos_PID/<Root>/PCI-DDA 08 12 3 (dopci8255) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = Pos_PID_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = Pos_PID_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = Pos_PID_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Pos_PID_M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, Pos_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Pos_PID_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Pos_PID_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Pos_PID_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &Pos_PID_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Pos_PID_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Pos_PID_M->NonInlinedSFcns.Sfcn5.UPtrs0;
          sfcnUPtrs[0] = &Pos_PID_B.Yenable;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 3");
      ssSetPath(rts, "Pos_PID/PCI-DDA 08 12 3");
      ssSetRTModel(rts,Pos_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Pos_PID_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Pos_PID_P.PCIDDA08123_P1_Size_l);
        ssSetSFcnParam(rts, 1, (mxArray*)Pos_PID_P.PCIDDA08123_P2_Size_n);
        ssSetSFcnParam(rts, 2, (mxArray*)Pos_PID_P.PCIDDA08123_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)Pos_PID_P.PCIDDA08123_P4_Size_j);
        ssSetSFcnParam(rts, 4, (mxArray*)Pos_PID_P.PCIDDA08123_P5_Size_j);
        ssSetSFcnParam(rts, 5, (mxArray*)Pos_PID_P.PCIDDA08123_P6_Size_b);
        ssSetSFcnParam(rts, 6, (mxArray*)Pos_PID_P.PCIDDA08123_P7_Size_g);
        ssSetSFcnParam(rts, 7, (mxArray*)Pos_PID_P.PCIDDA08123_P8_Size_e);
        ssSetSFcnParam(rts, 8, (mxArray*)Pos_PID_P.PCIDDA08123_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Pos_PID_P.PCIDDA08123_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Pos_PID_DW.PCIDDA08123_IWORK_a[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Pos_PID_DW.PCIDDA08123_IWORK_a[0]);
      }

      /* registration */
      dopci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Pos_PID/<Root>/PCI-DDA 08 12 4 (dopci8255) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = Pos_PID_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = Pos_PID_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = Pos_PID_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Pos_PID_M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, Pos_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Pos_PID_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Pos_PID_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Pos_PID_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &Pos_PID_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Pos_PID_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Pos_PID_M->NonInlinedSFcns.Sfcn6.UPtrs0;
          sfcnUPtrs[0] = &Pos_PID_B.XEnable;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 4");
      ssSetPath(rts, "Pos_PID/PCI-DDA 08 12 4");
      ssSetRTModel(rts,Pos_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Pos_PID_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Pos_PID_P.PCIDDA08124_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Pos_PID_P.PCIDDA08124_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Pos_PID_P.PCIDDA08124_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Pos_PID_P.PCIDDA08124_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Pos_PID_P.PCIDDA08124_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Pos_PID_P.PCIDDA08124_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Pos_PID_P.PCIDDA08124_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Pos_PID_P.PCIDDA08124_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Pos_PID_P.PCIDDA08124_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Pos_PID_P.PCIDDA08124_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Pos_PID_DW.PCIDDA08124_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Pos_PID_DW.PCIDDA08124_IWORK[0]);
      }

      /* registration */
      dopci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Pos_PID/<Root>/PCI-DDA08 12  (dacbpcidda0x12) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = Pos_PID_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = Pos_PID_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = Pos_PID_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Pos_PID_M->NonInlinedSFcns.blkInfo2[7]);
      }

      ssSetRTWSfcnInfo(rts, Pos_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Pos_PID_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Pos_PID_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Pos_PID_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &Pos_PID_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Pos_PID_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Pos_PID_M->NonInlinedSFcns.Sfcn7.UPtrs0;
          sfcnUPtrs[0] = &Pos_PID_B.xVoltage;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Pos_PID_M->NonInlinedSFcns.Sfcn7.UPtrs1;
          sfcnUPtrs[0] = &Pos_PID_B.VoltageY;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Pos_PID_M->NonInlinedSFcns.Sfcn7.UPtrs2;
          sfcnUPtrs[0] = &Pos_PID_B.VoltageZ;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 ");
      ssSetPath(rts, "Pos_PID/PCI-DDA08 12 ");
      ssSetRTModel(rts,Pos_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Pos_PID_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Pos_PID_P.PCIDDA0812_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Pos_PID_P.PCIDDA0812_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Pos_PID_P.PCIDDA0812_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Pos_PID_P.PCIDDA0812_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Pos_PID_P.PCIDDA0812_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Pos_PID_P.PCIDDA0812_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Pos_PID_P.PCIDDA0812_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Pos_PID_DW.PCIDDA0812_RWORK[0]);
      ssSetIWork(rts, (int_T *) &Pos_PID_DW.PCIDDA0812_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 16);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Pos_PID_DW.PCIDDA0812_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 4);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Pos_PID_DW.PCIDDA0812_IWORK[0]);
      }

      /* registration */
      dacbpcidda0x12(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

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
  }

  /* Initialize Sizes */
  Pos_PID_M->Sizes.numContStates = (6);/* Number of continuous states */
  Pos_PID_M->Sizes.numPeriodicContStates = (0);/* Number of periodic continuous states */
  Pos_PID_M->Sizes.numY = (0);         /* Number of model outputs */
  Pos_PID_M->Sizes.numU = (0);         /* Number of model inputs */
  Pos_PID_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Pos_PID_M->Sizes.numSampTimes = (2); /* Number of sample times */
  Pos_PID_M->Sizes.numBlocks = (85);   /* Number of blocks */
  Pos_PID_M->Sizes.numBlockIO = (54);  /* Number of block outputs */
  Pos_PID_M->Sizes.numBlockPrms = (502);/* Sum of parameter "widths" */
  return Pos_PID_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
