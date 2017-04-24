/*
 * Pos_PID_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Pos_PID".
 *
 * Model version              : 1.390
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Sat Jan 14 22:05:46 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Pos_PID_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "Pos_PID.h"
#include "Pos_PID_capi.h"
#include "Pos_PID_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 1, TARGET_STRING("Deadband pulse counter"),
    TARGET_STRING("pulse"), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Data Store Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 2, 0, TARGET_STRING("Data Store Read1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 3, 0, TARGET_STRING("Data Store Read2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 4, 0, TARGET_STRING("Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 0, TARGET_STRING("Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 7, 0, TARGET_STRING("Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("Sum3"),
    TARGET_STRING("motY"), 0, 0, 0, 0, 1 },

  { 9, 0, TARGET_STRING("Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("Sum5"),
    TARGET_STRING("Z enable"), 0, 0, 0, 0, 1 },

  { 11, 0, TARGET_STRING("Force Subsystem/Byte Unpacking 1"),
    TARGET_STRING("orce Data"), 0, 0, 1, 0, 0 },

  { 12, 0, TARGET_STRING("Force Subsystem/Receive 1/p1"),
    TARGET_STRING(""), 0, 1, 2, 0, 0 },

  { 13, 0, TARGET_STRING("Force Subsystem/Receive 1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("PID Controller/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("PID Controller/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 16, 0, TARGET_STRING("PID Controller/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("PID Controller/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("PID Controller/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 19, 0, TARGET_STRING("PID Controller/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 20, 0, TARGET_STRING("PID Controller/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 21, 0, TARGET_STRING("PID Controller/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 22, 0, TARGET_STRING("PID Controller1/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 0, TARGET_STRING("PID Controller1/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 24, 0, TARGET_STRING("PID Controller1/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 0, TARGET_STRING("PID Controller1/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING("PID Controller1/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 27, 0, TARGET_STRING("PID Controller1/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 28, 0, TARGET_STRING("PID Controller1/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 29, 0, TARGET_STRING("PID Controller1/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 30, 0, TARGET_STRING("PID Controller2/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 0, TARGET_STRING("PID Controller2/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 32, 0, TARGET_STRING("PID Controller2/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 33, 0, TARGET_STRING("PID Controller2/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 34, 0, TARGET_STRING("PID Controller2/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 35, 0, TARGET_STRING("PID Controller2/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 36, 0, TARGET_STRING("PID Controller2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 37, 0, TARGET_STRING("PID Controller2/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 38, 0, TARGET_STRING("System Moving Flag/Logical Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 39, 0, TARGET_STRING("System Moving Flag/Counter"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 40, 0, TARGET_STRING("System Moving Flag/Unit Delay"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 41, 0, TARGET_STRING("X Position Input/Data Store Read5"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 42, 0, TARGET_STRING("X Position Input/Data Type Conversion3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 43, 0, TARGET_STRING("X Position Input/X Matrix output"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 44, 0, TARGET_STRING("X Position Input/X Matrix Counter"),
    TARGET_STRING("X Matrix index"), 0, 0, 0, 0, 0 },

  { 45, 0, TARGET_STRING("X output processing/Abs1"),
    TARGET_STRING("X Enable"), 0, 0, 0, 0, 1 },

  { 46, 0, TARGET_STRING("X output processing/Voltage1"),
    TARGET_STRING("x Voltage"), 0, 0, 0, 0, 1 },

  { 47, 0, TARGET_STRING("X output processing/Sign2"),
    TARGET_STRING("motX"), 0, 0, 0, 0, 1 },

  { 48, 0, TARGET_STRING("X_Encoder/count_to_mm1"),
    TARGET_STRING("X Data"), 0, 0, 0, 0, 0 },

  { 49, 0, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 0 },

  { 50, 0, TARGET_STRING("X_Encoder/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 51, 0, TARGET_STRING("Y Position Input/Data Store Read4"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 52, 0, TARGET_STRING("Y Position Input/Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 53, 0, TARGET_STRING("Y Position Input/Y Matrix output"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 54, 0, TARGET_STRING("Y Position Input/Y Matrix Counter"),
    TARGET_STRING("Y Matrix index"), 0, 0, 0, 0, 0 },

  { 55, 2, TARGET_STRING("Y Position signal/Deadband pulse counter"),
    TARGET_STRING("pulse"), 0, 0, 0, 0, 0 },

  { 56, 0, TARGET_STRING("Y output processing/Abs"),
    TARGET_STRING("Y enable"), 0, 0, 0, 0, 1 },

  { 57, 0, TARGET_STRING("Y output processing/Voltage"),
    TARGET_STRING("VoltageY "), 0, 0, 0, 0, 1 },

  { 58, 0, TARGET_STRING("Y output processing/Sign"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 59, 0, TARGET_STRING("Y_encoder /count_to_mm"),
    TARGET_STRING("Y Data"), 0, 0, 0, 0, 0 },

  { 60, 0, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 0 },

  { 61, 0, TARGET_STRING("Y_encoder /Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 62, 0, TARGET_STRING("Z Position Input/Data Store Read3"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 63, 0, TARGET_STRING("Z Position Input/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 64, 0, TARGET_STRING("Z Position Input/Z Matrix output"),
    TARGET_STRING("Z Matrix output"), 0, 0, 0, 0, 0 },

  { 65, 0, TARGET_STRING("Z Position Input/Z Matrix Counter"),
    TARGET_STRING("Z Matrix index"), 0, 0, 0, 0, 0 },

  { 66, 3, TARGET_STRING("Z Position signal/Deadband pulse counter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 67, 0, TARGET_STRING("Z output processing/Abs2"),
    TARGET_STRING("Z enable"), 0, 0, 0, 0, 1 },

  { 68, 0, TARGET_STRING("Z output processing/Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 69, 0, TARGET_STRING("Z output processing/Voltage2"),
    TARGET_STRING("Voltage Z "), 0, 0, 0, 0, 1 },

  { 70, 0, TARGET_STRING("Z output processing/Logical Operator"),
    TARGET_STRING("Z enable"), 0, 2, 0, 0, 1 },

  { 71, 0, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 72, 0, TARGET_STRING("Z output processing/Sign1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 73, 0, TARGET_STRING("Z_encoder/count_to_mm"),
    TARGET_STRING("Z Data"), 0, 0, 0, 0, 0 },

  { 74, 0, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 0 },

  { 75, 0, TARGET_STRING("Z_encoder/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 76, TARGET_STRING("Data Store Memory"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 77, TARGET_STRING("Data Store Memory1"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 78, TARGET_STRING("Data Store Memory2"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 79, TARGET_STRING("Data Store Memory3"),
    TARGET_STRING("InitialValue"), 2, 0, 0 },

  { 80, TARGET_STRING("PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 81, TARGET_STRING("PID Controller1"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 82, TARGET_STRING("PID Controller2"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 83, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P1"), 0, 3, 0 },

  { 84, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P2"), 0, 3, 0 },

  { 85, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P3"), 0, 3, 0 },

  { 86, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P4"), 0, 3, 0 },

  { 87, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 88, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 89, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 90, TARGET_STRING("Force Subsystem/Receive 1"),
    TARGET_STRING("P1"), 0, 4, 0 },

  { 91, TARGET_STRING("Force Subsystem/Receive 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 92, TARGET_STRING("Force Subsystem/Receive 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 93, TARGET_STRING("Force Subsystem/Receive 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 94, TARGET_STRING("Force Subsystem/Receive 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 95, TARGET_STRING("PID Controller/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 96, TARGET_STRING("PID Controller/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 97, TARGET_STRING("PID Controller1/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 98, TARGET_STRING("PID Controller1/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 99, TARGET_STRING("PID Controller2/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 100, TARGET_STRING("PID Controller2/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 101, TARGET_STRING("System Moving Flag/Counter"),
    TARGET_STRING("InitialCount"), 1, 0, 0 },

  { 102, TARGET_STRING("System Moving Flag/Counter"),
    TARGET_STRING("HitValue"), 1, 0, 0 },

  { 103, TARGET_STRING("System Moving Flag/Unit Delay"),
    TARGET_STRING("InitialCondition"), 2, 0, 0 },

  { 104, TARGET_STRING("X Position Input/X Matrix output"),
    TARGET_STRING("BreakpointsForDimension1FirstPoint"), 0, 0, 0 },

  { 105, TARGET_STRING("X Position Input/X Matrix Counter"),
    TARGET_STRING("InitialCount"), 3, 0, 0 },

  { 106, TARGET_STRING("X output processing/Voltage1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 107, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 108, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 109, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 110, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 111, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P5"), 0, 3, 0 },

  { 112, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 113, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 114, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 115, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 116, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 117, TARGET_STRING("X_Encoder/encoder offsets2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 118, TARGET_STRING("X_Encoder/count_to_mm1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 119, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 120, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 121, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 122, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 123, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 124, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 125, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 126, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 127, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P9"), 0, 5, 0 },

  { 128, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 129, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 130, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 131, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 132, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 133, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 134, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 135, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 136, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 137, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 138, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 139, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 140, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 141, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 142, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 143, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 144, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 145, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 146, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 147, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 148, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 149, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 150, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 151, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 152, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 153, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P35"), 0, 0, 0 },

  { 154, TARGET_STRING("Y Position Input/Y Matrix output"),
    TARGET_STRING("BreakpointsForDimension1FirstPoint"), 0, 0, 0 },

  { 155, TARGET_STRING("Y Position Input/Y Matrix Counter"),
    TARGET_STRING("InitialCount"), 3, 0, 0 },

  { 156, TARGET_STRING("Y output processing/Voltage"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 157, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 158, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 159, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 160, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 161, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P5"), 0, 3, 0 },

  { 162, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 163, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 164, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 165, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 166, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 167, TARGET_STRING("Y_encoder /encoder offsets1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 168, TARGET_STRING("Y_encoder /count_to_mm"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 169, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 170, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 171, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 172, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 173, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 174, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 175, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 176, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 177, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P9"), 0, 5, 0 },

  { 178, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 179, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 180, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 181, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 182, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 183, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 184, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 185, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 186, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 187, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 188, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 189, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 190, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 191, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 192, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 193, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 194, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 195, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 196, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 197, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 198, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 199, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 200, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 201, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 202, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 203, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P35"), 0, 0, 0 },

  { 204, TARGET_STRING("Z Position Input/Z Matrix output"),
    TARGET_STRING("BreakpointsForDimension1FirstPoint"), 0, 0, 0 },

  { 205, TARGET_STRING("Z Position Input/Z Matrix Counter"),
    TARGET_STRING("InitialCount"), 3, 0, 0 },

  { 206, TARGET_STRING("Z output processing/Voltage2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 207, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 208, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 209, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 210, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 211, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P5"), 0, 3, 0 },

  { 212, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 213, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 214, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 215, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 216, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 217, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 218, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 219, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P3"), 0, 3, 0 },

  { 220, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 221, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 222, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 223, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 224, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 225, TARGET_STRING("Z_encoder/encoder offsets1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 226, TARGET_STRING("Z_encoder/count_to_mm"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 227, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 228, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 229, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 230, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 231, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 232, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 233, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 234, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 235, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P9"), 0, 5, 0 },

  { 236, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 237, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 238, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 239, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 240, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 241, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 242, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 243, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 244, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 245, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 246, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 247, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 248, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 249, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 250, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 251, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 252, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 253, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 254, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 255, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 256, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 257, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 258, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 259, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 260, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 261, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P35"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 262, TARGET_STRING("db_x"), 0, 0, 0 },

  { 263, TARGET_STRING("db_y"), 0, 0, 0 },

  { 264, TARGET_STRING("db_z"), 0, 0, 0 },

  { 265, TARGET_STRING("kdx"), 0, 0, 0 },

  { 266, TARGET_STRING("kdy"), 0, 0, 0 },

  { 267, TARGET_STRING("kdz"), 0, 0, 0 },

  { 268, TARGET_STRING("kix"), 0, 0, 0 },

  { 269, TARGET_STRING("kiy"), 0, 0, 0 },

  { 270, TARGET_STRING("kiz"), 0, 0, 0 },

  { 271, TARGET_STRING("kpx"), 0, 0, 0 },

  { 272, TARGET_STRING("kpy"), 0, 0, 0 },

  { 273, TARGET_STRING("kpz"), 0, 0, 0 },

  { 274, TARGET_STRING("xpos"), 0, 6, 0 },

  { 275, TARGET_STRING("ypos"), 0, 6, 0 },

  { 276, TARGET_STRING("zpos"), 0, 6, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &Pos_PID_B.sf_Deadbandpulsecounter.pulse,/* 0: Signal */
  &Pos_PID_B.DataStoreRead,            /* 1: Signal */
  &Pos_PID_B.DataStoreRead1,           /* 2: Signal */
  &Pos_PID_B.DataStoreRead2,           /* 3: Signal */
  &Pos_PID_B.DataTypeConversion,       /* 4: Signal */
  &Pos_PID_B.Sum,                      /* 5: Signal */
  &Pos_PID_B.Sum1,                     /* 6: Signal */
  &Pos_PID_B.Sum2_n,                   /* 7: Signal */
  &Pos_PID_B.motY,                     /* 8: Signal */
  &Pos_PID_B.Sum4,                     /* 9: Signal */
  &Pos_PID_B.Zenable,                  /* 10: Signal */
  &Pos_PID_B.orceData[0],              /* 11: Signal */
  &Pos_PID_B.Receive1_o1[0],           /* 12: Signal */
  &Pos_PID_B.Receive1_o2,              /* 13: Signal */
  &Pos_PID_B.DerivativeGain,           /* 14: Signal */
  &Pos_PID_B.FilterCoefficient,        /* 15: Signal */
  &Pos_PID_B.IntegralGain,             /* 16: Signal */
  &Pos_PID_B.ProportionalGain,         /* 17: Signal */
  &Pos_PID_B.Filter,                   /* 18: Signal */
  &Pos_PID_B.Integrator,               /* 19: Signal */
  &Pos_PID_B.Sum_l,                    /* 20: Signal */
  &Pos_PID_B.SumD,                     /* 21: Signal */
  &Pos_PID_B.DerivativeGain_d,         /* 22: Signal */
  &Pos_PID_B.FilterCoefficient_p,      /* 23: Signal */
  &Pos_PID_B.IntegralGain_d,           /* 24: Signal */
  &Pos_PID_B.ProportionalGain_e,       /* 25: Signal */
  &Pos_PID_B.Filter_l,                 /* 26: Signal */
  &Pos_PID_B.Integrator_m,             /* 27: Signal */
  &Pos_PID_B.Sum_d,                    /* 28: Signal */
  &Pos_PID_B.SumD_b,                   /* 29: Signal */
  &Pos_PID_B.DerivativeGain_f,         /* 30: Signal */
  &Pos_PID_B.FilterCoefficient_b,      /* 31: Signal */
  &Pos_PID_B.IntegralGain_l,           /* 32: Signal */
  &Pos_PID_B.ProportionalGain_d,       /* 33: Signal */
  &Pos_PID_B.Filter_b,                 /* 34: Signal */
  &Pos_PID_B.Integrator_f,             /* 35: Signal */
  &Pos_PID_B.Sum_a,                    /* 36: Signal */
  &Pos_PID_B.SumD_k,                   /* 37: Signal */
  &Pos_PID_B.LogicalOperator,          /* 38: Signal */
  &Pos_PID_B.Counter,                  /* 39: Signal */
  &Pos_PID_B.UnitDelay,                /* 40: Signal */
  &Pos_PID_B.DataStoreRead5,           /* 41: Signal */
  &Pos_PID_B.DataTypeConversion3,      /* 42: Signal */
  &Pos_PID_B.XMatrixoutput,            /* 43: Signal */
  &Pos_PID_B.XMatrixindex,             /* 44: Signal */
  &Pos_PID_B.XEnable,                  /* 45: Signal */
  &Pos_PID_B.xVoltage,                 /* 46: Signal */
  &Pos_PID_B.motX,                     /* 47: Signal */
  &Pos_PID_B.XData,                    /* 48: Signal */
  &Pos_PID_B.counts,                   /* 49: Signal */
  &Pos_PID_B.Sum3,                     /* 50: Signal */
  &Pos_PID_B.DataStoreRead4,           /* 51: Signal */
  &Pos_PID_B.DataTypeConversion2,      /* 52: Signal */
  &Pos_PID_B.YMatrixoutput,            /* 53: Signal */
  &Pos_PID_B.YMatrixindex,             /* 54: Signal */
  &Pos_PID_B.sf_Deadbandpulsecounter_h.pulse,/* 55: Signal */
  &Pos_PID_B.Yenable,                  /* 56: Signal */
  &Pos_PID_B.VoltageY,                 /* 57: Signal */
  &Pos_PID_B.Sign,                     /* 58: Signal */
  &Pos_PID_B.YData,                    /* 59: Signal */
  &Pos_PID_B.counts_o,                 /* 60: Signal */
  &Pos_PID_B.Sum2,                     /* 61: Signal */
  &Pos_PID_B.DataStoreRead3,           /* 62: Signal */
  &Pos_PID_B.DataTypeConversion1,      /* 63: Signal */
  &Pos_PID_B.ZMatrixoutput,            /* 64: Signal */
  &Pos_PID_B.ZMatrixindex,             /* 65: Signal */
  &Pos_PID_B.sf_Deadbandpulsecounter_e.pulse,/* 66: Signal */
  &Pos_PID_B.Zenable_e,                /* 67: Signal */
  &Pos_PID_B.DataTypeConversion_a,     /* 68: Signal */
  &Pos_PID_B.VoltageZ,                 /* 69: Signal */
  &Pos_PID_B.Zenable_e0,               /* 70: Signal */
  &Pos_PID_B.PCIDDA08123,              /* 71: Signal */
  &Pos_PID_B.Sign1,                    /* 72: Signal */
  &Pos_PID_B.ZData,                    /* 73: Signal */
  &Pos_PID_B.counts_f,                 /* 74: Signal */
  &Pos_PID_B.Sum2_g,                   /* 75: Signal */
  &Pos_PID_P.DataStoreMemory_InitialValue,/* 76: Block Parameter */
  &Pos_PID_P.DataStoreMemory1_InitialValue,/* 77: Block Parameter */
  &Pos_PID_P.DataStoreMemory2_InitialValue,/* 78: Block Parameter */
  &Pos_PID_P.DataStoreMemory3_InitialValue,/* 79: Block Parameter */
  &Pos_PID_P.PIDController_N,          /* 80: Mask Parameter */
  &Pos_PID_P.PIDController1_N,         /* 81: Mask Parameter */
  &Pos_PID_P.PIDController2_N,         /* 82: Mask Parameter */
  &Pos_PID_P.PCIDDA0812_P1[0],         /* 83: Block Parameter */
  &Pos_PID_P.PCIDDA0812_P2[0],         /* 84: Block Parameter */
  &Pos_PID_P.PCIDDA0812_P3[0],         /* 85: Block Parameter */
  &Pos_PID_P.PCIDDA0812_P4[0],         /* 86: Block Parameter */
  &Pos_PID_P.PCIDDA0812_P5,            /* 87: Block Parameter */
  &Pos_PID_P.PCIDDA0812_P6,            /* 88: Block Parameter */
  &Pos_PID_P.PCIDDA0812_P7,            /* 89: Block Parameter */
  &Pos_PID_P.Receive1_P1[0],           /* 90: Block Parameter */
  &Pos_PID_P.Receive1_P2,              /* 91: Block Parameter */
  &Pos_PID_P.Receive1_P3,              /* 92: Block Parameter */
  &Pos_PID_P.Receive1_P4,              /* 93: Block Parameter */
  &Pos_PID_P.Receive1_P5,              /* 94: Block Parameter */
  &Pos_PID_P.Filter_IC,                /* 95: Block Parameter */
  &Pos_PID_P.Integrator_IC,            /* 96: Block Parameter */
  &Pos_PID_P.Filter_IC_m,              /* 97: Block Parameter */
  &Pos_PID_P.Integrator_IC_o,          /* 98: Block Parameter */
  &Pos_PID_P.Filter_IC_k,              /* 99: Block Parameter */
  &Pos_PID_P.Integrator_IC_j,          /* 100: Block Parameter */
  &Pos_PID_P.Counter_InitialCount,     /* 101: Block Parameter */
  &Pos_PID_P.Counter_HitValue,         /* 102: Block Parameter */
  &Pos_PID_P.UnitDelay_InitialCondition,/* 103: Block Parameter */
  &Pos_PID_P.XMatrixoutput_bpFirstPoint01Dat,/* 104: Block Parameter */
  &Pos_PID_P.XMatrixCounter_InitialCount,/* 105: Block Parameter */
  &Pos_PID_P.Voltage1_Gain,            /* 106: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P1,           /* 107: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P2,           /* 108: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P3,           /* 109: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P4,           /* 110: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P5[0],        /* 111: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P6,           /* 112: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P7,           /* 113: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P8,           /* 114: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P9,           /* 115: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P10,          /* 116: Block Parameter */
  &Pos_PID_P.encoderoffsets2_Value,    /* 117: Block Parameter */
  &Pos_PID_P.count_to_mm1_Gain,        /* 118: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P1,           /* 119: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P2,           /* 120: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P3,           /* 121: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P4,           /* 122: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P5,           /* 123: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P6,           /* 124: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P7,           /* 125: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P8,           /* 126: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P9[0],        /* 127: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P10,          /* 128: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P11,          /* 129: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P12,          /* 130: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P13,          /* 131: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P14,          /* 132: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P15,          /* 133: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P16,          /* 134: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P17,          /* 135: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P18,          /* 136: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P19,          /* 137: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P20,          /* 138: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P21,          /* 139: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P22,          /* 140: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P23,          /* 141: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P24,          /* 142: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P25,          /* 143: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P26,          /* 144: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P27,          /* 145: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P28,          /* 146: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P29,          /* 147: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P30,          /* 148: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P31,          /* 149: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P32,          /* 150: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P33,          /* 151: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P34,          /* 152: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P35,          /* 153: Block Parameter */
  &Pos_PID_P.YMatrixoutput_bpFirstPoint01Dat,/* 154: Block Parameter */
  &Pos_PID_P.YMatrixCounter_InitialCount,/* 155: Block Parameter */
  &Pos_PID_P.Voltage_Gain,             /* 156: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P1,           /* 157: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P2,           /* 158: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P3,           /* 159: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P4,           /* 160: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P5[0],        /* 161: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P6,           /* 162: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P7,           /* 163: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P8,           /* 164: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P9,           /* 165: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P10,          /* 166: Block Parameter */
  &Pos_PID_P.encoderoffsets1_Value,    /* 167: Block Parameter */
  &Pos_PID_P.count_to_mm_Gain,         /* 168: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P1,           /* 169: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P2,           /* 170: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P3,           /* 171: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P4,           /* 172: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P5,           /* 173: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P6,           /* 174: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P7,           /* 175: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P8,           /* 176: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P9[0],        /* 177: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P10,          /* 178: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P11,          /* 179: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P12,          /* 180: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P13,          /* 181: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P14,          /* 182: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P15,          /* 183: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P16,          /* 184: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P17,          /* 185: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P18,          /* 186: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P19,          /* 187: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P20,          /* 188: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P21,          /* 189: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P22,          /* 190: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P23,          /* 191: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P24,          /* 192: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P25,          /* 193: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P26,          /* 194: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P27,          /* 195: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P28,          /* 196: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P29,          /* 197: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P30,          /* 198: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P31,          /* 199: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P32,          /* 200: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P33,          /* 201: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P34,          /* 202: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P35,          /* 203: Block Parameter */
  &Pos_PID_P.ZMatrixoutput_bpFirstPoint01Dat,/* 204: Block Parameter */
  &Pos_PID_P.ZMatrixCounter_InitialCount,/* 205: Block Parameter */
  &Pos_PID_P.Voltage2_Gain,            /* 206: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P1,           /* 207: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P2,           /* 208: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P3,           /* 209: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P4,           /* 210: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P5[0],        /* 211: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P6,           /* 212: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P7,           /* 213: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P8,           /* 214: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P9,           /* 215: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P10,          /* 216: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P1_a,         /* 217: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P2_n,         /* 218: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P3_i[0],      /* 219: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P4_m,         /* 220: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P5_n,         /* 221: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P6_h,         /* 222: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P7_b,         /* 223: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P8_h,         /* 224: Block Parameter */
  &Pos_PID_P.encoderoffsets1_Value_f,  /* 225: Block Parameter */
  &Pos_PID_P.count_to_mm_Gain_j,       /* 226: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P1_d,         /* 227: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P2_k,         /* 228: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P3_j,         /* 229: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P4_g,         /* 230: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P5_i,         /* 231: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P6_l,         /* 232: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P7_i,         /* 233: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P8_n,         /* 234: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P9_k[0],      /* 235: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P10_l,        /* 236: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P11_c,        /* 237: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P12_l,        /* 238: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P13_p,        /* 239: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P14_j,        /* 240: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P15_l,        /* 241: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P16_d,        /* 242: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P17_b,        /* 243: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P18_b,        /* 244: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P19_m,        /* 245: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P20_i,        /* 246: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P21_b,        /* 247: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P22_l,        /* 248: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P23_e,        /* 249: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P24_g,        /* 250: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P25_e,        /* 251: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P26_e,        /* 252: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P27_g,        /* 253: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P28_a,        /* 254: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P29_o,        /* 255: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P30_h,        /* 256: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P31_l,        /* 257: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P32_p,        /* 258: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P33_g,        /* 259: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P34_n,        /* 260: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P35_p,        /* 261: Block Parameter */
  &Pos_PID_P.db_x,                     /* 262: Model Parameter */
  &Pos_PID_P.db_y,                     /* 263: Model Parameter */
  &Pos_PID_P.db_z,                     /* 264: Model Parameter */
  &Pos_PID_P.kdx,                      /* 265: Model Parameter */
  &Pos_PID_P.kdy,                      /* 266: Model Parameter */
  &Pos_PID_P.kdz,                      /* 267: Model Parameter */
  &Pos_PID_P.kix,                      /* 268: Model Parameter */
  &Pos_PID_P.kiy,                      /* 269: Model Parameter */
  &Pos_PID_P.kiz,                      /* 270: Model Parameter */
  &Pos_PID_P.kpx,                      /* 271: Model Parameter */
  &Pos_PID_P.kpy,                      /* 272: Model Parameter */
  &Pos_PID_P.kpz,                      /* 273: Model Parameter */
  &Pos_PID_P.xpos[0],                  /* 274: Model Parameter */
  &Pos_PID_P.ypos[0],                  /* 275: Model Parameter */
  &Pos_PID_P.zpos[0],                  /* 276: Model Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  6,                                   /* 2 */
  1,                                   /* 3 */
  48,                                  /* 4 */
  1,                                   /* 5 */
  1,                                   /* 6 */
  3,                                   /* 7 */
  1,                                   /* 8 */
  11,                                  /* 9 */
  1,                                   /* 10 */
  2,                                   /* 11 */
  1,                                   /* 12 */
  30000                                /* 13 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.001, 0.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    1, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[1],
    0, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 76,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 186,
    rtModelParameters, 15 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 4166934853U,
    4166857649U,
    1938363841U,
    829050036U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  Pos_PID_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void Pos_PID_InitializeDataMapInfo(RT_MODEL_Pos_PID_T *const Pos_PID_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(Pos_PID_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(Pos_PID_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(Pos_PID_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(Pos_PID_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(Pos_PID_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  Pos_PID_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (Pos_PID_M);
  Pos_PID_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_Pos_PID_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(Pos_PID_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(Pos_PID_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(Pos_PID_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void Pos_PID_host_InitializeDataMapInfo(Pos_PID_host_DataMapInfo_T *dataMap,
    const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: Pos_PID_capi.c */
