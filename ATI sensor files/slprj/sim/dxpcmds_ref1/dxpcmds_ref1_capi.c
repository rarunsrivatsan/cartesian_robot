#include "__cf_dxpcmds_ref1.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "dxpcmds_ref1_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "dxpcmds_ref1.h"
#include "dxpcmds_ref1_capi.h"
#include "dxpcmds_ref1_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "" , "" , 0 ,
0 , 0 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 0 , 0 } } ; static uint_T rtDimensionArray [ ] = { 0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 0 , 0 } } ; static int_T
rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 2 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 1483512132U , 155480796U , 3307736134U ,
498351775U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * dxpcmds_ref1_GetCAPIStaticMap ( ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void dxpcmds_ref1_InitializeSystemRan ( olnsjrzrgx * const bkwbjn5thv
, sysRanDType * systemRan [ ] , gr5dmd2f2w * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( bkwbjn5thv ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = je24bfi51o [ 0
] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems
[ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void dxpcmds_ref1_InitializeDataMapInfo ( olnsjrzrgx * const bkwbjn5thv ,
gr5dmd2f2w * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( bkwbjn5thv -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( bkwbjn5thv -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( bkwbjn5thv -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( bkwbjn5thv -> DataMapInfo . mmi ,
( NULL ) ) ; rtwCAPI_SetFullPath ( bkwbjn5thv -> DataMapInfo . mmi , ( NULL )
) ; rtwCAPI_SetInstanceLoggingInfo ( bkwbjn5thv -> DataMapInfo . mmi , &
bkwbjn5thv -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
bkwbjn5thv -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
bkwbjn5thv -> DataMapInfo . mmi , 0 ) ; dxpcmds_ref1_InitializeSystemRan (
bkwbjn5thv , bkwbjn5thv -> DataMapInfo . systemRan , localDW , bkwbjn5thv ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
bkwbjn5thv -> DataMapInfo . mmi , bkwbjn5thv -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( bkwbjn5thv -> DataMapInfo . mmi , bkwbjn5thv ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( bkwbjn5thv ->
DataMapInfo . mmi , & je24bfi51o [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void dxpcmds_ref1_host_InitializeDataMapInfo (
dxpcmds_ref1_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
