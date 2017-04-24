/*
 * Pos_PID_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Pos_PID".
 *
 * Model version              : 1.326
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Fri Dec 16 02:59:46 2016
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
  { 0, 0, TARGET_STRING("Abs"),
    TARGET_STRING("Y enable"), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Abs1"),
    TARGET_STRING("X Enable"), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("Abs2"),
    TARGET_STRING("Z enable"), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("Data Store Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("Data Store Read1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 0, TARGET_STRING("Data Store Read2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("Data Type Conversion"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("Voltage"),
    TARGET_STRING("VoltageY "), 0, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("Voltage1"),
    TARGET_STRING("x Voltage"), 0, 0, 0, 0, 0 },

  { 9, 0, TARGET_STRING("Voltage2"),
    TARGET_STRING("Voltage Z "), 0, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("Logical Operator"),
    TARGET_STRING("Z enable"), 0, 1, 0, 0, 0 },

  { 11, 0, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 12, 0, TARGET_STRING("Sign"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("Sign1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Sign2"),
    TARGET_STRING("motX"), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 16, 0, TARGET_STRING("Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 18, 0, TARGET_STRING("Sum3"),
    TARGET_STRING("motY"), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Sum4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 20, 0, TARGET_STRING("Sum5"),
    TARGET_STRING("motZ"), 0, 0, 0, 0, 0 },

  { 21, 0, TARGET_STRING("PID Controller/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 22, 0, TARGET_STRING("PID Controller/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 23, 0, TARGET_STRING("PID Controller/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 24, 0, TARGET_STRING("PID Controller/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 25, 0, TARGET_STRING("PID Controller/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING("PID Controller/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 27, 0, TARGET_STRING("PID Controller/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 28, 0, TARGET_STRING("PID Controller/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 0, TARGET_STRING("PID Controller1/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 30, 0, TARGET_STRING("PID Controller1/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 0, TARGET_STRING("PID Controller1/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 32, 0, TARGET_STRING("PID Controller1/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 33, 0, TARGET_STRING("PID Controller1/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 34, 0, TARGET_STRING("PID Controller1/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 35, 0, TARGET_STRING("PID Controller1/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 36, 0, TARGET_STRING("PID Controller1/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 37, 0, TARGET_STRING("PID Controller2/Derivative Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 38, 0, TARGET_STRING("PID Controller2/Filter Coefficient"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 39, 0, TARGET_STRING("PID Controller2/Integral Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 40, 0, TARGET_STRING("PID Controller2/Proportional Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 41, 0, TARGET_STRING("PID Controller2/Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 42, 0, TARGET_STRING("PID Controller2/Integrator"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 43, 0, TARGET_STRING("PID Controller2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 44, 0, TARGET_STRING("PID Controller2/SumD"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 45, 0, TARGET_STRING("X_Encoder/count_to_mm1"),
    TARGET_STRING("X Data"), 0, 0, 0, 0, 1 },

  { 46, 0, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 1 },

  { 47, 0, TARGET_STRING("X_Encoder/Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 48, 0, TARGET_STRING("Y_encoder /count_to_mm"),
    TARGET_STRING("Y Data"), 0, 0, 0, 0, 1 },

  { 49, 0, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 1 },

  { 50, 0, TARGET_STRING("Y_encoder /Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 51, 0, TARGET_STRING("Z_encoder 1/count_to_mm"),
    TARGET_STRING("Z Data"), 0, 0, 0, 0, 1 },

  { 52, 0, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 1 },

  { 53, 0, TARGET_STRING("Z_encoder 1/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 54, TARGET_STRING("Data Store Memory"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 55, TARGET_STRING("Data Store Memory1"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 56, TARGET_STRING("Data Store Memory2"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 57, TARGET_STRING("PID Controller"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 58, TARGET_STRING("PID Controller1"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 59, TARGET_STRING("PID Controller2"),
    TARGET_STRING("N"), 0, 0, 0 },

  { 60, TARGET_STRING("Voltage"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 61, TARGET_STRING("Voltage1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 62, TARGET_STRING("Voltage2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 63, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 64, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 65, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 66, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 67, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P5"), 0, 1, 0 },

  { 68, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 69, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 70, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 71, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 72, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 73, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 74, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 75, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 76, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 77, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P5"), 0, 1, 0 },

  { 78, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 79, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 80, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 81, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 82, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 83, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 84, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 85, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 86, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 87, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P5"), 0, 1, 0 },

  { 88, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 89, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 90, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 91, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 92, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 93, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P1"), 0, 1, 0 },

  { 94, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P2"), 0, 1, 0 },

  { 95, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P3"), 0, 1, 0 },

  { 96, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P4"), 0, 1, 0 },

  { 97, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 98, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 99, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 100, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 101, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 102, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P3"), 0, 1, 0 },

  { 103, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 104, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 105, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 106, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 107, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 108, TARGET_STRING("PID Controller/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 109, TARGET_STRING("PID Controller/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 110, TARGET_STRING("PID Controller1/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 111, TARGET_STRING("PID Controller1/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 112, TARGET_STRING("PID Controller2/Filter"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 113, TARGET_STRING("PID Controller2/Integrator"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 114, TARGET_STRING("X_Encoder/encoder offsets2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 115, TARGET_STRING("X_Encoder/count_to_mm1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 116, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 117, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 118, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 119, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 120, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 121, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 122, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 123, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 124, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P9"), 0, 2, 0 },

  { 125, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 126, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 127, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 128, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 129, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 130, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 131, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 132, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 133, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 134, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 135, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 136, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 137, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 138, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 139, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 140, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 141, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 142, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 143, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 144, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 145, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 146, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 147, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 148, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 149, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 150, TARGET_STRING("X_Encoder/CNT32-8M(PCI) 2"),
    TARGET_STRING("P35"), 0, 0, 0 },

  { 151, TARGET_STRING("Y_encoder /encoder offsets1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 152, TARGET_STRING("Y_encoder /count_to_mm"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 153, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 154, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 155, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 156, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 157, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 158, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 159, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 160, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 161, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P9"), 0, 2, 0 },

  { 162, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 163, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 164, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 165, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 166, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 167, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 168, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 169, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 170, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 171, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 172, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 173, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 174, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 175, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 176, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 177, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 178, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 179, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 180, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 181, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 182, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 183, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 184, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 185, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 186, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 187, TARGET_STRING("Y_encoder /CNT32-8M(PCI) 1"),
    TARGET_STRING("P35"), 0, 0, 0 },

  { 188, TARGET_STRING("Z_encoder 1/encoder offsets1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 189, TARGET_STRING("Z_encoder 1/count_to_mm"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 190, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 191, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 192, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 193, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 194, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 195, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 196, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 197, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 198, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P9"), 0, 2, 0 },

  { 199, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 200, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 201, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 202, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 203, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 204, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 205, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 206, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 207, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 208, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 209, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 210, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 211, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 212, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 213, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 214, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 215, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 216, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 217, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 218, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 219, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 220, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 221, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 222, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 223, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 224, TARGET_STRING("Z_encoder 1/CNT32-8M(PCI) 1"),
    TARGET_STRING("P35"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 225, TARGET_STRING("jogX"), 0, 0, 0 },

  { 226, TARGET_STRING("jogY"), 0, 0, 0 },

  { 227, TARGET_STRING("jogZ"), 0, 0, 0 },

  { 228, TARGET_STRING("kdx"), 0, 0, 0 },

  { 229, TARGET_STRING("kdy"), 0, 0, 0 },

  { 230, TARGET_STRING("kdz"), 0, 0, 0 },

  { 231, TARGET_STRING("kix"), 0, 0, 0 },

  { 232, TARGET_STRING("kiy"), 0, 0, 0 },

  { 233, TARGET_STRING("kiz"), 0, 0, 0 },

  { 234, TARGET_STRING("kpx"), 0, 0, 0 },

  { 235, TARGET_STRING("kpy"), 0, 0, 0 },

  { 236, TARGET_STRING("kpz"), 0, 0, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &Pos_PID_B.Yenable,                  /* 0: Signal */
  &Pos_PID_B.XEnable,                  /* 1: Signal */
  &Pos_PID_B.Zenable,                  /* 2: Signal */
  &Pos_PID_B.DataStoreRead,            /* 3: Signal */
  &Pos_PID_B.DataStoreRead1,           /* 4: Signal */
  &Pos_PID_B.DataStoreRead2,           /* 5: Signal */
  &Pos_PID_B.DataTypeConversion,       /* 6: Signal */
  &Pos_PID_B.VoltageY,                 /* 7: Signal */
  &Pos_PID_B.xVoltage,                 /* 8: Signal */
  &Pos_PID_B.VoltageZ,                 /* 9: Signal */
  &Pos_PID_B.Zenable_e,                /* 10: Signal */
  &Pos_PID_B.PCIDDA08123,              /* 11: Signal */
  &Pos_PID_B.Sign,                     /* 12: Signal */
  &Pos_PID_B.Sign1,                    /* 13: Signal */
  &Pos_PID_B.motX,                     /* 14: Signal */
  &Pos_PID_B.Sum,                      /* 15: Signal */
  &Pos_PID_B.Sum1,                     /* 16: Signal */
  &Pos_PID_B.Sum2_n,                   /* 17: Signal */
  &Pos_PID_B.motY,                     /* 18: Signal */
  &Pos_PID_B.Sum4,                     /* 19: Signal */
  &Pos_PID_B.motZ,                     /* 20: Signal */
  &Pos_PID_B.DerivativeGain,           /* 21: Signal */
  &Pos_PID_B.FilterCoefficient,        /* 22: Signal */
  &Pos_PID_B.IntegralGain,             /* 23: Signal */
  &Pos_PID_B.ProportionalGain,         /* 24: Signal */
  &Pos_PID_B.Filter,                   /* 25: Signal */
  &Pos_PID_B.Integrator,               /* 26: Signal */
  &Pos_PID_B.Sum_l,                    /* 27: Signal */
  &Pos_PID_B.SumD,                     /* 28: Signal */
  &Pos_PID_B.DerivativeGain_d,         /* 29: Signal */
  &Pos_PID_B.FilterCoefficient_p,      /* 30: Signal */
  &Pos_PID_B.IntegralGain_d,           /* 31: Signal */
  &Pos_PID_B.ProportionalGain_e,       /* 32: Signal */
  &Pos_PID_B.Filter_l,                 /* 33: Signal */
  &Pos_PID_B.Integrator_m,             /* 34: Signal */
  &Pos_PID_B.Sum_d,                    /* 35: Signal */
  &Pos_PID_B.SumD_b,                   /* 36: Signal */
  &Pos_PID_B.DerivativeGain_f,         /* 37: Signal */
  &Pos_PID_B.FilterCoefficient_b,      /* 38: Signal */
  &Pos_PID_B.IntegralGain_l,           /* 39: Signal */
  &Pos_PID_B.ProportionalGain_d,       /* 40: Signal */
  &Pos_PID_B.Filter_b,                 /* 41: Signal */
  &Pos_PID_B.Integrator_f,             /* 42: Signal */
  &Pos_PID_B.Sum_a,                    /* 43: Signal */
  &Pos_PID_B.SumD_k,                   /* 44: Signal */
  &Pos_PID_B.XData,                    /* 45: Signal */
  &Pos_PID_B.counts,                   /* 46: Signal */
  &Pos_PID_B.Sum3,                     /* 47: Signal */
  &Pos_PID_B.YData,                    /* 48: Signal */
  &Pos_PID_B.counts_o,                 /* 49: Signal */
  &Pos_PID_B.Sum2,                     /* 50: Signal */
  &Pos_PID_B.ZData,                    /* 51: Signal */
  &Pos_PID_B.counts_f,                 /* 52: Signal */
  &Pos_PID_B.Sum2_g,                   /* 53: Signal */
  &Pos_PID_P.DataStoreMemory_InitialValue,/* 54: Block Parameter */
  &Pos_PID_P.DataStoreMemory1_InitialValue,/* 55: Block Parameter */
  &Pos_PID_P.DataStoreMemory2_InitialValue,/* 56: Block Parameter */
  &Pos_PID_P.PIDController_N,          /* 57: Mask Parameter */
  &Pos_PID_P.PIDController1_N,         /* 58: Mask Parameter */
  &Pos_PID_P.PIDController2_N,         /* 59: Mask Parameter */
  &Pos_PID_P.Voltage_Gain,             /* 60: Block Parameter */
  &Pos_PID_P.Voltage1_Gain,            /* 61: Block Parameter */
  &Pos_PID_P.Voltage2_Gain,            /* 62: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P1,           /* 63: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P2,           /* 64: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P3,           /* 65: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P4,           /* 66: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P5[0],        /* 67: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P6,           /* 68: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P7,           /* 69: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P8,           /* 70: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P9,           /* 71: Block Parameter */
  &Pos_PID_P.PCIDDA08121_P10,          /* 72: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P1_h,         /* 73: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P2_k,         /* 74: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P3_m,         /* 75: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P4_h,         /* 76: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P5_h[0],      /* 77: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P6_c,         /* 78: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P7_n,         /* 79: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P8_b,         /* 80: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P9,           /* 81: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P10,          /* 82: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P1,           /* 83: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P2,           /* 84: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P3,           /* 85: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P4,           /* 86: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P5[0],        /* 87: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P6,           /* 88: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P7,           /* 89: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P8,           /* 90: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P9,           /* 91: Block Parameter */
  &Pos_PID_P.PCIDDA08124_P10,          /* 92: Block Parameter */
  &Pos_PID_P.PCIDDA0812_P1[0],         /* 93: Block Parameter */
  &Pos_PID_P.PCIDDA0812_P2[0],         /* 94: Block Parameter */
  &Pos_PID_P.PCIDDA0812_P3[0],         /* 95: Block Parameter */
  &Pos_PID_P.PCIDDA0812_P4[0],         /* 96: Block Parameter */
  &Pos_PID_P.PCIDDA0812_P5,            /* 97: Block Parameter */
  &Pos_PID_P.PCIDDA0812_P6,            /* 98: Block Parameter */
  &Pos_PID_P.PCIDDA0812_P7,            /* 99: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P1,           /* 100: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P2,           /* 101: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P3[0],        /* 102: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P4,           /* 103: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P5,           /* 104: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P6,           /* 105: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P7,           /* 106: Block Parameter */
  &Pos_PID_P.PCIDDA08123_P8,           /* 107: Block Parameter */
  &Pos_PID_P.Filter_IC,                /* 108: Block Parameter */
  &Pos_PID_P.Integrator_IC,            /* 109: Block Parameter */
  &Pos_PID_P.Filter_IC_m,              /* 110: Block Parameter */
  &Pos_PID_P.Integrator_IC_o,          /* 111: Block Parameter */
  &Pos_PID_P.Filter_IC_k,              /* 112: Block Parameter */
  &Pos_PID_P.Integrator_IC_j,          /* 113: Block Parameter */
  &Pos_PID_P.encoderoffsets2_Value,    /* 114: Block Parameter */
  &Pos_PID_P.count_to_mm1_Gain,        /* 115: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P1,           /* 116: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P2,           /* 117: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P3,           /* 118: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P4,           /* 119: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P5,           /* 120: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P6,           /* 121: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P7,           /* 122: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P8,           /* 123: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P9[0],        /* 124: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P10,          /* 125: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P11,          /* 126: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P12,          /* 127: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P13,          /* 128: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P14,          /* 129: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P15,          /* 130: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P16,          /* 131: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P17,          /* 132: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P18,          /* 133: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P19,          /* 134: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P20,          /* 135: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P21,          /* 136: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P22,          /* 137: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P23,          /* 138: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P24,          /* 139: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P25,          /* 140: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P26,          /* 141: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P27,          /* 142: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P28,          /* 143: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P29,          /* 144: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P30,          /* 145: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P31,          /* 146: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P32,          /* 147: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P33,          /* 148: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P34,          /* 149: Block Parameter */
  &Pos_PID_P.CNT328MPCI2_P35,          /* 150: Block Parameter */
  &Pos_PID_P.encoderoffsets1_Value,    /* 151: Block Parameter */
  &Pos_PID_P.count_to_mm_Gain,         /* 152: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P1,           /* 153: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P2,           /* 154: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P3,           /* 155: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P4,           /* 156: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P5,           /* 157: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P6,           /* 158: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P7,           /* 159: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P8,           /* 160: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P9[0],        /* 161: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P10,          /* 162: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P11,          /* 163: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P12,          /* 164: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P13,          /* 165: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P14,          /* 166: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P15,          /* 167: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P16,          /* 168: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P17,          /* 169: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P18,          /* 170: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P19,          /* 171: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P20,          /* 172: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P21,          /* 173: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P22,          /* 174: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P23,          /* 175: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P24,          /* 176: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P25,          /* 177: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P26,          /* 178: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P27,          /* 179: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P28,          /* 180: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P29,          /* 181: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P30,          /* 182: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P31,          /* 183: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P32,          /* 184: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P33,          /* 185: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P34,          /* 186: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P35,          /* 187: Block Parameter */
  &Pos_PID_P.encoderoffsets1_Value_f,  /* 188: Block Parameter */
  &Pos_PID_P.count_to_mm_Gain_j,       /* 189: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P1_d,         /* 190: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P2_k,         /* 191: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P3_j,         /* 192: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P4_g,         /* 193: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P5_i,         /* 194: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P6_l,         /* 195: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P7_i,         /* 196: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P8_n,         /* 197: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P9_k[0],      /* 198: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P10_l,        /* 199: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P11_c,        /* 200: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P12_l,        /* 201: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P13_p,        /* 202: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P14_j,        /* 203: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P15_l,        /* 204: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P16_d,        /* 205: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P17_b,        /* 206: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P18_b,        /* 207: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P19_m,        /* 208: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P20_i,        /* 209: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P21_b,        /* 210: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P22_l,        /* 211: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P23_e,        /* 212: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P24_g,        /* 213: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P25_e,        /* 214: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P26_e,        /* 215: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P27_g,        /* 216: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P28_a,        /* 217: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P29_o,        /* 218: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P30_h,        /* 219: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P31_l,        /* 220: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P32_p,        /* 221: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P33_g,        /* 222: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P34_n,        /* 223: Block Parameter */
  &Pos_PID_P.CNT328MPCI1_P35_p,        /* 224: Block Parameter */
  &Pos_PID_P.jogX,                     /* 225: Model Parameter */
  &Pos_PID_P.jogY,                     /* 226: Model Parameter */
  &Pos_PID_P.jogZ,                     /* 227: Model Parameter */
  &Pos_PID_P.kdx,                      /* 228: Model Parameter */
  &Pos_PID_P.kdy,                      /* 229: Model Parameter */
  &Pos_PID_P.kdz,                      /* 230: Model Parameter */
  &Pos_PID_P.kix,                      /* 231: Model Parameter */
  &Pos_PID_P.kiy,                      /* 232: Model Parameter */
  &Pos_PID_P.kiz,                      /* 233: Model Parameter */
  &Pos_PID_P.kpx,                      /* 234: Model Parameter */
  &Pos_PID_P.kpy,                      /* 235: Model Parameter */
  &Pos_PID_P.kpz,                      /* 236: Model Parameter */
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

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 }
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

  { rtwCAPI_VECTOR, 4, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  1,                                   /* 2 */
  3,                                   /* 3 */
  1,                                   /* 4 */
  2                                    /* 5 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0, 0.01
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
  { rtBlockSignals, 54,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 171,
    rtModelParameters, 12 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2688939128U,
    1128513566U,
    3827148699U,
    1780712075U },
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
