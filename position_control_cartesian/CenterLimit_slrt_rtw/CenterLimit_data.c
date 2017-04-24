/*
 * CenterLimit_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "CenterLimit".
 *
 * Model version              : 1.169
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Wed Dec 28 12:42:45 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CenterLimit.h"
#include "CenterLimit_private.h"

/* Block parameters (auto storage) */
P_CenterLimit_T CenterLimit_P = {
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<Root>/Constant'
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

  /*  Computed Parameter: PCIDDA08123_P1_Size
   * Referenced by: '<Root>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P2_Size
   * Referenced by: '<Root>/PCI-DDA08 12 3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
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

  /*  Computed Parameter: PCIDDA08121_P1_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P2_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P3_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: reset
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P4_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initValue
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P5_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08121_P6_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P7_Size
   * Referenced by: '<Root>/PCI-DDA 08 12 1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P8_Size
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

  /*  Computed Parameter: PCIDDA08122_P1_Size
   * Referenced by: '<Root>/PCI-DDA08 12 2'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08122_P2_Size
   * Referenced by: '<Root>/PCI-DDA08 12 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08122_P3_Size
   * Referenced by: '<Root>/PCI-DDA08 12 2'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<Root>/PCI-DDA08 12 2'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08122_P4_Size
   * Referenced by: '<Root>/PCI-DDA08 12 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08122_P5_Size
   * Referenced by: '<Root>/PCI-DDA08 12 2'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08122_P6_Size
   * Referenced by: '<Root>/PCI-DDA08 12 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<Root>/PCI-DDA08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08122_P7_Size
   * Referenced by: '<Root>/PCI-DDA08 12 2'
   */
  { 1.0, 1.0 },
  155.0,                               /* Expression: control
                                        * Referenced by: '<Root>/PCI-DDA08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08122_P8_Size
   * Referenced by: '<Root>/PCI-DDA08 12 2'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA08 12 2'
                                        */

  /*  Computed Parameter: PCIDDA08123_P1_Size_j
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P2_Size_f
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P3_Size_f
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: reset
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P4_Size_g
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initValue
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P5_Size_h
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08123_P6_Size_d
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P7_Size_l
   * Referenced by: '<Root>/PCI-DDA 08 12 3'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */

  /*  Computed Parameter: PCIDDA08123_P8_Size_m
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

  /*  Computed Parameter: PCIDDA08121_P1_Size_n
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P2_Size_o
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P3_Size_c
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 3.0 },

  /*  Expression: ival
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCIDDA08121_P4_Size_l
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P5_Size_e
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P6_Size_g
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<Root>/PCI-DDA08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P7_Size_e
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 1.0 },
  155.0,                               /* Expression: control
                                        * Referenced by: '<Root>/PCI-DDA08 12 1'
                                        */

  /*  Computed Parameter: PCIDDA08121_P8_Size_b
   * Referenced by: '<Root>/PCI-DDA08 12 1'
   */
  { 1.0, 1.0 },
  7.0,                                 /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA08 12 1'
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
  7.0                                  /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
};
