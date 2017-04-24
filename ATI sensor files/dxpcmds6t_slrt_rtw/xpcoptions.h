#ifndef __dxpcmds6t_XPCOPTIONS_H___
#define __dxpcmds6t_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "dxpcmds6t.h"

int_T XPCWHICHSAMPLE[7] = { 0, 0, 1, 2, 2, 3, 3 };

#define XPCMDSSUPPORT                  1
#define MDSTASKSNUM                    7
#define FULLMULTITHREAD                1
#define SIZEOF_PARAMS                  0
#define SIMMODE                        0
#define LOGTET                         1
#define LOGBUFSIZE                     100000
#define PROFILINGFLAG                  1
#define EVENTNUMBER                    5000
#define IRQ_NO                         0
#define IO_IRQ                         0
#define WWW_ACCESS_LEVEL               0
#define CPUCLOCK                       0
#define MAXOVERLOAD                    9000
#define MAXOVERLOADLEN                 9000
#define XPCMODELSTACKSIZEKB            512
#define XPCSTARTUPFLAG                 1
#define PTLOADPARAMFLAG                0
#define DOUBLEBUFFERING                0
#define SLRTFTZOFFFLAG                 0

/* Change all stepsize using the newBaseRateStepSize */
void dxpcmds6t_ChangeStepSize(real_T newBaseRateStepSize, RT_MODEL_dxpcmds6t_T *
  const dxpcmds6t_M)
{
  real_T ratio = newBaseRateStepSize / 0.001;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  dxpcmds6t_M->Timing.stepSize0 = dxpcmds6t_M->Timing.stepSize0 * ratio;
  dxpcmds6t_M->Timing.stepSize1 = dxpcmds6t_M->Timing.stepSize1 * ratio;
  dxpcmds6t_M->Timing.stepSize2 = dxpcmds6t_M->Timing.stepSize2 * ratio;
  dxpcmds6t_M->Timing.stepSize3 = dxpcmds6t_M->Timing.stepSize3 * ratio;
  dxpcmds6t_M->Timing.stepSize = dxpcmds6t_M->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  dxpcmds6t_ChangeStepSize(stepSize, dxpcmds6t_M);
}

void XPCCALLCONV SLRTSetErrorStatus(const char * errMsg)
{
  rtmSetErrorStatus(dxpcmds6t_M, errMsg);
}

#endif                                 /* __dxpcmds6t_XPCOPTIONS_H___ */
