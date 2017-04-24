/*
 * Registration_Estimation_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Registration_Estimation".
 *
 * Model version              : 1.284
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Fri Dec 09 01:53:14 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Registration_Estimation.h"
#include "Registration_Estimation_private.h"

/* Block parameters (auto storage) */
P_Registration_Estimation_T Registration_Estimation_P = {
  /*  Computed Parameter: Receive1_P1_Size
   * Referenced by: '<Root>/Receive 1'
   */
  { 1.0, 11.0 },

  /*  Computed Parameter: Receive1_P1
   * Referenced by: '<Root>/Receive 1'
   */
  { 49.0, 57.0, 50.0, 46.0, 49.0, 54.0, 56.0, 46.0, 49.0, 46.0, 50.0 },

  /*  Computed Parameter: Receive1_P2_Size
   * Referenced by: '<Root>/Receive 1'
   */
  { 1.0, 1.0 },
  25000.0,                             /* Expression: ipPort
                                        * Referenced by: '<Root>/Receive 1'
                                        */

  /*  Computed Parameter: Receive1_P3_Size
   * Referenced by: '<Root>/Receive 1'
   */
  { 1.0, 1.0 },
  48.0,                                /* Expression: width
                                        * Referenced by: '<Root>/Receive 1'
                                        */

  /*  Computed Parameter: Receive1_P4_Size
   * Referenced by: '<Root>/Receive 1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/Receive 1'
                                        */

  /*  Computed Parameter: Receive1_P5_Size
   * Referenced by: '<Root>/Receive 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: vblLen
                                        * Referenced by: '<Root>/Receive 1'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P1_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: Channel
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P2_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: OperationMode
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P3_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalFilter
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P4_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: PulseInput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P5_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: Direction
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P6_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  2.147483648E+9,                      /* Expression: InitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P7_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: LoadInitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P8_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: SampleTime
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P9_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 2.0 },

  /*  Expression: PciSlot
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 4.0, 5.0 },

  /*  Computed Parameter: CNT328MPCI3_P10_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StartMethod
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P11_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StopMethod
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P12_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearRising
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P13_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearFalling
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P14_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P15_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P16_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetRising
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P17_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetFalling
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P18_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P19_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P20_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P21_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match0Value
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P22_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match1Value
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P23_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P24_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P25_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P26_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P27_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAlarm
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P28_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: OneShotDuration
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P29_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexEnable
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P30_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexLogic
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P31_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalInput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P32_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalOutput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P33_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P34_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */

  /*  Computed Parameter: CNT328MPCI3_P35_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  2.147483648E+9,                      /* Expression: 2^31
                                        * Referenced by: '<Root>/encoder offsets3'
                                        */
  0.0024177949709864605,               /* Expression: 200/82720
                                        * Referenced by: '<Root>/count_to_mm2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P1_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: Channel
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P2_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: OperationMode
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P3_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalFilter
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P4_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: PulseInput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P5_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: Direction
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P6_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  2.147483648E+9,                      /* Expression: InitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P7_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: LoadInitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P8_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: SampleTime
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P9_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 2.0 },

  /*  Expression: PciSlot
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 4.0, 5.0 },

  /*  Computed Parameter: CNT328MPCI2_P10_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StartMethod
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P11_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: StopMethod
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P12_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearRising
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P13_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearFalling
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P14_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P15_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ZeroClearMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P16_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetRising
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P17_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetFalling
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P18_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P19_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P20_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: PresetValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P21_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match0Value
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P22_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: Match1Value
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P23_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P24_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P25_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P26_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P27_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: OutputSignalAlarm
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P28_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: OneShotDuration
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P29_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexEnable
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P30_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: IndexLogic
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P31_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalInput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P32_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: EnableDigitalOutput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P33_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P34_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */

  /*  Computed Parameter: CNT328MPCI2_P35_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  2.147483648E+9,                      /* Expression: 2^31
                                        * Referenced by: '<Root>/encoder offsets2'
                                        */
  0.0024012774796191576,               /* Expression: 200/83289
                                        * Referenced by: '<Root>/count_to_mm1'
                                        */

  /*  Computed Parameter: CNT328MPCI1_P1_Size
   * Referenced by: '<Root>/CNT32-8M(PCI) 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: Channel
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
  0.001,                               /* Expression: SampleTime
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
                                        * Referenced by: '<Root>/count_to_mm'
                                        */
  2.5,                                 /* Expression: 2.5
                                        * Referenced by: '<Root>/Voltage1'
                                        */
  2.5,                                 /* Expression: 2.5
                                        * Referenced by: '<Root>/Voltage'
                                        */

  /*  Computed Parameter: PCIDDA08123_P1_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P2_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P3_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: reset
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P4_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initValue
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P5_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08123_P6_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P7_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P8_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P9_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  139.0,                               /* Expression: control
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P10_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08124_P1_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P2_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P3_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: reset
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P4_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initValue
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P5_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 4'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<Root>/PCI-DDA 08 12 4'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08124_P6_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P7_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P8_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P9_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  139.0,                               /* Expression: control
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08124_P10_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 4'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */

  /*  Computed Parameter: PCIDDA08125_P1_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 5'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */

  /*  Computed Parameter: PCIDDA08125_P2_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */

  /*  Computed Parameter: PCIDDA08125_P3_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: reset
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */

  /*  Computed Parameter: PCIDDA08125_P4_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 5'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initValue
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */

  /*  Computed Parameter: PCIDDA08125_P5_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 5'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<Root>/PCI-DDA 08 12 5'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08125_P6_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */

  /*  Computed Parameter: PCIDDA08125_P7_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 5'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */

  /*  Computed Parameter: PCIDDA08125_P8_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 5'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */

  /*  Computed Parameter: PCIDDA08125_P9_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 5'
   */
  { 1.0, 1.0 },
  139.0,                               /* Expression: control
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */

  /*  Computed Parameter: PCIDDA08125_P10_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 5'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  2.5,                                 /* Expression: 2.5
                                        * Referenced by: '<Root>/Voltage2'
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
  40.0,                                /* Expression: 40
                                        * Referenced by: '<Root>/Data Store Memory'
                                        */
  40.0,                                /* Expression: 40
                                        * Referenced by: '<Root>/Data Store Memory1'
                                        */
  20.0,                                /* Expression: 20
                                        * Referenced by: '<Root>/Data Store Memory2'
                                        */
  -1.0                                 /* Expression: -1
                                        * Referenced by: '<Root>/Data Store Memory3'
                                        */
};
