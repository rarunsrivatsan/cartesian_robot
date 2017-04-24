/*
 * slrt_parker_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "slrt_parker".
 *
 * Model version              : 1.3413
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Wed Dec 14 13:07:16 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_slrt_parker_private_h_
#define RTW_HEADER_slrt_parker_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "dsp_rt.h"                    /* DSP System Toolbox general run time support functions */

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern uint32_T MWDSP_EPH_R_D(real_T evt, uint32_T *sta);
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern void encconteccnt328mpci(SimStruct *rts);
extern void xpcudpbytereceive(SimStruct *rts);
extern void dipci8255(SimStruct *rts);
extern void dacbpcidda0x12(SimStruct *rts);
extern void dopci8255(SimStruct *rts);

#endif                                 /* RTW_HEADER_slrt_parker_private_h_ */
