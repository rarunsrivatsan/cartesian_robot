#ifndef RTW_HEADER_rx_target_cap_host_h_
#define RTW_HEADER_rx_target_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} rx_target_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C" {

#endif

  void rx_target_host_InitializeDataMapInfo(rx_target_host_DataMapInfo_T
    *dataMap, const char *path);

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                                 /* RTW_HEADER_rx_target_cap_host_h_ */

/* EOF: rx_target_capi_host.h */
