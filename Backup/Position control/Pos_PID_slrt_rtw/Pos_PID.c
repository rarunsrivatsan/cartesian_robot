/*
 * Pos_PID.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Pos_PID".
 *
 * Model version              : 1.387
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Sun Apr 23 16:31:46 2017
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
uint32_T plook_u32d_bincka(real_T u, const real_T bp[], uint32_T maxIndex)
{
  uint32_T bpIndex;

  /* Prelookup - Index only
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp[0U]) {
    bpIndex = 0U;
  } else if (u < bp[maxIndex]) {
    bpIndex = binsearch_u32d(u, bp, maxIndex >> 1U, maxIndex);
  } else {
    bpIndex = maxIndex;
  }

  return bpIndex;
}

uint32_T binsearch_u32d(real_T u, const real_T bp[], uint32_T startIndex,
  uint32_T maxIndex)
{
  uint32_T bpIndex;
  uint32_T iRght;
  uint32_T bpIdx;

  /* Binary Search */
  bpIdx = startIndex;
  bpIndex = 0U;
  iRght = maxIndex;
  while (iRght - bpIndex > 1U) {
    if (u < bp[bpIdx]) {
      iRght = bpIdx;
    } else {
      bpIndex = bpIdx;
    }

    bpIdx = (iRght + bpIndex) >> 1U;
  }

  return bpIndex;
}

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

/*
 * Output and update for atomic system:
 *    '<S8>/Deadband pulse counter'
 *    '<S12>/Deadband pulse counter'
 *    '<S16>/Deadband pulse counter'
 */
void Pos_PID_Deadbandpulsecounter(real_T rtu_e, real_T rtu_db,
  B_Deadbandpulsecounter_Pos_PI_T *localB)
{
  /* MATLAB Function 'X Position signal/Deadband pulse counter': '<S24>:1' */
  if ((rtu_e > -rtu_db) && (rtu_e < rtu_db)) {
    /* '<S24>:1:3' */
    /* '<S24>:1:4' */
    localB->pulse = 1.0;
  } else {
    /* '<S24>:1:6' */
    localB->pulse = 0.0;
  }
}

uint32_T MWDSP_EPH_R_B(boolean_T evt, uint32_T *sta)
{
  uint32_T retVal;
  int32_T curState;
  int32_T newState;
  int32_T newStateR;
  int32_T lastzcevent;
  uint32_T previousState;

  /* S-Function (sdspcount2): '<S7>/X Matrix Counter' */
  /* Detect rising edge events */
  previousState = *sta;
  retVal = 0U;
  lastzcevent = 0;
  newState = 5;
  newStateR = 5;
  if (evt) {
    curState = 2;
  } else {
    curState = 1;
  }

  if (previousState == 5U) {
    newStateR = curState;
  } else {
    if ((uint32_T)curState != previousState) {
      if (previousState == 3U) {
        if ((uint32_T)curState == 1U) {
          newStateR = 1;
        } else {
          lastzcevent = 2;
          previousState = 1U;
        }
      }

      if (previousState == 4U) {
        if ((uint32_T)curState == 1U) {
          newStateR = 1;
        } else {
          lastzcevent = 3;
          previousState = 1U;
        }
      }

      if ((previousState == 1U) && ((uint32_T)curState == 2U)) {
        retVal = 2U;
      }

      if (previousState == 0U) {
        retVal = 2U;
      }

      if (retVal == (uint32_T)lastzcevent) {
        retVal = 0U;
      }

      if (((uint32_T)curState == 1U) && (retVal == 2U)) {
        newState = 3;
      } else {
        newState = curState;
      }
    }
  }

  if ((uint32_T)newStateR != 5U) {
    *sta = (uint32_T)newStateR;
    retVal = 0U;
  }

  if ((uint32_T)newState != 5U) {
    *sta = (uint32_T)newState;
  }

  /* End of S-Function (sdspcount2): '<S7>/X Matrix Counter' */
  return retVal;
}

uint32_T MWDSP_EPH_R_D(real_T evt, uint32_T *sta)
{
  uint32_T retVal;
  int32_T curState;
  int32_T newState;
  int32_T newStateR;
  int32_T lastzcevent;
  uint32_T previousState;

  /* S-Function (sdspcount2): '<S7>/X Matrix Counter' */
  /* Detect rising edge events */
  previousState = *sta;
  retVal = 0U;
  lastzcevent = 0;
  newState = 5;
  newStateR = 5;
  if (evt > 0.0) {
    curState = 2;
  } else {
    curState = !(evt < 0.0);
  }

  if (previousState == 5U) {
    newStateR = curState;
  } else {
    if ((uint32_T)curState != previousState) {
      if (previousState == 3U) {
        if ((uint32_T)curState == 1U) {
          newStateR = 1;
        } else {
          lastzcevent = 2;
          previousState = 1U;
        }
      }

      if (previousState == 4U) {
        if ((uint32_T)curState == 1U) {
          newStateR = 1;
        } else {
          lastzcevent = 3;
          previousState = 1U;
        }
      }

      if ((previousState == 1U) && ((uint32_T)curState == 2U)) {
        retVal = 2U;
      }

      if (previousState == 0U) {
        retVal = 2U;
      }

      if (retVal == (uint32_T)lastzcevent) {
        retVal = 0U;
      }

      if (((uint32_T)curState == 1U) && (retVal == 2U)) {
        newState = 3;
      } else {
        newState = curState;
      }
    }
  }

  if ((uint32_T)newStateR != 5U) {
    *sta = (uint32_T)newStateR;
    retVal = 0U;
  }

  if ((uint32_T)newState != 5U) {
    *sta = (uint32_T)newState;
  }

  /* End of S-Function (sdspcount2): '<S7>/X Matrix Counter' */
  return retVal;
}

/* Model output function */
void Pos_PID_output(void)
{
  uint32_T bpIdx;
  boolean_T tmp;
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

  /* DataStoreRead: '<Root>/Data Store Read' */
  Pos_PID_B.DataStoreRead = Pos_PID_DW.Xmem;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Level2 S-Function Block: '<S10>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[0];
      sfcnOutputs(rts, 1);
    }

    /* Sum: '<S10>/Sum3' incorporates:
     *  Constant: '<S10>/encoder offsets2'
     */
    Pos_PID_B.Sum3 = Pos_PID_B.counts - Pos_PID_P.encoderoffsets2_Value;

    /* Gain: '<S10>/count_to_mm1' */
    Pos_PID_B.XData = Pos_PID_P.count_to_mm1_Gain * Pos_PID_B.Sum3;
  }

  /* DataStoreRead: '<S7>/Data Store Read5' */
  Pos_PID_B.DataStoreRead5 = Pos_PID_DW.RFlag;

  /* DataTypeConversion: '<S7>/Data Type Conversion3' */
  Pos_PID_B.DataTypeConversion3 = Pos_PID_B.DataStoreRead5;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* UnitDelay: '<S7>/Unit Delay2' */
    Pos_PID_B.UnitDelay2 = Pos_PID_DW.UnitDelay2_DSTATE;

    /* S-Function (sdspcount2): '<S7>/X Matrix Counter' */
    Pos_PID_B.XMatrixCounter_o2 = false;
    if (MWDSP_EPH_R_B(Pos_PID_B.UnitDelay2,
                      &Pos_PID_DW.XMatrixCounter_RstEphState) != 0U) {
      Pos_PID_DW.XMatrixCounter_Count = Pos_PID_P.XMatrixCounter_InitialCount;
    }

    if (MWDSP_EPH_R_D(Pos_PID_B.DataTypeConversion3,
                      &Pos_PID_DW.XMatrixCounter_ClkEphState) != 0U) {
      if (Pos_PID_DW.XMatrixCounter_Count < ((uint8_T)255U)) {
        Pos_PID_DW.XMatrixCounter_Count++;
      } else {
        Pos_PID_DW.XMatrixCounter_Count = 0U;
      }
    }

    Pos_PID_B.XMatrixindex = Pos_PID_DW.XMatrixCounter_Count;
    if (Pos_PID_DW.XMatrixCounter_Count == Pos_PID_P.XMatrixCounter_HitValue) {
      Pos_PID_B.XMatrixCounter_o2 = true;
    }

    /* End of S-Function (sdspcount2): '<S7>/X Matrix Counter' */

    /* Lookup_n-D: '<S7>/X Matrix output' */
    bpIdx = plook_u32d_bincka(Pos_PID_B.XMatrixindex,
      Pos_PID_P.XMatrixoutput_bp01Data, 20U);
    Pos_PID_B.XMatrixoutput = Pos_PID_P.xpos[bpIdx];

    /* Sum: '<Root>/Sum' */
    Pos_PID_B.Sum = Pos_PID_B.XMatrixoutput - Pos_PID_B.XData;

    /* Gain: '<S2>/Proportional Gain' */
    Pos_PID_B.ProportionalGain = Pos_PID_P.kpx * Pos_PID_B.Sum;

    /* Gain: '<S2>/Derivative Gain' */
    Pos_PID_B.DerivativeGain = Pos_PID_P.kdx * Pos_PID_B.Sum;
  }

  /* Integrator: '<S2>/Integrator' */
  Pos_PID_B.Integrator = Pos_PID_X.Integrator_CSTATE;

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

  /* MATLAB Function: '<S8>/Deadband pulse counter' incorporates:
   *  Constant: '<S8>/Constant3'
   */
  Pos_PID_Deadbandpulsecounter(Pos_PID_B.Sum1, Pos_PID_P.db_x,
    &Pos_PID_B.sf_Deadbandpulsecounter);
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* UnitDelay: '<S8>/Unit Delay' */
    Pos_PID_B.UnitDelay = Pos_PID_DW.UnitDelay_DSTATE;

    /* S-Function (sdspcount2): '<S8>/Counter' */
    Pos_PID_B.Counter_o2 = false;
    if (MWDSP_EPH_R_B(Pos_PID_B.UnitDelay, &Pos_PID_DW.Counter_RstEphState) !=
        0U) {
      Pos_PID_DW.Counter_Count = Pos_PID_P.Counter_InitialCount;
    }

    if (MWDSP_EPH_R_D(Pos_PID_B.sf_Deadbandpulsecounter.pulse,
                      &Pos_PID_DW.Counter_ClkEphState) != 0U) {
      if (Pos_PID_DW.Counter_Count < ((uint8_T)255U)) {
        Pos_PID_DW.Counter_Count++;
      } else {
        Pos_PID_DW.Counter_Count = 0U;
      }
    }

    Pos_PID_B.Counter_o1 = Pos_PID_DW.Counter_Count;
    if (Pos_PID_DW.Counter_Count == Pos_PID_P.hitcount_x) {
      Pos_PID_B.Counter_o2 = true;
    }

    /* End of S-Function (sdspcount2): '<S8>/Counter' */

    /* DataTypeConversion: '<S8>/Data Type Conversion1' */
    Pos_PID_B.DataTypeConversion1_f = Pos_PID_B.Counter_o2;

    /* DataTypeConversion: '<S5>/Data Type Conversion1' */
    Pos_PID_B.DataTypeConversion1_h = Pos_PID_B.DataTypeConversion1_f;

    /* UnitDelay: '<S5>/Unit Delay' */
    Pos_PID_B.UnitDelay_b = Pos_PID_DW.UnitDelay_DSTATE_o;

    /* Memory: '<S19>/Memory' */
    Pos_PID_B.Memory = Pos_PID_DW.Memory_PreviousInput;

    /* CombinatorialLogic: '<S19>/Logic' */
    tmp = Pos_PID_B.DataTypeConversion1_h;
    bpIdx = tmp;
    tmp = Pos_PID_B.UnitDelay_b;
    bpIdx = (bpIdx << 1) + tmp;
    tmp = Pos_PID_B.Memory;
    bpIdx = (bpIdx << 1) + tmp;
    Pos_PID_B.Logic[0U] = Pos_PID_P.Logic_table[bpIdx];
    Pos_PID_B.Logic[1U] = Pos_PID_P.Logic_table[bpIdx + 8U];
  }

  /* DataStoreRead: '<Root>/Data Store Read1' */
  Pos_PID_B.DataStoreRead1 = Pos_PID_DW.Ymem;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Level2 S-Function Block: '<S14>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[1];
      sfcnOutputs(rts, 1);
    }

    /* Sum: '<S14>/Sum2' incorporates:
     *  Constant: '<S14>/encoder offsets1'
     */
    Pos_PID_B.Sum2 = Pos_PID_B.counts_o - Pos_PID_P.encoderoffsets1_Value;

    /* Gain: '<S14>/count_to_mm' */
    Pos_PID_B.YData = Pos_PID_P.count_to_mm_Gain * Pos_PID_B.Sum2;
  }

  /* DataStoreRead: '<S11>/Data Store Read4' */
  Pos_PID_B.DataStoreRead4 = Pos_PID_DW.RFlag;

  /* DataTypeConversion: '<S11>/Data Type Conversion2' */
  Pos_PID_B.DataTypeConversion2 = Pos_PID_B.DataStoreRead4;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* UnitDelay: '<S11>/Unit Delay1' */
    Pos_PID_B.UnitDelay1 = Pos_PID_DW.UnitDelay1_DSTATE;

    /* S-Function (sdspcount2): '<S11>/Y Matrix Counter' */
    Pos_PID_B.YMatrixCounter_o2 = false;
    if (MWDSP_EPH_R_B(Pos_PID_B.UnitDelay1,
                      &Pos_PID_DW.YMatrixCounter_RstEphState) != 0U) {
      Pos_PID_DW.YMatrixCounter_Count = Pos_PID_P.YMatrixCounter_InitialCount;
    }

    if (MWDSP_EPH_R_D(Pos_PID_B.DataTypeConversion2,
                      &Pos_PID_DW.YMatrixCounter_ClkEphState) != 0U) {
      if (Pos_PID_DW.YMatrixCounter_Count < ((uint8_T)255U)) {
        Pos_PID_DW.YMatrixCounter_Count++;
      } else {
        Pos_PID_DW.YMatrixCounter_Count = 0U;
      }
    }

    Pos_PID_B.YMatrixindex = Pos_PID_DW.YMatrixCounter_Count;
    if (Pos_PID_DW.YMatrixCounter_Count == Pos_PID_P.YMatrixCounter_HitValue) {
      Pos_PID_B.YMatrixCounter_o2 = true;
    }

    /* End of S-Function (sdspcount2): '<S11>/Y Matrix Counter' */

    /* Lookup_n-D: '<S11>/Y Matrix output' */
    bpIdx = plook_u32d_bincka(Pos_PID_B.YMatrixindex,
      Pos_PID_P.YMatrixoutput_bp01Data, 20U);
    Pos_PID_B.YMatrixoutput = Pos_PID_P.ypos[bpIdx];

    /* Sum: '<Root>/Sum2' */
    Pos_PID_B.Sum2_n = Pos_PID_B.YMatrixoutput - Pos_PID_B.YData;

    /* Gain: '<S3>/Proportional Gain' */
    Pos_PID_B.ProportionalGain_e = Pos_PID_P.kpy * Pos_PID_B.Sum2_n;

    /* Gain: '<S3>/Derivative Gain' */
    Pos_PID_B.DerivativeGain_d = Pos_PID_P.kdy * Pos_PID_B.Sum2_n;
  }

  /* Integrator: '<S3>/Integrator' */
  Pos_PID_B.Integrator_m = Pos_PID_X.Integrator_CSTATE_h;

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

  /* MATLAB Function: '<S12>/Deadband pulse counter' incorporates:
   *  Constant: '<S12>/Constant3'
   */
  Pos_PID_Deadbandpulsecounter(Pos_PID_B.motY, Pos_PID_P.db_y,
    &Pos_PID_B.sf_Deadbandpulsecounter_h);
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* UnitDelay: '<S12>/Unit Delay' */
    Pos_PID_B.UnitDelay_n = Pos_PID_DW.UnitDelay_DSTATE_oc;

    /* S-Function (sdspcount2): '<S12>/Counter' */
    Pos_PID_B.Counter_o2_h = false;
    if (MWDSP_EPH_R_B(Pos_PID_B.UnitDelay_n, &Pos_PID_DW.Counter_RstEphState_k)
        != 0U) {
      Pos_PID_DW.Counter_Count_b = Pos_PID_P.Counter_InitialCount_d;
    }

    if (MWDSP_EPH_R_D(Pos_PID_B.sf_Deadbandpulsecounter_h.pulse,
                      &Pos_PID_DW.Counter_ClkEphState_j) != 0U) {
      if (Pos_PID_DW.Counter_Count_b < ((uint8_T)255U)) {
        Pos_PID_DW.Counter_Count_b++;
      } else {
        Pos_PID_DW.Counter_Count_b = 0U;
      }
    }

    Pos_PID_B.Counter_o1_h = Pos_PID_DW.Counter_Count_b;
    if (Pos_PID_DW.Counter_Count_b == Pos_PID_P.hitcount_y) {
      Pos_PID_B.Counter_o2_h = true;
    }

    /* End of S-Function (sdspcount2): '<S12>/Counter' */

    /* DataTypeConversion: '<S12>/Data Type Conversion1' */
    Pos_PID_B.DataTypeConversion1_p = Pos_PID_B.Counter_o2_h;

    /* DataTypeConversion: '<S5>/Data Type Conversion' */
    Pos_PID_B.DataTypeConversion_p = Pos_PID_B.DataTypeConversion1_p;

    /* Memory: '<S20>/Memory' */
    Pos_PID_B.Memory_e = Pos_PID_DW.Memory_PreviousInput_p;

    /* CombinatorialLogic: '<S20>/Logic' */
    tmp = Pos_PID_B.DataTypeConversion_p;
    bpIdx = tmp;
    tmp = Pos_PID_B.UnitDelay_b;
    bpIdx = (bpIdx << 1) + tmp;
    tmp = Pos_PID_B.Memory_e;
    bpIdx = (bpIdx << 1) + tmp;
    Pos_PID_B.Logic_d[0U] = Pos_PID_P.Logic_table_j[bpIdx];
    Pos_PID_B.Logic_d[1U] = Pos_PID_P.Logic_table_j[bpIdx + 8U];
  }

  /* DataStoreRead: '<Root>/Data Store Read2' */
  Pos_PID_B.DataStoreRead2 = Pos_PID_DW.Zmem;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Level2 S-Function Block: '<S18>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[2];
      sfcnOutputs(rts, 1);
    }

    /* Sum: '<S18>/Sum2' incorporates:
     *  Constant: '<S18>/encoder offsets1'
     */
    Pos_PID_B.Sum2_g = Pos_PID_B.counts_f - Pos_PID_P.encoderoffsets1_Value_f;

    /* Gain: '<S18>/count_to_mm' */
    Pos_PID_B.ZData = Pos_PID_P.count_to_mm_Gain_j * Pos_PID_B.Sum2_g;
  }

  /* DataStoreRead: '<S15>/Data Store Read3' */
  Pos_PID_B.DataStoreRead3 = Pos_PID_DW.RFlag;

  /* DataTypeConversion: '<S15>/Data Type Conversion1' */
  Pos_PID_B.DataTypeConversion1 = Pos_PID_B.DataStoreRead3;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* UnitDelay: '<S15>/Unit Delay' */
    Pos_PID_B.UnitDelay_c = Pos_PID_DW.UnitDelay_DSTATE_g;

    /* S-Function (sdspcount2): '<S15>/Z Matrix Counter' */
    Pos_PID_B.ZMatrixCounter_o2 = false;
    if (MWDSP_EPH_R_B(Pos_PID_B.UnitDelay_c,
                      &Pos_PID_DW.ZMatrixCounter_RstEphState) != 0U) {
      Pos_PID_DW.ZMatrixCounter_Count = Pos_PID_P.ZMatrixCounter_InitialCount;
    }

    if (MWDSP_EPH_R_D(Pos_PID_B.DataTypeConversion1,
                      &Pos_PID_DW.ZMatrixCounter_ClkEphState) != 0U) {
      if (Pos_PID_DW.ZMatrixCounter_Count < ((uint8_T)255U)) {
        Pos_PID_DW.ZMatrixCounter_Count++;
      } else {
        Pos_PID_DW.ZMatrixCounter_Count = 0U;
      }
    }

    Pos_PID_B.ZMatrixindex = Pos_PID_DW.ZMatrixCounter_Count;
    if (Pos_PID_DW.ZMatrixCounter_Count == Pos_PID_P.ZMatrixCounter_HitValue) {
      Pos_PID_B.ZMatrixCounter_o2 = true;
    }

    /* End of S-Function (sdspcount2): '<S15>/Z Matrix Counter' */

    /* Lookup_n-D: '<S15>/Z Matrix output' */
    bpIdx = plook_u32d_bincka(Pos_PID_B.ZMatrixindex,
      Pos_PID_P.ZMatrixoutput_bp01Data, 20U);
    Pos_PID_B.ZMatrixoutput = Pos_PID_P.zpos[bpIdx];

    /* Sum: '<Root>/Sum4' */
    Pos_PID_B.Sum4 = Pos_PID_B.ZMatrixoutput - Pos_PID_B.ZData;

    /* Gain: '<S4>/Proportional Gain' */
    Pos_PID_B.ProportionalGain_d = Pos_PID_P.kpz * Pos_PID_B.Sum4;

    /* Gain: '<S4>/Derivative Gain' */
    Pos_PID_B.DerivativeGain_f = Pos_PID_P.kdz * Pos_PID_B.Sum4;
  }

  /* Integrator: '<S4>/Integrator' */
  Pos_PID_B.Integrator_f = Pos_PID_X.Integrator_CSTATE_l;

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
  Pos_PID_B.Zenable = Pos_PID_B.DataStoreRead2 - Pos_PID_B.Sum_a;

  /* MATLAB Function: '<S16>/Deadband pulse counter' incorporates:
   *  Constant: '<S16>/Constant3'
   */
  Pos_PID_Deadbandpulsecounter(Pos_PID_B.Zenable, Pos_PID_P.db_z,
    &Pos_PID_B.sf_Deadbandpulsecounter_e);
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* UnitDelay: '<S16>/Unit Delay' */
    Pos_PID_B.UnitDelay_bj = Pos_PID_DW.UnitDelay_DSTATE_p;

    /* S-Function (sdspcount2): '<S16>/Counter' */
    Pos_PID_B.Counter_o2_c = false;
    if (MWDSP_EPH_R_B(Pos_PID_B.UnitDelay_bj, &Pos_PID_DW.Counter_RstEphState_m)
        != 0U) {
      Pos_PID_DW.Counter_Count_p = Pos_PID_P.Counter_InitialCount_b;
    }

    if (MWDSP_EPH_R_D(Pos_PID_B.sf_Deadbandpulsecounter_e.pulse,
                      &Pos_PID_DW.Counter_ClkEphState_jq) != 0U) {
      if (Pos_PID_DW.Counter_Count_p < ((uint8_T)255U)) {
        Pos_PID_DW.Counter_Count_p++;
      } else {
        Pos_PID_DW.Counter_Count_p = 0U;
      }
    }

    Pos_PID_B.Counter_o1_m = Pos_PID_DW.Counter_Count_p;
    if (Pos_PID_DW.Counter_Count_p == Pos_PID_P.hitcount_z) {
      Pos_PID_B.Counter_o2_c = true;
    }

    /* End of S-Function (sdspcount2): '<S16>/Counter' */

    /* DataTypeConversion: '<S16>/Data Type Conversion1' */
    Pos_PID_B.DataTypeConversion1_pn = Pos_PID_B.Counter_o2_c;

    /* DataTypeConversion: '<S5>/Data Type Conversion2' */
    Pos_PID_B.DataTypeConversion2_i = Pos_PID_B.DataTypeConversion1_pn;

    /* Memory: '<S21>/Memory' */
    Pos_PID_B.Memory_n = Pos_PID_DW.Memory_PreviousInput_c;

    /* CombinatorialLogic: '<S21>/Logic' */
    tmp = Pos_PID_B.DataTypeConversion2_i;
    bpIdx = tmp;
    tmp = Pos_PID_B.UnitDelay_b;
    bpIdx = (bpIdx << 1) + tmp;
    tmp = Pos_PID_B.Memory_n;
    bpIdx = (bpIdx << 1) + tmp;
    Pos_PID_B.Logic_l[0U] = Pos_PID_P.Logic_table_m[bpIdx];
    Pos_PID_B.Logic_l[1U] = Pos_PID_P.Logic_table_m[bpIdx + 8U];

    /* Logic: '<S5>/Logical Operator' */
    Pos_PID_B.LogicalOperator = (Pos_PID_B.Logic[0] && Pos_PID_B.Logic_d[0] &&
      Pos_PID_B.Logic_l[0]);

    /* DataStoreWrite: '<Root>/Data Store Write3' */
    Pos_PID_DW.RFlag = Pos_PID_B.LogicalOperator;

    /* DataStoreWrite: '<S10>/Data Store Write' */
    Pos_PID_DW.Xmem = Pos_PID_B.XData;

    /* ok to acquire for <S25>/S-Function */
    Pos_PID_DW.SFunction_IWORK.AcquireOK = 1;

    /* ok to acquire for <S27>/S-Function */
    Pos_PID_DW.SFunction_IWORK_c.AcquireOK = 1;

    /* ToAsyncQueueBlock: '<S10>/HiddenToAsyncQueue_InsertedFor_count_to_mm1_at_outport_0' */
    if (rtmIsMajorTimeStep(Pos_PID_M)) {
      {
        double time = Pos_PID_M->Timing.t[1];
        void *pData = (void *)&Pos_PID_B.XData;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(3671225655U, time, pData, size);
      }
    }

    /* DataStoreWrite: '<S14>/Data Store Write1' */
    Pos_PID_DW.Ymem = Pos_PID_B.YData;

    /* ok to acquire for <S29>/S-Function */
    Pos_PID_DW.SFunction_IWORK_o.AcquireOK = 1;

    /* ok to acquire for <S31>/S-Function */
    Pos_PID_DW.SFunction_IWORK_p.AcquireOK = 1;

    /* ToAsyncQueueBlock: '<S14>/HiddenToAsyncQueue_InsertedFor_count_to_mm_at_outport_0' */
    if (rtmIsMajorTimeStep(Pos_PID_M)) {
      {
        double time = Pos_PID_M->Timing.t[1];
        void *pData = (void *)&Pos_PID_B.YData;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(3455097203U, time, pData, size);
      }
    }

    /* DataStoreWrite: '<S18>/Data Store Write2' */
    Pos_PID_DW.Zmem = Pos_PID_B.ZData;

    /* ok to acquire for <S33>/S-Function */
    Pos_PID_DW.SFunction_IWORK_i.AcquireOK = 1;

    /* ok to acquire for <S35>/S-Function */
    Pos_PID_DW.SFunction_IWORK_f.AcquireOK = 1;
  }

  /* Signum: '<S9>/Sign2' */
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

  /* End of Signum: '<S9>/Sign2' */

  /* Gain: '<S9>/Voltage1' */
  Pos_PID_B.xVoltage = Pos_PID_P.Voltage1_Gain * Pos_PID_B.motX;

  /* Signum: '<S13>/Sign' */
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

  /* End of Signum: '<S13>/Sign' */

  /* Gain: '<S13>/Voltage' */
  Pos_PID_B.VoltageY = Pos_PID_P.Voltage_Gain * Pos_PID_B.Sign;

  /* Signum: '<S17>/Sign1' */
  u = Pos_PID_B.Zenable;
  if (u < 0.0) {
    Pos_PID_B.Sign1 = -1.0;
  } else if (u > 0.0) {
    Pos_PID_B.Sign1 = 1.0;
  } else if (u == 0.0) {
    Pos_PID_B.Sign1 = 0.0;
  } else {
    Pos_PID_B.Sign1 = u;
  }

  /* End of Signum: '<S17>/Sign1' */

  /* Gain: '<S17>/Voltage2' */
  Pos_PID_B.VoltageZ = Pos_PID_P.Voltage2_Gain * Pos_PID_B.Sign1;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[3];
      sfcnOutputs(rts, 1);
    }

    /* Gain: '<S2>/Integral Gain' */
    Pos_PID_B.IntegralGain = Pos_PID_P.kix * Pos_PID_B.Sum;

    /* Gain: '<S3>/Integral Gain' */
    Pos_PID_B.IntegralGain_d = Pos_PID_P.kiy * Pos_PID_B.Sum2_n;

    /* Gain: '<S4>/Integral Gain' */
    Pos_PID_B.IntegralGain_l = Pos_PID_P.kiz * Pos_PID_B.Sum4;
  }

  /* Abs: '<S9>/Abs1' */
  Pos_PID_B.XEnable = fabs(Pos_PID_B.motX);
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Level2 S-Function Block: '<S9>/PCI-DDA 08 12 4' (dopci8255) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[4];
      sfcnOutputs(rts, 1);
    }
  }

  /* Abs: '<S13>/Abs' */
  Pos_PID_B.Yenable = fabs(Pos_PID_B.Sign);
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Level2 S-Function Block: '<S13>/PCI-DDA 08 12 3' (dopci8255) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[5];
      sfcnOutputs(rts, 1);
    }
  }

  /* Abs: '<S17>/Abs2' */
  Pos_PID_B.Zenable_e = fabs(Pos_PID_B.Sign1);
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Level2 S-Function Block: '<S17>/PCI-DDA08 12 3' (dipci8255) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[6];
      sfcnOutputs(rts, 1);
    }
  }

  /* Logic: '<S17>/Logical Operator' */
  Pos_PID_B.Zenable_e0 = ((Pos_PID_B.Zenable_e != 0.0) && (Pos_PID_B.PCIDDA08123
    != 0.0));

  /* DataTypeConversion: '<S17>/Data Type Conversion' */
  Pos_PID_B.DataTypeConversion = Pos_PID_B.Zenable_e0;
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Level2 S-Function Block: '<S17>/PCI-DDA 08 12 1' (dopci8255) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[7];
      sfcnOutputs(rts, 1);
    }

    /* ok to acquire for <S22>/S-Function */
    Pos_PID_DW.SFunction_IWORK_b.AcquireOK = 1;

    /* ok to acquire for <S23>/S-Function */
    Pos_PID_DW.SFunction_IWORK_n.AcquireOK = 1;

    /* Level2 S-Function Block: '<S1>/Receive 1' (xpcudpbytereceive) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[8];
      sfcnOutputs(rts, 1);
    }

    /* Byte Unpacking: <S1>/Byte Unpacking 1 */
    (void)memcpy((uint8_T*)&Pos_PID_B.orceData[0], (uint8_T*)
                 &Pos_PID_B.Receive1_o1[0] + 0, 48);

    /* ToAsyncQueueBlock: '<S1>/HiddenToAsyncQueue_InsertedFor_Byte Unpacking 1_at_outport_0' */
    if (rtmIsMajorTimeStep(Pos_PID_M)) {
      {
        double time = Pos_PID_M->Timing.t[1];
        void *pData = (void *)&Pos_PID_B.orceData[0];
        int32_T size = 6*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(3671236613U, time, pData, size);
      }
    }
  }
}

/* Model update function */
void Pos_PID_update(void)
{
  if (rtmIsMajorTimeStep(Pos_PID_M)) {
    /* Update for UnitDelay: '<S7>/Unit Delay2' */
    Pos_PID_DW.UnitDelay2_DSTATE = Pos_PID_B.XMatrixCounter_o2;

    /* Update for UnitDelay: '<S8>/Unit Delay' */
    Pos_PID_DW.UnitDelay_DSTATE = Pos_PID_B.Counter_o2;

    /* Update for UnitDelay: '<S5>/Unit Delay' */
    Pos_PID_DW.UnitDelay_DSTATE_o = Pos_PID_B.LogicalOperator;

    /* Update for Memory: '<S19>/Memory' */
    Pos_PID_DW.Memory_PreviousInput = Pos_PID_B.Logic[0];

    /* Update for UnitDelay: '<S11>/Unit Delay1' */
    Pos_PID_DW.UnitDelay1_DSTATE = Pos_PID_B.YMatrixCounter_o2;

    /* Update for UnitDelay: '<S12>/Unit Delay' */
    Pos_PID_DW.UnitDelay_DSTATE_oc = Pos_PID_B.Counter_o2_h;

    /* Update for Memory: '<S20>/Memory' */
    Pos_PID_DW.Memory_PreviousInput_p = Pos_PID_B.Logic_d[0];

    /* Update for UnitDelay: '<S15>/Unit Delay' */
    Pos_PID_DW.UnitDelay_DSTATE_g = Pos_PID_B.ZMatrixCounter_o2;

    /* Update for UnitDelay: '<S16>/Unit Delay' */
    Pos_PID_DW.UnitDelay_DSTATE_p = Pos_PID_B.Counter_o2_c;

    /* Update for Memory: '<S21>/Memory' */
    Pos_PID_DW.Memory_PreviousInput_c = Pos_PID_B.Logic_l[0];
  }

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
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
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
  /* Level2 S-Function Block: '<S10>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S14>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S18>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S25>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,2)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo("X_Encoder/count_to_mm1"));
        rl32eSetScope(3, 4, 25000);
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

  /* S-Function Block: <S27>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,3)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("X_Encoder/count_to_mm1"));
        rl32eSetScope(1, 4, 250000);
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

  /* S-Function Block: <S29>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(6)) == 0) {
      if ((i = rl32eDefScope(6,2)) != 0) {
        printf("Error creating scope 6\n");
      } else {
        rl32eAddSignal(6, rl32eGetSignalNo("Y_encoder /count_to_mm"));
        rl32eSetScope(6, 4, 25000);
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

  /* S-Function Block: <S31>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,3)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("Y_encoder /count_to_mm"));
        rl32eSetScope(4, 4, 250000);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 0);
        xpceFSScopeSet(4, "Ydata.dat", 0, 512, 0, 536870912);
        rl32eSetScope (4, 10, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo("Y_encoder /count_to_mm"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 9, 0);
        xpceScopeAcqOK(4, &Pos_PID_DW.SFunction_IWORK_p.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* S-Function Block: <S33>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(7)) == 0) {
      if ((i = rl32eDefScope(7,2)) != 0) {
        printf("Error creating scope 7\n");
      } else {
        rl32eAddSignal(7, rl32eGetSignalNo("Z_encoder/count_to_mm"));
        rl32eSetScope(7, 4, 25000);
        rl32eSetScope(7, 5, 0);
        rl32eSetScope(7, 6, 1);
        rl32eSetScope(7, 0, 0);
        rl32eSetScope(7, 3, rl32eGetSignalNo("Z_encoder/count_to_mm"));
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

  /* S-Function Block: <S35>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(9)) == 0) {
      if ((i = rl32eDefScope(9,3)) != 0) {
        printf("Error creating scope 9\n");
      } else {
        rl32eAddSignal(9, rl32eGetSignalNo("Z_encoder/count_to_mm"));
        rl32eSetScope(9, 4, 250000);
        rl32eSetScope(9, 5, 0);
        rl32eSetScope(9, 6, 1);
        rl32eSetScope(9, 0, 0);
        xpceFSScopeSet(9, "Zdata.dat", 0, 512, 0, 536870912);
        rl32eSetScope (9, 10, 0);
        rl32eSetScope(9, 3, rl32eGetSignalNo("Z_encoder/count_to_mm"));
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

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S9>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S13>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S17>/PCI-DDA08 12 3' (dipci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S17>/PCI-DDA 08 12 1' (dopci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S22>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo("Force Subsystem/Byte Unpacking 1/s1"));
        rl32eAddSignal(2, rl32eGetSignalNo("Force Subsystem/Byte Unpacking 1/s2"));
        rl32eAddSignal(2, rl32eGetSignalNo("Force Subsystem/Byte Unpacking 1/s3"));
        rl32eSetScope(2, 4, 25000);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo(
          "Force Subsystem/Byte Unpacking 1/s1"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 3.0);
        rl32eSetTargetScope(2, 11, 0.0);
        rl32eSetTargetScope(2, 10, 0.0);
        xpceScopeAcqOK(2, &Pos_PID_DW.SFunction_IWORK_b.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* S-Function Block: <S23>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,3)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eAddSignal(5, rl32eGetSignalNo("Force Subsystem/Byte Unpacking 1/s1"));
        rl32eAddSignal(5, rl32eGetSignalNo("Force Subsystem/Byte Unpacking 1/s2"));
        rl32eAddSignal(5, rl32eGetSignalNo("Force Subsystem/Byte Unpacking 1/s3"));
        rl32eSetScope(5, 4, 250000);
        rl32eSetScope(5, 5, 0);
        rl32eSetScope(5, 6, 1);
        rl32eSetScope(5, 0, 0);
        xpceFSScopeSet(5, "var.dat", 0, 512, 0, 536870912);
        rl32eSetScope (5, 10, 0);
        rl32eSetScope(5, 3, rl32eGetSignalNo(
          "Force Subsystem/Byte Unpacking 1/s1"));
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 0);
        rl32eSetScope(5, 9, 0);
        xpceScopeAcqOK(5, &Pos_PID_DW.SFunction_IWORK_n.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(5);
    }
  }

  /* Level2 S-Function Block: '<S1>/Receive 1' (xpcudpbytereceive) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  Pos_PID_DW.Xmem = Pos_PID_P.DataStoreMemory_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  Pos_PID_DW.Ymem = Pos_PID_P.DataStoreMemory1_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory2' */
  Pos_PID_DW.Zmem = Pos_PID_P.DataStoreMemory2_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory3' */
  Pos_PID_DW.RFlag = Pos_PID_P.DataStoreMemory3_InitialValue;

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay2' */
  Pos_PID_DW.UnitDelay2_DSTATE = Pos_PID_P.UnitDelay2_InitialCondition;

  /* InitializeConditions for S-Function (sdspcount2): '<S7>/X Matrix Counter' */
  Pos_PID_DW.XMatrixCounter_ClkEphState = 5U;
  Pos_PID_DW.XMatrixCounter_RstEphState = 5U;
  Pos_PID_DW.XMatrixCounter_Count = Pos_PID_P.XMatrixCounter_InitialCount;

  /* InitializeConditions for Integrator: '<S2>/Integrator' */
  Pos_PID_X.Integrator_CSTATE = Pos_PID_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S2>/Filter' */
  Pos_PID_X.Filter_CSTATE = Pos_PID_P.Filter_IC;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay' */
  Pos_PID_DW.UnitDelay_DSTATE = Pos_PID_P.UnitDelay_InitialCondition;

  /* InitializeConditions for S-Function (sdspcount2): '<S8>/Counter' */
  Pos_PID_DW.Counter_ClkEphState = 5U;
  Pos_PID_DW.Counter_RstEphState = 5U;
  Pos_PID_DW.Counter_Count = Pos_PID_P.Counter_InitialCount;

  /* InitializeConditions for UnitDelay: '<S5>/Unit Delay' */
  Pos_PID_DW.UnitDelay_DSTATE_o = Pos_PID_P.UnitDelay_InitialCondition_f;

  /* InitializeConditions for Memory: '<S19>/Memory' */
  Pos_PID_DW.Memory_PreviousInput = Pos_PID_P.XFlipflop_initial_condition;

  /* InitializeConditions for UnitDelay: '<S11>/Unit Delay1' */
  Pos_PID_DW.UnitDelay1_DSTATE = Pos_PID_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for S-Function (sdspcount2): '<S11>/Y Matrix Counter' */
  Pos_PID_DW.YMatrixCounter_ClkEphState = 5U;
  Pos_PID_DW.YMatrixCounter_RstEphState = 5U;
  Pos_PID_DW.YMatrixCounter_Count = Pos_PID_P.YMatrixCounter_InitialCount;

  /* InitializeConditions for Integrator: '<S3>/Integrator' */
  Pos_PID_X.Integrator_CSTATE_h = Pos_PID_P.Integrator_IC_o;

  /* InitializeConditions for Integrator: '<S3>/Filter' */
  Pos_PID_X.Filter_CSTATE_c = Pos_PID_P.Filter_IC_m;

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay' */
  Pos_PID_DW.UnitDelay_DSTATE_oc = Pos_PID_P.UnitDelay_InitialCondition_m;

  /* InitializeConditions for S-Function (sdspcount2): '<S12>/Counter' */
  Pos_PID_DW.Counter_ClkEphState_j = 5U;
  Pos_PID_DW.Counter_RstEphState_k = 5U;
  Pos_PID_DW.Counter_Count_b = Pos_PID_P.Counter_InitialCount_d;

  /* InitializeConditions for Memory: '<S20>/Memory' */
  Pos_PID_DW.Memory_PreviousInput_p = Pos_PID_P.YFlipflop_initial_condition;

  /* InitializeConditions for UnitDelay: '<S15>/Unit Delay' */
  Pos_PID_DW.UnitDelay_DSTATE_g = Pos_PID_P.UnitDelay_InitialCondition_h;

  /* InitializeConditions for S-Function (sdspcount2): '<S15>/Z Matrix Counter' */
  Pos_PID_DW.ZMatrixCounter_ClkEphState = 5U;
  Pos_PID_DW.ZMatrixCounter_RstEphState = 5U;
  Pos_PID_DW.ZMatrixCounter_Count = Pos_PID_P.ZMatrixCounter_InitialCount;

  /* InitializeConditions for Integrator: '<S4>/Integrator' */
  Pos_PID_X.Integrator_CSTATE_l = Pos_PID_P.Integrator_IC_j;

  /* InitializeConditions for Integrator: '<S4>/Filter' */
  Pos_PID_X.Filter_CSTATE_cw = Pos_PID_P.Filter_IC_k;

  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay' */
  Pos_PID_DW.UnitDelay_DSTATE_p = Pos_PID_P.UnitDelay_InitialCondition_mb;

  /* InitializeConditions for S-Function (sdspcount2): '<S16>/Counter' */
  Pos_PID_DW.Counter_ClkEphState_jq = 5U;
  Pos_PID_DW.Counter_RstEphState_m = 5U;
  Pos_PID_DW.Counter_Count_p = Pos_PID_P.Counter_InitialCount_b;

  /* InitializeConditions for Memory: '<S21>/Memory' */
  Pos_PID_DW.Memory_PreviousInput_c = Pos_PID_P.ZFlipflop_initial_condition;
}

/* Model terminate function */
void Pos_PID_terminate(void)
{
  /* Level2 S-Function Block: '<S10>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S14>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S18>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S9>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S13>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S17>/PCI-DDA08 12 3' (dipci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S17>/PCI-DDA 08 12 1' (dopci8255) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S1>/Receive 1' (xpcudpbytereceive) */
  {
    SimStruct *rts = Pos_PID_M->childSfunctions[8];
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
    Pos_PID_M->Timing.sampleTimes[1] = (0.001);

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
  Pos_PID_M->Timing.stepSize0 = 0.001;
  Pos_PID_M->Timing.stepSize1 = 0.001;

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
  Pos_PID_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&Pos_PID_M->solverInfo, 0.001);
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

  Pos_PID_M->Sizes.numSFcns = (9);

  /* register each child */
  {
    (void) memset((void *)&Pos_PID_M->NonInlinedSFcns.childSFunctions[0], 0,
                  9*sizeof(SimStruct));
    Pos_PID_M->childSfunctions = (&Pos_PID_M->
      NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 9; i++) {
        Pos_PID_M->childSfunctions[i] =
          (&Pos_PID_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: Pos_PID/<S10>/CNT32-8M(PCI) 2 (encconteccnt328mpci) */
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

    /* Level2 S-Function Block: Pos_PID/<S14>/CNT32-8M(PCI) 1 (encconteccnt328mpci) */
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

    /* Level2 S-Function Block: Pos_PID/<S18>/CNT32-8M(PCI) 1 (encconteccnt328mpci) */
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
      ssSetPath(rts, "Pos_PID/Z_encoder/CNT32-8M(PCI) 1");
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

    /* Level2 S-Function Block: Pos_PID/<Root>/PCI-DDA08 12  (dacbpcidda0x12) */
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

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Pos_PID_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Pos_PID_M->NonInlinedSFcns.Sfcn3.UPtrs0;
          sfcnUPtrs[0] = &Pos_PID_B.xVoltage;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Pos_PID_M->NonInlinedSFcns.Sfcn3.UPtrs1;
          sfcnUPtrs[0] = &Pos_PID_B.VoltageY;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Pos_PID_M->NonInlinedSFcns.Sfcn3.UPtrs2;
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
          &Pos_PID_M->NonInlinedSFcns.Sfcn3.params;
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
          &Pos_PID_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn3.dWorkAux;
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
      ssSetSampleTime(rts, 0, 0.001);
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

    /* Level2 S-Function Block: Pos_PID/<S9>/PCI-DDA 08 12 4 (dopci8255) */
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
          sfcnUPtrs[0] = &Pos_PID_B.XEnable;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 4");
      ssSetPath(rts, "Pos_PID/X output processing/PCI-DDA 08 12 4");
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
        ssSetDWork(rts, 0, &Pos_PID_DW.PCIDDA08124_IWORK[0]);
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

    /* Level2 S-Function Block: Pos_PID/<S13>/PCI-DDA 08 12 3 (dopci8255) */
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
      ssSetPath(rts, "Pos_PID/Y output processing/PCI-DDA 08 12 3");
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
        ssSetSFcnParam(rts, 0, (mxArray*)Pos_PID_P.PCIDDA08123_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Pos_PID_P.PCIDDA08123_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Pos_PID_P.PCIDDA08123_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Pos_PID_P.PCIDDA08123_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Pos_PID_P.PCIDDA08123_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Pos_PID_P.PCIDDA08123_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Pos_PID_P.PCIDDA08123_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Pos_PID_P.PCIDDA08123_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Pos_PID_P.PCIDDA08123_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Pos_PID_P.PCIDDA08123_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Pos_PID_DW.PCIDDA08123_IWORK[0]);

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
        ssSetDWork(rts, 0, &Pos_PID_DW.PCIDDA08123_IWORK[0]);
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

    /* Level2 S-Function Block: Pos_PID/<S17>/PCI-DDA08 12 3 (dipci8255) */
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

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Pos_PID_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
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
      ssSetPath(rts, "Pos_PID/Z output processing/PCI-DDA08 12 3");
      ssSetRTModel(rts,Pos_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Pos_PID_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Pos_PID_P.PCIDDA08123_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)Pos_PID_P.PCIDDA08123_P2_Size_f);
        ssSetSFcnParam(rts, 2, (mxArray*)Pos_PID_P.PCIDDA08123_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)Pos_PID_P.PCIDDA08123_P4_Size_h);
        ssSetSFcnParam(rts, 4, (mxArray*)Pos_PID_P.PCIDDA08123_P5_Size_n);
        ssSetSFcnParam(rts, 5, (mxArray*)Pos_PID_P.PCIDDA08123_P6_Size_j);
        ssSetSFcnParam(rts, 6, (mxArray*)Pos_PID_P.PCIDDA08123_P7_Size_e);
        ssSetSFcnParam(rts, 7, (mxArray*)Pos_PID_P.PCIDDA08123_P8_Size_f);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Pos_PID_DW.PCIDDA08123_IWORK_p[0]);

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
        ssSetDWork(rts, 0, &Pos_PID_DW.PCIDDA08123_IWORK_p[0]);
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

    /* Level2 S-Function Block: Pos_PID/<S17>/PCI-DDA 08 12 1 (dopci8255) */
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
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Pos_PID_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Pos_PID_M->NonInlinedSFcns.Sfcn7.UPtrs0;
          sfcnUPtrs[0] = &Pos_PID_B.DataTypeConversion;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 1");
      ssSetPath(rts, "Pos_PID/Z output processing/PCI-DDA 08 12 1");
      ssSetRTModel(rts,Pos_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Pos_PID_M->NonInlinedSFcns.Sfcn7.params;
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
          &Pos_PID_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn7.dWorkAux;
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

    /* Level2 S-Function Block: Pos_PID/<S1>/Receive 1 (xpcudpbytereceive) */
    {
      SimStruct *rts = Pos_PID_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = Pos_PID_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = Pos_PID_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = Pos_PID_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Pos_PID_M->NonInlinedSFcns.blkInfo2[8]);
      }

      ssSetRTWSfcnInfo(rts, Pos_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Pos_PID_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Pos_PID_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Pos_PID_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &Pos_PID_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Pos_PID_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 48);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *) Pos_PID_B.Receive1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *) &Pos_PID_B.Receive1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Receive 1");
      ssSetPath(rts, "Pos_PID/Force Subsystem/Receive 1");
      ssSetRTModel(rts,Pos_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Pos_PID_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Pos_PID_P.Receive1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Pos_PID_P.Receive1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Pos_PID_P.Receive1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Pos_PID_P.Receive1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Pos_PID_P.Receive1_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Pos_PID_DW.Receive1_IWORK[0]);
      ssSetPWork(rts, (void **) &Pos_PID_DW.Receive1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Pos_PID_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Pos_PID_DW.Receive1_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Pos_PID_DW.Receive1_PWORK);
      }

      /* registration */
      xpcudpbytereceive(rts);
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
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Initialize Sizes */
  Pos_PID_M->Sizes.numContStates = (6);/* Number of continuous states */
  Pos_PID_M->Sizes.numPeriodicContStates = (0);/* Number of periodic continuous states */
  Pos_PID_M->Sizes.numY = (0);         /* Number of model outputs */
  Pos_PID_M->Sizes.numU = (0);         /* Number of model inputs */
  Pos_PID_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Pos_PID_M->Sizes.numSampTimes = (2); /* Number of sample times */
  Pos_PID_M->Sizes.numBlocks = (124);  /* Number of blocks */
  Pos_PID_M->Sizes.numBlockIO = (101); /* Number of block outputs */
  Pos_PID_M->Sizes.numBlockPrms = (724);/* Sum of parameter "widths" */
  return Pos_PID_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
