/*
 * Registration_Estimation.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Registration_Estimation".
 *
 * Model version              : 1.286
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Fri Dec 09 02:18:35 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Registration_Estimation_h_
#define RTW_HEADER_Registration_Estimation_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef Registration_Estimation_COMMON_INCLUDES_
# define Registration_Estimation_COMMON_INCLUDES_
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "xpcimports.h"
#endif                                 /* Registration_Estimation_COMMON_INCLUDES_ */

#include "Registration_Estimation_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->ModelData.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->ModelData.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) 0
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)
#define rtModel_Registration_Estimation RT_MODEL_Registration_Estimation_T

/* Definition for use in the target main file */
#define Registration_Estimation_rtModel RT_MODEL_Registration_Estimation_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals (auto storage) */
typedef struct {
  real_T Receive1_o2;                  /* '<Root>/Receive 1' */
  real_T orceData[6];                  /* '<Root>/Byte Unpacking 1' */
  real_T counts;                       /* '<Root>/CNT32-8M(PCI) 3' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T count_to_mm2;                 /* '<Root>/count_to_mm2' */
  real_T counts_g;                     /* '<Root>/CNT32-8M(PCI) 2' */
  real_T Sum3;                         /* '<Root>/Sum3' */
  real_T XData;                        /* '<Root>/count_to_mm1' */
  real_T counts_o;                     /* '<Root>/CNT32-8M(PCI) 1' */
  real_T Sum2;                         /* '<Root>/Sum2' */
  real_T YData;                        /* '<Root>/count_to_mm' */
  real_T DataStoreRead;                /* '<Root>/Data Store Read' */
  real_T DataStoreRead1;               /* '<Root>/Data Store Read1' */
  real_T DataStoreRead2;               /* '<Root>/Data Store Read2' */
  real_T DataStoreRead3;               /* '<Root>/Data Store Read3' */
  real_T XEnable;                      /* '<Root>/Abs1' */
  real_T Yenable;                      /* '<Root>/Abs' */
  real_T Sign1;                        /* '<Root>/Sign1' */
  real_T xVoltage;                     /* '<Root>/Voltage1' */
  real_T Sign;                         /* '<Root>/Sign' */
  real_T VoltageY;                     /* '<Root>/Voltage' */
  real_T Yenable_f;                    /* '<Root>/Abs2' */
  real_T Sign2;                        /* '<Root>/Sign2' */
  real_T VoltageY_j;                   /* '<Root>/Voltage2' */
  real_T motZ;                         /* '<Root>/MATLAB Function3' */
  real_T zdir;                         /* '<Root>/MATLAB Function3' */
  real_T sel;                          /* '<Root>/MATLAB Function3' */
  real_T newX;                         /* '<Root>/MATLAB Function2' */
  real_T newY;                         /* '<Root>/MATLAB Function2' */
  real_T sel_o;                        /* '<Root>/MATLAB Function1' */
  real_T motX;                         /* '<Root>/MATLAB Function' */
  real_T motY;                         /* '<Root>/MATLAB Function' */
  uint8_T Receive1_o1[48];             /* '<Root>/Receive 1' */
} B_Registration_Estimation_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T targX;                        /* '<Root>/Data Store Memory' */
  real_T targY;                        /* '<Root>/Data Store Memory1' */
  real_T targZ;                        /* '<Root>/Data Store Memory2' */
  real_T zdir;                         /* '<Root>/Data Store Memory3' */
  real_T PCIDDA0812_RWORK[16];         /* '<Root>/PCI-DDA08 12 ' */
  void *Receive1_PWORK;                /* '<Root>/Receive 1' */
  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFor_;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_a;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_b;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_m;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedF_m4;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_p;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_d;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedF_dp;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_c;   /* synthesized block */

  uint32_T method;                     /* '<Root>/MATLAB Function2' */
  uint32_T state;                      /* '<Root>/MATLAB Function2' */
  uint32_T state_c[2];                 /* '<Root>/MATLAB Function2' */
  uint32_T state_f[625];               /* '<Root>/MATLAB Function2' */
  int_T Receive1_IWORK[2];             /* '<Root>/Receive 1' */
  int_T ByteUnpacking1_IWORK[2];       /* '<Root>/Byte Unpacking 1' */
  int_T CNT328MPCI3_IWORK[7];          /* '<Root>/CNT32-8M(PCI) 3' */
  int_T CNT328MPCI2_IWORK[7];          /* '<Root>/CNT32-8M(PCI) 2' */
  int_T CNT328MPCI1_IWORK[7];          /* '<Root>/CNT32-8M(PCI) 1' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S1>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_o;                 /* '<S2>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_g;                 /* '<S3>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_j;                 /* '<S4>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_jl;                /* '<S5>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_jj;                /* '<S6>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_a;                 /* '<S7>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_jp;                /* '<S8>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_e;                 /* '<S9>/S-Function' */

  int_T PCIDDA08123_IWORK[2];          /* '<Root>/PCI-DDA 08 12 3' */
  int_T PCIDDA08124_IWORK[2];          /* '<Root>/PCI-DDA 08 12 4' */
  int_T PCIDDA08125_IWORK[2];          /* '<Root>/PCI-DDA 08 12 5' */
  int_T PCIDDA0812_IWORK[4];           /* '<Root>/PCI-DDA08 12 ' */
  boolean_T state_not_empty;           /* '<Root>/MATLAB Function2' */
} DW_Registration_Estimation_T;

/* Backward compatible GRT Identifiers */
#define rtB                            Registration_Estimation_B
#define BlockIO                        B_Registration_Estimation_T
#define rtP                            Registration_Estimation_P
#define Parameters                     P_Registration_Estimation_T
#define rtDWork                        Registration_Estimation_DW
#define D_Work                         DW_Registration_Estimation_T

/* Parameters (auto storage) */
struct P_Registration_Estimation_T_ {
  real_T Receive1_P1_Size[2];          /* Computed Parameter: Receive1_P1_Size
                                        * Referenced by: '<Root>/Receive 1'
                                        */
  real_T Receive1_P1[11];              /* Computed Parameter: Receive1_P1
                                        * Referenced by: '<Root>/Receive 1'
                                        */
  real_T Receive1_P2_Size[2];          /* Computed Parameter: Receive1_P2_Size
                                        * Referenced by: '<Root>/Receive 1'
                                        */
  real_T Receive1_P2;                  /* Expression: ipPort
                                        * Referenced by: '<Root>/Receive 1'
                                        */
  real_T Receive1_P3_Size[2];          /* Computed Parameter: Receive1_P3_Size
                                        * Referenced by: '<Root>/Receive 1'
                                        */
  real_T Receive1_P3;                  /* Expression: width
                                        * Referenced by: '<Root>/Receive 1'
                                        */
  real_T Receive1_P4_Size[2];          /* Computed Parameter: Receive1_P4_Size
                                        * Referenced by: '<Root>/Receive 1'
                                        */
  real_T Receive1_P4;                  /* Expression: sampletime
                                        * Referenced by: '<Root>/Receive 1'
                                        */
  real_T Receive1_P5_Size[2];          /* Computed Parameter: Receive1_P5_Size
                                        * Referenced by: '<Root>/Receive 1'
                                        */
  real_T Receive1_P5;                  /* Expression: vblLen
                                        * Referenced by: '<Root>/Receive 1'
                                        */
  real_T CNT328MPCI3_P1_Size[2];       /* Computed Parameter: CNT328MPCI3_P1_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P1;               /* Expression: Channel
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P2_Size[2];       /* Computed Parameter: CNT328MPCI3_P2_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P2;               /* Expression: OperationMode
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P3_Size[2];       /* Computed Parameter: CNT328MPCI3_P3_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P3;               /* Expression: DigitalFilter
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P4_Size[2];       /* Computed Parameter: CNT328MPCI3_P4_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P4;               /* Expression: PulseInput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P5_Size[2];       /* Computed Parameter: CNT328MPCI3_P5_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P5;               /* Expression: Direction
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P6_Size[2];       /* Computed Parameter: CNT328MPCI3_P6_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P6;               /* Expression: InitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P7_Size[2];       /* Computed Parameter: CNT328MPCI3_P7_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P7;               /* Expression: LoadInitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P8_Size[2];       /* Computed Parameter: CNT328MPCI3_P8_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P8;               /* Expression: SampleTime
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P9_Size[2];       /* Computed Parameter: CNT328MPCI3_P9_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P9[2];            /* Expression: PciSlot
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P10_Size[2];      /* Computed Parameter: CNT328MPCI3_P10_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P10;              /* Expression: StartMethod
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P11_Size[2];      /* Computed Parameter: CNT328MPCI3_P11_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P11;              /* Expression: StopMethod
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P12_Size[2];      /* Computed Parameter: CNT328MPCI3_P12_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P12;              /* Expression: ZeroClearRising
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P13_Size[2];      /* Computed Parameter: CNT328MPCI3_P13_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P13;              /* Expression: ZeroClearFalling
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P14_Size[2];      /* Computed Parameter: CNT328MPCI3_P14_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P14;              /* Expression: ZeroClearMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P15_Size[2];      /* Computed Parameter: CNT328MPCI3_P15_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P15;              /* Expression: ZeroClearMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P16_Size[2];      /* Computed Parameter: CNT328MPCI3_P16_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P16;              /* Expression: PresetRising
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P17_Size[2];      /* Computed Parameter: CNT328MPCI3_P17_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P17;              /* Expression: PresetFalling
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P18_Size[2];      /* Computed Parameter: CNT328MPCI3_P18_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P18;              /* Expression: PresetMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P19_Size[2];      /* Computed Parameter: CNT328MPCI3_P19_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P19;              /* Expression: PresetMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P20_Size[2];      /* Computed Parameter: CNT328MPCI3_P20_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P20;              /* Expression: PresetValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P21_Size[2];      /* Computed Parameter: CNT328MPCI3_P21_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P21;              /* Expression: Match0Value
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P22_Size[2];      /* Computed Parameter: CNT328MPCI3_P22_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P22;              /* Expression: Match1Value
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P23_Size[2];      /* Computed Parameter: CNT328MPCI3_P23_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P23;              /* Expression: OutputSignalMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P24_Size[2];      /* Computed Parameter: CNT328MPCI3_P24_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P24;              /* Expression: OutputSignalMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P25_Size[2];      /* Computed Parameter: CNT328MPCI3_P25_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P25;              /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P26_Size[2];      /* Computed Parameter: CNT328MPCI3_P26_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P26;              /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P27_Size[2];      /* Computed Parameter: CNT328MPCI3_P27_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P27;              /* Expression: OutputSignalAlarm
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P28_Size[2];      /* Computed Parameter: CNT328MPCI3_P28_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P28;              /* Expression: OneShotDuration
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P29_Size[2];      /* Computed Parameter: CNT328MPCI3_P29_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P29;              /* Expression: IndexEnable
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P30_Size[2];      /* Computed Parameter: CNT328MPCI3_P30_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P30;              /* Expression: IndexLogic
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P31_Size[2];      /* Computed Parameter: CNT328MPCI3_P31_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P31;              /* Expression: EnableDigitalInput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P32_Size[2];      /* Computed Parameter: CNT328MPCI3_P32_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P32;              /* Expression: EnableDigitalOutput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P33_Size[2];      /* Computed Parameter: CNT328MPCI3_P33_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P33;              /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P34_Size[2];      /* Computed Parameter: CNT328MPCI3_P34_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P34;              /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P35_Size[2];      /* Computed Parameter: CNT328MPCI3_P35_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T CNT328MPCI3_P35;              /* Expression: 0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 3'
                                        */
  real_T encoderoffsets3_Value;        /* Expression: 2^31
                                        * Referenced by: '<Root>/encoder offsets3'
                                        */
  real_T count_to_mm2_Gain;            /* Expression: 200/82720
                                        * Referenced by: '<Root>/count_to_mm2'
                                        */
  real_T CNT328MPCI2_P1_Size[2];       /* Computed Parameter: CNT328MPCI2_P1_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P1;               /* Expression: Channel
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P2_Size[2];       /* Computed Parameter: CNT328MPCI2_P2_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P2;               /* Expression: OperationMode
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P3_Size[2];       /* Computed Parameter: CNT328MPCI2_P3_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P3;               /* Expression: DigitalFilter
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P4_Size[2];       /* Computed Parameter: CNT328MPCI2_P4_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P4;               /* Expression: PulseInput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P5_Size[2];       /* Computed Parameter: CNT328MPCI2_P5_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P5;               /* Expression: Direction
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P6_Size[2];       /* Computed Parameter: CNT328MPCI2_P6_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P6;               /* Expression: InitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P7_Size[2];       /* Computed Parameter: CNT328MPCI2_P7_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P7;               /* Expression: LoadInitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P8_Size[2];       /* Computed Parameter: CNT328MPCI2_P8_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P8;               /* Expression: SampleTime
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P9_Size[2];       /* Computed Parameter: CNT328MPCI2_P9_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P9[2];            /* Expression: PciSlot
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P10_Size[2];      /* Computed Parameter: CNT328MPCI2_P10_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P10;              /* Expression: StartMethod
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P11_Size[2];      /* Computed Parameter: CNT328MPCI2_P11_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P11;              /* Expression: StopMethod
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P12_Size[2];      /* Computed Parameter: CNT328MPCI2_P12_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P12;              /* Expression: ZeroClearRising
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P13_Size[2];      /* Computed Parameter: CNT328MPCI2_P13_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P13;              /* Expression: ZeroClearFalling
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P14_Size[2];      /* Computed Parameter: CNT328MPCI2_P14_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P14;              /* Expression: ZeroClearMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P15_Size[2];      /* Computed Parameter: CNT328MPCI2_P15_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P15;              /* Expression: ZeroClearMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P16_Size[2];      /* Computed Parameter: CNT328MPCI2_P16_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P16;              /* Expression: PresetRising
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P17_Size[2];      /* Computed Parameter: CNT328MPCI2_P17_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P17;              /* Expression: PresetFalling
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P18_Size[2];      /* Computed Parameter: CNT328MPCI2_P18_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P18;              /* Expression: PresetMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P19_Size[2];      /* Computed Parameter: CNT328MPCI2_P19_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P19;              /* Expression: PresetMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P20_Size[2];      /* Computed Parameter: CNT328MPCI2_P20_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P20;              /* Expression: PresetValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P21_Size[2];      /* Computed Parameter: CNT328MPCI2_P21_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P21;              /* Expression: Match0Value
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P22_Size[2];      /* Computed Parameter: CNT328MPCI2_P22_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P22;              /* Expression: Match1Value
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P23_Size[2];      /* Computed Parameter: CNT328MPCI2_P23_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P23;              /* Expression: OutputSignalMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P24_Size[2];      /* Computed Parameter: CNT328MPCI2_P24_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P24;              /* Expression: OutputSignalMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P25_Size[2];      /* Computed Parameter: CNT328MPCI2_P25_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P25;              /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P26_Size[2];      /* Computed Parameter: CNT328MPCI2_P26_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P26;              /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P27_Size[2];      /* Computed Parameter: CNT328MPCI2_P27_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P27;              /* Expression: OutputSignalAlarm
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P28_Size[2];      /* Computed Parameter: CNT328MPCI2_P28_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P28;              /* Expression: OneShotDuration
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P29_Size[2];      /* Computed Parameter: CNT328MPCI2_P29_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P29;              /* Expression: IndexEnable
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P30_Size[2];      /* Computed Parameter: CNT328MPCI2_P30_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P30;              /* Expression: IndexLogic
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P31_Size[2];      /* Computed Parameter: CNT328MPCI2_P31_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P31;              /* Expression: EnableDigitalInput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P32_Size[2];      /* Computed Parameter: CNT328MPCI2_P32_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P32;              /* Expression: EnableDigitalOutput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P33_Size[2];      /* Computed Parameter: CNT328MPCI2_P33_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P33;              /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P34_Size[2];      /* Computed Parameter: CNT328MPCI2_P34_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P34;              /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P35_Size[2];      /* Computed Parameter: CNT328MPCI2_P35_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P35;              /* Expression: 0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 2'
                                        */
  real_T encoderoffsets2_Value;        /* Expression: 2^31
                                        * Referenced by: '<Root>/encoder offsets2'
                                        */
  real_T count_to_mm1_Gain;            /* Expression: 200/83289
                                        * Referenced by: '<Root>/count_to_mm1'
                                        */
  real_T CNT328MPCI1_P1_Size[2];       /* Computed Parameter: CNT328MPCI1_P1_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P1;               /* Expression: Channel
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P2_Size[2];       /* Computed Parameter: CNT328MPCI1_P2_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P2;               /* Expression: OperationMode
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P3_Size[2];       /* Computed Parameter: CNT328MPCI1_P3_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P3;               /* Expression: DigitalFilter
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P4_Size[2];       /* Computed Parameter: CNT328MPCI1_P4_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P4;               /* Expression: PulseInput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P5_Size[2];       /* Computed Parameter: CNT328MPCI1_P5_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P5;               /* Expression: Direction
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P6_Size[2];       /* Computed Parameter: CNT328MPCI1_P6_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P6;               /* Expression: InitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P7_Size[2];       /* Computed Parameter: CNT328MPCI1_P7_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P7;               /* Expression: LoadInitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P8_Size[2];       /* Computed Parameter: CNT328MPCI1_P8_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P8;               /* Expression: SampleTime
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P9_Size[2];       /* Computed Parameter: CNT328MPCI1_P9_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P9[2];            /* Expression: PciSlot
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P10_Size[2];      /* Computed Parameter: CNT328MPCI1_P10_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P10;              /* Expression: StartMethod
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P11_Size[2];      /* Computed Parameter: CNT328MPCI1_P11_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P11;              /* Expression: StopMethod
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P12_Size[2];      /* Computed Parameter: CNT328MPCI1_P12_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P12;              /* Expression: ZeroClearRising
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P13_Size[2];      /* Computed Parameter: CNT328MPCI1_P13_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P13;              /* Expression: ZeroClearFalling
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P14_Size[2];      /* Computed Parameter: CNT328MPCI1_P14_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P14;              /* Expression: ZeroClearMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P15_Size[2];      /* Computed Parameter: CNT328MPCI1_P15_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P15;              /* Expression: ZeroClearMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P16_Size[2];      /* Computed Parameter: CNT328MPCI1_P16_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P16;              /* Expression: PresetRising
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P17_Size[2];      /* Computed Parameter: CNT328MPCI1_P17_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P17;              /* Expression: PresetFalling
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P18_Size[2];      /* Computed Parameter: CNT328MPCI1_P18_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P18;              /* Expression: PresetMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P19_Size[2];      /* Computed Parameter: CNT328MPCI1_P19_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P19;              /* Expression: PresetMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P20_Size[2];      /* Computed Parameter: CNT328MPCI1_P20_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P20;              /* Expression: PresetValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P21_Size[2];      /* Computed Parameter: CNT328MPCI1_P21_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P21;              /* Expression: Match0Value
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P22_Size[2];      /* Computed Parameter: CNT328MPCI1_P22_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P22;              /* Expression: Match1Value
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P23_Size[2];      /* Computed Parameter: CNT328MPCI1_P23_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P23;              /* Expression: OutputSignalMatch0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P24_Size[2];      /* Computed Parameter: CNT328MPCI1_P24_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P24;              /* Expression: OutputSignalMatch1
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P25_Size[2];      /* Computed Parameter: CNT328MPCI1_P25_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P25;              /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P26_Size[2];      /* Computed Parameter: CNT328MPCI1_P26_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P26;              /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P27_Size[2];      /* Computed Parameter: CNT328MPCI1_P27_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P27;              /* Expression: OutputSignalAlarm
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P28_Size[2];      /* Computed Parameter: CNT328MPCI1_P28_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P28;              /* Expression: OneShotDuration
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P29_Size[2];      /* Computed Parameter: CNT328MPCI1_P29_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P29;              /* Expression: IndexEnable
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P30_Size[2];      /* Computed Parameter: CNT328MPCI1_P30_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P30;              /* Expression: IndexLogic
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P31_Size[2];      /* Computed Parameter: CNT328MPCI1_P31_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P31;              /* Expression: EnableDigitalInput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P32_Size[2];      /* Computed Parameter: CNT328MPCI1_P32_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P32;              /* Expression: EnableDigitalOutput
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P33_Size[2];      /* Computed Parameter: CNT328MPCI1_P33_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P33;              /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P34_Size[2];      /* Computed Parameter: CNT328MPCI1_P34_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P34;              /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P35_Size[2];      /* Computed Parameter: CNT328MPCI1_P35_Size
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P35;              /* Expression: 0
                                        * Referenced by: '<Root>/CNT32-8M(PCI) 1'
                                        */
  real_T encoderoffsets1_Value;        /* Expression: 2^31
                                        * Referenced by: '<Root>/encoder offsets1'
                                        */
  real_T count_to_mm_Gain;             /* Expression: 200/82720
                                        * Referenced by: '<Root>/count_to_mm'
                                        */
  real_T Voltage1_Gain;                /* Expression: 2.5
                                        * Referenced by: '<Root>/Voltage1'
                                        */
  real_T Voltage_Gain;                 /* Expression: 2.5
                                        * Referenced by: '<Root>/Voltage'
                                        */
  real_T PCIDDA08123_P1_Size[2];       /* Computed Parameter: PCIDDA08123_P1_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P1;               /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P2_Size[2];       /* Computed Parameter: PCIDDA08123_P2_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P2;               /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P3_Size[2];       /* Computed Parameter: PCIDDA08123_P3_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P3;               /* Expression: reset
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P4_Size[2];       /* Computed Parameter: PCIDDA08123_P4_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P4;               /* Expression: initValue
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P5_Size[2];       /* Computed Parameter: PCIDDA08123_P5_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P5[3];            /* Expression: ival
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P6_Size[2];       /* Computed Parameter: PCIDDA08123_P6_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P6;               /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P7_Size[2];       /* Computed Parameter: PCIDDA08123_P7_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P7;               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P8_Size[2];       /* Computed Parameter: PCIDDA08123_P8_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P8;               /* Expression: slot
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P9_Size[2];       /* Computed Parameter: PCIDDA08123_P9_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P9;               /* Expression: control
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P10_Size[2];      /* Computed Parameter: PCIDDA08123_P10_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P10;              /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08124_P1_Size[2];       /* Computed Parameter: PCIDDA08124_P1_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P1;               /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P2_Size[2];       /* Computed Parameter: PCIDDA08124_P2_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P2;               /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P3_Size[2];       /* Computed Parameter: PCIDDA08124_P3_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P3;               /* Expression: reset
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P4_Size[2];       /* Computed Parameter: PCIDDA08124_P4_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P4;               /* Expression: initValue
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P5_Size[2];       /* Computed Parameter: PCIDDA08124_P5_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P5[3];            /* Expression: ival
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P6_Size[2];       /* Computed Parameter: PCIDDA08124_P6_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P6;               /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P7_Size[2];       /* Computed Parameter: PCIDDA08124_P7_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P7;               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P8_Size[2];       /* Computed Parameter: PCIDDA08124_P8_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P8;               /* Expression: slot
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P9_Size[2];       /* Computed Parameter: PCIDDA08124_P9_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P9;               /* Expression: control
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P10_Size[2];      /* Computed Parameter: PCIDDA08124_P10_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08124_P10;              /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA 08 12 4'
                                        */
  real_T PCIDDA08125_P1_Size[2];       /* Computed Parameter: PCIDDA08125_P1_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P1;               /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P2_Size[2];       /* Computed Parameter: PCIDDA08125_P2_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P2;               /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P3_Size[2];       /* Computed Parameter: PCIDDA08125_P3_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P3;               /* Expression: reset
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P4_Size[2];       /* Computed Parameter: PCIDDA08125_P4_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P4;               /* Expression: initValue
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P5_Size[2];       /* Computed Parameter: PCIDDA08125_P5_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P5[3];            /* Expression: ival
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P6_Size[2];       /* Computed Parameter: PCIDDA08125_P6_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P6;               /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P7_Size[2];       /* Computed Parameter: PCIDDA08125_P7_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P7;               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P8_Size[2];       /* Computed Parameter: PCIDDA08125_P8_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P8;               /* Expression: slot
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P9_Size[2];       /* Computed Parameter: PCIDDA08125_P9_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P9;               /* Expression: control
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P10_Size[2];      /* Computed Parameter: PCIDDA08125_P10_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T PCIDDA08125_P10;              /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA 08 12 5'
                                        */
  real_T Voltage2_Gain;                /* Expression: 2.5
                                        * Referenced by: '<Root>/Voltage2'
                                        */
  real_T PCIDDA0812_P1_Size[2];        /* Computed Parameter: PCIDDA0812_P1_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P1[3];             /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P2_Size[2];        /* Computed Parameter: PCIDDA0812_P2_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P2[3];             /* Expression: range
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P3_Size[2];        /* Computed Parameter: PCIDDA0812_P3_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P3[3];             /* Expression: reset
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P4_Size[2];        /* Computed Parameter: PCIDDA0812_P4_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P4[3];             /* Expression: initValue
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P5_Size[2];        /* Computed Parameter: PCIDDA0812_P5_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P5;                /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P6_Size[2];        /* Computed Parameter: PCIDDA0812_P6_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P6;                /* Expression: pci_dev
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P7_Size[2];        /* Computed Parameter: PCIDDA0812_P7_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P7;                /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA08 12 '
                                        */
  real_T DataStoreMemory_InitialValue; /* Expression: 40
                                        * Referenced by: '<Root>/Data Store Memory'
                                        */
  real_T DataStoreMemory1_InitialValue;/* Expression: 40
                                        * Referenced by: '<Root>/Data Store Memory1'
                                        */
  real_T DataStoreMemory2_InitialValue;/* Expression: 20
                                        * Referenced by: '<Root>/Data Store Memory2'
                                        */
  real_T DataStoreMemory3_InitialValue;/* Expression: -1
                                        * Referenced by: '<Root>/Data Store Memory3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Registration_Estimation_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[1];
    SimStruct childSFunctions[8];
    SimStruct *childSFunctionPtrs[8];
    struct _ssBlkInfo2 blkInfo2[8];
    struct _ssSFcnModelMethods2 methods2[8];
    struct _ssSFcnModelMethods3 methods3[8];
    struct _ssStatesInfo2 statesInfo2[8];
    ssPeriodicStatesInfo periodicStatesInfo[8];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[35];
      mxArray *params[35];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[35];
      mxArray *params[35];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[35];
      mxArray *params[35];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[10];
      mxArray *params[10];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[10];
      mxArray *params[10];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[10];
      mxArray *params[10];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      real_T const *UPtrs2[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn7;
  } NonInlinedSFcns;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    void *dwork;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Registration_Estimation_T Registration_Estimation_P;

/* Block signals (auto storage) */
extern B_Registration_Estimation_T Registration_Estimation_B;

/* Block states (auto storage) */
extern DW_Registration_Estimation_T Registration_Estimation_DW;

/*====================*
 * External functions *
 *====================*/
extern Registration_Estimation_rtModel *Registration_Estimation(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  Registration_Estimation_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_Registration_Estimation_T *const Registration_Estimation_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Registration_Estimation'
 * '<S1>'   : 'Registration_Estimation/Counter'
 * '<S2>'   : 'Registration_Estimation/Counter1'
 * '<S3>'   : 'Registration_Estimation/Counter2'
 * '<S4>'   : 'Registration_Estimation/Counter3'
 * '<S5>'   : 'Registration_Estimation/Counter4'
 * '<S6>'   : 'Registration_Estimation/Counter5'
 * '<S7>'   : 'Registration_Estimation/Counter6'
 * '<S8>'   : 'Registration_Estimation/Counter7'
 * '<S9>'   : 'Registration_Estimation/Counter8'
 * '<S10>'  : 'Registration_Estimation/MATLAB Function'
 * '<S11>'  : 'Registration_Estimation/MATLAB Function1'
 * '<S12>'  : 'Registration_Estimation/MATLAB Function2'
 * '<S13>'  : 'Registration_Estimation/MATLAB Function3'
 * '<S14>'  : 'Registration_Estimation/Scope 1'
 */
#endif                                 /* RTW_HEADER_Registration_Estimation_h_ */
