#ifndef __CenterLimit_XPCOPTIONS_H___
#define __CenterLimit_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "CenterLimit.h"
#define XPCMDSSUPPORT                  0
#define MDSTASKSNUM                    0
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(P_CenterLimit_T))
#define SIMMODE                        0
#define LOGTET                         1
#define LOGBUFSIZE                     100000
#define PROFILINGFLAG                  0
#define EVENTNUMBER                    5000
#define IRQ_NO                         0
#define IO_IRQ                         0
#define WWW_ACCESS_LEVEL               0
#define CPUCLOCK                       0
#define MAXOVERLOAD                    0
#define MAXOVERLOADLEN                 0
#define XPCMODELSTACKSIZEKB            512
#define XPCSTARTUPFLAG                 1
#define PTLOADPARAMFLAG                0
#define DOUBLEBUFFERING                0
#define SLRTFTZOFFFLAG                 0

/* Change all stepsize using the newBaseRateStepSize */
void CenterLimit_ChangeStepSize(real_T newBaseRateStepSize,
  RT_MODEL_CenterLimit_T *const CenterLimit_M)
{
  real_T ratio = newBaseRateStepSize / 0.01;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  CenterLimit_M->Timing.stepSize0 = CenterLimit_M->Timing.stepSize0 * ratio;
  CenterLimit_M->Timing.stepSize = CenterLimit_M->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  CenterLimit_ChangeStepSize(stepSize, CenterLimit_M);
}

void XPCCALLCONV SLRTSetErrorStatus(const char * errMsg)
{
  rtmSetErrorStatus(CenterLimit_M, errMsg);
}

#endif                                 /* __CenterLimit_XPCOPTIONS_H___ */
