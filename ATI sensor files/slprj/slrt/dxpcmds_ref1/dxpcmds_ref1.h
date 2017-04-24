/*
 * Code generation for system model 'dxpcmds_ref1'
 * For more details, see corresponding source file dxpcmds_ref1.c
 *
 */

#ifndef RTW_HEADER_dxpcmds_ref1_h_
#define RTW_HEADER_dxpcmds_ref1_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef dxpcmds_ref1_COMMON_INCLUDES_
# define dxpcmds_ref1_COMMON_INCLUDES_
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* dxpcmds_ref1_COMMON_INCLUDES_ */

#include "dxpcmds_ref1_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_nonfinite.h"
#include "rtw_xpc.h"
#include "rtGetInf.h"

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals for model 'dxpcmds_ref1' */
typedef struct {
  real_T Gain2[600];                   /* '<Root>/Gain2' */
  real_T exp_d[600];                   /* '<S7>/exp' */
  real_T log_c[600];                   /* '<S7>/log' */
  real_T exp_a[600];                   /* '<S8>/exp' */
  real_T log_n[600];                   /* '<S8>/log' */
  real_T exp_c[600];                   /* '<S9>/exp' */
  real_T log_a[600];                   /* '<S9>/log' */
  real_T Sum[600];                     /* '<Root>/Sum' */
  real_T Abs[600];                     /* '<S1>/Abs' */
  real_T Gain3[3000];                  /* '<Root>/Gain3' */
  real_T exp_o[3000];                  /* '<S10>/exp' */
  real_T log_o[3000];                  /* '<S10>/log' */
  real_T exp_n[3000];                  /* '<S11>/exp' */
  real_T log_l[3000];                  /* '<S11>/log' */
  real_T exp_cn[3000];                 /* '<S12>/exp' */
  real_T log_p[3000];                  /* '<S12>/log' */
  real_T Sum1[3000];                   /* '<Root>/Sum1' */
  real_T Abs_h[3000];                  /* '<S2>/Abs' */
  real_T Gain4[6000];                  /* '<Root>/Gain4' */
  real_T exp_al[6000];                 /* '<S13>/exp' */
  real_T log_cp[6000];                 /* '<S13>/log' */
  real_T exp_at[6000];                 /* '<S14>/exp' */
  real_T log_l3[6000];                 /* '<S14>/log' */
  real_T exp_e[6000];                  /* '<S15>/exp' */
  real_T log_i[6000];                  /* '<S15>/log' */
  real_T Sum2[6000];                   /* '<Root>/Sum2' */
  real_T Abs_i[6000];                  /* '<S3>/Abs' */
} B_dxpcmds_ref1_c_T;

/* Block states (auto storage) for model 'dxpcmds_ref1' */
typedef struct {
  real_T RateTransition_Buf0[6000];    /* '<Root>/Rate Transition' */
  real_T RateTransition_Buf1[6000];    /* '<Root>/Rate Transition' */
  real_T RateTransition_Buf2[6000];    /* '<Root>/Rate Transition' */
  void* RateTransition_d0_SEMAPHORE;   /* '<Root>/Rate Transition' */
  int8_T RateTransition_LstBufWR;      /* '<Root>/Rate Transition' */
  int8_T RateTransition_RDBuf;         /* '<Root>/Rate Transition' */
} DW_dxpcmds_ref1_f_T;

/* Parameters (auto storage) */
struct P_dxpcmds_ref1_T_ {
  real_T Constant_Value[600];          /* Expression: [1:600]
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.05
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Constant2_Value[3000];        /* Expression: [1:3000]
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0.05
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T Constant3_Value[6000];        /* Expression: [1:6000]
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Gain4_Gain;                   /* Expression: 0.05
                                        * Referenced by: '<Root>/Gain4'
                                        */
  real_T RateTransition_X0;            /* Expression: 0
                                        * Referenced by: '<Root>/Rate Transition'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_dxpcmds_ref1_T {
  const char_T **errorStatus;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
    void* dataAddress[34];
    int32_T* vardimsAddress[34];
  } DataMapInfo;
};

typedef struct {
  B_dxpcmds_ref1_c_T rtb;
  DW_dxpcmds_ref1_f_T rtdw;
  RT_MODEL_dxpcmds_ref1_T rtm;
} MdlrefDW_dxpcmds_ref1_T;

/* Model reference registration function */
extern void dxpcmds_ref1_initialize(const char_T **rt_errorStatus,
  RT_MODEL_dxpcmds_ref1_T *const dxpcmds_ref1_M, B_dxpcmds_ref1_c_T *localB,
  DW_dxpcmds_ref1_f_T *localDW, rtwCAPI_ModelMappingInfo *rt_ParentMMI, const
  char_T *rt_ChildPath, int_T rt_ChildMMIIdx, int_T rt_CSTATEIdx);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  dxpcmds_ref1_GetCAPIStaticMap(void);
extern void dxpcmds_ref1_Init(DW_dxpcmds_ref1_f_T *localDW);
extern void dxpcmds_ref1_Reset(DW_dxpcmds_ref1_f_T *localDW);
extern void dxpcmds_ref1_Start(real_T rty_Out4[6000], DW_dxpcmds_ref1_f_T
  *localDW);
extern void dxpcmds_ref1TID0(real_T *rty_Out1, B_dxpcmds_ref1_c_T *localB);
extern void dxpcmds_ref1TID1(real_T *rty_Out2, B_dxpcmds_ref1_c_T *localB);
extern void dxpcmds_ref1TID2(real_T *rty_Out3, B_dxpcmds_ref1_c_T *localB,
  DW_dxpcmds_ref1_f_T *localDW);
extern void dxpcmds_ref1TID3(real_T rty_Out4[6000], DW_dxpcmds_ref1_f_T *localDW);
extern void dxpcmds_ref1_Term(DW_dxpcmds_ref1_f_T *localDW);

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
 * '<Root>' : 'dxpcmds_ref1'
 * '<S1>'   : 'dxpcmds_ref1/max Error'
 * '<S2>'   : 'dxpcmds_ref1/max Error1'
 * '<S3>'   : 'dxpcmds_ref1/max Error2'
 * '<S4>'   : 'dxpcmds_ref1/unity math'
 * '<S5>'   : 'dxpcmds_ref1/unity math1'
 * '<S6>'   : 'dxpcmds_ref1/unity math2'
 * '<S7>'   : 'dxpcmds_ref1/unity math/math'
 * '<S8>'   : 'dxpcmds_ref1/unity math/math1'
 * '<S9>'   : 'dxpcmds_ref1/unity math/math2'
 * '<S10>'  : 'dxpcmds_ref1/unity math1/math'
 * '<S11>'  : 'dxpcmds_ref1/unity math1/math1'
 * '<S12>'  : 'dxpcmds_ref1/unity math1/math2'
 * '<S13>'  : 'dxpcmds_ref1/unity math2/math'
 * '<S14>'  : 'dxpcmds_ref1/unity math2/math1'
 * '<S15>'  : 'dxpcmds_ref1/unity math2/math2'
 */
#endif                                 /* RTW_HEADER_dxpcmds_ref1_h_ */
