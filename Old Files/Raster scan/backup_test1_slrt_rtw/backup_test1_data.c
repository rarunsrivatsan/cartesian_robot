/*
 * backup_test1_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "backup_test1".
 *
 * Model version              : 1.147
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Mon Nov 28 16:40:16 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "backup_test1.h"
#include "backup_test1_private.h"

/* Block parameters (auto storage) */
P_backup_test1_T backup_test1_P = {
  2.5,                                 /* Expression: 2.5
                                        * Referenced by: '<Root>/Constant'
                                        */

  /*  Computed Parameter: PCIDDA0812_P1_Size
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 2.0 },

  /*  Expression: channel
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 2.0 },

  /*  Computed Parameter: PCIDDA0812_P2_Size
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 2.0 },

  /*  Expression: range
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { -10.0, -10.0 },

  /*  Computed Parameter: PCIDDA0812_P3_Size
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 2.0 },

  /*  Expression: reset
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 1.0 },

  /*  Computed Parameter: PCIDDA0812_P4_Size
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 1.0, 2.0 },

  /*  Expression: initValue
   * Referenced by: '<Root>/PCI-DDA08 12 '
   */
  { 0.0, 0.0 },

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
