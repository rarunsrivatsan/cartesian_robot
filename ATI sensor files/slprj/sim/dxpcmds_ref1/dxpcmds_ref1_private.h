#include "__cf_dxpcmds_ref1.h"
#ifndef RTW_HEADER_dxpcmds_ref1_private_h_
#define RTW_HEADER_dxpcmds_ref1_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "simtarget/slMdlrefSimTargetHeaders.h"
#include "sl_fileio_rtw.h"
extern const char * rt_GetMatSignalLoggingFileName ( void ) ; extern const
char * rt_GetMatSigLogSelectorFileName ( void ) ; extern void *
rt_GetOSigstreamManager ( void ) ; extern void * *
rt_GetOSigstreamManagerAddr ( void ) ; extern boolean_T
slIsRapidAcceleratorSimulating ( void ) ; extern void
rt_RAccelReplaceFromFilename ( const char * blockpath , char * fileNam ) ;
extern void rt_RAccelReplaceToFilename ( const char * blockpath , char *
fileNam ) ; extern void * gblLoggingInterval ;
#ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm) ssIsFirstInitCond((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm) ssIsMajorTimeStep((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm) ssIsMinorTimeStep((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmIsSpecialSampleHit
#define rtmIsSpecialSampleHit(rtm, sti, prom_sti, tid) ssIsSpecialSampleHit( ssGetRootSS((rtm)->_mdlRefSfcnS), je24bfi51o[sti], je24bfi51o[prom_sti], tid)
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) ((rtm)->DataMapInfo)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) ((rtm)->DataMapInfo = (val))
#endif
#ifndef rtmGetClockTick0
#define rtmGetClockTick0(rtm) ssGetClockTick( ssGetRootSS((rtm)->_mdlRefSfcnS), je24bfi51o[0])
#endif
#ifndef rtmGetClockTick1
#define rtmGetClockTick1(rtm) ssGetClockTick( ssGetRootSS((rtm)->_mdlRefSfcnS), je24bfi51o[1])
#endif
#ifndef rtmGetClockTick2
#define rtmGetClockTick2(rtm) ssGetClockTick( ssGetRootSS((rtm)->_mdlRefSfcnS), je24bfi51o[2])
#endif
#ifndef rtmGetClockTick3
#define rtmGetClockTick3(rtm) ssGetClockTick( ssGetRootSS((rtm)->_mdlRefSfcnS), je24bfi51o[3])
#endif
#ifndef rtmGetClockTickH0
#define rtmGetClockTickH0(rtm) ssGetClockTickH( ssGetRootSS((rtm)->_mdlRefSfcnS), je24bfi51o[0])
#endif
#ifndef rtmGetClockTickH1
#define rtmGetClockTickH1(rtm) ssGetClockTickH( ssGetRootSS((rtm)->_mdlRefSfcnS), je24bfi51o[1])
#endif
#ifndef rtmGetClockTickH2
#define rtmGetClockTickH2(rtm) ssGetClockTickH( ssGetRootSS((rtm)->_mdlRefSfcnS), je24bfi51o[2])
#endif
#ifndef rtmGetClockTickH3
#define rtmGetClockTickH3(rtm) ssGetClockTickH( ssGetRootSS((rtm)->_mdlRefSfcnS), je24bfi51o[3])
#endif
#ifndef rtmGetLogOutput
#define rtmGetLogOutput(rtm) ssGetLogOutput((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmSetSampleHit
#define rtmSetSampleHit(rtm, sti, tid, val) _ssSetSampleHit(ssGetRootSS((rtm)->_mdlRefSfcnS), je24bfi51o[sti], val)
#endif
#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid) ssIsSampleHit( ssGetRootSS((rtm)->_mdlRefSfcnS), je24bfi51o[sti], tid)
#endif
#ifndef rtmGetT
#define rtmGetT(rtm) (ssGetT((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm) (ssGetTFinal((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTNextWasAdjusted
#define rtmGetTNextWasAdjusted(rtm, sti) (ssGetTNextWasAdjusted((rtm)->_mdlRefSfcnS,  je24bfi51o[sti]))
#endif
#ifndef rtmGetTStart
#define rtmGetTStart(rtm) (ssGetTStart((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti) ssGetTaskTime( ssGetRootSS((rtm)->_mdlRefSfcnS), je24bfi51o[sti])
#endif
#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val) _ssSetTaskTime(ssGetRootSS((rtm)->_mdlRefSfcnS), je24bfi51o[sti], val)
#endif
#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm) (ssGetTimeOfLastOutput((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetVarNextHitTime
#define rtmGetVarNextHitTime(rtm, sti) (_ssGetVarNextHitTime((rtm)->_mdlRefSfcnS,  (int)(ssGetOffsetTime(ssGetRootSS((rtm)->_mdlRefSfcnS), je24bfi51o[sti+4]))))
#endif
#ifndef rtmSetVarNextHitTime
#define rtmSetVarNextHitTime(rtm, sti, val) ssSetTimeOfNextVarHit((rtm)->_mdlRefSfcnS,  je24bfi51o[sti], val)
#endif
extern int_T je24bfi51o [ 4 ] ; extern dcrny0ly1n dcrny0ly1nd ;
#endif
