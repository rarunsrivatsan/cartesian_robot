#ifndef RTW_HEADER_dxpcmds6t_cap_host_h_
#define RTW_HEADER_dxpcmds6t_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
#include "dxpcmds_ref1_capi_host.h"
#include "dxpcmds_ref2_capi_host.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
  rtwCAPI_ModelMappingInfo *childMMI[2];
  dxpcmds_ref1_host_DataMapInfo_T child0;
  dxpcmds_ref2_host_DataMapInfo_T child1;
} dxpcmds6t_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C" {

#endif

  void dxpcmds6t_host_InitializeDataMapInfo(dxpcmds6t_host_DataMapInfo_T
    *dataMap, const char *path);

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                                 /* RTW_HEADER_dxpcmds6t_cap_host_h_ */

/* EOF: dxpcmds6t_capi_host.h */
