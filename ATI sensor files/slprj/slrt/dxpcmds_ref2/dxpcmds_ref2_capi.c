/*
 * dxpcmds_ref2_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "dxpcmds_ref2".
 *
 * Model version              : 1.45
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Sat Nov 19 19:12:14 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "dxpcmds_ref2_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "dxpcmds_ref2.h"
#include "dxpcmds_ref2_capi.h"
#include "dxpcmds_ref2_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 1, TARGET_STRING("Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 1, TARGET_STRING("Gain2"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 2, 1, TARGET_STRING("Gain3"),
    TARGET_STRING(""), 0, 0, 2, 0, 2 },

  { 3, 1, TARGET_STRING("Sum"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 4, 1, TARGET_STRING("Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 1, TARGET_STRING("Sum2"),
    TARGET_STRING(""), 0, 0, 2, 0, 2 },

  { 6, 1, TARGET_STRING("max Error/Abs"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 7, 1, TARGET_STRING("max Error1/Abs"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 1, TARGET_STRING("max Error2/Abs"),
    TARGET_STRING(""), 0, 0, 2, 0, 2 },

  { 9, 1, TARGET_STRING("unity math/math/exp"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 10, 1, TARGET_STRING("unity math/math/log"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 11, 1, TARGET_STRING("unity math/math1/exp"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 12, 1, TARGET_STRING("unity math/math1/log"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 13, 1, TARGET_STRING("unity math/math2/exp"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 14, 1, TARGET_STRING("unity math/math2/log"),
    TARGET_STRING(""), 0, 0, 1, 0, 1 },

  { 15, 1, TARGET_STRING("unity math1/math/exp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 1, TARGET_STRING("unity math1/math/log"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 1, TARGET_STRING("unity math1/math1/exp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 1, TARGET_STRING("unity math1/math1/log"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 1, TARGET_STRING("unity math1/math2/exp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 1, TARGET_STRING("unity math1/math2/log"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 1, TARGET_STRING("unity math2/math/exp"),
    TARGET_STRING(""), 0, 0, 2, 0, 2 },

  { 22, 1, TARGET_STRING("unity math2/math/log"),
    TARGET_STRING(""), 0, 0, 2, 0, 2 },

  { 23, 1, TARGET_STRING("unity math2/math1/exp"),
    TARGET_STRING(""), 0, 0, 2, 0, 2 },

  { 24, 1, TARGET_STRING("unity math2/math1/log"),
    TARGET_STRING(""), 0, 0, 2, 0, 2 },

  { 25, 1, TARGET_STRING("unity math2/math2/exp"),
    TARGET_STRING(""), 0, 0, 2, 0, 2 },

  { 26, 1, TARGET_STRING("unity math2/math2/log"),
    TARGET_STRING(""), 0, 0, 2, 0, 2 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 27, TARGET_STRING("Constant"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 28, TARGET_STRING("Constant2"),
    TARGET_STRING("Value"), 0, 4, 0 },

  { 29, TARGET_STRING("Gain1"),
    TARGET_STRING("Gain"), 0, 5, 0 },

  { 30, TARGET_STRING("Gain2"),
    TARGET_STRING("Gain"), 0, 5, 0 },

  { 31, TARGET_STRING("Gain3"),
    TARGET_STRING("Gain"), 0, 5, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Initialize Data Address */
static void dxpcmds_ref2_InitializeDataAddr(void* dataAddr[], B_dxpcmds_ref2_c_T
  *localB, P_dxpcmds_ref2_T *rtP)
{
  P_dxpcmds_ref2_T *localP = rtP;
  dataAddr[0] = (void*) (&localB->Gain1[0]);
  dataAddr[1] = (void*) (&localB->Gain2[0]);
  dataAddr[2] = (void*) (&localB->Gain3[0]);
  dataAddr[3] = (void*) (&localB->Sum[0]);
  dataAddr[4] = (void*) (&localB->Sum1[0]);
  dataAddr[5] = (void*) (&localB->Sum2[0]);
  dataAddr[6] = (void*) (&localB->Abs[0]);
  dataAddr[7] = (void*) (&localB->Abs_b[0]);
  dataAddr[8] = (void*) (&localB->Abs_n[0]);
  dataAddr[9] = (void*) (&localB->exp_h[0]);
  dataAddr[10] = (void*) (&localB->log_h[0]);
  dataAddr[11] = (void*) (&localB->exp_g[0]);
  dataAddr[12] = (void*) (&localB->log_c[0]);
  dataAddr[13] = (void*) (&localB->exp_f[0]);
  dataAddr[14] = (void*) (&localB->log_e[0]);
  dataAddr[15] = (void*) (&localB->exp_l[0]);
  dataAddr[16] = (void*) (&localB->log_g[0]);
  dataAddr[17] = (void*) (&localB->exp_e[0]);
  dataAddr[18] = (void*) (&localB->log_o[0]);
  dataAddr[19] = (void*) (&localB->exp_hn[0]);
  dataAddr[20] = (void*) (&localB->log_n[0]);
  dataAddr[21] = (void*) (&localB->exp_o[0]);
  dataAddr[22] = (void*) (&localB->log_m[0]);
  dataAddr[23] = (void*) (&localB->exp_c[0]);
  dataAddr[24] = (void*) (&localB->log_go[0]);
  dataAddr[25] = (void*) (&localB->exp_j[0]);
  dataAddr[26] = (void*) (&localB->log_d[0]);
  dataAddr[27] = (void*) (&dxpcmds_ref2_P.Constant_Value[0]);
  dataAddr[28] = (void*) (&dxpcmds_ref2_P.Constant2_Value[0]);
  dataAddr[29] = (void*) (&dxpcmds_ref2_P.Gain1_Gain);
  dataAddr[30] = (void*) (&dxpcmds_ref2_P.Gain2_Gain);
  dataAddr[31] = (void*) (&dxpcmds_ref2_P.Gain3_Gain);
}

#endif

/* Initialize Data Run-Time Dimension Buffer Address */
#ifndef HOST_CAPI_BUILD

static void dxpcmds_ref2_InitializeVarDimsAddr(int32_T* vardimsAddr[])
{
  vardimsAddr[0] = (NULL);
}

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
static rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_VECTOR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_SCALAR, 10, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static uint_T rtDimensionArray[] = {
  6000,                                /* 0 */
  1,                                   /* 1 */
  700,                                 /* 2 */
  1,                                   /* 3 */
  8000,                                /* 4 */
  1,                                   /* 5 */
  1,                                   /* 6 */
  700,                                 /* 7 */
  1,                                   /* 8 */
  8000,                                /* 9 */
  1,                                   /* 10 */
  1                                    /* 11 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.004, 0.0, 0.001, 0.003
};

/* Fixed Point Map */
static rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    2, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
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
  { rtBlockSignals, 27,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 5,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 778788679U,
    2096924612U,
    1054754786U,
    227427422U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  dxpcmds_ref2_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void dxpcmds_ref2_InitializeDataMapInfo(RT_MODEL_dxpcmds_ref2_T *const
  dxpcmds_ref2_M, B_dxpcmds_ref2_c_T *localB, P_dxpcmds_ref2_T *rtP)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(dxpcmds_ref2_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(dxpcmds_ref2_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(dxpcmds_ref2_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  dxpcmds_ref2_InitializeDataAddr(dxpcmds_ref2_M->DataMapInfo.dataAddress,
    localB, rtP);
  rtwCAPI_SetDataAddressMap(dxpcmds_ref2_M->DataMapInfo.mmi,
    dxpcmds_ref2_M->DataMapInfo.dataAddress);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  dxpcmds_ref2_InitializeVarDimsAddr(dxpcmds_ref2_M->DataMapInfo.vardimsAddress);
  rtwCAPI_SetVarDimsAddressMap(dxpcmds_ref2_M->DataMapInfo.mmi,
    dxpcmds_ref2_M->DataMapInfo.vardimsAddress);
  dxpcmds_ref2_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtP;
  dxpcmds_ref2_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_dxpcmds_ref2_T);

  /* Set Instance specific path */
  rtwCAPI_SetPath(dxpcmds_ref2_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetFullPath(dxpcmds_ref2_M->DataMapInfo.mmi, (NULL));

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(dxpcmds_ref2_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(dxpcmds_ref2_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(dxpcmds_ref2_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void dxpcmds_ref2_host_InitializeDataMapInfo(dxpcmds_ref2_host_DataMapInfo_T
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

/* EOF: dxpcmds_ref2_capi.c */
