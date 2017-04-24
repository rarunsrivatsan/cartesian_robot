#include "__cf_sldemo_mdlref_counter_datamngt.h"
#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME sldemo_mdlref_counter_datamngt_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define rt_logging_h
#include "sldemo_mdlref_counter_datamngt_types.h"
#include "sldemo_mdlref_counter_datamngt.h"
#include "sldemo_mdlref_counter_datamngt_private.h"
MdlRefChildMdlRec childModels [ 1 ] = { "sldemo_mdlref_counter_datamngt" ,
"sldemo_mdlref_counter_datamngt" , 0 } ; const char *
rt_GetMatSignalLoggingFileName ( void ) { return NULL ; } const char *
rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; } void *
rt_GetOSigstreamManager ( void ) { return NULL ; } boolean_T
slIsRapidAcceleratorSimulating ( void ) { return false ; } void
rt_RAccelReplaceFromFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void rt_RAccelReplaceToFilename (
const char * blockpath , char * fileName ) { ( void ) blockpath ; ( void )
fileName ; } static void mdlInitializeConditions ( SimStruct * S ) {
gz1wa3trlus * dw = ( gz1wa3trlus * ) ssGetDWork ( S , 0 ) ; OutputType *
o_o_ROOT_Y0 = ( OutputType * ) ssGetOutputPortSignal ( S , 0 ) ; OutputType *
rtp_CounterICs = ( OutputType * ) NULL ; if ( ! ssGetModelRefParamArgData ( S
, 1 , ( void * * ) ( & rtp_CounterICs ) ) ) return ; d3cvjty0a0 ( o_o_ROOT_Y0
, & ( dw -> rtdw ) , rtp_CounterICs ) ; } static void mdlReset ( SimStruct *
S ) { gz1wa3trlus * dw = ( gz1wa3trlus * ) ssGetDWork ( S , 0 ) ; OutputType
* rtp_CounterICs = ( OutputType * ) NULL ; if ( ! ssGetModelRefParamArgData (
S , 1 , ( void * * ) ( & rtp_CounterICs ) ) ) return ; bg3uwbazbw ( & ( dw ->
rtdw ) , rtp_CounterICs ) ; } static void mdlInitializeSizes ( SimStruct * S
) { ssSetNumSFcnParams ( S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; if ( S -> mdlInfo -> genericFcn != (
NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; real_T lifeSpan =
rtInf ; real_T startTime = 0.0 ; real_T stopTime = 10.0 ; int_T hwSettings [
15 ] ; int_T opSettings [ 2 ] ; boolean_T concurrTaskSupport = 0 ; boolean_T
disallowsMdlRefFromVarStepTop = 1 ; real_T fixedStep = 0.2 ; ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_SOLVER_TYPE_EARLY , 2 , ( NULL ) ) ; ( fcn ) ( S ,
GEN_FCN_MODELREF_RATE_GROUPED , 0 , ( NULL ) ) ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_LIFE_SPAN , - 1 , & lifeSpan ) ) return ; if ( ! ( fcn )
( S , GEN_FCN_CHK_MODELREF_START_TIME , - 1 , & startTime ) ) return ; if ( !
( fcn ) ( S , GEN_FCN_CHK_MODELREF_STOP_TIME , - 1 , & stopTime ) ) return ;
hwSettings [ 0 ] = 8 ; hwSettings [ 1 ] = 16 ; hwSettings [ 2 ] = 32 ;
hwSettings [ 3 ] = 32 ; hwSettings [ 4 ] = 32 ; hwSettings [ 5 ] = 64 ;
hwSettings [ 6 ] = 32 ; hwSettings [ 7 ] = 2 ; hwSettings [ 8 ] = 0 ;
hwSettings [ 9 ] = 32 ; hwSettings [ 10 ] = 1 ; hwSettings [ 11 ] = 0 ;
hwSettings [ 12 ] = 2 ; hwSettings [ 13 ] = 64 ; hwSettings [ 14 ] = 0 ; if (
! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_HARDWARE_SETTINGS , 15 , hwSettings ) )
return ; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_DATA_DICTIONARY , 0 , (
void * ) "" ) ) return ; slmrSetDataDictionarySet ( S , "" ) ; opSettings [ 0
] = 0 ; opSettings [ 1 ] = 0 ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_OPTIM_SETTINGS , 2 , opSettings ) ) return ;
slmrSetIsInlineParamsOn ( S , true ) ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_CONCURRETNT_TASK_SUPPORT , ( int_T ) concurrTaskSupport
, ( NULL ) ) ) return ; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_SOLVER_TYPE
, 0 , & disallowsMdlRefFromVarStepTop ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_SOLVER_NAME , 0 , ( void * ) "FixedStepDiscrete" ) )
return ; if ( ! ( fcn ) ( S , GEN_FCN_CHK_MODELREF_SOLVER_MODE ,
SOLVER_MODE_SINGLETASKING , ( NULL ) ) ) return ; if ( ! ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_FIXED_STEP , 0 , & fixedStep ) ) return ; ( fcn ) ( S ,
GEN_FCN_CHK_MODELREF_FRAME_UPGRADE_DIAGNOSTICS , 2 , ( NULL ) ) ; }
slmrSetModelRefMaxFreqHz ( S , - 1.000000 ) ;
slmrSetModelRefAutoSolverStatusFlags ( S , 75 ) ; { static const char *
globalVarList [ ] = { "CounterParamType" , "OutputType" } ;
ssRegModelRefGlobalVarUsage ( S , 2 , ( void * ) globalVarList ) ; } if ( !
ssSetNumModelRefParamArgs ( S , 2 ) ) return ; { int_T locDims [ 2 ] = { 1 ,
1 } ; uint32_T dtChecksum [ 4 ] = { 2745240326U , 3125341977U , 3233415848U ,
3951441665U } ; ssRegModelRefStructParamArg ( S , 0 , "CounterParams" , 1 , 2
, locDims , 0 , dtChecksum , "CounterParamType" , 0 ) ; } { int_T locDims [ 2
] = { 1 , 1 } ; uint32_T dtChecksum [ 4 ] = { 1667802503U , 1377585120U ,
1235117814U , 3796875583U } ; ssRegModelRefStructParamArg ( S , 1 ,
"CounterICs" , 1 , 2 , locDims , 0 , dtChecksum , "OutputType" , 0 ) ; }
ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates ( S , 0 ) ;
ssSetNumDiscStates ( S , 0 ) ; { const char * modelNames [ ] = { "" } ; const
size_t numModelNames = 0 ; slmrSetHasNonBuiltinLoggedState ( S ,
numModelNames , modelNames ) ; } ssSetSymbolicDimsSupport ( S , true ) ;
slmrInitializeIOPortDataVectors ( S , 1 , 1 ) ; if ( ! ssSetNumInputPorts ( S
, 1 ) ) return ; if ( ! ssSetInputPortVectorDimension ( S , 0 , 2 ) ) return
; ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_BOOLEAN )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , - 1 ) ; if ( !
ssSetNumOutputPorts ( S , 1 ) ) return ; if ( !
ssSetOutputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
{ DTypeId dataTypeIdReg ; ssRegisterTypeFromNamedObject ( S , "OutputType" ,
& dataTypeIdReg ) ; if ( dataTypeIdReg == INVALID_DTYPE_ID ) return ;
ssSetOutputPortDataType ( S , 0 , dataTypeIdReg ) ; }
#endif
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , - 1 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ; ssSetOutputPortOkToMerge
( S , 0 , SS_OK_TO_MERGE ) ; ssSetOutputPortICAttributes ( S , 0 , false ,
true , false ) ; ssSetModelRefOutputBlkIOUpdatedInAnotherExecContext ( S , 0
, true ) ; slmrModelRefSetOutputPortDrivenByNonCondExecStateflow ( S , 0 ,
false ) ; slmrModelRefSetOutputPortDrivenByResetITVS ( S , 0 , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ;
slmrModelRefSetHasDescExpFcnMdl ( S , false ) ;
slmrSetModelRefOriginalOutportBusType ( S , 0 , "OutputType" ) ; { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefInputSignalDesignMin ( S , 0 , & minValue ) ;
ssSetModelRefInputSignalDesignMax ( S , 0 , & maxValue ) ; } { real_T
minValue = rtMinusInf ; real_T maxValue = rtInf ;
ssSetModelRefOutputSignalDesignMin ( S , 0 , & minValue ) ;
ssSetModelRefOutputSignalDesignMax ( S , 0 , & maxValue ) ; }
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_sldemo_mdlref_counter_datamngt_RegisterSimStateChecksum ( S ) ; { static
ssRTWStorageType storageClass [ 2 ] = { SS_RTW_STORAGE_AUTO ,
SS_RTW_STORAGE_AUTO } ; ssSetModelRefPortRTWStorageClasses ( S , storageClass
) ; } ssSetModelRefSignalLoggingSaveFormat ( S , SS_DATASET_FORMAT ) ;
slmrSetModelRefLoggingSaveFormat ( S , SS_STRUCTUREWITHTIME_FORMAT ) ;
ssSetNumSampleTimes ( S , 2 ) ; ssSetParameterTuningCompliance ( S , true ) ;
ssSetNumRWork ( S , 0 ) ; ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ;
ssSetNumModes ( S , 0 ) ; { int_T zcsIdx = 0 ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 2 ) ;
ssSetZcSignalName ( S , zcsIdx , "Trig" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL_UP ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0
) ; } ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 1 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
USE_DEFAULT_FOR_DISCRETE_INHERITANCE ) ; ssSetOptimizeModelRefInitCode ( S ,
0 ) ; ssSetModelReferenceConsistentOutportInitialization ( S , true ) ;
ssSetAcceptsFcnCallInputs ( S ) ; ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
true ) ; ssHasStateInsideForEachSS ( S , false ) ;
ssSetModelRefHasParforForEachSS ( S , false ) ;
ssSetModelRefHasVariantModelOrSubsystem ( S , false ) ;
ssSetNumExplicitTaskingTs ( S , 1 ) ; ssSetParameterChangeEventTID ( S , 1 )
; ssSetOptions ( S , SS_OPTION_ALLOW_CONSTANT_PORT_SAMPLE_TIME |
SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED |
SS_OPTION_ALLOW_PORT_SAMPLE_TIME_IN_TRIGSS |
SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES | SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME
| SS_OPTION_EXCEPTION_FREE_CODE | SS_OPTION_WORKS_WITH_CODE_REUSE ) ; if ( S
-> mdlInfo -> genericFcn != ( NULL ) ) { if ( ! ssRegModelRefChildModel ( S ,
1 , childModels ) ) { return ; } }
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_sldemo_mdlref_counter_datamngt_MdlInfoRegFcn ( S ,
"sldemo_mdlref_counter_datamngt" , & retVal ) ; if ( ! retVal ) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType (
S , & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ;
if ( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( gz1wa3trlus ) ) )
return ; ssSetDWorkDataType ( S , 0 , mdlrefDWTypeId ) ; ssSetDWorkWidth ( S
, 0 , 1 ) ; }
#else
if ( ! ssSetNumDWork ( S , 1 ) ) { return ; }
#endif
slmrSetDataTypeOverrideSettings ( S , 0 , 0 ) ;
slmrRegisterSystemInitializeMethod ( S , mdlInitializeConditions ) ;
slmrRegisterSystemResetMethod ( S , mdlReset ) ;
ssSetSimulinkVersionGeneratedIn ( S , "8.7" ) ; ssSetModelRefTriggerType ( S
, "rising" ) ; ssSetModelRefHasEnablePort ( S , 0 ) ; } static void
mdlInitializeSampleTimes ( SimStruct * S ) { ssSetSampleTime ( S , 0 , - 1 )
; ssSetSampleTime ( S , 1 , mxGetInf ( ) ) ; return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_START
static void mdlStart ( SimStruct * S ) { gz1wa3trlus * dw = ( gz1wa3trlus * )
ssGetDWork ( S , 0 ) ; void * sysRanPtr = ( NULL ) ; int sysTid = 0 ;
ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ; ssGetContextSysTid ( S , &
sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid = 0 ; } j4suonz2i2 ( S ,
ssGetSampleTimeTaskID ( S , 0 ) , 0 , & ( dw -> rtm ) , & ( dw -> rtdw ) , &
( dw -> rtzce ) , sysRanPtr , sysTid , ( NULL ) , ( NULL ) , 0 , - 1 ) ;
ssSetModelMappingInfoPtr ( S , & ( dw -> rtm . DataMapInfo . mmi ) ) ; if ( S
-> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo ->
genericFcn ; } } static void mdlOutputs ( SimStruct * S , int_T tid ) {
gz1wa3trlus * dw = ( gz1wa3trlus * ) ssGetDWork ( S , 0 ) ; const boolean_T *
i_k3ovydl5nk = ( boolean_T * ) ssGetInputPortSignal ( S , 0 ) ; OutputType *
o_o_ROOT_Y0 = ( OutputType * ) ssGetOutputPortSignal ( S , 0 ) ;
CounterParamType * rtp_CounterParams = ( CounterParamType * ) NULL ;
OutputType * rtp_CounterICs = ( OutputType * ) NULL ; if ( !
ssGetModelRefParamArgData ( S , 0 , ( void * * ) ( & rtp_CounterParams ) ) )
return ; if ( ! ssGetModelRefParamArgData ( S , 1 , ( void * * ) ( &
rtp_CounterICs ) ) ) return ; if ( tid == PARAMETER_TUNING_TID ) {
sldemo_mdlref_counter_datamngtTID1 ( ) ; } if ( tid != CONSTANT_TID && tid !=
PARAMETER_TUNING_TID ) { if ( ssIsSampleHit ( S , 0 , tid ) ) {
sldemo_mdlref_counter_datamngt ( i_k3ovydl5nk , o_o_ROOT_Y0 , & ( dw -> rtdw
) , & ( dw -> rtzce ) , rtp_CounterParams , rtp_CounterICs ) ; } } } static
void mdlTerminate ( SimStruct * S ) { return ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
dwFieldNames [ 5 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , } ; mxArray * ss = mxCreateStructMatrix ( 1 , 1 , 5 ,
dwFieldNames ) ; { mxArray * mdlrefDW =
mr_sldemo_mdlref_counter_datamngt_GetDWork ( ssGetDWork ( S , 0 ) ) ;
mxSetFieldByNumber ( ss , 0 , 1 , mdlrefDW ) ; } { mxArray * data =
mr_sldemo_mdlref_counter_datamngt_GetSimStateDisallowedBlocks ( ) ;
mxSetFieldByNumber ( ss , 0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 ,
3 , mxCreateDoubleScalar ( ( double ) ssGetTNext ( S ) ) ) ;
mxSetFieldByNumber ( ss , 0 , 4 , mxCreateDoubleScalar ( ( double )
ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) {
mr_sldemo_mdlref_counter_datamngt_SetDWork ( ssGetDWork ( S , 0 ) ,
mxGetFieldByNumber ( ss , 0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar
( mxGetFieldByNumber ( ss , 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T )
mxGetScalar ( mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
