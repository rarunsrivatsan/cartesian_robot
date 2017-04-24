#include "__cf_dxpcmds_ref1.h"
#ifndef RTW_HEADER_dxpcmds_ref1_cap_host_h_
#define RTW_HEADER_dxpcmds_ref1_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
dxpcmds_ref1_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void dxpcmds_ref1_host_InitializeDataMapInfo (
dxpcmds_ref1_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
