/*
 * Code generation for system model 'dxpcmds_ref2'
 * For more details, see corresponding source file dxpcmds_ref2.c
 *
 */

#ifndef RTW_HEADER_dxpcmds_ref2_h_
#define RTW_HEADER_dxpcmds_ref2_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef dxpcmds_ref2_COMMON_INCLUDES_
# define dxpcmds_ref2_COMMON_INCLUDES_
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* dxpcmds_ref2_COMMON_INCLUDES_ */

#include "dxpcmds_ref2_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals for model 'dxpcmds_ref2' */
typedef struct {
  real_T Gain2[700];                   /* '<Root>/Gain2' */
  real_T exp_h[700];                   /* '<S7>/exp' */
  real_T log_h[700];                   /* '<S7>/log' */
  real_T exp_g[700];                   /* '<S8>/exp' */
  real_T log_c[700];                   /* '<S8>/log' */
  real_T exp_f[700];                   /* '<S9>/exp' */
  real_T log_e[700];                   /* '<S9>/log' */
  real_T Sum[700];                     /* '<Root>/Sum' */
  real_T Abs[700];                     /* '<S1>/Abs' */
  real_T Gain1[6000];                  /* '<Root>/Gain1' */
  real_T exp_l[6000];                  /* '<S10>/exp' */
  real_T log_g[6000];                  /* '<S10>/log' */
  real_T exp_e[6000];                  /* '<S11>/exp' */
  real_T log_o[6000];                  /* '<S11>/log' */
  real_T exp_hn[6000];                 /* '<S12>/exp' */
  real_T log_n[6000];                  /* '<S12>/log' */
  real_T Sum1[6000];                   /* '<Root>/Sum1' */
  real_T Abs_b[6000];                  /* '<S2>/Abs' */
  real_T Gain3[8000];                  /* '<Root>/Gain3' */
  real_T exp_o[8000];                  /* '<S13>/exp' */
  real_T log_m[8000];                  /* '<S13>/log' */
  real_T exp_c[8000];                  /* '<S14>/exp' */
  real_T log_go[8000];                 /* '<S14>/log' */
  real_T exp_j[8000];                  /* '<S15>/exp' */
  real_T log_d[8000];                  /* '<S15>/log' */
  real_T Sum2[8000];                   /* '<Root>/Sum2' */
  real_T Abs_n[8000];                  /* '<S3>/Abs' */
} B_dxpcmds_ref2_c_T;

/* Parameters (auto storage) */
struct P_dxpcmds_ref2_T_ {
  real_T Constant_Value[700];          /* Expression: [1:700]
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.05
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.05
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Constant2_Value[8000];        /* Expression: [1:8000]
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.05
                                        * Referenced by: '<Root>/Gain3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_dxpcmds_ref2_T {
  const char_T **errorStatus;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
    void* dataAddress[32];
    int32_T* vardimsAddress[32];
  } DataMapInfo;
};

typedef struct {
  B_dxpcmds_ref2_c_T rtb;
  RT_MODEL_dxpcmds_ref2_T rtm;
} MdlrefDW_dxpcmds_ref2_T;

/* Model reference registration function */
extern void dxpcmds_ref2_initialize(const char_T **rt_errorStatus,
  RT_MODEL_dxpcmds_ref2_T *const dxpcmds_ref2_M, B_dxpcmds_ref2_c_T *localB,
  rtwCAPI_ModelMappingInfo *rt_ParentMMI, const char_T *rt_ChildPath, int_T
  rt_ChildMMIIdx, int_T rt_CSTATEIdx);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  dxpcmds_ref2_GetCAPIStaticMap(void);
extern void dxpcmds_ref2TID0(real_T *rty_Out1, B_dxpcmds_ref2_c_T *localB);
extern void dxpcmds_ref2TID1(real_T *rty_Out3, B_dxpcmds_ref2_c_T *localB);
extern void dxpcmds_ref2TID2(const real_T rtu_In1[6000], real_T *rty_Out2,
  B_dxpcmds_ref2_c_T *localB);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'dxpcmds_ref2'
 * '<S1>'   : 'dxpcmds_ref2/max Error'
 * '<S2>'   : 'dxpcmds_ref2/max Error1'
 * '<S3>'   : 'dxpcmds_ref2/max Error2'
 * '<S4>'   : 'dxpcmds_ref2/unity math'
 * '<S5>'   : 'dxpcmds_ref2/unity math1'
 * '<S6>'   : 'dxpcmds_ref2/unity math2'
 * '<S7>'   : 'dxpcmds_ref2/unity math/math'
 * '<S8>'   : 'dxpcmds_ref2/unity math/math1'
 * '<S9>'   : 'dxpcmds_ref2/unity math/math2'
 * '<S10>'  : 'dxpcmds_ref2/unity math1/math'
 * '<S11>'  : 'dxpcmds_ref2/unity math1/math1'
 * '<S12>'  : 'dxpcmds_ref2/unity math1/math2'
 * '<S13>'  : 'dxpcmds_ref2/unity math2/math'
 * '<S14>'  : 'dxpcmds_ref2/unity math2/math1'
 * '<S15>'  : 'dxpcmds_ref2/unity math2/math2'
 */
#endif                                 /* RTW_HEADER_dxpcmds_ref2_h_ */
