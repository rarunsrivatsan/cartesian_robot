#ifndef __c5_Pos_PID_h__
#define __c5_Pos_PID_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc5_Pos_PIDInstanceStruct
#define typedef_SFc5_Pos_PIDInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c5_dataWrittenToVector[3];
  uint8_T c5_doSetSimStateSideEffects;
  const mxArray *c5_setSimStateSideEffectsInfo;
  int32_T *c5_sfEvent;
  uint8_T *c5_is_active_c5_Pos_PID;
  uint8_T *c5_is_c5_Pos_PID;
  boolean_T (*c5_reached_sig)[3];
  real_T *c5_stopped;
  real_T *c5_moving;
  real_T *c5_flag;
  real_T *c5_error;
} SFc5_Pos_PIDInstanceStruct;

#endif                                 /*typedef_SFc5_Pos_PIDInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c5_Pos_PID_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c5_Pos_PID_get_check_sum(mxArray *plhs[]);
extern void c5_Pos_PID_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
