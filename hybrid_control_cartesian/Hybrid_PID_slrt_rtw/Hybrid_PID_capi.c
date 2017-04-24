/*
 * Hybrid_PID_capi.c
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

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Hybrid_PID_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "Hybrid_PID.h"
#include "Hybrid_PID_capi.h"
#include "Hybrid_PID_private.h"
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
  { 0, 0, TARGET_STRING("Data Store Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Data Store Read1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 3, 0, TARGET_STRING("Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 4, 0, TARGET_STRING("Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 0, TARGET_STRING("Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 6, 0, TARGET_STRING("Sum3"),
    TARGET_STRING("motY"), 0, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 8, 0, TARGET_STRING("Sum5"),
    TARGET_STRING("Z enable"), 0, 0, 0, 0, 0 },

  { 9, 0, TARGET_STRING("Force Reference/Data Store Read3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 10, 0, TARGET_STRING("Force Reference/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("Force Reference/Force Matrix output"),
    TARGET_STRING("Force output"), 0, 0, 0, 0, 1 },

  { 12, 0, TARGET_STRING("Force Reference/Force Matrix Counter/p1"),
    TARGET_STRING("Force Matrix index"), 0, 0, 0, 0, 1 },

  { 13, 0, TARGET_STRING("Force Reference/Force Matrix Counter/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 1 },

  { 14, 0, TARGET_STRING("Force Reference/Unit Delay"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 15, 0, TARGET_STRING("Force Subsystem/Byte Unpacking 1"),
    TARGET_STRING("orce Data"), 0, 0, 1, 0, 1 },

  { 16, 0, TARGET_STRING("Force Subsystem/Receive 1/p1"),
    TARGET_STRING(""), 0, 2, 2, 0, 1 },

  { 17, 0, TARGET_STRING("Force Subsystem/Receive 1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 1 },

  { 18, 0, TARGET_STRING("System Moving Flag/Data Type Conversion"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 19, 0, TARGET_STRING("System Moving Flag/Data Type Conversion1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 20, 0, TARGET_STRING("System Moving Flag/Data Type Conversion2"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 21, 0, TARGET_STRING("System Moving Flag/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 22, 0, TARGET_STRING("System Moving Flag/Unit Delay"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 23, 0, TARGET_STRING("X Controller/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 24, 0, TARGET_STRING("X Controller/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 25, 0, TARGET_STRING("X Controller/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 26, 0, TARGET_STRING("X Controller/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 27, 0, TARGET_STRING("X Controller/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 28, 0, TARGET_STRING("X Controller/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 0, TARGET_STRING("X Controller/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 30, 0, TARGET_STRING("X Controller/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 0, TARGET_STRING("X Position Input/Data Store Read5"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 32, 0, TARGET_STRING("X Position Input/Data Type Conversion3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 33, 0, TARGET_STRING("X Position Input/X Matrix output"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 34, 0, TARGET_STRING("X Position Input/X Matrix Counter/p1"),
    TARGET_STRING("X Matrix index"), 0, 0, 0, 0, 1 },

  { 35, 0, TARGET_STRING("X Position Input/X Matrix Counter/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 1 },

  { 36, 0, TARGET_STRING("X Position Input/Unit Delay2"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 37, 1, TARGET_STRING("X Position signal/Deadband pulse counter"),
    TARGET_STRING("pulse"), 0, 0, 0, 0, 0 },

  { 38, 0, TARGET_STRING("X Position signal/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 39, 0, TARGET_STRING("X Position signal/Counter/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 40, 0, TARGET_STRING("X Position signal/Counter/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 1 },

  { 41, 0, TARGET_STRING("X Position signal/Unit Delay"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 42, 0, TARGET_STRING("X output processing/Abs1"),
    TARGET_STRING("X Enable"), 0, 0, 0, 0, 0 },

  { 43, 0, TARGET_STRING("X output processing/Voltage1"),
    TARGET_STRING("x Voltage"), 0, 0, 0, 0, 0 },

  { 44, 0, TARGET_STRING("X output processing/Sign2"),
    TARGET_STRING("motX"), 0, 0, 0, 0, 0 },

  { 45, 0, TARGET_STRING("X_Encoder/count_to_mm1"),
    TARGET_STRING("X Data"), 0, 0, 0, 0, 1 },

  { 46, 0, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 1 },

  { 47, 0, TARGET_STRING("X_Encoder/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 48, 0, TARGET_STRING("Y Controller/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 49, 0, TARGET_STRING("Y Controller/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 50, 0, TARGET_STRING("Y Controller/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 51, 0, TARGET_STRING("Y Controller/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 52, 0, TARGET_STRING("Y Controller/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 53, 0, TARGET_STRING("Y Controller/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 54, 0, TARGET_STRING("Y Controller/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 55, 0, TARGET_STRING("Y Controller/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 56, 0, TARGET_STRING("Y Position Input/Data Store Read4"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 57, 0, TARGET_STRING("Y Position Input/Data Type Conversion2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 58, 0, TARGET_STRING("Y Position Input/Y Matrix output"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 59, 0, TARGET_STRING("Y Position Input/Y Matrix Counter/p1"),
    TARGET_STRING("Y Matrix index"), 0, 0, 0, 0, 1 },

  { 60, 0, TARGET_STRING("Y Position Input/Y Matrix Counter/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 1 },

  { 61, 0, TARGET_STRING("Y Position Input/Unit Delay1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 62, 2, TARGET_STRING("Y Position signal/Deadband pulse counter"),
    TARGET_STRING("pulse"), 0, 0, 0, 0, 0 },

  { 63, 0, TARGET_STRING("Y Position signal/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 64, 0, TARGET_STRING("Y Position signal/Counter/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 65, 0, TARGET_STRING("Y Position signal/Counter/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 1 },

  { 66, 0, TARGET_STRING("Y Position signal/Unit Delay"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 67, 0, TARGET_STRING("Y output processing/Abs"),
    TARGET_STRING("Y enable"), 0, 0, 0, 0, 0 },

  { 68, 0, TARGET_STRING("Y output processing/Voltage"),
    TARGET_STRING("VoltageY "), 0, 0, 0, 0, 0 },

  { 69, 0, TARGET_STRING("Y output processing/Sign"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 70, 0, TARGET_STRING("Y_encoder /count_to_mm"),
    TARGET_STRING("Y Data"), 0, 0, 0, 0, 1 },

  { 71, 0, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 1 },

  { 72, 0, TARGET_STRING("Y_encoder /Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 73, 0, TARGET_STRING("Z Controller/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 74, 0, TARGET_STRING("Z Controller/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 75, 0, TARGET_STRING("Z Controller/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 76, 0, TARGET_STRING("Z Controller/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 77, 0, TARGET_STRING("Z Controller/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 78, 0, TARGET_STRING("Z Controller/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 79, 0, TARGET_STRING("Z Controller/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 80, 0, TARGET_STRING("Z Controller/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 81, 3, TARGET_STRING("Z Position signal/Deadband pulse counter"),
    TARGET_STRING("pulse"), 0, 0, 0, 0, 0 },

  { 82, 0, TARGET_STRING("Z Position signal/Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 83, 0, TARGET_STRING("Z Position signal/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 84, 0, TARGET_STRING("Z Position signal/Counter/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 85, 0, TARGET_STRING("Z Position signal/Counter/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 1 },

  { 86, 0, TARGET_STRING("Z Position signal/Unit Delay"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 87, 0, TARGET_STRING("Z output processing/Abs2"),
    TARGET_STRING("Z enable"), 0, 0, 0, 0, 0 },

  { 88, 0, TARGET_STRING("Z output processing/Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 89, 0, TARGET_STRING("Z output processing/Voltage2"),
    TARGET_STRING("Voltage Z "), 0, 0, 0, 0, 0 },

  { 90, 0, TARGET_STRING("Z output processing/Logical Operator"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 91, 0, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 92, 0, TARGET_STRING("Z output processing/Sign1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 93, 0, TARGET_STRING("Z_encoder/count_to_mm"),
    TARGET_STRING("Z Data"), 0, 0, 0, 0, 1 },

  { 94, 0, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 1 },

  { 95, 0, TARGET_STRING("Z_encoder/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 96, 0, TARGET_STRING("System Moving Flag/X Flipflop/Logic"),
    TARGET_STRING(""), 0, 1, 3, 0, 1 },

  { 97, 0, TARGET_STRING("System Moving Flag/X Flipflop/Memory"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 98, 0, TARGET_STRING("System Moving Flag/Y Flipflop/Logic"),
    TARGET_STRING(""), 0, 1, 3, 0, 1 },

  { 99, 0, TARGET_STRING("System Moving Flag/Y Flipflop/Memory"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 100, 0, TARGET_STRING("System Moving Flag/Z Flipflop/Logic"),
    TARGET_STRING(""), 0, 1, 3, 0, 1 },

  { 101, 0, TARGET_STRING("System Moving Flag/Z Flipflop/Memory"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 102, TARGET_STRING("Data Store Memory"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 103, TARGET_STRING("Data Store Memory1"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 104, TARGET_STRING("Data Store Memory2"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 105, TARGET_STRING("Data Store Memory3"),
    TARGET_STRING("InitialValue"), 1, 0, 0 },

  { 106, TARGET_STRING("X Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 107, TARGET_STRING("Y Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 108, TARGET_STRING("Z Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 109, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P1"), 0, 4, 0 },

  { 110, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P2"), 0, 4, 0 },

  { 111, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P3"), 0, 4, 0 },

  { 112, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P4"), 0, 4, 0 },

  { 113, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 114, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 115, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 116, TARGET_STRING("Force Reference/Force Matrix output"),
    TARGET_STRING("BreakpointsForDimension1FirstPoint"), 0, 0, 0 },

  { 117, TARGET_STRING("Force Reference/Force Matrix Counter"),
    TARGET_STRING("InitialCount"), 2, 0, 0 },

  { 118, TARGET_STRING("Force Reference/Force Matrix Counter"),
    TARGET_STRING("HitValue"), 2, 0, 0 },

  { 119, TARGET_STRING("Force Reference/Unit Delay"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 120, TARGET_STRING("Force Subsystem/Receive 1"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 121, TARGET_STRING("Force Subsystem/Receive 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 122, TARGET_STRING("Force Subsystem/Receive 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 123, TARGET_STRING("Force Subsystem/Receive 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 124, TARGET_STRING("Force Subsystem/Receive 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 125, TARGET_STRING("System Moving Flag/X Flipflop"),
    TARGET_STRING("initial_condition"), 1, 0, 0 },

  { 126, TARGET_STRING("System Moving Flag/Y Flipflop"),
    TARGET_STRING("initial_condition"), 1, 0, 0 },

  { 127, TARGET_STRING("System Moving Flag/Z Flipflop"),
    TARGET_STRING("initial_condition"), 1, 0, 0 },

  { 128, TARGET_STRING("System Moving Flag/Unit Delay"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 129, TARGET_STRING("X Controller/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 130, TARGET_STRING("X Controller/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 131, TARGET_STRING("X Position Input/X Matrix output"),
    TARGET_STRING("BreakpointsForDimension1FirstPoint"), 0, 0, 0 },

  { 132, TARGET_STRING("X Position Input/X Matrix Counter"),
    TARGET_STRING("InitialCount"), 2, 0, 0 },

  { 133, TARGET_STRING("X Position Input/X Matrix Counter"),
    TARGET_STRING("HitValue"), 2, 0, 0 },

  { 134, TARGET_STRING("X Position Input/Unit Delay2"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 135, TARGET_STRING("X Position signal/Counter"),
    TARGET_STRING("InitialCount"), 2, 0, 0 },

  { 136, TARGET_STRING("X Position signal/Unit Delay"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 137, TARGET_STRING("X output processing/Voltage1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 138, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 139, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 140, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 141, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 142, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P5"), 0, 4, 0 },

  { 143, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 144, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 145, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 146, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 147, TARGET_STRING("X output processing/PCI-DDA 08 12 4"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 148, TARGET_STRING("X_Encoder/encoder offsets2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 149, TARGET_STRING("X_Encoder/count_to_mm1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 150, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 151, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 152, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 153, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 154, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 155, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 156, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 157, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 158, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P9"), 0, 6, 0 },

  { 159, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 160, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 161, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 162, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 163, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 164, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 165, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 166, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 167, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 168, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 169, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 170, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 171, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 172, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 173, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 174, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 175, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 176, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 177, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 178, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 179, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 180, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 181, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 182, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 183, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 184, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P35"), 0, 0, 0 },

  { 185, TARGET_STRING("Y Controller/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 186, TARGET_STRING("Y Controller/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 187, TARGET_STRING("Y Position Input/Y Matrix output"),
    TARGET_STRING("BreakpointsForDimension1FirstPoint"), 0, 0, 0 },

  { 188, TARGET_STRING("Y Position Input/Y Matrix Counter"),
    TARGET_STRING("InitialCount"), 2, 0, 0 },

  { 189, TARGET_STRING("Y Position Input/Y Matrix Counter"),
    TARGET_STRING("HitValue"), 2, 0, 0 },

  { 190, TARGET_STRING("Y Position Input/Unit Delay1"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 191, TARGET_STRING("Y Position signal/Counter"),
    TARGET_STRING("InitialCount"), 2, 0, 0 },

  { 192, TARGET_STRING("Y Position signal/Unit Delay"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 193, TARGET_STRING("Y output processing/Voltage"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 194, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 195, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 196, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 197, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 198, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P5"), 0, 4, 0 },

  { 199, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 200, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 201, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 202, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 203, TARGET_STRING("Y output processing/PCI-DDA 08 12 3"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 204, TARGET_STRING("Y_encoder /encoder offsets1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 205, TARGET_STRING("Y_encoder /count_to_mm"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 206, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 207, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 208, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 209, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 210, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 211, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 212, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 213, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 214, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P9"), 0, 6, 0 },

  { 215, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 216, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 217, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 218, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 219, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 220, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 221, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 222, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 223, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 224, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 225, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 226, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 227, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 228, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 229, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 230, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 231, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 232, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 233, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 234, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 235, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 236, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 237, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 238, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 239, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 240, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P35"), 0, 0, 0 },

  { 241, TARGET_STRING("Z Controller/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 242, TARGET_STRING("Z Controller/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 243, TARGET_STRING("Z Position signal/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 244, TARGET_STRING("Z Position signal/Counter"),
    TARGET_STRING("InitialCount"), 2, 0, 0 },

  { 245, TARGET_STRING("Z Position signal/Unit Delay"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 246, TARGET_STRING("Z output processing/Voltage2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 247, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 248, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 249, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 250, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 251, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P5"), 0, 4, 0 },

  { 252, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 253, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 254, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 255, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 256, TARGET_STRING("Z output processing/PCI-DDA 08 12 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 257, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 258, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 259, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P3"), 0, 4, 0 },

  { 260, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 261, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 262, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 263, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 264, TARGET_STRING("Z output processing/PCI-DDA08 12 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 265, TARGET_STRING("Z_encoder/encoder offsets1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 266, TARGET_STRING("Z_encoder/count_to_mm"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 267, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 268, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 269, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 270, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 271, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 272, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 273, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 274, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 275, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P9"), 0, 6, 0 },

  { 276, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 277, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 278, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 279, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 280, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 281, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 282, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 283, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 284, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 285, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 286, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 287, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 288, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 289, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 290, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 291, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 292, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 293, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 294, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 295, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 296, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 297, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 298, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 299, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 300, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 301, TARGET_STRING("Z_encoder/CNT32-8M(PCI) 1"),
    TARGET_STRING("P35"), 0, 0, 0 },

  { 302, TARGET_STRING("System Moving Flag/X Flipflop/Logic"),
    TARGET_STRING("TruthTable"), 1, 7, 0 },

  { 303, TARGET_STRING("System Moving Flag/Y Flipflop/Logic"),
    TARGET_STRING("TruthTable"), 1, 7, 0 },

  { 304, TARGET_STRING("System Moving Flag/Z Flipflop/Logic"),
    TARGET_STRING("TruthTable"), 1, 7, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 305, TARGET_STRING("db_x"), 0, 0, 0 },

  { 306, TARGET_STRING("db_y"), 0, 0, 0 },

  { 307, TARGET_STRING("db_z"), 0, 0, 0 },

  { 308, TARGET_STRING("fpos"), 0, 8, 0 },

  { 309, TARGET_STRING("kdx"), 0, 0, 0 },

  { 310, TARGET_STRING("kdy"), 0, 0, 0 },

  { 311, TARGET_STRING("kdz"), 0, 0, 0 },

  { 312, TARGET_STRING("kix"), 0, 0, 0 },

  { 313, TARGET_STRING("kiy"), 0, 0, 0 },

  { 314, TARGET_STRING("kiz"), 0, 0, 0 },

  { 315, TARGET_STRING("kpx"), 0, 0, 0 },

  { 316, TARGET_STRING("kpy"), 0, 0, 0 },

  { 317, TARGET_STRING("kpz"), 0, 0, 0 },

  { 318, TARGET_STRING("xpos"), 0, 8, 0 },

  { 319, TARGET_STRING("ypos"), 0, 8, 0 },

  { 320, TARGET_STRING("hitcount_x"), 2, 0, 0 },

  { 321, TARGET_STRING("hitcount_y"), 2, 0, 0 },

  { 322, TARGET_STRING("hitcount_z"), 2, 0, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &Hybrid_PID_B.DataStoreRead,         /* 0: Signal */
  &Hybrid_PID_B.DataStoreRead1,        /* 1: Signal */
  &Hybrid_PID_B.DataTypeConversion1_n, /* 2: Signal */
  &Hybrid_PID_B.Sum,                   /* 3: Signal */
  &Hybrid_PID_B.Sum1,                  /* 4: Signal */
  &Hybrid_PID_B.Sum2_n,                /* 5: Signal */
  &Hybrid_PID_B.motY,                  /* 6: Signal */
  &Hybrid_PID_B.Sum4,                  /* 7: Signal */
  &Hybrid_PID_B.Zenable,               /* 8: Signal */
  &Hybrid_PID_B.DataStoreRead3,        /* 9: Signal */
  &Hybrid_PID_B.DataTypeConversion1_g, /* 10: Signal */
  &Hybrid_PID_B.Forceoutput,           /* 11: Signal */
  &Hybrid_PID_B.ForceMatrixindex,      /* 12: Signal */
  &Hybrid_PID_B.ForceMatrixCounter_o2, /* 13: Signal */
  &Hybrid_PID_B.UnitDelay_ni,          /* 14: Signal */
  &Hybrid_PID_B.orceData[0],           /* 15: Signal */
  &Hybrid_PID_B.Receive1_o1[0],        /* 16: Signal */
  &Hybrid_PID_B.Receive1_o2,           /* 17: Signal */
  &Hybrid_PID_B.DataTypeConversion_p,  /* 18: Signal */
  &Hybrid_PID_B.DataTypeConversion1_h, /* 19: Signal */
  &Hybrid_PID_B.DataTypeConversion2_i, /* 20: Signal */
  &Hybrid_PID_B.LogicalOperator,       /* 21: Signal */
  &Hybrid_PID_B.UnitDelay_b,           /* 22: Signal */
  &Hybrid_PID_B.DerivativeGain,        /* 23: Signal */
  &Hybrid_PID_B.FilterCoefficient,     /* 24: Signal */
  &Hybrid_PID_B.IntegralGain,          /* 25: Signal */
  &Hybrid_PID_B.ProportionalGain,      /* 26: Signal */
  &Hybrid_PID_B.Filter,                /* 27: Signal */
  &Hybrid_PID_B.Integrator,            /* 28: Signal */
  &Hybrid_PID_B.Sum_l,                 /* 29: Signal */
  &Hybrid_PID_B.SumD,                  /* 30: Signal */
  &Hybrid_PID_B.DataStoreRead5,        /* 31: Signal */
  &Hybrid_PID_B.DataTypeConversion3,   /* 32: Signal */
  &Hybrid_PID_B.XMatrixoutput,         /* 33: Signal */
  &Hybrid_PID_B.XMatrixindex,          /* 34: Signal */
  &Hybrid_PID_B.XMatrixCounter_o2,     /* 35: Signal */
  &Hybrid_PID_B.UnitDelay2,            /* 36: Signal */
  &Hybrid_PID_B.sf_Deadbandpulsecounter.pulse,/* 37: Signal */
  &Hybrid_PID_B.DataTypeConversion1,   /* 38: Signal */
  &Hybrid_PID_B.Counter_o1,            /* 39: Signal */
  &Hybrid_PID_B.Counter_o2,            /* 40: Signal */
  &Hybrid_PID_B.UnitDelay,             /* 41: Signal */
  &Hybrid_PID_B.XEnable,               /* 42: Signal */
  &Hybrid_PID_B.xVoltage,              /* 43: Signal */
  &Hybrid_PID_B.motX,                  /* 44: Signal */
  &Hybrid_PID_B.XData,                 /* 45: Signal */
  &Hybrid_PID_B.counts,                /* 46: Signal */
  &Hybrid_PID_B.Sum3,                  /* 47: Signal */
  &Hybrid_PID_B.DerivativeGain_d,      /* 48: Signal */
  &Hybrid_PID_B.FilterCoefficient_p,   /* 49: Signal */
  &Hybrid_PID_B.IntegralGain_d,        /* 50: Signal */
  &Hybrid_PID_B.ProportionalGain_e,    /* 51: Signal */
  &Hybrid_PID_B.Filter_l,              /* 52: Signal */
  &Hybrid_PID_B.Integrator_m,          /* 53: Signal */
  &Hybrid_PID_B.Sum_d,                 /* 54: Signal */
  &Hybrid_PID_B.SumD_b,                /* 55: Signal */
  &Hybrid_PID_B.DataStoreRead4,        /* 56: Signal */
  &Hybrid_PID_B.DataTypeConversion2,   /* 57: Signal */
  &Hybrid_PID_B.YMatrixoutput,         /* 58: Signal */
  &Hybrid_PID_B.YMatrixindex,          /* 59: Signal */
  &Hybrid_PID_B.YMatrixCounter_o2,     /* 60: Signal */
  &Hybrid_PID_B.UnitDelay1,            /* 61: Signal */
  &Hybrid_PID_B.sf_Deadbandpulsecounter_h.pulse,/* 62: Signal */
  &Hybrid_PID_B.DataTypeConversion1_p, /* 63: Signal */
  &Hybrid_PID_B.Counter_o1_h,          /* 64: Signal */
  &Hybrid_PID_B.Counter_o2_h,          /* 65: Signal */
  &Hybrid_PID_B.UnitDelay_n,           /* 66: Signal */
  &Hybrid_PID_B.Yenable,               /* 67: Signal */
  &Hybrid_PID_B.VoltageY,              /* 68: Signal */
  &Hybrid_PID_B.Sign,                  /* 69: Signal */
  &Hybrid_PID_B.YData,                 /* 70: Signal */
  &Hybrid_PID_B.counts_o,              /* 71: Signal */
  &Hybrid_PID_B.Sum2,                  /* 72: Signal */
  &Hybrid_PID_B.DerivativeGain_f,      /* 73: Signal */
  &Hybrid_PID_B.FilterCoefficient_b,   /* 74: Signal */
  &Hybrid_PID_B.IntegralGain_l,        /* 75: Signal */
  &Hybrid_PID_B.ProportionalGain_d,    /* 76: Signal */
  &Hybrid_PID_B.Filter_b,              /* 77: Signal */
  &Hybrid_PID_B.Integrator_f,          /* 78: Signal */
  &Hybrid_PID_B.Sum_a,                 /* 79: Signal */
  &Hybrid_PID_B.SumD_k,                /* 80: Signal */
  &Hybrid_PID_B.sf_Deadbandpulsecounter_e.pulse,/* 81: Signal */
  &Hybrid_PID_B.Constant,              /* 82: Signal */
  &Hybrid_PID_B.DataTypeConversion1_pn,/* 83: Signal */
  &Hybrid_PID_B.Counter_o1_m,          /* 84: Signal */
  &Hybrid_PID_B.Counter_o2_c,          /* 85: Signal */
  &Hybrid_PID_B.UnitDelay_bj,          /* 86: Signal */
  &Hybrid_PID_B.Zenable_e,             /* 87: Signal */
  &Hybrid_PID_B.DataTypeConversion,    /* 88: Signal */
  &Hybrid_PID_B.VoltageZ,              /* 89: Signal */
  &Hybrid_PID_B.LogicalOperator_m,     /* 90: Signal */
  &Hybrid_PID_B.PCIDDA08123,           /* 91: Signal */
  &Hybrid_PID_B.Sign1,                 /* 92: Signal */
  &Hybrid_PID_B.ZData,                 /* 93: Signal */
  &Hybrid_PID_B.counts_f,              /* 94: Signal */
  &Hybrid_PID_B.Sum2_g,                /* 95: Signal */
  &Hybrid_PID_B.Logic[0],              /* 96: Signal */
  &Hybrid_PID_B.Memory,                /* 97: Signal */
  &Hybrid_PID_B.Logic_d[0],            /* 98: Signal */
  &Hybrid_PID_B.Memory_e,              /* 99: Signal */
  &Hybrid_PID_B.Logic_l[0],            /* 100: Signal */
  &Hybrid_PID_B.Memory_n,              /* 101: Signal */
  &Hybrid_PID_P.DataStoreMemory_InitialValue,/* 102: Block Parameter */
  &Hybrid_PID_P.DataStoreMemory1_InitialValue,/* 103: Block Parameter */
  &Hybrid_PID_P.DataStoreMemory2_InitialValue,/* 104: Block Parameter */
  &Hybrid_PID_P.DataStoreMemory3_InitialValue,/* 105: Block Parameter */
  &Hybrid_PID_P.XController_N,         /* 106: Mask Parameter */
  &Hybrid_PID_P.YController_N,         /* 107: Mask Parameter */
  &Hybrid_PID_P.ZController_N,         /* 108: Mask Parameter */
  &Hybrid_PID_P.PCIDDA0812_P1[0],      /* 109: Block Parameter */
  &Hybrid_PID_P.PCIDDA0812_P2[0],      /* 110: Block Parameter */
  &Hybrid_PID_P.PCIDDA0812_P3[0],      /* 111: Block Parameter */
  &Hybrid_PID_P.PCIDDA0812_P4[0],      /* 112: Block Parameter */
  &Hybrid_PID_P.PCIDDA0812_P5,         /* 113: Block Parameter */
  &Hybrid_PID_P.PCIDDA0812_P6,         /* 114: Block Parameter */
  &Hybrid_PID_P.PCIDDA0812_P7,         /* 115: Block Parameter */
  &Hybrid_PID_P.ForceMatrixoutput_bpFirstPoint0,/* 116: Block Parameter */
  &Hybrid_PID_P.ForceMatrixCounter_InitialCount,/* 117: Block Parameter */
  &Hybrid_PID_P.ForceMatrixCounter_HitValue,/* 118: Block Parameter */
  &Hybrid_PID_P.UnitDelay_InitialCondition_n,/* 119: Block Parameter */
  &Hybrid_PID_P.Receive1_P1[0],        /* 120: Block Parameter */
  &Hybrid_PID_P.Receive1_P2,           /* 121: Block Parameter */
  &Hybrid_PID_P.Receive1_P3,           /* 122: Block Parameter */
  &Hybrid_PID_P.Receive1_P4,           /* 123: Block Parameter */
  &Hybrid_PID_P.Receive1_P5,           /* 124: Block Parameter */
  &Hybrid_PID_P.XFlipflop_initial_condition,/* 125: Mask Parameter */
  &Hybrid_PID_P.YFlipflop_initial_condition,/* 126: Mask Parameter */
  &Hybrid_PID_P.ZFlipflop_initial_condition,/* 127: Mask Parameter */
  &Hybrid_PID_P.UnitDelay_InitialCondition_f,/* 128: Block Parameter */
  &Hybrid_PID_P.Filter_IC,             /* 129: Block Parameter */
  &Hybrid_PID_P.Integrator_IC,         /* 130: Block Parameter */
  &Hybrid_PID_P.XMatrixoutput_bpFirstPoint01Dat,/* 131: Block Parameter */
  &Hybrid_PID_P.XMatrixCounter_InitialCount,/* 132: Block Parameter */
  &Hybrid_PID_P.XMatrixCounter_HitValue,/* 133: Block Parameter */
  &Hybrid_PID_P.UnitDelay2_InitialCondition,/* 134: Block Parameter */
  &Hybrid_PID_P.Counter_InitialCount,  /* 135: Block Parameter */
  &Hybrid_PID_P.UnitDelay_InitialCondition,/* 136: Block Parameter */
  &Hybrid_PID_P.Voltage1_Gain,         /* 137: Block Parameter */
  &Hybrid_PID_P.PCIDDA08124_P1,        /* 138: Block Parameter */
  &Hybrid_PID_P.PCIDDA08124_P2,        /* 139: Block Parameter */
  &Hybrid_PID_P.PCIDDA08124_P3,        /* 140: Block Parameter */
  &Hybrid_PID_P.PCIDDA08124_P4,        /* 141: Block Parameter */
  &Hybrid_PID_P.PCIDDA08124_P5[0],     /* 142: Block Parameter */
  &Hybrid_PID_P.PCIDDA08124_P6,        /* 143: Block Parameter */
  &Hybrid_PID_P.PCIDDA08124_P7,        /* 144: Block Parameter */
  &Hybrid_PID_P.PCIDDA08124_P8,        /* 145: Block Parameter */
  &Hybrid_PID_P.PCIDDA08124_P9,        /* 146: Block Parameter */
  &Hybrid_PID_P.PCIDDA08124_P10,       /* 147: Block Parameter */
  &Hybrid_PID_P.encoderoffsets2_Value, /* 148: Block Parameter */
  &Hybrid_PID_P.count_to_mm1_Gain,     /* 149: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P1,        /* 150: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P2,        /* 151: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P3,        /* 152: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P4,        /* 153: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P5,        /* 154: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P6,        /* 155: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P7,        /* 156: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P8,        /* 157: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P9[0],     /* 158: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P10,       /* 159: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P11,       /* 160: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P12,       /* 161: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P13,       /* 162: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P14,       /* 163: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P15,       /* 164: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P16,       /* 165: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P17,       /* 166: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P18,       /* 167: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P19,       /* 168: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P20,       /* 169: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P21,       /* 170: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P22,       /* 171: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P23,       /* 172: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P24,       /* 173: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P25,       /* 174: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P26,       /* 175: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P27,       /* 176: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P28,       /* 177: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P29,       /* 178: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P30,       /* 179: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P31,       /* 180: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P32,       /* 181: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P33,       /* 182: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P34,       /* 183: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI2_P35,       /* 184: Block Parameter */
  &Hybrid_PID_P.Filter_IC_m,           /* 185: Block Parameter */
  &Hybrid_PID_P.Integrator_IC_o,       /* 186: Block Parameter */
  &Hybrid_PID_P.YMatrixoutput_bpFirstPoint01Dat,/* 187: Block Parameter */
  &Hybrid_PID_P.YMatrixCounter_InitialCount,/* 188: Block Parameter */
  &Hybrid_PID_P.YMatrixCounter_HitValue,/* 189: Block Parameter */
  &Hybrid_PID_P.UnitDelay1_InitialCondition,/* 190: Block Parameter */
  &Hybrid_PID_P.Counter_InitialCount_d,/* 191: Block Parameter */
  &Hybrid_PID_P.UnitDelay_InitialCondition_m,/* 192: Block Parameter */
  &Hybrid_PID_P.Voltage_Gain,          /* 193: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P1,        /* 194: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P2,        /* 195: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P3,        /* 196: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P4,        /* 197: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P5[0],     /* 198: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P6,        /* 199: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P7,        /* 200: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P8,        /* 201: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P9,        /* 202: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P10,       /* 203: Block Parameter */
  &Hybrid_PID_P.encoderoffsets1_Value, /* 204: Block Parameter */
  &Hybrid_PID_P.count_to_mm_Gain,      /* 205: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P1,        /* 206: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P2,        /* 207: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P3,        /* 208: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P4,        /* 209: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P5,        /* 210: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P6,        /* 211: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P7,        /* 212: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P8,        /* 213: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P9[0],     /* 214: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P10,       /* 215: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P11,       /* 216: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P12,       /* 217: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P13,       /* 218: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P14,       /* 219: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P15,       /* 220: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P16,       /* 221: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P17,       /* 222: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P18,       /* 223: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P19,       /* 224: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P20,       /* 225: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P21,       /* 226: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P22,       /* 227: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P23,       /* 228: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P24,       /* 229: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P25,       /* 230: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P26,       /* 231: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P27,       /* 232: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P28,       /* 233: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P29,       /* 234: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P30,       /* 235: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P31,       /* 236: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P32,       /* 237: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P33,       /* 238: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P34,       /* 239: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P35,       /* 240: Block Parameter */
  &Hybrid_PID_P.Filter_IC_k,           /* 241: Block Parameter */
  &Hybrid_PID_P.Integrator_IC_j,       /* 242: Block Parameter */
  &Hybrid_PID_P.Constant_Value,        /* 243: Block Parameter */
  &Hybrid_PID_P.Counter_InitialCount_b,/* 244: Block Parameter */
  &Hybrid_PID_P.UnitDelay_InitialCondition_mb,/* 245: Block Parameter */
  &Hybrid_PID_P.Voltage2_Gain,         /* 246: Block Parameter */
  &Hybrid_PID_P.PCIDDA08121_P1,        /* 247: Block Parameter */
  &Hybrid_PID_P.PCIDDA08121_P2,        /* 248: Block Parameter */
  &Hybrid_PID_P.PCIDDA08121_P3,        /* 249: Block Parameter */
  &Hybrid_PID_P.PCIDDA08121_P4,        /* 250: Block Parameter */
  &Hybrid_PID_P.PCIDDA08121_P5[0],     /* 251: Block Parameter */
  &Hybrid_PID_P.PCIDDA08121_P6,        /* 252: Block Parameter */
  &Hybrid_PID_P.PCIDDA08121_P7,        /* 253: Block Parameter */
  &Hybrid_PID_P.PCIDDA08121_P8,        /* 254: Block Parameter */
  &Hybrid_PID_P.PCIDDA08121_P9,        /* 255: Block Parameter */
  &Hybrid_PID_P.PCIDDA08121_P10,       /* 256: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P1_a,      /* 257: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P2_n,      /* 258: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P3_i[0],   /* 259: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P4_m,      /* 260: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P5_n,      /* 261: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P6_h,      /* 262: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P7_b,      /* 263: Block Parameter */
  &Hybrid_PID_P.PCIDDA08123_P8_h,      /* 264: Block Parameter */
  &Hybrid_PID_P.encoderoffsets1_Value_f,/* 265: Block Parameter */
  &Hybrid_PID_P.count_to_mm_Gain_j,    /* 266: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P1_d,      /* 267: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P2_k,      /* 268: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P3_j,      /* 269: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P4_g,      /* 270: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P5_i,      /* 271: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P6_l,      /* 272: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P7_i,      /* 273: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P8_n,      /* 274: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P9_k[0],   /* 275: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P10_l,     /* 276: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P11_c,     /* 277: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P12_l,     /* 278: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P13_p,     /* 279: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P14_j,     /* 280: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P15_l,     /* 281: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P16_d,     /* 282: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P17_b,     /* 283: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P18_b,     /* 284: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P19_m,     /* 285: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P20_i,     /* 286: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P21_b,     /* 287: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P22_l,     /* 288: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P23_e,     /* 289: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P24_g,     /* 290: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P25_e,     /* 291: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P26_e,     /* 292: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P27_g,     /* 293: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P28_a,     /* 294: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P29_o,     /* 295: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P30_h,     /* 296: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P31_l,     /* 297: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P32_p,     /* 298: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P33_g,     /* 299: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P34_n,     /* 300: Block Parameter */
  &Hybrid_PID_P.CNT328MPCI1_P35_p,     /* 301: Block Parameter */
  &Hybrid_PID_P.Logic_table[0],        /* 302: Block Parameter */
  &Hybrid_PID_P.Logic_table_j[0],      /* 303: Block Parameter */
  &Hybrid_PID_P.Logic_table_m[0],      /* 304: Block Parameter */
  &Hybrid_PID_P.db_x,                  /* 305: Model Parameter */
  &Hybrid_PID_P.db_y,                  /* 306: Model Parameter */
  &Hybrid_PID_P.db_z,                  /* 307: Model Parameter */
  &Hybrid_PID_P.fpos[0],               /* 308: Model Parameter */
  &Hybrid_PID_P.kdx,                   /* 309: Model Parameter */
  &Hybrid_PID_P.kdy,                   /* 310: Model Parameter */
  &Hybrid_PID_P.kdz,                   /* 311: Model Parameter */
  &Hybrid_PID_P.kix,                   /* 312: Model Parameter */
  &Hybrid_PID_P.kiy,                   /* 313: Model Parameter */
  &Hybrid_PID_P.kiz,                   /* 314: Model Parameter */
  &Hybrid_PID_P.kpx,                   /* 315: Model Parameter */
  &Hybrid_PID_P.kpy,                   /* 316: Model Parameter */
  &Hybrid_PID_P.kpz,                   /* 317: Model Parameter */
  &Hybrid_PID_P.xpos[0],               /* 318: Model Parameter */
  &Hybrid_PID_P.ypos[0],               /* 319: Model Parameter */
  &Hybrid_PID_P.hitcount_x,            /* 320: Model Parameter */
  &Hybrid_PID_P.hitcount_y,            /* 321: Model Parameter */
  &Hybrid_PID_P.hitcount_z,            /* 322: Model Parameter */
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

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 }
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

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 16, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  6,                                   /* 2 */
  1,                                   /* 3 */
  48,                                  /* 4 */
  1,                                   /* 5 */
  2,                                   /* 6 */
  1,                                   /* 7 */
  1,                                   /* 8 */
  3,                                   /* 9 */
  1,                                   /* 10 */
  11,                                  /* 11 */
  1,                                   /* 12 */
  2,                                   /* 13 */
  8,                                   /* 14 */
  2,                                   /* 15 */
  1,                                   /* 16 */
  20000                                /* 17 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0, 0.001
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[0],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[0],
    1, 0 }
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
  { rtBlockSignals, 102,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 203,
    rtModelParameters, 18 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3608255700U,
    138669135U,
    394069426U,
    1547192694U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  Hybrid_PID_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void Hybrid_PID_InitializeDataMapInfo(RT_MODEL_Hybrid_PID_T *const Hybrid_PID_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(Hybrid_PID_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(Hybrid_PID_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(Hybrid_PID_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(Hybrid_PID_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(Hybrid_PID_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  Hybrid_PID_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (Hybrid_PID_M);
  Hybrid_PID_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_Hybrid_PID_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(Hybrid_PID_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(Hybrid_PID_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(Hybrid_PID_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void Hybrid_PID_host_InitializeDataMapInfo(Hybrid_PID_host_DataMapInfo_T
    *dataMap, const char *path)
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

/* EOF: Hybrid_PID_capi.c */
