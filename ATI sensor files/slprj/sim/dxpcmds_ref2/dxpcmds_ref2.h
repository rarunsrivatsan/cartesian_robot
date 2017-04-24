#include "__cf_dxpcmds_ref2.h"
#ifndef RTW_HEADER_dxpcmds_ref2_h_
#define RTW_HEADER_dxpcmds_ref2_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef dxpcmds_ref2_COMMON_INCLUDES_
#define dxpcmds_ref2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "dxpcmds_ref2_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real_T lsgbyc1sbv [ 700 ] ; real_T c1srgvgnna [ 700 ] ;
real_T mje33vls5g [ 700 ] ; real_T ab0mftar2p [ 700 ] ; real_T je2b3kld3p [
700 ] ; real_T kvvyvcyx5j [ 700 ] ; real_T gawtu0ejq4 [ 700 ] ; real_T
hdqy5uphri [ 700 ] ; real_T c21dx35qzy [ 700 ] ; real_T mo5dlcvryq [ 6000 ] ;
real_T fwseegauhu [ 6000 ] ; real_T kxw2vhveoe [ 6000 ] ; real_T k2ts3k2k2j [
6000 ] ; real_T euws0riq4k [ 6000 ] ; real_T jb4q2mqc4t [ 6000 ] ; real_T
of3efm1whn [ 6000 ] ; real_T jd0ui4ffww [ 6000 ] ; real_T j1kp0rbba2 [ 6000 ]
; real_T hckgvds35b [ 8000 ] ; real_T dz1mx33x41 [ 8000 ] ; real_T ibc0emmoaf
[ 8000 ] ; real_T c20w0dqdrg [ 8000 ] ; real_T pwggejavw5 [ 8000 ] ; real_T
aykq153w5z [ 8000 ] ; real_T gz1eqdwxfo [ 8000 ] ; real_T fmnbqoh4wm [ 8000 ]
; real_T gsvgt1ftyz [ 8000 ] ; } i43atrqqvo ; struct gemc0cqc20_ { real_T P_0
[ 700 ] ; real_T P_1 ; real_T P_2 ; real_T P_3 [ 8000 ] ; real_T P_4 ; } ;
struct hexo3kknnd { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; } ; typedef struct { i43atrqqvo rtb ; m31vwiv2wo rtm ; }
jeaeubzy3eu ; extern void lmpbsroq4t ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , m31vwiv2wo * const
j1opkvm025 , i43atrqqvo * localB , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_dxpcmds_ref2_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) ; extern mxArray * mr_dxpcmds_ref2_GetDWork ( const
jeaeubzy3eu * mdlrefDW ) ; extern void mr_dxpcmds_ref2_SetDWork ( jeaeubzy3eu
* mdlrefDW , const mxArray * ssDW ) ; extern void
mr_dxpcmds_ref2_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_dxpcmds_ref2_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * dxpcmds_ref2_GetCAPIStaticMap ( void ) ;
extern void dxpcmds_ref2TID0 ( real_T * jvfltfyyuk , i43atrqqvo * localB ) ;
extern void dxpcmds_ref2TID1 ( real_T * lgj5ecal1n , i43atrqqvo * localB ) ;
extern void dxpcmds_ref2TID2 ( const real_T com45d51wv [ 6000 ] , real_T *
btt4bqjv4l , i43atrqqvo * localB ) ;
#endif
