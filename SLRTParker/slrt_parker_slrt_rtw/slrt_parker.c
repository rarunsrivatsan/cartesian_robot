/*
 * slrt_parker.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "slrt_parker".
 *
 * Model version              : 1.3413
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Wed Dec 14 13:07:16 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "slrt_parker_capi.h"
#include "slrt_parker.h"
#include "slrt_parker_private.h"

/* Block signals (auto storage) */
B_slrt_parker_T slrt_parker_B;

/* Block states (auto storage) */
DW_slrt_parker_T slrt_parker_DW;

/* Real-time model */
RT_MODEL_slrt_parker_T slrt_parker_M_;
RT_MODEL_slrt_parker_T *const slrt_parker_M = &slrt_parker_M_;
real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

uint32_T MWDSP_EPH_R_D(real_T evt, uint32_T *sta)
{
  uint32_T retVal;
  int32_T curState;
  int32_T newState;
  int32_T newStateR;
  int32_T lastzcevent;
  uint32_T previousState;

  /* S-Function (sdspcount2): '<S52>/Counter' */
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

  /* End of S-Function (sdspcount2): '<S52>/Counter' */
  return retVal;
}

/* Model output function */
static void slrt_parker_output(void)
{
  int32_T frameSize;
  boolean_T b[9];
  real_T cur_t;
  real_T t;
  real_T tau;
  real_T b_c;
  real_T g_c;
  real_T h_c;
  real_T i_c;
  int32_T i;
  boolean_T x_idx_0;
  boolean_T x_idx_1;
  boolean_T x_idx_2;
  real_T a5_idx_0;
  real_T a4_idx_0;
  real_T a5_idx_1;
  real_T a4_idx_1;
  real_T a5_idx_2;
  real_T a4_idx_2;

  /* Reset subsysRan breadcrumbs */
  srClearBC(slrt_parker_DW.EnabledSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(slrt_parker_DW.FileScope_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(slrt_parker_DW.Homing_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(slrt_parker_DW.QuinticPolynomial_SubsysRanBC);

  /* ok to acquire for <S28>/S-Function */
  slrt_parker_DW.SFunction_IWORK.AcquireOK = 1;

  /* Level2 S-Function Block: '<S16>/CNT32-8M(PCI) Ch1' (encconteccnt328mpci) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<S16>/CNT32-8M(PCI) Ch2' (encconteccnt328mpci) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<S16>/CNT32-8M(PCI) Ch3' (encconteccnt328mpci) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[2];
    sfcnOutputs(rts, 0);
  }

  /* Sum: '<S15>/Subtract' incorporates:
   *  Constant: '<S15>/Constant'
   */
  slrt_parker_B.Subtract[0] = slrt_parker_B.CNT328MPCICh1 -
    slrt_parker_P.counter_offset;
  slrt_parker_B.Subtract[1] = slrt_parker_B.CNT328MPCICh2 -
    slrt_parker_P.counter_offset;
  slrt_parker_B.Subtract[2] = slrt_parker_B.CNT328MPCICh3 -
    slrt_parker_P.counter_offset;

  /* Gain: '<S15>/Gain_Rads' */
  cur_t = slrt_parker_P.quadrature_mode * slrt_parker_P.encoder_counts;
  t = 6.2831853071795862 / cur_t;
  slrt_parker_B.Gain_Rads[0] = t * slrt_parker_B.Subtract[0];
  slrt_parker_B.Gain_Rads[1] = t * slrt_parker_B.Subtract[1];
  slrt_parker_B.Gain_Rads[2] = t * slrt_parker_B.Subtract[2];

  /* Gain: '<S15>/Rads_mm' */
  t = slrt_parker_P.screw_pitch;
  t /= 6.2831853071795862;
  slrt_parker_B.Rads_mm[0] = t * slrt_parker_B.Gain_Rads[0];

  /* RateTransition: '<S15>/Rate Transition' */
  slrt_parker_B.RateTransition[0] = slrt_parker_B.Rads_mm[0];

  /* UnitDelay: '<S15>/Unit Delay' */
  slrt_parker_B.UnitDelay[0] = slrt_parker_DW.UnitDelay_DSTATE[0];

  /* Sum: '<S15>/Add' */
  slrt_parker_B.Add[0] = slrt_parker_B.RateTransition[0] -
    slrt_parker_B.UnitDelay[0];

  /* Gain: '<S15>/Rads_mm' */
  slrt_parker_B.Rads_mm[1] = t * slrt_parker_B.Gain_Rads[1];

  /* RateTransition: '<S15>/Rate Transition' */
  slrt_parker_B.RateTransition[1] = slrt_parker_B.Rads_mm[1];

  /* UnitDelay: '<S15>/Unit Delay' */
  slrt_parker_B.UnitDelay[1] = slrt_parker_DW.UnitDelay_DSTATE[1];

  /* Sum: '<S15>/Add' */
  slrt_parker_B.Add[1] = slrt_parker_B.RateTransition[1] -
    slrt_parker_B.UnitDelay[1];

  /* Gain: '<S15>/Rads_mm' */
  slrt_parker_B.Rads_mm[2] = t * slrt_parker_B.Gain_Rads[2];

  /* RateTransition: '<S15>/Rate Transition' */
  slrt_parker_B.RateTransition[2] = slrt_parker_B.Rads_mm[2];

  /* UnitDelay: '<S15>/Unit Delay' */
  slrt_parker_B.UnitDelay[2] = slrt_parker_DW.UnitDelay_DSTATE[2];

  /* Sum: '<S15>/Add' */
  slrt_parker_B.Add[2] = slrt_parker_B.RateTransition[2] -
    slrt_parker_B.UnitDelay[2];

  /* DiscreteFir: '<S19>/Discrete FIR Filter' incorporates:
   *  Constant: '<S19>/encoder obsever filter'
   */
  for (frameSize = 0; frameSize < 3; frameSize++) {
    slrt_parker_B.DiscreteFIRFilter[frameSize] = slrt_parker_B.Rads_mm[frameSize]
      * slrt_parker_P.ENC_obs_filter_coeffs;
  }

  /* End of DiscreteFir: '<S19>/Discrete FIR Filter' */

  /* Gain: '<S19>/Gain' */
  cur_t = slrt_parker_P.N_ENC_obs_filter;
  t = 1.0 / cur_t;
  slrt_parker_B.Gain[0] = t * slrt_parker_B.DiscreteFIRFilter[0];

  /* SampleTimeMath: '<S25>/TSamp'
   *
   * About '<S25>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  slrt_parker_B.TSamp[0] = slrt_parker_B.Gain[0] * slrt_parker_P.TSamp_WtEt;

  /* UnitDelay: '<S25>/UD' */
  slrt_parker_B.Uk1[0] = slrt_parker_DW.UD_DSTATE[0];

  /* Sum: '<S25>/Diff' */
  slrt_parker_B.Diff[0] = slrt_parker_B.TSamp[0] - slrt_parker_B.Uk1[0];

  /* Gain: '<S19>/Gain' */
  slrt_parker_B.Gain[1] = t * slrt_parker_B.DiscreteFIRFilter[1];

  /* SampleTimeMath: '<S25>/TSamp'
   *
   * About '<S25>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  slrt_parker_B.TSamp[1] = slrt_parker_B.Gain[1] * slrt_parker_P.TSamp_WtEt;

  /* UnitDelay: '<S25>/UD' */
  slrt_parker_B.Uk1[1] = slrt_parker_DW.UD_DSTATE[1];

  /* Sum: '<S25>/Diff' */
  slrt_parker_B.Diff[1] = slrt_parker_B.TSamp[1] - slrt_parker_B.Uk1[1];

  /* Gain: '<S19>/Gain' */
  slrt_parker_B.Gain[2] = t * slrt_parker_B.DiscreteFIRFilter[2];

  /* SampleTimeMath: '<S25>/TSamp'
   *
   * About '<S25>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  slrt_parker_B.TSamp[2] = slrt_parker_B.Gain[2] * slrt_parker_P.TSamp_WtEt;

  /* UnitDelay: '<S25>/UD' */
  slrt_parker_B.Uk1[2] = slrt_parker_DW.UD_DSTATE[2];

  /* Sum: '<S25>/Diff' */
  slrt_parker_B.Diff[2] = slrt_parker_B.TSamp[2] - slrt_parker_B.Uk1[2];

  /* DiscreteFir: '<S21>/Discrete FIR Filter' incorporates:
   *  Constant: '<S21>/vel_filter_coeffs'
   */
  i = 1;
  t = slrt_parker_B.Diff[0] * slrt_parker_P.vel_filter_coeffs[0];
  for (frameSize = slrt_parker_DW.DiscreteFIRFilter_circBuf; frameSize < 5;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states[frameSize] *
      slrt_parker_P.vel_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  for (frameSize = 0; frameSize < slrt_parker_DW.DiscreteFIRFilter_circBuf;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states[frameSize] *
      slrt_parker_P.vel_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  slrt_parker_B.DiscreteFIRFilter_m[0] = t;
  i = 1;
  t = slrt_parker_B.Diff[1] * slrt_parker_P.vel_filter_coeffs[0];
  for (frameSize = slrt_parker_DW.DiscreteFIRFilter_circBuf; frameSize < 5;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states[5 + frameSize] *
      slrt_parker_P.vel_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  for (frameSize = 0; frameSize < slrt_parker_DW.DiscreteFIRFilter_circBuf;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states[5 + frameSize] *
      slrt_parker_P.vel_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  slrt_parker_B.DiscreteFIRFilter_m[1] = t;
  i = 1;
  t = slrt_parker_B.Diff[2] * slrt_parker_P.vel_filter_coeffs[0];
  for (frameSize = slrt_parker_DW.DiscreteFIRFilter_circBuf; frameSize < 5;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states[10 + frameSize] *
      slrt_parker_P.vel_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  for (frameSize = 0; frameSize < slrt_parker_DW.DiscreteFIRFilter_circBuf;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states[10 + frameSize] *
      slrt_parker_P.vel_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  slrt_parker_B.DiscreteFIRFilter_m[2] = t;

  /* End of DiscreteFir: '<S21>/Discrete FIR Filter' */

  /* Gain: '<S21>/Gain' */
  cur_t = slrt_parker_P.N_velocity;
  t = 1.0 / cur_t;
  slrt_parker_B.Gain_c[0] = t * slrt_parker_B.DiscreteFIRFilter_m[0];

  /* RateTransition: '<S15>/Rate Transition1' */
  slrt_parker_B.RateTransition1[0] = slrt_parker_B.Gain_c[0];

  /* Gain: '<S21>/Gain' */
  slrt_parker_B.Gain_c[1] = t * slrt_parker_B.DiscreteFIRFilter_m[1];

  /* RateTransition: '<S15>/Rate Transition1' */
  slrt_parker_B.RateTransition1[1] = slrt_parker_B.Gain_c[1];

  /* Gain: '<S21>/Gain' */
  slrt_parker_B.Gain_c[2] = t * slrt_parker_B.DiscreteFIRFilter_m[2];

  /* RateTransition: '<S15>/Rate Transition1' */
  slrt_parker_B.RateTransition1[2] = slrt_parker_B.Gain_c[2];

  /* DiscreteFir: '<S18>/Discrete FIR Filter' incorporates:
   *  Constant: '<S18>/encoder obsever filter'
   */
  for (frameSize = 0; frameSize < 3; frameSize++) {
    slrt_parker_B.DiscreteFIRFilter_b[frameSize] =
      slrt_parker_B.Rads_mm[frameSize] * slrt_parker_P.ENC_obs_filter_coeffs;
  }

  /* End of DiscreteFir: '<S18>/Discrete FIR Filter' */

  /* Gain: '<S18>/Gain' */
  cur_t = slrt_parker_P.N_ENC_obs_filter;
  t = 1.0 / cur_t;
  slrt_parker_B.Gain_m[0] = t * slrt_parker_B.DiscreteFIRFilter_b[0];

  /* SampleTimeMath: '<S26>/TSamp'
   *
   * About '<S26>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  slrt_parker_B.TSamp_b[0] = slrt_parker_B.Gain_m[0] *
    slrt_parker_P.TSamp_WtEt_o;

  /* UnitDelay: '<S26>/UD' */
  slrt_parker_B.Uk1_o[0] = slrt_parker_DW.UD_DSTATE_g[0];

  /* Sum: '<S26>/Diff' */
  slrt_parker_B.Diff_h[0] = slrt_parker_B.TSamp_b[0] - slrt_parker_B.Uk1_o[0];

  /* Gain: '<S18>/Gain' */
  slrt_parker_B.Gain_m[1] = t * slrt_parker_B.DiscreteFIRFilter_b[1];

  /* SampleTimeMath: '<S26>/TSamp'
   *
   * About '<S26>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  slrt_parker_B.TSamp_b[1] = slrt_parker_B.Gain_m[1] *
    slrt_parker_P.TSamp_WtEt_o;

  /* UnitDelay: '<S26>/UD' */
  slrt_parker_B.Uk1_o[1] = slrt_parker_DW.UD_DSTATE_g[1];

  /* Sum: '<S26>/Diff' */
  slrt_parker_B.Diff_h[1] = slrt_parker_B.TSamp_b[1] - slrt_parker_B.Uk1_o[1];

  /* Gain: '<S18>/Gain' */
  slrt_parker_B.Gain_m[2] = t * slrt_parker_B.DiscreteFIRFilter_b[2];

  /* SampleTimeMath: '<S26>/TSamp'
   *
   * About '<S26>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  slrt_parker_B.TSamp_b[2] = slrt_parker_B.Gain_m[2] *
    slrt_parker_P.TSamp_WtEt_o;

  /* UnitDelay: '<S26>/UD' */
  slrt_parker_B.Uk1_o[2] = slrt_parker_DW.UD_DSTATE_g[2];

  /* Sum: '<S26>/Diff' */
  slrt_parker_B.Diff_h[2] = slrt_parker_B.TSamp_b[2] - slrt_parker_B.Uk1_o[2];

  /* DiscreteFir: '<S22>/Discrete FIR Filter' incorporates:
   *  Constant: '<S22>/vel_filter_coeffs'
   */
  i = 1;
  t = slrt_parker_B.Diff_h[0] * slrt_parker_P.vel_obs_filter_coeffs[0];
  for (frameSize = slrt_parker_DW.DiscreteFIRFilter_circBuf_g; frameSize < 5;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states_g[frameSize] *
      slrt_parker_P.vel_obs_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  for (frameSize = 0; frameSize < slrt_parker_DW.DiscreteFIRFilter_circBuf_g;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states_g[frameSize] *
      slrt_parker_P.vel_obs_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  slrt_parker_B.DiscreteFIRFilter_g[0] = t;
  i = 1;
  t = slrt_parker_B.Diff_h[1] * slrt_parker_P.vel_obs_filter_coeffs[0];
  for (frameSize = slrt_parker_DW.DiscreteFIRFilter_circBuf_g; frameSize < 5;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states_g[5 + frameSize] *
      slrt_parker_P.vel_obs_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  for (frameSize = 0; frameSize < slrt_parker_DW.DiscreteFIRFilter_circBuf_g;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states_g[5 + frameSize] *
      slrt_parker_P.vel_obs_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  slrt_parker_B.DiscreteFIRFilter_g[1] = t;
  i = 1;
  t = slrt_parker_B.Diff_h[2] * slrt_parker_P.vel_obs_filter_coeffs[0];
  for (frameSize = slrt_parker_DW.DiscreteFIRFilter_circBuf_g; frameSize < 5;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states_g[10 + frameSize] *
      slrt_parker_P.vel_obs_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  for (frameSize = 0; frameSize < slrt_parker_DW.DiscreteFIRFilter_circBuf_g;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states_g[10 + frameSize] *
      slrt_parker_P.vel_obs_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  slrt_parker_B.DiscreteFIRFilter_g[2] = t;

  /* End of DiscreteFir: '<S22>/Discrete FIR Filter' */

  /* Gain: '<S22>/Gain' */
  cur_t = slrt_parker_P.N_obs_velocity;
  t = 1.0 / cur_t;
  slrt_parker_B.Gain_b[0] = t * slrt_parker_B.DiscreteFIRFilter_g[0];

  /* SampleTimeMath: '<S23>/TSamp'
   *
   * About '<S23>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  slrt_parker_B.TSamp_p[0] = slrt_parker_B.Gain_b[0] *
    slrt_parker_P.TSamp_WtEt_f;

  /* UnitDelay: '<S23>/UD' */
  slrt_parker_B.Uk1_c[0] = slrt_parker_DW.UD_DSTATE_o[0];

  /* Sum: '<S23>/Diff' */
  slrt_parker_B.Diff_o[0] = slrt_parker_B.TSamp_p[0] - slrt_parker_B.Uk1_c[0];

  /* Gain: '<S22>/Gain' */
  slrt_parker_B.Gain_b[1] = t * slrt_parker_B.DiscreteFIRFilter_g[1];

  /* SampleTimeMath: '<S23>/TSamp'
   *
   * About '<S23>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  slrt_parker_B.TSamp_p[1] = slrt_parker_B.Gain_b[1] *
    slrt_parker_P.TSamp_WtEt_f;

  /* UnitDelay: '<S23>/UD' */
  slrt_parker_B.Uk1_c[1] = slrt_parker_DW.UD_DSTATE_o[1];

  /* Sum: '<S23>/Diff' */
  slrt_parker_B.Diff_o[1] = slrt_parker_B.TSamp_p[1] - slrt_parker_B.Uk1_c[1];

  /* Gain: '<S22>/Gain' */
  slrt_parker_B.Gain_b[2] = t * slrt_parker_B.DiscreteFIRFilter_g[2];

  /* SampleTimeMath: '<S23>/TSamp'
   *
   * About '<S23>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  slrt_parker_B.TSamp_p[2] = slrt_parker_B.Gain_b[2] *
    slrt_parker_P.TSamp_WtEt_f;

  /* UnitDelay: '<S23>/UD' */
  slrt_parker_B.Uk1_c[2] = slrt_parker_DW.UD_DSTATE_o[2];

  /* Sum: '<S23>/Diff' */
  slrt_parker_B.Diff_o[2] = slrt_parker_B.TSamp_p[2] - slrt_parker_B.Uk1_c[2];

  /* DiscreteFir: '<S17>/Discrete FIR Filter' incorporates:
   *  Constant: '<S17>/vel_filter_coeffs'
   */
  i = 1;
  t = slrt_parker_B.Diff_o[0] * slrt_parker_P.accel_filter_coeffs[0];
  for (frameSize = slrt_parker_DW.DiscreteFIRFilter_circBuf_f; frameSize < 5;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states_k[frameSize] *
      slrt_parker_P.accel_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  for (frameSize = 0; frameSize < slrt_parker_DW.DiscreteFIRFilter_circBuf_f;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states_k[frameSize] *
      slrt_parker_P.accel_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  slrt_parker_B.DiscreteFIRFilter_k[0] = t;
  i = 1;
  t = slrt_parker_B.Diff_o[1] * slrt_parker_P.accel_filter_coeffs[0];
  for (frameSize = slrt_parker_DW.DiscreteFIRFilter_circBuf_f; frameSize < 5;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states_k[5 + frameSize] *
      slrt_parker_P.accel_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  for (frameSize = 0; frameSize < slrt_parker_DW.DiscreteFIRFilter_circBuf_f;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states_k[5 + frameSize] *
      slrt_parker_P.accel_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  slrt_parker_B.DiscreteFIRFilter_k[1] = t;
  i = 1;
  t = slrt_parker_B.Diff_o[2] * slrt_parker_P.accel_filter_coeffs[0];
  for (frameSize = slrt_parker_DW.DiscreteFIRFilter_circBuf_f; frameSize < 5;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states_k[10 + frameSize] *
      slrt_parker_P.accel_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  for (frameSize = 0; frameSize < slrt_parker_DW.DiscreteFIRFilter_circBuf_f;
       frameSize++) {
    cur_t = slrt_parker_DW.DiscreteFIRFilter_states_k[10 + frameSize] *
      slrt_parker_P.accel_filter_coeffs[i];
    t += cur_t;
    i++;
  }

  slrt_parker_B.DiscreteFIRFilter_k[2] = t;

  /* End of DiscreteFir: '<S17>/Discrete FIR Filter' */

  /* Gain: '<S17>/Gain' */
  cur_t = slrt_parker_P.N_acceleration;
  t = 1.0 / cur_t;
  slrt_parker_B.Gain_o[0] = t * slrt_parker_B.DiscreteFIRFilter_k[0];

  /* RateTransition: '<S15>/Rate Transition2' */
  slrt_parker_B.RateTransition2[0] = slrt_parker_B.Gain_o[0];

  /* Gain: '<S17>/Gain' */
  slrt_parker_B.Gain_o[1] = t * slrt_parker_B.DiscreteFIRFilter_k[1];

  /* RateTransition: '<S15>/Rate Transition2' */
  slrt_parker_B.RateTransition2[1] = slrt_parker_B.Gain_o[1];

  /* Gain: '<S17>/Gain' */
  slrt_parker_B.Gain_o[2] = t * slrt_parker_B.DiscreteFIRFilter_k[2];

  /* RateTransition: '<S15>/Rate Transition2' */
  slrt_parker_B.RateTransition2[2] = slrt_parker_B.Gain_o[2];

  /* Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S30>/Enable'
   */
  /* Constant: '<S5>/FT_File_scope' */
  if (slrt_parker_P.FT_File_scope_Value > 0.0) {
    /* ok to acquire for <S38>/S-Function */
    slrt_parker_DW.SFunction_IWORK_lk.AcquireOK = 1;

    /* Gain: '<S30>/Gain1' */
    slrt_parker_B.Gain1_i = slrt_parker_P.Gain1_Gain * 0.0;

    /* ok to acquire for <S39>/S-Function */
    slrt_parker_DW.SFunction_IWORK_c.AcquireOK = 1;

    /* Gain: '<S30>/Gain' */
    slrt_parker_B.Gain_a[0] = slrt_parker_P.Gain_Gain * slrt_parker_B.Add[0];
    slrt_parker_B.Gain_a[3] = slrt_parker_P.Gain_Gain *
      slrt_parker_B.RateTransition1[0];
    slrt_parker_B.Gain_a[6] = slrt_parker_P.Gain_Gain *
      slrt_parker_B.RateTransition2[0];
    slrt_parker_B.Gain_a[1] = slrt_parker_P.Gain_Gain * slrt_parker_B.Add[1];
    slrt_parker_B.Gain_a[4] = slrt_parker_P.Gain_Gain *
      slrt_parker_B.RateTransition1[1];
    slrt_parker_B.Gain_a[7] = slrt_parker_P.Gain_Gain *
      slrt_parker_B.RateTransition2[1];
    slrt_parker_B.Gain_a[2] = slrt_parker_P.Gain_Gain * slrt_parker_B.Add[2];
    slrt_parker_B.Gain_a[5] = slrt_parker_P.Gain_Gain *
      slrt_parker_B.RateTransition1[2];
    slrt_parker_B.Gain_a[8] = slrt_parker_P.Gain_Gain *
      slrt_parker_B.RateTransition2[2];
    srUpdateBC(slrt_parker_DW.EnabledSubsystem_SubsysRanBC);
  }

  /* End of Constant: '<S5>/FT_File_scope' */
  /* End of Outputs for SubSystem: '<S5>/Enabled Subsystem' */

  /* Level2 S-Function Block: '<S1>/Receive 1' (xpcudpbytereceive) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[3];
    sfcnOutputs(rts, 0);
  }

  /* Byte Unpacking: <S1>/Byte Unpacking 1 */
  (void)memcpy((uint8_T*)&slrt_parker_B.ByteUnpacking1[0], (uint8_T*)
               &slrt_parker_B.Receive1_o1[0] + 0, 48);

  /* Level2 S-Function Block: '<S16>/1STPORTB ' (dipci8255) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[4];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<S16>/1STPORTB 1' (dipci8255) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[5];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<S16>/1STPORTB 2' (dipci8255) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[6];
    sfcnOutputs(rts, 0);
  }

  /* Logic: '<S16>/Logical Operator' */
  slrt_parker_B.LogicalOperator[0] = !(slrt_parker_B.uSTPORTB != 0.0);
  slrt_parker_B.LogicalOperator[1] = !(slrt_parker_B.uSTPORTB1 != 0.0);
  slrt_parker_B.LogicalOperator[2] = !(slrt_parker_B.uSTPORTB2 != 0.0);

  /* Outputs for Atomic SubSystem: '<Root>/Trajectory Planner' */
  /* RelationalOperator: '<S43>/Compare' incorporates:
   *  Constant: '<S43>/Constant'
   *  Constant: '<S6>/Mode'
   */
  slrt_parker_B.Compare_h = (slrt_parker_P.Mode_Value ==
    slrt_parker_P.EnableHoming_const);

  /* RelationalOperator: '<S44>/Compare' incorporates:
   *  Constant: '<S44>/Constant'
   *  Constant: '<S6>/Mode'
   */
  slrt_parker_B.Compare_m = (slrt_parker_P.Mode_Value ==
    slrt_parker_P.EnableJoint_const);

  /* Outputs for Enabled SubSystem: '<S6>/Homing' incorporates:
   *  EnablePort: '<S45>/Enable'
   */
  if (slrt_parker_B.Compare_h) {
    if (!slrt_parker_DW.Homing_MODE) {
      /* InitializeConditions for UnitDelay: '<S45>/A Delay' */
      memcpy(&slrt_parker_DW.ADelay_DSTATE[0],
             &slrt_parker_P.ADelay_InitialCondition[0], 12U * sizeof(real_T));

      /* DSP System Toolbox N-Sample Enable  (sdspnsamp2) - '<S49>/N-Sample Enable' */
      slrt_parker_DW.NSampleEnable_Counter_d = (uint32_T) 0;

      /* InitializeConditions for UnitDelay: '<S45>/homing ready delay' */
      slrt_parker_DW.homingreadydelay_DSTATE =
        slrt_parker_P.homingreadydelay_InitialConditi;

      /* InitializeConditions for UnitDelay: '<S45>/status delay' */
      slrt_parker_DW.statusdelay_DSTATE =
        slrt_parker_P.statusdelay_InitialCondition;

      /* InitializeConditions for UnitDelay: '<S45>/qdes Delay' */
      slrt_parker_DW.qdesDelay_DSTATE[0] =
        slrt_parker_P.qdesDelay_InitialCondition[0];

      /* InitializeConditions for UnitDelay: '<S45>/lsf delay' */
      slrt_parker_DW.lsfdelay_DSTATE[0] =
        slrt_parker_P.lsfdelay_InitialCondition[0];

      /* InitializeConditions for UnitDelay: '<S45>/qdes Delay' */
      slrt_parker_DW.qdesDelay_DSTATE[1] =
        slrt_parker_P.qdesDelay_InitialCondition[1];

      /* InitializeConditions for UnitDelay: '<S45>/lsf delay' */
      slrt_parker_DW.lsfdelay_DSTATE[1] =
        slrt_parker_P.lsfdelay_InitialCondition[1];

      /* InitializeConditions for UnitDelay: '<S45>/qdes Delay' */
      slrt_parker_DW.qdesDelay_DSTATE[2] =
        slrt_parker_P.qdesDelay_InitialCondition[2];

      /* InitializeConditions for UnitDelay: '<S45>/lsf delay' */
      slrt_parker_DW.lsfdelay_DSTATE[2] =
        slrt_parker_P.lsfdelay_InitialCondition[2];
      slrt_parker_DW.Homing_MODE = true;
    }

    /* UnitDelay: '<S45>/A Delay' */
    memcpy(&slrt_parker_B.ADelay[0], &slrt_parker_DW.ADelay_DSTATE[0], 12U *
           sizeof(real_T));

    /* DSP System Toolbox N-Sample Enable  (sdspnsamp2) - '<S49>/N-Sample Enable' */
    {
      {
        if (slrt_parker_DW.NSampleEnable_Counter_d ==
            slrt_parker_P.NSampleSwitch_N) {
          slrt_parker_B.NSampleEnable_e = (boolean_T)(2 -
            slrt_parker_P.NSampleEnable_ActiveLevel);
        } else {
          slrt_parker_B.NSampleEnable_e = (boolean_T)
            (slrt_parker_P.NSampleEnable_ActiveLevel - 1);
          (slrt_parker_DW.NSampleEnable_Counter_d)++;
        }
      }
    }

    /* UnitDelay: '<S45>/homing ready delay' */
    slrt_parker_B.homingreadydelay = slrt_parker_DW.homingreadydelay_DSTATE;

    /* UnitDelay: '<S45>/status delay' */
    slrt_parker_B.statusdelay = slrt_parker_DW.statusdelay_DSTATE;

    /* UnitDelay: '<S45>/qdes Delay' */
    /* MATLAB Function 'Trajectory Planner/Homing/Homing Procedure': '<S48>:1' */
    /* '<S48>:1:42' */
    /*  this function executes a homing sequence for the parallel robots */
    /*  status definition: */
    /*        1: keep homing */
    /*        0: stop homing */
    /*  stop flag definition: */
    /*        0: all limit switches have not been reached */
    /*        1: limit switches reached, calculate trajectory to home config */
    /*        2: run 5th order poly */
    /*        3: home complete - reset and hold position */
    /*        4: turn off reset, hold at 0 */
    /*  V_mov=5; % leg velocity while homing (mm/s) */
    /*  tspan=10;    % time to execute path plan (sec) */
    /* '<S48>:1:17' */
    /*  default desired velocity */
    /* '<S48>:1:18' */
    /* default desired acceleration */
    /*  read limit switches */
    /*  when limit switches are reached, switch=1 */
    /* '<S48>:1:22' */
    /*  update triggered switches */
    /* '<S48>:1:23' */
    slrt_parker_B.qdesDelay[0] = slrt_parker_DW.qdesDelay_DSTATE[0];

    /* Switch: '<S49>/Switch' */
    if (slrt_parker_B.NSampleEnable_e) {
      slrt_parker_B.Switch_p[0] = slrt_parker_B.Add[0];
    } else {
      slrt_parker_B.Switch_p[0] = slrt_parker_B.qdesDelay[0];
    }

    /* UnitDelay: '<S45>/lsf delay' */
    slrt_parker_B.lsfdelay[0] = slrt_parker_DW.lsfdelay_DSTATE[0];

    /* MATLAB Function: '<S45>/Homing Procedure' */
    slrt_parker_B.qd_des[0] = 0.0;
    slrt_parker_B.qdd_des[0] = 0.0;
    slrt_parker_B.q_des[0] = 1.0 - (real_T)slrt_parker_B.LogicalOperator[0];
    slrt_parker_B.lsf_out[0] = slrt_parker_B.lsfdelay[0] * slrt_parker_B.q_des[0];

    /* UnitDelay: '<S45>/qdes Delay' */
    slrt_parker_B.qdesDelay[1] = slrt_parker_DW.qdesDelay_DSTATE[1];

    /* Switch: '<S49>/Switch' */
    if (slrt_parker_B.NSampleEnable_e) {
      slrt_parker_B.Switch_p[1] = slrt_parker_B.Add[1];
    } else {
      slrt_parker_B.Switch_p[1] = slrt_parker_B.qdesDelay[1];
    }

    /* UnitDelay: '<S45>/lsf delay' */
    slrt_parker_B.lsfdelay[1] = slrt_parker_DW.lsfdelay_DSTATE[1];

    /* MATLAB Function: '<S45>/Homing Procedure' */
    slrt_parker_B.qd_des[1] = 0.0;
    slrt_parker_B.qdd_des[1] = 0.0;
    slrt_parker_B.q_des[1] = 1.0 - (real_T)slrt_parker_B.LogicalOperator[1];
    slrt_parker_B.lsf_out[1] = slrt_parker_B.lsfdelay[1] * slrt_parker_B.q_des[1];

    /* UnitDelay: '<S45>/qdes Delay' */
    slrt_parker_B.qdesDelay[2] = slrt_parker_DW.qdesDelay_DSTATE[2];

    /* Switch: '<S49>/Switch' */
    if (slrt_parker_B.NSampleEnable_e) {
      slrt_parker_B.Switch_p[2] = slrt_parker_B.Add[2];
    } else {
      slrt_parker_B.Switch_p[2] = slrt_parker_B.qdesDelay[2];
    }

    /* UnitDelay: '<S45>/lsf delay' */
    slrt_parker_B.lsfdelay[2] = slrt_parker_DW.lsfdelay_DSTATE[2];

    /* MATLAB Function: '<S45>/Homing Procedure' incorporates:
     *  Constant: '<S45>/V_mov'
     *  Constant: '<S45>/dt'
     *  Constant: '<S45>/home_pos'
     *  Constant: '<S45>/tspan'
     */
    slrt_parker_B.qd_des[2] = 0.0;
    slrt_parker_B.qdd_des[2] = 0.0;
    slrt_parker_B.q_des[2] = 1.0 - (real_T)slrt_parker_B.LogicalOperator[2];
    slrt_parker_B.lsf_out[2] = slrt_parker_B.lsfdelay[2] * slrt_parker_B.q_des[2];
    if (slrt_parker_B.homingreadydelay == 1.0) {
      /* '<S48>:1:24' */
      /*  total displacement */
      /*  allocate memory for coefficients */
      /*  construct coefficients */
      /* '<S48>:1:12' */
      /* '<S48>:1:29' */
      /* '<S48>:1:29' */
      /* '<S48>:1:30' */
      slrt_parker_B.A_out[0] = slrt_parker_B.Switch_p[0];
      slrt_parker_B.A_out[3] = 10.0 * slrt_parker_P.HOMING_dx[0];
      slrt_parker_B.A_out[6] = -15.0 * slrt_parker_P.HOMING_dx[0];
      slrt_parker_B.A_out[9] = 6.0 * slrt_parker_P.HOMING_dx[0];

      /* '<S48>:1:29' */
      /* '<S48>:1:30' */
      slrt_parker_B.A_out[1] = slrt_parker_B.Switch_p[1];
      slrt_parker_B.A_out[4] = 10.0 * slrt_parker_P.HOMING_dx[1];
      slrt_parker_B.A_out[7] = -15.0 * slrt_parker_P.HOMING_dx[1];
      slrt_parker_B.A_out[10] = 6.0 * slrt_parker_P.HOMING_dx[1];

      /* '<S48>:1:29' */
      /* '<S48>:1:30' */
      slrt_parker_B.A_out[2] = slrt_parker_B.Switch_p[2];
      slrt_parker_B.A_out[5] = 10.0 * slrt_parker_P.HOMING_dx[2];
      slrt_parker_B.A_out[8] = -15.0 * slrt_parker_P.HOMING_dx[2];
      slrt_parker_B.A_out[11] = 6.0 * slrt_parker_P.HOMING_dx[2];

      /* '<S48>:1:29' */
      /* '<S48>:1:32' */
      t = 1.0;

      /* '<S48>:1:33' */
      cur_t = slrt_parker_P.dt / slrt_parker_P.HOMING_tspan;

      /* '<S48>:1:34' */
      /*  exponential time vector */
      /* '<S48>:1:35' */
      a5_idx_0 = rt_powd_snf(cur_t, 3.0);
      a4_idx_0 = rt_powd_snf(cur_t, 4.0);
      cur_t = rt_powd_snf(cur_t, 5.0);
      for (frameSize = 0; frameSize < 3; frameSize++) {
        slrt_parker_B.q_des[frameSize] = 0.0;
        slrt_parker_B.q_des[frameSize] += slrt_parker_B.A_out[frameSize];
        slrt_parker_B.q_des[frameSize] += slrt_parker_B.A_out[frameSize + 3] *
          a5_idx_0;
        slrt_parker_B.q_des[frameSize] += slrt_parker_B.A_out[frameSize + 6] *
          a4_idx_0;
        slrt_parker_B.q_des[frameSize] += slrt_parker_B.A_out[frameSize + 9] *
          cur_t;
      }

      /*  current desired position  */
      /* '<S48>:1:36' */
      slrt_parker_B.ready = 2.0;

      /*  continue with path plan (should be 2) */
      /* '<S48>:1:37' */
      slrt_parker_B.reset = 0.0;
    } else if (slrt_parker_B.homingreadydelay == 2.0) {
      /* '<S48>:1:38' */
      if (slrt_parker_B.statusdelay >= slrt_parker_P.HOMING_tspan /
          slrt_parker_P.dt) {
        /* '<S48>:1:40' */
        /*  reached position goal */
        /* '<S48>:1:42' */
        /* '<S48>:1:43' */
        t = slrt_parker_B.statusdelay;

        /* '<S48>:1:44' */
        for (i = 0; i < 3; i++) {
          slrt_parker_B.q_des[i] = 0.0;
          slrt_parker_B.q_des[i] += slrt_parker_B.ADelay[i];
          slrt_parker_B.q_des[i] += slrt_parker_B.ADelay[i + 3];
          slrt_parker_B.q_des[i] += slrt_parker_B.ADelay[i + 6];
          slrt_parker_B.q_des[i] += slrt_parker_B.ADelay[i + 9];
          slrt_parker_B.A_out[i] = slrt_parker_B.q_des[i];
        }

        for (i = 0; i < 9; i++) {
          slrt_parker_B.A_out[i + 3] = 0.0;
        }

        /* '<S48>:1:45' */
        slrt_parker_B.ready = 3.0;

        /* '<S48>:1:46' */
        slrt_parker_B.reset = 0.0;
      } else {
        /*  continue on the trajectory */
        /* '<S48>:1:48' */
        cur_t = slrt_parker_B.statusdelay * slrt_parker_P.dt /
          slrt_parker_P.HOMING_tspan;

        /*  current normalized time [0 -> 1] */
        /* '<S48>:1:49' */
        /*  exponential time vector */
        /* '<S48>:1:50' */
        a5_idx_0 = rt_powd_snf(cur_t, 3.0);
        a4_idx_0 = rt_powd_snf(cur_t, 4.0);
        cur_t = rt_powd_snf(cur_t, 5.0);
        for (frameSize = 0; frameSize < 3; frameSize++) {
          slrt_parker_B.q_des[frameSize] = 0.0;
          slrt_parker_B.q_des[frameSize] += slrt_parker_B.ADelay[frameSize];
          slrt_parker_B.q_des[frameSize] += slrt_parker_B.ADelay[frameSize + 3] *
            a5_idx_0;
          slrt_parker_B.q_des[frameSize] += slrt_parker_B.ADelay[frameSize + 6] *
            a4_idx_0;
          slrt_parker_B.q_des[frameSize] += slrt_parker_B.ADelay[frameSize + 9] *
            cur_t;
        }

        /*  current desired position */
        /* '<S48>:1:51' */
        t = slrt_parker_B.statusdelay + 1.0;

        /*  update status step */
        /* '<S48>:1:52' */
        memcpy(&slrt_parker_B.A_out[0], &slrt_parker_B.ADelay[0], 12U * sizeof
               (real_T));

        /*  maintain current coefficients   */
        /* '<S48>:1:53' */
        slrt_parker_B.ready = 2.0;

        /* '<S48>:1:54' */
        slrt_parker_B.reset = 0.0;
      }
    } else if (slrt_parker_B.homingreadydelay == 3.0) {
      /* '<S48>:1:56' */
      /* '<S48>:1:57' */
      t = 0.0;

      /* '<S48>:1:58' */
      for (i = 0; i < 12; i++) {
        slrt_parker_B.A_out[i] = 0.0;
      }

      /* '<S48>:1:59' */
      slrt_parker_B.q_des[0] = slrt_parker_B.Add[0];
      slrt_parker_B.q_des[1] = slrt_parker_B.Add[1];
      slrt_parker_B.q_des[2] = slrt_parker_B.Add[2];

      /* '<S48>:1:60' */
      slrt_parker_B.ready = 4.0;

      /* '<S48>:1:61' */
      slrt_parker_B.reset = 1.0;
    } else if (slrt_parker_B.homingreadydelay == 4.0) {
      /* '<S48>:1:62' */
      /* '<S48>:1:63' */
      t = 0.0;

      /* '<S48>:1:64' */
      for (i = 0; i < 12; i++) {
        slrt_parker_B.A_out[i] = 0.0;
      }

      /* '<S48>:1:65' */
      slrt_parker_B.q_des[0] = slrt_parker_B.Add[0] * 0.0;
      slrt_parker_B.q_des[1] = slrt_parker_B.Add[1] * 0.0;
      slrt_parker_B.q_des[2] = slrt_parker_B.Add[2] * 0.0;

      /* '<S48>:1:66' */
      slrt_parker_B.ready = 4.0;

      /* '<S48>:1:67' */
      slrt_parker_B.reset = 0.0;
    } else {
      /*  check homing status     */
      t = slrt_parker_B.lsf_out[0];
      t += slrt_parker_B.lsf_out[1];
      t += slrt_parker_B.lsf_out[2];
      if (t == 0.0) {
        /* '<S48>:1:70' */
        /*  all limit switches have been reached */
        /* '<S48>:1:71' */
        slrt_parker_B.q_des[0] = slrt_parker_B.Switch_p[0];
        slrt_parker_B.q_des[1] = slrt_parker_B.Switch_p[1];
        slrt_parker_B.q_des[2] = slrt_parker_B.Switch_p[2];

        /*  stop motion */
        /* '<S48>:1:72' */
        slrt_parker_B.ready = 1.0;

        /*  homing finished */
        /* '<S48>:1:73' */
        t = 0.0;

        /* '<S48>:1:74' */
        for (i = 0; i < 12; i++) {
          slrt_parker_B.A_out[i] = 0.0;
        }

        /* '<S48>:1:75' */
        slrt_parker_B.reset = 0.0;
      } else {
        /*  continue homing */
        /* '<S48>:1:77' */
        slrt_parker_B.q_des[0] = slrt_parker_B.q_des[0] *
          slrt_parker_P.HOMING_Vmov[0] * slrt_parker_P.dt +
          slrt_parker_B.Switch_p[0];
        slrt_parker_B.q_des[1] = slrt_parker_B.q_des[1] *
          slrt_parker_P.HOMING_Vmov[1] * slrt_parker_P.dt +
          slrt_parker_B.Switch_p[1];
        slrt_parker_B.q_des[2] = slrt_parker_B.q_des[2] *
          slrt_parker_P.HOMING_Vmov[2] * slrt_parker_P.dt +
          slrt_parker_B.Switch_p[2];

        /*  move legs that have not reached goal */
        /* '<S48>:1:78' */
        slrt_parker_B.ready = 0.0;

        /*  homing not finished */
        /* '<S48>:1:79' */
        t = 0.0;

        /* '<S48>:1:80' */
        for (i = 0; i < 12; i++) {
          slrt_parker_B.A_out[i] = 0.0;
        }

        /* '<S48>:1:81' */
        slrt_parker_B.reset = 0.0;
      }
    }

    slrt_parker_B.cur_status = t;
    srUpdateBC(slrt_parker_DW.Homing_SubsysRanBC);
  } else {
    if (slrt_parker_DW.Homing_MODE) {
      slrt_parker_DW.Homing_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S6>/Homing' */

  /* Outputs for Enabled SubSystem: '<S6>/Quintic Polynomial' incorporates:
   *  EnablePort: '<S46>/Enable'
   */
  if (slrt_parker_B.Compare_m) {
    if (!slrt_parker_DW.QuinticPolynomial_MODE) {
      /* InitializeConditions for S-Function (sdspcount2): '<S52>/Counter' */
      slrt_parker_DW.Counter_ClkEphState = 5U;
      slrt_parker_DW.Counter_Count = slrt_parker_P.Counter_InitialCount;

      /* InitializeConditions for UnitDelay: '<S52>/Unit Delay' */
      slrt_parker_DW.UnitDelay_DSTATE_g =
        slrt_parker_P.UnitDelay_InitialCondition;

      /* DSP System Toolbox N-Sample Enable  (sdspnsamp2) - '<S55>/N-Sample Enable' */
      slrt_parker_DW.NSampleEnable_Counter = (uint32_T) 0;

      /* InitializeConditions for UnitDelay: '<S51>/Unit Delay' */
      slrt_parker_DW.UnitDelay_DSTATE_k[0] =
        slrt_parker_P.UnitDelay_InitialCondition_h[0];
      slrt_parker_DW.UnitDelay_DSTATE_k[1] =
        slrt_parker_P.UnitDelay_InitialCondition_h[1];
      slrt_parker_DW.UnitDelay_DSTATE_k[2] =
        slrt_parker_P.UnitDelay_InitialCondition_h[2];

      /* InitializeConditions for UnitDelay: '<S50>/Unit Delay' */
      slrt_parker_DW.UnitDelay_DSTATE_m =
        slrt_parker_P.UnitDelay_InitialCondition_l;

      /* InitializeConditions for UnitDelay: '<S50>/Unit Delay1' */
      slrt_parker_DW.UnitDelay1_DSTATE =
        slrt_parker_P.UnitDelay1_InitialCondition;

      /* DSP System Toolbox N-Sample Enable  (sdspnsamp2) - '<S54>/N-Sample Enable' */
      slrt_parker_DW.NSampleEnable_Counter_a = (uint32_T) 0;

      /* InitializeConditions for UnitDelay: '<S50>/Unit Delay2' */
      slrt_parker_DW.UnitDelay2_DSTATE_n[0] =
        slrt_parker_P.UnitDelay2_InitialCondition;
      slrt_parker_DW.UnitDelay2_DSTATE_n[1] =
        slrt_parker_P.UnitDelay2_InitialCondition;
      slrt_parker_DW.UnitDelay2_DSTATE_n[2] =
        slrt_parker_P.UnitDelay2_InitialCondition;
      slrt_parker_DW.QuinticPolynomial_MODE = true;
    }

    /* DigitalClock: '<S50>/Digital Clock' */
    slrt_parker_B.DigitalClock = slrt_parker_M->Timing.t[0];

    /* S-Function (sdspcount2): '<S52>/Counter' incorporates:
     *  Constant: '<S46>/Manual'
     */
    if (MWDSP_EPH_R_D(slrt_parker_P.Manual_Value,
                      &slrt_parker_DW.Counter_ClkEphState) != 0U) {
      if (slrt_parker_DW.Counter_Count < ((uint8_T)255U)) {
        slrt_parker_DW.Counter_Count++;
      } else {
        slrt_parker_DW.Counter_Count = 0U;
      }
    }

    slrt_parker_B.Counter = slrt_parker_DW.Counter_Count;

    /* End of S-Function (sdspcount2): '<S52>/Counter' */

    /* UnitDelay: '<S52>/Unit Delay' */
    slrt_parker_B.UnitDelay_f = slrt_parker_DW.UnitDelay_DSTATE_g;

    /* MATLAB Function: '<S52>/MATLAB Function' */
    /* MATLAB Function 'Trajectory Planner/Quintic Polynomial/trigger detection/MATLAB Function': '<S56>:1' */
    /* %  This func is just to detect a rising trigger */
    /*    Once this rising trigger detected, this manual enable will be locked */
    /*    until mode change */
    if (slrt_parker_B.UnitDelay_f == 0.0) {
      /* '<S56>:1:6' */
      if (slrt_parker_B.Counter == 0.0) {
        /* '<S56>:1:7' */
        /* '<S56>:1:8' */
        slrt_parker_B.enable = 0.0;
      } else {
        /* '<S56>:1:10' */
        slrt_parker_B.enable = 1.0;
      }
    } else {
      /* '<S56>:1:13' */
      slrt_parker_B.enable = 1.0;
    }

    /* End of MATLAB Function: '<S52>/MATLAB Function' */
    /* DSP System Toolbox N-Sample Enable  (sdspnsamp2) - '<S55>/N-Sample Enable' */
    {
      {
        if (slrt_parker_DW.NSampleEnable_Counter ==
            slrt_parker_P.NSampleSwitch_N_p) {
          slrt_parker_B.NSampleEnable = (boolean_T)(2 -
            slrt_parker_P.NSampleEnable_ActiveLevel_b);
        } else {
          slrt_parker_B.NSampleEnable = (boolean_T)
            (slrt_parker_P.NSampleEnable_ActiveLevel_b - 1);
          (slrt_parker_DW.NSampleEnable_Counter)++;
        }
      }
    }

    /* UnitDelay: '<S51>/Unit Delay' */
    slrt_parker_B.UnitDelay_h[0] = slrt_parker_DW.UnitDelay_DSTATE_k[0];

    /* Switch: '<S55>/Switch' */
    if (slrt_parker_B.NSampleEnable) {
      slrt_parker_B.Switch_f[0] = slrt_parker_B.Add[0];
    } else {
      slrt_parker_B.Switch_f[0] = slrt_parker_B.UnitDelay_h[0];
    }

    /* UnitDelay: '<S51>/Unit Delay' */
    slrt_parker_B.UnitDelay_h[1] = slrt_parker_DW.UnitDelay_DSTATE_k[1];

    /* Switch: '<S55>/Switch' */
    if (slrt_parker_B.NSampleEnable) {
      slrt_parker_B.Switch_f[1] = slrt_parker_B.Add[1];
    } else {
      slrt_parker_B.Switch_f[1] = slrt_parker_B.UnitDelay_h[1];
    }

    /* UnitDelay: '<S51>/Unit Delay' */
    slrt_parker_B.UnitDelay_h[2] = slrt_parker_DW.UnitDelay_DSTATE_k[2];

    /* Switch: '<S55>/Switch' */
    if (slrt_parker_B.NSampleEnable) {
      slrt_parker_B.Switch_f[2] = slrt_parker_B.Add[2];
    } else {
      slrt_parker_B.Switch_f[2] = slrt_parker_B.UnitDelay_h[2];
    }

    /* MultiPortSwitch: '<S46>/Multiport Switch' incorporates:
     *  Constant: '<S46>/q_des'
     */
    if ((int32_T)slrt_parker_B.enable == 0) {
      slrt_parker_B.MultiportSwitch_k[0] = slrt_parker_B.Switch_f[0];
      slrt_parker_B.MultiportSwitch_k[1] = slrt_parker_B.Switch_f[1];
      slrt_parker_B.MultiportSwitch_k[2] = slrt_parker_B.Switch_f[2];
    } else {
      slrt_parker_B.MultiportSwitch_k[0] = slrt_parker_P.q_des_Value[0];
      slrt_parker_B.MultiportSwitch_k[1] = slrt_parker_P.q_des_Value[1];
      slrt_parker_B.MultiportSwitch_k[2] = slrt_parker_P.q_des_Value[2];
    }

    /* End of MultiPortSwitch: '<S46>/Multiport Switch' */

    /* UnitDelay: '<S50>/Unit Delay' */
    slrt_parker_B.UnitDelay_g = slrt_parker_DW.UnitDelay_DSTATE_m;

    /* UnitDelay: '<S50>/Unit Delay1' */
    slrt_parker_B.UnitDelay1 = slrt_parker_DW.UnitDelay1_DSTATE;

    /* DSP System Toolbox N-Sample Enable  (sdspnsamp2) - '<S54>/N-Sample Enable' */
    {
      {
        if (slrt_parker_DW.NSampleEnable_Counter_a ==
            slrt_parker_P.NSampleSwitch_N_l) {
          slrt_parker_B.NSampleEnable_p = (boolean_T)(2 -
            slrt_parker_P.NSampleEnable_ActiveLevel_be);
        } else {
          slrt_parker_B.NSampleEnable_p = (boolean_T)
            (slrt_parker_P.NSampleEnable_ActiveLevel_be - 1);
          (slrt_parker_DW.NSampleEnable_Counter_a)++;
        }
      }
    }

    /* UnitDelay: '<S50>/Unit Delay2' */
    slrt_parker_B.UnitDelay2_j[0] = slrt_parker_DW.UnitDelay2_DSTATE_n[0];

    /* Switch: '<S54>/Switch' */
    if (slrt_parker_B.NSampleEnable_p) {
      slrt_parker_B.Switch_b[0] = slrt_parker_B.Add[0];
    } else {
      slrt_parker_B.Switch_b[0] = slrt_parker_B.UnitDelay2_j[0];
    }

    /* UnitDelay: '<S50>/Unit Delay2' */
    slrt_parker_B.UnitDelay2_j[1] = slrt_parker_DW.UnitDelay2_DSTATE_n[1];

    /* Switch: '<S54>/Switch' */
    if (slrt_parker_B.NSampleEnable_p) {
      slrt_parker_B.Switch_b[1] = slrt_parker_B.Add[1];
    } else {
      slrt_parker_B.Switch_b[1] = slrt_parker_B.UnitDelay2_j[1];
    }

    /* UnitDelay: '<S50>/Unit Delay2' */
    slrt_parker_B.UnitDelay2_j[2] = slrt_parker_DW.UnitDelay2_DSTATE_n[2];

    /* Switch: '<S54>/Switch' */
    if (slrt_parker_B.NSampleEnable_p) {
      slrt_parker_B.Switch_b[2] = slrt_parker_B.Add[2];
    } else {
      slrt_parker_B.Switch_b[2] = slrt_parker_B.UnitDelay2_j[2];
    }

    /* MATLAB Function: '<S50>/Embedded MATLAB Function' incorporates:
     *  Constant: '<S46>/enable'
     *  Constant: '<S50>/tf'
     */
    /* MATLAB Function 'Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function': '<S53>:1' */
    /* '<S53>:1:4' */
    slrt_parker_B.RECORD = 0.0;
    if (slrt_parker_P.enable_Value == 0.0) {
      /* '<S53>:1:6' */
      /*  Configuration space is not used (pdot = 0).  */
      /* '<S53>:1:7' */
      /* '<S53>:1:8' */
      /* '<S53>:1:9' */
      /*  However we do want to record the current  */
      /* '<S53>:1:10' */
      slrt_parker_B.confn = 0.0;

      /*  position in order to be ready as soon  */
      /* '<S53>:1:11' */
      slrt_parker_B.t0n = slrt_parker_B.DigitalClock;

      /*  as the enable becomes 1.  */
      /* '<S53>:1:12' */
      slrt_parker_B.p[0] = slrt_parker_B.Add[0];
      slrt_parker_B.pdotdot[0] = 0.0;
      slrt_parker_B.pdot[0] = 0.0;
      slrt_parker_B.p0n[0] = slrt_parker_B.Add[0];
      slrt_parker_B.p[1] = slrt_parker_B.Add[1];
      slrt_parker_B.pdotdot[1] = 0.0;
      slrt_parker_B.pdot[1] = 0.0;
      slrt_parker_B.p0n[1] = slrt_parker_B.Add[1];
      slrt_parker_B.p[2] = slrt_parker_B.Add[2];
      slrt_parker_B.pdotdot[2] = 0.0;
      slrt_parker_B.pdot[2] = 0.0;
      slrt_parker_B.p0n[2] = slrt_parker_B.Add[2];
    } else {
      t = (slrt_parker_B.MultiportSwitch_k[0] - slrt_parker_B.Switch_b[0]) *
        (slrt_parker_B.MultiportSwitch_k[0] - slrt_parker_B.Switch_b[0]);
      t += (slrt_parker_B.MultiportSwitch_k[1] - slrt_parker_B.Switch_b[1]) *
        (slrt_parker_B.MultiportSwitch_k[1] - slrt_parker_B.Switch_b[1]);
      t += (slrt_parker_B.MultiportSwitch_k[2] - slrt_parker_B.Switch_b[2]) *
        (slrt_parker_B.MultiportSwitch_k[2] - slrt_parker_B.Switch_b[2]);
      if (t > 0.0) {
        /* '<S53>:1:14' */
        if (slrt_parker_B.UnitDelay_g == 0.0) {
          /* '<S53>:1:15' */
          /*  conf = 0 means that the 5th order poly  */
          /* '<S53>:1:16' */
          /*  is not configured for the desired trajectory. */
          /* '<S53>:1:17' */
          slrt_parker_B.t0n = slrt_parker_B.DigitalClock;

          /*  Therefore, the block is initialized. */
          /* '<S53>:1:18' */
          slrt_parker_B.confn = 1.0;

          /* '<S53>:1:19' */
          /* '<S53>:1:20' */
          /* '<S53>:1:21' */
          slrt_parker_B.p0n[0] = slrt_parker_B.Switch_b[0];
          slrt_parker_B.pdot[0] = 0.0;
          slrt_parker_B.p[0] = slrt_parker_B.Switch_b[0];
          slrt_parker_B.pdotdot[0] = 0.0;
          slrt_parker_B.p0n[1] = slrt_parker_B.Switch_b[1];
          slrt_parker_B.pdot[1] = 0.0;
          slrt_parker_B.p[1] = slrt_parker_B.Switch_b[1];
          slrt_parker_B.pdotdot[1] = 0.0;
          slrt_parker_B.p0n[2] = slrt_parker_B.Switch_b[2];
          slrt_parker_B.pdot[2] = 0.0;
          slrt_parker_B.p[2] = slrt_parker_B.Switch_b[2];
          slrt_parker_B.pdotdot[2] = 0.0;
        } else {
          /* '<S53>:1:23' */
          /* '<S53>:1:24' */
          slrt_parker_B.t0n = slrt_parker_B.UnitDelay1;

          /* '<S53>:1:25' */
          slrt_parker_B.confn = slrt_parker_B.UnitDelay_g;

          /*  5th order polynomial */
          /* '<S53>:1:28' */
          /* '<S53>:1:29' */
          /* '<S53>:1:30' */
          slrt_parker_B.p0n[0] = slrt_parker_B.Switch_b[0];
          a4_idx_2 = (slrt_parker_B.MultiportSwitch_k[0] -
                      slrt_parker_B.Switch_b[0]) * -15.0;
          slrt_parker_B.pdotdot[0] = -0.66666666666666663 * a4_idx_2;
          a5_idx_0 = -0.4 * a4_idx_2;
          a4_idx_0 = a4_idx_2;
          slrt_parker_B.p0n[1] = slrt_parker_B.Switch_b[1];
          a4_idx_2 = (slrt_parker_B.MultiportSwitch_k[1] -
                      slrt_parker_B.Switch_b[1]) * -15.0;
          slrt_parker_B.pdotdot[1] = -0.66666666666666663 * a4_idx_2;
          a5_idx_1 = -0.4 * a4_idx_2;
          a4_idx_1 = a4_idx_2;
          slrt_parker_B.p0n[2] = slrt_parker_B.Switch_b[2];
          a4_idx_2 = (slrt_parker_B.MultiportSwitch_k[2] -
                      slrt_parker_B.Switch_b[2]) * -15.0;
          slrt_parker_B.pdotdot[2] = -0.66666666666666663 * a4_idx_2;
          a5_idx_2 = -0.4 * a4_idx_2;

          /* '<S53>:1:31' */
          t = slrt_parker_B.DigitalClock - slrt_parker_B.UnitDelay1;

          /* '<S53>:1:32' */
          tau = t / slrt_parker_P.tf_Value;
          if (t < slrt_parker_P.tf_Value) {
            /* '<S53>:1:33' */
            /* '<S53>:1:34' */
            slrt_parker_B.RECORD = 1.0;

            /* '<S53>:1:35' */
            cur_t = rt_powd_snf(tau, 3.0);
            b_c = rt_powd_snf(tau, 4.0);
            tau = rt_powd_snf(tau, 5.0);
            slrt_parker_B.p[0] = ((slrt_parker_B.pdotdot[0] * cur_t +
              slrt_parker_B.Switch_b[0]) + a4_idx_0 * b_c) + a5_idx_0 * tau;
            slrt_parker_B.p[1] = ((slrt_parker_B.pdotdot[1] * cur_t +
              slrt_parker_B.Switch_b[1]) + a4_idx_1 * b_c) + a5_idx_1 * tau;
            slrt_parker_B.p[2] = ((slrt_parker_B.pdotdot[2] * cur_t +
              slrt_parker_B.Switch_b[2]) + a4_idx_2 * b_c) + a5_idx_2 * tau;

            /* '<S53>:1:36' */
            cur_t = t * t;
            b_c = rt_powd_snf(slrt_parker_P.tf_Value, 3.0);
            tau = rt_powd_snf(t, 3.0);
            g_c = rt_powd_snf(slrt_parker_P.tf_Value, 4.0);
            h_c = rt_powd_snf(t, 4.0);
            i_c = rt_powd_snf(slrt_parker_P.tf_Value, 5.0);
            slrt_parker_B.pdot[0] = (3.0 * slrt_parker_B.pdotdot[0] * cur_t /
              b_c + 4.0 * a4_idx_0 * tau / g_c) + 5.0 * a5_idx_0 * h_c / i_c;
            slrt_parker_B.pdot[1] = (3.0 * slrt_parker_B.pdotdot[1] * cur_t /
              b_c + 4.0 * a4_idx_1 * tau / g_c) + 5.0 * a5_idx_1 * h_c / i_c;
            slrt_parker_B.pdot[2] = (3.0 * slrt_parker_B.pdotdot[2] * cur_t /
              b_c + 4.0 * a4_idx_2 * tau / g_c) + 5.0 * a5_idx_2 * h_c / i_c;

            /* '<S53>:1:37' */
            cur_t = rt_powd_snf(slrt_parker_P.tf_Value, 3.0);
            b_c = t * t;
            tau = rt_powd_snf(slrt_parker_P.tf_Value, 4.0);
            g_c = rt_powd_snf(t, 3.0);
            h_c = rt_powd_snf(slrt_parker_P.tf_Value, 5.0);
            slrt_parker_B.pdotdot[0] = (6.0 * slrt_parker_B.pdotdot[0] * t /
              cur_t + 12.0 * a4_idx_0 * b_c / tau) + 20.0 * a5_idx_0 * g_c / h_c;
            slrt_parker_B.pdotdot[1] = (6.0 * slrt_parker_B.pdotdot[1] * t /
              cur_t + 12.0 * a4_idx_1 * b_c / tau) + 20.0 * a5_idx_1 * g_c / h_c;
            slrt_parker_B.pdotdot[2] = (6.0 * slrt_parker_B.pdotdot[2] * t /
              cur_t + 12.0 * a4_idx_2 * b_c / tau) + 20.0 * a5_idx_2 * g_c / h_c;
          } else {
            /* '<S53>:1:39' */
            /* '<S53>:1:40' */
            /* '<S53>:1:41' */
            /* '<S53>:1:42' */
            slrt_parker_B.p[0] = slrt_parker_B.MultiportSwitch_k[0];
            slrt_parker_B.pdot[0] = 0.0;
            slrt_parker_B.pdotdot[0] = 0.0;
            slrt_parker_B.p0n[0] = slrt_parker_B.MultiportSwitch_k[0];
            slrt_parker_B.p[1] = slrt_parker_B.MultiportSwitch_k[1];
            slrt_parker_B.pdot[1] = 0.0;
            slrt_parker_B.pdotdot[1] = 0.0;
            slrt_parker_B.p0n[1] = slrt_parker_B.MultiportSwitch_k[1];
            slrt_parker_B.p[2] = slrt_parker_B.MultiportSwitch_k[2];
            slrt_parker_B.pdot[2] = 0.0;
            slrt_parker_B.pdotdot[2] = 0.0;
            slrt_parker_B.p0n[2] = slrt_parker_B.MultiportSwitch_k[2];
          }
        }
      } else {
        /* '<S53>:1:46' */
        /* '<S53>:1:47' */
        /* '<S53>:1:48' */
        /* '<S53>:1:49' */
        slrt_parker_B.confn = 0.0;

        /* '<S53>:1:50' */
        slrt_parker_B.p[0] = slrt_parker_B.MultiportSwitch_k[0];
        slrt_parker_B.pdot[0] = 0.0;
        slrt_parker_B.pdotdot[0] = 0.0;
        slrt_parker_B.p0n[0] = slrt_parker_B.Switch_b[0];
        slrt_parker_B.p[1] = slrt_parker_B.MultiportSwitch_k[1];
        slrt_parker_B.pdot[1] = 0.0;
        slrt_parker_B.pdotdot[1] = 0.0;
        slrt_parker_B.p0n[1] = slrt_parker_B.Switch_b[1];
        slrt_parker_B.p[2] = slrt_parker_B.MultiportSwitch_k[2];
        slrt_parker_B.pdot[2] = 0.0;
        slrt_parker_B.pdotdot[2] = 0.0;
        slrt_parker_B.p0n[2] = slrt_parker_B.Switch_b[2];

        /* '<S53>:1:51' */
        slrt_parker_B.t0n = slrt_parker_B.UnitDelay1;
      }
    }

    /* End of MATLAB Function: '<S50>/Embedded MATLAB Function' */
    /* ------------------------------------------------------------------------ */
    srUpdateBC(slrt_parker_DW.QuinticPolynomial_SubsysRanBC);
  } else {
    if (slrt_parker_DW.QuinticPolynomial_MODE) {
      slrt_parker_DW.QuinticPolynomial_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S6>/Quintic Polynomial' */

  /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
   *  Constant: '<S6>/Mode'
   */
  if ((int32_T)slrt_parker_P.Mode_Value == 1) {
    slrt_parker_B.MultiportSwitch[0] = slrt_parker_B.q_des[0];
    slrt_parker_B.MultiportSwitch[3] = slrt_parker_B.qd_des[0];
    slrt_parker_B.MultiportSwitch[6] = slrt_parker_B.qdd_des[0];
    slrt_parker_B.MultiportSwitch[1] = slrt_parker_B.q_des[1];
    slrt_parker_B.MultiportSwitch[4] = slrt_parker_B.qd_des[1];
    slrt_parker_B.MultiportSwitch[7] = slrt_parker_B.qdd_des[1];
    slrt_parker_B.MultiportSwitch[2] = slrt_parker_B.q_des[2];
    slrt_parker_B.MultiportSwitch[5] = slrt_parker_B.qd_des[2];
    slrt_parker_B.MultiportSwitch[8] = slrt_parker_B.qdd_des[2];
  } else {
    slrt_parker_B.MultiportSwitch[0] = slrt_parker_B.p[0];
    slrt_parker_B.MultiportSwitch[3] = slrt_parker_B.pdot[0];
    slrt_parker_B.MultiportSwitch[6] = slrt_parker_B.pdotdot[0];
    slrt_parker_B.MultiportSwitch[1] = slrt_parker_B.p[1];
    slrt_parker_B.MultiportSwitch[4] = slrt_parker_B.pdot[1];
    slrt_parker_B.MultiportSwitch[7] = slrt_parker_B.pdotdot[1];
    slrt_parker_B.MultiportSwitch[2] = slrt_parker_B.p[2];
    slrt_parker_B.MultiportSwitch[5] = slrt_parker_B.pdot[2];
    slrt_parker_B.MultiportSwitch[8] = slrt_parker_B.pdotdot[2];
  }

  /* End of MultiPortSwitch: '<S6>/Multiport Switch' */

  /* UnitDelay: '<S47>/Unit Delay3' */
  slrt_parker_B.UnitDelay3 = slrt_parker_DW.UnitDelay3_DSTATE;

  /* MATLAB Function: '<S47>/false detection' */
  /* MATLAB Function 'Trajectory Planner/safety check/false detection': '<S57>:1' */
  /* '<S57>:1:13' */
  /* %  This func is a safety check */
  /*    once the system received some illegal command, the system will be */
  /*    locked for diagnostic purpose */
  /* '<S57>:1:6' */
  frameSize = 0;
  for (i = 0; i < 9; i++) {
    /* UnitDelay: '<S47>/Unit Delay2' */
    slrt_parker_B.UnitDelay2[i] = slrt_parker_DW.UnitDelay2_DSTATE[i];

    /* MATLAB Function: '<S47>/false detection' */
    b[i] = rtIsNaN(slrt_parker_B.MultiportSwitch[i]);
  }

  /* MATLAB Function: '<S47>/false detection' */
  t = b[0];
  for (i = 0; i < 8; i++) {
    t += (real_T)b[i + 1];
  }

  if (t != 0.0) {
    /* '<S57>:1:7' */
    /* '<S57>:1:8' */
    frameSize = 1;
  }

  for (i = 0; i < 9; i++) {
    b[i] = rtIsInf(slrt_parker_B.MultiportSwitch[i]);
  }

  t = b[0];
  for (i = 0; i < 8; i++) {
    t += (real_T)b[i + 1];
  }

  if (t != 0.0) {
    /* '<S57>:1:10' */
    /* '<S57>:1:11' */
    frameSize = 1;
  }

  t = fabs(slrt_parker_B.MultiportSwitch[0]);
  x_idx_0 = (t > 250.0);
  t = fabs(slrt_parker_B.MultiportSwitch[1]);
  x_idx_1 = (t > 250.0);
  t = fabs(slrt_parker_B.MultiportSwitch[2]);
  x_idx_2 = (t > 250.0);
  t = x_idx_0;
  t += (real_T)x_idx_1;
  t += (real_T)x_idx_2;
  if (t != 0.0) {
    /* '<S57>:1:13' */
    /*  out of stroke command */
    /* '<S57>:1:14' */
    frameSize = 1;
  }

  if (slrt_parker_B.UnitDelay3 != 0.0) {
    /*  once faulty, lock down. */
    /* '<S57>:1:17' */
    frameSize = 1;
  }

  if (frameSize != 0) {
    /* '<S57>:1:21' */
    memcpy(&slrt_parker_B.pva_allowed[0], &slrt_parker_B.UnitDelay2[0], 9U *
           sizeof(real_T));
  } else {
    /* '<S57>:1:23' */
    memcpy(&slrt_parker_B.pva_allowed[0], &slrt_parker_B.MultiportSwitch[0], 9U *
           sizeof(real_T));
  }

  slrt_parker_B.error_flag = frameSize;

  /* End of Outputs for SubSystem: '<Root>/Trajectory Planner' */

  /* Product: '<S5>/Product' incorporates:
   *  Constant: '<S5>/DynAna_File_scope'
   */
  slrt_parker_B.Product = slrt_parker_P.DynAna_File_scope_Value *
    slrt_parker_B.RECORD;

  /* RelationalOperator: '<S29>/Compare' incorporates:
   *  Constant: '<S29>/Constant'
   */
  slrt_parker_B.Compare = (slrt_parker_B.Product > slrt_parker_P.ENRecord_const);

  /* Outputs for Enabled SubSystem: '<S5>/File Scope' incorporates:
   *  EnablePort: '<S31>/Enable'
   */
  if (slrt_parker_B.Compare) {
    /* ok to acquire for <S40>/S-Function */
    slrt_parker_DW.SFunction_IWORK_nr.AcquireOK = 1;

    /* ok to acquire for <S41>/S-Function */
    slrt_parker_DW.SFunction_IWORK_ea.AcquireOK = 1;

    /* ok to acquire for <S42>/S-Function */
    slrt_parker_DW.SFunction_IWORK_os.AcquireOK = 1;

    /* Gain: '<S31>/Gain' incorporates:
     *  Constant: '<S6>/Mode'
     */
    slrt_parker_B.Gain_p[0] = slrt_parker_P.Gain_Gain_f *
      slrt_parker_P.Mode_Value;
    for (i = 0; i < 6; i++) {
      slrt_parker_B.Gain_p[i + 1] = slrt_parker_P.Gain_Gain_f *
        slrt_parker_B.ByteUnpacking1[i];
    }

    /* End of Gain: '<S31>/Gain' */

    /* Gain: '<S31>/Gain1' incorporates:
     *  Constant: '<S6>/Mode'
     */
    slrt_parker_B.Gain1[0] = slrt_parker_P.Gain1_Gain_d *
      slrt_parker_P.Mode_Value;
    slrt_parker_B.Gain1[1] = slrt_parker_P.Gain1_Gain_d * slrt_parker_B.Add[0];
    slrt_parker_B.Gain1[4] = slrt_parker_P.Gain1_Gain_d *
      slrt_parker_B.RateTransition1[0];
    slrt_parker_B.Gain1[7] = slrt_parker_P.Gain1_Gain_d *
      slrt_parker_B.RateTransition2[0];
    slrt_parker_B.Gain1[2] = slrt_parker_P.Gain1_Gain_d * slrt_parker_B.Add[1];
    slrt_parker_B.Gain1[5] = slrt_parker_P.Gain1_Gain_d *
      slrt_parker_B.RateTransition1[1];
    slrt_parker_B.Gain1[8] = slrt_parker_P.Gain1_Gain_d *
      slrt_parker_B.RateTransition2[1];
    slrt_parker_B.Gain1[3] = slrt_parker_P.Gain1_Gain_d * slrt_parker_B.Add[2];
    slrt_parker_B.Gain1[6] = slrt_parker_P.Gain1_Gain_d *
      slrt_parker_B.RateTransition1[2];
    slrt_parker_B.Gain1[9] = slrt_parker_P.Gain1_Gain_d *
      slrt_parker_B.RateTransition2[2];

    /* Gain: '<S31>/Gain2' incorporates:
     *  Constant: '<S6>/Mode'
     */
    slrt_parker_B.Gain2[0] = slrt_parker_P.Gain2_Gain * slrt_parker_P.Mode_Value;
    for (i = 0; i < 9; i++) {
      slrt_parker_B.Gain2[i + 1] = slrt_parker_P.Gain2_Gain *
        slrt_parker_B.MultiportSwitch[i];
    }

    /* End of Gain: '<S31>/Gain2' */
    srUpdateBC(slrt_parker_DW.FileScope_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S5>/File Scope' */
  /* ok to acquire for <S33>/S-Function */
  slrt_parker_DW.SFunction_IWORK_o.AcquireOK = 1;

  /* ok to acquire for <S34>/S-Function */
  slrt_parker_DW.SFunction_IWORK_e.AcquireOK = 1;

  /* ok to acquire for <S35>/S-Function */
  slrt_parker_DW.SFunction_IWORK_f.AcquireOK = 1;

  /* Gain: '<S5>/sys_stat' incorporates:
   *  Constant: '<S6>/Mode'
   */
  slrt_parker_B.sys_stat[0] = slrt_parker_P.sys_stat_Gain * slrt_parker_B.ready;
  slrt_parker_B.sys_stat[1] = slrt_parker_P.sys_stat_Gain * slrt_parker_B.reset;
  slrt_parker_B.sys_stat[2] = slrt_parker_P.sys_stat_Gain *
    slrt_parker_P.Mode_Value;
  slrt_parker_B.sys_stat[3] = slrt_parker_P.sys_stat_Gain * slrt_parker_B.RECORD;
  slrt_parker_B.sys_stat[4] = slrt_parker_P.sys_stat_Gain *
    slrt_parker_B.error_flag;
  slrt_parker_B.sys_stat[5] = slrt_parker_P.sys_stat_Gain * 0.0;

  /* ok to acquire for <S27>/S-Function */
  slrt_parker_DW.SFunction_IWORK_n.AcquireOK = 1;

  /* ok to acquire for <S37>/S-Function */
  slrt_parker_DW.SFunction_IWORK_l.AcquireOK = 1;

  /* ok to acquire for <S32>/S-Function */
  slrt_parker_DW.SFunction_IWORK_o5.AcquireOK = 1;

  /* ok to acquire for <S36>/S-Function */
  slrt_parker_DW.SFunction_IWORK_b.AcquireOK = 1;

  /* Outputs for Atomic SubSystem: '<Root>/PD Inverse Dynamics' */
  /* Sum: '<S3>/Sum' */
  slrt_parker_B.Sum[0] = slrt_parker_B.pva_allowed[0] - slrt_parker_B.Add[0];
  slrt_parker_B.Sum[1] = slrt_parker_B.pva_allowed[1] - slrt_parker_B.Add[1];
  slrt_parker_B.Sum[2] = slrt_parker_B.pva_allowed[2] - slrt_parker_B.Add[2];
  for (i = 0; i < 3; i++) {
    /* Gain: '<S3>/Kp' */
    slrt_parker_B.Kp[i] = 0.0;
    slrt_parker_B.Kp[i] += slrt_parker_P.Kp[i] * slrt_parker_B.Sum[0];
    slrt_parker_B.Kp[i] += slrt_parker_P.Kp[i + 3] * slrt_parker_B.Sum[1];
    slrt_parker_B.Kp[i] += slrt_parker_P.Kp[i + 6] * slrt_parker_B.Sum[2];

    /* Sum: '<S3>/Sum1' */
    slrt_parker_B.Sum1[i] = slrt_parker_B.pva_allowed[i + 3] -
      slrt_parker_B.RateTransition1[i];

    /* DeadZone: '<S3>/Dead Zone1' */
    if (slrt_parker_B.Sum1[i] > slrt_parker_P.DeadZone1_End) {
      slrt_parker_B.DeadZone1[i] = slrt_parker_B.Sum1[i] -
        slrt_parker_P.DeadZone1_End;
    } else if (slrt_parker_B.Sum1[i] >= slrt_parker_P.DeadZone1_Start) {
      slrt_parker_B.DeadZone1[i] = 0.0;
    } else {
      slrt_parker_B.DeadZone1[i] = slrt_parker_B.Sum1[i] -
        slrt_parker_P.DeadZone1_Start;
    }

    /* End of DeadZone: '<S3>/Dead Zone1' */
  }

  for (i = 0; i < 3; i++) {
    /* Gain: '<S3>/Kd [volts*second//rad]' */
    slrt_parker_B.Kdvoltssecondrad[i] = 0.0;
    slrt_parker_B.Kdvoltssecondrad[i] += slrt_parker_P.Kd[i] *
      slrt_parker_B.DeadZone1[0];
    slrt_parker_B.Kdvoltssecondrad[i] += slrt_parker_P.Kd[i + 3] *
      slrt_parker_B.DeadZone1[1];
    slrt_parker_B.Kdvoltssecondrad[i] += slrt_parker_P.Kd[i + 6] *
      slrt_parker_B.DeadZone1[2];

    /* Sum: '<S3>/Add' */
    slrt_parker_B.Add_e[i] = (slrt_parker_B.Kp[i] +
      slrt_parker_B.Kdvoltssecondrad[i]) + slrt_parker_B.pva_allowed[i + 6];

    /* Gain: '<S3>/m//s^2' */
    slrt_parker_B.ms2[i] = slrt_parker_P.ms2_Gain * slrt_parker_B.Add_e[i];
  }

  /* End of Outputs for SubSystem: '<Root>/PD Inverse Dynamics' */

  /* DataTypeConversion: '<S24>/Data Type Conversion' */
  slrt_parker_B.DataTypeConversion = (slrt_parker_B.reset != 0.0);

  /* Outputs for Atomic SubSystem: '<Root>/PD Inverse Dynamics' */
  for (i = 0; i < 3; i++) {
    /* Gain: '<S3>/Inertia Matrix [Kg m^2]' */
    slrt_parker_B.tau_motion[i] = 0.0;

    /* Gain: '<S3>/Viscous Friction' */
    slrt_parker_B.ViscousFriction[i] = 0.0;

    /* Gain: '<S3>/Inertia Matrix [Kg m^2]' */
    slrt_parker_B.tau_motion[i] += slrt_parker_P.B[i] * slrt_parker_B.ms2[0];

    /* Gain: '<S3>/Viscous Friction' */
    slrt_parker_B.ViscousFriction[i] += slrt_parker_P.F[i] *
      slrt_parker_B.RateTransition1[0];

    /* Gain: '<S3>/Inertia Matrix [Kg m^2]' */
    slrt_parker_B.tau_motion[i] += slrt_parker_P.B[i + 3] * slrt_parker_B.ms2[1];

    /* Gain: '<S3>/Viscous Friction' */
    slrt_parker_B.ViscousFriction[i] += slrt_parker_P.F[i + 3] *
      slrt_parker_B.RateTransition1[1];

    /* Gain: '<S3>/Inertia Matrix [Kg m^2]' */
    slrt_parker_B.tau_motion[i] += slrt_parker_P.B[i + 6] * slrt_parker_B.ms2[2];

    /* Gain: '<S3>/Viscous Friction' */
    slrt_parker_B.ViscousFriction[i] += slrt_parker_P.F[i + 6] *
      slrt_parker_B.RateTransition1[2];

    /* Sum: '<S3>/Add1' incorporates:
     *  Constant: '<S3>/grav compensator'
     */
    slrt_parker_B.tau[i] = (slrt_parker_B.tau_motion[i] +
      slrt_parker_P.grav_vector[i]) - slrt_parker_B.ViscousFriction[i];

    /* Gain: '<S3>/pitch1' */
    slrt_parker_B.pitch1[i] = slrt_parker_P.pitch * slrt_parker_B.tau[i];

    /* Gain: '<S3>/Torque Constant' */
    slrt_parker_B.TorqueConstant[i] = slrt_parker_P.torque_constant *
      slrt_parker_B.pitch1[i];

    /* Gain: '<S3>/Amp Gain' */
    slrt_parker_B.AmpGain[i] = slrt_parker_P.AmpGain_Gain[i] *
      slrt_parker_B.TorqueConstant[i];

    /* Saturate: '<S3>/Saturation [-10, 10]' */
    t = slrt_parker_B.AmpGain[i];
    cur_t = slrt_parker_P.Saturation1010_LowerSat;
    a5_idx_0 = slrt_parker_P.Saturation1010_UpperSat;
    if (t > a5_idx_0) {
      t = a5_idx_0;
    } else {
      if (t < cur_t) {
        t = cur_t;
      }
    }

    slrt_parker_B.Saturation1010[i] = t;

    /* End of Saturate: '<S3>/Saturation [-10, 10]' */

    /* UnitDelay: '<S24>/IC=ic' */
    slrt_parker_B.ICic[i] = slrt_parker_DW.ICic_DSTATE[i];

    /* Switch: '<S24>/Switch' */
    if (slrt_parker_B.DataTypeConversion) {
      slrt_parker_B.Switch[i] = slrt_parker_B.RateTransition[i];
    } else {
      slrt_parker_B.Switch[i] = slrt_parker_B.ICic[i];
    }

    /* End of Switch: '<S24>/Switch' */
  }

  /* End of Outputs for SubSystem: '<Root>/PD Inverse Dynamics' */

  /* Gain: '<S16>/Gain' */
  slrt_parker_B.Gain_l = slrt_parker_P.Gain_Gain_a *
    slrt_parker_B.Saturation1010[1];

  /* Level2 S-Function Block: '<S16>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[7];
    sfcnOutputs(rts, 0);
  }

  /* Constant: '<S2>/Enable Motors' */
  slrt_parker_B.EnableMotors[0] = slrt_parker_P.EnableMotors_Value[0];
  slrt_parker_B.EnableMotors[1] = slrt_parker_P.EnableMotors_Value[1];
  slrt_parker_B.EnableMotors[2] = slrt_parker_P.EnableMotors_Value[2];

  /* Level2 S-Function Block: '<S2>/PCI-DDA08 12  to PORTA' (dopci8255) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[8];
    sfcnOutputs(rts, 0);
  }
}

/* Model update function */
static void slrt_parker_update(void)
{
  /* Update for UnitDelay: '<S15>/Unit Delay' */
  slrt_parker_DW.UnitDelay_DSTATE[0] = slrt_parker_B.Switch[0];

  /* Update for UnitDelay: '<S25>/UD' */
  slrt_parker_DW.UD_DSTATE[0] = slrt_parker_B.TSamp[0];

  /* Update for UnitDelay: '<S15>/Unit Delay' */
  slrt_parker_DW.UnitDelay_DSTATE[1] = slrt_parker_B.Switch[1];

  /* Update for UnitDelay: '<S25>/UD' */
  slrt_parker_DW.UD_DSTATE[1] = slrt_parker_B.TSamp[1];

  /* Update for UnitDelay: '<S15>/Unit Delay' */
  slrt_parker_DW.UnitDelay_DSTATE[2] = slrt_parker_B.Switch[2];

  /* Update for UnitDelay: '<S25>/UD' */
  slrt_parker_DW.UD_DSTATE[2] = slrt_parker_B.TSamp[2];

  /* Update for DiscreteFir: '<S21>/Discrete FIR Filter' */
  /* Update circular buffer index */
  slrt_parker_DW.DiscreteFIRFilter_circBuf--;
  if (slrt_parker_DW.DiscreteFIRFilter_circBuf < 0) {
    slrt_parker_DW.DiscreteFIRFilter_circBuf = 4;
  }

  /* Update circular buffer */
  slrt_parker_DW.DiscreteFIRFilter_states[slrt_parker_DW.DiscreteFIRFilter_circBuf]
    = slrt_parker_B.Diff[0];

  /* Update for UnitDelay: '<S26>/UD' */
  slrt_parker_DW.UD_DSTATE_g[0] = slrt_parker_B.TSamp_b[0];

  /* Update for DiscreteFir: '<S21>/Discrete FIR Filter' */
  slrt_parker_DW.DiscreteFIRFilter_states[slrt_parker_DW.DiscreteFIRFilter_circBuf
    + 5] = slrt_parker_B.Diff[1];

  /* Update for UnitDelay: '<S26>/UD' */
  slrt_parker_DW.UD_DSTATE_g[1] = slrt_parker_B.TSamp_b[1];

  /* Update for DiscreteFir: '<S21>/Discrete FIR Filter' */
  slrt_parker_DW.DiscreteFIRFilter_states[slrt_parker_DW.DiscreteFIRFilter_circBuf
    + 10] = slrt_parker_B.Diff[2];

  /* Update for UnitDelay: '<S26>/UD' */
  slrt_parker_DW.UD_DSTATE_g[2] = slrt_parker_B.TSamp_b[2];

  /* Update for DiscreteFir: '<S22>/Discrete FIR Filter' */
  /* Update circular buffer index */
  slrt_parker_DW.DiscreteFIRFilter_circBuf_g--;
  if (slrt_parker_DW.DiscreteFIRFilter_circBuf_g < 0) {
    slrt_parker_DW.DiscreteFIRFilter_circBuf_g = 4;
  }

  /* Update circular buffer */
  slrt_parker_DW.DiscreteFIRFilter_states_g[slrt_parker_DW.DiscreteFIRFilter_circBuf_g]
    = slrt_parker_B.Diff_h[0];

  /* Update for UnitDelay: '<S23>/UD' */
  slrt_parker_DW.UD_DSTATE_o[0] = slrt_parker_B.TSamp_p[0];

  /* Update for DiscreteFir: '<S22>/Discrete FIR Filter' */
  slrt_parker_DW.DiscreteFIRFilter_states_g[slrt_parker_DW.DiscreteFIRFilter_circBuf_g
    + 5] = slrt_parker_B.Diff_h[1];

  /* Update for UnitDelay: '<S23>/UD' */
  slrt_parker_DW.UD_DSTATE_o[1] = slrt_parker_B.TSamp_p[1];

  /* Update for DiscreteFir: '<S22>/Discrete FIR Filter' */
  slrt_parker_DW.DiscreteFIRFilter_states_g[slrt_parker_DW.DiscreteFIRFilter_circBuf_g
    + 10] = slrt_parker_B.Diff_h[2];

  /* Update for UnitDelay: '<S23>/UD' */
  slrt_parker_DW.UD_DSTATE_o[2] = slrt_parker_B.TSamp_p[2];

  /* Update for DiscreteFir: '<S17>/Discrete FIR Filter' */
  /* Update circular buffer index */
  slrt_parker_DW.DiscreteFIRFilter_circBuf_f--;
  if (slrt_parker_DW.DiscreteFIRFilter_circBuf_f < 0) {
    slrt_parker_DW.DiscreteFIRFilter_circBuf_f = 4;
  }

  /* Update circular buffer */
  slrt_parker_DW.DiscreteFIRFilter_states_k[slrt_parker_DW.DiscreteFIRFilter_circBuf_f]
    = slrt_parker_B.Diff_o[0];
  slrt_parker_DW.DiscreteFIRFilter_states_k[slrt_parker_DW.DiscreteFIRFilter_circBuf_f
    + 5] = slrt_parker_B.Diff_o[1];
  slrt_parker_DW.DiscreteFIRFilter_states_k[slrt_parker_DW.DiscreteFIRFilter_circBuf_f
    + 10] = slrt_parker_B.Diff_o[2];

  /* End of Update for DiscreteFir: '<S17>/Discrete FIR Filter' */

  /* Update for Atomic SubSystem: '<Root>/Trajectory Planner' */
  /* Update for Enabled SubSystem: '<S6>/Homing' incorporates:
   *  Update for EnablePort: '<S45>/Enable'
   */
  if (slrt_parker_DW.Homing_MODE) {
    /* Update for UnitDelay: '<S45>/A Delay' */
    memcpy(&slrt_parker_DW.ADelay_DSTATE[0], &slrt_parker_B.A_out[0], 12U *
           sizeof(real_T));

    /* Update for UnitDelay: '<S45>/homing ready delay' */
    slrt_parker_DW.homingreadydelay_DSTATE = slrt_parker_B.ready;

    /* Update for UnitDelay: '<S45>/status delay' */
    slrt_parker_DW.statusdelay_DSTATE = slrt_parker_B.cur_status;

    /* Update for UnitDelay: '<S45>/qdes Delay' */
    slrt_parker_DW.qdesDelay_DSTATE[0] = slrt_parker_B.q_des[0];

    /* Update for UnitDelay: '<S45>/lsf delay' */
    slrt_parker_DW.lsfdelay_DSTATE[0] = slrt_parker_B.lsf_out[0];

    /* Update for UnitDelay: '<S45>/qdes Delay' */
    slrt_parker_DW.qdesDelay_DSTATE[1] = slrt_parker_B.q_des[1];

    /* Update for UnitDelay: '<S45>/lsf delay' */
    slrt_parker_DW.lsfdelay_DSTATE[1] = slrt_parker_B.lsf_out[1];

    /* Update for UnitDelay: '<S45>/qdes Delay' */
    slrt_parker_DW.qdesDelay_DSTATE[2] = slrt_parker_B.q_des[2];

    /* Update for UnitDelay: '<S45>/lsf delay' */
    slrt_parker_DW.lsfdelay_DSTATE[2] = slrt_parker_B.lsf_out[2];
  }

  /* End of Update for SubSystem: '<S6>/Homing' */

  /* Update for Enabled SubSystem: '<S6>/Quintic Polynomial' incorporates:
   *  Update for EnablePort: '<S46>/Enable'
   */
  if (slrt_parker_DW.QuinticPolynomial_MODE) {
    /* Update for UnitDelay: '<S52>/Unit Delay' */
    slrt_parker_DW.UnitDelay_DSTATE_g = slrt_parker_B.enable;

    /* Update for UnitDelay: '<S50>/Unit Delay' */
    slrt_parker_DW.UnitDelay_DSTATE_m = slrt_parker_B.confn;

    /* Update for UnitDelay: '<S50>/Unit Delay1' */
    slrt_parker_DW.UnitDelay1_DSTATE = slrt_parker_B.t0n;

    /* Update for UnitDelay: '<S51>/Unit Delay' */
    slrt_parker_DW.UnitDelay_DSTATE_k[0] = slrt_parker_B.Switch_f[0];

    /* Update for UnitDelay: '<S50>/Unit Delay2' */
    slrt_parker_DW.UnitDelay2_DSTATE_n[0] = slrt_parker_B.p0n[0];

    /* Update for UnitDelay: '<S51>/Unit Delay' */
    slrt_parker_DW.UnitDelay_DSTATE_k[1] = slrt_parker_B.Switch_f[1];

    /* Update for UnitDelay: '<S50>/Unit Delay2' */
    slrt_parker_DW.UnitDelay2_DSTATE_n[1] = slrt_parker_B.p0n[1];

    /* Update for UnitDelay: '<S51>/Unit Delay' */
    slrt_parker_DW.UnitDelay_DSTATE_k[2] = slrt_parker_B.Switch_f[2];

    /* Update for UnitDelay: '<S50>/Unit Delay2' */
    slrt_parker_DW.UnitDelay2_DSTATE_n[2] = slrt_parker_B.p0n[2];
  }

  /* End of Update for SubSystem: '<S6>/Quintic Polynomial' */

  /* Update for UnitDelay: '<S47>/Unit Delay2' */
  memcpy(&slrt_parker_DW.UnitDelay2_DSTATE[0], &slrt_parker_B.pva_allowed[0], 9U
         * sizeof(real_T));

  /* Update for UnitDelay: '<S47>/Unit Delay3' */
  slrt_parker_DW.UnitDelay3_DSTATE = slrt_parker_B.error_flag;

  /* End of Update for SubSystem: '<Root>/Trajectory Planner' */

  /* Update for UnitDelay: '<S24>/IC=ic' */
  slrt_parker_DW.ICic_DSTATE[0] = slrt_parker_B.Switch[0];
  slrt_parker_DW.ICic_DSTATE[1] = slrt_parker_B.Switch[1];
  slrt_parker_DW.ICic_DSTATE[2] = slrt_parker_B.Switch[2];

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++slrt_parker_M->Timing.clockTick0)) {
    ++slrt_parker_M->Timing.clockTickH0;
  }

  slrt_parker_M->Timing.t[0] = slrt_parker_M->Timing.clockTick0 *
    slrt_parker_M->Timing.stepSize0 + slrt_parker_M->Timing.clockTickH0 *
    slrt_parker_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void slrt_parker_initialize(void)
{
  /* S-Function Block: <S28>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,2)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Add/s1"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Add/s2"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Add/s3"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Rate Transition1/s1"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Rate Transition1/s2"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Rate Transition1/s3"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Rate Transition2/s1"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Rate Transition2/s2"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Rate Transition2/s3"));
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Add/s1"),"CurrPose (mm): x: %7.3f ");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Add/s2"),"y: %22.3f ");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Add/s3"),"z: %22.3f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Rate Transition1/s1"),"xd: %7.3f ");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Rate Transition1/s2"),"yd: %22.3f ");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Rate Transition1/s3"),"zd: %22.3f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Rate Transition2/s1"),"xdd: %7.3f ");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Rate Transition2/s2"),"ydd: %22.3f ");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Rate Transition2/s3"),"zdd: %22.3f");
        rl32eSetScope(3, 4, 50);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        rl32eSetScope(3, 3, rl32eGetSignalNo(
          "Parker 404XR/Count to Position/Add/s1"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 0);
        rl32eSetScope(3, 9, 0);
        rl32eSetTargetScope(3, 1, 0.0);
        rl32eSetTargetScope(3, 11, 0.0);
        rl32eSetTargetScope(3, 10, 0.0);
        xpceScopeAcqOK(3, &slrt_parker_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* Level2 S-Function Block: '<S16>/CNT32-8M(PCI) Ch1' (encconteccnt328mpci) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S16>/CNT32-8M(PCI) Ch2' (encconteccnt328mpci) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S16>/CNT32-8M(PCI) Ch3' (encconteccnt328mpci) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<S5>/Enabled Subsystem' */

  /* S-Function Block: <S38>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(23)) == 0) {
      if ((i = rl32eDefScope(23,3)) != 0) {
        printf("Error creating scope 23\n");
      } else {
        rl32eAddSignal(23, rl32eGetSignalNo("Scopes/Enabled Subsystem/Gain1"));
        rl32eSetScope(23, 4, 50000);
        rl32eSetScope(23, 5, 0);
        rl32eSetScope(23, 6, 1);
        rl32eSetScope(23, 0, 0);
        xpceFSScopeSet(23, "Ft_<%%%>.dat", 0, 512, 1, 536870912);
        rl32eSetScope (23, 10, 1);
        rl32eSetScope(23, 3, rl32eGetSignalNo("Scopes/Enabled Subsystem/Gain1"));
        rl32eSetScope(23, 1, 0.0);
        rl32eSetScope(23, 2, 0);
        rl32eSetScope(23, 9, 0);
        xpceScopeAcqOK(23, &slrt_parker_DW.SFunction_IWORK_lk.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(23);
    }
  }

  /* S-Function Block: <S39>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(24)) == 0) {
      if ((i = rl32eDefScope(24,3)) != 0) {
        printf("Error creating scope 24\n");
      } else {
        rl32eAddSignal(24, rl32eGetSignalNo("Scopes/Enabled Subsystem/Gain/s1"));
        rl32eAddSignal(24, rl32eGetSignalNo("Scopes/Enabled Subsystem/Gain/s2"));
        rl32eAddSignal(24, rl32eGetSignalNo("Scopes/Enabled Subsystem/Gain/s3"));
        rl32eAddSignal(24, rl32eGetSignalNo("Scopes/Enabled Subsystem/Gain/s4"));
        rl32eAddSignal(24, rl32eGetSignalNo("Scopes/Enabled Subsystem/Gain/s5"));
        rl32eAddSignal(24, rl32eGetSignalNo("Scopes/Enabled Subsystem/Gain/s6"));
        rl32eAddSignal(24, rl32eGetSignalNo("Scopes/Enabled Subsystem/Gain/s7"));
        rl32eAddSignal(24, rl32eGetSignalNo("Scopes/Enabled Subsystem/Gain/s8"));
        rl32eAddSignal(24, rl32eGetSignalNo("Scopes/Enabled Subsystem/Gain/s9"));
        rl32eSetScope(24, 4, 50000);
        rl32eSetScope(24, 5, 0);
        rl32eSetScope(24, 6, 1);
        rl32eSetScope(24, 0, 0);
        xpceFSScopeSet(24, "Pc_<%%%>.dat", 0, 512, 1, 536870912);
        rl32eSetScope (24, 10, 1);
        rl32eSetScope(24, 3, rl32eGetSignalNo("Scopes/Enabled Subsystem/Gain/s1"));
        rl32eSetScope(24, 1, 0.0);
        rl32eSetScope(24, 2, 0);
        rl32eSetScope(24, 9, 0);
        xpceScopeAcqOK(24, &slrt_parker_DW.SFunction_IWORK_c.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(24);
    }
  }

  /* End of Start for SubSystem: '<S5>/Enabled Subsystem' */

  /* Level2 S-Function Block: '<S1>/Receive 1' (xpcudpbytereceive) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S16>/1STPORTB ' (dipci8255) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S16>/1STPORTB 1' (dipci8255) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S16>/1STPORTB 2' (dipci8255) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Atomic SubSystem: '<Root>/Trajectory Planner' */
  /* Start for Enabled SubSystem: '<S6>/Homing' */
  slrt_parker_DW.Homing_MODE = false;

  /* End of Start for SubSystem: '<S6>/Homing' */

  /* Start for Enabled SubSystem: '<S6>/Quintic Polynomial' */
  slrt_parker_DW.QuinticPolynomial_MODE = false;

  /* End of Start for SubSystem: '<S6>/Quintic Polynomial' */
  /* End of Start for SubSystem: '<Root>/Trajectory Planner' */

  /* Start for Enabled SubSystem: '<S5>/File Scope' */

  /* S-Function Block: <S40>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(21)) == 0) {
      if ((i = rl32eDefScope(21,3)) != 0) {
        printf("Error creating scope 21\n");
      } else {
        rl32eAddSignal(21, rl32eGetSignalNo("Scopes/File Scope/Gain1/s1"));
        rl32eAddSignal(21, rl32eGetSignalNo("Scopes/File Scope/Gain1/s2"));
        rl32eAddSignal(21, rl32eGetSignalNo("Scopes/File Scope/Gain1/s3"));
        rl32eAddSignal(21, rl32eGetSignalNo("Scopes/File Scope/Gain1/s4"));
        rl32eAddSignal(21, rl32eGetSignalNo("Scopes/File Scope/Gain1/s5"));
        rl32eAddSignal(21, rl32eGetSignalNo("Scopes/File Scope/Gain1/s6"));
        rl32eAddSignal(21, rl32eGetSignalNo("Scopes/File Scope/Gain1/s7"));
        rl32eAddSignal(21, rl32eGetSignalNo("Scopes/File Scope/Gain1/s8"));
        rl32eAddSignal(21, rl32eGetSignalNo("Scopes/File Scope/Gain1/s9"));
        rl32eAddSignal(21, rl32eGetSignalNo("Scopes/File Scope/Gain1/s10"));
        rl32eSetScope(21, 4, 50000);
        rl32eSetScope(21, 5, 0);
        rl32eSetScope(21, 6, 1);
        rl32eSetScope(21, 0, 0);
        xpceFSScopeSet(21, "Cur_<%%%>.dat", 0, 512, 1, 536870912);
        rl32eSetScope (21, 10, 1);
        rl32eSetScope(21, 3, rl32eGetSignalNo("Scopes/File Scope/Gain1/s1"));
        rl32eSetScope(21, 1, 0.0);
        rl32eSetScope(21, 2, 0);
        rl32eSetScope(21, 9, 0);
        xpceScopeAcqOK(21, &slrt_parker_DW.SFunction_IWORK_nr.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(21);
    }
  }

  /* S-Function Block: <S41>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(22)) == 0) {
      if ((i = rl32eDefScope(22,3)) != 0) {
        printf("Error creating scope 22\n");
      } else {
        rl32eAddSignal(22, rl32eGetSignalNo("Scopes/File Scope/Gain2/s1"));
        rl32eAddSignal(22, rl32eGetSignalNo("Scopes/File Scope/Gain2/s2"));
        rl32eAddSignal(22, rl32eGetSignalNo("Scopes/File Scope/Gain2/s3"));
        rl32eAddSignal(22, rl32eGetSignalNo("Scopes/File Scope/Gain2/s4"));
        rl32eAddSignal(22, rl32eGetSignalNo("Scopes/File Scope/Gain2/s5"));
        rl32eAddSignal(22, rl32eGetSignalNo("Scopes/File Scope/Gain2/s6"));
        rl32eAddSignal(22, rl32eGetSignalNo("Scopes/File Scope/Gain2/s7"));
        rl32eAddSignal(22, rl32eGetSignalNo("Scopes/File Scope/Gain2/s8"));
        rl32eAddSignal(22, rl32eGetSignalNo("Scopes/File Scope/Gain2/s9"));
        rl32eAddSignal(22, rl32eGetSignalNo("Scopes/File Scope/Gain2/s10"));
        rl32eSetScope(22, 4, 50000);
        rl32eSetScope(22, 5, 0);
        rl32eSetScope(22, 6, 1);
        rl32eSetScope(22, 0, 0);
        xpceFSScopeSet(22, "Des_<%%%>.dat", 0, 512, 1, 536870912);
        rl32eSetScope (22, 10, 1);
        rl32eSetScope(22, 3, rl32eGetSignalNo("Scopes/File Scope/Gain2/s1"));
        rl32eSetScope(22, 1, 0.0);
        rl32eSetScope(22, 2, 0);
        rl32eSetScope(22, 9, 0);
        xpceScopeAcqOK(22, &slrt_parker_DW.SFunction_IWORK_ea.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(22);
    }
  }

  /* S-Function Block: <S42>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(20)) == 0) {
      if ((i = rl32eDefScope(20,3)) != 0) {
        printf("Error creating scope 20\n");
      } else {
        rl32eAddSignal(20, rl32eGetSignalNo("Scopes/File Scope/Gain/s1"));
        rl32eAddSignal(20, rl32eGetSignalNo("Scopes/File Scope/Gain/s2"));
        rl32eAddSignal(20, rl32eGetSignalNo("Scopes/File Scope/Gain/s3"));
        rl32eAddSignal(20, rl32eGetSignalNo("Scopes/File Scope/Gain/s4"));
        rl32eAddSignal(20, rl32eGetSignalNo("Scopes/File Scope/Gain/s5"));
        rl32eAddSignal(20, rl32eGetSignalNo("Scopes/File Scope/Gain/s6"));
        rl32eAddSignal(20, rl32eGetSignalNo("Scopes/File Scope/Gain/s7"));
        rl32eSetScope(20, 4, 50000);
        rl32eSetScope(20, 5, 0);
        rl32eSetScope(20, 6, 1);
        rl32eSetScope(20, 0, 0);
        xpceFSScopeSet(20, "We_<%%%>.dat", 0, 512, 1, 536870912);
        rl32eSetScope (20, 10, 1);
        rl32eSetScope(20, 3, rl32eGetSignalNo("Scopes/File Scope/Gain/s1"));
        rl32eSetScope(20, 1, 0.0);
        rl32eSetScope(20, 2, 0);
        rl32eSetScope(20, 9, 0);
        xpceScopeAcqOK(20, &slrt_parker_DW.SFunction_IWORK_os.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(20);
    }
  }

  /* End of Start for SubSystem: '<S5>/File Scope' */

  /* S-Function Block: <S33>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,2)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("Scopes/sys_stat/s1"));
        rl32eAddSignal(4, rl32eGetSignalNo("Scopes/sys_stat/s2"));
        rl32eAddSignal(4, rl32eGetSignalNo("Scopes/sys_stat/s3"));
        rl32eAddSignal(4, rl32eGetSignalNo("Scopes/sys_stat/s4"));
        rl32eAddSignal(4, rl32eGetSignalNo("Scopes/sys_stat/s5"));
        rl32eAddSignal(4, rl32eGetSignalNo("Scopes/sys_stat/s6"));
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Scopes/sys_stat/s1"),
          "Homing: %2.0f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Scopes/sys_stat/s2"),
          "ENC Res: %2.0f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Scopes/sys_stat/s3"),
          "Mode: %2.0f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Scopes/sys_stat/s4"),
          "QuinticRecord: %2.0f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Scopes/sys_stat/s5"),
          "Error: %2.0f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Scopes/sys_stat/s6"),
          "FT Res: %2.0f");
        rl32eSetScope(4, 4, 50);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo("Scopes/sys_stat/s1"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 9, 0);
        rl32eSetTargetScope(4, 1, 0.0);
        rl32eSetTargetScope(4, 11, 0.0);
        rl32eSetTargetScope(4, 10, 0.0);
        xpceScopeAcqOK(4, &slrt_parker_DW.SFunction_IWORK_o.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* S-Function Block: <S34>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s1"));
        rl32eAddSignal(1, rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s2"));
        rl32eAddSignal(1, rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s3"));
        rl32eAddSignal(1, rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s4"));
        rl32eAddSignal(1, rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s5"));
        rl32eAddSignal(1, rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s6"));
        rl32eAddSignal(1, rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s7"));
        rl32eAddSignal(1, rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s8"));
        rl32eAddSignal(1, rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s9"));
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s1"),"DesPose x: %8.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s2"),"y: %8.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s3"),"z: %8.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s4"),"xd: %8.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s5"),"yd: %8.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s6"),"zd: %8.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s7"),"xdd: %8.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s8"),"ydd: %8.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s9"),"zdd: %8.6f");
        rl32eSetScope(1, 4, 25);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo(
          "Trajectory Planner/Multiport Switch/s1"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        rl32eSetTargetScope(1, 1, 0.0);
        rl32eSetTargetScope(1, 11, 0.0);
        rl32eSetTargetScope(1, 10, 0.0);
        xpceScopeAcqOK(1, &slrt_parker_DW.SFunction_IWORK_e.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* S-Function Block: <S35>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(12)) == 0) {
      if ((i = rl32eDefScope(12,1)) != 0) {
        printf("Error creating scope 12\n");
      } else {
        rl32eSetScope(12, 4, 50);
        rl32eSetScope(12, 5, 0);
        rl32eSetScope(12, 6, 1);
        rl32eSetScope(12, 0, 0);
        rl32eSetScope(12, 1, 0.0);
        rl32eSetScope(12, 2, 0);
        rl32eSetScope(12, 9, 0);
        xpceScopeAcqOK(12, &slrt_parker_DW.SFunction_IWORK_f.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(12);
    }
  }

  /* S-Function Block: <S27>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo(
          "PD Inverse Dynamics/Saturation [-10, 10]/s1"));
        rl32eAddSignal(2, rl32eGetSignalNo(
          "PD Inverse Dynamics/Saturation [-10, 10]/s2"));
        rl32eAddSignal(2, rl32eGetSignalNo(
          "PD Inverse Dynamics/Saturation [-10, 10]/s3"));
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo(
          "PD Inverse Dynamics/Saturation [-10, 10]/s1"),"u1 (V) %10.4f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo(
          "PD Inverse Dynamics/Saturation [-10, 10]/s2"),"u2 (V) %10.4f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo(
          "PD Inverse Dynamics/Saturation [-10, 10]/s3"),"u3 (V) %10.4f");
        rl32eSetScope(2, 4, 50);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 5);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo(
          "PD Inverse Dynamics/Saturation [-10, 10]/s1"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 0.0);
        rl32eSetTargetScope(2, 11, 0.0);
        rl32eSetTargetScope(2, 10, 0.0);
        xpceScopeAcqOK(2, &slrt_parker_DW.SFunction_IWORK_n.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* S-Function Block: <S37>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(10)) == 0) {
      if ((i = rl32eDefScope(10,1)) != 0) {
        printf("Error creating scope 10\n");
      } else {
        rl32eAddSignal(10, rl32eGetSignalNo("PD Inverse Dynamics/Add1/s1"));
        rl32eAddSignal(10, rl32eGetSignalNo("PD Inverse Dynamics/Add1/s2"));
        rl32eAddSignal(10, rl32eGetSignalNo("PD Inverse Dynamics/Add1/s3"));
        rl32eSetScope(10, 4, 50);
        rl32eSetScope(10, 5, 0);
        rl32eSetScope(10, 6, 1);
        rl32eSetScope(10, 0, 0);
        rl32eSetScope(10, 3, rl32eGetSignalNo("PD Inverse Dynamics/Add1/s1"));
        rl32eSetScope(10, 1, 0.0);
        rl32eSetScope(10, 2, 0);
        rl32eSetScope(10, 9, 0);
        xpceScopeAcqOK(10, &slrt_parker_DW.SFunction_IWORK_l.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(10);
    }
  }

  /* S-Function Block: <S32>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,2)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eAddSignal(5, rl32eGetSignalNo("Force Sensor/Byte Unpacking 1/s1"));
        rl32eAddSignal(5, rl32eGetSignalNo("Force Sensor/Byte Unpacking 1/s2"));
        rl32eAddSignal(5, rl32eGetSignalNo("Force Sensor/Byte Unpacking 1/s3"));
        rl32eAddSignal(5, rl32eGetSignalNo("Force Sensor/Byte Unpacking 1/s4"));
        rl32eAddSignal(5, rl32eGetSignalNo("Force Sensor/Byte Unpacking 1/s5"));
        rl32eAddSignal(5, rl32eGetSignalNo("Force Sensor/Byte Unpacking 1/s6"));
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo(
          "Force Sensor/Byte Unpacking 1/s1"),"Fx (N) %12.4f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo(
          "Force Sensor/Byte Unpacking 1/s2"),"Fy (N) %12.4f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo(
          "Force Sensor/Byte Unpacking 1/s3"),"Fz (N) %12.4f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo(
          "Force Sensor/Byte Unpacking 1/s4"),"Mx (Nmm) %12.4f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo(
          "Force Sensor/Byte Unpacking 1/s5"),"My (Nmm) %12.4f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo(
          "Force Sensor/Byte Unpacking 1/s6"),"Mz (Nmm) %12.4f");
        rl32eSetScope(5, 4, 50);
        rl32eSetScope(5, 5, 0);
        rl32eSetScope(5, 6, 1);
        rl32eSetScope(5, 0, 0);
        rl32eSetScope(5, 3, rl32eGetSignalNo("Force Sensor/Byte Unpacking 1/s1"));
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 0);
        rl32eSetScope(5, 9, 0);
        rl32eSetTargetScope(5, 1, 0.0);
        rl32eSetTargetScope(5, 11, 0.0);
        rl32eSetTargetScope(5, 10, 0.0);
        xpceScopeAcqOK(5, &slrt_parker_DW.SFunction_IWORK_o5.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(5);
    }
  }

  /* S-Function Block: <S36>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(11)) == 0) {
      if ((i = rl32eDefScope(11,1)) != 0) {
        printf("Error creating scope 11\n");
      } else {
        rl32eAddSignal(11, rl32eGetSignalNo(
          "Parker 404XR/Plant/Logical Operator/s1"));
        rl32eAddSignal(11, rl32eGetSignalNo(
          "Parker 404XR/Plant/Logical Operator/s2"));
        rl32eAddSignal(11, rl32eGetSignalNo(
          "Parker 404XR/Plant/Logical Operator/s3"));
        rl32eSetScope(11, 4, 50);
        rl32eSetScope(11, 5, 0);
        rl32eSetScope(11, 6, 1);
        rl32eSetScope(11, 0, 0);
        rl32eSetScope(11, 3, rl32eGetSignalNo(
          "Parker 404XR/Plant/Logical Operator/s1"));
        rl32eSetScope(11, 1, 0.0);
        rl32eSetScope(11, 2, 0);
        rl32eSetScope(11, 9, 0);
        xpceScopeAcqOK(11, &slrt_parker_DW.SFunction_IWORK_b.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(11);
    }
  }

  /* Level2 S-Function Block: '<S16>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S2>/Enable Motors' */
  slrt_parker_B.EnableMotors[0] = slrt_parker_P.EnableMotors_Value[0];
  slrt_parker_B.EnableMotors[1] = slrt_parker_P.EnableMotors_Value[1];
  slrt_parker_B.EnableMotors[2] = slrt_parker_P.EnableMotors_Value[2];

  /* Level2 S-Function Block: '<S2>/PCI-DDA08 12  to PORTA' (dopci8255) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  {
    int32_T i;

    /* InitializeConditions for UnitDelay: '<S15>/Unit Delay' */
    slrt_parker_DW.UnitDelay_DSTATE[0] =
      slrt_parker_P.UnitDelay_InitialCondition_o;

    /* InitializeConditions for UnitDelay: '<S25>/UD' */
    slrt_parker_DW.UD_DSTATE[0] = slrt_parker_P.DiscreteDerivative_ICPrevScaled;

    /* InitializeConditions for UnitDelay: '<S15>/Unit Delay' */
    slrt_parker_DW.UnitDelay_DSTATE[1] =
      slrt_parker_P.UnitDelay_InitialCondition_o;

    /* InitializeConditions for UnitDelay: '<S25>/UD' */
    slrt_parker_DW.UD_DSTATE[1] = slrt_parker_P.DiscreteDerivative_ICPrevScaled;

    /* InitializeConditions for UnitDelay: '<S15>/Unit Delay' */
    slrt_parker_DW.UnitDelay_DSTATE[2] =
      slrt_parker_P.UnitDelay_InitialCondition_o;

    /* InitializeConditions for UnitDelay: '<S25>/UD' */
    slrt_parker_DW.UD_DSTATE[2] = slrt_parker_P.DiscreteDerivative_ICPrevScaled;

    /* InitializeConditions for DiscreteFir: '<S21>/Discrete FIR Filter' */
    slrt_parker_DW.DiscreteFIRFilter_circBuf = 0;

    /* InitializeConditions for UnitDelay: '<S26>/UD' */
    slrt_parker_DW.UD_DSTATE_g[0] =
      slrt_parker_P.DiscreteDerivative_ICPrevScal_e;
    slrt_parker_DW.UD_DSTATE_g[1] =
      slrt_parker_P.DiscreteDerivative_ICPrevScal_e;
    slrt_parker_DW.UD_DSTATE_g[2] =
      slrt_parker_P.DiscreteDerivative_ICPrevScal_e;

    /* InitializeConditions for DiscreteFir: '<S22>/Discrete FIR Filter' */
    slrt_parker_DW.DiscreteFIRFilter_circBuf_g = 0;

    /* InitializeConditions for UnitDelay: '<S23>/UD' */
    slrt_parker_DW.UD_DSTATE_o[0] =
      slrt_parker_P.DiscreteDerivative1_ICPrevScale;
    slrt_parker_DW.UD_DSTATE_o[1] =
      slrt_parker_P.DiscreteDerivative1_ICPrevScale;
    slrt_parker_DW.UD_DSTATE_o[2] =
      slrt_parker_P.DiscreteDerivative1_ICPrevScale;

    /* InitializeConditions for DiscreteFir: '<S17>/Discrete FIR Filter' */
    slrt_parker_DW.DiscreteFIRFilter_circBuf_f = 0;
    for (i = 0; i < 15; i++) {
      /* InitializeConditions for DiscreteFir: '<S21>/Discrete FIR Filter' */
      slrt_parker_DW.DiscreteFIRFilter_states[i] =
        slrt_parker_P.DiscreteFIRFilter_InitialStat_b;

      /* InitializeConditions for DiscreteFir: '<S22>/Discrete FIR Filter' */
      slrt_parker_DW.DiscreteFIRFilter_states_g[i] =
        slrt_parker_P.DiscreteFIRFilter_InitialStat_p;

      /* InitializeConditions for DiscreteFir: '<S17>/Discrete FIR Filter' */
      slrt_parker_DW.DiscreteFIRFilter_states_k[i] =
        slrt_parker_P.DiscreteFIRFilter_InitialSta_ew;
    }

    /* InitializeConditions for UnitDelay: '<S24>/IC=ic' */
    slrt_parker_DW.ICic_DSTATE[0] = slrt_parker_P.SampleandHold_ic[0];
    slrt_parker_DW.ICic_DSTATE[1] = slrt_parker_P.SampleandHold_ic[1];
    slrt_parker_DW.ICic_DSTATE[2] = slrt_parker_P.SampleandHold_ic[2];

    /* SystemInitialize for Atomic SubSystem: '<Root>/Trajectory Planner' */
    /* InitializeConditions for UnitDelay: '<S47>/Unit Delay2' */
    memcpy(&slrt_parker_DW.UnitDelay2_DSTATE[0],
           &slrt_parker_P.UnitDelay2_InitialCondition_n[0], 9U * sizeof(real_T));

    /* InitializeConditions for UnitDelay: '<S47>/Unit Delay3' */
    slrt_parker_DW.UnitDelay3_DSTATE = slrt_parker_P.UnitDelay3_InitialCondition;

    /* SystemInitialize for Enabled SubSystem: '<S6>/Homing' */
    /* InitializeConditions for UnitDelay: '<S45>/A Delay' */
    memcpy(&slrt_parker_DW.ADelay_DSTATE[0],
           &slrt_parker_P.ADelay_InitialCondition[0], 12U * sizeof(real_T));

    /* DSP System Toolbox N-Sample Enable  (sdspnsamp2) - '<S49>/N-Sample Enable' */
    slrt_parker_DW.NSampleEnable_Counter_d = (uint32_T) 0;

    /* InitializeConditions for UnitDelay: '<S45>/homing ready delay' */
    slrt_parker_DW.homingreadydelay_DSTATE =
      slrt_parker_P.homingreadydelay_InitialConditi;

    /* InitializeConditions for UnitDelay: '<S45>/status delay' */
    slrt_parker_DW.statusdelay_DSTATE =
      slrt_parker_P.statusdelay_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S45>/qdes Delay' */
    slrt_parker_DW.qdesDelay_DSTATE[0] =
      slrt_parker_P.qdesDelay_InitialCondition[0];

    /* InitializeConditions for UnitDelay: '<S45>/lsf delay' */
    slrt_parker_DW.lsfdelay_DSTATE[0] = slrt_parker_P.lsfdelay_InitialCondition
      [0];

    /* InitializeConditions for UnitDelay: '<S45>/qdes Delay' */
    slrt_parker_DW.qdesDelay_DSTATE[1] =
      slrt_parker_P.qdesDelay_InitialCondition[1];

    /* InitializeConditions for UnitDelay: '<S45>/lsf delay' */
    slrt_parker_DW.lsfdelay_DSTATE[1] = slrt_parker_P.lsfdelay_InitialCondition
      [1];

    /* InitializeConditions for UnitDelay: '<S45>/qdes Delay' */
    slrt_parker_DW.qdesDelay_DSTATE[2] =
      slrt_parker_P.qdesDelay_InitialCondition[2];

    /* InitializeConditions for UnitDelay: '<S45>/lsf delay' */
    slrt_parker_DW.lsfdelay_DSTATE[2] = slrt_parker_P.lsfdelay_InitialCondition
      [2];

    /* End of SystemInitialize for SubSystem: '<S6>/Homing' */

    /* SystemInitialize for Enabled SubSystem: '<S6>/Quintic Polynomial' */
    /* InitializeConditions for S-Function (sdspcount2): '<S52>/Counter' */
    slrt_parker_DW.Counter_ClkEphState = 5U;
    slrt_parker_DW.Counter_Count = slrt_parker_P.Counter_InitialCount;

    /* InitializeConditions for UnitDelay: '<S52>/Unit Delay' */
    slrt_parker_DW.UnitDelay_DSTATE_g = slrt_parker_P.UnitDelay_InitialCondition;

    /* DSP System Toolbox N-Sample Enable  (sdspnsamp2) - '<S55>/N-Sample Enable' */
    slrt_parker_DW.NSampleEnable_Counter = (uint32_T) 0;

    /* InitializeConditions for UnitDelay: '<S51>/Unit Delay' */
    slrt_parker_DW.UnitDelay_DSTATE_k[0] =
      slrt_parker_P.UnitDelay_InitialCondition_h[0];
    slrt_parker_DW.UnitDelay_DSTATE_k[1] =
      slrt_parker_P.UnitDelay_InitialCondition_h[1];
    slrt_parker_DW.UnitDelay_DSTATE_k[2] =
      slrt_parker_P.UnitDelay_InitialCondition_h[2];

    /* InitializeConditions for UnitDelay: '<S50>/Unit Delay' */
    slrt_parker_DW.UnitDelay_DSTATE_m =
      slrt_parker_P.UnitDelay_InitialCondition_l;

    /* InitializeConditions for UnitDelay: '<S50>/Unit Delay1' */
    slrt_parker_DW.UnitDelay1_DSTATE = slrt_parker_P.UnitDelay1_InitialCondition;

    /* DSP System Toolbox N-Sample Enable  (sdspnsamp2) - '<S54>/N-Sample Enable' */
    slrt_parker_DW.NSampleEnable_Counter_a = (uint32_T) 0;

    /* InitializeConditions for UnitDelay: '<S50>/Unit Delay2' */
    slrt_parker_DW.UnitDelay2_DSTATE_n[0] =
      slrt_parker_P.UnitDelay2_InitialCondition;

    /* SystemInitialize for Outport: '<S46>/p, pd, pdd' */
    slrt_parker_B.p[0] = slrt_parker_P.ppdpdd_Y0[0];
    slrt_parker_B.pdot[0] = slrt_parker_P.ppdpdd_Y0[3];
    slrt_parker_B.pdotdot[0] = slrt_parker_P.ppdpdd_Y0[6];

    /* InitializeConditions for UnitDelay: '<S50>/Unit Delay2' */
    slrt_parker_DW.UnitDelay2_DSTATE_n[1] =
      slrt_parker_P.UnitDelay2_InitialCondition;

    /* SystemInitialize for Outport: '<S46>/p, pd, pdd' */
    slrt_parker_B.p[1] = slrt_parker_P.ppdpdd_Y0[1];
    slrt_parker_B.pdot[1] = slrt_parker_P.ppdpdd_Y0[4];
    slrt_parker_B.pdotdot[1] = slrt_parker_P.ppdpdd_Y0[7];

    /* InitializeConditions for UnitDelay: '<S50>/Unit Delay2' */
    slrt_parker_DW.UnitDelay2_DSTATE_n[2] =
      slrt_parker_P.UnitDelay2_InitialCondition;

    /* SystemInitialize for Outport: '<S46>/p, pd, pdd' */
    slrt_parker_B.p[2] = slrt_parker_P.ppdpdd_Y0[2];
    slrt_parker_B.pdot[2] = slrt_parker_P.ppdpdd_Y0[5];
    slrt_parker_B.pdotdot[2] = slrt_parker_P.ppdpdd_Y0[8];

    /* SystemInitialize for Outport: '<S46>/QuinticRecord' */
    slrt_parker_B.RECORD = slrt_parker_P.QuinticRecord_Y0;

    /* End of SystemInitialize for SubSystem: '<S6>/Quintic Polynomial' */
    /* End of SystemInitialize for SubSystem: '<Root>/Trajectory Planner' */
  }
}

/* Model terminate function */
static void slrt_parker_terminate(void)
{
  /* Level2 S-Function Block: '<S16>/CNT32-8M(PCI) Ch1' (encconteccnt328mpci) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S16>/CNT32-8M(PCI) Ch2' (encconteccnt328mpci) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S16>/CNT32-8M(PCI) Ch3' (encconteccnt328mpci) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S1>/Receive 1' (xpcudpbytereceive) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S16>/1STPORTB ' (dipci8255) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S16>/1STPORTB 1' (dipci8255) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S16>/1STPORTB 2' (dipci8255) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S16>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S2>/PCI-DDA08 12  to PORTA' (dopci8255) */
  {
    SimStruct *rts = slrt_parker_M->childSfunctions[8];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  slrt_parker_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  slrt_parker_update();
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
  slrt_parker_initialize();
}

void MdlTerminate(void)
{
  slrt_parker_terminate();
}

/* Registration function */
RT_MODEL_slrt_parker_T *slrt_parker(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)slrt_parker_M, 0,
                sizeof(RT_MODEL_slrt_parker_T));
  rtsiSetSolverName(&slrt_parker_M->solverInfo,"FixedStepDiscrete");
  slrt_parker_M->solverInfoPtr = (&slrt_parker_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = slrt_parker_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    slrt_parker_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    slrt_parker_M->Timing.sampleTimes = (&slrt_parker_M->
      Timing.sampleTimesArray[0]);
    slrt_parker_M->Timing.offsetTimes = (&slrt_parker_M->
      Timing.offsetTimesArray[0]);

    /* task periods */
    slrt_parker_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    slrt_parker_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(slrt_parker_M, &slrt_parker_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = slrt_parker_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    slrt_parker_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(slrt_parker_M, -1);
  slrt_parker_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    slrt_parker_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(slrt_parker_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(slrt_parker_M->rtwLogInfo, (NULL));
    rtliSetLogT(slrt_parker_M->rtwLogInfo, "tout");
    rtliSetLogX(slrt_parker_M->rtwLogInfo, "");
    rtliSetLogXFinal(slrt_parker_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(slrt_parker_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(slrt_parker_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(slrt_parker_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(slrt_parker_M->rtwLogInfo, 1);
    rtliSetLogY(slrt_parker_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(slrt_parker_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(slrt_parker_M->rtwLogInfo, (NULL));
  }

  slrt_parker_M->solverInfoPtr = (&slrt_parker_M->solverInfo);
  slrt_parker_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&slrt_parker_M->solverInfo, 0.001);
  rtsiSetSolverMode(&slrt_parker_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  slrt_parker_M->ModelData.blockIO = ((void *) &slrt_parker_B);
  (void) memset(((void *) &slrt_parker_B), 0,
                sizeof(B_slrt_parker_T));

  {
    int32_T i;
    for (i = 0; i < 6; i++) {
      slrt_parker_B.ByteUnpacking1[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      slrt_parker_B.sys_stat[i] = 0.0;
    }

    for (i = 0; i < 9; i++) {
      slrt_parker_B.MultiportSwitch[i] = 0.0;
    }

    for (i = 0; i < 9; i++) {
      slrt_parker_B.UnitDelay2[i] = 0.0;
    }

    for (i = 0; i < 9; i++) {
      slrt_parker_B.pva_allowed[i] = 0.0;
    }

    for (i = 0; i < 12; i++) {
      slrt_parker_B.ADelay[i] = 0.0;
    }

    for (i = 0; i < 12; i++) {
      slrt_parker_B.A_out[i] = 0.0;
    }

    for (i = 0; i < 7; i++) {
      slrt_parker_B.Gain_p[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      slrt_parker_B.Gain1[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      slrt_parker_B.Gain2[i] = 0.0;
    }

    for (i = 0; i < 9; i++) {
      slrt_parker_B.Gain_a[i] = 0.0;
    }

    slrt_parker_B.CNT328MPCICh1 = 0.0;
    slrt_parker_B.CNT328MPCICh2 = 0.0;
    slrt_parker_B.CNT328MPCICh3 = 0.0;
    slrt_parker_B.Subtract[0] = 0.0;
    slrt_parker_B.Subtract[1] = 0.0;
    slrt_parker_B.Subtract[2] = 0.0;
    slrt_parker_B.Gain_Rads[0] = 0.0;
    slrt_parker_B.Gain_Rads[1] = 0.0;
    slrt_parker_B.Gain_Rads[2] = 0.0;
    slrt_parker_B.Rads_mm[0] = 0.0;
    slrt_parker_B.Rads_mm[1] = 0.0;
    slrt_parker_B.Rads_mm[2] = 0.0;
    slrt_parker_B.RateTransition[0] = 0.0;
    slrt_parker_B.RateTransition[1] = 0.0;
    slrt_parker_B.RateTransition[2] = 0.0;
    slrt_parker_B.UnitDelay[0] = 0.0;
    slrt_parker_B.UnitDelay[1] = 0.0;
    slrt_parker_B.UnitDelay[2] = 0.0;
    slrt_parker_B.Add[0] = 0.0;
    slrt_parker_B.Add[1] = 0.0;
    slrt_parker_B.Add[2] = 0.0;
    slrt_parker_B.DiscreteFIRFilter[0] = 0.0;
    slrt_parker_B.DiscreteFIRFilter[1] = 0.0;
    slrt_parker_B.DiscreteFIRFilter[2] = 0.0;
    slrt_parker_B.Gain[0] = 0.0;
    slrt_parker_B.Gain[1] = 0.0;
    slrt_parker_B.Gain[2] = 0.0;
    slrt_parker_B.TSamp[0] = 0.0;
    slrt_parker_B.TSamp[1] = 0.0;
    slrt_parker_B.TSamp[2] = 0.0;
    slrt_parker_B.Uk1[0] = 0.0;
    slrt_parker_B.Uk1[1] = 0.0;
    slrt_parker_B.Uk1[2] = 0.0;
    slrt_parker_B.Diff[0] = 0.0;
    slrt_parker_B.Diff[1] = 0.0;
    slrt_parker_B.Diff[2] = 0.0;
    slrt_parker_B.DiscreteFIRFilter_m[0] = 0.0;
    slrt_parker_B.DiscreteFIRFilter_m[1] = 0.0;
    slrt_parker_B.DiscreteFIRFilter_m[2] = 0.0;
    slrt_parker_B.Gain_c[0] = 0.0;
    slrt_parker_B.Gain_c[1] = 0.0;
    slrt_parker_B.Gain_c[2] = 0.0;
    slrt_parker_B.RateTransition1[0] = 0.0;
    slrt_parker_B.RateTransition1[1] = 0.0;
    slrt_parker_B.RateTransition1[2] = 0.0;
    slrt_parker_B.DiscreteFIRFilter_b[0] = 0.0;
    slrt_parker_B.DiscreteFIRFilter_b[1] = 0.0;
    slrt_parker_B.DiscreteFIRFilter_b[2] = 0.0;
    slrt_parker_B.Gain_m[0] = 0.0;
    slrt_parker_B.Gain_m[1] = 0.0;
    slrt_parker_B.Gain_m[2] = 0.0;
    slrt_parker_B.TSamp_b[0] = 0.0;
    slrt_parker_B.TSamp_b[1] = 0.0;
    slrt_parker_B.TSamp_b[2] = 0.0;
    slrt_parker_B.Uk1_o[0] = 0.0;
    slrt_parker_B.Uk1_o[1] = 0.0;
    slrt_parker_B.Uk1_o[2] = 0.0;
    slrt_parker_B.Diff_h[0] = 0.0;
    slrt_parker_B.Diff_h[1] = 0.0;
    slrt_parker_B.Diff_h[2] = 0.0;
    slrt_parker_B.DiscreteFIRFilter_g[0] = 0.0;
    slrt_parker_B.DiscreteFIRFilter_g[1] = 0.0;
    slrt_parker_B.DiscreteFIRFilter_g[2] = 0.0;
    slrt_parker_B.Gain_b[0] = 0.0;
    slrt_parker_B.Gain_b[1] = 0.0;
    slrt_parker_B.Gain_b[2] = 0.0;
    slrt_parker_B.TSamp_p[0] = 0.0;
    slrt_parker_B.TSamp_p[1] = 0.0;
    slrt_parker_B.TSamp_p[2] = 0.0;
    slrt_parker_B.Uk1_c[0] = 0.0;
    slrt_parker_B.Uk1_c[1] = 0.0;
    slrt_parker_B.Uk1_c[2] = 0.0;
    slrt_parker_B.Diff_o[0] = 0.0;
    slrt_parker_B.Diff_o[1] = 0.0;
    slrt_parker_B.Diff_o[2] = 0.0;
    slrt_parker_B.DiscreteFIRFilter_k[0] = 0.0;
    slrt_parker_B.DiscreteFIRFilter_k[1] = 0.0;
    slrt_parker_B.DiscreteFIRFilter_k[2] = 0.0;
    slrt_parker_B.Gain_o[0] = 0.0;
    slrt_parker_B.Gain_o[1] = 0.0;
    slrt_parker_B.Gain_o[2] = 0.0;
    slrt_parker_B.RateTransition2[0] = 0.0;
    slrt_parker_B.RateTransition2[1] = 0.0;
    slrt_parker_B.RateTransition2[2] = 0.0;
    slrt_parker_B.Receive1_o2 = 0.0;
    slrt_parker_B.uSTPORTB = 0.0;
    slrt_parker_B.uSTPORTB1 = 0.0;
    slrt_parker_B.uSTPORTB2 = 0.0;
    slrt_parker_B.Product = 0.0;
    slrt_parker_B.ICic[0] = 0.0;
    slrt_parker_B.ICic[1] = 0.0;
    slrt_parker_B.ICic[2] = 0.0;
    slrt_parker_B.Switch[0] = 0.0;
    slrt_parker_B.Switch[1] = 0.0;
    slrt_parker_B.Switch[2] = 0.0;
    slrt_parker_B.Gain_l = 0.0;
    slrt_parker_B.EnableMotors[0] = 0.0;
    slrt_parker_B.EnableMotors[1] = 0.0;
    slrt_parker_B.EnableMotors[2] = 0.0;
    slrt_parker_B.UnitDelay3 = 0.0;
    slrt_parker_B.error_flag = 0.0;
    slrt_parker_B.DigitalClock = 0.0;
    slrt_parker_B.Counter = 0.0;
    slrt_parker_B.UnitDelay_f = 0.0;
    slrt_parker_B.UnitDelay_h[0] = 0.0;
    slrt_parker_B.UnitDelay_h[1] = 0.0;
    slrt_parker_B.UnitDelay_h[2] = 0.0;
    slrt_parker_B.Switch_f[0] = 0.0;
    slrt_parker_B.Switch_f[1] = 0.0;
    slrt_parker_B.Switch_f[2] = 0.0;
    slrt_parker_B.MultiportSwitch_k[0] = 0.0;
    slrt_parker_B.MultiportSwitch_k[1] = 0.0;
    slrt_parker_B.MultiportSwitch_k[2] = 0.0;
    slrt_parker_B.UnitDelay_g = 0.0;
    slrt_parker_B.UnitDelay1 = 0.0;
    slrt_parker_B.UnitDelay2_j[0] = 0.0;
    slrt_parker_B.UnitDelay2_j[1] = 0.0;
    slrt_parker_B.UnitDelay2_j[2] = 0.0;
    slrt_parker_B.Switch_b[0] = 0.0;
    slrt_parker_B.Switch_b[1] = 0.0;
    slrt_parker_B.Switch_b[2] = 0.0;
    slrt_parker_B.enable = 0.0;
    slrt_parker_B.p[0] = 0.0;
    slrt_parker_B.p[1] = 0.0;
    slrt_parker_B.p[2] = 0.0;
    slrt_parker_B.pdot[0] = 0.0;
    slrt_parker_B.pdot[1] = 0.0;
    slrt_parker_B.pdot[2] = 0.0;
    slrt_parker_B.pdotdot[0] = 0.0;
    slrt_parker_B.pdotdot[1] = 0.0;
    slrt_parker_B.pdotdot[2] = 0.0;
    slrt_parker_B.confn = 0.0;
    slrt_parker_B.t0n = 0.0;
    slrt_parker_B.p0n[0] = 0.0;
    slrt_parker_B.p0n[1] = 0.0;
    slrt_parker_B.p0n[2] = 0.0;
    slrt_parker_B.RECORD = 0.0;
    slrt_parker_B.qdesDelay[0] = 0.0;
    slrt_parker_B.qdesDelay[1] = 0.0;
    slrt_parker_B.qdesDelay[2] = 0.0;
    slrt_parker_B.Switch_p[0] = 0.0;
    slrt_parker_B.Switch_p[1] = 0.0;
    slrt_parker_B.Switch_p[2] = 0.0;
    slrt_parker_B.homingreadydelay = 0.0;
    slrt_parker_B.statusdelay = 0.0;
    slrt_parker_B.lsfdelay[0] = 0.0;
    slrt_parker_B.lsfdelay[1] = 0.0;
    slrt_parker_B.lsfdelay[2] = 0.0;
    slrt_parker_B.q_des[0] = 0.0;
    slrt_parker_B.q_des[1] = 0.0;
    slrt_parker_B.q_des[2] = 0.0;
    slrt_parker_B.qd_des[0] = 0.0;
    slrt_parker_B.qd_des[1] = 0.0;
    slrt_parker_B.qd_des[2] = 0.0;
    slrt_parker_B.qdd_des[0] = 0.0;
    slrt_parker_B.qdd_des[1] = 0.0;
    slrt_parker_B.qdd_des[2] = 0.0;
    slrt_parker_B.ready = 0.0;
    slrt_parker_B.cur_status = 0.0;
    slrt_parker_B.reset = 0.0;
    slrt_parker_B.lsf_out[0] = 0.0;
    slrt_parker_B.lsf_out[1] = 0.0;
    slrt_parker_B.lsf_out[2] = 0.0;
    slrt_parker_B.Gain1_i = 0.0;
    slrt_parker_B.Sum[0] = 0.0;
    slrt_parker_B.Sum[1] = 0.0;
    slrt_parker_B.Sum[2] = 0.0;
    slrt_parker_B.Kp[0] = 0.0;
    slrt_parker_B.Kp[1] = 0.0;
    slrt_parker_B.Kp[2] = 0.0;
    slrt_parker_B.Sum1[0] = 0.0;
    slrt_parker_B.Sum1[1] = 0.0;
    slrt_parker_B.Sum1[2] = 0.0;
    slrt_parker_B.DeadZone1[0] = 0.0;
    slrt_parker_B.DeadZone1[1] = 0.0;
    slrt_parker_B.DeadZone1[2] = 0.0;
    slrt_parker_B.Kdvoltssecondrad[0] = 0.0;
    slrt_parker_B.Kdvoltssecondrad[1] = 0.0;
    slrt_parker_B.Kdvoltssecondrad[2] = 0.0;
    slrt_parker_B.Add_e[0] = 0.0;
    slrt_parker_B.Add_e[1] = 0.0;
    slrt_parker_B.Add_e[2] = 0.0;
    slrt_parker_B.ms2[0] = 0.0;
    slrt_parker_B.ms2[1] = 0.0;
    slrt_parker_B.ms2[2] = 0.0;
    slrt_parker_B.tau_motion[0] = 0.0;
    slrt_parker_B.tau_motion[1] = 0.0;
    slrt_parker_B.tau_motion[2] = 0.0;
    slrt_parker_B.ViscousFriction[0] = 0.0;
    slrt_parker_B.ViscousFriction[1] = 0.0;
    slrt_parker_B.ViscousFriction[2] = 0.0;
    slrt_parker_B.tau[0] = 0.0;
    slrt_parker_B.tau[1] = 0.0;
    slrt_parker_B.tau[2] = 0.0;
    slrt_parker_B.pitch1[0] = 0.0;
    slrt_parker_B.pitch1[1] = 0.0;
    slrt_parker_B.pitch1[2] = 0.0;
    slrt_parker_B.TorqueConstant[0] = 0.0;
    slrt_parker_B.TorqueConstant[1] = 0.0;
    slrt_parker_B.TorqueConstant[2] = 0.0;
    slrt_parker_B.AmpGain[0] = 0.0;
    slrt_parker_B.AmpGain[1] = 0.0;
    slrt_parker_B.AmpGain[2] = 0.0;
    slrt_parker_B.Saturation1010[0] = 0.0;
    slrt_parker_B.Saturation1010[1] = 0.0;
    slrt_parker_B.Saturation1010[2] = 0.0;
  }

  /* parameters */
  slrt_parker_M->ModelData.defaultParam = ((real_T *)&slrt_parker_P);

  /* states (dwork) */
  slrt_parker_M->ModelData.dwork = ((void *) &slrt_parker_DW);
  (void) memset((void *)&slrt_parker_DW, 0,
                sizeof(DW_slrt_parker_T));
  slrt_parker_DW.UnitDelay_DSTATE[0] = 0.0;
  slrt_parker_DW.UnitDelay_DSTATE[1] = 0.0;
  slrt_parker_DW.UnitDelay_DSTATE[2] = 0.0;
  slrt_parker_DW.UD_DSTATE[0] = 0.0;
  slrt_parker_DW.UD_DSTATE[1] = 0.0;
  slrt_parker_DW.UD_DSTATE[2] = 0.0;

  {
    int32_T i;
    for (i = 0; i < 15; i++) {
      slrt_parker_DW.DiscreteFIRFilter_states[i] = 0.0;
    }
  }

  slrt_parker_DW.UD_DSTATE_g[0] = 0.0;
  slrt_parker_DW.UD_DSTATE_g[1] = 0.0;
  slrt_parker_DW.UD_DSTATE_g[2] = 0.0;

  {
    int32_T i;
    for (i = 0; i < 15; i++) {
      slrt_parker_DW.DiscreteFIRFilter_states_g[i] = 0.0;
    }
  }

  slrt_parker_DW.UD_DSTATE_o[0] = 0.0;
  slrt_parker_DW.UD_DSTATE_o[1] = 0.0;
  slrt_parker_DW.UD_DSTATE_o[2] = 0.0;

  {
    int32_T i;
    for (i = 0; i < 15; i++) {
      slrt_parker_DW.DiscreteFIRFilter_states_k[i] = 0.0;
    }
  }

  slrt_parker_DW.ICic_DSTATE[0] = 0.0;
  slrt_parker_DW.ICic_DSTATE[1] = 0.0;
  slrt_parker_DW.ICic_DSTATE[2] = 0.0;

  {
    int32_T i;
    for (i = 0; i < 9; i++) {
      slrt_parker_DW.UnitDelay2_DSTATE[i] = 0.0;
    }
  }

  slrt_parker_DW.UnitDelay3_DSTATE = 0.0;
  slrt_parker_DW.UnitDelay_DSTATE_g = 0.0;
  slrt_parker_DW.UnitDelay_DSTATE_k[0] = 0.0;
  slrt_parker_DW.UnitDelay_DSTATE_k[1] = 0.0;
  slrt_parker_DW.UnitDelay_DSTATE_k[2] = 0.0;
  slrt_parker_DW.UnitDelay_DSTATE_m = 0.0;
  slrt_parker_DW.UnitDelay1_DSTATE = 0.0;
  slrt_parker_DW.UnitDelay2_DSTATE_n[0] = 0.0;
  slrt_parker_DW.UnitDelay2_DSTATE_n[1] = 0.0;
  slrt_parker_DW.UnitDelay2_DSTATE_n[2] = 0.0;

  {
    int32_T i;
    for (i = 0; i < 12; i++) {
      slrt_parker_DW.ADelay_DSTATE[i] = 0.0;
    }
  }

  slrt_parker_DW.qdesDelay_DSTATE[0] = 0.0;
  slrt_parker_DW.qdesDelay_DSTATE[1] = 0.0;
  slrt_parker_DW.qdesDelay_DSTATE[2] = 0.0;
  slrt_parker_DW.homingreadydelay_DSTATE = 0.0;
  slrt_parker_DW.statusdelay_DSTATE = 0.0;
  slrt_parker_DW.lsfdelay_DSTATE[0] = 0.0;
  slrt_parker_DW.lsfdelay_DSTATE[1] = 0.0;
  slrt_parker_DW.lsfdelay_DSTATE[2] = 0.0;

  {
    int32_T i;
    for (i = 0; i < 16; i++) {
      slrt_parker_DW.PCIDDA0812_RWORK[i] = 0.0;
    }
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  slrt_parker_InitializeDataMapInfo(slrt_parker_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &slrt_parker_M->NonInlinedSFcns.sfcnInfo;
    slrt_parker_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(slrt_parker_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &slrt_parker_M->Sizes.numSampTimes);
    slrt_parker_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(slrt_parker_M)
      [0]);
    rtssSetTPtrPtr(sfcnInfo,slrt_parker_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(slrt_parker_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(slrt_parker_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(slrt_parker_M));
    rtssSetStepSizePtr(sfcnInfo, &slrt_parker_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(slrt_parker_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &slrt_parker_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &slrt_parker_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &slrt_parker_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &slrt_parker_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &slrt_parker_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &slrt_parker_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &slrt_parker_M->solverInfoPtr);
  }

  slrt_parker_M->Sizes.numSFcns = (9);

  /* register each child */
  {
    (void) memset((void *)&slrt_parker_M->NonInlinedSFcns.childSFunctions[0], 0,
                  9*sizeof(SimStruct));
    slrt_parker_M->childSfunctions =
      (&slrt_parker_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 9; i++) {
        slrt_parker_M->childSfunctions[i] =
          (&slrt_parker_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: slrt_parker/<S16>/CNT32-8M(PCI) Ch1 (encconteccnt328mpci) */
    {
      SimStruct *rts = slrt_parker_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = slrt_parker_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = slrt_parker_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = slrt_parker_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &slrt_parker_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, slrt_parker_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &slrt_parker_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &slrt_parker_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &slrt_parker_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &slrt_parker_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &slrt_parker_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &slrt_parker_B.CNT328MPCICh1));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) Ch1");
      ssSetPath(rts, "slrt_parker/Parker 404XR/Plant/CNT32-8M(PCI) Ch1");
      ssSetRTModel(rts,slrt_parker_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &slrt_parker_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)slrt_parker_P.CNT328MPCICh1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)slrt_parker_P.CNT328MPCICh1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)slrt_parker_P.CNT328MPCICh1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)slrt_parker_P.CNT328MPCICh1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)slrt_parker_P.CNT328MPCICh1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)slrt_parker_P.CNT328MPCICh1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)slrt_parker_P.CNT328MPCICh1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)slrt_parker_P.CNT328MPCICh1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)slrt_parker_P.CNT328MPCICh1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)slrt_parker_P.CNT328MPCICh1_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)slrt_parker_P.CNT328MPCICh1_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)slrt_parker_P.CNT328MPCICh1_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)slrt_parker_P.CNT328MPCICh1_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)slrt_parker_P.CNT328MPCICh1_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)slrt_parker_P.CNT328MPCICh1_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)slrt_parker_P.CNT328MPCICh1_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)slrt_parker_P.CNT328MPCICh1_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)slrt_parker_P.CNT328MPCICh1_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)slrt_parker_P.CNT328MPCICh1_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)slrt_parker_P.CNT328MPCICh1_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)slrt_parker_P.CNT328MPCICh1_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)slrt_parker_P.CNT328MPCICh1_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)slrt_parker_P.CNT328MPCICh1_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)slrt_parker_P.CNT328MPCICh1_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)slrt_parker_P.CNT328MPCICh1_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)slrt_parker_P.CNT328MPCICh1_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)slrt_parker_P.CNT328MPCICh1_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)slrt_parker_P.CNT328MPCICh1_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)slrt_parker_P.CNT328MPCICh1_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)slrt_parker_P.CNT328MPCICh1_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)slrt_parker_P.CNT328MPCICh1_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)slrt_parker_P.CNT328MPCICh1_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)slrt_parker_P.CNT328MPCICh1_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)slrt_parker_P.CNT328MPCICh1_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)slrt_parker_P.CNT328MPCICh1_P35_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &slrt_parker_DW.CNT328MPCICh1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &slrt_parker_DW.CNT328MPCICh1_IWORK[0]);
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

    /* Level2 S-Function Block: slrt_parker/<S16>/CNT32-8M(PCI) Ch2 (encconteccnt328mpci) */
    {
      SimStruct *rts = slrt_parker_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = slrt_parker_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = slrt_parker_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = slrt_parker_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &slrt_parker_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, slrt_parker_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &slrt_parker_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &slrt_parker_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &slrt_parker_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &slrt_parker_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &slrt_parker_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &slrt_parker_B.CNT328MPCICh2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) Ch2");
      ssSetPath(rts, "slrt_parker/Parker 404XR/Plant/CNT32-8M(PCI) Ch2");
      ssSetRTModel(rts,slrt_parker_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &slrt_parker_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)slrt_parker_P.CNT328MPCICh2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)slrt_parker_P.CNT328MPCICh2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)slrt_parker_P.CNT328MPCICh2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)slrt_parker_P.CNT328MPCICh2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)slrt_parker_P.CNT328MPCICh2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)slrt_parker_P.CNT328MPCICh2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)slrt_parker_P.CNT328MPCICh2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)slrt_parker_P.CNT328MPCICh2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)slrt_parker_P.CNT328MPCICh2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)slrt_parker_P.CNT328MPCICh2_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)slrt_parker_P.CNT328MPCICh2_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)slrt_parker_P.CNT328MPCICh2_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)slrt_parker_P.CNT328MPCICh2_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)slrt_parker_P.CNT328MPCICh2_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)slrt_parker_P.CNT328MPCICh2_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)slrt_parker_P.CNT328MPCICh2_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)slrt_parker_P.CNT328MPCICh2_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)slrt_parker_P.CNT328MPCICh2_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)slrt_parker_P.CNT328MPCICh2_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)slrt_parker_P.CNT328MPCICh2_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)slrt_parker_P.CNT328MPCICh2_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)slrt_parker_P.CNT328MPCICh2_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)slrt_parker_P.CNT328MPCICh2_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)slrt_parker_P.CNT328MPCICh2_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)slrt_parker_P.CNT328MPCICh2_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)slrt_parker_P.CNT328MPCICh2_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)slrt_parker_P.CNT328MPCICh2_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)slrt_parker_P.CNT328MPCICh2_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)slrt_parker_P.CNT328MPCICh2_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)slrt_parker_P.CNT328MPCICh2_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)slrt_parker_P.CNT328MPCICh2_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)slrt_parker_P.CNT328MPCICh2_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)slrt_parker_P.CNT328MPCICh2_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)slrt_parker_P.CNT328MPCICh2_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)slrt_parker_P.CNT328MPCICh2_P35_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &slrt_parker_DW.CNT328MPCICh2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &slrt_parker_DW.CNT328MPCICh2_IWORK[0]);
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

    /* Level2 S-Function Block: slrt_parker/<S16>/CNT32-8M(PCI) Ch3 (encconteccnt328mpci) */
    {
      SimStruct *rts = slrt_parker_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = slrt_parker_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = slrt_parker_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = slrt_parker_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &slrt_parker_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, slrt_parker_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &slrt_parker_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &slrt_parker_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &slrt_parker_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &slrt_parker_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &slrt_parker_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &slrt_parker_B.CNT328MPCICh3));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) Ch3");
      ssSetPath(rts, "slrt_parker/Parker 404XR/Plant/CNT32-8M(PCI) Ch3");
      ssSetRTModel(rts,slrt_parker_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &slrt_parker_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)slrt_parker_P.CNT328MPCICh3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)slrt_parker_P.CNT328MPCICh3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)slrt_parker_P.CNT328MPCICh3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)slrt_parker_P.CNT328MPCICh3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)slrt_parker_P.CNT328MPCICh3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)slrt_parker_P.CNT328MPCICh3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)slrt_parker_P.CNT328MPCICh3_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)slrt_parker_P.CNT328MPCICh3_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)slrt_parker_P.CNT328MPCICh3_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)slrt_parker_P.CNT328MPCICh3_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)slrt_parker_P.CNT328MPCICh3_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)slrt_parker_P.CNT328MPCICh3_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)slrt_parker_P.CNT328MPCICh3_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)slrt_parker_P.CNT328MPCICh3_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)slrt_parker_P.CNT328MPCICh3_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)slrt_parker_P.CNT328MPCICh3_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)slrt_parker_P.CNT328MPCICh3_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)slrt_parker_P.CNT328MPCICh3_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)slrt_parker_P.CNT328MPCICh3_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)slrt_parker_P.CNT328MPCICh3_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)slrt_parker_P.CNT328MPCICh3_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)slrt_parker_P.CNT328MPCICh3_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)slrt_parker_P.CNT328MPCICh3_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)slrt_parker_P.CNT328MPCICh3_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)slrt_parker_P.CNT328MPCICh3_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)slrt_parker_P.CNT328MPCICh3_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)slrt_parker_P.CNT328MPCICh3_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)slrt_parker_P.CNT328MPCICh3_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)slrt_parker_P.CNT328MPCICh3_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)slrt_parker_P.CNT328MPCICh3_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)slrt_parker_P.CNT328MPCICh3_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)slrt_parker_P.CNT328MPCICh3_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)slrt_parker_P.CNT328MPCICh3_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)slrt_parker_P.CNT328MPCICh3_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)slrt_parker_P.CNT328MPCICh3_P35_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &slrt_parker_DW.CNT328MPCICh3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &slrt_parker_DW.CNT328MPCICh3_IWORK[0]);
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

    /* Level2 S-Function Block: slrt_parker/<S1>/Receive 1 (xpcudpbytereceive) */
    {
      SimStruct *rts = slrt_parker_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = slrt_parker_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = slrt_parker_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = slrt_parker_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &slrt_parker_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, slrt_parker_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &slrt_parker_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &slrt_parker_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &slrt_parker_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &slrt_parker_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &slrt_parker_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 48);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *) slrt_parker_B.Receive1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *) &slrt_parker_B.Receive1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Receive 1");
      ssSetPath(rts, "slrt_parker/Force Sensor/Receive 1");
      ssSetRTModel(rts,slrt_parker_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &slrt_parker_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)slrt_parker_P.Receive1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)slrt_parker_P.Receive1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)slrt_parker_P.Receive1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)slrt_parker_P.Receive1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)slrt_parker_P.Receive1_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &slrt_parker_DW.Receive1_IWORK[0]);
      ssSetPWork(rts, (void **) &slrt_parker_DW.Receive1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &slrt_parker_DW.Receive1_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &slrt_parker_DW.Receive1_PWORK);
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

    /* Level2 S-Function Block: slrt_parker/<S16>/1STPORTB  (dipci8255) */
    {
      SimStruct *rts = slrt_parker_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = slrt_parker_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = slrt_parker_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = slrt_parker_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &slrt_parker_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, slrt_parker_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &slrt_parker_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &slrt_parker_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &slrt_parker_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &slrt_parker_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &slrt_parker_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &slrt_parker_B.uSTPORTB));
        }
      }

      /* path info */
      ssSetModelName(rts, "1STPORTB ");
      ssSetPath(rts, "slrt_parker/Parker 404XR/Plant/1STPORTB ");
      ssSetRTModel(rts,slrt_parker_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &slrt_parker_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)slrt_parker_P.uSTPORTB_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)slrt_parker_P.uSTPORTB_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)slrt_parker_P.uSTPORTB_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)slrt_parker_P.uSTPORTB_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)slrt_parker_P.uSTPORTB_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)slrt_parker_P.uSTPORTB_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)slrt_parker_P.uSTPORTB_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)slrt_parker_P.uSTPORTB_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &slrt_parker_DW.uSTPORTB_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &slrt_parker_DW.uSTPORTB_IWORK[0]);
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

    /* Level2 S-Function Block: slrt_parker/<S16>/1STPORTB 1 (dipci8255) */
    {
      SimStruct *rts = slrt_parker_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = slrt_parker_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = slrt_parker_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = slrt_parker_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &slrt_parker_M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, slrt_parker_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &slrt_parker_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &slrt_parker_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &slrt_parker_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &slrt_parker_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &slrt_parker_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &slrt_parker_B.uSTPORTB1));
        }
      }

      /* path info */
      ssSetModelName(rts, "1STPORTB 1");
      ssSetPath(rts, "slrt_parker/Parker 404XR/Plant/1STPORTB 1");
      ssSetRTModel(rts,slrt_parker_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &slrt_parker_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)slrt_parker_P.uSTPORTB1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)slrt_parker_P.uSTPORTB1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)slrt_parker_P.uSTPORTB1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)slrt_parker_P.uSTPORTB1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)slrt_parker_P.uSTPORTB1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)slrt_parker_P.uSTPORTB1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)slrt_parker_P.uSTPORTB1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)slrt_parker_P.uSTPORTB1_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &slrt_parker_DW.uSTPORTB1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &slrt_parker_DW.uSTPORTB1_IWORK[0]);
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

    /* Level2 S-Function Block: slrt_parker/<S16>/1STPORTB 2 (dipci8255) */
    {
      SimStruct *rts = slrt_parker_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = slrt_parker_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = slrt_parker_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = slrt_parker_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &slrt_parker_M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, slrt_parker_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &slrt_parker_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &slrt_parker_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &slrt_parker_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &slrt_parker_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &slrt_parker_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &slrt_parker_B.uSTPORTB2));
        }
      }

      /* path info */
      ssSetModelName(rts, "1STPORTB 2");
      ssSetPath(rts, "slrt_parker/Parker 404XR/Plant/1STPORTB 2");
      ssSetRTModel(rts,slrt_parker_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &slrt_parker_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)slrt_parker_P.uSTPORTB2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)slrt_parker_P.uSTPORTB2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)slrt_parker_P.uSTPORTB2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)slrt_parker_P.uSTPORTB2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)slrt_parker_P.uSTPORTB2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)slrt_parker_P.uSTPORTB2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)slrt_parker_P.uSTPORTB2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)slrt_parker_P.uSTPORTB2_P8_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &slrt_parker_DW.uSTPORTB2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &slrt_parker_DW.uSTPORTB2_IWORK[0]);
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

    /* Level2 S-Function Block: slrt_parker/<S16>/PCI-DDA08 12  (dacbpcidda0x12) */
    {
      SimStruct *rts = slrt_parker_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = slrt_parker_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = slrt_parker_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = slrt_parker_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &slrt_parker_M->NonInlinedSFcns.blkInfo2[7]);
      }

      ssSetRTWSfcnInfo(rts, slrt_parker_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &slrt_parker_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &slrt_parker_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &slrt_parker_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &slrt_parker_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &slrt_parker_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &slrt_parker_M->NonInlinedSFcns.Sfcn7.UPtrs0;
          sfcnUPtrs[0] = &slrt_parker_B.Saturation1010[0];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &slrt_parker_M->NonInlinedSFcns.Sfcn7.UPtrs1;
          sfcnUPtrs[0] = &slrt_parker_B.Gain_l;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &slrt_parker_M->NonInlinedSFcns.Sfcn7.UPtrs2;
          sfcnUPtrs[0] = &slrt_parker_B.Saturation1010[2];
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 ");
      ssSetPath(rts, "slrt_parker/Parker 404XR/Plant/PCI-DDA08 12 ");
      ssSetRTModel(rts,slrt_parker_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &slrt_parker_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)slrt_parker_P.PCIDDA0812_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)slrt_parker_P.PCIDDA0812_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)slrt_parker_P.PCIDDA0812_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)slrt_parker_P.PCIDDA0812_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)slrt_parker_P.PCIDDA0812_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)slrt_parker_P.PCIDDA0812_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)slrt_parker_P.PCIDDA0812_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &slrt_parker_DW.PCIDDA0812_RWORK[0]);
      ssSetIWork(rts, (int_T *) &slrt_parker_DW.PCIDDA0812_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 16);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &slrt_parker_DW.PCIDDA0812_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 4);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &slrt_parker_DW.PCIDDA0812_IWORK[0]);
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

    /* Level2 S-Function Block: slrt_parker/<S2>/PCI-DDA08 12  to PORTA (dopci8255) */
    {
      SimStruct *rts = slrt_parker_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = slrt_parker_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = slrt_parker_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = slrt_parker_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &slrt_parker_M->NonInlinedSFcns.blkInfo2[8]);
      }

      ssSetRTWSfcnInfo(rts, slrt_parker_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &slrt_parker_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &slrt_parker_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &slrt_parker_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &slrt_parker_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &slrt_parker_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &slrt_parker_M->NonInlinedSFcns.Sfcn8.UPtrs0;
          sfcnUPtrs[0] = &slrt_parker_B.EnableMotors[0];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &slrt_parker_M->NonInlinedSFcns.Sfcn8.UPtrs1;
          sfcnUPtrs[0] = &slrt_parker_B.EnableMotors[1];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &slrt_parker_M->NonInlinedSFcns.Sfcn8.UPtrs2;
          sfcnUPtrs[0] = &slrt_parker_B.EnableMotors[2];
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 \nto PORTA");
      ssSetPath(rts, "slrt_parker/Motor Enable Subsystem/PCI-DDA08 12  to PORTA");
      ssSetRTModel(rts,slrt_parker_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &slrt_parker_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)slrt_parker_P.PCIDDA0812toPORTA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)slrt_parker_P.PCIDDA0812toPORTA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)slrt_parker_P.PCIDDA0812toPORTA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)slrt_parker_P.PCIDDA0812toPORTA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)slrt_parker_P.PCIDDA0812toPORTA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)slrt_parker_P.PCIDDA0812toPORTA_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)slrt_parker_P.PCIDDA0812toPORTA_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)slrt_parker_P.PCIDDA0812toPORTA_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)slrt_parker_P.PCIDDA0812toPORTA_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       slrt_parker_P.PCIDDA0812toPORTA_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &slrt_parker_DW.PCIDDA0812toPORTA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &slrt_parker_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &slrt_parker_DW.PCIDDA0812toPORTA_IWORK[0]);
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
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }
  }

  /* Initialize Sizes */
  slrt_parker_M->Sizes.numContStates = (0);/* Number of continuous states */
  slrt_parker_M->Sizes.numY = (0);     /* Number of model outputs */
  slrt_parker_M->Sizes.numU = (0);     /* Number of model inputs */
  slrt_parker_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  slrt_parker_M->Sizes.numSampTimes = (1);/* Number of sample times */
  slrt_parker_M->Sizes.numBlocks = (141);/* Number of blocks */
  slrt_parker_M->Sizes.numBlockIO = (106);/* Number of block outputs */
  slrt_parker_M->Sizes.numBlockPrms = (660);/* Sum of parameter "widths" */
  return slrt_parker_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
