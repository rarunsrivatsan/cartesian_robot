/*
 * Pos_PID.h
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

#ifndef RTW_HEADER_Pos_PID_h_
#define RTW_HEADER_Pos_PID_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef Pos_PID_COMMON_INCLUDES_
# define Pos_PID_COMMON_INCLUDES_
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include "xpcimports.h"
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#endif                                 /* Pos_PID_COMMON_INCLUDES_ */

#include "Pos_PID_types.h"

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
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
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
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->ModelData.odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->ModelData.odeY = (val))
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
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
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
#define rtModel_Pos_PID                RT_MODEL_Pos_PID_T

/* Definition for use in the target main file */
#define Pos_PID_rtModel                RT_MODEL_Pos_PID_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals (auto storage) */
typedef struct {
  real_T counts;                       /* '<S5>/CNT32-8M(PCI) 2' */
  real_T Sum3;                         /* '<S5>/Sum3' */
  real_T XData;                        /* '<S5>/count_to_mm1' */
  real_T counts_o;                     /* '<S6>/CNT32-8M(PCI) 1' */
  real_T Sum2;                         /* '<S6>/Sum2' */
  real_T YData;                        /* '<S6>/count_to_mm' */
  real_T counts_f;                     /* '<S7>/CNT32-8M(PCI) 1' */
  real_T Sum2_g;                       /* '<S7>/Sum2' */
  real_T ZData;                        /* '<S7>/count_to_mm' */
  real_T DataStoreRead;                /* '<Root>/Data Store Read' */
  real_T Sum;                          /* '<Root>/Sum' */
  real_T ProportionalGain;             /* '<S2>/Proportional Gain' */
  real_T Integrator;                   /* '<S2>/Integrator' */
  real_T DerivativeGain;               /* '<S2>/Derivative Gain' */
  real_T Filter;                       /* '<S2>/Filter' */
  real_T SumD;                         /* '<S2>/SumD' */
  real_T FilterCoefficient;            /* '<S2>/Filter Coefficient' */
  real_T Sum_l;                        /* '<S2>/Sum' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T motX;                         /* '<Root>/Sign2' */
  real_T XEnable;                      /* '<Root>/Abs1' */
  real_T DataStoreRead1;               /* '<Root>/Data Store Read1' */
  real_T Sum2_n;                       /* '<Root>/Sum2' */
  real_T ProportionalGain_e;           /* '<S3>/Proportional Gain' */
  real_T Integrator_m;                 /* '<S3>/Integrator' */
  real_T DerivativeGain_d;             /* '<S3>/Derivative Gain' */
  real_T Filter_l;                     /* '<S3>/Filter' */
  real_T SumD_b;                       /* '<S3>/SumD' */
  real_T FilterCoefficient_p;          /* '<S3>/Filter Coefficient' */
  real_T Sum_d;                        /* '<S3>/Sum' */
  real_T motY;                         /* '<Root>/Sum3' */
  real_T Sign;                         /* '<Root>/Sign' */
  real_T Yenable;                      /* '<Root>/Abs' */
  real_T xVoltage;                     /* '<Root>/Voltage1' */
  real_T VoltageY;                     /* '<Root>/Voltage' */
  real_T DataStoreRead2;               /* '<Root>/Data Store Read2' */
  real_T Sum4;                         /* '<Root>/Sum4' */
  real_T ProportionalGain_d;           /* '<S4>/Proportional Gain' */
  real_T Integrator_f;                 /* '<S4>/Integrator' */
  real_T DerivativeGain_f;             /* '<S4>/Derivative Gain' */
  real_T Filter_b;                     /* '<S4>/Filter' */
  real_T SumD_k;                       /* '<S4>/SumD' */
  real_T FilterCoefficient_b;          /* '<S4>/Filter Coefficient' */
  real_T Sum_a;                        /* '<S4>/Sum' */
  real_T motZ;                         /* '<Root>/Sum5' */
  real_T Sign1;                        /* '<Root>/Sign1' */
  real_T Zenable;                      /* '<Root>/Abs2' */
  real_T PCIDDA08123;                  /* '<Root>/PCI-DDA08 12 3' */
  real_T DataTypeConversion;           /* '<Root>/Data Type Conversion' */
  real_T VoltageZ;                     /* '<Root>/Voltage2' */
  real_T IntegralGain;                 /* '<S2>/Integral Gain' */
  real_T IntegralGain_d;               /* '<S3>/Integral Gain' */
  real_T IntegralGain_l;               /* '<S4>/Integral Gain' */
  boolean_T Zenable_e;                 /* '<Root>/Logical Operator' */
} B_Pos_PID_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Xmem;                         /* '<Root>/Data Store Memory' */
  real_T Ymem;                         /* '<Root>/Data Store Memory1' */
  real_T Zmem;                         /* '<Root>/Data Store Memory2' */
  real_T PCIDDA0812_RWORK[16];         /* '<Root>/PCI-DDA08 12 ' */
  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFor_;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_a;   /* synthesized block */

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

  int_T CNT328MPCI2_IWORK[7];          /* '<S5>/CNT32-8M(PCI) 2' */
  int_T CNT328MPCI1_IWORK[7];          /* '<S6>/CNT32-8M(PCI) 1' */
  int_T CNT328MPCI1_IWORK_h[7];        /* '<S7>/CNT32-8M(PCI) 1' */
  int_T PCIDDA08123_IWORK[2];          /* '<Root>/PCI-DDA08 12 3' */
  int_T PCIDDA08121_IWORK[2];          /* '<Root>/PCI-DDA 08 12 1' */
  int_T PCIDDA08123_IWORK_a[2];        /* '<Root>/PCI-DDA 08 12 3' */
  int_T PCIDDA08124_IWORK[2];          /* '<Root>/PCI-DDA 08 12 4' */
  int_T PCIDDA0812_IWORK[4];           /* '<Root>/PCI-DDA08 12 ' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S8>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_j;                 /* '<S9>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_c;                 /* '<S10>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_o;                 /* '<S11>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_p;                 /* '<S12>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_pr;                /* '<S13>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_i;                 /* '<S14>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_ox;                /* '<S15>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_f;                 /* '<S16>/S-Function' */
} DW_Pos_PID_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S2>/Integrator' */
  real_T Filter_CSTATE;                /* '<S2>/Filter' */
  real_T Integrator_CSTATE_h;          /* '<S3>/Integrator' */
  real_T Filter_CSTATE_c;              /* '<S3>/Filter' */
  real_T Integrator_CSTATE_l;          /* '<S4>/Integrator' */
  real_T Filter_CSTATE_cw;             /* '<S4>/Filter' */
} X_Pos_PID_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S2>/Integrator' */
  real_T Filter_CSTATE;                /* '<S2>/Filter' */
  real_T Integrator_CSTATE_h;          /* '<S3>/Integrator' */
  real_T Filter_CSTATE_c;              /* '<S3>/Filter' */
  real_T Integrator_CSTATE_l;          /* '<S4>/Integrator' */
  real_T Filter_CSTATE_cw;             /* '<S4>/Filter' */
} XDot_Pos_PID_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S2>/Integrator' */
  boolean_T Filter_CSTATE;             /* '<S2>/Filter' */
  boolean_T Integrator_CSTATE_h;       /* '<S3>/Integrator' */
  boolean_T Filter_CSTATE_c;           /* '<S3>/Filter' */
  boolean_T Integrator_CSTATE_l;       /* '<S4>/Integrator' */
  boolean_T Filter_CSTATE_cw;          /* '<S4>/Filter' */
} XDis_Pos_PID_T;

#ifndef ODE4_INTG
#define ODE4_INTG

/* ODE4 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[4];                        /* derivatives */
} ODE4_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            Pos_PID_B
#define BlockIO                        B_Pos_PID_T
#define rtX                            Pos_PID_X
#define ContinuousStates               X_Pos_PID_T
#define rtXdot                         Pos_PID_XDot
#define StateDerivatives               XDot_Pos_PID_T
#define tXdis                          Pos_PID_XDis
#define StateDisabled                  XDis_Pos_PID_T
#define rtP                            Pos_PID_P
#define Parameters                     P_Pos_PID_T
#define rtDWork                        Pos_PID_DW
#define D_Work                         DW_Pos_PID_T

/* Parameters (auto storage) */
struct P_Pos_PID_T_ {
  real_T jogX;                         /* Variable: jogX
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T jogY;                         /* Variable: jogY
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T jogZ;                         /* Variable: jogZ
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T kdx;                          /* Variable: kdx
                                        * Referenced by: '<S2>/Derivative Gain'
                                        */
  real_T kdy;                          /* Variable: kdy
                                        * Referenced by: '<S3>/Derivative Gain'
                                        */
  real_T kdz;                          /* Variable: kdz
                                        * Referenced by: '<S4>/Derivative Gain'
                                        */
  real_T kix;                          /* Variable: kix
                                        * Referenced by: '<S2>/Integral Gain'
                                        */
  real_T kiy;                          /* Variable: kiy
                                        * Referenced by: '<S3>/Integral Gain'
                                        */
  real_T kiz;                          /* Variable: kiz
                                        * Referenced by: '<S4>/Integral Gain'
                                        */
  real_T kpx;                          /* Variable: kpx
                                        * Referenced by: '<S2>/Proportional Gain'
                                        */
  real_T kpy;                          /* Variable: kpy
                                        * Referenced by: '<S3>/Proportional Gain'
                                        */
  real_T kpz;                          /* Variable: kpz
                                        * Referenced by: '<S4>/Proportional Gain'
                                        */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S2>/Filter Coefficient'
                                        */
  real_T PIDController1_N;             /* Mask Parameter: PIDController1_N
                                        * Referenced by: '<S3>/Filter Coefficient'
                                        */
  real_T PIDController2_N;             /* Mask Parameter: PIDController2_N
                                        * Referenced by: '<S4>/Filter Coefficient'
                                        */
  real_T CNT328MPCI2_P1_Size[2];       /* Computed Parameter: CNT328MPCI2_P1_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P1;               /* Expression: Channel
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P2_Size[2];       /* Computed Parameter: CNT328MPCI2_P2_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P2;               /* Expression: OperationMode
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P3_Size[2];       /* Computed Parameter: CNT328MPCI2_P3_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P3;               /* Expression: DigitalFilter
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P4_Size[2];       /* Computed Parameter: CNT328MPCI2_P4_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P4;               /* Expression: PulseInput
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P5_Size[2];       /* Computed Parameter: CNT328MPCI2_P5_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P5;               /* Expression: Direction
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P6_Size[2];       /* Computed Parameter: CNT328MPCI2_P6_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P6;               /* Expression: InitialValue
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P7_Size[2];       /* Computed Parameter: CNT328MPCI2_P7_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P7;               /* Expression: LoadInitialValue
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P8_Size[2];       /* Computed Parameter: CNT328MPCI2_P8_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P8;               /* Expression: SampleTime
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P9_Size[2];       /* Computed Parameter: CNT328MPCI2_P9_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P9[2];            /* Expression: PciSlot
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P10_Size[2];      /* Computed Parameter: CNT328MPCI2_P10_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P10;              /* Expression: StartMethod
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P11_Size[2];      /* Computed Parameter: CNT328MPCI2_P11_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P11;              /* Expression: StopMethod
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P12_Size[2];      /* Computed Parameter: CNT328MPCI2_P12_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P12;              /* Expression: ZeroClearRising
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P13_Size[2];      /* Computed Parameter: CNT328MPCI2_P13_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P13;              /* Expression: ZeroClearFalling
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P14_Size[2];      /* Computed Parameter: CNT328MPCI2_P14_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P14;              /* Expression: ZeroClearMatch0
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P15_Size[2];      /* Computed Parameter: CNT328MPCI2_P15_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P15;              /* Expression: ZeroClearMatch1
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P16_Size[2];      /* Computed Parameter: CNT328MPCI2_P16_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P16;              /* Expression: PresetRising
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P17_Size[2];      /* Computed Parameter: CNT328MPCI2_P17_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P17;              /* Expression: PresetFalling
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P18_Size[2];      /* Computed Parameter: CNT328MPCI2_P18_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P18;              /* Expression: PresetMatch0
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P19_Size[2];      /* Computed Parameter: CNT328MPCI2_P19_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P19;              /* Expression: PresetMatch1
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P20_Size[2];      /* Computed Parameter: CNT328MPCI2_P20_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P20;              /* Expression: PresetValue
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P21_Size[2];      /* Computed Parameter: CNT328MPCI2_P21_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P21;              /* Expression: Match0Value
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P22_Size[2];      /* Computed Parameter: CNT328MPCI2_P22_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P22;              /* Expression: Match1Value
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P23_Size[2];      /* Computed Parameter: CNT328MPCI2_P23_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P23;              /* Expression: OutputSignalMatch0
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P24_Size[2];      /* Computed Parameter: CNT328MPCI2_P24_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P24;              /* Expression: OutputSignalMatch1
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P25_Size[2];      /* Computed Parameter: CNT328MPCI2_P25_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P25;              /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P26_Size[2];      /* Computed Parameter: CNT328MPCI2_P26_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P26;              /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P27_Size[2];      /* Computed Parameter: CNT328MPCI2_P27_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P27;              /* Expression: OutputSignalAlarm
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P28_Size[2];      /* Computed Parameter: CNT328MPCI2_P28_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P28;              /* Expression: OneShotDuration
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P29_Size[2];      /* Computed Parameter: CNT328MPCI2_P29_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P29;              /* Expression: IndexEnable
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P30_Size[2];      /* Computed Parameter: CNT328MPCI2_P30_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P30;              /* Expression: IndexLogic
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P31_Size[2];      /* Computed Parameter: CNT328MPCI2_P31_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P31;              /* Expression: EnableDigitalInput
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P32_Size[2];      /* Computed Parameter: CNT328MPCI2_P32_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P32;              /* Expression: EnableDigitalOutput
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P33_Size[2];      /* Computed Parameter: CNT328MPCI2_P33_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P33;              /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P34_Size[2];      /* Computed Parameter: CNT328MPCI2_P34_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P34;              /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P35_Size[2];      /* Computed Parameter: CNT328MPCI2_P35_Size
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T CNT328MPCI2_P35;              /* Expression: 0
                                        * Referenced by: '<S5>/CNT32-8M(PCI) 2'
                                        */
  real_T encoderoffsets2_Value;        /* Expression: 2^31
                                        * Referenced by: '<S5>/encoder offsets2'
                                        */
  real_T count_to_mm1_Gain;            /* Expression: 200/83289
                                        * Referenced by: '<S5>/count_to_mm1'
                                        */
  real_T CNT328MPCI1_P1_Size[2];       /* Computed Parameter: CNT328MPCI1_P1_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P1;               /* Expression: Channel
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P2_Size[2];       /* Computed Parameter: CNT328MPCI1_P2_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P2;               /* Expression: OperationMode
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P3_Size[2];       /* Computed Parameter: CNT328MPCI1_P3_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P3;               /* Expression: DigitalFilter
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P4_Size[2];       /* Computed Parameter: CNT328MPCI1_P4_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P4;               /* Expression: PulseInput
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P5_Size[2];       /* Computed Parameter: CNT328MPCI1_P5_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P5;               /* Expression: Direction
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P6_Size[2];       /* Computed Parameter: CNT328MPCI1_P6_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P6;               /* Expression: InitialValue
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P7_Size[2];       /* Computed Parameter: CNT328MPCI1_P7_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P7;               /* Expression: LoadInitialValue
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P8_Size[2];       /* Computed Parameter: CNT328MPCI1_P8_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P8;               /* Expression: SampleTime
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P9_Size[2];       /* Computed Parameter: CNT328MPCI1_P9_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P9[2];            /* Expression: PciSlot
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P10_Size[2];      /* Computed Parameter: CNT328MPCI1_P10_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P10;              /* Expression: StartMethod
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P11_Size[2];      /* Computed Parameter: CNT328MPCI1_P11_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P11;              /* Expression: StopMethod
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P12_Size[2];      /* Computed Parameter: CNT328MPCI1_P12_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P12;              /* Expression: ZeroClearRising
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P13_Size[2];      /* Computed Parameter: CNT328MPCI1_P13_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P13;              /* Expression: ZeroClearFalling
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P14_Size[2];      /* Computed Parameter: CNT328MPCI1_P14_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P14;              /* Expression: ZeroClearMatch0
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P15_Size[2];      /* Computed Parameter: CNT328MPCI1_P15_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P15;              /* Expression: ZeroClearMatch1
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P16_Size[2];      /* Computed Parameter: CNT328MPCI1_P16_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P16;              /* Expression: PresetRising
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P17_Size[2];      /* Computed Parameter: CNT328MPCI1_P17_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P17;              /* Expression: PresetFalling
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P18_Size[2];      /* Computed Parameter: CNT328MPCI1_P18_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P18;              /* Expression: PresetMatch0
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P19_Size[2];      /* Computed Parameter: CNT328MPCI1_P19_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P19;              /* Expression: PresetMatch1
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P20_Size[2];      /* Computed Parameter: CNT328MPCI1_P20_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P20;              /* Expression: PresetValue
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P21_Size[2];      /* Computed Parameter: CNT328MPCI1_P21_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P21;              /* Expression: Match0Value
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P22_Size[2];      /* Computed Parameter: CNT328MPCI1_P22_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P22;              /* Expression: Match1Value
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P23_Size[2];      /* Computed Parameter: CNT328MPCI1_P23_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P23;              /* Expression: OutputSignalMatch0
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P24_Size[2];      /* Computed Parameter: CNT328MPCI1_P24_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P24;              /* Expression: OutputSignalMatch1
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P25_Size[2];      /* Computed Parameter: CNT328MPCI1_P25_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P25;              /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P26_Size[2];      /* Computed Parameter: CNT328MPCI1_P26_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P26;              /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P27_Size[2];      /* Computed Parameter: CNT328MPCI1_P27_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P27;              /* Expression: OutputSignalAlarm
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P28_Size[2];      /* Computed Parameter: CNT328MPCI1_P28_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P28;              /* Expression: OneShotDuration
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P29_Size[2];      /* Computed Parameter: CNT328MPCI1_P29_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P29;              /* Expression: IndexEnable
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P30_Size[2];      /* Computed Parameter: CNT328MPCI1_P30_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P30;              /* Expression: IndexLogic
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P31_Size[2];      /* Computed Parameter: CNT328MPCI1_P31_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P31;              /* Expression: EnableDigitalInput
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P32_Size[2];      /* Computed Parameter: CNT328MPCI1_P32_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P32;              /* Expression: EnableDigitalOutput
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P33_Size[2];      /* Computed Parameter: CNT328MPCI1_P33_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P33;              /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P34_Size[2];      /* Computed Parameter: CNT328MPCI1_P34_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P34;              /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P35_Size[2];      /* Computed Parameter: CNT328MPCI1_P35_Size
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P35;              /* Expression: 0
                                        * Referenced by: '<S6>/CNT32-8M(PCI) 1'
                                        */
  real_T encoderoffsets1_Value;        /* Expression: 2^31
                                        * Referenced by: '<S6>/encoder offsets1'
                                        */
  real_T count_to_mm_Gain;             /* Expression: 200/82720
                                        * Referenced by: '<S6>/count_to_mm'
                                        */
  real_T CNT328MPCI1_P1_Size_h[2];     /* Computed Parameter: CNT328MPCI1_P1_Size_h
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P1_d;             /* Expression: Channel
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P2_Size_l[2];     /* Computed Parameter: CNT328MPCI1_P2_Size_l
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P2_k;             /* Expression: OperationMode
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P3_Size_b[2];     /* Computed Parameter: CNT328MPCI1_P3_Size_b
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P3_j;             /* Expression: DigitalFilter
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P4_Size_g[2];     /* Computed Parameter: CNT328MPCI1_P4_Size_g
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P4_g;             /* Expression: PulseInput
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P5_Size_m[2];     /* Computed Parameter: CNT328MPCI1_P5_Size_m
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P5_i;             /* Expression: Direction
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P6_Size_n[2];     /* Computed Parameter: CNT328MPCI1_P6_Size_n
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P6_l;             /* Expression: InitialValue
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P7_Size_d[2];     /* Computed Parameter: CNT328MPCI1_P7_Size_d
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P7_i;             /* Expression: LoadInitialValue
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P8_Size_i[2];     /* Computed Parameter: CNT328MPCI1_P8_Size_i
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P8_n;             /* Expression: SampleTime
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P9_Size_a[2];     /* Computed Parameter: CNT328MPCI1_P9_Size_a
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P9_k[2];          /* Expression: PciSlot
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P10_Size_h[2];    /* Computed Parameter: CNT328MPCI1_P10_Size_h
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P10_l;            /* Expression: StartMethod
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P11_Size_j[2];    /* Computed Parameter: CNT328MPCI1_P11_Size_j
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P11_c;            /* Expression: StopMethod
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P12_Size_n[2];    /* Computed Parameter: CNT328MPCI1_P12_Size_n
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P12_l;            /* Expression: ZeroClearRising
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P13_Size_a[2];    /* Computed Parameter: CNT328MPCI1_P13_Size_a
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P13_p;            /* Expression: ZeroClearFalling
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P14_Size_e[2];    /* Computed Parameter: CNT328MPCI1_P14_Size_e
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P14_j;            /* Expression: ZeroClearMatch0
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P15_Size_d[2];    /* Computed Parameter: CNT328MPCI1_P15_Size_d
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P15_l;            /* Expression: ZeroClearMatch1
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P16_Size_i[2];    /* Computed Parameter: CNT328MPCI1_P16_Size_i
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P16_d;            /* Expression: PresetRising
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P17_Size_c[2];    /* Computed Parameter: CNT328MPCI1_P17_Size_c
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P17_b;            /* Expression: PresetFalling
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P18_Size_i[2];    /* Computed Parameter: CNT328MPCI1_P18_Size_i
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P18_b;            /* Expression: PresetMatch0
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P19_Size_j[2];    /* Computed Parameter: CNT328MPCI1_P19_Size_j
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P19_m;            /* Expression: PresetMatch1
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P20_Size_e[2];    /* Computed Parameter: CNT328MPCI1_P20_Size_e
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P20_i;            /* Expression: PresetValue
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P21_Size_e[2];    /* Computed Parameter: CNT328MPCI1_P21_Size_e
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P21_b;            /* Expression: Match0Value
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P22_Size_p[2];    /* Computed Parameter: CNT328MPCI1_P22_Size_p
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P22_l;            /* Expression: Match1Value
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P23_Size_k[2];    /* Computed Parameter: CNT328MPCI1_P23_Size_k
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P23_e;            /* Expression: OutputSignalMatch0
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P24_Size_k[2];    /* Computed Parameter: CNT328MPCI1_P24_Size_k
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P24_g;            /* Expression: OutputSignalMatch1
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P25_Size_m[2];    /* Computed Parameter: CNT328MPCI1_P25_Size_m
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P25_e;            /* Expression: OutputSignalAbnormal
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P26_Size_m[2];    /* Computed Parameter: CNT328MPCI1_P26_Size_m
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P26_e;            /* Expression: OutputSignalDigitalFilter
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P27_Size_a[2];    /* Computed Parameter: CNT328MPCI1_P27_Size_a
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P27_g;            /* Expression: OutputSignalAlarm
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P28_Size_i[2];    /* Computed Parameter: CNT328MPCI1_P28_Size_i
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P28_a;            /* Expression: OneShotDuration
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P29_Size_b[2];    /* Computed Parameter: CNT328MPCI1_P29_Size_b
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P29_o;            /* Expression: IndexEnable
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P30_Size_o[2];    /* Computed Parameter: CNT328MPCI1_P30_Size_o
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P30_h;            /* Expression: IndexLogic
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P31_Size_j[2];    /* Computed Parameter: CNT328MPCI1_P31_Size_j
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P31_l;            /* Expression: EnableDigitalInput
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P32_Size_n[2];    /* Computed Parameter: CNT328MPCI1_P32_Size_n
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P32_p;            /* Expression: EnableDigitalOutput
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P33_Size_a[2];    /* Computed Parameter: CNT328MPCI1_P33_Size_a
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P33_g;            /* Expression: DigitalOutputInitialValue
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P34_Size_l[2];    /* Computed Parameter: CNT328MPCI1_P34_Size_l
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P34_n;            /* Expression: DigitalOutputFinalValue
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P35_Size_b[2];    /* Computed Parameter: CNT328MPCI1_P35_Size_b
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T CNT328MPCI1_P35_p;            /* Expression: 0
                                        * Referenced by: '<S7>/CNT32-8M(PCI) 1'
                                        */
  real_T encoderoffsets1_Value_f;      /* Expression: 2^31
                                        * Referenced by: '<S7>/encoder offsets1'
                                        */
  real_T count_to_mm_Gain_j;           /* Expression: 200/82720
                                        * Referenced by: '<S7>/count_to_mm'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S2>/Integrator'
                                        */
  real_T Filter_IC;                    /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S2>/Filter'
                                        */
  real_T Integrator_IC_o;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S3>/Integrator'
                                        */
  real_T Filter_IC_m;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S3>/Filter'
                                        */
  real_T Voltage1_Gain;                /* Expression: 3
                                        * Referenced by: '<Root>/Voltage1'
                                        */
  real_T Voltage_Gain;                 /* Expression: 3
                                        * Referenced by: '<Root>/Voltage'
                                        */
  real_T Integrator_IC_j;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S4>/Integrator'
                                        */
  real_T Filter_IC_k;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S4>/Filter'
                                        */
  real_T PCIDDA08123_P1_Size[2];       /* Computed Parameter: PCIDDA08123_P1_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P1;               /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P2_Size[2];       /* Computed Parameter: PCIDDA08123_P2_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P2;               /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P3_Size[2];       /* Computed Parameter: PCIDDA08123_P3_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P3[3];            /* Expression: ival
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P4_Size[2];       /* Computed Parameter: PCIDDA08123_P4_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P4;               /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P5_Size[2];       /* Computed Parameter: PCIDDA08123_P5_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P5;               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P6_Size[2];       /* Computed Parameter: PCIDDA08123_P6_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P6;               /* Expression: slot
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P7_Size[2];       /* Computed Parameter: PCIDDA08123_P7_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P7;               /* Expression: control
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P8_Size[2];       /* Computed Parameter: PCIDDA08123_P8_Size
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08123_P8;               /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA08 12 3'
                                        */
  real_T PCIDDA08121_P1_Size[2];       /* Computed Parameter: PCIDDA08121_P1_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P1;               /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P2_Size[2];       /* Computed Parameter: PCIDDA08121_P2_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P2;               /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P3_Size[2];       /* Computed Parameter: PCIDDA08121_P3_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P3;               /* Expression: reset
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P4_Size[2];       /* Computed Parameter: PCIDDA08121_P4_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P4;               /* Expression: initValue
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P5_Size[2];       /* Computed Parameter: PCIDDA08121_P5_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P5[3];            /* Expression: ival
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P6_Size[2];       /* Computed Parameter: PCIDDA08121_P6_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P6;               /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P7_Size[2];       /* Computed Parameter: PCIDDA08121_P7_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P7;               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P8_Size[2];       /* Computed Parameter: PCIDDA08121_P8_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P8;               /* Expression: slot
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P9_Size[2];       /* Computed Parameter: PCIDDA08121_P9_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P9;               /* Expression: control
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P10_Size[2];      /* Computed Parameter: PCIDDA08121_P10_Size
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08121_P10;              /* Expression: boardType
                                        * Referenced by: '<Root>/PCI-DDA 08 12 1'
                                        */
  real_T PCIDDA08123_P1_Size_l[2];     /* Computed Parameter: PCIDDA08123_P1_Size_l
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P1_h;             /* Expression: channel
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P2_Size_n[2];     /* Computed Parameter: PCIDDA08123_P2_Size_n
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P2_k;             /* Expression: port
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P3_Size_g[2];     /* Computed Parameter: PCIDDA08123_P3_Size_g
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P3_m;             /* Expression: reset
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P4_Size_j[2];     /* Computed Parameter: PCIDDA08123_P4_Size_j
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P4_h;             /* Expression: initValue
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P5_Size_j[2];     /* Computed Parameter: PCIDDA08123_P5_Size_j
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P5_h[3];          /* Expression: ival
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P6_Size_b[2];     /* Computed Parameter: PCIDDA08123_P6_Size_b
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P6_c;             /* Expression: chip
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P7_Size_g[2];     /* Computed Parameter: PCIDDA08123_P7_Size_g
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P7_n;             /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P8_Size_e[2];     /* Computed Parameter: PCIDDA08123_P8_Size_e
                                        * Referenced by: '<Root>/PCI-DDA 08 12 3'
                                        */
  real_T PCIDDA08123_P8_b;             /* Expression: slot
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
  real_T Voltage2_Gain;                /* Expression: 3
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
  real_T DataStoreMemory_InitialValue; /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory'
                                        */
  real_T DataStoreMemory1_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory1'
                                        */
  real_T DataStoreMemory2_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Pos_PID_T {
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
    time_T *taskTimePtrs[2];
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
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[8];
      mxArray *params[8];
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
    real_T odeY[6];
    real_T odeF[4][6];
    ODE4_IntgData intgData;
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
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
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
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Pos_PID_T Pos_PID_P;

/* Block signals (auto storage) */
extern B_Pos_PID_T Pos_PID_B;

/* Continuous states (auto storage) */
extern X_Pos_PID_T Pos_PID_X;

/* Block states (auto storage) */
extern DW_Pos_PID_T Pos_PID_DW;

/* Model entry point functions */
extern void Pos_PID_initialize(void);
extern void Pos_PID_output(void);
extern void Pos_PID_update(void);
extern void Pos_PID_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern Pos_PID_rtModel *Pos_PID(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  Pos_PID_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_Pos_PID_T *const Pos_PID_M;

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
 * '<Root>' : 'Pos_PID'
 * '<S1>'   : 'Pos_PID/Force Subsystem'
 * '<S2>'   : 'Pos_PID/PID Controller'
 * '<S3>'   : 'Pos_PID/PID Controller1'
 * '<S4>'   : 'Pos_PID/PID Controller2'
 * '<S5>'   : 'Pos_PID/X_Encoder'
 * '<S6>'   : 'Pos_PID/Y_encoder '
 * '<S7>'   : 'Pos_PID/Z_encoder 1'
 * '<S8>'   : 'Pos_PID/X_Encoder/Counter'
 * '<S9>'   : 'Pos_PID/X_Encoder/Counter1'
 * '<S10>'  : 'Pos_PID/X_Encoder/Counter2'
 * '<S11>'  : 'Pos_PID/Y_encoder /Counter1'
 * '<S12>'  : 'Pos_PID/Y_encoder /Counter2'
 * '<S13>'  : 'Pos_PID/Y_encoder /Counter3'
 * '<S14>'  : 'Pos_PID/Z_encoder 1/Counter1'
 * '<S15>'  : 'Pos_PID/Z_encoder 1/Counter2'
 * '<S16>'  : 'Pos_PID/Z_encoder 1/Counter3'
 */
#endif                                 /* RTW_HEADER_Pos_PID_h_ */
