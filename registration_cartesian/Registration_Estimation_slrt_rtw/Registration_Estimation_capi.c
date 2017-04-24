/*
 * Registration_Estimation_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Registration_Estimation".
 *
 * Model version              : 1.290
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Fri Dec 09 04:39:28 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Registration_Estimation_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "Registration_Estimation.h"
#include "Registration_Estimation_capi.h"
#include "Registration_Estimation_private.h"
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
  { 0, 1, TARGET_STRING("MATLAB Function/p1"),
    TARGET_STRING("motX"), 0, 0, 0, 0, 0 },

  { 1, 1, TARGET_STRING("MATLAB Function/p2"),
    TARGET_STRING("motY"), 1, 0, 0, 0, 0 },

  { 2, 2, TARGET_STRING("MATLAB Function1"),
    TARGET_STRING("Signal 1"), 0, 0, 0, 0, 0 },

  { 3, 3, TARGET_STRING("MATLAB Function2/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 3, TARGET_STRING("MATLAB Function2/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 5, 4, TARGET_STRING("MATLAB Function3/p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 4, TARGET_STRING("MATLAB Function3/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 7, 4, TARGET_STRING("MATLAB Function3/p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("Abs"),
    TARGET_STRING("Y enable"), 0, 0, 0, 0, 0 },

  { 9, 0, TARGET_STRING("Abs1"),
    TARGET_STRING("X Enable"), 0, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("Abs2"),
    TARGET_STRING("Y enable"), 0, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("Data Store Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 0, TARGET_STRING("Data Store Read1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("Data Store Read2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Data Store Read3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Voltage"),
    TARGET_STRING("VoltageY "), 0, 0, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Voltage1"),
    TARGET_STRING("x Voltage"), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Voltage2"),
    TARGET_STRING("VoltageY "), 0, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("count_to_mm"),
    TARGET_STRING("Y Data"), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("count_to_mm1"),
    TARGET_STRING("X Data"), 0, 0, 0, 0, 0 },

  { 20, 0, TARGET_STRING("count_to_mm2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 0, TARGET_STRING("Hit  Crossing"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 22, 0, TARGET_STRING("Byte Unpacking 1"),
    TARGET_STRING("orce Data"), 0, 0, 1, 0, 0 },

  { 23, 0, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 0 },

  { 24, 0, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 0 },

  { 25, 0, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 0 },

  { 26, 0, TARGET_STRING("Receive 1/p1"),
    TARGET_STRING(""), 0, 2, 2, 0, 0 },

  { 27, 0, TARGET_STRING("Receive 1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 28, 0, TARGET_STRING("Sign"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 29, 0, TARGET_STRING("Sign1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 30, 0, TARGET_STRING("Sign2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 31, 0, TARGET_STRING("Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 32, 0, TARGET_STRING("Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 33, 0, TARGET_STRING("Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 34, TARGET_STRING("Data Store Memory"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 35, TARGET_STRING("Data Store Memory1"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 36, TARGET_STRING("Data Store Memory2"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 37, TARGET_STRING("Data Store Memory3"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 38, TARGET_STRING("encoder offsets1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 39, TARGET_STRING("encoder offsets2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 40, TARGET_STRING("encoder offsets3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 41, TARGET_STRING("Voltage"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 42, TARGET_STRING("Voltage1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 43, TARGET_STRING("Voltage2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 44, TARGET_STRING("count_to_mm"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 45, TARGET_STRING("count_to_mm1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 46, TARGET_STRING("count_to_mm2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 47, TARGET_STRING("Hit  Crossing"),
    TARGET_STRING("HitCrossingOffset"), 0, 0, 0 },

  { 48, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 49, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 50, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 51, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 52, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 53, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 54, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 55, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 56, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P9"), 0, 3, 0 },

  { 57, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 58, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 59, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 60, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 61, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 62, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 63, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 64, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 65, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 66, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 67, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 68, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 69, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 70, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 71, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 72, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 73, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 74, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 75, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 76, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 77, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 78, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 79, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 80, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 81, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 82, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P35"), 0, 0, 0 },

  { 83, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 84, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 85, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 86, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 87, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 88, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 89, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 90, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 91, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P9"), 0, 3, 0 },

  { 92, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 93, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 94, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 95, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 96, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 97, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 98, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 99, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 100, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 101, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 102, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 103, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 104, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 105, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 106, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 107, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 108, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 109, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 110, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 111, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 112, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 113, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 114, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 115, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 116, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 117, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P35"), 0, 0, 0 },

  { 118, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 119, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 120, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 121, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 122, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 123, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 124, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 125, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 126, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P9"), 0, 3, 0 },

  { 127, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 128, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 129, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 130, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 131, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 132, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 133, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 134, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 135, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 136, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 137, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 138, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 139, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 140, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 141, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 142, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 143, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 144, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 145, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 146, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 147, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 148, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 149, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 150, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 151, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 152, TARGET_STRING("CNT32-8M(PCI) 3"),
    TARGET_STRING("P35"), 0, 0, 0 },

  { 153, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 154, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 155, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 156, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 157, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P5"), 0, 4, 0 },

  { 158, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 159, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 160, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 161, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 162, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 163, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 164, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 165, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 166, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 167, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P5"), 0, 4, 0 },

  { 168, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 169, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 170, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 171, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 172, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 173, TARGET_STRING("PCI-DDA 08 12 5"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 174, TARGET_STRING("PCI-DDA 08 12 5"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 175, TARGET_STRING("PCI-DDA 08 12 5"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 176, TARGET_STRING("PCI-DDA 08 12 5"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 177, TARGET_STRING("PCI-DDA 08 12 5"),
    TARGET_STRING("P5"), 0, 4, 0 },

  { 178, TARGET_STRING("PCI-DDA 08 12 5"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 179, TARGET_STRING("PCI-DDA 08 12 5"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 180, TARGET_STRING("PCI-DDA 08 12 5"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 181, TARGET_STRING("PCI-DDA 08 12 5"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 182, TARGET_STRING("PCI-DDA 08 12 5"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 183, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P1"), 0, 4, 0 },

  { 184, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P2"), 0, 4, 0 },

  { 185, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P3"), 0, 4, 0 },

  { 186, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P4"), 0, 4, 0 },

  { 187, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 188, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 189, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 190, TARGET_STRING("Receive 1"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 191, TARGET_STRING("Receive 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 192, TARGET_STRING("Receive 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 193, TARGET_STRING("Receive 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 194, TARGET_STRING("Receive 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &Registration_Estimation_B.motX,     /* 0: Signal */
  &Registration_Estimation_B.motY,     /* 1: Signal */
  &Registration_Estimation_B.sel_o,    /* 2: Signal */
  &Registration_Estimation_B.newX,     /* 3: Signal */
  &Registration_Estimation_B.newY,     /* 4: Signal */
  &Registration_Estimation_B.motZ,     /* 5: Signal */
  &Registration_Estimation_B.zdir,     /* 6: Signal */
  &Registration_Estimation_B.sel,      /* 7: Signal */
  &Registration_Estimation_B.Yenable,  /* 8: Signal */
  &Registration_Estimation_B.XEnable,  /* 9: Signal */
  &Registration_Estimation_B.Yenable_f,/* 10: Signal */
  &Registration_Estimation_B.DataStoreRead,/* 11: Signal */
  &Registration_Estimation_B.DataStoreRead1,/* 12: Signal */
  &Registration_Estimation_B.DataStoreRead2,/* 13: Signal */
  &Registration_Estimation_B.DataStoreRead3,/* 14: Signal */
  &Registration_Estimation_B.VoltageY, /* 15: Signal */
  &Registration_Estimation_B.xVoltage, /* 16: Signal */
  &Registration_Estimation_B.VoltageY_j,/* 17: Signal */
  &Registration_Estimation_B.YData,    /* 18: Signal */
  &Registration_Estimation_B.XData,    /* 19: Signal */
  &Registration_Estimation_B.count_to_mm2,/* 20: Signal */
  &Registration_Estimation_B.HitCrossing,/* 21: Signal */
  &Registration_Estimation_B.orceData[0],/* 22: Signal */
  &Registration_Estimation_B.counts_o, /* 23: Signal */
  &Registration_Estimation_B.counts_g, /* 24: Signal */
  &Registration_Estimation_B.counts,   /* 25: Signal */
  &Registration_Estimation_B.Receive1_o1[0],/* 26: Signal */
  &Registration_Estimation_B.Receive1_o2,/* 27: Signal */
  &Registration_Estimation_B.Sign,     /* 28: Signal */
  &Registration_Estimation_B.Sign1,    /* 29: Signal */
  &Registration_Estimation_B.Sign2,    /* 30: Signal */
  &Registration_Estimation_B.Sum1,     /* 31: Signal */
  &Registration_Estimation_B.Sum2,     /* 32: Signal */
  &Registration_Estimation_B.Sum3,     /* 33: Signal */
  &Registration_Estimation_P.DataStoreMemory_InitialValue,/* 34: Block Parameter */
  &Registration_Estimation_P.DataStoreMemory1_InitialValue,/* 35: Block Parameter */
  &Registration_Estimation_P.DataStoreMemory2_InitialValue,/* 36: Block Parameter */
  &Registration_Estimation_P.DataStoreMemory3_InitialValue,/* 37: Block Parameter */
  &Registration_Estimation_P.encoderoffsets1_Value,/* 38: Block Parameter */
  &Registration_Estimation_P.encoderoffsets2_Value,/* 39: Block Parameter */
  &Registration_Estimation_P.encoderoffsets3_Value,/* 40: Block Parameter */
  &Registration_Estimation_P.Voltage_Gain,/* 41: Block Parameter */
  &Registration_Estimation_P.Voltage1_Gain,/* 42: Block Parameter */
  &Registration_Estimation_P.Voltage2_Gain,/* 43: Block Parameter */
  &Registration_Estimation_P.count_to_mm_Gain,/* 44: Block Parameter */
  &Registration_Estimation_P.count_to_mm1_Gain,/* 45: Block Parameter */
  &Registration_Estimation_P.count_to_mm2_Gain,/* 46: Block Parameter */
  &Registration_Estimation_P.HitCrossing_Offset,/* 47: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P1,/* 48: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P2,/* 49: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P3,/* 50: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P4,/* 51: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P5,/* 52: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P6,/* 53: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P7,/* 54: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P8,/* 55: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P9[0],/* 56: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P10,/* 57: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P11,/* 58: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P12,/* 59: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P13,/* 60: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P14,/* 61: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P15,/* 62: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P16,/* 63: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P17,/* 64: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P18,/* 65: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P19,/* 66: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P20,/* 67: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P21,/* 68: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P22,/* 69: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P23,/* 70: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P24,/* 71: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P25,/* 72: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P26,/* 73: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P27,/* 74: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P28,/* 75: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P29,/* 76: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P30,/* 77: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P31,/* 78: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P32,/* 79: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P33,/* 80: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P34,/* 81: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI1_P35,/* 82: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P1,/* 83: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P2,/* 84: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P3,/* 85: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P4,/* 86: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P5,/* 87: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P6,/* 88: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P7,/* 89: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P8,/* 90: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P9[0],/* 91: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P10,/* 92: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P11,/* 93: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P12,/* 94: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P13,/* 95: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P14,/* 96: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P15,/* 97: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P16,/* 98: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P17,/* 99: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P18,/* 100: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P19,/* 101: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P20,/* 102: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P21,/* 103: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P22,/* 104: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P23,/* 105: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P24,/* 106: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P25,/* 107: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P26,/* 108: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P27,/* 109: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P28,/* 110: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P29,/* 111: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P30,/* 112: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P31,/* 113: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P32,/* 114: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P33,/* 115: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P34,/* 116: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI2_P35,/* 117: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P1,/* 118: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P2,/* 119: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P3,/* 120: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P4,/* 121: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P5,/* 122: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P6,/* 123: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P7,/* 124: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P8,/* 125: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P9[0],/* 126: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P10,/* 127: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P11,/* 128: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P12,/* 129: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P13,/* 130: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P14,/* 131: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P15,/* 132: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P16,/* 133: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P17,/* 134: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P18,/* 135: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P19,/* 136: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P20,/* 137: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P21,/* 138: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P22,/* 139: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P23,/* 140: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P24,/* 141: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P25,/* 142: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P26,/* 143: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P27,/* 144: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P28,/* 145: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P29,/* 146: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P30,/* 147: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P31,/* 148: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P32,/* 149: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P33,/* 150: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P34,/* 151: Block Parameter */
  &Registration_Estimation_P.CNT328MPCI3_P35,/* 152: Block Parameter */
  &Registration_Estimation_P.PCIDDA08123_P1,/* 153: Block Parameter */
  &Registration_Estimation_P.PCIDDA08123_P2,/* 154: Block Parameter */
  &Registration_Estimation_P.PCIDDA08123_P3,/* 155: Block Parameter */
  &Registration_Estimation_P.PCIDDA08123_P4,/* 156: Block Parameter */
  &Registration_Estimation_P.PCIDDA08123_P5[0],/* 157: Block Parameter */
  &Registration_Estimation_P.PCIDDA08123_P6,/* 158: Block Parameter */
  &Registration_Estimation_P.PCIDDA08123_P7,/* 159: Block Parameter */
  &Registration_Estimation_P.PCIDDA08123_P8,/* 160: Block Parameter */
  &Registration_Estimation_P.PCIDDA08123_P9,/* 161: Block Parameter */
  &Registration_Estimation_P.PCIDDA08123_P10,/* 162: Block Parameter */
  &Registration_Estimation_P.PCIDDA08124_P1,/* 163: Block Parameter */
  &Registration_Estimation_P.PCIDDA08124_P2,/* 164: Block Parameter */
  &Registration_Estimation_P.PCIDDA08124_P3,/* 165: Block Parameter */
  &Registration_Estimation_P.PCIDDA08124_P4,/* 166: Block Parameter */
  &Registration_Estimation_P.PCIDDA08124_P5[0],/* 167: Block Parameter */
  &Registration_Estimation_P.PCIDDA08124_P6,/* 168: Block Parameter */
  &Registration_Estimation_P.PCIDDA08124_P7,/* 169: Block Parameter */
  &Registration_Estimation_P.PCIDDA08124_P8,/* 170: Block Parameter */
  &Registration_Estimation_P.PCIDDA08124_P9,/* 171: Block Parameter */
  &Registration_Estimation_P.PCIDDA08124_P10,/* 172: Block Parameter */
  &Registration_Estimation_P.PCIDDA08125_P1,/* 173: Block Parameter */
  &Registration_Estimation_P.PCIDDA08125_P2,/* 174: Block Parameter */
  &Registration_Estimation_P.PCIDDA08125_P3,/* 175: Block Parameter */
  &Registration_Estimation_P.PCIDDA08125_P4,/* 176: Block Parameter */
  &Registration_Estimation_P.PCIDDA08125_P5[0],/* 177: Block Parameter */
  &Registration_Estimation_P.PCIDDA08125_P6,/* 178: Block Parameter */
  &Registration_Estimation_P.PCIDDA08125_P7,/* 179: Block Parameter */
  &Registration_Estimation_P.PCIDDA08125_P8,/* 180: Block Parameter */
  &Registration_Estimation_P.PCIDDA08125_P9,/* 181: Block Parameter */
  &Registration_Estimation_P.PCIDDA08125_P10,/* 182: Block Parameter */
  &Registration_Estimation_P.PCIDDA0812_P1[0],/* 183: Block Parameter */
  &Registration_Estimation_P.PCIDDA0812_P2[0],/* 184: Block Parameter */
  &Registration_Estimation_P.PCIDDA0812_P3[0],/* 185: Block Parameter */
  &Registration_Estimation_P.PCIDDA0812_P4[0],/* 186: Block Parameter */
  &Registration_Estimation_P.PCIDDA0812_P5,/* 187: Block Parameter */
  &Registration_Estimation_P.PCIDDA0812_P6,/* 188: Block Parameter */
  &Registration_Estimation_P.PCIDDA0812_P7,/* 189: Block Parameter */
  &Registration_Estimation_P.Receive1_P1[0],/* 190: Block Parameter */
  &Registration_Estimation_P.Receive1_P2,/* 191: Block Parameter */
  &Registration_Estimation_P.Receive1_P3,/* 192: Block Parameter */
  &Registration_Estimation_P.Receive1_P4,/* 193: Block Parameter */
  &Registration_Estimation_P.Receive1_P5,/* 194: Block Parameter */
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

  { rtwCAPI_VECTOR, 10, 2, 0 }
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
  2,                                   /* 7 */
  1,                                   /* 8 */
  3,                                   /* 9 */
  1,                                   /* 10 */
  11                                   /* 11 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.01, 0.0
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
  { rtBlockSignals, 34,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 161,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1468360816U,
    1516260871U,
    2080269065U,
    3717882158U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  Registration_Estimation_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void Registration_Estimation_InitializeDataMapInfo
  (RT_MODEL_Registration_Estimation_T *const Registration_Estimation_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(Registration_Estimation_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(Registration_Estimation_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(Registration_Estimation_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(Registration_Estimation_M->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(Registration_Estimation_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  Registration_Estimation_M->DataMapInfo.mmi.InstanceMap.rtpAddress =
    rtmGetDefaultParam(Registration_Estimation_M);
  Registration_Estimation_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_Registration_Estimation_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(Registration_Estimation_M->DataMapInfo.mmi,
    (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(Registration_Estimation_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(Registration_Estimation_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void Registration_Estimation_host_InitializeDataMapInfo
    (Registration_Estimation_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: Registration_Estimation_capi.c */
