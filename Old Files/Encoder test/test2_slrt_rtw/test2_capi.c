/*
 * test2_capi.c
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

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "test2_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "test2.h"
#include "test2_capi.h"
#include "test2_private.h"
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
  { 0, 0, TARGET_STRING("count_to_rev2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("counts"), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("Limit Switch"), 0, 0, 0, 0, 1 },

  { 3, 0, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("Limit Switch"), 0, 0, 0, 0, 1 },

  { 4, 0, TARGET_STRING("Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 5, TARGET_STRING("encoder offsets1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 6, TARGET_STRING("count_to_rev2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 7, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 8, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 9, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 10, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 11, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 12, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 13, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 14, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 15, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P9"), 0, 1, 0 },

  { 16, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 17, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P11"), 0, 0, 0 },

  { 18, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P12"), 0, 0, 0 },

  { 19, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P13"), 0, 0, 0 },

  { 20, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P14"), 0, 0, 0 },

  { 21, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P15"), 0, 0, 0 },

  { 22, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P16"), 0, 0, 0 },

  { 23, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P17"), 0, 0, 0 },

  { 24, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P18"), 0, 0, 0 },

  { 25, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P19"), 0, 0, 0 },

  { 26, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P20"), 0, 0, 0 },

  { 27, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P21"), 0, 0, 0 },

  { 28, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P22"), 0, 0, 0 },

  { 29, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P23"), 0, 0, 0 },

  { 30, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P24"), 0, 0, 0 },

  { 31, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P25"), 0, 0, 0 },

  { 32, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P26"), 0, 0, 0 },

  { 33, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P27"), 0, 0, 0 },

  { 34, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P28"), 0, 0, 0 },

  { 35, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P29"), 0, 0, 0 },

  { 36, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P30"), 0, 0, 0 },

  { 37, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P31"), 0, 0, 0 },

  { 38, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P32"), 0, 0, 0 },

  { 39, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P33"), 0, 0, 0 },

  { 40, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P34"), 0, 0, 0 },

  { 41, TARGET_STRING("CNT32-8M(PCI) 1"),
    TARGET_STRING("P35"), 0, 0, 0 },

  { 42, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 43, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 44, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 45, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 46, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P5"), 0, 2, 0 },

  { 47, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 48, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 49, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 50, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 51, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 52, TARGET_STRING("PCI-DDA 08 12 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 53, TARGET_STRING("PCI-DDA 08 12 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 54, TARGET_STRING("PCI-DDA 08 12 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 55, TARGET_STRING("PCI-DDA 08 12 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 56, TARGET_STRING("PCI-DDA 08 12 2"),
    TARGET_STRING("P5"), 0, 2, 0 },

  { 57, TARGET_STRING("PCI-DDA 08 12 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 58, TARGET_STRING("PCI-DDA 08 12 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 59, TARGET_STRING("PCI-DDA 08 12 2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 60, TARGET_STRING("PCI-DDA 08 12 2"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 61, TARGET_STRING("PCI-DDA 08 12 2"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 62, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 63, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 64, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P3"), 0, 2, 0 },

  { 65, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 66, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 67, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 68, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 69, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 70, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 71, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 72, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P3"), 0, 2, 0 },

  { 73, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 74, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 75, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 76, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 77, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

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
  &test2_B.count_to_rev2,              /* 0: Signal */
  &test2_B.counts,                     /* 1: Signal */
  &test2_B.LimitSwitch,                /* 2: Signal */
  &test2_B.LimitSwitch_a,              /* 3: Signal */
  &test2_B.Sum2,                       /* 4: Signal */
  &test2_P.encoderoffsets1_Value,      /* 5: Block Parameter */
  &test2_P.count_to_rev2_Gain,         /* 6: Block Parameter */
  &test2_P.CNT328MPCI1_P1,             /* 7: Block Parameter */
  &test2_P.CNT328MPCI1_P2,             /* 8: Block Parameter */
  &test2_P.CNT328MPCI1_P3,             /* 9: Block Parameter */
  &test2_P.CNT328MPCI1_P4,             /* 10: Block Parameter */
  &test2_P.CNT328MPCI1_P5,             /* 11: Block Parameter */
  &test2_P.CNT328MPCI1_P6,             /* 12: Block Parameter */
  &test2_P.CNT328MPCI1_P7,             /* 13: Block Parameter */
  &test2_P.CNT328MPCI1_P8,             /* 14: Block Parameter */
  &test2_P.CNT328MPCI1_P9[0],          /* 15: Block Parameter */
  &test2_P.CNT328MPCI1_P10,            /* 16: Block Parameter */
  &test2_P.CNT328MPCI1_P11,            /* 17: Block Parameter */
  &test2_P.CNT328MPCI1_P12,            /* 18: Block Parameter */
  &test2_P.CNT328MPCI1_P13,            /* 19: Block Parameter */
  &test2_P.CNT328MPCI1_P14,            /* 20: Block Parameter */
  &test2_P.CNT328MPCI1_P15,            /* 21: Block Parameter */
  &test2_P.CNT328MPCI1_P16,            /* 22: Block Parameter */
  &test2_P.CNT328MPCI1_P17,            /* 23: Block Parameter */
  &test2_P.CNT328MPCI1_P18,            /* 24: Block Parameter */
  &test2_P.CNT328MPCI1_P19,            /* 25: Block Parameter */
  &test2_P.CNT328MPCI1_P20,            /* 26: Block Parameter */
  &test2_P.CNT328MPCI1_P21,            /* 27: Block Parameter */
  &test2_P.CNT328MPCI1_P22,            /* 28: Block Parameter */
  &test2_P.CNT328MPCI1_P23,            /* 29: Block Parameter */
  &test2_P.CNT328MPCI1_P24,            /* 30: Block Parameter */
  &test2_P.CNT328MPCI1_P25,            /* 31: Block Parameter */
  &test2_P.CNT328MPCI1_P26,            /* 32: Block Parameter */
  &test2_P.CNT328MPCI1_P27,            /* 33: Block Parameter */
  &test2_P.CNT328MPCI1_P28,            /* 34: Block Parameter */
  &test2_P.CNT328MPCI1_P29,            /* 35: Block Parameter */
  &test2_P.CNT328MPCI1_P30,            /* 36: Block Parameter */
  &test2_P.CNT328MPCI1_P31,            /* 37: Block Parameter */
  &test2_P.CNT328MPCI1_P32,            /* 38: Block Parameter */
  &test2_P.CNT328MPCI1_P33,            /* 39: Block Parameter */
  &test2_P.CNT328MPCI1_P34,            /* 40: Block Parameter */
  &test2_P.CNT328MPCI1_P35,            /* 41: Block Parameter */
  &test2_P.PCIDDA08121_P1_p,           /* 42: Block Parameter */
  &test2_P.PCIDDA08121_P2_h,           /* 43: Block Parameter */
  &test2_P.PCIDDA08121_P3_f,           /* 44: Block Parameter */
  &test2_P.PCIDDA08121_P4_i,           /* 45: Block Parameter */
  &test2_P.PCIDDA08121_P5_p[0],        /* 46: Block Parameter */
  &test2_P.PCIDDA08121_P6_o,           /* 47: Block Parameter */
  &test2_P.PCIDDA08121_P7_o,           /* 48: Block Parameter */
  &test2_P.PCIDDA08121_P8_e,           /* 49: Block Parameter */
  &test2_P.PCIDDA08121_P9,             /* 50: Block Parameter */
  &test2_P.PCIDDA08121_P10,            /* 51: Block Parameter */
  &test2_P.PCIDDA08122_P1,             /* 52: Block Parameter */
  &test2_P.PCIDDA08122_P2,             /* 53: Block Parameter */
  &test2_P.PCIDDA08122_P3,             /* 54: Block Parameter */
  &test2_P.PCIDDA08122_P4,             /* 55: Block Parameter */
  &test2_P.PCIDDA08122_P5[0],          /* 56: Block Parameter */
  &test2_P.PCIDDA08122_P6,             /* 57: Block Parameter */
  &test2_P.PCIDDA08122_P7,             /* 58: Block Parameter */
  &test2_P.PCIDDA08122_P8,             /* 59: Block Parameter */
  &test2_P.PCIDDA08122_P9,             /* 60: Block Parameter */
  &test2_P.PCIDDA08122_P10,            /* 61: Block Parameter */
  &test2_P.PCIDDA08121_P1,             /* 62: Block Parameter */
  &test2_P.PCIDDA08121_P2,             /* 63: Block Parameter */
  &test2_P.PCIDDA08121_P3[0],          /* 64: Block Parameter */
  &test2_P.PCIDDA08121_P4,             /* 65: Block Parameter */
  &test2_P.PCIDDA08121_P5,             /* 66: Block Parameter */
  &test2_P.PCIDDA08121_P6,             /* 67: Block Parameter */
  &test2_P.PCIDDA08121_P7,             /* 68: Block Parameter */
  &test2_P.PCIDDA08121_P8,             /* 69: Block Parameter */
  &test2_P.PCIDDA08123_P1,             /* 70: Block Parameter */
  &test2_P.PCIDDA08123_P2,             /* 71: Block Parameter */
  &test2_P.PCIDDA08123_P3[0],          /* 72: Block Parameter */
  &test2_P.PCIDDA08123_P4,             /* 73: Block Parameter */
  &test2_P.PCIDDA08123_P5,             /* 74: Block Parameter */
  &test2_P.PCIDDA08123_P6,             /* 75: Block Parameter */
  &test2_P.PCIDDA08123_P7,             /* 76: Block Parameter */
  &test2_P.PCIDDA08123_P8,             /* 77: Block Parameter */
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
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 }
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
  2,                                   /* 3 */
  1,                                   /* 4 */
  3                                    /* 5 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0001, 0.0, 0.001
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
    0, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
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
  { rtBlockSignals, 5,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 73,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3834571071U,
    1484871979U,
    2751207108U,
    1997831115U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  test2_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void test2_InitializeDataMapInfo(RT_MODEL_test2_T *const test2_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(test2_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(test2_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(test2_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(test2_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(test2_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  test2_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam(test2_M);
  test2_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_test2_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(test2_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(test2_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(test2_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void test2_host_InitializeDataMapInfo(test2_host_DataMapInfo_T *dataMap, const
    char *path)
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

/* EOF: test2_capi.c */
