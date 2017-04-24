/*
 * Hybrid_PID.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Hybrid_PID".
 *
 * Model version              : 1.405
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Sat Jan 14 19:39:57 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "Hybrid_PID_capi.h"
#include "Hybrid_PID.h"
#include "Hybrid_PID_private.h"

/* Block signals (auto storage) */
B_Hybrid_PID_T Hybrid_PID_B;

/* Continuous states */
X_Hybrid_PID_T Hybrid_PID_X;

/* Block states (auto storage) */
DW_Hybrid_PID_T Hybrid_PID_DW;

/* Real-time model */
RT_MODEL_Hybrid_PID_T Hybrid_PID_M_;
RT_MODEL_Hybrid_PID_T *const Hybrid_PID_M = &Hybrid_PID_M_;
uint32_T plook_u32d_evencka(real_T u, real_T bp0, real_T bpSpace, uint32_T
  maxIndex)
{
  uint32_T bpIndex;
  real_T fbpIndex;

  /* Prelookup - Index only
     Index Search method: 'even'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp0) {
    bpIndex = 0U;
  } else {
    fbpIndex = (u - bp0) * (1.0 / bpSpace);
    if (fbpIndex < maxIndex) {
      bpIndex = (uint32_T)fbpIndex;
    } else {
      bpIndex = maxIndex;
    }
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
  Hybrid_PID_derivatives();

  /* f1 = f(t + (h/2), y + (h/2)*f0) */
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f0[i]);
  }

  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  Hybrid_PID_output();
  Hybrid_PID_derivatives();

  /* f2 = f(t + (h/2), y + (h/2)*f1) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f1[i]);
  }

  rtsiSetdX(si, f2);
  Hybrid_PID_output();
  Hybrid_PID_derivatives();

  /* f3 = f(t + h, y + h*f2) */
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (h*f2[i]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  Hybrid_PID_output();
  Hybrid_PID_derivatives();

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
 *    '<S7>/Deadband pulse counter'
 *    '<S12>/Deadband pulse counter'
 *    '<S17>/Deadband pulse counter'
 */
void Hybrid_PID_Deadbandpulsecounter(real_T rtu_e, real_T rtu_db,
  B_Deadbandpulsecounter_Hybrid_T *localB)
{
  /* MATLAB Function 'X Position signal/Deadband pulse counter': '<S25>:1' */
  if ((rtu_e > -rtu_db) && (rtu_e < rtu_db)) {
    /* '<S25>:1:3' */
    /* '<S25>:1:4' */
    localB->pulse = 1.0;
  } else {
    /* '<S25>:1:6' */
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

  /* S-Function (sdspcount2): '<S6>/X Matrix Counter' */
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

  /* End of S-Function (sdspcount2): '<S6>/X Matrix Counter' */
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

  /* S-Function (sdspcount2): '<S6>/X Matrix Counter' */
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

  /* End of S-Function (sdspcount2): '<S6>/X Matrix Counter' */
  return retVal;
}

/* Model output function */
void Hybrid_PID_output(void)
{
  uint32_T bpIdx;
  boolean_T tmp;
  real_T u;
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* set solver stop time */
    if (!(Hybrid_PID_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&Hybrid_PID_M->solverInfo,
                            ((Hybrid_PID_M->Timing.clockTickH0 + 1) *
        Hybrid_PID_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&Hybrid_PID_M->solverInfo,
                            ((Hybrid_PID_M->Timing.clockTick0 + 1) *
        Hybrid_PID_M->Timing.stepSize0 + Hybrid_PID_M->Timing.clockTickH0 *
        Hybrid_PID_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Hybrid_PID_M)) {
    Hybrid_PID_M->Timing.t[0] = rtsiGetT(&Hybrid_PID_M->solverInfo);
  }

  /* DataStoreRead: '<Root>/Data Store Read' */
  Hybrid_PID_B.DataStoreRead = Hybrid_PID_DW.Xmem;
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* Level2 S-Function Block: '<S9>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[0];
      sfcnOutputs(rts, 1);
    }

    /* Sum: '<S9>/Sum3' incorporates:
     *  Constant: '<S9>/encoder offsets2'
     */
    Hybrid_PID_B.Sum3 = Hybrid_PID_B.counts - Hybrid_PID_P.encoderoffsets2_Value;

    /* Gain: '<S9>/count_to_mm1' */
    Hybrid_PID_B.XData = Hybrid_PID_P.count_to_mm1_Gain * Hybrid_PID_B.Sum3;
  }

  /* DataStoreRead: '<S6>/Data Store Read5' */
  Hybrid_PID_B.DataStoreRead5 = Hybrid_PID_DW.RFlag;

  /* DataTypeConversion: '<S6>/Data Type Conversion3' */
  Hybrid_PID_B.DataTypeConversion3 = Hybrid_PID_B.DataStoreRead5;
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* UnitDelay: '<S6>/Unit Delay2' */
    Hybrid_PID_B.UnitDelay2 = Hybrid_PID_DW.UnitDelay2_DSTATE;

    /* S-Function (sdspcount2): '<S6>/X Matrix Counter' */
    Hybrid_PID_B.XMatrixCounter_o2 = false;
    if (MWDSP_EPH_R_B(Hybrid_PID_B.UnitDelay2,
                      &Hybrid_PID_DW.XMatrixCounter_RstEphState) != 0U) {
      Hybrid_PID_DW.XMatrixCounter_Count =
        Hybrid_PID_P.XMatrixCounter_InitialCount;
    }

    if (MWDSP_EPH_R_D(Hybrid_PID_B.DataTypeConversion3,
                      &Hybrid_PID_DW.XMatrixCounter_ClkEphState) != 0U) {
      if (Hybrid_PID_DW.XMatrixCounter_Count < ((uint8_T)255U)) {
        Hybrid_PID_DW.XMatrixCounter_Count++;
      } else {
        Hybrid_PID_DW.XMatrixCounter_Count = 0U;
      }
    }

    Hybrid_PID_B.XMatrixindex = Hybrid_PID_DW.XMatrixCounter_Count;
    if (Hybrid_PID_DW.XMatrixCounter_Count ==
        Hybrid_PID_P.XMatrixCounter_HitValue) {
      Hybrid_PID_B.XMatrixCounter_o2 = true;
    }

    /* End of S-Function (sdspcount2): '<S6>/X Matrix Counter' */

    /* Lookup_n-D: '<S6>/X Matrix output' */
    bpIdx = plook_u32d_evencka(Hybrid_PID_B.XMatrixindex,
      Hybrid_PID_P.XMatrixoutput_bpFirstPoint01Dat, 1.0, 19999U);
    Hybrid_PID_B.XMatrixoutput = Hybrid_PID_P.xpos[bpIdx];

    /* Sum: '<Root>/Sum' */
    Hybrid_PID_B.Sum = Hybrid_PID_B.XMatrixoutput - Hybrid_PID_B.XData;

    /* Gain: '<S5>/Proportional Gain' */
    Hybrid_PID_B.ProportionalGain = Hybrid_PID_P.kpx * Hybrid_PID_B.Sum;

    /* Gain: '<S5>/Derivative Gain' */
    Hybrid_PID_B.DerivativeGain = Hybrid_PID_P.kdx * Hybrid_PID_B.Sum;
  }

  /* Integrator: '<S5>/Integrator' */
  Hybrid_PID_B.Integrator = Hybrid_PID_X.Integrator_CSTATE;

  /* Integrator: '<S5>/Filter' */
  Hybrid_PID_B.Filter = Hybrid_PID_X.Filter_CSTATE;

  /* Sum: '<S5>/SumD' */
  Hybrid_PID_B.SumD = Hybrid_PID_B.DerivativeGain - Hybrid_PID_B.Filter;

  /* Gain: '<S5>/Filter Coefficient' */
  Hybrid_PID_B.FilterCoefficient = Hybrid_PID_P.XController_N *
    Hybrid_PID_B.SumD;

  /* Sum: '<S5>/Sum' */
  Hybrid_PID_B.Sum_l = (Hybrid_PID_B.ProportionalGain + Hybrid_PID_B.Integrator)
    + Hybrid_PID_B.FilterCoefficient;

  /* Sum: '<Root>/Sum1' */
  Hybrid_PID_B.Sum1 = Hybrid_PID_B.DataStoreRead - Hybrid_PID_B.Sum_l;

  /* MATLAB Function: '<S7>/Deadband pulse counter' incorporates:
   *  Constant: '<S7>/Constant3'
   */
  Hybrid_PID_Deadbandpulsecounter(Hybrid_PID_B.Sum1, Hybrid_PID_P.db_x,
    &Hybrid_PID_B.sf_Deadbandpulsecounter);
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* UnitDelay: '<S7>/Unit Delay' */
    Hybrid_PID_B.UnitDelay = Hybrid_PID_DW.UnitDelay_DSTATE;

    /* S-Function (sdspcount2): '<S7>/Counter' */
    Hybrid_PID_B.Counter_o2 = false;
    if (MWDSP_EPH_R_B(Hybrid_PID_B.UnitDelay, &Hybrid_PID_DW.Counter_RstEphState)
        != 0U) {
      Hybrid_PID_DW.Counter_Count = Hybrid_PID_P.Counter_InitialCount;
    }

    if (MWDSP_EPH_R_D(Hybrid_PID_B.sf_Deadbandpulsecounter.pulse,
                      &Hybrid_PID_DW.Counter_ClkEphState) != 0U) {
      if (Hybrid_PID_DW.Counter_Count < ((uint8_T)255U)) {
        Hybrid_PID_DW.Counter_Count++;
      } else {
        Hybrid_PID_DW.Counter_Count = 0U;
      }
    }

    Hybrid_PID_B.Counter_o1 = Hybrid_PID_DW.Counter_Count;
    if (Hybrid_PID_DW.Counter_Count == Hybrid_PID_P.hitcount_x) {
      Hybrid_PID_B.Counter_o2 = true;
    }

    /* End of S-Function (sdspcount2): '<S7>/Counter' */

    /* DataTypeConversion: '<S7>/Data Type Conversion1' */
    Hybrid_PID_B.DataTypeConversion1 = Hybrid_PID_B.Counter_o2;

    /* DataTypeConversion: '<S3>/Data Type Conversion1' */
    Hybrid_PID_B.DataTypeConversion1_h = (Hybrid_PID_B.DataTypeConversion1 !=
      0.0);

    /* UnitDelay: '<S3>/Unit Delay' */
    Hybrid_PID_B.UnitDelay_b = Hybrid_PID_DW.UnitDelay_DSTATE_o;

    /* Memory: '<S20>/Memory' */
    Hybrid_PID_B.Memory = Hybrid_PID_DW.Memory_PreviousInput;

    /* CombinatorialLogic: '<S20>/Logic' */
    tmp = Hybrid_PID_B.DataTypeConversion1_h;
    bpIdx = tmp;
    tmp = Hybrid_PID_B.UnitDelay_b;
    bpIdx = (bpIdx << 1) + tmp;
    tmp = Hybrid_PID_B.Memory;
    bpIdx = (bpIdx << 1) + tmp;
    Hybrid_PID_B.Logic[0U] = Hybrid_PID_P.Logic_table[bpIdx];
    Hybrid_PID_B.Logic[1U] = Hybrid_PID_P.Logic_table[bpIdx + 8U];
  }

  /* DataStoreRead: '<Root>/Data Store Read1' */
  Hybrid_PID_B.DataStoreRead1 = Hybrid_PID_DW.Ymem;
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* Level2 S-Function Block: '<S14>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[1];
      sfcnOutputs(rts, 1);
    }

    /* Sum: '<S14>/Sum2' incorporates:
     *  Constant: '<S14>/encoder offsets1'
     */
    Hybrid_PID_B.Sum2 = Hybrid_PID_B.counts_o -
      Hybrid_PID_P.encoderoffsets1_Value;

    /* Gain: '<S14>/count_to_mm' */
    Hybrid_PID_B.YData = Hybrid_PID_P.count_to_mm_Gain * Hybrid_PID_B.Sum2;
  }

  /* DataStoreRead: '<S11>/Data Store Read4' */
  Hybrid_PID_B.DataStoreRead4 = Hybrid_PID_DW.RFlag;

  /* DataTypeConversion: '<S11>/Data Type Conversion2' */
  Hybrid_PID_B.DataTypeConversion2 = Hybrid_PID_B.DataStoreRead4;
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* UnitDelay: '<S11>/Unit Delay1' */
    Hybrid_PID_B.UnitDelay1 = Hybrid_PID_DW.UnitDelay1_DSTATE;

    /* S-Function (sdspcount2): '<S11>/Y Matrix Counter' */
    Hybrid_PID_B.YMatrixCounter_o2 = false;
    if (MWDSP_EPH_R_B(Hybrid_PID_B.UnitDelay1,
                      &Hybrid_PID_DW.YMatrixCounter_RstEphState) != 0U) {
      Hybrid_PID_DW.YMatrixCounter_Count =
        Hybrid_PID_P.YMatrixCounter_InitialCount;
    }

    if (MWDSP_EPH_R_D(Hybrid_PID_B.DataTypeConversion2,
                      &Hybrid_PID_DW.YMatrixCounter_ClkEphState) != 0U) {
      if (Hybrid_PID_DW.YMatrixCounter_Count < ((uint8_T)255U)) {
        Hybrid_PID_DW.YMatrixCounter_Count++;
      } else {
        Hybrid_PID_DW.YMatrixCounter_Count = 0U;
      }
    }

    Hybrid_PID_B.YMatrixindex = Hybrid_PID_DW.YMatrixCounter_Count;
    if (Hybrid_PID_DW.YMatrixCounter_Count ==
        Hybrid_PID_P.YMatrixCounter_HitValue) {
      Hybrid_PID_B.YMatrixCounter_o2 = true;
    }

    /* End of S-Function (sdspcount2): '<S11>/Y Matrix Counter' */

    /* Lookup_n-D: '<S11>/Y Matrix output' */
    bpIdx = plook_u32d_evencka(Hybrid_PID_B.YMatrixindex,
      Hybrid_PID_P.YMatrixoutput_bpFirstPoint01Dat, 1.0, 19999U);
    Hybrid_PID_B.YMatrixoutput = Hybrid_PID_P.ypos[bpIdx];

    /* Sum: '<Root>/Sum2' */
    Hybrid_PID_B.Sum2_n = Hybrid_PID_B.YMatrixoutput - Hybrid_PID_B.YData;

    /* Gain: '<S10>/Proportional Gain' */
    Hybrid_PID_B.ProportionalGain_e = Hybrid_PID_P.kpy * Hybrid_PID_B.Sum2_n;

    /* Gain: '<S10>/Derivative Gain' */
    Hybrid_PID_B.DerivativeGain_d = Hybrid_PID_P.kdy * Hybrid_PID_B.Sum2_n;
  }

  /* Integrator: '<S10>/Integrator' */
  Hybrid_PID_B.Integrator_m = Hybrid_PID_X.Integrator_CSTATE_h;

  /* Integrator: '<S10>/Filter' */
  Hybrid_PID_B.Filter_l = Hybrid_PID_X.Filter_CSTATE_c;

  /* Sum: '<S10>/SumD' */
  Hybrid_PID_B.SumD_b = Hybrid_PID_B.DerivativeGain_d - Hybrid_PID_B.Filter_l;

  /* Gain: '<S10>/Filter Coefficient' */
  Hybrid_PID_B.FilterCoefficient_p = Hybrid_PID_P.YController_N *
    Hybrid_PID_B.SumD_b;

  /* Sum: '<S10>/Sum' */
  Hybrid_PID_B.Sum_d = (Hybrid_PID_B.ProportionalGain_e +
                        Hybrid_PID_B.Integrator_m) +
    Hybrid_PID_B.FilterCoefficient_p;

  /* Sum: '<Root>/Sum3' */
  Hybrid_PID_B.motY = Hybrid_PID_B.DataStoreRead1 - Hybrid_PID_B.Sum_d;

  /* MATLAB Function: '<S12>/Deadband pulse counter' incorporates:
   *  Constant: '<S12>/Constant3'
   */
  Hybrid_PID_Deadbandpulsecounter(Hybrid_PID_B.motY, Hybrid_PID_P.db_y,
    &Hybrid_PID_B.sf_Deadbandpulsecounter_h);
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* UnitDelay: '<S12>/Unit Delay' */
    Hybrid_PID_B.UnitDelay_n = Hybrid_PID_DW.UnitDelay_DSTATE_oc;

    /* S-Function (sdspcount2): '<S12>/Counter' */
    Hybrid_PID_B.Counter_o2_h = false;
    if (MWDSP_EPH_R_B(Hybrid_PID_B.UnitDelay_n,
                      &Hybrid_PID_DW.Counter_RstEphState_k) != 0U) {
      Hybrid_PID_DW.Counter_Count_b = Hybrid_PID_P.Counter_InitialCount_d;
    }

    if (MWDSP_EPH_R_D(Hybrid_PID_B.sf_Deadbandpulsecounter_h.pulse,
                      &Hybrid_PID_DW.Counter_ClkEphState_j) != 0U) {
      if (Hybrid_PID_DW.Counter_Count_b < ((uint8_T)255U)) {
        Hybrid_PID_DW.Counter_Count_b++;
      } else {
        Hybrid_PID_DW.Counter_Count_b = 0U;
      }
    }

    Hybrid_PID_B.Counter_o1_h = Hybrid_PID_DW.Counter_Count_b;
    if (Hybrid_PID_DW.Counter_Count_b == Hybrid_PID_P.hitcount_y) {
      Hybrid_PID_B.Counter_o2_h = true;
    }

    /* End of S-Function (sdspcount2): '<S12>/Counter' */

    /* DataTypeConversion: '<S12>/Data Type Conversion1' */
    Hybrid_PID_B.DataTypeConversion1_p = Hybrid_PID_B.Counter_o2_h;

    /* DataTypeConversion: '<S3>/Data Type Conversion' */
    Hybrid_PID_B.DataTypeConversion_p = (Hybrid_PID_B.DataTypeConversion1_p !=
      0.0);

    /* Memory: '<S21>/Memory' */
    Hybrid_PID_B.Memory_e = Hybrid_PID_DW.Memory_PreviousInput_p;

    /* CombinatorialLogic: '<S21>/Logic' */
    tmp = Hybrid_PID_B.DataTypeConversion_p;
    bpIdx = tmp;
    tmp = Hybrid_PID_B.UnitDelay_b;
    bpIdx = (bpIdx << 1) + tmp;
    tmp = Hybrid_PID_B.Memory_e;
    bpIdx = (bpIdx << 1) + tmp;
    Hybrid_PID_B.Logic_d[0U] = Hybrid_PID_P.Logic_table_j[bpIdx];
    Hybrid_PID_B.Logic_d[1U] = Hybrid_PID_P.Logic_table_j[bpIdx + 8U];

    /* Level2 S-Function Block: '<S2>/Receive 1' (xpcudpbytereceive) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[2];
      sfcnOutputs(rts, 1);
    }

    /* Byte Unpacking: <S2>/Byte Unpacking 1 */
    (void)memcpy((uint8_T*)&Hybrid_PID_B.orceData[0], (uint8_T*)
                 &Hybrid_PID_B.Receive1_o1[0] + 0, 48);
  }

  /* DataStoreRead: '<S1>/Data Store Read3' */
  Hybrid_PID_B.DataStoreRead3 = Hybrid_PID_DW.RFlag;

  /* DataTypeConversion: '<S1>/Data Type Conversion1' */
  Hybrid_PID_B.DataTypeConversion1_g = Hybrid_PID_B.DataStoreRead3;
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* UnitDelay: '<S1>/Unit Delay' */
    Hybrid_PID_B.UnitDelay_ni = Hybrid_PID_DW.UnitDelay_DSTATE_e;

    /* S-Function (sdspcount2): '<S1>/Force Matrix Counter' */
    Hybrid_PID_B.ForceMatrixCounter_o2 = false;
    if (MWDSP_EPH_R_B(Hybrid_PID_B.UnitDelay_ni,
                      &Hybrid_PID_DW.ForceMatrixCounter_RstEphState) != 0U) {
      Hybrid_PID_DW.ForceMatrixCounter_Count =
        Hybrid_PID_P.ForceMatrixCounter_InitialCount;
    }

    if (MWDSP_EPH_R_D(Hybrid_PID_B.DataTypeConversion1_g,
                      &Hybrid_PID_DW.ForceMatrixCounter_ClkEphState) != 0U) {
      if (Hybrid_PID_DW.ForceMatrixCounter_Count < ((uint8_T)255U)) {
        Hybrid_PID_DW.ForceMatrixCounter_Count++;
      } else {
        Hybrid_PID_DW.ForceMatrixCounter_Count = 0U;
      }
    }

    Hybrid_PID_B.ForceMatrixindex = Hybrid_PID_DW.ForceMatrixCounter_Count;
    if (Hybrid_PID_DW.ForceMatrixCounter_Count ==
        Hybrid_PID_P.ForceMatrixCounter_HitValue) {
      Hybrid_PID_B.ForceMatrixCounter_o2 = true;
    }

    /* End of S-Function (sdspcount2): '<S1>/Force Matrix Counter' */

    /* Lookup_n-D: '<S1>/Force Matrix output' */
    bpIdx = plook_u32d_evencka(Hybrid_PID_B.ForceMatrixindex,
      Hybrid_PID_P.ForceMatrixoutput_bpFirstPoint0, 1.0, 19999U);
    Hybrid_PID_B.Forceoutput = Hybrid_PID_P.fpos[bpIdx];

    /* Sum: '<Root>/Sum4' */
    Hybrid_PID_B.Sum4 = Hybrid_PID_B.Forceoutput - Hybrid_PID_B.orceData[2];

    /* Gain: '<S15>/Proportional Gain' */
    Hybrid_PID_B.ProportionalGain_d = Hybrid_PID_P.kpz * Hybrid_PID_B.Sum4;

    /* Gain: '<S15>/Derivative Gain' */
    Hybrid_PID_B.DerivativeGain_f = Hybrid_PID_P.kdz * Hybrid_PID_B.Sum4;
  }

  /* Integrator: '<S15>/Integrator' */
  Hybrid_PID_B.Integrator_f = Hybrid_PID_X.Integrator_CSTATE_l;

  /* Integrator: '<S15>/Filter' */
  Hybrid_PID_B.Filter_b = Hybrid_PID_X.Filter_CSTATE_cw;

  /* Sum: '<S15>/SumD' */
  Hybrid_PID_B.SumD_k = Hybrid_PID_B.DerivativeGain_f - Hybrid_PID_B.Filter_b;

  /* Gain: '<S15>/Filter Coefficient' */
  Hybrid_PID_B.FilterCoefficient_b = Hybrid_PID_P.ZController_N *
    Hybrid_PID_B.SumD_k;

  /* Sum: '<S15>/Sum' */
  Hybrid_PID_B.Sum_a = (Hybrid_PID_B.ProportionalGain_d +
                        Hybrid_PID_B.Integrator_f) +
    Hybrid_PID_B.FilterCoefficient_b;

  /* Sum: '<Root>/Sum5' */
  Hybrid_PID_B.Zenable = Hybrid_PID_B.Sum_a - Hybrid_PID_B.orceData[2];

  /* MATLAB Function: '<S17>/Deadband pulse counter' incorporates:
   *  Constant: '<S17>/Constant3'
   */
  Hybrid_PID_Deadbandpulsecounter(Hybrid_PID_B.Zenable, Hybrid_PID_P.db_z,
    &Hybrid_PID_B.sf_Deadbandpulsecounter_e);
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* UnitDelay: '<S17>/Unit Delay' */
    Hybrid_PID_B.UnitDelay_bj = Hybrid_PID_DW.UnitDelay_DSTATE_p;

    /* S-Function (sdspcount2): '<S17>/Counter' */
    Hybrid_PID_B.Counter_o2_c = false;
    if (MWDSP_EPH_R_B(Hybrid_PID_B.UnitDelay_bj,
                      &Hybrid_PID_DW.Counter_RstEphState_m) != 0U) {
      Hybrid_PID_DW.Counter_Count_p = Hybrid_PID_P.Counter_InitialCount_b;
    }

    if (MWDSP_EPH_R_D(Hybrid_PID_B.sf_Deadbandpulsecounter_e.pulse,
                      &Hybrid_PID_DW.Counter_ClkEphState_jq) != 0U) {
      if (Hybrid_PID_DW.Counter_Count_p < ((uint8_T)255U)) {
        Hybrid_PID_DW.Counter_Count_p++;
      } else {
        Hybrid_PID_DW.Counter_Count_p = 0U;
      }
    }

    Hybrid_PID_B.Counter_o1_m = Hybrid_PID_DW.Counter_Count_p;
    if (Hybrid_PID_DW.Counter_Count_p == Hybrid_PID_P.hitcount_z) {
      Hybrid_PID_B.Counter_o2_c = true;
    }

    /* End of S-Function (sdspcount2): '<S17>/Counter' */

    /* DataTypeConversion: '<S17>/Data Type Conversion1' */
    Hybrid_PID_B.DataTypeConversion1_pn = Hybrid_PID_B.Counter_o2_c;

    /* DataTypeConversion: '<S3>/Data Type Conversion2' */
    Hybrid_PID_B.DataTypeConversion2_i = (Hybrid_PID_B.DataTypeConversion1_pn !=
      0.0);

    /* Memory: '<S22>/Memory' */
    Hybrid_PID_B.Memory_n = Hybrid_PID_DW.Memory_PreviousInput_c;

    /* CombinatorialLogic: '<S22>/Logic' */
    tmp = Hybrid_PID_B.DataTypeConversion2_i;
    bpIdx = tmp;
    tmp = Hybrid_PID_B.UnitDelay_b;
    bpIdx = (bpIdx << 1) + tmp;
    tmp = Hybrid_PID_B.Memory_n;
    bpIdx = (bpIdx << 1) + tmp;
    Hybrid_PID_B.Logic_l[0U] = Hybrid_PID_P.Logic_table_m[bpIdx];
    Hybrid_PID_B.Logic_l[1U] = Hybrid_PID_P.Logic_table_m[bpIdx + 8U];

    /* Logic: '<S3>/Logical Operator' */
    Hybrid_PID_B.LogicalOperator = (Hybrid_PID_B.Logic[0] &&
      Hybrid_PID_B.Logic_d[0] && Hybrid_PID_B.Logic_l[0]);

    /* DataStoreWrite: '<Root>/Data Store Write3' */
    Hybrid_PID_DW.RFlag = Hybrid_PID_B.LogicalOperator;

    /* DataStoreWrite: '<S9>/Data Store Write' */
    Hybrid_PID_DW.Xmem = Hybrid_PID_B.XData;

    /* ok to acquire for <S26>/S-Function */
    Hybrid_PID_DW.SFunction_IWORK.AcquireOK = 1;

    /* ok to acquire for <S28>/S-Function */
    Hybrid_PID_DW.SFunction_IWORK_c.AcquireOK = 1;

    /* ToAsyncQueueBlock: '<S9>/HiddenToAsyncQueue_InsertedFor_count_to_mm1_at_outport_0' */
    if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
      {
        double time = Hybrid_PID_M->Timing.t[1];
        void *pData = (void *)&Hybrid_PID_B.XData;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(1342791304U, time, pData, size);
      }
    }

    /* DataStoreWrite: '<S14>/Data Store Write1' */
    Hybrid_PID_DW.Ymem = Hybrid_PID_B.YData;

    /* ok to acquire for <S30>/S-Function */
    Hybrid_PID_DW.SFunction_IWORK_o.AcquireOK = 1;

    /* ok to acquire for <S32>/S-Function */
    Hybrid_PID_DW.SFunction_IWORK_p.AcquireOK = 1;

    /* ToAsyncQueueBlock: '<S14>/HiddenToAsyncQueue_InsertedFor_count_to_mm_at_outport_0' */
    if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
      {
        double time = Hybrid_PID_M->Timing.t[1];
        void *pData = (void *)&Hybrid_PID_B.YData;
        int32_T size = 1*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(2305056684U, time, pData, size);
      }
    }

    /* Level2 S-Function Block: '<S19>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[3];
      sfcnOutputs(rts, 1);
    }

    /* Sum: '<S19>/Sum2' incorporates:
     *  Constant: '<S19>/encoder offsets1'
     */
    Hybrid_PID_B.Sum2_g = Hybrid_PID_B.counts_f -
      Hybrid_PID_P.encoderoffsets1_Value_f;

    /* Gain: '<S19>/count_to_mm' */
    Hybrid_PID_B.ZData = Hybrid_PID_P.count_to_mm_Gain_j * Hybrid_PID_B.Sum2_g;

    /* DataStoreWrite: '<S19>/Data Store Write2' */
    Hybrid_PID_DW.Zmem = Hybrid_PID_B.ZData;

    /* ok to acquire for <S34>/S-Function */
    Hybrid_PID_DW.SFunction_IWORK_i.AcquireOK = 1;

    /* ok to acquire for <S36>/S-Function */
    Hybrid_PID_DW.SFunction_IWORK_f.AcquireOK = 1;
  }

  /* Signum: '<S8>/Sign2' */
  u = Hybrid_PID_B.Sum1;
  if (u < 0.0) {
    Hybrid_PID_B.motX = -1.0;
  } else if (u > 0.0) {
    Hybrid_PID_B.motX = 1.0;
  } else if (u == 0.0) {
    Hybrid_PID_B.motX = 0.0;
  } else {
    Hybrid_PID_B.motX = u;
  }

  /* End of Signum: '<S8>/Sign2' */

  /* Gain: '<S8>/Voltage1' */
  Hybrid_PID_B.xVoltage = Hybrid_PID_P.Voltage1_Gain * Hybrid_PID_B.motX;

  /* Signum: '<S13>/Sign' */
  u = Hybrid_PID_B.motY;
  if (u < 0.0) {
    Hybrid_PID_B.Sign = -1.0;
  } else if (u > 0.0) {
    Hybrid_PID_B.Sign = 1.0;
  } else if (u == 0.0) {
    Hybrid_PID_B.Sign = 0.0;
  } else {
    Hybrid_PID_B.Sign = u;
  }

  /* End of Signum: '<S13>/Sign' */

  /* Gain: '<S13>/Voltage' */
  Hybrid_PID_B.VoltageY = Hybrid_PID_P.Voltage_Gain * Hybrid_PID_B.Sign;

  /* Signum: '<S18>/Sign1' */
  u = Hybrid_PID_B.Zenable;
  if (u < 0.0) {
    Hybrid_PID_B.Sign1 = -1.0;
  } else if (u > 0.0) {
    Hybrid_PID_B.Sign1 = 1.0;
  } else if (u == 0.0) {
    Hybrid_PID_B.Sign1 = 0.0;
  } else {
    Hybrid_PID_B.Sign1 = u;
  }

  /* End of Signum: '<S18>/Sign1' */

  /* Gain: '<S18>/Voltage2' */
  Hybrid_PID_B.VoltageZ = Hybrid_PID_P.Voltage2_Gain * Hybrid_PID_B.Sign1;
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[4];
      sfcnOutputs(rts, 1);
    }

    /* ok to acquire for <S23>/S-Function */
    Hybrid_PID_DW.SFunction_IWORK_b.AcquireOK = 1;

    /* ok to acquire for <S24>/S-Function */
    Hybrid_PID_DW.SFunction_IWORK_n.AcquireOK = 1;

    /* DataTypeConversion: '<Root>/Data Type Conversion1' */
    Hybrid_PID_B.DataTypeConversion1_n = Hybrid_PID_B.LogicalOperator;

    /* ToAsyncQueueBlock: '<S2>/HiddenToAsyncQueue_InsertedFor_Byte Unpacking 1_at_outport_0' */
    if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
      {
        double time = Hybrid_PID_M->Timing.t[1];
        void *pData = (void *)&Hybrid_PID_B.orceData[0];
        int32_T size = 6*sizeof(real_T);
        sendToAsyncQueueTgtAppSvc(2566913250U, time, pData, size);
      }
    }

    /* Gain: '<S5>/Integral Gain' */
    Hybrid_PID_B.IntegralGain = Hybrid_PID_P.kix * Hybrid_PID_B.Sum;
  }

  /* Abs: '<S8>/Abs1' */
  Hybrid_PID_B.XEnable = fabs(Hybrid_PID_B.motX);
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* Level2 S-Function Block: '<S8>/PCI-DDA 08 12 4' (dopci8255) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[5];
      sfcnOutputs(rts, 1);
    }

    /* Gain: '<S10>/Integral Gain' */
    Hybrid_PID_B.IntegralGain_d = Hybrid_PID_P.kiy * Hybrid_PID_B.Sum2_n;
  }

  /* Abs: '<S13>/Abs' */
  Hybrid_PID_B.Yenable = fabs(Hybrid_PID_B.Sign);
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* Level2 S-Function Block: '<S13>/PCI-DDA 08 12 3' (dopci8255) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[6];
      sfcnOutputs(rts, 1);
    }

    /* Gain: '<S15>/Integral Gain' */
    Hybrid_PID_B.IntegralGain_l = Hybrid_PID_P.kiz * Hybrid_PID_B.Sum4;

    /* Constant: '<S17>/Constant' */
    Hybrid_PID_B.Constant = Hybrid_PID_P.Constant_Value;
  }

  /* Abs: '<S18>/Abs2' */
  Hybrid_PID_B.Zenable_e = fabs(Hybrid_PID_B.Sign1);
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* Level2 S-Function Block: '<S18>/PCI-DDA08 12 3' (dipci8255) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[7];
      sfcnOutputs(rts, 1);
    }
  }

  /* Logic: '<S18>/Logical Operator' */
  Hybrid_PID_B.LogicalOperator_m = ((Hybrid_PID_B.Zenable_e != 0.0) &&
    (Hybrid_PID_B.PCIDDA08123 != 0.0));

  /* DataTypeConversion: '<S18>/Data Type Conversion' */
  Hybrid_PID_B.DataTypeConversion = Hybrid_PID_B.LogicalOperator_m;
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* Level2 S-Function Block: '<S18>/PCI-DDA 08 12 1' (dopci8255) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[8];
      sfcnOutputs(rts, 1);
    }
  }
}

/* Model update function */
void Hybrid_PID_update(void)
{
  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    /* Update for UnitDelay: '<S6>/Unit Delay2' */
    Hybrid_PID_DW.UnitDelay2_DSTATE = Hybrid_PID_B.XMatrixCounter_o2;

    /* Update for UnitDelay: '<S7>/Unit Delay' */
    Hybrid_PID_DW.UnitDelay_DSTATE = Hybrid_PID_B.Counter_o2;

    /* Update for UnitDelay: '<S3>/Unit Delay' */
    Hybrid_PID_DW.UnitDelay_DSTATE_o = Hybrid_PID_B.LogicalOperator;

    /* Update for Memory: '<S20>/Memory' */
    Hybrid_PID_DW.Memory_PreviousInput = Hybrid_PID_B.Logic[0];

    /* Update for UnitDelay: '<S11>/Unit Delay1' */
    Hybrid_PID_DW.UnitDelay1_DSTATE = Hybrid_PID_B.YMatrixCounter_o2;

    /* Update for UnitDelay: '<S12>/Unit Delay' */
    Hybrid_PID_DW.UnitDelay_DSTATE_oc = Hybrid_PID_B.Counter_o2_h;

    /* Update for Memory: '<S21>/Memory' */
    Hybrid_PID_DW.Memory_PreviousInput_p = Hybrid_PID_B.Logic_d[0];

    /* Update for UnitDelay: '<S1>/Unit Delay' */
    Hybrid_PID_DW.UnitDelay_DSTATE_e = Hybrid_PID_B.ForceMatrixCounter_o2;

    /* Update for UnitDelay: '<S17>/Unit Delay' */
    Hybrid_PID_DW.UnitDelay_DSTATE_p = Hybrid_PID_B.Counter_o2_c;

    /* Update for Memory: '<S22>/Memory' */
    Hybrid_PID_DW.Memory_PreviousInput_c = Hybrid_PID_B.Logic_l[0];
  }

  if (rtmIsMajorTimeStep(Hybrid_PID_M)) {
    rt_ertODEUpdateContinuousStates(&Hybrid_PID_M->solverInfo);
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
  if (!(++Hybrid_PID_M->Timing.clockTick0)) {
    ++Hybrid_PID_M->Timing.clockTickH0;
  }

  Hybrid_PID_M->Timing.t[0] = rtsiGetSolverStopTime(&Hybrid_PID_M->solverInfo);

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
    if (!(++Hybrid_PID_M->Timing.clockTick1)) {
      ++Hybrid_PID_M->Timing.clockTickH1;
    }

    Hybrid_PID_M->Timing.t[1] = Hybrid_PID_M->Timing.clockTick1 *
      Hybrid_PID_M->Timing.stepSize1 + Hybrid_PID_M->Timing.clockTickH1 *
      Hybrid_PID_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void Hybrid_PID_derivatives(void)
{
  XDot_Hybrid_PID_T *_rtXdot;
  _rtXdot = ((XDot_Hybrid_PID_T *) Hybrid_PID_M->ModelData.derivs);

  /* Derivatives for Integrator: '<S5>/Integrator' */
  _rtXdot->Integrator_CSTATE = Hybrid_PID_B.IntegralGain;

  /* Derivatives for Integrator: '<S5>/Filter' */
  _rtXdot->Filter_CSTATE = Hybrid_PID_B.FilterCoefficient;

  /* Derivatives for Integrator: '<S10>/Integrator' */
  _rtXdot->Integrator_CSTATE_h = Hybrid_PID_B.IntegralGain_d;

  /* Derivatives for Integrator: '<S10>/Filter' */
  _rtXdot->Filter_CSTATE_c = Hybrid_PID_B.FilterCoefficient_p;

  /* Derivatives for Integrator: '<S15>/Integrator' */
  _rtXdot->Integrator_CSTATE_l = Hybrid_PID_B.IntegralGain_l;

  /* Derivatives for Integrator: '<S15>/Filter' */
  _rtXdot->Filter_CSTATE_cw = Hybrid_PID_B.FilterCoefficient_b;
}

/* Model initialize function */
void Hybrid_PID_initialize(void)
{
  /* Level2 S-Function Block: '<S9>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S14>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S2>/Receive 1' (xpcudpbytereceive) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S26>/S-Function (scblock) */
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
        xpceScopeAcqOK(3, &Hybrid_PID_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* S-Function Block: <S28>/S-Function (scblock) */
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
        xpceScopeAcqOK(1, &Hybrid_PID_DW.SFunction_IWORK_c.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* S-Function Block: <S30>/S-Function (scblock) */
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
        xpceScopeAcqOK(6, &Hybrid_PID_DW.SFunction_IWORK_o.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(6);
    }
  }

  /* S-Function Block: <S32>/S-Function (scblock) */
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
        xpceScopeAcqOK(4, &Hybrid_PID_DW.SFunction_IWORK_p.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* Level2 S-Function Block: '<S19>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S34>/S-Function (scblock) */
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
        xpceScopeAcqOK(7, &Hybrid_PID_DW.SFunction_IWORK_i.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(7);
    }
  }

  /* S-Function Block: <S36>/S-Function (scblock) */
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
        xpceScopeAcqOK(9, &Hybrid_PID_DW.SFunction_IWORK_f.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(9);
    }
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S23>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo(
          "X Position signal/Data Type Conversion1"));
        rl32eAddSignal(2, rl32eGetSignalNo(
          "Y Position signal/Data Type Conversion1"));
        rl32eAddSignal(2, rl32eGetSignalNo(
          "Z Position signal/Data Type Conversion1"));
        rl32eAddSignal(2, rl32eGetSignalNo("Force Subsystem/Byte Unpacking 1/s3"));
        rl32eAddSignal(2, rl32eGetSignalNo("Force Reference/Force Matrix output"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion1"));
        rl32eSetScope(2, 4, 5000);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo(
          "X Position signal/Data Type Conversion1"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 3.0);
        rl32eSetTargetScope(2, 11, 0.0);
        rl32eSetTargetScope(2, 10, 0.0);
        xpceScopeAcqOK(2, &Hybrid_PID_DW.SFunction_IWORK_b.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* S-Function Block: <S24>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,3)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eAddSignal(5, rl32eGetSignalNo(
          "X Position signal/Data Type Conversion1"));
        rl32eAddSignal(5, rl32eGetSignalNo(
          "Y Position signal/Data Type Conversion1"));
        rl32eAddSignal(5, rl32eGetSignalNo(
          "Z Position signal/Data Type Conversion1"));
        rl32eAddSignal(5, rl32eGetSignalNo("Force Subsystem/Byte Unpacking 1/s3"));
        rl32eAddSignal(5, rl32eGetSignalNo("Force Reference/Force Matrix output"));
        rl32eAddSignal(5, rl32eGetSignalNo("Data Type Conversion1"));
        rl32eSetScope(5, 4, 250000);
        rl32eSetScope(5, 5, 0);
        rl32eSetScope(5, 6, 1);
        rl32eSetScope(5, 0, 0);
        xpceFSScopeSet(5, "var.dat", 0, 512, 0, 536870912);
        rl32eSetScope (5, 10, 0);
        rl32eSetScope(5, 3, rl32eGetSignalNo(
          "X Position signal/Data Type Conversion1"));
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 0);
        rl32eSetScope(5, 9, 0);
        xpceScopeAcqOK(5, &Hybrid_PID_DW.SFunction_IWORK_n.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(5);
    }
  }

  /* Level2 S-Function Block: '<S8>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S13>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S18>/PCI-DDA08 12 3' (dipci8255) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S18>/PCI-DDA 08 12 1' (dopci8255) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  Hybrid_PID_DW.Xmem = Hybrid_PID_P.DataStoreMemory_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  Hybrid_PID_DW.Ymem = Hybrid_PID_P.DataStoreMemory1_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory2' */
  Hybrid_PID_DW.Zmem = Hybrid_PID_P.DataStoreMemory2_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory3' */
  Hybrid_PID_DW.RFlag = Hybrid_PID_P.DataStoreMemory3_InitialValue;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay2' */
  Hybrid_PID_DW.UnitDelay2_DSTATE = Hybrid_PID_P.UnitDelay2_InitialCondition;

  /* InitializeConditions for S-Function (sdspcount2): '<S6>/X Matrix Counter' */
  Hybrid_PID_DW.XMatrixCounter_ClkEphState = 5U;
  Hybrid_PID_DW.XMatrixCounter_RstEphState = 5U;
  Hybrid_PID_DW.XMatrixCounter_Count = Hybrid_PID_P.XMatrixCounter_InitialCount;

  /* InitializeConditions for Integrator: '<S5>/Integrator' */
  Hybrid_PID_X.Integrator_CSTATE = Hybrid_PID_P.Integrator_IC;

  /* InitializeConditions for Integrator: '<S5>/Filter' */
  Hybrid_PID_X.Filter_CSTATE = Hybrid_PID_P.Filter_IC;

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay' */
  Hybrid_PID_DW.UnitDelay_DSTATE = Hybrid_PID_P.UnitDelay_InitialCondition;

  /* InitializeConditions for S-Function (sdspcount2): '<S7>/Counter' */
  Hybrid_PID_DW.Counter_ClkEphState = 5U;
  Hybrid_PID_DW.Counter_RstEphState = 5U;
  Hybrid_PID_DW.Counter_Count = Hybrid_PID_P.Counter_InitialCount;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
  Hybrid_PID_DW.UnitDelay_DSTATE_o = Hybrid_PID_P.UnitDelay_InitialCondition_f;

  /* InitializeConditions for Memory: '<S20>/Memory' */
  Hybrid_PID_DW.Memory_PreviousInput = Hybrid_PID_P.XFlipflop_initial_condition;

  /* InitializeConditions for UnitDelay: '<S11>/Unit Delay1' */
  Hybrid_PID_DW.UnitDelay1_DSTATE = Hybrid_PID_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for S-Function (sdspcount2): '<S11>/Y Matrix Counter' */
  Hybrid_PID_DW.YMatrixCounter_ClkEphState = 5U;
  Hybrid_PID_DW.YMatrixCounter_RstEphState = 5U;
  Hybrid_PID_DW.YMatrixCounter_Count = Hybrid_PID_P.YMatrixCounter_InitialCount;

  /* InitializeConditions for Integrator: '<S10>/Integrator' */
  Hybrid_PID_X.Integrator_CSTATE_h = Hybrid_PID_P.Integrator_IC_o;

  /* InitializeConditions for Integrator: '<S10>/Filter' */
  Hybrid_PID_X.Filter_CSTATE_c = Hybrid_PID_P.Filter_IC_m;

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay' */
  Hybrid_PID_DW.UnitDelay_DSTATE_oc = Hybrid_PID_P.UnitDelay_InitialCondition_m;

  /* InitializeConditions for S-Function (sdspcount2): '<S12>/Counter' */
  Hybrid_PID_DW.Counter_ClkEphState_j = 5U;
  Hybrid_PID_DW.Counter_RstEphState_k = 5U;
  Hybrid_PID_DW.Counter_Count_b = Hybrid_PID_P.Counter_InitialCount_d;

  /* InitializeConditions for Memory: '<S21>/Memory' */
  Hybrid_PID_DW.Memory_PreviousInput_p =
    Hybrid_PID_P.YFlipflop_initial_condition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Hybrid_PID_DW.UnitDelay_DSTATE_e = Hybrid_PID_P.UnitDelay_InitialCondition_n;

  /* InitializeConditions for S-Function (sdspcount2): '<S1>/Force Matrix Counter' */
  Hybrid_PID_DW.ForceMatrixCounter_ClkEphState = 5U;
  Hybrid_PID_DW.ForceMatrixCounter_RstEphState = 5U;
  Hybrid_PID_DW.ForceMatrixCounter_Count =
    Hybrid_PID_P.ForceMatrixCounter_InitialCount;

  /* InitializeConditions for Integrator: '<S15>/Integrator' */
  Hybrid_PID_X.Integrator_CSTATE_l = Hybrid_PID_P.Integrator_IC_j;

  /* InitializeConditions for Integrator: '<S15>/Filter' */
  Hybrid_PID_X.Filter_CSTATE_cw = Hybrid_PID_P.Filter_IC_k;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay' */
  Hybrid_PID_DW.UnitDelay_DSTATE_p = Hybrid_PID_P.UnitDelay_InitialCondition_mb;

  /* InitializeConditions for S-Function (sdspcount2): '<S17>/Counter' */
  Hybrid_PID_DW.Counter_ClkEphState_jq = 5U;
  Hybrid_PID_DW.Counter_RstEphState_m = 5U;
  Hybrid_PID_DW.Counter_Count_p = Hybrid_PID_P.Counter_InitialCount_b;

  /* InitializeConditions for Memory: '<S22>/Memory' */
  Hybrid_PID_DW.Memory_PreviousInput_c =
    Hybrid_PID_P.ZFlipflop_initial_condition;
}

/* Model terminate function */
void Hybrid_PID_terminate(void)
{
  /* Level2 S-Function Block: '<S9>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S14>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S2>/Receive 1' (xpcudpbytereceive) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S19>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S8>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S13>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S18>/PCI-DDA08 12 3' (dipci8255) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S18>/PCI-DDA 08 12 1' (dopci8255) */
  {
    SimStruct *rts = Hybrid_PID_M->childSfunctions[8];
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
  Hybrid_PID_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  Hybrid_PID_update();
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
  Hybrid_PID_initialize();
}

void MdlTerminate(void)
{
  Hybrid_PID_terminate();
}

/* Registration function */
RT_MODEL_Hybrid_PID_T *Hybrid_PID(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Hybrid_PID_M, 0,
                sizeof(RT_MODEL_Hybrid_PID_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Hybrid_PID_M->solverInfo,
                          &Hybrid_PID_M->Timing.simTimeStep);
    rtsiSetTPtr(&Hybrid_PID_M->solverInfo, &rtmGetTPtr(Hybrid_PID_M));
    rtsiSetStepSizePtr(&Hybrid_PID_M->solverInfo,
                       &Hybrid_PID_M->Timing.stepSize0);
    rtsiSetdXPtr(&Hybrid_PID_M->solverInfo, &Hybrid_PID_M->ModelData.derivs);
    rtsiSetContStatesPtr(&Hybrid_PID_M->solverInfo, (real_T **)
                         &Hybrid_PID_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&Hybrid_PID_M->solverInfo,
      &Hybrid_PID_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&Hybrid_PID_M->solverInfo,
      &Hybrid_PID_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&Hybrid_PID_M->solverInfo,
      &Hybrid_PID_M->ModelData.periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&Hybrid_PID_M->solverInfo,
      &Hybrid_PID_M->ModelData.periodicContStateRanges);
    rtsiSetErrorStatusPtr(&Hybrid_PID_M->solverInfo, (&rtmGetErrorStatus
      (Hybrid_PID_M)));
    rtsiSetRTModelPtr(&Hybrid_PID_M->solverInfo, Hybrid_PID_M);
  }

  rtsiSetSimTimeStep(&Hybrid_PID_M->solverInfo, MAJOR_TIME_STEP);
  Hybrid_PID_M->ModelData.intgData.y = Hybrid_PID_M->ModelData.odeY;
  Hybrid_PID_M->ModelData.intgData.f[0] = Hybrid_PID_M->ModelData.odeF[0];
  Hybrid_PID_M->ModelData.intgData.f[1] = Hybrid_PID_M->ModelData.odeF[1];
  Hybrid_PID_M->ModelData.intgData.f[2] = Hybrid_PID_M->ModelData.odeF[2];
  Hybrid_PID_M->ModelData.intgData.f[3] = Hybrid_PID_M->ModelData.odeF[3];
  Hybrid_PID_M->ModelData.contStates = ((real_T *) &Hybrid_PID_X);
  rtsiSetSolverData(&Hybrid_PID_M->solverInfo, (void *)
                    &Hybrid_PID_M->ModelData.intgData);
  rtsiSetSolverName(&Hybrid_PID_M->solverInfo,"ode4");
  Hybrid_PID_M->solverInfoPtr = (&Hybrid_PID_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Hybrid_PID_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    Hybrid_PID_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Hybrid_PID_M->Timing.sampleTimes = (&Hybrid_PID_M->Timing.sampleTimesArray[0]);
    Hybrid_PID_M->Timing.offsetTimes = (&Hybrid_PID_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Hybrid_PID_M->Timing.sampleTimes[0] = (0.0);
    Hybrid_PID_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    Hybrid_PID_M->Timing.offsetTimes[0] = (0.0);
    Hybrid_PID_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Hybrid_PID_M, &Hybrid_PID_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Hybrid_PID_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    Hybrid_PID_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Hybrid_PID_M, -1);
  Hybrid_PID_M->Timing.stepSize0 = 0.001;
  Hybrid_PID_M->Timing.stepSize1 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    Hybrid_PID_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Hybrid_PID_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Hybrid_PID_M->rtwLogInfo, (NULL));
    rtliSetLogT(Hybrid_PID_M->rtwLogInfo, "tout");
    rtliSetLogX(Hybrid_PID_M->rtwLogInfo, "");
    rtliSetLogXFinal(Hybrid_PID_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Hybrid_PID_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Hybrid_PID_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(Hybrid_PID_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Hybrid_PID_M->rtwLogInfo, 1);
    rtliSetLogY(Hybrid_PID_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Hybrid_PID_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Hybrid_PID_M->rtwLogInfo, (NULL));
  }

  Hybrid_PID_M->solverInfoPtr = (&Hybrid_PID_M->solverInfo);
  Hybrid_PID_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&Hybrid_PID_M->solverInfo, 0.001);
  rtsiSetSolverMode(&Hybrid_PID_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Hybrid_PID_M->ModelData.blockIO = ((void *) &Hybrid_PID_B);
  (void) memset(((void *) &Hybrid_PID_B), 0,
                sizeof(B_Hybrid_PID_T));

  /* parameters */
  Hybrid_PID_M->ModelData.defaultParam = ((real_T *)&Hybrid_PID_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &Hybrid_PID_X;
    Hybrid_PID_M->ModelData.contStates = (x);
    (void) memset((void *)&Hybrid_PID_X, 0,
                  sizeof(X_Hybrid_PID_T));
  }

  /* states (dwork) */
  Hybrid_PID_M->ModelData.dwork = ((void *) &Hybrid_PID_DW);
  (void) memset((void *)&Hybrid_PID_DW, 0,
                sizeof(DW_Hybrid_PID_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  Hybrid_PID_InitializeDataMapInfo(Hybrid_PID_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Hybrid_PID_M->NonInlinedSFcns.sfcnInfo;
    Hybrid_PID_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(Hybrid_PID_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &Hybrid_PID_M->Sizes.numSampTimes);
    Hybrid_PID_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(Hybrid_PID_M)[0]);
    Hybrid_PID_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(Hybrid_PID_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,Hybrid_PID_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Hybrid_PID_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Hybrid_PID_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(Hybrid_PID_M));
    rtssSetStepSizePtr(sfcnInfo, &Hybrid_PID_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(Hybrid_PID_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Hybrid_PID_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &Hybrid_PID_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &Hybrid_PID_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &Hybrid_PID_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Hybrid_PID_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Hybrid_PID_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Hybrid_PID_M->solverInfoPtr);
  }

  Hybrid_PID_M->Sizes.numSFcns = (9);

  /* register each child */
  {
    (void) memset((void *)&Hybrid_PID_M->NonInlinedSFcns.childSFunctions[0], 0,
                  9*sizeof(SimStruct));
    Hybrid_PID_M->childSfunctions =
      (&Hybrid_PID_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 9; i++) {
        Hybrid_PID_M->childSfunctions[i] =
          (&Hybrid_PID_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: Hybrid_PID/<S9>/CNT32-8M(PCI) 2 (encconteccnt328mpci) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = Hybrid_PID_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = Hybrid_PID_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = Hybrid_PID_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Hybrid_PID_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, Hybrid_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Hybrid_PID_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Hybrid_PID_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Hybrid_PID_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &Hybrid_PID_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &Hybrid_PID_B.counts));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) 2");
      ssSetPath(rts, "Hybrid_PID/X_Encoder/CNT32-8M(PCI) 2");
      ssSetRTModel(rts,Hybrid_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)Hybrid_PID_P.CNT328MPCI2_P35_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Hybrid_PID_DW.CNT328MPCI2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Hybrid_PID_DW.CNT328MPCI2_IWORK[0]);
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

    /* Level2 S-Function Block: Hybrid_PID/<S14>/CNT32-8M(PCI) 1 (encconteccnt328mpci) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = Hybrid_PID_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = Hybrid_PID_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = Hybrid_PID_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Hybrid_PID_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, Hybrid_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Hybrid_PID_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Hybrid_PID_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Hybrid_PID_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &Hybrid_PID_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &Hybrid_PID_B.counts_o));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) 1");
      ssSetPath(rts, "Hybrid_PID/Y_encoder /CNT32-8M(PCI) 1");
      ssSetRTModel(rts,Hybrid_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P35_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Hybrid_PID_DW.CNT328MPCI1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Hybrid_PID_DW.CNT328MPCI1_IWORK[0]);
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

    /* Level2 S-Function Block: Hybrid_PID/<S2>/Receive 1 (xpcudpbytereceive) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = Hybrid_PID_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = Hybrid_PID_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = Hybrid_PID_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Hybrid_PID_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, Hybrid_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Hybrid_PID_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Hybrid_PID_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Hybrid_PID_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &Hybrid_PID_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 48);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *) Hybrid_PID_B.Receive1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *) &Hybrid_PID_B.Receive1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Receive 1");
      ssSetPath(rts, "Hybrid_PID/Force Subsystem/Receive 1");
      ssSetRTModel(rts,Hybrid_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Hybrid_PID_P.Receive1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Hybrid_PID_P.Receive1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Hybrid_PID_P.Receive1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Hybrid_PID_P.Receive1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Hybrid_PID_P.Receive1_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Hybrid_PID_DW.Receive1_IWORK[0]);
      ssSetPWork(rts, (void **) &Hybrid_PID_DW.Receive1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Hybrid_PID_DW.Receive1_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Hybrid_PID_DW.Receive1_PWORK);
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

    /* Level2 S-Function Block: Hybrid_PID/<S19>/CNT32-8M(PCI) 1 (encconteccnt328mpci) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = Hybrid_PID_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = Hybrid_PID_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = Hybrid_PID_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Hybrid_PID_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, Hybrid_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Hybrid_PID_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Hybrid_PID_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Hybrid_PID_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &Hybrid_PID_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &Hybrid_PID_B.counts_f));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) 1");
      ssSetPath(rts, "Hybrid_PID/Z_encoder/CNT32-8M(PCI) 1");
      ssSetRTModel(rts,Hybrid_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P2_Size_l);
        ssSetSFcnParam(rts, 2, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P3_Size_b);
        ssSetSFcnParam(rts, 3, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P4_Size_g);
        ssSetSFcnParam(rts, 4, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P5_Size_m);
        ssSetSFcnParam(rts, 5, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P6_Size_n);
        ssSetSFcnParam(rts, 6, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P7_Size_d);
        ssSetSFcnParam(rts, 7, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P8_Size_i);
        ssSetSFcnParam(rts, 8, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P9_Size_a);
        ssSetSFcnParam(rts, 9, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P10_Size_h);
        ssSetSFcnParam(rts, 10, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P11_Size_j);
        ssSetSFcnParam(rts, 11, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P12_Size_n);
        ssSetSFcnParam(rts, 12, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P13_Size_a);
        ssSetSFcnParam(rts, 13, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P14_Size_e);
        ssSetSFcnParam(rts, 14, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P15_Size_d);
        ssSetSFcnParam(rts, 15, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P16_Size_i);
        ssSetSFcnParam(rts, 16, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P17_Size_c);
        ssSetSFcnParam(rts, 17, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P18_Size_i);
        ssSetSFcnParam(rts, 18, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P19_Size_j);
        ssSetSFcnParam(rts, 19, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P20_Size_e);
        ssSetSFcnParam(rts, 20, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P21_Size_e);
        ssSetSFcnParam(rts, 21, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P22_Size_p);
        ssSetSFcnParam(rts, 22, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P23_Size_k);
        ssSetSFcnParam(rts, 23, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P24_Size_k);
        ssSetSFcnParam(rts, 24, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P25_Size_m);
        ssSetSFcnParam(rts, 25, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P26_Size_m);
        ssSetSFcnParam(rts, 26, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P27_Size_a);
        ssSetSFcnParam(rts, 27, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P28_Size_i);
        ssSetSFcnParam(rts, 28, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P29_Size_b);
        ssSetSFcnParam(rts, 29, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P30_Size_o);
        ssSetSFcnParam(rts, 30, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P31_Size_j);
        ssSetSFcnParam(rts, 31, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P32_Size_n);
        ssSetSFcnParam(rts, 32, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P33_Size_a);
        ssSetSFcnParam(rts, 33, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P34_Size_l);
        ssSetSFcnParam(rts, 34, (mxArray*)Hybrid_PID_P.CNT328MPCI1_P35_Size_b);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Hybrid_PID_DW.CNT328MPCI1_IWORK_h[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Hybrid_PID_DW.CNT328MPCI1_IWORK_h[0]);
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

    /* Level2 S-Function Block: Hybrid_PID/<Root>/PCI-DDA08 12  (dacbpcidda0x12) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = Hybrid_PID_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = Hybrid_PID_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = Hybrid_PID_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Hybrid_PID_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, Hybrid_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Hybrid_PID_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Hybrid_PID_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Hybrid_PID_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &Hybrid_PID_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Hybrid_PID_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &Hybrid_PID_B.xVoltage;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Hybrid_PID_M->NonInlinedSFcns.Sfcn4.UPtrs1;
          sfcnUPtrs[0] = &Hybrid_PID_B.VoltageY;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Hybrid_PID_M->NonInlinedSFcns.Sfcn4.UPtrs2;
          sfcnUPtrs[0] = &Hybrid_PID_B.VoltageZ;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 ");
      ssSetPath(rts, "Hybrid_PID/PCI-DDA08 12 ");
      ssSetRTModel(rts,Hybrid_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Hybrid_PID_P.PCIDDA0812_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Hybrid_PID_P.PCIDDA0812_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Hybrid_PID_P.PCIDDA0812_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Hybrid_PID_P.PCIDDA0812_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Hybrid_PID_P.PCIDDA0812_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Hybrid_PID_P.PCIDDA0812_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Hybrid_PID_P.PCIDDA0812_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Hybrid_PID_DW.PCIDDA0812_RWORK[0]);
      ssSetIWork(rts, (int_T *) &Hybrid_PID_DW.PCIDDA0812_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 16);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Hybrid_PID_DW.PCIDDA0812_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 4);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Hybrid_PID_DW.PCIDDA0812_IWORK[0]);
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

    /* Level2 S-Function Block: Hybrid_PID/<S8>/PCI-DDA 08 12 4 (dopci8255) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = Hybrid_PID_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = Hybrid_PID_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = Hybrid_PID_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Hybrid_PID_M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, Hybrid_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Hybrid_PID_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Hybrid_PID_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Hybrid_PID_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &Hybrid_PID_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Hybrid_PID_M->NonInlinedSFcns.Sfcn5.UPtrs0;
          sfcnUPtrs[0] = &Hybrid_PID_B.XEnable;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 4");
      ssSetPath(rts, "Hybrid_PID/X output processing/PCI-DDA 08 12 4");
      ssSetRTModel(rts,Hybrid_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Hybrid_PID_P.PCIDDA08124_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Hybrid_PID_P.PCIDDA08124_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Hybrid_PID_P.PCIDDA08124_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Hybrid_PID_P.PCIDDA08124_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Hybrid_PID_P.PCIDDA08124_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Hybrid_PID_P.PCIDDA08124_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Hybrid_PID_P.PCIDDA08124_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Hybrid_PID_P.PCIDDA08124_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Hybrid_PID_P.PCIDDA08124_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Hybrid_PID_P.PCIDDA08124_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Hybrid_PID_DW.PCIDDA08124_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Hybrid_PID_DW.PCIDDA08124_IWORK[0]);
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

    /* Level2 S-Function Block: Hybrid_PID/<S13>/PCI-DDA 08 12 3 (dopci8255) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = Hybrid_PID_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = Hybrid_PID_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = Hybrid_PID_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Hybrid_PID_M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, Hybrid_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Hybrid_PID_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Hybrid_PID_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Hybrid_PID_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &Hybrid_PID_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Hybrid_PID_M->NonInlinedSFcns.Sfcn6.UPtrs0;
          sfcnUPtrs[0] = &Hybrid_PID_B.Yenable;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 3");
      ssSetPath(rts, "Hybrid_PID/Y output processing/PCI-DDA 08 12 3");
      ssSetRTModel(rts,Hybrid_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Hybrid_PID_P.PCIDDA08123_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Hybrid_PID_P.PCIDDA08123_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Hybrid_PID_P.PCIDDA08123_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Hybrid_PID_P.PCIDDA08123_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Hybrid_PID_P.PCIDDA08123_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Hybrid_PID_P.PCIDDA08123_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Hybrid_PID_P.PCIDDA08123_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Hybrid_PID_P.PCIDDA08123_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Hybrid_PID_P.PCIDDA08123_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Hybrid_PID_P.PCIDDA08123_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Hybrid_PID_DW.PCIDDA08123_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Hybrid_PID_DW.PCIDDA08123_IWORK[0]);
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

    /* Level2 S-Function Block: Hybrid_PID/<S18>/PCI-DDA08 12 3 (dipci8255) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = Hybrid_PID_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = Hybrid_PID_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = Hybrid_PID_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Hybrid_PID_M->NonInlinedSFcns.blkInfo2[7]);
      }

      ssSetRTWSfcnInfo(rts, Hybrid_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Hybrid_PID_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Hybrid_PID_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Hybrid_PID_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &Hybrid_PID_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &Hybrid_PID_B.PCIDDA08123));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 3");
      ssSetPath(rts, "Hybrid_PID/Z output processing/PCI-DDA08 12 3");
      ssSetRTModel(rts,Hybrid_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Hybrid_PID_P.PCIDDA08123_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)Hybrid_PID_P.PCIDDA08123_P2_Size_f);
        ssSetSFcnParam(rts, 2, (mxArray*)Hybrid_PID_P.PCIDDA08123_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)Hybrid_PID_P.PCIDDA08123_P4_Size_h);
        ssSetSFcnParam(rts, 4, (mxArray*)Hybrid_PID_P.PCIDDA08123_P5_Size_n);
        ssSetSFcnParam(rts, 5, (mxArray*)Hybrid_PID_P.PCIDDA08123_P6_Size_j);
        ssSetSFcnParam(rts, 6, (mxArray*)Hybrid_PID_P.PCIDDA08123_P7_Size_e);
        ssSetSFcnParam(rts, 7, (mxArray*)Hybrid_PID_P.PCIDDA08123_P8_Size_f);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Hybrid_PID_DW.PCIDDA08123_IWORK_p[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Hybrid_PID_DW.PCIDDA08123_IWORK_p[0]);
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

    /* Level2 S-Function Block: Hybrid_PID/<S18>/PCI-DDA 08 12 1 (dopci8255) */
    {
      SimStruct *rts = Hybrid_PID_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = Hybrid_PID_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = Hybrid_PID_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = Hybrid_PID_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Hybrid_PID_M->NonInlinedSFcns.blkInfo2[8]);
      }

      ssSetRTWSfcnInfo(rts, Hybrid_PID_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Hybrid_PID_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Hybrid_PID_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Hybrid_PID_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &Hybrid_PID_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Hybrid_PID_M->NonInlinedSFcns.Sfcn8.UPtrs0;
          sfcnUPtrs[0] = &Hybrid_PID_B.DataTypeConversion;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 1");
      ssSetPath(rts, "Hybrid_PID/Z output processing/PCI-DDA 08 12 1");
      ssSetRTModel(rts,Hybrid_PID_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Hybrid_PID_P.PCIDDA08121_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Hybrid_PID_P.PCIDDA08121_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Hybrid_PID_P.PCIDDA08121_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Hybrid_PID_P.PCIDDA08121_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Hybrid_PID_P.PCIDDA08121_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Hybrid_PID_P.PCIDDA08121_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Hybrid_PID_P.PCIDDA08121_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Hybrid_PID_P.PCIDDA08121_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Hybrid_PID_P.PCIDDA08121_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Hybrid_PID_P.PCIDDA08121_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Hybrid_PID_DW.PCIDDA08121_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Hybrid_PID_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Hybrid_PID_DW.PCIDDA08121_IWORK[0]);
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
  Hybrid_PID_M->Sizes.numContStates = (6);/* Number of continuous states */
  Hybrid_PID_M->Sizes.numPeriodicContStates = (0);/* Number of periodic continuous states */
  Hybrid_PID_M->Sizes.numY = (0);      /* Number of model outputs */
  Hybrid_PID_M->Sizes.numU = (0);      /* Number of model inputs */
  Hybrid_PID_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Hybrid_PID_M->Sizes.numSampTimes = (2);/* Number of sample times */
  Hybrid_PID_M->Sizes.numBlocks = (125);/* Number of blocks */
  Hybrid_PID_M->Sizes.numBlockIO = (102);/* Number of block outputs */
  Hybrid_PID_M->Sizes.numBlockPrms = (60602);/* Sum of parameter "widths" */
  return Hybrid_PID_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
