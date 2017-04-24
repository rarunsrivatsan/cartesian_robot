/*
 * CenterLimit_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "CenterLimit".
 *
 * Model version              : 1.169
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Sat Apr 22 16:56:21 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "CenterLimit_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "CenterLimit.h"
#include "CenterLimit_capi.h"
#include "CenterLimit_private.h"
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
  { 0, 0, TARGET_STRING("Constant"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 4, TARGET_STRING("Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 5, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 6, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 7, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 8, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 9, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P5"), 0, 1, 0 },

  { 10, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 11, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 12, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 13, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 14, TARGET_STRING("PCI-DDA 08 12 1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 15, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 16, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 17, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 18, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 19, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P5"), 0, 1, 0 },

  { 20, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 21, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 22, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 23, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 24, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 25, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 26, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 27, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 28, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 29, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P5"), 0, 1, 0 },

  { 30, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 31, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 32, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 33, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 34, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 35, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P1"), 0, 1, 0 },

  { 36, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P2"), 0, 1, 0 },

  { 37, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P3"), 0, 1, 0 },

  { 38, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P4"), 0, 1, 0 },

  { 39, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 40, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 41, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 42, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 43, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 44, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P3"), 0, 1, 0 },

  { 45, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 46, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 47, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 48, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 49, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 50, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 51, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 52, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P3"), 0, 1, 0 },

  { 53, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 54, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 55, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 56, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 57, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 58, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 59, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 60, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P3"), 0, 1, 0 },

  { 61, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 62, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 63, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 64, TARGET_STRING("PCI-DDA08 12 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 65, TARGET_STRING("PCI-DDA08 12 3"),
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
  &CenterLimit_B.Constant,             /* 0: Signal */
  &CenterLimit_B.PCIDDA08121,          /* 1: Signal */
  &CenterLimit_B.PCIDDA08122,          /* 2: Signal */
  &CenterLimit_B.PCIDDA08123,          /* 3: Signal */
  &CenterLimit_P.Constant_Value,       /* 4: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P1,       /* 5: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P2,       /* 6: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P3,       /* 7: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P4,       /* 8: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P5[0],    /* 9: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P6,       /* 10: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P7,       /* 11: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P8,       /* 12: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P9,       /* 13: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P10,      /* 14: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P1_d,     /* 15: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P2_b,     /* 16: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P3_m,     /* 17: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P4_k,     /* 18: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P5_i[0],  /* 19: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P6_a,     /* 20: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P7_c,     /* 21: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P8_o,     /* 22: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P9,       /* 23: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P10,      /* 24: Block Parameter */
  &CenterLimit_P.PCIDDA08124_P1,       /* 25: Block Parameter */
  &CenterLimit_P.PCIDDA08124_P2,       /* 26: Block Parameter */
  &CenterLimit_P.PCIDDA08124_P3,       /* 27: Block Parameter */
  &CenterLimit_P.PCIDDA08124_P4,       /* 28: Block Parameter */
  &CenterLimit_P.PCIDDA08124_P5[0],    /* 29: Block Parameter */
  &CenterLimit_P.PCIDDA08124_P6,       /* 30: Block Parameter */
  &CenterLimit_P.PCIDDA08124_P7,       /* 31: Block Parameter */
  &CenterLimit_P.PCIDDA08124_P8,       /* 32: Block Parameter */
  &CenterLimit_P.PCIDDA08124_P9,       /* 33: Block Parameter */
  &CenterLimit_P.PCIDDA08124_P10,      /* 34: Block Parameter */
  &CenterLimit_P.PCIDDA0812_P1[0],     /* 35: Block Parameter */
  &CenterLimit_P.PCIDDA0812_P2[0],     /* 36: Block Parameter */
  &CenterLimit_P.PCIDDA0812_P3[0],     /* 37: Block Parameter */
  &CenterLimit_P.PCIDDA0812_P4[0],     /* 38: Block Parameter */
  &CenterLimit_P.PCIDDA0812_P5,        /* 39: Block Parameter */
  &CenterLimit_P.PCIDDA0812_P6,        /* 40: Block Parameter */
  &CenterLimit_P.PCIDDA0812_P7,        /* 41: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P1_e,     /* 42: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P2_d,     /* 43: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P3_d[0],  /* 44: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P4_j,     /* 45: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P5_g,     /* 46: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P6_n,     /* 47: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P7_p,     /* 48: Block Parameter */
  &CenterLimit_P.PCIDDA08121_P8_g,     /* 49: Block Parameter */
  &CenterLimit_P.PCIDDA08122_P1,       /* 50: Block Parameter */
  &CenterLimit_P.PCIDDA08122_P2,       /* 51: Block Parameter */
  &CenterLimit_P.PCIDDA08122_P3[0],    /* 52: Block Parameter */
  &CenterLimit_P.PCIDDA08122_P4,       /* 53: Block Parameter */
  &CenterLimit_P.PCIDDA08122_P5,       /* 54: Block Parameter */
  &CenterLimit_P.PCIDDA08122_P6,       /* 55: Block Parameter */
  &CenterLimit_P.PCIDDA08122_P7,       /* 56: Block Parameter */
  &CenterLimit_P.PCIDDA08122_P8,       /* 57: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P1,       /* 58: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P2,       /* 59: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P3[0],    /* 60: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P4,       /* 61: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P5,       /* 62: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P6,       /* 63: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P7,       /* 64: Block Parameter */
  &CenterLimit_P.PCIDDA08123_P8,       /* 65: Block Parameter */
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

  { rtwCAPI_VECTOR, 2, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  1,                                   /* 2 */
  3                                    /* 3 */
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
  { rtBlockSignals, 4,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 62,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 916407977U,
    1401736567U,
    3599919832U,
    1953984880U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  CenterLimit_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void CenterLimit_InitializeDataMapInfo(RT_MODEL_CenterLimit_T *const
  CenterLimit_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(CenterLimit_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(CenterLimit_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(CenterLimit_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(CenterLimit_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(CenterLimit_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  CenterLimit_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (CenterLimit_M);
  CenterLimit_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_CenterLimit_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(CenterLimit_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(CenterLimit_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(CenterLimit_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void CenterLimit_host_InitializeDataMapInfo(CenterLimit_host_DataMapInfo_T
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

/* EOF: CenterLimit_capi.c */
