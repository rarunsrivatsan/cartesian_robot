/*
 * backup_test1_capi.c
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

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "backup_test1_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "backup_test1.h"
#include "backup_test1_capi.h"
#include "backup_test1_private.h"
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

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 3, TARGET_STRING("Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 4, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 5, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 6, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 7, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 8, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P5"), 0, 1, 0 },

  { 9, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 10, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 11, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 12, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 13, TARGET_STRING("PCI-DDA 08 12 3"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 14, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 15, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 16, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 17, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 18, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P5"), 0, 1, 0 },

  { 19, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 20, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 21, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 22, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 23, TARGET_STRING("PCI-DDA 08 12 4"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 24, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P1"), 0, 2, 0 },

  { 25, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P2"), 0, 2, 0 },

  { 26, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P3"), 0, 2, 0 },

  { 27, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P4"), 0, 2, 0 },

  { 28, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 29, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 30, TARGET_STRING("PCI-DDA08 12 "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 31, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 32, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 33, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P3"), 0, 1, 0 },

  { 34, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 35, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 36, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 37, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 38, TARGET_STRING("PCI-DDA08 12 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 39, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 40, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 41, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P3"), 0, 1, 0 },

  { 42, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 43, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 44, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 45, TARGET_STRING("PCI-DDA08 12 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 46, TARGET_STRING("PCI-DDA08 12 2"),
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
  &backup_test1_B.Constant,            /* 0: Signal */
  &backup_test1_B.PCIDDA08121,         /* 1: Signal */
  &backup_test1_B.PCIDDA08122,         /* 2: Signal */
  &backup_test1_P.Constant_Value,      /* 3: Block Parameter */
  &backup_test1_P.PCIDDA08123_P1,      /* 4: Block Parameter */
  &backup_test1_P.PCIDDA08123_P2,      /* 5: Block Parameter */
  &backup_test1_P.PCIDDA08123_P3,      /* 6: Block Parameter */
  &backup_test1_P.PCIDDA08123_P4,      /* 7: Block Parameter */
  &backup_test1_P.PCIDDA08123_P5[0],   /* 8: Block Parameter */
  &backup_test1_P.PCIDDA08123_P6,      /* 9: Block Parameter */
  &backup_test1_P.PCIDDA08123_P7,      /* 10: Block Parameter */
  &backup_test1_P.PCIDDA08123_P8,      /* 11: Block Parameter */
  &backup_test1_P.PCIDDA08123_P9,      /* 12: Block Parameter */
  &backup_test1_P.PCIDDA08123_P10,     /* 13: Block Parameter */
  &backup_test1_P.PCIDDA08124_P1,      /* 14: Block Parameter */
  &backup_test1_P.PCIDDA08124_P2,      /* 15: Block Parameter */
  &backup_test1_P.PCIDDA08124_P3,      /* 16: Block Parameter */
  &backup_test1_P.PCIDDA08124_P4,      /* 17: Block Parameter */
  &backup_test1_P.PCIDDA08124_P5[0],   /* 18: Block Parameter */
  &backup_test1_P.PCIDDA08124_P6,      /* 19: Block Parameter */
  &backup_test1_P.PCIDDA08124_P7,      /* 20: Block Parameter */
  &backup_test1_P.PCIDDA08124_P8,      /* 21: Block Parameter */
  &backup_test1_P.PCIDDA08124_P9,      /* 22: Block Parameter */
  &backup_test1_P.PCIDDA08124_P10,     /* 23: Block Parameter */
  &backup_test1_P.PCIDDA0812_P1[0],    /* 24: Block Parameter */
  &backup_test1_P.PCIDDA0812_P2[0],    /* 25: Block Parameter */
  &backup_test1_P.PCIDDA0812_P3[0],    /* 26: Block Parameter */
  &backup_test1_P.PCIDDA0812_P4[0],    /* 27: Block Parameter */
  &backup_test1_P.PCIDDA0812_P5,       /* 28: Block Parameter */
  &backup_test1_P.PCIDDA0812_P6,       /* 29: Block Parameter */
  &backup_test1_P.PCIDDA0812_P7,       /* 30: Block Parameter */
  &backup_test1_P.PCIDDA08121_P1,      /* 31: Block Parameter */
  &backup_test1_P.PCIDDA08121_P2,      /* 32: Block Parameter */
  &backup_test1_P.PCIDDA08121_P3[0],   /* 33: Block Parameter */
  &backup_test1_P.PCIDDA08121_P4,      /* 34: Block Parameter */
  &backup_test1_P.PCIDDA08121_P5,      /* 35: Block Parameter */
  &backup_test1_P.PCIDDA08121_P6,      /* 36: Block Parameter */
  &backup_test1_P.PCIDDA08121_P7,      /* 37: Block Parameter */
  &backup_test1_P.PCIDDA08121_P8,      /* 38: Block Parameter */
  &backup_test1_P.PCIDDA08122_P1,      /* 39: Block Parameter */
  &backup_test1_P.PCIDDA08122_P2,      /* 40: Block Parameter */
  &backup_test1_P.PCIDDA08122_P3[0],   /* 41: Block Parameter */
  &backup_test1_P.PCIDDA08122_P4,      /* 42: Block Parameter */
  &backup_test1_P.PCIDDA08122_P5,      /* 43: Block Parameter */
  &backup_test1_P.PCIDDA08122_P6,      /* 44: Block Parameter */
  &backup_test1_P.PCIDDA08122_P7,      /* 45: Block Parameter */
  &backup_test1_P.PCIDDA08122_P8,      /* 46: Block Parameter */
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
  { rtBlockSignals, 3,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 44,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 410377755U,
    1938370423U,
    1489526417U,
    2048421026U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  backup_test1_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void backup_test1_InitializeDataMapInfo(RT_MODEL_backup_test1_T *const
  backup_test1_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(backup_test1_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(backup_test1_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(backup_test1_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(backup_test1_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(backup_test1_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  backup_test1_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (backup_test1_M);
  backup_test1_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_backup_test1_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(backup_test1_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(backup_test1_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(backup_test1_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void backup_test1_host_InitializeDataMapInfo(backup_test1_host_DataMapInfo_T
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

/* EOF: backup_test1_capi.c */
