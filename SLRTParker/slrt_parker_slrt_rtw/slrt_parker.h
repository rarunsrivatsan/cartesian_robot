/*
 * slrt_parker.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "slrt_parker".
 *
 * Model version              : 1.3413
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Wed Dec 14 13:07:16 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_slrt_parker_h_
#define RTW_HEADER_slrt_parker_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef slrt_parker_COMMON_INCLUDES_
# define slrt_parker_COMMON_INCLUDES_
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "xpcimports.h"
#endif                                 /* slrt_parker_COMMON_INCLUDES_ */

#include "slrt_parker_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

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
#define rtModel_slrt_parker            RT_MODEL_slrt_parker_T

/* Definition for use in the target main file */
#define slrt_parker_rtModel            RT_MODEL_slrt_parker_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals (auto storage) */
typedef struct {
  real_T CNT328MPCICh1;                /* '<S16>/CNT32-8M(PCI) Ch1' */
  real_T CNT328MPCICh2;                /* '<S16>/CNT32-8M(PCI) Ch2' */
  real_T CNT328MPCICh3;                /* '<S16>/CNT32-8M(PCI) Ch3' */
  real_T Subtract[3];                  /* '<S15>/Subtract' */
  real_T Gain_Rads[3];                 /* '<S15>/Gain_Rads' */
  real_T Rads_mm[3];                   /* '<S15>/Rads_mm' */
  real_T RateTransition[3];            /* '<S15>/Rate Transition' */
  real_T UnitDelay[3];                 /* '<S15>/Unit Delay' */
  real_T Add[3];                       /* '<S15>/Add' */
  real_T DiscreteFIRFilter[3];         /* '<S19>/Discrete FIR Filter' */
  real_T Gain[3];                      /* '<S19>/Gain' */
  real_T TSamp[3];                     /* '<S25>/TSamp' */
  real_T Uk1[3];                       /* '<S25>/UD' */
  real_T Diff[3];                      /* '<S25>/Diff' */
  real_T DiscreteFIRFilter_m[3];       /* '<S21>/Discrete FIR Filter' */
  real_T Gain_c[3];                    /* '<S21>/Gain' */
  real_T RateTransition1[3];           /* '<S15>/Rate Transition1' */
  real_T DiscreteFIRFilter_b[3];       /* '<S18>/Discrete FIR Filter' */
  real_T Gain_m[3];                    /* '<S18>/Gain' */
  real_T TSamp_b[3];                   /* '<S26>/TSamp' */
  real_T Uk1_o[3];                     /* '<S26>/UD' */
  real_T Diff_h[3];                    /* '<S26>/Diff' */
  real_T DiscreteFIRFilter_g[3];       /* '<S22>/Discrete FIR Filter' */
  real_T Gain_b[3];                    /* '<S22>/Gain' */
  real_T TSamp_p[3];                   /* '<S23>/TSamp' */
  real_T Uk1_c[3];                     /* '<S23>/UD' */
  real_T Diff_o[3];                    /* '<S23>/Diff' */
  real_T DiscreteFIRFilter_k[3];       /* '<S17>/Discrete FIR Filter' */
  real_T Gain_o[3];                    /* '<S17>/Gain' */
  real_T RateTransition2[3];           /* '<S15>/Rate Transition2' */
  real_T Receive1_o2;                  /* '<S1>/Receive 1' */
  real_T ByteUnpacking1[6];            /* '<S1>/Byte Unpacking 1' */
  real_T uSTPORTB;                     /* '<S16>/1STPORTB ' */
  real_T uSTPORTB1;                    /* '<S16>/1STPORTB 1' */
  real_T uSTPORTB2;                    /* '<S16>/1STPORTB 2' */
  real_T Product;                      /* '<S5>/Product' */
  real_T sys_stat[6];                  /* '<S5>/sys_stat' */
  real_T ICic[3];                      /* '<S24>/IC=ic' */
  real_T Switch[3];                    /* '<S24>/Switch' */
  real_T Gain_l;                       /* '<S16>/Gain' */
  real_T EnableMotors[3];              /* '<S2>/Enable Motors' */
  real_T MultiportSwitch[9];           /* '<S6>/Multiport Switch' */
  real_T UnitDelay2[9];                /* '<S47>/Unit Delay2' */
  real_T UnitDelay3;                   /* '<S47>/Unit Delay3' */
  real_T pva_allowed[9];               /* '<S47>/false detection' */
  real_T error_flag;                   /* '<S47>/false detection' */
  real_T DigitalClock;                 /* '<S50>/Digital Clock' */
  real_T Counter;                      /* '<S52>/Counter' */
  real_T UnitDelay_f;                  /* '<S52>/Unit Delay' */
  real_T UnitDelay_h[3];               /* '<S51>/Unit Delay' */
  real_T Switch_f[3];                  /* '<S55>/Switch' */
  real_T MultiportSwitch_k[3];         /* '<S46>/Multiport Switch' */
  real_T UnitDelay_g;                  /* '<S50>/Unit Delay' */
  real_T UnitDelay1;                   /* '<S50>/Unit Delay1' */
  real_T UnitDelay2_j[3];              /* '<S50>/Unit Delay2' */
  real_T Switch_b[3];                  /* '<S54>/Switch' */
  real_T enable;                       /* '<S52>/MATLAB Function' */
  real_T p[3];                         /* '<S50>/Embedded MATLAB Function' */
  real_T pdot[3];                      /* '<S50>/Embedded MATLAB Function' */
  real_T pdotdot[3];                   /* '<S50>/Embedded MATLAB Function' */
  real_T confn;                        /* '<S50>/Embedded MATLAB Function' */
  real_T t0n;                          /* '<S50>/Embedded MATLAB Function' */
  real_T p0n[3];                       /* '<S50>/Embedded MATLAB Function' */
  real_T RECORD;                       /* '<S50>/Embedded MATLAB Function' */
  real_T ADelay[12];                   /* '<S45>/A Delay' */
  real_T qdesDelay[3];                 /* '<S45>/qdes Delay' */
  real_T Switch_p[3];                  /* '<S49>/Switch' */
  real_T homingreadydelay;             /* '<S45>/homing ready delay' */
  real_T statusdelay;                  /* '<S45>/status delay' */
  real_T lsfdelay[3];                  /* '<S45>/lsf delay' */
  real_T q_des[3];                     /* '<S45>/Homing Procedure' */
  real_T qd_des[3];                    /* '<S45>/Homing Procedure' */
  real_T qdd_des[3];                   /* '<S45>/Homing Procedure' */
  real_T ready;                        /* '<S45>/Homing Procedure' */
  real_T A_out[12];                    /* '<S45>/Homing Procedure' */
  real_T cur_status;                   /* '<S45>/Homing Procedure' */
  real_T reset;                        /* '<S45>/Homing Procedure' */
  real_T lsf_out[3];                   /* '<S45>/Homing Procedure' */
  real_T Gain_p[7];                    /* '<S31>/Gain' */
  real_T Gain1[10];                    /* '<S31>/Gain1' */
  real_T Gain2[10];                    /* '<S31>/Gain2' */
  real_T Gain1_i;                      /* '<S30>/Gain1' */
  real_T Gain_a[9];                    /* '<S30>/Gain' */
  real_T Sum[3];                       /* '<S3>/Sum' */
  real_T Kp[3];                        /* '<S3>/Kp' */
  real_T Sum1[3];                      /* '<S3>/Sum1' */
  real_T DeadZone1[3];                 /* '<S3>/Dead Zone1' */
  real_T Kdvoltssecondrad[3];          /* '<S3>/Kd [volts*second//rad]' */
  real_T Add_e[3];                     /* '<S3>/Add' */
  real_T ms2[3];                       /* '<S3>/m//s^2' */
  real_T tau_motion[3];                /* '<S3>/Inertia Matrix [Kg m^2]' */
  real_T ViscousFriction[3];           /* '<S3>/Viscous Friction' */
  real_T tau[3];                       /* '<S3>/Add1' */
  real_T pitch1[3];                    /* '<S3>/pitch1' */
  real_T TorqueConstant[3];            /* '<S3>/Torque Constant' */
  real_T AmpGain[3];                   /* '<S3>/Amp Gain' */
  real_T Saturation1010[3];            /* '<S3>/Saturation [-10, 10]' */
  uint8_T Receive1_o1[48];             /* '<S1>/Receive 1' */
  boolean_T LogicalOperator[3];        /* '<S16>/Logical Operator' */
  boolean_T Compare;                   /* '<S29>/Compare' */
  boolean_T DataTypeConversion;        /* '<S24>/Data Type Conversion' */
  boolean_T Compare_h;                 /* '<S43>/Compare' */
  boolean_T Compare_m;                 /* '<S44>/Compare' */
  boolean_T NSampleEnable;             /* '<S55>/N-Sample Enable' */
  boolean_T NSampleEnable_p;           /* '<S54>/N-Sample Enable' */
  boolean_T NSampleEnable_e;           /* '<S49>/N-Sample Enable' */
} B_slrt_parker_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE[3];          /* '<S15>/Unit Delay' */
  real_T UD_DSTATE[3];                 /* '<S25>/UD' */
  real_T DiscreteFIRFilter_states[15]; /* '<S21>/Discrete FIR Filter' */
  real_T UD_DSTATE_g[3];               /* '<S26>/UD' */
  real_T DiscreteFIRFilter_states_g[15];/* '<S22>/Discrete FIR Filter' */
  real_T UD_DSTATE_o[3];               /* '<S23>/UD' */
  real_T DiscreteFIRFilter_states_k[15];/* '<S17>/Discrete FIR Filter' */
  real_T ICic_DSTATE[3];               /* '<S24>/IC=ic' */
  real_T UnitDelay2_DSTATE[9];         /* '<S47>/Unit Delay2' */
  real_T UnitDelay3_DSTATE;            /* '<S47>/Unit Delay3' */
  real_T UnitDelay_DSTATE_g;           /* '<S52>/Unit Delay' */
  real_T UnitDelay_DSTATE_k[3];        /* '<S51>/Unit Delay' */
  real_T UnitDelay_DSTATE_m;           /* '<S50>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S50>/Unit Delay1' */
  real_T UnitDelay2_DSTATE_n[3];       /* '<S50>/Unit Delay2' */
  real_T ADelay_DSTATE[12];            /* '<S45>/A Delay' */
  real_T qdesDelay_DSTATE[3];          /* '<S45>/qdes Delay' */
  real_T homingreadydelay_DSTATE;      /* '<S45>/homing ready delay' */
  real_T statusdelay_DSTATE;           /* '<S45>/status delay' */
  real_T lsfdelay_DSTATE[3];           /* '<S45>/lsf delay' */
  real_T PCIDDA0812_RWORK[16];         /* '<S16>/PCI-DDA08 12 ' */
  void *Receive1_PWORK;                /* '<S1>/Receive 1' */
  int32_T DiscreteFIRFilter_circBuf;   /* '<S21>/Discrete FIR Filter' */
  int32_T DiscreteFIRFilter_circBuf_g; /* '<S22>/Discrete FIR Filter' */
  int32_T DiscreteFIRFilter_circBuf_f; /* '<S17>/Discrete FIR Filter' */
  uint32_T Counter_ClkEphState;        /* '<S52>/Counter' */
  uint32_T NSampleEnable_Counter;      /* '<S55>/N-Sample Enable' */
  uint32_T NSampleEnable_Counter_a;    /* '<S54>/N-Sample Enable' */
  uint32_T NSampleEnable_Counter_d;    /* '<S49>/N-Sample Enable' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S28>/S-Function' */

  int_T CNT328MPCICh1_IWORK[7];        /* '<S16>/CNT32-8M(PCI) Ch1' */
  int_T CNT328MPCICh2_IWORK[7];        /* '<S16>/CNT32-8M(PCI) Ch2' */
  int_T CNT328MPCICh3_IWORK[7];        /* '<S16>/CNT32-8M(PCI) Ch3' */
  int_T Receive1_IWORK[2];             /* '<S1>/Receive 1' */
  int_T ByteUnpacking1_IWORK[2];       /* '<S1>/Byte Unpacking 1' */
  int_T uSTPORTB_IWORK[2];             /* '<S16>/1STPORTB ' */
  int_T uSTPORTB1_IWORK[2];            /* '<S16>/1STPORTB 1' */
  int_T uSTPORTB2_IWORK[2];            /* '<S16>/1STPORTB 2' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK_o;                 /* '<S33>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_e;                 /* '<S34>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_f;                 /* '<S35>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_n;                 /* '<S27>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_l;                 /* '<S37>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_o5;                /* '<S32>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_b;                 /* '<S36>/S-Function' */

  int_T PCIDDA0812_IWORK[4];           /* '<S16>/PCI-DDA08 12 ' */
  int_T PCIDDA0812toPORTA_IWORK[2];    /* '<S2>/PCI-DDA08 12  to PORTA' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK_nr;                /* '<S40>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_ea;                /* '<S41>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_os;                /* '<S42>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_lk;                /* '<S38>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_c;                 /* '<S39>/S-Function' */

  int8_T EnabledSubsystem_SubsysRanBC; /* '<S5>/Enabled Subsystem' */
  int8_T FileScope_SubsysRanBC;        /* '<S5>/File Scope' */
  int8_T Homing_SubsysRanBC;           /* '<S6>/Homing' */
  int8_T QuinticPolynomial_SubsysRanBC;/* '<S6>/Quintic Polynomial' */
  uint8_T Counter_Count;               /* '<S52>/Counter' */
  boolean_T Homing_MODE;               /* '<S6>/Homing' */
  boolean_T QuinticPolynomial_MODE;    /* '<S6>/Quintic Polynomial' */
} DW_slrt_parker_T;

/* Backward compatible GRT Identifiers */
#define rtB                            slrt_parker_B
#define BlockIO                        B_slrt_parker_T
#define rtP                            slrt_parker_P
#define Parameters                     P_slrt_parker_T
#define rtDWork                        slrt_parker_DW
#define D_Work                         DW_slrt_parker_T

/* Parameters (auto storage) */
struct P_slrt_parker_T_ {
  real_T B[9];                         /* Variable: B
                                        * Referenced by: '<S3>/Inertia Matrix [Kg m^2]'
                                        */
  real_T ENC_obs_filter_coeffs;        /* Variable: ENC_obs_filter_coeffs
                                        * Referenced by:
                                        *   '<S18>/encoder obsever filter'
                                        *   '<S19>/encoder obsever filter'
                                        */
  real_T F[9];                         /* Variable: F
                                        * Referenced by: '<S3>/Viscous Friction'
                                        */
  real_T HOMING_Vmov[3];               /* Variable: HOMING_Vmov
                                        * Referenced by: '<S45>/V_mov'
                                        */
  real_T HOMING_dx[3];                 /* Variable: HOMING_dx
                                        * Referenced by: '<S45>/home_pos'
                                        */
  real_T HOMING_tspan;                 /* Variable: HOMING_tspan
                                        * Referenced by: '<S45>/tspan'
                                        */
  real_T Kd[9];                        /* Variable: Kd
                                        * Referenced by: '<S3>/Kd [volts*second//rad]'
                                        */
  real_T Kp[9];                        /* Variable: Kp
                                        * Referenced by: '<S3>/Kp'
                                        */
  real_T N_ENC_obs_filter;             /* Variable: N_ENC_obs_filter
                                        * Referenced by:
                                        *   '<S18>/Gain'
                                        *   '<S19>/Gain'
                                        */
  real_T N_acceleration;               /* Variable: N_acceleration
                                        * Referenced by: '<S17>/Gain'
                                        */
  real_T N_obs_velocity;               /* Variable: N_obs_velocity
                                        * Referenced by: '<S22>/Gain'
                                        */
  real_T N_velocity;                   /* Variable: N_velocity
                                        * Referenced by: '<S21>/Gain'
                                        */
  real_T accel_filter_coeffs[6];       /* Variable: accel_filter_coeffs
                                        * Referenced by: '<S17>/vel_filter_coeffs'
                                        */
  real_T counter_offset;               /* Variable: counter_offset
                                        * Referenced by: '<S15>/Constant'
                                        */
  real_T dt;                           /* Variable: dt
                                        * Referenced by: '<S45>/dt'
                                        */
  real_T encoder_counts;               /* Variable: encoder_counts
                                        * Referenced by: '<S15>/Gain_Rads'
                                        */
  real_T grav_vector[3];               /* Variable: grav_vector
                                        * Referenced by: '<S3>/grav compensator'
                                        */
  real_T pitch;                        /* Variable: pitch
                                        * Referenced by: '<S3>/pitch1'
                                        */
  real_T quadrature_mode;              /* Variable: quadrature_mode
                                        * Referenced by: '<S15>/Gain_Rads'
                                        */
  real_T screw_pitch;                  /* Variable: screw_pitch
                                        * Referenced by: '<S15>/Rads_mm'
                                        */
  real_T torque_constant;              /* Variable: torque_constant
                                        * Referenced by: '<S3>/Torque Constant'
                                        */
  real_T vel_filter_coeffs[6];         /* Variable: vel_filter_coeffs
                                        * Referenced by: '<S21>/vel_filter_coeffs'
                                        */
  real_T vel_obs_filter_coeffs[6];     /* Variable: vel_obs_filter_coeffs
                                        * Referenced by: '<S22>/vel_filter_coeffs'
                                        */
  real_T DiscreteDerivative_ICPrevScaled;/* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                          * Referenced by: '<S25>/UD'
                                          */
  real_T DiscreteDerivative_ICPrevScal_e;/* Mask Parameter: DiscreteDerivative_ICPrevScal_e
                                          * Referenced by: '<S26>/UD'
                                          */
  real_T DiscreteDerivative1_ICPrevScale;/* Mask Parameter: DiscreteDerivative1_ICPrevScale
                                          * Referenced by: '<S23>/UD'
                                          */
  real_T EnableHoming_const;           /* Mask Parameter: EnableHoming_const
                                        * Referenced by: '<S43>/Constant'
                                        */
  real_T EnableJoint_const;            /* Mask Parameter: EnableJoint_const
                                        * Referenced by: '<S44>/Constant'
                                        */
  real_T ENRecord_const;               /* Mask Parameter: ENRecord_const
                                        * Referenced by: '<S29>/Constant'
                                        */
  real_T SampleandHold_ic[3];          /* Mask Parameter: SampleandHold_ic
                                        * Referenced by: '<S24>/IC=ic'
                                        */
  uint32_T NSampleEnable_ActiveLevel;  /* Mask Parameter: NSampleEnable_ActiveLevel
                                        * Referenced by: '<S49>/N-Sample Enable'
                                        */
  uint32_T NSampleEnable_ActiveLevel_b;/* Mask Parameter: NSampleEnable_ActiveLevel_b
                                        * Referenced by: '<S55>/N-Sample Enable'
                                        */
  uint32_T NSampleEnable_ActiveLevel_be;/* Mask Parameter: NSampleEnable_ActiveLevel_be
                                         * Referenced by: '<S54>/N-Sample Enable'
                                         */
  uint32_T NSampleSwitch_N;            /* Mask Parameter: NSampleSwitch_N
                                        * Referenced by: '<S49>/N-Sample Enable'
                                        */
  uint32_T NSampleSwitch_N_p;          /* Mask Parameter: NSampleSwitch_N_p
                                        * Referenced by: '<S55>/N-Sample Enable'
                                        */
  uint32_T NSampleSwitch_N_l;          /* Mask Parameter: NSampleSwitch_N_l
                                        * Referenced by: '<S54>/N-Sample Enable'
                                        */
  uint8_T Counter_InitialCount;        /* Mask Parameter: Counter_InitialCount
                                        * Referenced by: '<S52>/Counter'
                                        */
  real_T DeadZone1_Start;              /* Expression: -2.5
                                        * Referenced by: '<S3>/Dead Zone1'
                                        */
  real_T DeadZone1_End;                /* Expression: 2.5
                                        * Referenced by: '<S3>/Dead Zone1'
                                        */
  real_T ms2_Gain;                     /* Expression: 0.001
                                        * Referenced by: '<S3>/m//s^2'
                                        */
  real_T AmpGain_Gain[3];              /* Expression: [5 5 5]
                                        * Referenced by: '<S3>/Amp Gain'
                                        */
  real_T Saturation1010_UpperSat;      /* Expression: 10
                                        * Referenced by: '<S3>/Saturation [-10, 10]'
                                        */
  real_T Saturation1010_LowerSat;      /* Expression: -10
                                        * Referenced by: '<S3>/Saturation [-10, 10]'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1
                                        * Referenced by: '<S30>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<S30>/Gain'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 1
                                        * Referenced by: '<S31>/Gain'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 1
                                        * Referenced by: '<S31>/Gain1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1
                                        * Referenced by: '<S31>/Gain2'
                                        */
  real_T ADelay_InitialCondition[12];  /* Expression: zeros(HOMING_num_joint,4)
                                        * Referenced by: '<S45>/A Delay'
                                        */
  real_T qdesDelay_InitialCondition[3];/* Expression: zeros(HOMING_num_joint,1)
                                        * Referenced by: '<S45>/qdes Delay'
                                        */
  real_T homingreadydelay_InitialConditi;/* Expression: 0
                                          * Referenced by: '<S45>/homing ready delay'
                                          */
  real_T statusdelay_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S45>/status delay'
                                        */
  real_T lsfdelay_InitialCondition[3]; /* Expression: ones(HOMING_num_joint,1)
                                        * Referenced by: '<S45>/lsf delay'
                                        */
  real_T q_des_Value[3];               /* Expression: [0;0;0]
                                        * Referenced by: '<S46>/q_des'
                                        */
  real_T ppdpdd_Y0[9];                 /* Expression: zeros(9,1)
                                        * Referenced by: '<S46>/p, pd, pdd'
                                        */
  real_T QuinticRecord_Y0;             /* Expression: 0
                                        * Referenced by: '<S46>/QuinticRecord'
                                        */
  real_T Manual_Value;                 /* Expression: 0
                                        * Referenced by: '<S46>/Manual'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S52>/Unit Delay'
                                        */
  real_T UnitDelay_InitialCondition_h[3];/* Expression: zeros(3,1)
                                          * Referenced by: '<S51>/Unit Delay'
                                          */
  real_T tf_Value;                     /* Expression: 5
                                        * Referenced by: '<S50>/tf'
                                        */
  real_T UnitDelay_InitialCondition_l; /* Expression: 0
                                        * Referenced by: '<S50>/Unit Delay'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S50>/Unit Delay1'
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S50>/Unit Delay2'
                                        */
  real_T enable_Value;                 /* Expression: 1
                                        * Referenced by: '<S46>/enable'
                                        */
  real_T Mode_Value;                   /* Expression: 2
                                        * Referenced by: '<S6>/Mode'
                                        */
  real_T UnitDelay2_InitialCondition_n[9];/* Expression: zeros(9,1)
                                           * Referenced by: '<S47>/Unit Delay2'
                                           */
  real_T UnitDelay3_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S47>/Unit Delay3'
                                        */
  real_T CNT328MPCICh1_P1_Size[2];     /* Computed Parameter: CNT328MPCICh1_P1_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P1;             /* Expression: Channel
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P2_Size[2];     /* Computed Parameter: CNT328MPCICh1_P2_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P2;             /* Expression: OperationMode
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P3_Size[2];     /* Computed Parameter: CNT328MPCICh1_P3_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P3;             /* Expression: DigitalFilter
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P4_Size[2];     /* Computed Parameter: CNT328MPCICh1_P4_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P4;             /* Expression: PulseInput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P5_Size[2];     /* Computed Parameter: CNT328MPCICh1_P5_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P5;             /* Expression: Direction
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P6_Size[2];     /* Computed Parameter: CNT328MPCICh1_P6_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P6;             /* Expression: InitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P7_Size[2];     /* Computed Parameter: CNT328MPCICh1_P7_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P7;             /* Expression: LoadInitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P8_Size[2];     /* Computed Parameter: CNT328MPCICh1_P8_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P8;             /* Expression: SampleTime
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P9_Size[2];     /* Computed Parameter: CNT328MPCICh1_P9_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P9;             /* Expression: PciSlot
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P10_Size[2];    /* Computed Parameter: CNT328MPCICh1_P10_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P10;            /* Expression: StartMethod
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P11_Size[2];    /* Computed Parameter: CNT328MPCICh1_P11_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P11;            /* Expression: StopMethod
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P12_Size[2];    /* Computed Parameter: CNT328MPCICh1_P12_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P12;            /* Expression: ZeroClearRising
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P13_Size[2];    /* Computed Parameter: CNT328MPCICh1_P13_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P13;            /* Expression: ZeroClearFalling
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P14_Size[2];    /* Computed Parameter: CNT328MPCICh1_P14_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P14;            /* Expression: ZeroClearMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P15_Size[2];    /* Computed Parameter: CNT328MPCICh1_P15_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P15;            /* Expression: ZeroClearMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P16_Size[2];    /* Computed Parameter: CNT328MPCICh1_P16_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P16;            /* Expression: PresetRising
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P17_Size[2];    /* Computed Parameter: CNT328MPCICh1_P17_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P17;            /* Expression: PresetFalling
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P18_Size[2];    /* Computed Parameter: CNT328MPCICh1_P18_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P18;            /* Expression: PresetMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P19_Size[2];    /* Computed Parameter: CNT328MPCICh1_P19_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P19;            /* Expression: PresetMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P20_Size[2];    /* Computed Parameter: CNT328MPCICh1_P20_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P20;            /* Expression: PresetValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P21_Size[2];    /* Computed Parameter: CNT328MPCICh1_P21_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P21;            /* Expression: Match0Value
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P22_Size[2];    /* Computed Parameter: CNT328MPCICh1_P22_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P22;            /* Expression: Match1Value
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P23_Size[2];    /* Computed Parameter: CNT328MPCICh1_P23_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P23;            /* Expression: OutputSignalMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P24_Size[2];    /* Computed Parameter: CNT328MPCICh1_P24_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P24;            /* Expression: OutputSignalMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P25_Size[2];    /* Computed Parameter: CNT328MPCICh1_P25_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P25;            /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P26_Size[2];    /* Computed Parameter: CNT328MPCICh1_P26_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P26;            /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P27_Size[2];    /* Computed Parameter: CNT328MPCICh1_P27_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P27;            /* Expression: OutputSignalAlarm
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P28_Size[2];    /* Computed Parameter: CNT328MPCICh1_P28_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P28;            /* Expression: OneShotDuration
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P29_Size[2];    /* Computed Parameter: CNT328MPCICh1_P29_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P29;            /* Expression: IndexEnable
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P30_Size[2];    /* Computed Parameter: CNT328MPCICh1_P30_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P30;            /* Expression: IndexLogic
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P31_Size[2];    /* Computed Parameter: CNT328MPCICh1_P31_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P31;            /* Expression: EnableDigitalInput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P32_Size[2];    /* Computed Parameter: CNT328MPCICh1_P32_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P32;            /* Expression: EnableDigitalOutput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P33_Size[2];    /* Computed Parameter: CNT328MPCICh1_P33_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P33;            /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P34_Size[2];    /* Computed Parameter: CNT328MPCICh1_P34_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P34;            /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P35_Size[2];    /* Computed Parameter: CNT328MPCICh1_P35_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh1_P35;            /* Expression: 0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch1'
                                        */
  real_T CNT328MPCICh2_P1_Size[2];     /* Computed Parameter: CNT328MPCICh2_P1_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P1;             /* Expression: Channel
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P2_Size[2];     /* Computed Parameter: CNT328MPCICh2_P2_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P2;             /* Expression: OperationMode
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P3_Size[2];     /* Computed Parameter: CNT328MPCICh2_P3_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P3;             /* Expression: DigitalFilter
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P4_Size[2];     /* Computed Parameter: CNT328MPCICh2_P4_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P4;             /* Expression: PulseInput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P5_Size[2];     /* Computed Parameter: CNT328MPCICh2_P5_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P5;             /* Expression: Direction
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P6_Size[2];     /* Computed Parameter: CNT328MPCICh2_P6_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P6;             /* Expression: InitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P7_Size[2];     /* Computed Parameter: CNT328MPCICh2_P7_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P7;             /* Expression: LoadInitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P8_Size[2];     /* Computed Parameter: CNT328MPCICh2_P8_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P8;             /* Expression: SampleTime
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P9_Size[2];     /* Computed Parameter: CNT328MPCICh2_P9_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P9;             /* Expression: PciSlot
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P10_Size[2];    /* Computed Parameter: CNT328MPCICh2_P10_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P10;            /* Expression: StartMethod
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P11_Size[2];    /* Computed Parameter: CNT328MPCICh2_P11_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P11;            /* Expression: StopMethod
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P12_Size[2];    /* Computed Parameter: CNT328MPCICh2_P12_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P12;            /* Expression: ZeroClearRising
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P13_Size[2];    /* Computed Parameter: CNT328MPCICh2_P13_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P13;            /* Expression: ZeroClearFalling
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P14_Size[2];    /* Computed Parameter: CNT328MPCICh2_P14_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P14;            /* Expression: ZeroClearMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P15_Size[2];    /* Computed Parameter: CNT328MPCICh2_P15_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P15;            /* Expression: ZeroClearMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P16_Size[2];    /* Computed Parameter: CNT328MPCICh2_P16_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P16;            /* Expression: PresetRising
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P17_Size[2];    /* Computed Parameter: CNT328MPCICh2_P17_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P17;            /* Expression: PresetFalling
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P18_Size[2];    /* Computed Parameter: CNT328MPCICh2_P18_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P18;            /* Expression: PresetMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P19_Size[2];    /* Computed Parameter: CNT328MPCICh2_P19_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P19;            /* Expression: PresetMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P20_Size[2];    /* Computed Parameter: CNT328MPCICh2_P20_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P20;            /* Expression: PresetValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P21_Size[2];    /* Computed Parameter: CNT328MPCICh2_P21_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P21;            /* Expression: Match0Value
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P22_Size[2];    /* Computed Parameter: CNT328MPCICh2_P22_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P22;            /* Expression: Match1Value
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P23_Size[2];    /* Computed Parameter: CNT328MPCICh2_P23_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P23;            /* Expression: OutputSignalMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P24_Size[2];    /* Computed Parameter: CNT328MPCICh2_P24_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P24;            /* Expression: OutputSignalMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P25_Size[2];    /* Computed Parameter: CNT328MPCICh2_P25_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P25;            /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P26_Size[2];    /* Computed Parameter: CNT328MPCICh2_P26_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P26;            /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P27_Size[2];    /* Computed Parameter: CNT328MPCICh2_P27_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P27;            /* Expression: OutputSignalAlarm
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P28_Size[2];    /* Computed Parameter: CNT328MPCICh2_P28_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P28;            /* Expression: OneShotDuration
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P29_Size[2];    /* Computed Parameter: CNT328MPCICh2_P29_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P29;            /* Expression: IndexEnable
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P30_Size[2];    /* Computed Parameter: CNT328MPCICh2_P30_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P30;            /* Expression: IndexLogic
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P31_Size[2];    /* Computed Parameter: CNT328MPCICh2_P31_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P31;            /* Expression: EnableDigitalInput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P32_Size[2];    /* Computed Parameter: CNT328MPCICh2_P32_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P32;            /* Expression: EnableDigitalOutput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P33_Size[2];    /* Computed Parameter: CNT328MPCICh2_P33_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P33;            /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P34_Size[2];    /* Computed Parameter: CNT328MPCICh2_P34_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P34;            /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P35_Size[2];    /* Computed Parameter: CNT328MPCICh2_P35_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh2_P35;            /* Expression: 0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch2'
                                        */
  real_T CNT328MPCICh3_P1_Size[2];     /* Computed Parameter: CNT328MPCICh3_P1_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P1;             /* Expression: Channel
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P2_Size[2];     /* Computed Parameter: CNT328MPCICh3_P2_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P2;             /* Expression: OperationMode
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P3_Size[2];     /* Computed Parameter: CNT328MPCICh3_P3_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P3;             /* Expression: DigitalFilter
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P4_Size[2];     /* Computed Parameter: CNT328MPCICh3_P4_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P4;             /* Expression: PulseInput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P5_Size[2];     /* Computed Parameter: CNT328MPCICh3_P5_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P5;             /* Expression: Direction
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P6_Size[2];     /* Computed Parameter: CNT328MPCICh3_P6_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P6;             /* Expression: InitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P7_Size[2];     /* Computed Parameter: CNT328MPCICh3_P7_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P7;             /* Expression: LoadInitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P8_Size[2];     /* Computed Parameter: CNT328MPCICh3_P8_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P8;             /* Expression: SampleTime
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P9_Size[2];     /* Computed Parameter: CNT328MPCICh3_P9_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P9;             /* Expression: PciSlot
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P10_Size[2];    /* Computed Parameter: CNT328MPCICh3_P10_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P10;            /* Expression: StartMethod
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P11_Size[2];    /* Computed Parameter: CNT328MPCICh3_P11_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P11;            /* Expression: StopMethod
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P12_Size[2];    /* Computed Parameter: CNT328MPCICh3_P12_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P12;            /* Expression: ZeroClearRising
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P13_Size[2];    /* Computed Parameter: CNT328MPCICh3_P13_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P13;            /* Expression: ZeroClearFalling
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P14_Size[2];    /* Computed Parameter: CNT328MPCICh3_P14_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P14;            /* Expression: ZeroClearMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P15_Size[2];    /* Computed Parameter: CNT328MPCICh3_P15_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P15;            /* Expression: ZeroClearMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P16_Size[2];    /* Computed Parameter: CNT328MPCICh3_P16_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P16;            /* Expression: PresetRising
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P17_Size[2];    /* Computed Parameter: CNT328MPCICh3_P17_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P17;            /* Expression: PresetFalling
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P18_Size[2];    /* Computed Parameter: CNT328MPCICh3_P18_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P18;            /* Expression: PresetMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P19_Size[2];    /* Computed Parameter: CNT328MPCICh3_P19_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P19;            /* Expression: PresetMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P20_Size[2];    /* Computed Parameter: CNT328MPCICh3_P20_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P20;            /* Expression: PresetValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P21_Size[2];    /* Computed Parameter: CNT328MPCICh3_P21_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P21;            /* Expression: Match0Value
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P22_Size[2];    /* Computed Parameter: CNT328MPCICh3_P22_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P22;            /* Expression: Match1Value
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P23_Size[2];    /* Computed Parameter: CNT328MPCICh3_P23_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P23;            /* Expression: OutputSignalMatch0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P24_Size[2];    /* Computed Parameter: CNT328MPCICh3_P24_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P24;            /* Expression: OutputSignalMatch1
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P25_Size[2];    /* Computed Parameter: CNT328MPCICh3_P25_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P25;            /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P26_Size[2];    /* Computed Parameter: CNT328MPCICh3_P26_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P26;            /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P27_Size[2];    /* Computed Parameter: CNT328MPCICh3_P27_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P27;            /* Expression: OutputSignalAlarm
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P28_Size[2];    /* Computed Parameter: CNT328MPCICh3_P28_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P28;            /* Expression: OneShotDuration
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P29_Size[2];    /* Computed Parameter: CNT328MPCICh3_P29_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P29;            /* Expression: IndexEnable
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P30_Size[2];    /* Computed Parameter: CNT328MPCICh3_P30_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P30;            /* Expression: IndexLogic
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P31_Size[2];    /* Computed Parameter: CNT328MPCICh3_P31_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P31;            /* Expression: EnableDigitalInput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P32_Size[2];    /* Computed Parameter: CNT328MPCICh3_P32_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P32;            /* Expression: EnableDigitalOutput
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P33_Size[2];    /* Computed Parameter: CNT328MPCICh3_P33_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P33;            /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P34_Size[2];    /* Computed Parameter: CNT328MPCICh3_P34_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P34;            /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P35_Size[2];    /* Computed Parameter: CNT328MPCICh3_P35_Size
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T CNT328MPCICh3_P35;            /* Expression: 0
                                        * Referenced by: '<S16>/CNT32-8M(PCI) Ch3'
                                        */
  real_T UnitDelay_InitialCondition_o; /* Expression: 0
                                        * Referenced by: '<S15>/Unit Delay'
                                        */
  real_T DiscreteFIRFilter_InitialStates;/* Expression: 0
                                          * Referenced by: '<S19>/Discrete FIR Filter'
                                          */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S25>/TSamp'
                                        */
  real_T DiscreteFIRFilter_InitialStat_b;/* Expression: 0
                                          * Referenced by: '<S21>/Discrete FIR Filter'
                                          */
  real_T DiscreteFIRFilter_InitialStat_e;/* Expression: 0
                                          * Referenced by: '<S18>/Discrete FIR Filter'
                                          */
  real_T TSamp_WtEt_o;                 /* Computed Parameter: TSamp_WtEt_o
                                        * Referenced by: '<S26>/TSamp'
                                        */
  real_T DiscreteFIRFilter_InitialStat_p;/* Expression: 0
                                          * Referenced by: '<S22>/Discrete FIR Filter'
                                          */
  real_T TSamp_WtEt_f;                 /* Computed Parameter: TSamp_WtEt_f
                                        * Referenced by: '<S23>/TSamp'
                                        */
  real_T DiscreteFIRFilter_InitialSta_ew;/* Expression: 0
                                          * Referenced by: '<S17>/Discrete FIR Filter'
                                          */
  real_T FT_File_scope_Value;          /* Expression: 0
                                        * Referenced by: '<S5>/FT_File_scope'
                                        */
  real_T Receive1_P1_Size[2];          /* Computed Parameter: Receive1_P1_Size
                                        * Referenced by: '<S1>/Receive 1'
                                        */
  real_T Receive1_P1[11];              /* Computed Parameter: Receive1_P1
                                        * Referenced by: '<S1>/Receive 1'
                                        */
  real_T Receive1_P2_Size[2];          /* Computed Parameter: Receive1_P2_Size
                                        * Referenced by: '<S1>/Receive 1'
                                        */
  real_T Receive1_P2;                  /* Expression: ipPort
                                        * Referenced by: '<S1>/Receive 1'
                                        */
  real_T Receive1_P3_Size[2];          /* Computed Parameter: Receive1_P3_Size
                                        * Referenced by: '<S1>/Receive 1'
                                        */
  real_T Receive1_P3;                  /* Expression: width
                                        * Referenced by: '<S1>/Receive 1'
                                        */
  real_T Receive1_P4_Size[2];          /* Computed Parameter: Receive1_P4_Size
                                        * Referenced by: '<S1>/Receive 1'
                                        */
  real_T Receive1_P4;                  /* Expression: sampletime
                                        * Referenced by: '<S1>/Receive 1'
                                        */
  real_T Receive1_P5_Size[2];          /* Computed Parameter: Receive1_P5_Size
                                        * Referenced by: '<S1>/Receive 1'
                                        */
  real_T Receive1_P5;                  /* Expression: vblLen
                                        * Referenced by: '<S1>/Receive 1'
                                        */
  real_T uSTPORTB_P1_Size[2];          /* Computed Parameter: uSTPORTB_P1_Size
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P1;                  /* Expression: channel
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P2_Size[2];          /* Computed Parameter: uSTPORTB_P2_Size
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P2;                  /* Expression: port
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P3_Size[2];          /* Computed Parameter: uSTPORTB_P3_Size
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P3[3];               /* Expression: ival
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P4_Size[2];          /* Computed Parameter: uSTPORTB_P4_Size
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P4;                  /* Expression: chip
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P5_Size[2];          /* Computed Parameter: uSTPORTB_P5_Size
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P5;                  /* Expression: sampletime
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P6_Size[2];          /* Computed Parameter: uSTPORTB_P6_Size
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P6;                  /* Expression: slot
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P7_Size[2];          /* Computed Parameter: uSTPORTB_P7_Size
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P7;                  /* Expression: control
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P8_Size[2];          /* Computed Parameter: uSTPORTB_P8_Size
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB_P8;                  /* Expression: boardType
                                        * Referenced by: '<S16>/1STPORTB '
                                        */
  real_T uSTPORTB1_P1_Size[2];         /* Computed Parameter: uSTPORTB1_P1_Size
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P1;                 /* Expression: channel
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P2_Size[2];         /* Computed Parameter: uSTPORTB1_P2_Size
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P2;                 /* Expression: port
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P3_Size[2];         /* Computed Parameter: uSTPORTB1_P3_Size
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P3[3];              /* Expression: ival
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P4_Size[2];         /* Computed Parameter: uSTPORTB1_P4_Size
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P4;                 /* Expression: chip
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P5_Size[2];         /* Computed Parameter: uSTPORTB1_P5_Size
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P5;                 /* Expression: sampletime
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P6_Size[2];         /* Computed Parameter: uSTPORTB1_P6_Size
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P6;                 /* Expression: slot
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P7_Size[2];         /* Computed Parameter: uSTPORTB1_P7_Size
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P7;                 /* Expression: control
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P8_Size[2];         /* Computed Parameter: uSTPORTB1_P8_Size
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB1_P8;                 /* Expression: boardType
                                        * Referenced by: '<S16>/1STPORTB 1'
                                        */
  real_T uSTPORTB2_P1_Size[2];         /* Computed Parameter: uSTPORTB2_P1_Size
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P1;                 /* Expression: channel
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P2_Size[2];         /* Computed Parameter: uSTPORTB2_P2_Size
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P2;                 /* Expression: port
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P3_Size[2];         /* Computed Parameter: uSTPORTB2_P3_Size
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P3[3];              /* Expression: ival
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P4_Size[2];         /* Computed Parameter: uSTPORTB2_P4_Size
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P4;                 /* Expression: chip
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P5_Size[2];         /* Computed Parameter: uSTPORTB2_P5_Size
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P5;                 /* Expression: sampletime
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P6_Size[2];         /* Computed Parameter: uSTPORTB2_P6_Size
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P6;                 /* Expression: slot
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P7_Size[2];         /* Computed Parameter: uSTPORTB2_P7_Size
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P7;                 /* Expression: control
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P8_Size[2];         /* Computed Parameter: uSTPORTB2_P8_Size
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T uSTPORTB2_P8;                 /* Expression: boardType
                                        * Referenced by: '<S16>/1STPORTB 2'
                                        */
  real_T DynAna_File_scope_Value;      /* Expression: 0
                                        * Referenced by: '<S5>/DynAna_File_scope'
                                        */
  real_T sys_stat_Gain;                /* Expression: 1
                                        * Referenced by: '<S5>/sys_stat'
                                        */
  real_T Gain_Gain_a;                  /* Expression: -1
                                        * Referenced by: '<S16>/Gain'
                                        */
  real_T PCIDDA0812_P1_Size[2];        /* Computed Parameter: PCIDDA0812_P1_Size
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P1[3];             /* Expression: channel
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P2_Size[2];        /* Computed Parameter: PCIDDA0812_P2_Size
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P2[3];             /* Expression: range
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P3_Size[2];        /* Computed Parameter: PCIDDA0812_P3_Size
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P3[3];             /* Expression: reset
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P4_Size[2];        /* Computed Parameter: PCIDDA0812_P4_Size
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P4[3];             /* Expression: initValue
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P5_Size[2];        /* Computed Parameter: PCIDDA0812_P5_Size
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P5;                /* Expression: sampletime
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P6_Size[2];        /* Computed Parameter: PCIDDA0812_P6_Size
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P6;                /* Expression: pci_dev
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P7_Size[2];        /* Computed Parameter: PCIDDA0812_P7_Size
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */
  real_T PCIDDA0812_P7;                /* Expression: boardType
                                        * Referenced by: '<S16>/PCI-DDA08 12 '
                                        */
  real_T EnableMotors_Value[3];        /* Expression: ones(3,1)
                                        * Referenced by: '<S2>/Enable Motors'
                                        */
  real_T PCIDDA0812toPORTA_P1_Size[2]; /* Computed Parameter: PCIDDA0812toPORTA_P1_Size
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P1[3];      /* Expression: channel
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P2_Size[2]; /* Computed Parameter: PCIDDA0812toPORTA_P2_Size
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P2;         /* Expression: port
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P3_Size[2]; /* Computed Parameter: PCIDDA0812toPORTA_P3_Size
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P3[3];      /* Expression: reset
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P4_Size[2]; /* Computed Parameter: PCIDDA0812toPORTA_P4_Size
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P4[3];      /* Expression: initValue
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P5_Size[2]; /* Computed Parameter: PCIDDA0812toPORTA_P5_Size
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P5[3];      /* Expression: ival
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P6_Size[2]; /* Computed Parameter: PCIDDA0812toPORTA_P6_Size
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P6;         /* Expression: chip
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P7_Size[2]; /* Computed Parameter: PCIDDA0812toPORTA_P7_Size
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P7;         /* Expression: sampletime
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P8_Size[2]; /* Computed Parameter: PCIDDA0812toPORTA_P8_Size
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P8;         /* Expression: slot
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P9_Size[2]; /* Computed Parameter: PCIDDA0812toPORTA_P9_Size
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P9;         /* Expression: control
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P10_Size[2];/* Computed Parameter: PCIDDA0812toPORTA_P10_Size
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
  real_T PCIDDA0812toPORTA_P10;        /* Expression: boardType
                                        * Referenced by: '<S2>/PCI-DDA08 12  to PORTA'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_slrt_parker_T {
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
    SimStruct childSFunctions[9];
    SimStruct *childSFunctionPtrs[9];
    struct _ssBlkInfo2 blkInfo2[9];
    struct _ssSFcnModelMethods2 methods2[9];
    struct _ssSFcnModelMethods3 methods3[9];
    struct _ssStatesInfo2 statesInfo2[9];
    ssPeriodicStatesInfo periodicStatesInfo[9];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[35];
      mxArray *params[35];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
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
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[8];
      mxArray *params[8];
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

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      real_T const *UPtrs2[1];
      uint_T attribs[10];
      mxArray *params[10];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;
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
extern P_slrt_parker_T slrt_parker_P;

/* Block signals (auto storage) */
extern B_slrt_parker_T slrt_parker_B;

/* Block states (auto storage) */
extern DW_slrt_parker_T slrt_parker_DW;

/*====================*
 * External functions *
 *====================*/
extern slrt_parker_rtModel *slrt_parker(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  slrt_parker_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_slrt_parker_T *const slrt_parker_M;

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
 * '<Root>' : 'slrt_parker'
 * '<S1>'   : 'slrt_parker/Force Sensor'
 * '<S2>'   : 'slrt_parker/Motor Enable Subsystem'
 * '<S3>'   : 'slrt_parker/PD Inverse Dynamics'
 * '<S4>'   : 'slrt_parker/Parker 404XR'
 * '<S5>'   : 'slrt_parker/Scopes'
 * '<S6>'   : 'slrt_parker/Trajectory Planner'
 * '<S7>'   : 'slrt_parker/Force Sensor/Convert from Voltage to Wrench'
 * '<S8>'   : 'slrt_parker/Force Sensor/Reset Logic'
 * '<S9>'   : 'slrt_parker/Force Sensor/Sample and Hold'
 * '<S10>'  : 'slrt_parker/Force Sensor/Voltage Filter Bias'
 * '<S11>'  : 'slrt_parker/Force Sensor/Voltage Filter M AV'
 * '<S12>'  : 'slrt_parker/Force Sensor/Reset Logic/N-Sample Switch'
 * '<S13>'  : 'slrt_parker/Force Sensor/Reset Logic/N-Sample Switch1'
 * '<S14>'  : 'slrt_parker/Force Sensor/Sample and Hold/Model'
 * '<S15>'  : 'slrt_parker/Parker 404XR/Count to Position'
 * '<S16>'  : 'slrt_parker/Parker 404XR/Plant'
 * '<S17>'  : 'slrt_parker/Parker 404XR/Count to Position/Accel Filter'
 * '<S18>'  : 'slrt_parker/Parker 404XR/Count to Position/Position Filter observer'
 * '<S19>'  : 'slrt_parker/Parker 404XR/Count to Position/Position Filter observer1'
 * '<S20>'  : 'slrt_parker/Parker 404XR/Count to Position/Sample and Hold'
 * '<S21>'  : 'slrt_parker/Parker 404XR/Count to Position/Velocity Filter'
 * '<S22>'  : 'slrt_parker/Parker 404XR/Count to Position/Velocity Filter observer'
 * '<S23>'  : 'slrt_parker/Parker 404XR/Count to Position/Accel Filter/Discrete Derivative1'
 * '<S24>'  : 'slrt_parker/Parker 404XR/Count to Position/Sample and Hold/Model'
 * '<S25>'  : 'slrt_parker/Parker 404XR/Count to Position/Velocity Filter/Discrete Derivative'
 * '<S26>'  : 'slrt_parker/Parker 404XR/Count to Position/Velocity Filter observer/Discrete Derivative'
 * '<S27>'  : 'slrt_parker/Scopes/Control Action'
 * '<S28>'  : 'slrt_parker/Scopes/Current Position'
 * '<S29>'  : 'slrt_parker/Scopes/EN Record'
 * '<S30>'  : 'slrt_parker/Scopes/Enabled Subsystem'
 * '<S31>'  : 'slrt_parker/Scopes/File Scope'
 * '<S32>'  : 'slrt_parker/Scopes/Force_in_Robot_Base'
 * '<S33>'  : 'slrt_parker/Scopes/System Status Scope'
 * '<S34>'  : 'slrt_parker/Scopes/Trajectory'
 * '<S35>'  : 'slrt_parker/Scopes/ft_host'
 * '<S36>'  : 'slrt_parker/Scopes/limitsw_host'
 * '<S37>'  : 'slrt_parker/Scopes/tau_host '
 * '<S38>'  : 'slrt_parker/Scopes/Enabled Subsystem/ft_Scope '
 * '<S39>'  : 'slrt_parker/Scopes/Enabled Subsystem/pc_Scope '
 * '<S40>'  : 'slrt_parker/Scopes/File Scope/P_cur_Scope'
 * '<S41>'  : 'slrt_parker/Scopes/File Scope/P_des_Scope'
 * '<S42>'  : 'slrt_parker/Scopes/File Scope/wrenchScope'
 * '<S43>'  : 'slrt_parker/Trajectory Planner/Enable Homing'
 * '<S44>'  : 'slrt_parker/Trajectory Planner/Enable Joint'
 * '<S45>'  : 'slrt_parker/Trajectory Planner/Homing'
 * '<S46>'  : 'slrt_parker/Trajectory Planner/Quintic Polynomial'
 * '<S47>'  : 'slrt_parker/Trajectory Planner/safety check'
 * '<S48>'  : 'slrt_parker/Trajectory Planner/Homing/Homing Procedure'
 * '<S49>'  : 'slrt_parker/Trajectory Planner/Homing/N-Sample Switch'
 * '<S50>'  : 'slrt_parker/Trajectory Planner/Quintic Polynomial/5th Order Polynomial'
 * '<S51>'  : 'slrt_parker/Trajectory Planner/Quintic Polynomial/Get_Initial_Condition'
 * '<S52>'  : 'slrt_parker/Trajectory Planner/Quintic Polynomial/trigger detection'
 * '<S53>'  : 'slrt_parker/Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function'
 * '<S54>'  : 'slrt_parker/Trajectory Planner/Quintic Polynomial/5th Order Polynomial/N-Sample Switch'
 * '<S55>'  : 'slrt_parker/Trajectory Planner/Quintic Polynomial/Get_Initial_Condition/N-Sample Switch'
 * '<S56>'  : 'slrt_parker/Trajectory Planner/Quintic Polynomial/trigger detection/MATLAB Function'
 * '<S57>'  : 'slrt_parker/Trajectory Planner/safety check/false detection'
 */
#endif                                 /* RTW_HEADER_slrt_parker_h_ */
