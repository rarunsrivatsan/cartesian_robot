/*
 * Pos_PID_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Pos_PID".
 *
 * Model version              : 1.391
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Sat Apr 22 17:30:15 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Pos_PID_private_h_
#define RTW_HEADER_Pos_PID_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "Pos_PID.h"

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern uint32_T MWDSP_EPH_R_D(real_T evt, uint32_T *sta);
extern uint32_T MWDSP_EPH_R_B(boolean_T evt, uint32_T *sta);
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern uint32_T plook_u32d_evencka(real_T u, real_T bp0, real_T bpSpace,
  uint32_T maxIndex);
extern void encconteccnt328mpci(SimStruct *rts);
extern void dacbpcidda0x12(SimStruct *rts);
extern void dopci8255(SimStruct *rts);
extern void dipci8255(SimStruct *rts);
extern void xpcudpbytereceive(SimStruct *rts);
extern void Pos_PID_Deadbandpulsecounter(real_T rtu_e, real_T rtu_db,
  B_Deadbandpulsecounter_Pos_PI_T *localB);

/* private model entry point functions */
extern void Pos_PID_derivatives(void);

#endif                                 /* RTW_HEADER_Pos_PID_private_h_ */
