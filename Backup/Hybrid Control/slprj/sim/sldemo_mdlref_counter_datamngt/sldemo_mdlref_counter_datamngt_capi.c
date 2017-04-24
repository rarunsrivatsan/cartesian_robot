#include "__cf_sldemo_mdlref_counter_datamngt.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "sldemo_mdlref_counter_datamngt_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "sldemo_mdlref_counter_datamngt.h"
#include "sldemo_mdlref_counter_datamngt_capi.h"
#include "sldemo_mdlref_counter_datamngt_private.h"
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
, TARGET_STRING ( "sldemo_mdlref_counter_datamngt/Previous Count" ) ,
TARGET_STRING ( "PrevCount" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0
, - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } }
;
#ifndef HOST_CAPI_BUILD
static void sldemo_mdlref_counter_datamngt_InitializeDataAddr ( void *
dataAddr [ ] , dlmaav20gz * localDW ) { dataAddr [ 0 ] = ( void * ) ( &
localDW -> lffo4a1djv ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void sldemo_mdlref_counter_datamngt_InitializeVarDimsAddr ( int32_T *
vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "signed char"
, "int8_T" , 0 , 0 , sizeof ( int8_T ) , SS_INT8 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.2 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 4 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 4 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 480992493U , 3368042635U , 887673101U ,
3344038459U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo *
sldemo_mdlref_counter_datamngt_GetCAPIStaticMap ( ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void sldemo_mdlref_counter_datamngt_InitializeSystemRan ( f2unubfckq *
const cj3vx0gv5x , sysRanDType * systemRan [ ] , dlmaav20gz * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
cj3vx0gv5x ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( sysRanDType * ) & localDW -> haxhqzq2zw ; systemTid [ 1 ]
= rootTid ; systemTid [ 2 ] = rootTid ; systemTid [ 3 ] = rootTid ; systemTid
[ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 3 ;
rtContextSystems [ 2 ] = 3 ; rtContextSystems [ 3 ] = 3 ; }
#endif
#ifndef HOST_CAPI_BUILD
void sldemo_mdlref_counter_datamngt_InitializeDataMapInfo ( f2unubfckq *
const cj3vx0gv5x , dlmaav20gz * localDW , void * sysRanPtr , int contextTid )
{ rtwCAPI_SetVersion ( cj3vx0gv5x -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( cj3vx0gv5x -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( cj3vx0gv5x -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; sldemo_mdlref_counter_datamngt_InitializeDataAddr (
cj3vx0gv5x -> DataMapInfo . dataAddress , localDW ) ;
rtwCAPI_SetDataAddressMap ( cj3vx0gv5x -> DataMapInfo . mmi , cj3vx0gv5x ->
DataMapInfo . dataAddress ) ;
sldemo_mdlref_counter_datamngt_InitializeVarDimsAddr ( cj3vx0gv5x ->
DataMapInfo . vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( cj3vx0gv5x ->
DataMapInfo . mmi , cj3vx0gv5x -> DataMapInfo . vardimsAddress ) ;
rtwCAPI_SetPath ( cj3vx0gv5x -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetFullPath ( cj3vx0gv5x -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetInstanceLoggingInfo ( cj3vx0gv5x -> DataMapInfo . mmi , &
cj3vx0gv5x -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
cj3vx0gv5x -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
cj3vx0gv5x -> DataMapInfo . mmi , 0 ) ;
sldemo_mdlref_counter_datamngt_InitializeSystemRan ( cj3vx0gv5x , cj3vx0gv5x
-> DataMapInfo . systemRan , localDW , cj3vx0gv5x -> DataMapInfo . systemTid
, sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( cj3vx0gv5x -> DataMapInfo
. mmi , cj3vx0gv5x -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
cj3vx0gv5x -> DataMapInfo . mmi , cj3vx0gv5x -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( cj3vx0gv5x -> DataMapInfo . mmi , & cj3vx0gv5x ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void sldemo_mdlref_counter_datamngt_host_InitializeDataMapInfo (
sldemo_mdlref_counter_datamngt_host_DataMapInfo_T * dataMap , const char *
path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap (
dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi ,
NULL ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , NULL ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
