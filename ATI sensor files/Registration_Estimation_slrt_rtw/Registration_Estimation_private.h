/*
 * Registration_Estimation_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Registration_Estimation".
 *
 * Model version              : 1.284
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Fri Dec 09 01:53:14 2016
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Registration_Estimation_private_h_
#define RTW_HEADER_Registration_Estimation_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern void xpcudpbytereceive(SimStruct *rts);
extern void encconteccnt328mpci(SimStruct *rts);
extern void dopci8255(SimStruct *rts);
extern void dacbpcidda0x12(SimStruct *rts);

#endif                                 /* RTW_HEADER_Registration_Estimation_private_h_ */
