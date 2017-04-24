/*
 * Registration_Estimation.c
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

#include "rt_logging_mmi.h"
#include "Registration_Estimation_capi.h"
#include "Registration_Estimation.h"
#include "Registration_Estimation_private.h"

/* Block signals (auto storage) */
B_Registration_Estimation_T Registration_Estimation_B;

/* Block states (auto storage) */
DW_Registration_Estimation_T Registration_Estimation_DW;

/* Real-time model */
RT_MODEL_Registration_Estimation_T Registration_Estimation_M_;
RT_MODEL_Registration_Estimation_T *const Registration_Estimation_M =
  &Registration_Estimation_M_;

/* Forward declaration for local functions */
static void Registrati_twister_state_vector(uint32_T mt[625], uint32_T seed);
static real_T Registration_eml_rand_mt19937ar(uint32_T state[625]);
static real_T Registration_Estimation_rand(void);

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static void Registrati_twister_state_vector(uint32_T mt[625], uint32_T seed)
{
  uint32_T r;
  int32_T mti;
  r = seed;
  mt[0] = seed;
  for (mti = 0; mti < 623; mti++) {
    r = ((r >> 30U ^ r) * 1812433253U + mti) + 1U;
    mt[mti + 1] = r;
  }

  mt[624] = 624U;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static real_T Registration_eml_rand_mt19937ar(uint32_T state[625])
{
  real_T r;
  uint32_T u[2];
  uint32_T mti;
  uint32_T y;
  int32_T kk;
  boolean_T b_isvalid;
  int32_T exitg1;
  boolean_T exitg2;
  int32_T k;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    for (k = 0; k < 2; k++) {
      u[k] = 0U;
      mti = state[624] + 1U;
      if (mti >= 625U) {
        for (kk = 0; kk < 227; kk++) {
          y = (state[1 + kk] & 2147483647U) | (state[kk] & 2147483648U);
          if ((int32_T)(y & 1U) == 0) {
            mti = y >> 1U;
          } else {
            mti = y >> 1U ^ 2567483615U;
          }

          state[kk] = state[397 + kk] ^ mti;
        }

        for (kk = 0; kk < 396; kk++) {
          y = (state[kk + 227] & 2147483648U) | (state[228 + kk] & 2147483647U);
          if ((int32_T)(y & 1U) == 0) {
            mti = y >> 1U;
          } else {
            mti = y >> 1U ^ 2567483615U;
          }

          state[kk + 227] = state[kk] ^ mti;
        }

        y = (state[623] & 2147483648U) | (state[0] & 2147483647U);
        if ((int32_T)(y & 1U) == 0) {
          mti = y >> 1U;
        } else {
          mti = y >> 1U ^ 2567483615U;
        }

        state[623] = state[396] ^ mti;
        mti = 1U;
      }

      y = state[(int32_T)mti - 1];
      state[624] = mti;
      y ^= y >> 11U;
      y ^= y << 7U & 2636928640U;
      y ^= y << 15U & 4022730752U;
      y ^= y >> 18U;
      u[k] = y;
    }

    r = ((real_T)(u[0] >> 5U) * 6.7108864E+7 + (real_T)(u[1] >> 6U)) *
      1.1102230246251565E-16;
    if (r == 0.0) {
      b_isvalid = ((state[624] >= 1U) && (state[624] < 625U));
      if (b_isvalid) {
        b_isvalid = false;
        k = 1;
        exitg2 = false;
        while ((!exitg2) && (k < 625)) {
          if (state[k - 1] == 0U) {
            k++;
          } else {
            b_isvalid = true;
            exitg2 = true;
          }
        }
      }

      if (!b_isvalid) {
        Registrati_twister_state_vector(state, 5489U);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function2' */
static real_T Registration_Estimation_rand(void)
{
  real_T r;
  int32_T hi;
  uint32_T test1;
  uint32_T test2;
  if (Registration_Estimation_DW.method == 4U) {
    hi = (int32_T)(Registration_Estimation_DW.state / 127773U);
    test1 = (Registration_Estimation_DW.state - hi * 127773U) * 16807U;
    test2 = 2836U * hi;
    if (test1 < test2) {
      test1 = (test1 - test2) + 2147483647U;
    } else {
      test1 -= test2;
    }

    Registration_Estimation_DW.state = test1;
    r = (real_T)test1 * 4.6566128752457969E-10;
  } else if (Registration_Estimation_DW.method == 5U) {
    test1 = 69069U * Registration_Estimation_DW.state_c[0] + 1234567U;
    test2 = Registration_Estimation_DW.state_c[1] << 13 ^
      Registration_Estimation_DW.state_c[1];
    test2 ^= test2 >> 17;
    test2 ^= test2 << 5;
    Registration_Estimation_DW.state_c[0] = test1;
    Registration_Estimation_DW.state_c[1] = test2;
    r = (real_T)(test1 + test2) * 2.328306436538696E-10;
  } else {
    if (!Registration_Estimation_DW.state_not_empty) {
      memset(&Registration_Estimation_DW.state_f[0], 0, 625U * sizeof(uint32_T));
      Registrati_twister_state_vector(Registration_Estimation_DW.state_f, 5489U);
      Registration_Estimation_DW.state_not_empty = true;
    }

    r = Registration_eml_rand_mt19937ar(Registration_Estimation_DW.state_f);
  }

  return r;
}

/* Model output function */
static void Registration_Estimation_output(void)
{
  real_T currZ;
  real_T zdir;
  real_T targX;
  real_T targY;

  /* Level2 S-Function Block: '<Root>/Receive 1' (xpcudpbytereceive) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* Byte Unpacking: <Root>/Byte Unpacking 1 */
  (void)memcpy((uint8_T*)&Registration_Estimation_B.orceData[0], (uint8_T*)
               &Registration_Estimation_B.Receive1_o1[0] + 0, 48);

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 3' (encconteccnt328mpci) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* Sum: '<Root>/Sum1' incorporates:
   *  Constant: '<Root>/encoder offsets3'
   */
  Registration_Estimation_B.Sum1 = Registration_Estimation_B.counts -
    Registration_Estimation_P.encoderoffsets3_Value;

  /* Gain: '<Root>/count_to_mm2' */
  Registration_Estimation_B.count_to_mm2 =
    Registration_Estimation_P.count_to_mm2_Gain * Registration_Estimation_B.Sum1;

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[2];
    sfcnOutputs(rts, 0);
  }

  /* Sum: '<Root>/Sum3' incorporates:
   *  Constant: '<Root>/encoder offsets2'
   */
  Registration_Estimation_B.Sum3 = Registration_Estimation_B.counts_g -
    Registration_Estimation_P.encoderoffsets2_Value;

  /* Gain: '<Root>/count_to_mm1' */
  Registration_Estimation_B.XData = Registration_Estimation_P.count_to_mm1_Gain *
    Registration_Estimation_B.Sum3;

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[3];
    sfcnOutputs(rts, 0);
  }

  /* Sum: '<Root>/Sum2' incorporates:
   *  Constant: '<Root>/encoder offsets1'
   */
  Registration_Estimation_B.Sum2 = Registration_Estimation_B.counts_o -
    Registration_Estimation_P.encoderoffsets1_Value;

  /* Gain: '<Root>/count_to_mm' */
  Registration_Estimation_B.YData = Registration_Estimation_P.count_to_mm_Gain *
    Registration_Estimation_B.Sum2;

  /* DataStoreRead: '<Root>/Data Store Read' */
  Registration_Estimation_B.DataStoreRead = Registration_Estimation_DW.targX;

  /* DataStoreRead: '<Root>/Data Store Read1' */
  Registration_Estimation_B.DataStoreRead1 = Registration_Estimation_DW.targY;

  /* MATLAB Function: '<Root>/MATLAB Function1' */
  /* MATLAB Function 'MATLAB Function1': '<S11>:1' */
  /* '<S11>:1:3' */
  /* '<S11>:1:4' */
  /* '<S11>:1:5' */
  /* '<S11>:1:6' */
  if ((ceil(Registration_Estimation_B.XData) == ceil
       (Registration_Estimation_B.DataStoreRead)) && (ceil
       (Registration_Estimation_B.YData) == ceil
       (Registration_Estimation_B.DataStoreRead1))) {
    /* '<S11>:1:9' */
    /* '<S11>:1:10' */
    Registration_Estimation_B.sel_o = 1.0;
  } else {
    /* '<S11>:1:12' */
    Registration_Estimation_B.sel_o = 0.0;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function1' */

  /* DataStoreRead: '<Root>/Data Store Read5' */
  Registration_Estimation_B.zdir = Registration_Estimation_DW.zdir;

  /* MATLAB Function: '<Root>/MATLAB Function3' */
  /* MATLAB Function 'MATLAB Function3': '<S13>:1' */
  /* '<S13>:1:1' */
  zdir = Registration_Estimation_B.zdir;

  /* '<S13>:1:3' */
  Registration_Estimation_B.motZ = 0.0;

  /* '<S13>:1:4' */
  currZ = ceil(Registration_Estimation_B.count_to_mm2);

  /* '<S13>:1:5' */
  Registration_Estimation_B.sel = 0.0;

  /* '<S13>:1:6' */
  /* '<S13>:1:7' */
  if ((Registration_Estimation_B.orceData[2] > -0.01) &&
      (Registration_Estimation_B.sel_o == 1.0) &&
      (Registration_Estimation_B.zdir == -1.0)) {
    /* '<S13>:1:8' */
    /* '<S13>:1:9' */
    Registration_Estimation_B.motZ = -1.0;
  } else if ((currZ > 0.0) && (Registration_Estimation_B.sel_o == 1.0) &&
             (Registration_Estimation_B.zdir == 1.0)) {
    /* '<S13>:1:12' */
    /* '<S13>:1:13' */
    Registration_Estimation_B.motZ = 1.0;
  } else {
    if (Registration_Estimation_B.orceData[2] <= -0.01) {
      /* '<S13>:1:15' */
      /* '<S13>:1:16' */
      zdir = 1.0;

      /*       */
      /*      elseif(currZ<=0) */
      /*          sel=1; */
    }
  }

  if ((Registration_Estimation_B.zdir == 1.0) && (currZ <= 0.0)) {
    /* '<S13>:1:23' */
    /* '<S13>:1:24' */
    Registration_Estimation_B.sel = 1.0;

    /* '<S13>:1:25' */
    zdir = -1.0;
  }

  Registration_Estimation_B.zdir = zdir;

  /* End of MATLAB Function: '<Root>/MATLAB Function3' */

  /* MATLAB Function: '<Root>/MATLAB Function2' */
  /* MATLAB Function 'MATLAB Function2': '<S12>:1' */
  if (Registration_Estimation_B.sel == 0.0) {
    /* '<S12>:1:4' */
    /* '<S12>:1:5' */
    zdir = Registration_Estimation_B.DataStoreRead;

    /* '<S12>:1:6' */
    currZ = Registration_Estimation_B.DataStoreRead1;
  } else {
    /* '<S12>:1:8' */
    zdir = 70.0 * Registration_Estimation_rand() + -5.0;

    /* '<S12>:1:9' */
    currZ = 70.0 * Registration_Estimation_rand() + -5.0;

    /* gerenrate random num */
    /*          newX = 5; */
    /*          newY = 5; */
  }

  Registration_Estimation_B.newX = zdir;
  Registration_Estimation_B.newY = currZ;

  /* End of MATLAB Function: '<Root>/MATLAB Function2' */

  /* DataStoreWrite: '<Root>/Data Store Write' */
  Registration_Estimation_DW.targX = Registration_Estimation_B.newX;

  /* DataStoreWrite: '<Root>/Data Store Write1' */
  Registration_Estimation_DW.targY = Registration_Estimation_B.newY;

  /* DataStoreWrite: '<Root>/Data Store Write2' */
  Registration_Estimation_DW.zdir = Registration_Estimation_B.zdir;

  /* ok to acquire for <S1>/S-Function */
  Registration_Estimation_DW.SFunction_IWORK.AcquireOK = 1;

  /* ok to acquire for <S2>/S-Function */
  Registration_Estimation_DW.SFunction_IWORK_o.AcquireOK = 1;

  /* ok to acquire for <S3>/S-Function */
  Registration_Estimation_DW.SFunction_IWORK_g.AcquireOK = 1;

  /* ok to acquire for <S4>/S-Function */
  Registration_Estimation_DW.SFunction_IWORK_j.AcquireOK = 1;

  /* ok to acquire for <S5>/S-Function */
  Registration_Estimation_DW.SFunction_IWORK_jl.AcquireOK = 1;

  /* ok to acquire for <S6>/S-Function */
  Registration_Estimation_DW.SFunction_IWORK_jj.AcquireOK = 1;

  /* ok to acquire for <S7>/S-Function */
  Registration_Estimation_DW.SFunction_IWORK_a.AcquireOK = 1;

  /* ok to acquire for <S8>/S-Function */
  Registration_Estimation_DW.SFunction_IWORK_jp.AcquireOK = 1;

  /* ok to acquire for <S9>/S-Function */
  Registration_Estimation_DW.SFunction_IWORK_e.AcquireOK = 1;

  /* DataStoreRead: '<Root>/Data Store Read2' */
  Registration_Estimation_B.DataStoreRead2 = Registration_Estimation_DW.targX;

  /* DataStoreRead: '<Root>/Data Store Read3' */
  Registration_Estimation_B.DataStoreRead3 = Registration_Estimation_DW.targY;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  /* MATLAB Function 'MATLAB Function': '<S10>:1' */
  /* '<S10>:1:4' */
  Registration_Estimation_B.motX = 0.0;

  /* '<S10>:1:5' */
  Registration_Estimation_B.motY = 0.0;

  /* '<S10>:1:6' */
  zdir = ceil(Registration_Estimation_B.XData);

  /* '<S10>:1:7' */
  currZ = ceil(Registration_Estimation_B.YData);

  /* '<S10>:1:8' */
  targX = ceil(Registration_Estimation_B.DataStoreRead2);

  /* '<S10>:1:9' */
  targY = ceil(Registration_Estimation_B.DataStoreRead3);
  if (targX > zdir) {
    /* '<S10>:1:11' */
    /* '<S10>:1:12' */
    Registration_Estimation_B.motX = -1.0;
  }

  if (targX < zdir) {
    /* '<S10>:1:14' */
    /* '<S10>:1:15' */
    Registration_Estimation_B.motX = 1.0;
  }

  if (targY > currZ) {
    /* '<S10>:1:17' */
    /* '<S10>:1:18' */
    Registration_Estimation_B.motY = -1.0;
  }

  if (targY < currZ) {
    /* '<S10>:1:20' */
    /* '<S10>:1:21' */
    Registration_Estimation_B.motY = 1.0;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */

  /* Abs: '<Root>/Abs1' */
  /*  nIntervals=2; */
  /*  remY = mod(currY,nIntervals); */
  /*  quotY = currY/nIntervals; */
  /*  motX = 0; */
  /*  motY = 0; */
  /*  maxX = 87; */
  /*  minX = 0; */
  /*  maxY=87; */
  /*   */
  /*  if(currX>maxX) */
  /*      maxX = currX; */
  /*  end */
  /*  if(currX<minX) */
  /*      minX = currX; */
  /*  end */
  /*   */
  /*  if((currX>=minX)&&(currX<maxX)&&(remY==0)&&(mod(quotY,2)==0)) */
  /*      motX = -1; */
  /*  elseif((currX>minX)&&(currX<=maxX)&&(remY==0)&&(mod(quotY,2)==1)) */
  /*      motX = 1; */
  /*  elseif(((currX==minX)||(currX>=maxX))&&(remY~=0)) */
  /*      motY = -1; */
  /*  elseif((currX==minX)&&(remY==0)&&(mod(quotY,2)==1)) */
  /*      motY = -1; */
  /*  elseif((currX>=maxX)&&(remY==0)&&(mod(quotY,2)==0)) */
  /*      motY=-1; */
  /*  end */
  /*   */
  /*  if((currY>maxY)) */
  /*      motX = 0; */
  /*      motY = 0; */
  /*  end */
  Registration_Estimation_B.XEnable = fabs(Registration_Estimation_B.motX);

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_Abs1_at_outport_0' */
  {
    {
      double time = Registration_Estimation_M->Timing.t[0];
      void *pData = (void *)&Registration_Estimation_B.XEnable;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(2079502700U, time, pData, size);
    }
  }

  /* Abs: '<Root>/Abs' */
  Registration_Estimation_B.Yenable = fabs(Registration_Estimation_B.motY);

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_Abs_at_outport_0' */
  {
    {
      double time = Registration_Estimation_M->Timing.t[0];
      void *pData = (void *)&Registration_Estimation_B.Yenable;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(3358989834U, time, pData, size);
    }
  }

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_Byte Unpacking 1_at_outport_0' */
  {
    {
      double time = Registration_Estimation_M->Timing.t[0];
      void *pData = (void *)&Registration_Estimation_B.orceData[0];
      int32_T size = 6*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(1990053888U, time, pData, size);
    }
  }

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_MATLAB Function_at_outport_0' */
  {
    {
      double time = Registration_Estimation_M->Timing.t[0];
      void *pData = (void *)&Registration_Estimation_B.motX;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(827295610U, time, pData, size);
    }
  }

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_MATLAB Function_at_outport_1' */
  {
    {
      double time = Registration_Estimation_M->Timing.t[0];
      void *pData = (void *)&Registration_Estimation_B.motY;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(524582408U, time, pData, size);
    }
  }

  /* Signum: '<Root>/Sign1' */
  zdir = Registration_Estimation_B.motX;
  if (zdir < 0.0) {
    Registration_Estimation_B.Sign1 = -1.0;
  } else if (zdir > 0.0) {
    Registration_Estimation_B.Sign1 = 1.0;
  } else if (zdir == 0.0) {
    Registration_Estimation_B.Sign1 = 0.0;
  } else {
    Registration_Estimation_B.Sign1 = zdir;
  }

  /* End of Signum: '<Root>/Sign1' */

  /* Gain: '<Root>/Voltage1' */
  Registration_Estimation_B.xVoltage = Registration_Estimation_P.Voltage1_Gain *
    Registration_Estimation_B.Sign1;

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_Voltage1_at_outport_0' */
  {
    {
      double time = Registration_Estimation_M->Timing.t[0];
      void *pData = (void *)&Registration_Estimation_B.xVoltage;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(67570990U, time, pData, size);
    }
  }

  /* Signum: '<Root>/Sign' */
  zdir = Registration_Estimation_B.motY;
  if (zdir < 0.0) {
    Registration_Estimation_B.Sign = -1.0;
  } else if (zdir > 0.0) {
    Registration_Estimation_B.Sign = 1.0;
  } else if (zdir == 0.0) {
    Registration_Estimation_B.Sign = 0.0;
  } else {
    Registration_Estimation_B.Sign = zdir;
  }

  /* End of Signum: '<Root>/Sign' */

  /* Gain: '<Root>/Voltage' */
  Registration_Estimation_B.VoltageY = Registration_Estimation_P.Voltage_Gain *
    Registration_Estimation_B.Sign;

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_Voltage_at_outport_0' */
  {
    {
      double time = Registration_Estimation_M->Timing.t[0];
      void *pData = (void *)&Registration_Estimation_B.VoltageY;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(3215193586U, time, pData, size);
    }
  }

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_count_to_mm1_at_outport_0' */
  {
    {
      double time = Registration_Estimation_M->Timing.t[0];
      void *pData = (void *)&Registration_Estimation_B.XData;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(3176967325U, time, pData, size);
    }
  }

  /* ToAsyncQueueBlock: '<Root>/HiddenToAsyncQueue_InsertedFor_count_to_mm_at_outport_0' */
  {
    {
      double time = Registration_Estimation_M->Timing.t[0];
      void *pData = (void *)&Registration_Estimation_B.YData;
      int32_T size = 1*sizeof(real_T);
      sendToAsyncQueueTgtAppSvc(150469446U, time, pData, size);
    }
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[4];
    sfcnOutputs(rts, 0);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[5];
    sfcnOutputs(rts, 0);
  }

  /* Abs: '<Root>/Abs2' */
  Registration_Estimation_B.Yenable_f = fabs(Registration_Estimation_B.motZ);

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 5' (dopci8255) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[6];
    sfcnOutputs(rts, 0);
  }

  /* Signum: '<Root>/Sign2' */
  zdir = Registration_Estimation_B.motZ;
  if (zdir < 0.0) {
    Registration_Estimation_B.Sign2 = -1.0;
  } else if (zdir > 0.0) {
    Registration_Estimation_B.Sign2 = 1.0;
  } else if (zdir == 0.0) {
    Registration_Estimation_B.Sign2 = 0.0;
  } else {
    Registration_Estimation_B.Sign2 = zdir;
  }

  /* End of Signum: '<Root>/Sign2' */

  /* Gain: '<Root>/Voltage2' */
  Registration_Estimation_B.VoltageY_j = Registration_Estimation_P.Voltage2_Gain
    * Registration_Estimation_B.Sign2;

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[7];
    sfcnOutputs(rts, 0);
  }
}

/* Model update function */
static void Registration_Estimation_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Registration_Estimation_M->Timing.clockTick0)) {
    ++Registration_Estimation_M->Timing.clockTickH0;
  }

  Registration_Estimation_M->Timing.t[0] =
    Registration_Estimation_M->Timing.clockTick0 *
    Registration_Estimation_M->Timing.stepSize0 +
    Registration_Estimation_M->Timing.clockTickH0 *
    Registration_Estimation_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void Registration_Estimation_initialize(void)
{
  /* Level2 S-Function Block: '<Root>/Receive 1' (xpcudpbytereceive) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 3' (encconteccnt328mpci) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S1>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,3)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo("count_to_mm1"));
        rl32eSetScope(3, 4, 20000);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        xpceFSScopeSet(3, "Xdata.dat", 0, 512, 0, 536870912);
        rl32eSetScope (3, 10, 0);
        rl32eSetScope(3, 3, rl32eGetSignalNo("count_to_mm1"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 0);
        rl32eSetScope(3, 9, 0);
        xpceScopeAcqOK(3, &Registration_Estimation_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* S-Function Block: <S2>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,3)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("count_to_mm"));
        rl32eSetScope(4, 4, 20000);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 0);
        xpceFSScopeSet(4, "Ydata.dat", 0, 512, 0, 536870912);
        rl32eSetScope (4, 10, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo("count_to_mm"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 9, 0);
        xpceScopeAcqOK(4,
                       &Registration_Estimation_DW.SFunction_IWORK_o.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* S-Function Block: <S3>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,2)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eAddSignal(5, rl32eGetSignalNo("Data Store Read"));
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Data Store Read"),"%15.6f");
        rl32eSetScope(5, 4, 10000);
        rl32eSetScope(5, 5, 0);
        rl32eSetScope(5, 6, 1);
        rl32eSetScope(5, 0, 0);
        rl32eSetScope(5, 3, rl32eGetSignalNo("Data Store Read"));
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 0);
        rl32eSetScope(5, 9, 0);
        rl32eSetTargetScope(5, 1, 0.0);
        rl32eSetTargetScope(5, 11, 0.0);
        rl32eSetTargetScope(5, 10, 0.0);
        xpceScopeAcqOK(5,
                       &Registration_Estimation_DW.SFunction_IWORK_g.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(5);
    }
  }

  /* S-Function Block: <S4>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(6)) == 0) {
      if ((i = rl32eDefScope(6,2)) != 0) {
        printf("Error creating scope 6\n");
      } else {
        rl32eAddSignal(6, rl32eGetSignalNo("Data Store Read1"));
        rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo("Data Store Read1"),"%15.6f");
        rl32eSetScope(6, 4, 10000);
        rl32eSetScope(6, 5, 0);
        rl32eSetScope(6, 6, 1);
        rl32eSetScope(6, 0, 0);
        rl32eSetScope(6, 3, rl32eGetSignalNo("Data Store Read1"));
        rl32eSetScope(6, 1, 0.0);
        rl32eSetScope(6, 2, 0);
        rl32eSetScope(6, 9, 0);
        rl32eSetTargetScope(6, 1, 0.0);
        rl32eSetTargetScope(6, 11, 0.0);
        rl32eSetTargetScope(6, 10, 0.0);
        xpceScopeAcqOK(6,
                       &Registration_Estimation_DW.SFunction_IWORK_j.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(6);
    }
  }

  /* S-Function Block: <S5>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,3)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("count_to_mm2"));
        rl32eSetScope(1, 4, 20000);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        xpceFSScopeSet(1, "Zdata.dat", 0, 512, 0, 536870912);
        rl32eSetScope (1, 10, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("count_to_mm2"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        xpceScopeAcqOK(1,
                       &Registration_Estimation_DW.SFunction_IWORK_jl.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* S-Function Block: <S6>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo("Byte Unpacking 1/s3"));
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Byte Unpacking 1/s3"),
          "%15.6f");
        rl32eSetScope(2, 4, 3);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo("Byte Unpacking 1/s3"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 0.0);
        rl32eSetTargetScope(2, 11, 0.0);
        rl32eSetTargetScope(2, 10, 0.0);
        xpceScopeAcqOK(2,
                       &Registration_Estimation_DW.SFunction_IWORK_jj.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* S-Function Block: <S7>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(7)) == 0) {
      if ((i = rl32eDefScope(7,2)) != 0) {
        printf("Error creating scope 7\n");
      } else {
        rl32eAddSignal(7, rl32eGetSignalNo("MATLAB Function2/p1"));
        rl32eSetTargetScopeSigFt(7,rl32eGetSignalNo("MATLAB Function2/p1"),
          "%15.6f");
        rl32eSetScope(7, 4, 10000);
        rl32eSetScope(7, 5, 0);
        rl32eSetScope(7, 6, 1);
        rl32eSetScope(7, 0, 0);
        rl32eSetScope(7, 3, rl32eGetSignalNo("MATLAB Function2/p1"));
        rl32eSetScope(7, 1, 0.0);
        rl32eSetScope(7, 2, 0);
        rl32eSetScope(7, 9, 0);
        rl32eSetTargetScope(7, 1, 0.0);
        rl32eSetTargetScope(7, 11, 0.0);
        rl32eSetTargetScope(7, 10, 0.0);
        xpceScopeAcqOK(7,
                       &Registration_Estimation_DW.SFunction_IWORK_a.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(7);
    }
  }

  /* S-Function Block: <S8>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(8)) == 0) {
      if ((i = rl32eDefScope(8,2)) != 0) {
        printf("Error creating scope 8\n");
      } else {
        rl32eAddSignal(8, rl32eGetSignalNo("MATLAB Function3/p3"));
        rl32eSetTargetScopeSigFt(8,rl32eGetSignalNo("MATLAB Function3/p3"),
          "%15.6f");
        rl32eSetScope(8, 4, 10000);
        rl32eSetScope(8, 5, 0);
        rl32eSetScope(8, 6, 1);
        rl32eSetScope(8, 0, 0);
        rl32eSetScope(8, 3, rl32eGetSignalNo("MATLAB Function3/p3"));
        rl32eSetScope(8, 1, 0.0);
        rl32eSetScope(8, 2, 0);
        rl32eSetScope(8, 9, 0);
        rl32eSetTargetScope(8, 1, 0.0);
        rl32eSetTargetScope(8, 11, 0.0);
        rl32eSetTargetScope(8, 10, 0.0);
        xpceScopeAcqOK(8,
                       &Registration_Estimation_DW.SFunction_IWORK_jp.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(8);
    }
  }

  /* S-Function Block: <S9>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(9)) == 0) {
      if ((i = rl32eDefScope(9,2)) != 0) {
        printf("Error creating scope 9\n");
      } else {
        rl32eAddSignal(9, rl32eGetSignalNo("Byte Unpacking 1/s3"));
        rl32eSetScope(9, 4, 2000);
        rl32eSetScope(9, 5, 0);
        rl32eSetScope(9, 6, 1);
        rl32eSetScope(9, 0, 0);
        rl32eSetScope(9, 3, rl32eGetSignalNo("Byte Unpacking 1/s3"));
        rl32eSetScope(9, 1, 0.0);
        rl32eSetScope(9, 2, 0);
        rl32eSetScope(9, 9, 0);
        rl32eSetTargetScope(9, 1, 3.0);
        rl32eSetTargetScope(9, 11, 0.0);
        rl32eSetTargetScope(9, 10, 0.0);
        xpceScopeAcqOK(9,
                       &Registration_Estimation_DW.SFunction_IWORK_e.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(9);
    }
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 5' (dopci8255) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  Registration_Estimation_DW.targX =
    Registration_Estimation_P.DataStoreMemory_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  Registration_Estimation_DW.targY =
    Registration_Estimation_P.DataStoreMemory1_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory2' */
  Registration_Estimation_DW.targZ =
    Registration_Estimation_P.DataStoreMemory2_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory3' */
  Registration_Estimation_DW.zdir =
    Registration_Estimation_P.DataStoreMemory3_InitialValue;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function2' */
  Registration_Estimation_DW.state_not_empty = false;
  Registration_Estimation_DW.method = 7U;
  Registration_Estimation_DW.state = 1144108930U;
  Registration_Estimation_DW.state_c[0] = 362436069U;
  Registration_Estimation_DW.state_c[1] = 521288629U;
}

/* Model terminate function */
static void Registration_Estimation_terminate(void)
{
  /* Level2 S-Function Block: '<Root>/Receive 1' (xpcudpbytereceive) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 3' (encconteccnt328mpci) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 2' (encconteccnt328mpci) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/CNT32-8M(PCI) 1' (encconteccnt328mpci) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 3' (dopci8255) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 4' (dopci8255) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA 08 12 5' (dopci8255) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-DDA08 12 ' (dacbpcidda0x12) */
  {
    SimStruct *rts = Registration_Estimation_M->childSfunctions[7];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  Registration_Estimation_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  Registration_Estimation_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  Registration_Estimation_initialize();
}

void MdlTerminate(void)
{
  Registration_Estimation_terminate();
}

/* Registration function */
RT_MODEL_Registration_Estimation_T *Registration_Estimation(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Registration_Estimation_M, 0,
                sizeof(RT_MODEL_Registration_Estimation_T));
  rtsiSetSolverName(&Registration_Estimation_M->solverInfo,"FixedStepDiscrete");
  Registration_Estimation_M->solverInfoPtr =
    (&Registration_Estimation_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Registration_Estimation_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    Registration_Estimation_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Registration_Estimation_M->Timing.sampleTimes =
      (&Registration_Estimation_M->Timing.sampleTimesArray[0]);
    Registration_Estimation_M->Timing.offsetTimes =
      (&Registration_Estimation_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Registration_Estimation_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    Registration_Estimation_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(Registration_Estimation_M,
             &Registration_Estimation_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Registration_Estimation_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    Registration_Estimation_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Registration_Estimation_M, -1);
  Registration_Estimation_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    Registration_Estimation_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Registration_Estimation_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Registration_Estimation_M->rtwLogInfo, (NULL));
    rtliSetLogT(Registration_Estimation_M->rtwLogInfo, "tout");
    rtliSetLogX(Registration_Estimation_M->rtwLogInfo, "");
    rtliSetLogXFinal(Registration_Estimation_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Registration_Estimation_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Registration_Estimation_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(Registration_Estimation_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Registration_Estimation_M->rtwLogInfo, 1);
    rtliSetLogY(Registration_Estimation_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Registration_Estimation_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Registration_Estimation_M->rtwLogInfo, (NULL));
  }

  Registration_Estimation_M->solverInfoPtr =
    (&Registration_Estimation_M->solverInfo);
  Registration_Estimation_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&Registration_Estimation_M->solverInfo, 0.001);
  rtsiSetSolverMode(&Registration_Estimation_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Registration_Estimation_M->ModelData.blockIO = ((void *)
    &Registration_Estimation_B);
  (void) memset(((void *) &Registration_Estimation_B), 0,
                sizeof(B_Registration_Estimation_T));

  /* parameters */
  Registration_Estimation_M->ModelData.defaultParam = ((real_T *)
    &Registration_Estimation_P);

  /* states (dwork) */
  Registration_Estimation_M->ModelData.dwork = ((void *)
    &Registration_Estimation_DW);
  (void) memset((void *)&Registration_Estimation_DW, 0,
                sizeof(DW_Registration_Estimation_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  Registration_Estimation_InitializeDataMapInfo(Registration_Estimation_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Registration_Estimation_M->NonInlinedSFcns.sfcnInfo;
    Registration_Estimation_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (Registration_Estimation_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &Registration_Estimation_M->Sizes.numSampTimes);
    Registration_Estimation_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (Registration_Estimation_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   Registration_Estimation_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Registration_Estimation_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Registration_Estimation_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (Registration_Estimation_M));
    rtssSetStepSizePtr(sfcnInfo, &Registration_Estimation_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (Registration_Estimation_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Registration_Estimation_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &Registration_Estimation_M->ModelData.zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo,
      &Registration_Estimation_M->ModelData.blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &Registration_Estimation_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Registration_Estimation_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Registration_Estimation_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Registration_Estimation_M->solverInfoPtr);
  }

  Registration_Estimation_M->Sizes.numSFcns = (8);

  /* register each child */
  {
    (void) memset((void *)
                  &Registration_Estimation_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  8*sizeof(SimStruct));
    Registration_Estimation_M->childSfunctions =
      (&Registration_Estimation_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 8; i++) {
        Registration_Estimation_M->childSfunctions[i] =
          (&Registration_Estimation_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: Registration_Estimation/<Root>/Receive 1 (xpcudpbytereceive) */
    {
      SimStruct *rts = Registration_Estimation_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &Registration_Estimation_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, Registration_Estimation_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Registration_Estimation_M->
                         NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &Registration_Estimation_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 48);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            Registration_Estimation_B.Receive1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &Registration_Estimation_B.Receive1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Receive 1");
      ssSetPath(rts, "Registration_Estimation/Receive 1");
      ssSetRTModel(rts,Registration_Estimation_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Registration_Estimation_P.Receive1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Registration_Estimation_P.Receive1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Registration_Estimation_P.Receive1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Registration_Estimation_P.Receive1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Registration_Estimation_P.Receive1_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Registration_Estimation_DW.Receive1_IWORK[0]);
      ssSetPWork(rts, (void **) &Registration_Estimation_DW.Receive1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Registration_Estimation_DW.Receive1_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Registration_Estimation_DW.Receive1_PWORK);
      }

      /* registration */
      xpcudpbytereceive(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Registration_Estimation/<Root>/CNT32-8M(PCI) 3 (encconteccnt328mpci) */
    {
      SimStruct *rts = Registration_Estimation_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &Registration_Estimation_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, Registration_Estimation_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Registration_Estimation_M->
                         NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &Registration_Estimation_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Registration_Estimation_B.counts));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) 3");
      ssSetPath(rts, "Registration_Estimation/CNT32-8M(PCI) 3");
      ssSetRTModel(rts,Registration_Estimation_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI3_P35_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Registration_Estimation_DW.CNT328MPCI3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Registration_Estimation_DW.CNT328MPCI3_IWORK[0]);
      }

      /* registration */
      encconteccnt328mpci(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Registration_Estimation/<Root>/CNT32-8M(PCI) 2 (encconteccnt328mpci) */
    {
      SimStruct *rts = Registration_Estimation_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &Registration_Estimation_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, Registration_Estimation_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Registration_Estimation_M->
                         NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &Registration_Estimation_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Registration_Estimation_B.counts_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) 2");
      ssSetPath(rts, "Registration_Estimation/CNT32-8M(PCI) 2");
      ssSetRTModel(rts,Registration_Estimation_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI2_P35_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Registration_Estimation_DW.CNT328MPCI2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Registration_Estimation_DW.CNT328MPCI2_IWORK[0]);
      }

      /* registration */
      encconteccnt328mpci(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Registration_Estimation/<Root>/CNT32-8M(PCI) 1 (encconteccnt328mpci) */
    {
      SimStruct *rts = Registration_Estimation_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &Registration_Estimation_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, Registration_Estimation_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Registration_Estimation_M->
                         NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &Registration_Estimation_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Registration_Estimation_B.counts_o));
        }
      }

      /* path info */
      ssSetModelName(rts, "CNT32-8M(PCI) 1");
      ssSetPath(rts, "Registration_Estimation/CNT32-8M(PCI) 1");
      ssSetRTModel(rts,Registration_Estimation_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)
                       Registration_Estimation_P.CNT328MPCI1_P35_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Registration_Estimation_DW.CNT328MPCI1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 7);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Registration_Estimation_DW.CNT328MPCI1_IWORK[0]);
      }

      /* registration */
      encconteccnt328mpci(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Registration_Estimation/<Root>/PCI-DDA 08 12 3 (dopci8255) */
    {
      SimStruct *rts = Registration_Estimation_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &Registration_Estimation_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, Registration_Estimation_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Registration_Estimation_M->
                         NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &Registration_Estimation_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Registration_Estimation_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &Registration_Estimation_B.Yenable;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 3");
      ssSetPath(rts, "Registration_Estimation/PCI-DDA 08 12 3");
      ssSetRTModel(rts,Registration_Estimation_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Registration_Estimation_P.PCIDDA08123_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Registration_Estimation_P.PCIDDA08123_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Registration_Estimation_P.PCIDDA08123_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Registration_Estimation_P.PCIDDA08123_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Registration_Estimation_P.PCIDDA08123_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Registration_Estimation_P.PCIDDA08123_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Registration_Estimation_P.PCIDDA08123_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Registration_Estimation_P.PCIDDA08123_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       Registration_Estimation_P.PCIDDA08123_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       Registration_Estimation_P.PCIDDA08123_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Registration_Estimation_DW.PCIDDA08123_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Registration_Estimation_DW.PCIDDA08123_IWORK[0]);
      }

      /* registration */
      dopci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Registration_Estimation/<Root>/PCI-DDA 08 12 4 (dopci8255) */
    {
      SimStruct *rts = Registration_Estimation_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &Registration_Estimation_M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, Registration_Estimation_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods2
                           [5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods3
                           [5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Registration_Estimation_M->
                         NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &Registration_Estimation_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Registration_Estimation_M->NonInlinedSFcns.Sfcn5.UPtrs0;
          sfcnUPtrs[0] = &Registration_Estimation_B.XEnable;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 4");
      ssSetPath(rts, "Registration_Estimation/PCI-DDA 08 12 4");
      ssSetRTModel(rts,Registration_Estimation_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Registration_Estimation_P.PCIDDA08124_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Registration_Estimation_P.PCIDDA08124_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Registration_Estimation_P.PCIDDA08124_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Registration_Estimation_P.PCIDDA08124_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Registration_Estimation_P.PCIDDA08124_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Registration_Estimation_P.PCIDDA08124_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Registration_Estimation_P.PCIDDA08124_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Registration_Estimation_P.PCIDDA08124_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       Registration_Estimation_P.PCIDDA08124_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       Registration_Estimation_P.PCIDDA08124_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Registration_Estimation_DW.PCIDDA08124_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Registration_Estimation_DW.PCIDDA08124_IWORK[0]);
      }

      /* registration */
      dopci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Registration_Estimation/<Root>/PCI-DDA 08 12 5 (dopci8255) */
    {
      SimStruct *rts = Registration_Estimation_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &Registration_Estimation_M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, Registration_Estimation_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods2
                           [6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods3
                           [6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Registration_Estimation_M->
                         NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &Registration_Estimation_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Registration_Estimation_M->NonInlinedSFcns.Sfcn6.UPtrs0;
          sfcnUPtrs[0] = &Registration_Estimation_B.Yenable_f;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA 08 12 5");
      ssSetPath(rts, "Registration_Estimation/PCI-DDA 08 12 5");
      ssSetRTModel(rts,Registration_Estimation_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Registration_Estimation_P.PCIDDA08125_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Registration_Estimation_P.PCIDDA08125_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Registration_Estimation_P.PCIDDA08125_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Registration_Estimation_P.PCIDDA08125_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Registration_Estimation_P.PCIDDA08125_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Registration_Estimation_P.PCIDDA08125_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Registration_Estimation_P.PCIDDA08125_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Registration_Estimation_P.PCIDDA08125_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       Registration_Estimation_P.PCIDDA08125_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       Registration_Estimation_P.PCIDDA08125_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Registration_Estimation_DW.PCIDDA08125_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Registration_Estimation_DW.PCIDDA08125_IWORK[0]);
      }

      /* registration */
      dopci8255(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Registration_Estimation/<Root>/PCI-DDA08 12  (dacbpcidda0x12) */
    {
      SimStruct *rts = Registration_Estimation_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap =
        Registration_Estimation_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &Registration_Estimation_M->NonInlinedSFcns.blkInfo2[7]);
      }

      ssSetRTWSfcnInfo(rts, Registration_Estimation_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods2
                           [7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Registration_Estimation_M->NonInlinedSFcns.methods3
                           [7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Registration_Estimation_M->
                         NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &Registration_Estimation_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Registration_Estimation_M->NonInlinedSFcns.Sfcn7.UPtrs0;
          sfcnUPtrs[0] = &Registration_Estimation_B.xVoltage;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Registration_Estimation_M->NonInlinedSFcns.Sfcn7.UPtrs1;
          sfcnUPtrs[0] = &Registration_Estimation_B.VoltageY;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Registration_Estimation_M->NonInlinedSFcns.Sfcn7.UPtrs2;
          sfcnUPtrs[0] = &Registration_Estimation_B.VoltageY_j;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-DDA08 12 ");
      ssSetPath(rts, "Registration_Estimation/PCI-DDA08 12 ");
      ssSetRTModel(rts,Registration_Estimation_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Registration_Estimation_P.PCIDDA0812_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Registration_Estimation_P.PCIDDA0812_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Registration_Estimation_P.PCIDDA0812_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Registration_Estimation_P.PCIDDA0812_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Registration_Estimation_P.PCIDDA0812_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Registration_Estimation_P.PCIDDA0812_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Registration_Estimation_P.PCIDDA0812_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Registration_Estimation_DW.PCIDDA0812_RWORK[0]);
      ssSetIWork(rts, (int_T *) &Registration_Estimation_DW.PCIDDA0812_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Registration_Estimation_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 16);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Registration_Estimation_DW.PCIDDA0812_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 4);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Registration_Estimation_DW.PCIDDA0812_IWORK[0]);
      }

      /* registration */
      dacbpcidda0x12(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }
  }

  /* Initialize Sizes */
  Registration_Estimation_M->Sizes.numContStates = (0);/* Number of continuous states */
  Registration_Estimation_M->Sizes.numY = (0);/* Number of model outputs */
  Registration_Estimation_M->Sizes.numU = (0);/* Number of model inputs */
  Registration_Estimation_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Registration_Estimation_M->Sizes.numSampTimes = (1);/* Number of sample times */
  Registration_Estimation_M->Sizes.numBlocks = (65);/* Number of blocks */
  Registration_Estimation_M->Sizes.numBlockIO = (34);/* Number of block outputs */
  Registration_Estimation_M->Sizes.numBlockPrms = (481);/* Sum of parameter "widths" */
  return Registration_Estimation_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
