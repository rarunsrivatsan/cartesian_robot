/*
 * Pos_PID_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Pos_PID".
 *
 * Model version              : 1.399
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Sat Jan 14 16:44:14 2017
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
  0.05,                                /* Variable: amp
                                        * Referenced by: '<Root>/Reference Force'
                                        */
  -0.06,                               /* Variable: bias
                                        * Referenced by: '<Root>/Reference Force'
                                        */
  0.5,                                 /* Variable: db_x
                                        * Referenced by: '<S6>/Constant3'
                                        */
  2.0,                                 /* Variable: db_y
                                        * Referenced by: '<S11>/Constant3'
                                        */
  0.01,                                /* Variable: db_z
                                        * Referenced by: '<S16>/Constant3'
                                        */
  4.0,                                 /* Variable: f
                                        * Referenced by: '<Root>/Reference Force'
                                        */
  1.2,                                 /* Variable: kdx
                                        * Referenced by: '<S4>/Derivative Gain'
                                        */
  4.0,                                 /* Variable: kdy
                                        * Referenced by: '<S9>/Derivative Gain'
                                        */
  0.55,                                /* Variable: kdz
                                        * Referenced by: '<S14>/Derivative Gain'
                                        */
  3.5,                                 /* Variable: kix
                                        * Referenced by: '<S4>/Integral Gain'
                                        */
  1.9,                                 /* Variable: kiy
                                        * Referenced by: '<S9>/Integral Gain'
                                        */
  10.0,                                /* Variable: kiz
                                        * Referenced by: '<S14>/Integral Gain'
                                        */
  85.0,                                /* Variable: kpx
                                        * Referenced by: '<S4>/Proportional Gain'
                                        */
  485.0,                               /* Variable: kpy
                                        * Referenced by: '<S9>/Proportional Gain'
                                        */
  2.5,                                 /* Variable: kpz
                                        * Referenced by: '<S14>/Proportional Gain'
                                        */

  /*  Variable: xpos
   * Referenced by: '<S5>/X Matrix output'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /*  Variable: ypos
   * Referenced by: '<S10>/Y Matrix output'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  3U,                                  /* Variable: hitcount_x
                                        * Referenced by: '<S6>/Counter'
                                        */
  3U,                                  /* Variable: hitcount_y
                                        * Referenced by: '<S11>/Counter'
                                        */
  10U,                                 /* Variable: hitcount_z
                                        * Referenced by: '<S16>/Counter'
                                        */
  100.0,                               /* Mask Parameter: XController_N
                                        * Referenced by: '<S4>/Filter Coefficient'
                                        */
  100.0,                               /* Mask Parameter: YController_N
                                        * Referenced by: '<S9>/Filter Coefficient'
                                        */
  100.0,                               /* Mask Parameter: ZController_N
                                        * Referenced by: '<S14>/Filter Coefficient'
                                        */
  20U,                                 /* Mask Parameter: XMatrixCounter_HitValue
                                        * Referenced by: '<S5>/X Matrix Counter'
                                        */
  20U,                                 /* Mask Parameter: YMatrixCounter_HitValue
                                        * Referenced by: '<S10>/Y Matrix Counter'
                                        */
  0U,                                  /* Mask Parameter: XMatrixCounter_InitialCount
                                        * Referenced by: '<S5>/X Matrix Counter'
                                        */
  0U,                                  /* Mask Parameter: Counter_InitialCount
                                        * Referenced by: '<S6>/Counter'
                                        */
  0U,                                  /* Mask Parameter: YMatrixCounter_InitialCount
                                        * Referenced by: '<S10>/Y Matrix Counter'
                                        */
  0U,                                  /* Mask Parameter: Counter_InitialCount_d
                                        * Referenced by: '<S11>/Counter'
                                        */
  0U,                                  /* Mask Parameter: Counter_InitialCount_b
                                        * Referenced by: '<S16>/Counter'
                                        */
  0,                                   /* Mask Parameter: XFlipflop_initial_condition
                                        * Referenced by: '<S19>/Memory'
                                        */
  0,                                   /* Mask Parameter: YFlipflop_initial_condition
                                        * Referenced by: '<S20>/Memory'
                                        */
  0,                                   /* Mask Parameter: ZFlipflop_initial_condition
                                        * Referenced by: '<S21>/Memory'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P1_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: Channel
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P2_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: OperationMode
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P3_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalFilter
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P4_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: PulseInput
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P5_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: Direction
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P6_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  2.147483648E+9,                      /* Expression: InitialValue
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P7_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: LoadInitialValue
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P8_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: SampleTime
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P9_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 2.0 },

  /*  Expression: PciSlot
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 4.0, 5.0 },

  /*  Computed Parameter: CNT328MPCI2_P10_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StartMethod
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P11_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StopMethod
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P12_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearRising
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P13_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearFalling
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P14_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch0
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P15_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch1
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P16_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetRising
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P17_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetFalling
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P18_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch0
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P19_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch1
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P20_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetValue
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P21_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match0Value
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P22_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match1Value
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P23_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch0
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P24_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch1
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P25_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P26_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P27_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAlarm
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P28_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: OneShotDuration
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P29_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexEnable
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P30_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexLogic
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P31_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalInput
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P32_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalOutput
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P33_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P34_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P35_Size
   * Referenced by: '<S8>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/CNT32-8M(PCI) 2'
                                        */
  2.147483648E+9,                      /* Expression: 2^31
                                        * Referenced by: '<S8>/encoder offsets2'
                                        */
  0.0024012774796191576,               /* Expression: 200/83289
                                        * Referenced by: '<S8>/count_to_mm1'
                                        */

  /*  Expression: [0:20]
   * Referenced by: '<S5>/X Matrix output'
   */
  { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0,
    14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0 },
  0.0,                                 /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S4>/Integrator'
                                        */
  0.0,                                 /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S4>/Filter'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P1_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: Channel
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P2_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: OperationMode
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P3_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalFilter
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P4_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: PulseInput
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P5_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: Direction
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P6_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  2.147483648E+9,                      /* Expression: InitialValue
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P7_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: LoadInitialValue
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P8_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: SampleTime
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P9_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 2.0 },

  /*  Expression: PciSlot
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 4.0, 5.0 },

  /*  Computed Parameter: CNT328MPCI1_P10_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StartMethod
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P11_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StopMethod
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P12_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearRising
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P13_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearFalling
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P14_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch0
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P15_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch1
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P16_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetRising
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P17_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetFalling
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P18_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch0
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P19_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch1
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P20_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetValue
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P21_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match0Value
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P22_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match1Value
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P23_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch0
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P24_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch1
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P25_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P26_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P27_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAlarm
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P28_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: OneShotDuration
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P29_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexEnable
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P30_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexLogic
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P31_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalInput
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P32_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalOutput
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P33_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P34_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P35_Size
   * Referenced by: '<S13>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S13>/CNT32-8M(PCI) 1'
                                        */
  2.147483648E+9,                      /* Expression: 2^31
                                        * Referenced by: '<S13>/encoder offsets1'
                                        */
  0.0024177949709864605,               /* Expression: 200/82720
                                        * Referenced by: '<S13>/count_to_mm'
                                        */

  /*  Expression: [0:20]
   * Referenced by: '<S10>/Y Matrix output'
   */
  { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0,
    14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0 },
  0.0,                                 /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S9>/Integrator'
                                        */
  0.0,                                 /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S9>/Filter'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S16>/Constant'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S7>/Voltage1'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S12>/Voltage'
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
  0.025130095443337479,                /* Computed Parameter: ReferenceForce_Hsin
                                        * Referenced by: '<Root>/Reference Force'
                                        */
  0.99968418928329994,                 /* Computed Parameter: ReferenceForce_HCos
                                        * Referenced by: '<Root>/Reference Force'
                                        */
  -0.025130095443337479,               /* Computed Parameter: ReferenceForce_PSin
                                        * Referenced by: '<Root>/Reference Force'
                                        */
  0.99968418928329994,                 /* Computed Parameter: ReferenceForce_PCos
                                        * Referenced by: '<Root>/Reference Force'
                                        */
  0.0,                                 /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S14>/Integrator'
                                        */
  0.0,                                 /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S14>/Filter'
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
   * Referenced by: '<S7>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: channel
                                        * Referenced by: '<S7>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P2_Size
   * Referenced by: '<S7>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S7>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P3_Size
   * Referenced by: '<S7>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: reset
                                        * Referenced by: '<S7>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P4_Size
   * Referenced by: '<S7>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initValue
                                        * Referenced by: '<S7>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P5_Size
   * Referenced by: '<S7>/PCI-DDA 08 12 4'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<S7>/PCI-DDA 08 12 4'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08124_P6_Size
   * Referenced by: '<S7>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chip
                                        * Referenced by: '<S7>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P7_Size
   * Referenced by: '<S7>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S7>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P8_Size
   * Referenced by: '<S7>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S7>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P9_Size
   * Referenced by: '<S7>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  139.0,                               /* Expression: control
                                        * Referenced by: '<S7>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P10_Size
   * Referenced by: '<S7>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<S7>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08123_P1_Size
   * Referenced by: '<S12>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: channel
                                        * Referenced by: '<S12>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P2_Size
   * Referenced by: '<S12>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S12>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P3_Size
   * Referenced by: '<S12>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: reset
                                        * Referenced by: '<S12>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P4_Size
   * Referenced by: '<S12>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initValue
                                        * Referenced by: '<S12>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P5_Size
   * Referenced by: '<S12>/PCI-DDA 08 12 3'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<S12>/PCI-DDA 08 12 3'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08123_P6_Size
   * Referenced by: '<S12>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chip
                                        * Referenced by: '<S12>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P7_Size
   * Referenced by: '<S12>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S12>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P8_Size
   * Referenced by: '<S12>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S12>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P9_Size
   * Referenced by: '<S12>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  139.0,                               /* Expression: control
                                        * Referenced by: '<S12>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P10_Size
   * Referenced by: '<S12>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<S12>/PCI-DDA 08 12 3'
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
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory2'
                                        */
  0,                                   /* Computed Parameter: UnitDelay2_InitialCondition
                                        * Referenced by: '<S5>/Unit Delay2'
                                        */
  0,                                   /* Computed Parameter: UnitDelay_InitialCondition
                                        * Referenced by: '<S6>/Unit Delay'
                                        */
  0,                                   /* Computed Parameter: UnitDelay_InitialCondition_f
                                        * Referenced by: '<S2>/Unit Delay'
                                        */

  /*  Computed Parameter: Logic_table
   * Referenced by: '<S19>/Logic'
   */
  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,                                   /* Computed Parameter: UnitDelay1_InitialCondition
                                        * Referenced by: '<S10>/Unit Delay1'
                                        */
  0,                                   /* Computed Parameter: UnitDelay_InitialCondition_m
                                        * Referenced by: '<S11>/Unit Delay'
                                        */

  /*  Computed Parameter: Logic_table_j
   * Referenced by: '<S20>/Logic'
   */
  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },

  /*  Computed Parameter: Logic_table_m
   * Referenced by: '<S21>/Logic'
   */
  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,                                   /* Computed Parameter: UnitDelay_InitialCondition_mb
                                        * Referenced by: '<S16>/Unit Delay'
                                        */
  0                                    /* Computed Parameter: DataStoreMemory3_InitialValue
                                        * Referenced by: '<Root>/Data Store Memory3'
                                        */
};
