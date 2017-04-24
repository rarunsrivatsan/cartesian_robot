/*
 * backup_test2_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "backup_test2".
 *
 * Model version              : 1.167
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Thu Nov 24 00:10:44 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "backup_test2_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "backup_test2.h"
#include "backup_test2_capi.h"
#include "backup_test2_private.h"
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

  { 2, 0, TARGET_STRING("Abs"),
    TARGET_STRING("Y enable"), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("Abs1"),
    TARGET_STRING("X Enable"), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("Voltage"),
    TARGET_STRING("VoltageY "), 0, 0, 0, 0, 0 },

  { 5, 0, TARGET_STRING("Voltage1"),
    TARGET_STRING("x Voltage"), 0, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("count_to_mm"),
    TARGET_STRING("Current Y"), 0, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("count_to_mm1"),
    TARGET_STRING("Current X"), 0, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("Byte Unpacking 1"),
    TARGET_STRING("Force Data"), 0, 0, 1, 0, 0 },

  { 9, 0, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("Limit Switch"), 0, 0, 0, 0, 0 },

  { 12, 0, TARGET_STRING("Receive 1/p1"),
    TARGET_STRING(""), 0, 1, 2, 0, 0 },

  { 13, 0, TARGET_STRING("Receive 1/p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Sign"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Sign1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 0, TARGET_STRING("Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("Sum3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 18, TARGET_STRING("encoder offsets1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 19, TARGET_STRING("encoder offsets2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 20, TARGET_STRING("Voltage"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 21, TARGET_STRING("Voltage1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 22, TARGET_STRING("count_to_mm"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 23, TARGET_STRING("count_to_mm1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 24, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 25, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 26, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 27, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 28, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 29, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 30, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 31, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 32, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P9"), 0, 3, 0 },

  { 33, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 34, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 35, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 36, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 37, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 38, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 39, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 40, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 41, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 42, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 43, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 44, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 45, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 46, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 47, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 48, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 49, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 50, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 51, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 52, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 53, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 54, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 55, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 56, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 57, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 58, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P35"), 0, 0, 0 },

  { 59, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 60, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 61, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 62, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 63, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 64, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 65, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 66, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 67, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P9"), 0, 3, 0 },

  { 68, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 69, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 70, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 71, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 72, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 73, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 74, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 75, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 76, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 77, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 78, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 79, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 80, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 81, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 82, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 83, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 84, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 85, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 86, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 87, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 88, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 89, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 90, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 91, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 92, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 93, TARGET_STRING("CNT32-8M(PCI) 2"),
    TARGET_STRING("P35"), 0, 0, 0 },

  { 94, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 95, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 96, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 97, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 98, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P5"), 0, 4, 0 },

  { 99, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 100, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 101, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 102, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 103, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 104, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 105, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 106, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 107, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 108, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P5"), 0, 4, 0 },

  { 109, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 110, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 111, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 112, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 113, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 114, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P1"), 0, 3, 0 },

  { 115, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P2"), 0, 3, 0 },

  { 116, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P3"), 0, 3, 0 },

  { 117, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P4"), 0, 3, 0 },

  { 118, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 119, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 120, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 121, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 122, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 123, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P3"), 0, 4, 0 },

  { 124, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 125, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 126, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 127, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 128, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 129, TARGET_STRING("Receive 1"),
    TARGET_STRING("P1"), 0, 5, 0 },

  { 130, TARGET_STRING("Receive 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 131, TARGET_STRING("Receive 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 132, TARGET_STRING("Receive 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 133, TARGET_STRING("Receive 1"),
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
  &backup_test2_B.motX,                /* 0: Signal */
  &backup_test2_B.motY,                /* 1: Signal */
  &backup_test2_B.Yenable,             /* 2: Signal */
  &backup_test2_B.XEnable,             /* 3: Signal */
  &backup_test2_B.VoltageY,            /* 4: Signal */
  &backup_test2_B.xVoltage,            /* 5: Signal */
  &backup_test2_B.CurrentY,            /* 6: Signal */
  &backup_test2_B.CurrentX,            /* 7: Signal */
  &backup_test2_B.ForceData[0],        /* 8: Signal */
  &backup_test2_B.counts_o,            /* 9: Signal */
  &backup_test2_B.counts,              /* 10: Signal */
  &backup_test2_B.LimitSwitch,         /* 11: Signal */
  &backup_test2_B.Receive1_o1[0],      /* 12: Signal */
  &backup_test2_B.Receive1_o2,         /* 13: Signal */
  &backup_test2_B.Sign,                /* 14: Signal */
  &backup_test2_B.Sign1,               /* 15: Signal */
  &backup_test2_B.Sum2,                /* 16: Signal */
  &backup_test2_B.Sum3,                /* 17: Signal */
  &backup_test2_P.encoderoffsets1_Value,/* 18: Block Parameter */
  &backup_test2_P.encoderoffsets2_Value,/* 19: Block Parameter */
  &backup_test2_P.Voltage_Gain,        /* 20: Block Parameter */
  &backup_test2_P.Voltage1_Gain,       /* 21: Block Parameter */
  &backup_test2_P.count_to_mm_Gain,    /* 22: Block Parameter */
  &backup_test2_P.count_to_mm1_Gain,   /* 23: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P1,      /* 24: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P2,      /* 25: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P3,      /* 26: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P4,      /* 27: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P5,      /* 28: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P6,      /* 29: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P7,      /* 30: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P8,      /* 31: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P9[0],   /* 32: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P10,     /* 33: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P11,     /* 34: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P12,     /* 35: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P13,     /* 36: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P14,     /* 37: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P15,     /* 38: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P16,     /* 39: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P17,     /* 40: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P18,     /* 41: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P19,     /* 42: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P20,     /* 43: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P21,     /* 44: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P22,     /* 45: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P23,     /* 46: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P24,     /* 47: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P25,     /* 48: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P26,     /* 49: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P27,     /* 50: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P28,     /* 51: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P29,     /* 52: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P30,     /* 53: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P31,     /* 54: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P32,     /* 55: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P33,     /* 56: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P34,     /* 57: Block Parameter */
  &backup_test2_P.CNT328MPCI1_P35,     /* 58: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P1,      /* 59: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P2,      /* 60: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P3,      /* 61: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P4,      /* 62: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P5,      /* 63: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P6,      /* 64: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P7,      /* 65: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P8,      /* 66: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P9[0],   /* 67: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P10,     /* 68: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P11,     /* 69: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P12,     /* 70: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P13,     /* 71: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P14,     /* 72: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P15,     /* 73: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P16,     /* 74: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P17,     /* 75: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P18,     /* 76: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P19,     /* 77: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P20,     /* 78: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P21,     /* 79: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P22,     /* 80: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P23,     /* 81: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P24,     /* 82: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P25,     /* 83: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P26,     /* 84: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P27,     /* 85: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P28,     /* 86: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P29,     /* 87: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P30,     /* 88: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P31,     /* 89: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P32,     /* 90: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P33,     /* 91: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P34,     /* 92: Block Parameter */
  &backup_test2_P.CNT328MPCI2_P35,     /* 93: Block Parameter */
  &backup_test2_P.PCIDDA08123_P1,      /* 94: Block Parameter */
  &backup_test2_P.PCIDDA08123_P2,      /* 95: Block Parameter */
  &backup_test2_P.PCIDDA08123_P3,      /* 96: Block Parameter */
  &backup_test2_P.PCIDDA08123_P4,      /* 97: Block Parameter */
  &backup_test2_P.PCIDDA08123_P5[0],   /* 98: Block Parameter */
  &backup_test2_P.PCIDDA08123_P6,      /* 99: Block Parameter */
  &backup_test2_P.PCIDDA08123_P7,      /* 100: Block Parameter */
  &backup_test2_P.PCIDDA08123_P8,      /* 101: Block Parameter */
  &backup_test2_P.PCIDDA08123_P9,      /* 102: Block Parameter */
  &backup_test2_P.PCIDDA08123_P10,     /* 103: Block Parameter */
  &backup_test2_P.PCIDDA08124_P1,      /* 104: Block Parameter */
  &backup_test2_P.PCIDDA08124_P2,      /* 105: Block Parameter */
  &backup_test2_P.PCIDDA08124_P3,      /* 106: Block Parameter */
  &backup_test2_P.PCIDDA08124_P4,      /* 107: Block Parameter */
  &backup_test2_P.PCIDDA08124_P5[0],   /* 108: Block Parameter */
  &backup_test2_P.PCIDDA08124_P6,      /* 109: Block Parameter */
  &backup_test2_P.PCIDDA08124_P7,      /* 110: Block Parameter */
  &backup_test2_P.PCIDDA08124_P8,      /* 111: Block Parameter */
  &backup_test2_P.PCIDDA08124_P9,      /* 112: Block Parameter */
  &backup_test2_P.PCIDDA08124_P10,     /* 113: Block Parameter */
  &backup_test2_P.PCIDDA0812_P1[0],    /* 114: Block Parameter */
  &backup_test2_P.PCIDDA0812_P2[0],    /* 115: Block Parameter */
  &backup_test2_P.PCIDDA0812_P3[0],    /* 116: Block Parameter */
  &backup_test2_P.PCIDDA0812_P4[0],    /* 117: Block Parameter */
  &backup_test2_P.PCIDDA0812_P5,       /* 118: Block Parameter */
  &backup_test2_P.PCIDDA0812_P6,       /* 119: Block Parameter */
  &backup_test2_P.PCIDDA0812_P7,       /* 120: Block Parameter */
  &backup_test2_P.PCIDDA08121_P1,      /* 121: Block Parameter */
  &backup_test2_P.PCIDDA08121_P2,      /* 122: Block Parameter */
  &backup_test2_P.PCIDDA08121_P3[0],   /* 123: Block Parameter */
  &backup_test2_P.PCIDDA08121_P4,      /* 124: Block Parameter */
  &backup_test2_P.PCIDDA08121_P5,      /* 125: Block Parameter */
  &backup_test2_P.PCIDDA08121_P6,      /* 126: Block Parameter */
  &backup_test2_P.PCIDDA08121_P7,      /* 127: Block Parameter */
  &backup_test2_P.PCIDDA08121_P8,      /* 128: Block Parameter */
  &backup_test2_P.Receive1_P1[0],      /* 129: Block Parameter */
  &backup_test2_P.Receive1_P2,         /* 130: Block Parameter */
  &backup_test2_P.Receive1_P3,         /* 131: Block Parameter */
  &backup_test2_P.Receive1_P4,         /* 132: Block Parameter */
  &backup_test2_P.Receive1_P5,         /* 133: Block Parameter */
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
  { rtBlockSignals, 18,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 116,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 1682473633U,
    3642393137U,
    639667944U,
    3302706115U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  backup_test2_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void backup_test2_InitializeDataMapInfo(RT_MODEL_backup_test2_T *const
  backup_test2_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(backup_test2_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(backup_test2_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(backup_test2_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(backup_test2_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(backup_test2_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  backup_test2_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (backup_test2_M);
  backup_test2_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_backup_test2_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(backup_test2_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(backup_test2_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(backup_test2_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void backup_test2_host_InitializeDataMapInfo(backup_test2_host_DataMapInfo_T
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

/* EOF: backup_test2_capi.c */
