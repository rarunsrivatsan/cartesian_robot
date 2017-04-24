/*
 * Pos_PID_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Pos_PID".
 *
 * Model version              : 1.391
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Sat Apr 22 17:30:15 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Pos_PID.h"
#include "Pos_PID_private.h"

/* Block parameters (auto storage) */
P_Pos_PID_T Pos_PID_P = {
  0.5,                                 /* Variable: db_x
                                        * Referenced by: '<Root>/Constant3'
                                        */
  2.0,                                 /* Variable: db_y
                                        * Referenced by: '<S12>/Constant3'
                                        */
  0.01,                                /* Variable: db_z
                                        * Referenced by: '<S16>/Constant3'
                                        */
  1.2,                                 /* Variable: kdx
                                        * Referenced by: '<S3>/Derivative Gain'
                                        */
  4.0,                                 /* Variable: kdy
                                        * Referenced by: '<S4>/Derivative Gain'
                                        */
  0.55,                                /* Variable: kdz
                                        * Referenced by: '<S5>/Derivative Gain'
                                        */
  3.5,                                 /* Variable: kix
                                        * Referenced by: '<S3>/Integral Gain'
                                        */
  1.9,                                 /* Variable: kiy
                                        * Referenced by: '<S4>/Integral Gain'
                                        */
  10.0,                                /* Variable: kiz
                                        * Referenced by: '<S5>/Integral Gain'
                                        */
  85.0,                                /* Variable: kpx
                                        * Referenced by: '<S3>/Proportional Gain'
                                        */
  485.0,                               /* Variable: kpy
                                        * Referenced by: '<S4>/Proportional Gain'
                                        */
  2.5,                                 /* Variable: kpz
                                        * Referenced by: '<S5>/Proportional Gain'
                                        */

  /*  Variable: xpos
   * Referenced by: '<S8>/X Matrix output'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 10.0, 10.0, 10.0,
    10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0 },

  /*  Variable: ypos
   * Referenced by: '<S11>/Y Matrix output'
   */
  { -5.0, -15.0, -25.0, -35.0, -45.0, -55.0, -45.0, -35.0, -25.0, -15.0, -5.0,
    5.0, 15.0, 25.0, 35.0, 45.0, 55.0, 45.0, 30.0, 15.0, 0.0 },

  /*  Variable: zpos
   * Referenced by: '<S15>/Z Matrix output'
   */
  { 5.0, 10.0, 15.0, 20.0, 25.0, 30.0, 35.0, 40.0, 45.0, 50.0, 55.0 },
  100.0,                               /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S3>/Filter Coefficient'
                                        */
  100.0,                               /* Mask Parameter: PIDController1_N
                                        * Referenced by: '<S4>/Filter Coefficient'
                                        */
  100.0,                               /* Mask Parameter: PIDController2_N
                                        * Referenced by: '<S5>/Filter Coefficient'
                                        */
  1U,                                  /* Mask Parameter: Counter_HitValue
                                        * Referenced by: '<S6>/Counter'
                                        */
  0U,                                  /* Mask Parameter: XMatrixCounter_InitialCount
                                        * Referenced by: '<S8>/X Matrix Counter'
                                        */
  0U,                                  /* Mask Parameter: YMatrixCounter_InitialCount
                                        * Referenced by: '<S11>/Y Matrix Counter'
                                        */
  0U,                                  /* Mask Parameter: ZMatrixCounter_InitialCount
                                        * Referenced by: '<S15>/Z Matrix Counter'
                                        */
  0U,                                  /* Mask Parameter: Counter_InitialCount
                                        * Referenced by: '<S6>/Counter'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P1_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: Channel
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P2_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: OperationMode
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P3_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalFilter
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P4_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: PulseInput
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P5_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: Direction
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P6_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  2.147483648E+9,                      /* Expression: InitialValue
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P7_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: LoadInitialValue
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P8_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: SampleTime
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P9_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 2.0 },

  /*  Expression: PciSlot
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 4.0, 5.0 },

  /*  Computed Parameter: CNT328MPCI2_P10_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StartMethod
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P11_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StopMethod
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P12_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearRising
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P13_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearFalling
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P14_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch0
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P15_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch1
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P16_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetRising
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P17_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetFalling
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P18_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch0
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P19_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch1
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P20_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetValue
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P21_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match0Value
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P22_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match1Value
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P23_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch0
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P24_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch1
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P25_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P26_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P27_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAlarm
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P28_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: OneShotDuration
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P29_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexEnable
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P30_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexLogic
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P31_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalInput
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P32_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalOutput
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P33_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P34_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P35_Size
   * Referenced by: '<S10>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/CNT32-8M(PCI) 2'
                                        */
  2.147483648E+9,                      /* Expression: 2^31
                                        * Referenced by: '<S10>/encoder offsets2'
                                        */
  0.0024012774796191576,               /* Expression: 200/83289
                                        * Referenced by: '<S10>/count_to_mm1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/X Matrix output'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P1_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: Channel
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P2_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: OperationMode
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P3_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalFilter
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P4_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: PulseInput
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P5_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: Direction
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P6_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  2.147483648E+9,                      /* Expression: InitialValue
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P7_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: LoadInitialValue
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P8_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: SampleTime
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P9_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 2.0 },

  /*  Expression: PciSlot
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 4.0, 5.0 },

  /*  Computed Parameter: CNT328MPCI1_P10_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StartMethod
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P11_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StopMethod
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P12_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearRising
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P13_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearFalling
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P14_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch0
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P15_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch1
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P16_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetRising
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P17_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetFalling
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P18_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch0
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P19_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch1
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P20_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetValue
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P21_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match0Value
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P22_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match1Value
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P23_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch0
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P24_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch1
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P25_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P26_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P27_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAlarm
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P28_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: OneShotDuration
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P29_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexEnable
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P30_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexLogic
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P31_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalInput
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P32_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalOutput
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P33_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P34_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P35_Size
   * Referenced by: '<S14>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/CNT32-8M(PCI) 1'
                                        */
  2.147483648E+9,                      /* Expression: 2^31
                                        * Referenced by: '<S14>/encoder offsets1'
                                        */
  0.0024177949709864605,               /* Expression: 200/82720
                                        * Referenced by: '<S14>/count_to_mm'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/Y Matrix output'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P1_Size_h
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: Channel
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P2_Size_l
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: OperationMode
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P3_Size_b
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalFilter
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P4_Size_g
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: PulseInput
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P5_Size_m
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: Direction
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P6_Size_n
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  2.147483648E+9,                      /* Expression: InitialValue
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P7_Size_d
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: LoadInitialValue
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P8_Size_i
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: SampleTime
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P9_Size_a
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 2.0 },

  /*  Expression: PciSlot
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 4.0, 5.0 },

  /*  Computed Parameter: CNT328MPCI1_P10_Size_h
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StartMethod
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P11_Size_j
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StopMethod
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P12_Size_n
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearRising
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P13_Size_a
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearFalling
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P14_Size_e
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch0
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P15_Size_d
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch1
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P16_Size_i
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetRising
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P17_Size_c
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetFalling
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P18_Size_i
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch0
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P19_Size_j
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch1
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P20_Size_e
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetValue
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P21_Size_e
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match0Value
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P22_Size_p
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match1Value
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P23_Size_k
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch0
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P24_Size_k
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch1
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P25_Size_m
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P26_Size_m
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P27_Size_a
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAlarm
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P28_Size_i
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: OneShotDuration
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P29_Size_b
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexEnable
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P30_Size_o
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexLogic
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P31_Size_j
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalInput
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P32_Size_n
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalOutput
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P33_Size_a
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P34_Size_l
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P35_Size_b
   * Referenced by: '<S18>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/CNT32-8M(PCI) 1'
                                        */
  2.147483648E+9,                      /* Expression: 2^31
                                        * Referenced by: '<S18>/encoder offsets1'
                                        */
  0.0024177949709864605,               /* Expression: 200/82720
                                        * Referenced by: '<S18>/count_to_mm'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/Z Matrix output'
                                        */
  0.0,                                 /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S3>/Integrator'
                                        */
  0.0,                                 /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S3>/Filter'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S9>/Voltage1'
                                        */
  0.0,                                 /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S4>/Integrator'
                                        */
  0.0,                                 /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S4>/Filter'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S13>/Voltage'
                                        */
  0.0,                                 /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S5>/Integrator'
                                        */
  0.0,                                 /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S5>/Filter'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S17>/Voltage2'
                                        */

  /*  Computed Parameter: PCIDDA0812_P1_Size
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 3.0 },

  /*  Expression: channel
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 2.0, 3.0 },

  /*  Computed Parameter: PCIDDA0812_P2_Size
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 3.0 },

  /*  Expression: range
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { -10.0, -10.0, -10.0 },

  /*  Computed Parameter: PCIDDA0812_P3_Size
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 3.0 },

  /*  Expression: reset
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 1.0, 1.0 },

  /*  Computed Parameter: PCIDDA0812_P4_Size
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 3.0 },

  /*  Expression: initValue
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA0812_P5_Size
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */

  /*  Computed Parameter: PCIDDA0812_P6_Size
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: pci_dev
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */

  /*  Computed Parameter: PCIDDA0812_P7_Size
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */

  /*  Computed Parameter: PCIDDA08124_P1_Size
   * Referenced by: '<S9>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: channel
                                        * Referenced by: '<S9>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P2_Size
   * Referenced by: '<S9>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S9>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P3_Size
   * Referenced by: '<S9>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: reset
                                        * Referenced by: '<S9>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P4_Size
   * Referenced by: '<S9>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initValue
                                        * Referenced by: '<S9>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P5_Size
   * Referenced by: '<S9>/PCI-DDA 08 12 4'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<S9>/PCI-DDA 08 12 4'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08124_P6_Size
   * Referenced by: '<S9>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chip
                                        * Referenced by: '<S9>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P7_Size
   * Referenced by: '<S9>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S9>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P8_Size
   * Referenced by: '<S9>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S9>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P9_Size
   * Referenced by: '<S9>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  139.0,                               /* Expression: control
                                        * Referenced by: '<S9>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P10_Size
   * Referenced by: '<S9>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<S9>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08123_P1_Size
   * Referenced by: '<S13>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: channel
                                        * Referenced by: '<S13>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P2_Size
   * Referenced by: '<S13>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S13>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P3_Size
   * Referenced by: '<S13>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: reset
                                        * Referenced by: '<S13>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P4_Size
   * Referenced by: '<S13>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initValue
                                        * Referenced by: '<S13>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P5_Size
   * Referenced by: '<S13>/PCI-DDA 08 12 3'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<S13>/PCI-DDA 08 12 3'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08123_P6_Size
   * Referenced by: '<S13>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chip
                                        * Referenced by: '<S13>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P7_Size
   * Referenced by: '<S13>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S13>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P8_Size
   * Referenced by: '<S13>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S13>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P9_Size
   * Referenced by: '<S13>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  139.0,                               /* Expression: control
                                        * Referenced by: '<S13>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P10_Size
   * Referenced by: '<S13>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<S13>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P1_Size_o
   * Referenced by: '<S17>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: channel
                                        * Referenced by: '<S17>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P2_Size_f
   * Referenced by: '<S17>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S17>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P3_Size_j
   * Referenced by: '<S17>/PCI-DDA08 12 3'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<S17>/PCI-DDA08 12 3'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08123_P4_Size_h
   * Referenced by: '<S17>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: chip
                                        * Referenced by: '<S17>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P5_Size_n
   * Referenced by: '<S17>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S17>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P6_Size_j
   * Referenced by: '<S17>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S17>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P7_Size_e
   * Referenced by: '<S17>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  155.0,                               /* Expression: control
                                        * Referenced by: '<S17>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P8_Size_f
   * Referenced by: '<S17>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<S17>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08121_P1_Size
   * Referenced by: '<S17>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: channel
                                        * Referenced by: '<S17>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P2_Size
   * Referenced by: '<S17>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S17>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P3_Size
   * Referenced by: '<S17>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: reset
                                        * Referenced by: '<S17>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P4_Size
   * Referenced by: '<S17>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initValue
                                        * Referenced by: '<S17>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P5_Size
   * Referenced by: '<S17>/PCI-DDA 08 12 1'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<S17>/PCI-DDA 08 12 1'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08121_P6_Size
   * Referenced by: '<S17>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chip
                                        * Referenced by: '<S17>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P7_Size
   * Referenced by: '<S17>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S17>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P8_Size
   * Referenced by: '<S17>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S17>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P9_Size
   * Referenced by: '<S17>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  139.0,                               /* Expression: control
                                        * Referenced by: '<S17>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P10_Size
   * Referenced by: '<S17>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<S17>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: Receive1_P1_Size
   * Referenced by: '<S2>/Receive 1'
   */
  { 1.0, 11.0 },

  /*  Computed Parameter: Receive1_P1
   * Referenced by: '<S2>/Receive 1'
   */
  { 49.0, 57.0, 50.0, 46.0, 49.0, 54.0, 56.0, 46.0, 49.0, 46.0, 50.0 },

  /*  Computed Parameter: Receive1_P2_Size
   * Referenced by: '<S2>/Receive 1'
   */
  { 1.0, 1.0 },
  25000.0,                             /* Expression: ipPort
                                        * Referenced by: '<S2>/Receive 1'
                                        */

  /*  Computed Parameter: Receive1_P3_Size
   * Referenced by: '<S2>/Receive 1'
   */
  { 1.0, 1.0 },
  48.0,                                /* Expression: width
                                        * Referenced by: '<S2>/Receive 1'
                                        */

  /*  Computed Parameter: Receive1_P4_Size
   * Referenced by: '<S2>/Receive 1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S2>/Receive 1'
                                        */

  /*  Computed Parameter: Receive1_P5_Size
   * Referenced by: '<S2>/Receive 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: vblLen
                                        * Referenced by: '<S2>/Receive 1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory2'
                                        */
  0,                                   /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<S6>/Unit Delay'
                                        */
  0                                    /* Computed Parameter: DataStoreMemory3_InitialValue
                                        * Referenced by: '<Root>/Data Store Memory3'
                                        */
};
