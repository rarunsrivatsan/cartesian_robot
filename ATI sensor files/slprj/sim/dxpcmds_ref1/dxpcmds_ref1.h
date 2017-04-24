#include "__cf_dxpcmds_ref1.h"
#ifndef RTW_HEADER_dxpcmds_ref1_h_
#define RTW_HEADER_dxpcmds_ref1_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef dxpcmds_ref1_COMMON_INCLUDES_
#define dxpcmds_ref1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "dxpcmds_ref1_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real_T aifjpbzuse [ 600 ] ; real_T ixr4blhyeu [ 600 ] ;
real_T i2q1h4kkq2 [ 600 ] ; real_T lvt32f1khq [ 600 ] ; real_T l0hwkyabbp [
600 ] ; real_T gegiwqygmy [ 600 ] ; real_T hgointbsge [ 600 ] ; real_T
mii0uelq2y [ 600 ] ; real_T cishzalz5c [ 600 ] ; real_T p4pkyhje3s [ 3000 ] ;
real_T e10o5kl4h3 [ 3000 ] ; real_T f1gqzhqiby [ 3000 ] ; real_T c02mqrau53 [
3000 ] ; real_T aodypaemad [ 3000 ] ; real_T hu0n0xyun0 [ 3000 ] ; real_T
pfs1hsdhys [ 3000 ] ; real_T godgykyooy [ 3000 ] ; real_T gvkzwgj2qy [ 3000 ]
; real_T af534hvcqd [ 6000 ] ; real_T gtk5mzkupf [ 6000 ] ; real_T pnjw5hjajm
[ 6000 ] ; real_T mkbppwouhh [ 6000 ] ; real_T frudc3ss1d [ 6000 ] ; real_T
erhhnqa4qm [ 6000 ] ; real_T d4p0zjlytx [ 6000 ] ; real_T kkmjkhvwfr [ 6000 ]
; real_T ickwojxnbv [ 6000 ] ; } gn5jnyxpja ; typedef struct { real_T
jlj1dh0tn2 [ 6000 ] ; real_T jawgk4etec [ 6000 ] ; real_T odhdkbf0tr ; }
gr5dmd2f2w ; struct dcrny0ly1n_ { real_T P_0 [ 600 ] ; real_T P_1 ; real_T
P_2 [ 3000 ] ; real_T P_3 ; real_T P_4 [ 6000 ] ; real_T P_5 ; real_T P_6 ; }
; struct gq05ck4urn { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; } ; typedef struct { gn5jnyxpja rtb ; gr5dmd2f2w rtdw ;
olnsjrzrgx rtm ; } dh130ve3tlu ; extern void jv2xfapomc ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 ,
int_T mdlref_TID3 , olnsjrzrgx * const bkwbjn5thv , gn5jnyxpja * localB ,
gr5dmd2f2w * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_dxpcmds_ref1_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) ; extern mxArray * mr_dxpcmds_ref1_GetDWork ( const
dh130ve3tlu * mdlrefDW ) ; extern void mr_dxpcmds_ref1_SetDWork ( dh130ve3tlu
* mdlrefDW , const mxArray * ssDW ) ; extern void
mr_dxpcmds_ref1_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_dxpcmds_ref1_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * dxpcmds_ref1_GetCAPIStaticMap ( void ) ;
extern void luc0euildz ( olnsjrzrgx * const bkwbjn5thv , gr5dmd2f2w * localDW
) ; extern void owwyqhkq0x ( olnsjrzrgx * const bkwbjn5thv , gr5dmd2f2w *
localDW ) ; extern void jlhq31m5qz ( real_T odfzqu3lez [ 6000 ] ) ; extern
void dxpcmds_ref1TID0 ( real_T * ktqxpbbgwj , gn5jnyxpja * localB ) ; extern
void dxpcmds_ref1TID1 ( real_T * neqmdwd2nm , gn5jnyxpja * localB ) ; extern
void dxpcmds_ref1TID2 ( olnsjrzrgx * const bkwbjn5thv , real_T * jsmrrcmrw4 ,
gn5jnyxpja * localB , gr5dmd2f2w * localDW ) ; extern void dxpcmds_ref1TID3 (
olnsjrzrgx * const bkwbjn5thv , real_T odfzqu3lez [ 6000 ] , gr5dmd2f2w *
localDW ) ;
#endif
