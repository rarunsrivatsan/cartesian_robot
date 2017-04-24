/*
 * test2_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "test2".
 *
 * Model version              : 1.71
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Fri Dec 16 02:58:05 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "test2.h"
#include "test2_private.h"

/* Block parameters (auto storage) */
P_test2_T test2_P = {
  /*  Computed Parameter: CNT328MPCI1_P1_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: Channel
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P2_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: OperationMode
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P3_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalFilter
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P4_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: PulseInput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P5_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: Direction
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P6_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  2.147483648E+9,                      /* Expression: InitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P7_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: LoadInitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P8_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0001,                              /* Expression: SampleTime
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P9_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 2.0 },

  /*  Expression: PciSlot
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 4.0, 5.0 },

  /*  Computed Parameter: CNT328MPCI1_P10_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StartMethod
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P11_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StopMethod
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P12_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearRising
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P13_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearFalling
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P14_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P15_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P16_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetRising
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P17_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetFalling
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P18_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P19_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P20_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P21_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match0Value
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P22_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match1Value
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P23_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P24_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P25_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P26_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P27_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAlarm
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P28_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: OneShotDuration
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P29_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexEnable
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P30_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexLogic
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P31_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalInput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P32_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalOutput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P33_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P34_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P35_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  2.147483648E+9,                      /* Expression: 2^31
                                        * Referenced by: '<Root>/encoder offsets1'
                                        */
  0.0024177949709864605,               /* Expression: 200/82720
                                        * Referenced by: '<Root>/count_to_rev2'
                                        */

  /*  Computed Parameter: PCIDDA08121_P1_Size
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P2_Size
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P3_Size
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08121_P4_Size
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P5_Size
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P6_Size
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<Root>/PCI-DDA08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P7_Size
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 1.0 },
  155.0,                               /* Expression: control
                                        * Referenced by: '<Root>/PCI-DDA08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P8_Size
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P1_Size_b
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P2_Size_d
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P3_Size_i
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: reset
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P4_Size_f
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initValue
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P5_Size_g
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08121_P6_Size_k
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P7_Size_n
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P8_Size_k
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P9_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  139.0,                               /* Expression: control
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P10_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08123_P1_Size
   * Referenced by: '<Root>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P2_Size
   * Referenced by: '<Root>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P3_Size
   * Referenced by: '<Root>/PCI-DDA08 12 3'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<Root>/PCI-DDA08 12 3'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08123_P4_Size
   * Referenced by: '<Root>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P5_Size
   * Referenced by: '<Root>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P6_Size
   * Referenced by: '<Root>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P7_Size
   * Referenced by: '<Root>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  155.0,                               /* Expression: control
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P8_Size
   * Referenced by: '<Root>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08122_P1_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 2'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA 08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08122_P2_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA 08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08122_P3_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: reset
                                        * Referenced by: '<Root>/PCI-DDA 08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08122_P4_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initValue
                                        * Referenced by: '<Root>/PCI-DDA 08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08122_P5_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 2'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<Root>/PCI-DDA 08 12 2'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08122_P6_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA 08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08122_P7_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 2'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA 08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08122_P8_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<Root>/PCI-DDA 08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08122_P9_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 2'
   */
  { 1.0, 1.0 },
  139.0,                               /* Expression: control
                                        * Referenced by: '<Root>/PCI-DDA 08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08122_P10_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 2'
   */
  { 1.0, 1.0 },
  7.0                                  /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA 08 12 2'
                                        */
};
