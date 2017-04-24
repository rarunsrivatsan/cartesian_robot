#include "__cf_sldemo_mdlref_counter_datamngt.h"
#ifndef RTW_HEADER_sldemo_mdlref_counter_datamngt_h_
#define RTW_HEADER_sldemo_mdlref_counter_datamngt_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef sldemo_mdlref_counter_datamngt_COMMON_INCLUDES_
#define sldemo_mdlref_counter_datamngt_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "sldemo_mdlref_counter_datamngt_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_nonfinite.h"
typedef struct { int8_T lffo4a1djv ; int8_T haxhqzq2zw ; } dlmaav20gz ;
typedef struct { real_T hbhgdq501c [ 2 ] ; } lmlouh2trm ; typedef struct {
ZCSigState obteb5h21h [ 2 ] ; } oz34exsbd0 ; struct plpglprfvs { struct
SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
1 ] ; int32_T * vardimsAddress [ 1 ] ; sysRanDType * systemRan [ 4 ] ; int_T
systemTid [ 4 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ] ; }
Timing ; } ; typedef struct { dlmaav20gz rtdw ; f2unubfckq rtm ; oz34exsbd0
rtzce ; } gz1wa3trlus ; extern void j4suonz2i2 ( SimStruct * _mdlRefSfcnS ,
int_T mdlref_TID0 , int_T mdlref_TID1 , f2unubfckq * const cj3vx0gv5x ,
dlmaav20gz * localDW , oz34exsbd0 * localZCE , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_sldemo_mdlref_counter_datamngt_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_sldemo_mdlref_counter_datamngt_GetDWork ( const gz1wa3trlus * mdlrefDW ) ;
extern void mr_sldemo_mdlref_counter_datamngt_SetDWork ( gz1wa3trlus *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_sldemo_mdlref_counter_datamngt_RegisterSimStateChecksum ( SimStruct * S )
; extern mxArray *
mr_sldemo_mdlref_counter_datamngt_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo *
sldemo_mdlref_counter_datamngt_GetCAPIStaticMap ( void ) ; extern void
d3cvjty0a0 ( OutputType * jpjykorh4r , dlmaav20gz * localDW , const
OutputType * rtp_CounterICs ) ; extern void bg3uwbazbw ( dlmaav20gz * localDW
, const OutputType * rtp_CounterICs ) ; extern void
sldemo_mdlref_counter_datamngt ( const boolean_T pnm3vrxls2 [ 2 ] ,
OutputType * jpjykorh4r , dlmaav20gz * localDW , oz34exsbd0 * localZCE ,
const CounterParamType * rtp_CounterParams , const OutputType *
rtp_CounterICs ) ; extern void sldemo_mdlref_counter_datamngtTID1 ( void ) ;
#endif
