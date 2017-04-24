/*
 * slrt_parker_data.c
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

#include "slrt_parker.h"
#include "slrt_parker_private.h"

/* Block parameters (auto storage) */
P_slrt_parker_T slrt_parker_P = {
  /*  Variable: B
   * Referenced by: '<S3>/Inertia Matrix [Kg m^2]'
   */
  { 50.10813780018313, 0.0, 0.0, 0.0, 37.828137800183129, 0.0, 0.0, 0.0,
    38.884637800183128 },
  1.0,                                 /* Variable: ENC_obs_filter_coeffs
                                        * Referenced by:
                                        *   '<S18>/encoder obsever filter'
                                        *   '<S19>/encoder obsever filter'
                                        */

  /*  Variable: F
   * Referenced by: '<S3>/Viscous Friction'
   */
  { 0.2, 0.0, 0.0, 0.0, 0.2, 0.0, 0.0, 0.0, 0.2 },

  /*  Variable: HOMING_Vmov
   * Referenced by: '<S45>/V_mov'
   */
  { 5.0, 5.0, 5.0 },

  /*  Variable: HOMING_dx
   * Referenced by: '<S45>/home_pos'
   */
  { -100.0, -100.0, -55.0 },
  10.0,                                /* Variable: HOMING_tspan
                                        * Referenced by: '<S45>/tspan'
                                        */

  /*  Variable: Kd
   * Referenced by: '<S3>/Kd [volts*second//rad]'
   */
  { 0.1, 0.0, 0.0, 0.0, 0.1, 0.0, 0.0, 0.0, 5.0 },

  /*  Variable: Kp
   * Referenced by: '<S3>/Kp'
   */
  { 10000.0, 0.0, 0.0, 0.0, 10000.0, 0.0, 0.0, 0.0, 20000.0 },
  1.0,                                 /* Variable: N_ENC_obs_filter
                                        * Referenced by:
                                        *   '<S18>/Gain'
                                        *   '<S19>/Gain'
                                        */
  6.0,                                 /* Variable: N_acceleration
                                        * Referenced by: '<S17>/Gain'
                                        */
  6.0,                                 /* Variable: N_obs_velocity
                                        * Referenced by: '<S22>/Gain'
                                        */
  6.0,                                 /* Variable: N_velocity
                                        * Referenced by: '<S21>/Gain'
                                        */

  /*  Variable: accel_filter_coeffs
   * Referenced by: '<S17>/vel_filter_coeffs'
   */
  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },
  2.147483647E+9,                      /* Variable: counter_offset
                                        * Referenced by: '<S15>/Constant'
                                        */
  0.001,                               /* Variable: dt
                                        * Referenced by: '<S45>/dt'
                                        */
  500.0,                               /* Variable: encoder_counts
                                        * Referenced by: '<S15>/Gain_Rads'
                                        */

  /*  Variable: grav_vector
   * Referenced by: '<S3>/grav compensator'
   */
  { 0.0, 0.0, -9.666351189 },
  0.00079577471545947678,              /* Variable: pitch
                                        * Referenced by: '<S3>/pitch1'
                                        */
  4.0,                                 /* Variable: quadrature_mode
                                        * Referenced by: '<S15>/Gain_Rads'
                                        */
  5.0,                                 /* Variable: screw_pitch
                                        * Referenced by: '<S15>/Rads_mm'
                                        */
  19.047619047619047,                  /* Variable: torque_constant
                                        * Referenced by: '<S3>/Torque Constant'
                                        */

  /*  Variable: vel_filter_coeffs
   * Referenced by: '<S21>/vel_filter_coeffs'
   */
  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /*  Variable: vel_obs_filter_coeffs
   * Referenced by: '<S22>/vel_filter_coeffs'
   */
  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },
  0.0,                                 /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                        * Referenced by: '<S25>/UD'
                                        */
  0.0,                                 /* Mask Parameter: DiscreteDerivative_ICPrevScal_e
                                        * Referenced by: '<S26>/UD'
                                        */
  0.0,                                 /* Mask Parameter: DiscreteDerivative1_ICPrevScale
                                        * Referenced by: '<S23>/UD'
                                        */
  1.0,                                 /* Mask Parameter: EnableHoming_const
                                        * Referenced by: '<S43>/Constant'
                                        */
  2.0,                                 /* Mask Parameter: EnableJoint_const
                                        * Referenced by: '<S44>/Constant'
                                        */
  0.0,                                 /* Mask Parameter: ENRecord_const
                                        * Referenced by: '<S29>/Constant'
                                        */

  /*  Mask Parameter: SampleandHold_ic
   * Referenced by: '<S24>/IC=ic'
   */
  { 0.0, 0.0, 0.0 },
  2U,                                  /* Mask Parameter: NSampleEnable_ActiveLevel
                                        * Referenced by: '<S49>/N-Sample Enable'
                                        */
  2U,                                  /* Mask Parameter: NSampleEnable_ActiveLevel_b
                                        * Referenced by: '<S55>/N-Sample Enable'
                                        */
  2U,                                  /* Mask Parameter: NSampleEnable_ActiveLevel_be
                                        * Referenced by: '<S54>/N-Sample Enable'
                                        */
  1U,                                  /* Mask Parameter: NSampleSwitch_N
                                        * Referenced by: '<S49>/N-Sample Enable'
                                        */
  1U,                                  /* Mask Parameter: NSampleSwitch_N_p
                                        * Referenced by: '<S55>/N-Sample Enable'
                                        */
  1U,                                  /* Mask Parameter: NSampleSwitch_N_l
                                        * Referenced by: '<S54>/N-Sample Enable'
                                        */
  0U,                                  /* Mask Parameter: Counter_InitialCount
                                        * Referenced by: '<S52>/Counter'
                                        */
  -2.5,                                /* Expression: -2.5
                                        * Referenced by: '<S3>/Dead Zone1'
                                        */
  2.5,                                 /* Expression: 2.5
                                        * Referenced by: '<S3>/Dead Zone1'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S3>/m//s^2'
                                        */

  /*  Expression: [5 5 5]
   * Referenced by: '<S3>/Amp Gain'
   */
  { 5.0, 5.0, 5.0 },
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S3>/Saturation [-10, 10]'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S3>/Saturation [-10, 10]'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S30>/Gain1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S30>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S31>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S31>/Gain1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S31>/Gain2'
                                        */

  /*  Expression: zeros(HOMING_num_joint,4)
   * Referenced by: '<S45>/A Delay'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /*  Expression: zeros(HOMING_num_joint,1)
   * Referenced by: '<S45>/qdes Delay'
   */
  { 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S45>/homing ready delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S45>/status delay'
                                        */

  /*  Expression: ones(HOMING_num_joint,1)
   * Referenced by: '<S45>/lsf delay'
   */
  { 1.0, 1.0, 1.0 },

  /*  Expression: [0;0;0]
   * Referenced by: '<S46>/q_des'
   */
  { 0.0, 0.0, 0.0 },

  /*  Expression: zeros(9,1)
   * Referenced by: '<S46>/p, pd, pdd'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S46>/QuinticRecord'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S46>/Manual'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S52>/Unit Delay'
                                        */

  /*  Expression: zeros(3,1)
   * Referenced by: '<S51>/Unit Delay'
   */
  { 0.0, 0.0, 0.0 },
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S50>/tf'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S50>/Unit Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S50>/Unit Delay1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S50>/Unit Delay2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S46>/enable'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S6>/Mode'
                                        */

  /*  Expression: zeros(9,1)
   * Referenced by: '<S47>/Unit Delay2'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S47>/Unit Delay3'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P1_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: Channel
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P2_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: OperationMode
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P3_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalFilter
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P4_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: PulseInput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P5_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: Direction
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P6_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  2.147483647E+9,                      /* Expression: InitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P7_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: LoadInitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P8_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: SampleTime
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P9_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: PciSlot
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P10_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StartMethod
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P11_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StopMethod
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P12_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearRising
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P13_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearFalling
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P14_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P15_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P16_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetRising
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P17_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetFalling
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P18_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P19_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P20_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P21_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match0Value
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P22_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match1Value
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P23_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P24_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P25_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P26_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P27_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAlarm
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P28_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: OneShotDuration
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P29_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexEnable
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P30_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexLogic
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P31_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalInput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P32_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalOutput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P33_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P34_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh1_P35_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P1_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: Channel
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P2_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: OperationMode
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P3_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalFilter
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P4_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: PulseInput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P5_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: Direction
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P6_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  2.147483647E+9,                      /* Expression: InitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P7_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: LoadInitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P8_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: SampleTime
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P9_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: PciSlot
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P10_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StartMethod
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P11_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StopMethod
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P12_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearRising
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P13_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearFalling
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P14_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P15_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P16_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetRising
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P17_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetFalling
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P18_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P19_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P20_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P21_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match0Value
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P22_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match1Value
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P23_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P24_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P25_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P26_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P27_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAlarm
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P28_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: OneShotDuration
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P29_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexEnable
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P30_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexLogic
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P31_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalInput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P32_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalOutput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P33_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P34_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh2_P35_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P1_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: Channel
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P2_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: OperationMode
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P3_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalFilter
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P4_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: PulseInput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P5_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: Direction
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P6_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  2.147483647E+9,                      /* Expression: InitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P7_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: LoadInitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P8_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: SampleTime
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P9_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: PciSlot
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P10_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StartMethod
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P11_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StopMethod
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P12_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearRising
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P13_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearFalling
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P14_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P15_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P16_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetRising
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P17_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetFalling
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P18_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P19_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P20_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P21_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match0Value
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P22_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match1Value
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P23_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P24_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P25_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P26_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P27_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAlarm
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P28_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: OneShotDuration
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P29_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexEnable
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P30_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexLogic
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P31_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalInput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P32_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalOutput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P33_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P34_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */

  /*  Computed Parameter: CNT328MPCICh3_P35_Size
   * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/Unit Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Discrete FIR Filter'
                                        */
  1000.0,                              /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S25>/TSamp'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/Discrete FIR Filter'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Discrete FIR Filter'
                                        */
  1000.0,                              /* Computed Parameter: TSamp_WtEt_o
                                        * Referenced by: '<S26>/TSamp'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S22>/Discrete FIR Filter'
                                        */
  1000.0,                              /* Computed Parameter: TSamp_WtEt_f
                                        * Referenced by: '<S23>/TSamp'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Discrete FIR Filter'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/FT_File_scope'
                                        */

  /*  Computed Parameter: Receive1_P1_Size
   * Referenced by: '<S1>/Receive 1'
   */
  { 1.0, 11.0 },

  /*  Computed Parameter: Receive1_P1
   * Referenced by: '<S1>/Receive 1'
   */
  { 49.0, 57.0, 50.0, 46.0, 49.0, 54.0, 56.0, 46.0, 49.0, 46.0, 50.0 },

  /*  Computed Parameter: Receive1_P2_Size
   * Referenced by: '<S1>/Receive 1'
   */
  { 1.0, 1.0 },
  25000.0,                             /* Expression: ipPort
                                        * Referenced by: '<S1>/Receive 1'
                                        */

  /*  Computed Parameter: Receive1_P3_Size
   * Referenced by: '<S1>/Receive 1'
   */
  { 1.0, 1.0 },
  48.0,                                /* Expression: width
                                        * Referenced by: '<S1>/Receive 1'
                                        */

  /*  Computed Parameter: Receive1_P4_Size
   * Referenced by: '<S1>/Receive 1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S1>/Receive 1'
                                        */

  /*  Computed Parameter: Receive1_P5_Size
   * Referenced by: '<S1>/Receive 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: vblLen
                                        * Referenced by: '<S1>/Receive 1'
                                        */

  /*  Computed Parameter: uSTPORTB_P1_Size
   * Referenced by: '<S16>/1STPORTB '
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: channel
                                        * Referenced by: '<S16>/1STPORTB '
                                        */

  /*  Computed Parameter: uSTPORTB_P2_Size
   * Referenced by: '<S16>/1STPORTB '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S16>/1STPORTB '
                                        */

  /*  Computed Parameter: uSTPORTB_P3_Size
   * Referenced by: '<S16>/1STPORTB '
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<S16>/1STPORTB '
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: uSTPORTB_P4_Size
   * Referenced by: '<S16>/1STPORTB '
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: chip
                                        * Referenced by: '<S16>/1STPORTB '
                                        */

  /*  Computed Parameter: uSTPORTB_P5_Size
   * Referenced by: '<S16>/1STPORTB '
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S16>/1STPORTB '
                                        */

  /*  Computed Parameter: uSTPORTB_P6_Size
   * Referenced by: '<S16>/1STPORTB '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S16>/1STPORTB '
                                        */

  /*  Computed Parameter: uSTPORTB_P7_Size
   * Referenced by: '<S16>/1STPORTB '
   */
  { 1.0, 1.0 },
  155.0,                               /* Expression: control
                                        * Referenced by: '<S16>/1STPORTB '
                                        */

  /*  Computed Parameter: uSTPORTB_P8_Size
   * Referenced by: '<S16>/1STPORTB '
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<S16>/1STPORTB '
                                        */

  /*  Computed Parameter: uSTPORTB1_P1_Size
   * Referenced by: '<S16>/1STPORTB 1'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: channel
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */

  /*  Computed Parameter: uSTPORTB1_P2_Size
   * Referenced by: '<S16>/1STPORTB 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */

  /*  Computed Parameter: uSTPORTB1_P3_Size
   * Referenced by: '<S16>/1STPORTB 1'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<S16>/1STPORTB 1'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: uSTPORTB1_P4_Size
   * Referenced by: '<S16>/1STPORTB 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: chip
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */

  /*  Computed Parameter: uSTPORTB1_P5_Size
   * Referenced by: '<S16>/1STPORTB 1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */

  /*  Computed Parameter: uSTPORTB1_P6_Size
   * Referenced by: '<S16>/1STPORTB 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */

  /*  Computed Parameter: uSTPORTB1_P7_Size
   * Referenced by: '<S16>/1STPORTB 1'
   */
  { 1.0, 1.0 },
  155.0,                               /* Expression: control
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */

  /*  Computed Parameter: uSTPORTB1_P8_Size
   * Referenced by: '<S16>/1STPORTB 1'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */

  /*  Computed Parameter: uSTPORTB2_P1_Size
   * Referenced by: '<S16>/1STPORTB 2'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: channel
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */

  /*  Computed Parameter: uSTPORTB2_P2_Size
   * Referenced by: '<S16>/1STPORTB 2'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */

  /*  Computed Parameter: uSTPORTB2_P3_Size
   * Referenced by: '<S16>/1STPORTB 2'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<S16>/1STPORTB 2'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: uSTPORTB2_P4_Size
   * Referenced by: '<S16>/1STPORTB 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: chip
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */

  /*  Computed Parameter: uSTPORTB2_P5_Size
   * Referenced by: '<S16>/1STPORTB 2'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */

  /*  Computed Parameter: uSTPORTB2_P6_Size
   * Referenced by: '<S16>/1STPORTB 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */

  /*  Computed Parameter: uSTPORTB2_P7_Size
   * Referenced by: '<S16>/1STPORTB 2'
   */
  { 1.0, 1.0 },
  155.0,                               /* Expression: control
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */

  /*  Computed Parameter: uSTPORTB2_P8_Size
   * Referenced by: '<S16>/1STPORTB 2'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/DynAna_File_scope'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/sys_stat'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S16>/Gain'
                                        */

  /*  Computed Parameter: PCIDDA0812_P1_Size
   * Referenced by: '<S16>/PCI-DDA08 12 '
   */
  { 1.0, 3.0 },

  /*  Expression: channel
   * Referenced by: '<S16>/PCI-DDA08 12 '
   */
  { 1.0, 2.0, 3.0 },

  /*  Computed Parameter: PCIDDA0812_P2_Size
   * Referenced by: '<S16>/PCI-DDA08 12 '
   */
  { 1.0, 3.0 },

  /*  Expression: range
   * Referenced by: '<S16>/PCI-DDA08 12 '
   */
  { -10.0, -10.0, -10.0 },

  /*  Computed Parameter: PCIDDA0812_P3_Size
   * Referenced by: '<S16>/PCI-DDA08 12 '
   */
  { 1.0, 3.0 },

  /*  Expression: reset
   * Referenced by: '<S16>/PCI-DDA08 12 '
   */
  { 1.0, 1.0, 1.0 },

  /*  Computed Parameter: PCIDDA0812_P4_Size
   * Referenced by: '<S16>/PCI-DDA08 12 '
   */
  { 1.0, 3.0 },

  /*  Expression: initValue
   * Referenced by: '<S16>/PCI-DDA08 12 '
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA0812_P5_Size
   * Referenced by: '<S16>/PCI-DDA08 12 '
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */

  /*  Computed Parameter: PCIDDA0812_P6_Size
   * Referenced by: '<S16>/PCI-DDA08 12 '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: pci_dev
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */

  /*  Computed Parameter: PCIDDA0812_P7_Size
   * Referenced by: '<S16>/PCI-DDA08 12 '
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: boardType
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */

  /*  Expression: ones(3,1)
   * Referenced by: '<S2>/Enable Motors'
   */
  { 1.0, 1.0, 1.0 },

  /*  Computed Parameter: PCIDDA0812toPORTA_P1_Size
   * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
   */
  { 1.0, 3.0 },

  /*  Expression: channel
   * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
   */
  { 1.0, 3.0, 5.0 },

  /*  Computed Parameter: PCIDDA0812toPORTA_P2_Size
   * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */

  /*  Computed Parameter: PCIDDA0812toPORTA_P3_Size
   * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
   */
  { 1.0, 3.0 },

  /*  Expression: reset
   * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
   */
  { 1.0, 1.0, 1.0 },

  /*  Computed Parameter: PCIDDA0812toPORTA_P4_Size
   * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
   */
  { 1.0, 3.0 },

  /*  Expression: initValue
   * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA0812toPORTA_P5_Size
   * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA0812toPORTA_P6_Size
   * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chip
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */

  /*  Computed Parameter: PCIDDA0812toPORTA_P7_Size
   * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */

  /*  Computed Parameter: PCIDDA0812toPORTA_P8_Size
   * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */

  /*  Computed Parameter: PCIDDA0812toPORTA_P9_Size
   * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
   */
  { 1.0, 1.0 },
  139.0,                               /* Expression: control
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */

  /*  Computed Parameter: PCIDDA0812toPORTA_P10_Size
   * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
   */
  { 1.0, 1.0 },
  7.0                                  /* Expression: boardType
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
};
