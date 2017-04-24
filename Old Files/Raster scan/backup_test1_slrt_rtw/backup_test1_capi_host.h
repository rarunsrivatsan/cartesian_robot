#ifndef RTW_HEADER_backup_test1_cap_host_h_
#define RTW_HEADER_backup_test1_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} backup_test1_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C" {

#endif

  void backup_test1_host_InitializeDataMapInfo(backup_test1_host_DataMapInfo_T
    *dataMap, const char *path);

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                                 /* RTW_HEADER_backup_test1_cap_host_h_ */

/* EOF: backup_test1_capi_host.h */
