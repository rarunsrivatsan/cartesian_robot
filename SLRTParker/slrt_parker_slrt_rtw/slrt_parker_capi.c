/*
 * slrt_parker_capi.c
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

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "slrt_parker_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "slrt_parker.h"
#include "slrt_parker_capi.h"
#include "slrt_parker_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("Force Sensor/Byte Unpacking 1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Force Sensor/Receive 1/p1"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 2, 0, TARGET_STRING("Force Sensor/Receive 1/p2"),
    TARGET_STRING(""), 1, 0, 2, 0, 0 },

  { 3, 0, TARGET_STRING("Motor Enable Subsystem/Enable Motors"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 4, 1, TARGET_STRING("PD Inverse Dynamics/Dead Zone1"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 5, 1, TARGET_STRING("PD Inverse Dynamics/Amp Gain"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 6, 1, TARGET_STRING("PD Inverse Dynamics/Inertia Matrix [Kg m^2]"),
    TARGET_STRING("tau_motion"), 0, 0, 3, 0, 0 },

  { 7, 1, TARGET_STRING("PD Inverse Dynamics/Kd [volts*second//rad]"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 8, 1, TARGET_STRING("PD Inverse Dynamics/Kp"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 9, 1, TARGET_STRING("PD Inverse Dynamics/Torque Constant"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 10, 1, TARGET_STRING("PD Inverse Dynamics/Viscous Friction"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 11, 1, TARGET_STRING("PD Inverse Dynamics/m//s^2"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 12, 1, TARGET_STRING("PD Inverse Dynamics/pitch1"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 13, 1, TARGET_STRING("PD Inverse Dynamics/Saturation [-10, 10]"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 14, 1, TARGET_STRING("PD Inverse Dynamics/Add"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 15, 1, TARGET_STRING("PD Inverse Dynamics/Add1"),
    TARGET_STRING("tau"), 0, 0, 3, 0, 0 },

  { 16, 1, TARGET_STRING("PD Inverse Dynamics/Sum"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 17, 1, TARGET_STRING("PD Inverse Dynamics/Sum1"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 18, 0, TARGET_STRING("Scopes/sys_stat"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("Scopes/Product"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 20, 11, TARGET_STRING("Trajectory Planner/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 21, 0, TARGET_STRING("Parker 404XR/Count to Position/Gain_Rads"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 22, 0, TARGET_STRING("Parker 404XR/Count to Position/Rads_mm"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 23, 0, TARGET_STRING("Parker 404XR/Count to Position/Rate Transition"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 24, 0, TARGET_STRING("Parker 404XR/Count to Position/Rate Transition1"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 25, 0, TARGET_STRING("Parker 404XR/Count to Position/Rate Transition2"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 26, 0, TARGET_STRING("Parker 404XR/Count to Position/Add"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 27, 0, TARGET_STRING("Parker 404XR/Count to Position/Subtract"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 28, 0, TARGET_STRING("Parker 404XR/Count to Position/Unit Delay"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 29, 0, TARGET_STRING("Parker 404XR/Plant/Gain"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 30, 0, TARGET_STRING("Parker 404XR/Plant/Logical Operator"),
    TARGET_STRING(""), 0, 2, 3, 0, 0 },

  { 31, 0, TARGET_STRING("Parker 404XR/Plant/1STPORTB "),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 32, 0, TARGET_STRING("Parker 404XR/Plant/1STPORTB 1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 33, 0, TARGET_STRING("Parker 404XR/Plant/1STPORTB 2"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 34, 0, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 35, 0, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 36, 0, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 37, 0, TARGET_STRING("Scopes/EN Record/Compare"),
    TARGET_STRING(""), 0, 2, 2, 0, 0 },

  { 38, 2, TARGET_STRING("Scopes/Enabled Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 39, 2, TARGET_STRING("Scopes/Enabled Subsystem/Gain1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 40, 3, TARGET_STRING("Scopes/File Scope/Gain"),
    TARGET_STRING(""), 0, 0, 5, 0, 0 },

  { 41, 3, TARGET_STRING("Scopes/File Scope/Gain1"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 42, 3, TARGET_STRING("Scopes/File Scope/Gain2"),
    TARGET_STRING(""), 0, 0, 6, 0, 0 },

  { 43, 11, TARGET_STRING("Trajectory Planner/Enable Homing/Compare"),
    TARGET_STRING(""), 0, 2, 2, 0, 0 },

  { 44, 11, TARGET_STRING("Trajectory Planner/Enable Joint/Compare"),
    TARGET_STRING(""), 0, 2, 2, 0, 0 },

  { 45, 4, TARGET_STRING("Trajectory Planner/Homing/Homing Procedure/p1"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 46, 4, TARGET_STRING("Trajectory Planner/Homing/Homing Procedure/p2"),
    TARGET_STRING(""), 1, 0, 3, 0, 0 },

  { 47, 4, TARGET_STRING("Trajectory Planner/Homing/Homing Procedure/p3"),
    TARGET_STRING(""), 2, 0, 3, 0, 0 },

  { 48, 4, TARGET_STRING("Trajectory Planner/Homing/Homing Procedure/p4"),
    TARGET_STRING(""), 3, 0, 2, 0, 0 },

  { 49, 4, TARGET_STRING("Trajectory Planner/Homing/Homing Procedure/p5"),
    TARGET_STRING(""), 4, 0, 7, 0, 0 },

  { 50, 4, TARGET_STRING("Trajectory Planner/Homing/Homing Procedure/p6"),
    TARGET_STRING(""), 5, 0, 2, 0, 0 },

  { 51, 4, TARGET_STRING("Trajectory Planner/Homing/Homing Procedure/p7"),
    TARGET_STRING(""), 6, 0, 2, 0, 0 },

  { 52, 4, TARGET_STRING("Trajectory Planner/Homing/Homing Procedure/p8"),
    TARGET_STRING(""), 7, 0, 3, 0, 0 },

  { 53, 5, TARGET_STRING("Trajectory Planner/Homing/A Delay"),
    TARGET_STRING(""), 0, 0, 7, 0, 0 },

  { 54, 5, TARGET_STRING("Trajectory Planner/Homing/homing ready delay"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 55, 5, TARGET_STRING("Trajectory Planner/Homing/lsf delay"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 56, 5, TARGET_STRING("Trajectory Planner/Homing/qdes Delay"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 57, 5, TARGET_STRING("Trajectory Planner/Homing/status delay"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 58, 9, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/Multiport Switch"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 59, 10, TARGET_STRING("Trajectory Planner/safety check/false detection/p1"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 60, 10, TARGET_STRING("Trajectory Planner/safety check/false detection/p2"),
    TARGET_STRING(""), 1, 0, 2, 0, 0 },

  { 61, 11, TARGET_STRING("Trajectory Planner/safety check/Unit Delay2"),
    TARGET_STRING(""), 0, 0, 4, 0, 0 },

  { 62, 11, TARGET_STRING("Trajectory Planner/safety check/Unit Delay3"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 63, 0, TARGET_STRING("Parker 404XR/Count to Position/Accel Filter/Gain"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 64, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Accel Filter/Discrete FIR Filter"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 65, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Position Filter observer/Gain"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 66, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Position Filter observer/Discrete FIR Filter"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 67, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Position Filter observer1/Gain"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 68, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Position Filter observer1/Discrete FIR Filter"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 69, 0, TARGET_STRING("Parker 404XR/Count to Position/Velocity Filter/Gain"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 70, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Velocity Filter/Discrete FIR Filter"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 71, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Velocity Filter observer/Gain"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 72, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Velocity Filter observer/Discrete FIR Filter"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 73, 5, TARGET_STRING(
    "Trajectory Planner/Homing/N-Sample Switch/N-Sample Enable"),
    TARGET_STRING(""), 0, 2, 2, 0, 0 },

  { 74, 5, TARGET_STRING("Trajectory Planner/Homing/N-Sample Switch/Switch"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 75, 7, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function/p1"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 76, 7, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function/p2"),
    TARGET_STRING(""), 1, 0, 3, 0, 0 },

  { 77, 7, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function/p3"),
    TARGET_STRING(""), 2, 0, 3, 0, 0 },

  { 78, 7, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function/p4"),
    TARGET_STRING(""), 3, 0, 2, 0, 0 },

  { 79, 7, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function/p5"),
    TARGET_STRING(""), 4, 0, 2, 0, 0 },

  { 80, 7, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function/p6"),
    TARGET_STRING(""), 5, 0, 3, 0, 0 },

  { 81, 7, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function/p7"),
    TARGET_STRING(""), 6, 0, 2, 0, 0 },

  { 82, 9, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Digital Clock"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 83, 9, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Unit Delay"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 84, 9, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Unit Delay1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 85, 9, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Unit Delay2"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 86, 9, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/Get_Initial_Condition/Unit Delay"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 87, 8, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/trigger detection/MATLAB Function"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 88, 9, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/trigger detection/Counter"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 89, 9, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/trigger detection/Unit Delay"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 90, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Accel Filter/Discrete Derivative1/Diff"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 91, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Accel Filter/Discrete Derivative1/TSamp"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 92, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Accel Filter/Discrete Derivative1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 3, 0, 0 },

  { 93, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Sample and Hold/Model/Data Type Conversion"),
    TARGET_STRING(""), 0, 2, 2, 0, 0 },

  { 94, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Sample and Hold/Model/Switch"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 95, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Sample and Hold/Model/IC=ic"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 96, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Velocity Filter/Discrete Derivative/Diff"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 97, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Velocity Filter/Discrete Derivative/TSamp"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 98, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Velocity Filter/Discrete Derivative/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 3, 0, 0 },

  { 99, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Velocity Filter observer/Discrete Derivative/Diff"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 100, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Velocity Filter observer/Discrete Derivative/TSamp"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 101, 0, TARGET_STRING(
    "Parker 404XR/Count to Position/Velocity Filter observer/Discrete Derivative/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 3, 0, 0 },

  { 102, 9, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/5th Order Polynomial/N-Sample Switch/N-Sample Enable"),
    TARGET_STRING(""), 0, 2, 2, 0, 0 },

  { 103, 9, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/5th Order Polynomial/N-Sample Switch/Switch"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  { 104, 9, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/Get_Initial_Condition/N-Sample Switch/N-Sample Enable"),
    TARGET_STRING(""), 0, 2, 2, 0, 0 },

  { 105, 9, TARGET_STRING(
    "Trajectory Planner/Quintic Polynomial/Get_Initial_Condition/N-Sample Switch/Switch"),
    TARGET_STRING(""), 0, 0, 3, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 106, TARGET_STRING("Force Sensor/Receive 1"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 107, TARGET_STRING("Force Sensor/Receive 1"),
    TARGET_STRING("P2"), 0, 2, 0 },

  { 108, TARGET_STRING("Force Sensor/Receive 1"),
    TARGET_STRING("P3"), 0, 2, 0 },

  { 109, TARGET_STRING("Force Sensor/Receive 1"),
    TARGET_STRING("P4"), 0, 2, 0 },

  { 110, TARGET_STRING("Force Sensor/Receive 1"),
    TARGET_STRING("P5"), 0, 2, 0 },

  { 111, TARGET_STRING("Motor Enable Subsystem/Enable Motors"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 112, TARGET_STRING("Motor Enable Subsystem/PCI-DDA08 12  to PORTA"),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 113, TARGET_STRING("Motor Enable Subsystem/PCI-DDA08 12  to PORTA"),
    TARGET_STRING("P2"), 0, 2, 0 },

  { 114, TARGET_STRING("Motor Enable Subsystem/PCI-DDA08 12  to PORTA"),
    TARGET_STRING("P3"), 0, 9, 0 },

  { 115, TARGET_STRING("Motor Enable Subsystem/PCI-DDA08 12  to PORTA"),
    TARGET_STRING("P4"), 0, 9, 0 },

  { 116, TARGET_STRING("Motor Enable Subsystem/PCI-DDA08 12  to PORTA"),
    TARGET_STRING("P5"), 0, 9, 0 },

  { 117, TARGET_STRING("Motor Enable Subsystem/PCI-DDA08 12  to PORTA"),
    TARGET_STRING("P6"), 0, 2, 0 },

  { 118, TARGET_STRING("Motor Enable Subsystem/PCI-DDA08 12  to PORTA"),
    TARGET_STRING("P7"), 0, 2, 0 },

  { 119, TARGET_STRING("Motor Enable Subsystem/PCI-DDA08 12  to PORTA"),
    TARGET_STRING("P8"), 0, 2, 0 },

  { 120, TARGET_STRING("Motor Enable Subsystem/PCI-DDA08 12  to PORTA"),
    TARGET_STRING("P9"), 0, 2, 0 },

  { 121, TARGET_STRING("Motor Enable Subsystem/PCI-DDA08 12  to PORTA"),
    TARGET_STRING("P10"), 0, 2, 0 },

  { 122, TARGET_STRING("PD Inverse Dynamics/Dead Zone1"),
    TARGET_STRING("LowerValue"), 0, 2, 0 },

  { 123, TARGET_STRING("PD Inverse Dynamics/Dead Zone1"),
    TARGET_STRING("UpperValue"), 0, 2, 0 },

  { 124, TARGET_STRING("PD Inverse Dynamics/Amp Gain"),
    TARGET_STRING("Gain"), 0, 9, 0 },

  { 125, TARGET_STRING("PD Inverse Dynamics/m//s^2"),
    TARGET_STRING("Gain"), 0, 2, 0 },

  { 126, TARGET_STRING("PD Inverse Dynamics/Saturation [-10, 10]"),
    TARGET_STRING("UpperLimit"), 0, 2, 0 },

  { 127, TARGET_STRING("PD Inverse Dynamics/Saturation [-10, 10]"),
    TARGET_STRING("LowerLimit"), 0, 2, 0 },

  { 128, TARGET_STRING("Scopes/EN Record"),
    TARGET_STRING("const"), 0, 2, 0 },

  { 129, TARGET_STRING("Scopes/DynAna_File_scope"),
    TARGET_STRING("Value"), 0, 2, 0 },

  { 130, TARGET_STRING("Scopes/FT_File_scope"),
    TARGET_STRING("Value"), 0, 2, 0 },

  { 131, TARGET_STRING("Scopes/sys_stat"),
    TARGET_STRING("Gain"), 0, 2, 0 },

  { 132, TARGET_STRING("Trajectory Planner/Enable Homing"),
    TARGET_STRING("const"), 0, 2, 0 },

  { 133, TARGET_STRING("Trajectory Planner/Enable Joint"),
    TARGET_STRING("const"), 0, 2, 0 },

  { 134, TARGET_STRING("Trajectory Planner/Mode"),
    TARGET_STRING("Value"), 0, 2, 0 },

  { 135, TARGET_STRING("Parker 404XR/Count to Position/Sample and Hold"),
    TARGET_STRING("ic"), 0, 3, 0 },

  { 136, TARGET_STRING("Parker 404XR/Count to Position/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 2, 0 },

  { 137, TARGET_STRING("Parker 404XR/Plant/Gain"),
    TARGET_STRING("Gain"), 0, 2, 0 },

  { 138, TARGET_STRING("Parker 404XR/Plant/1STPORTB "),
    TARGET_STRING("P1"), 0, 2, 0 },

  { 139, TARGET_STRING("Parker 404XR/Plant/1STPORTB "),
    TARGET_STRING("P2"), 0, 2, 0 },

  { 140, TARGET_STRING("Parker 404XR/Plant/1STPORTB "),
    TARGET_STRING("P3"), 0, 9, 0 },

  { 141, TARGET_STRING("Parker 404XR/Plant/1STPORTB "),
    TARGET_STRING("P4"), 0, 2, 0 },

  { 142, TARGET_STRING("Parker 404XR/Plant/1STPORTB "),
    TARGET_STRING("P5"), 0, 2, 0 },

  { 143, TARGET_STRING("Parker 404XR/Plant/1STPORTB "),
    TARGET_STRING("P6"), 0, 2, 0 },

  { 144, TARGET_STRING("Parker 404XR/Plant/1STPORTB "),
    TARGET_STRING("P7"), 0, 2, 0 },

  { 145, TARGET_STRING("Parker 404XR/Plant/1STPORTB "),
    TARGET_STRING("P8"), 0, 2, 0 },

  { 146, TARGET_STRING("Parker 404XR/Plant/1STPORTB 1"),
    TARGET_STRING("P1"), 0, 2, 0 },

  { 147, TARGET_STRING("Parker 404XR/Plant/1STPORTB 1"),
    TARGET_STRING("P2"), 0, 2, 0 },

  { 148, TARGET_STRING("Parker 404XR/Plant/1STPORTB 1"),
    TARGET_STRING("P3"), 0, 9, 0 },

  { 149, TARGET_STRING("Parker 404XR/Plant/1STPORTB 1"),
    TARGET_STRING("P4"), 0, 2, 0 },

  { 150, TARGET_STRING("Parker 404XR/Plant/1STPORTB 1"),
    TARGET_STRING("P5"), 0, 2, 0 },

  { 151, TARGET_STRING("Parker 404XR/Plant/1STPORTB 1"),
    TARGET_STRING("P6"), 0, 2, 0 },

  { 152, TARGET_STRING("Parker 404XR/Plant/1STPORTB 1"),
    TARGET_STRING("P7"), 0, 2, 0 },

  { 153, TARGET_STRING("Parker 404XR/Plant/1STPORTB 1"),
    TARGET_STRING("P8"), 0, 2, 0 },

  { 154, TARGET_STRING("Parker 404XR/Plant/1STPORTB 2"),
    TARGET_STRING("P1"), 0, 2, 0 },

  { 155, TARGET_STRING("Parker 404XR/Plant/1STPORTB 2"),
    TARGET_STRING("P2"), 0, 2, 0 },

  { 156, TARGET_STRING("Parker 404XR/Plant/1STPORTB 2"),
    TARGET_STRING("P3"), 0, 9, 0 },

  { 157, TARGET_STRING("Parker 404XR/Plant/1STPORTB 2"),
    TARGET_STRING("P4"), 0, 2, 0 },

  { 158, TARGET_STRING("Parker 404XR/Plant/1STPORTB 2"),
    TARGET_STRING("P5"), 0, 2, 0 },

  { 159, TARGET_STRING("Parker 404XR/Plant/1STPORTB 2"),
    TARGET_STRING("P6"), 0, 2, 0 },

  { 160, TARGET_STRING("Parker 404XR/Plant/1STPORTB 2"),
    TARGET_STRING("P7"), 0, 2, 0 },

  { 161, TARGET_STRING("Parker 404XR/Plant/1STPORTB 2"),
    TARGET_STRING("P8"), 0, 2, 0 },

  { 162, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P1"), 0, 2, 0 },

  { 163, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P2"), 0, 2, 0 },

  { 164, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P3"), 0, 2, 0 },

  { 165, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P4"), 0, 2, 0 },

  { 166, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P5"), 0, 2, 0 },

  { 167, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P6"), 0, 2, 0 },

  { 168, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P7"), 0, 2, 0 },

  { 169, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P8"), 0, 2, 0 },

  { 170, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P9"), 0, 2, 0 },

  { 171, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P10"), 0, 2, 0 },

  { 172, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P11"), 0, 2, 0 },

  { 173, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P12"), 0, 2, 0 },

  { 174, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P13"), 0, 2, 0 },

  { 175, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P14"), 0, 2, 0 },

  { 176, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P15"), 0, 2, 0 },

  { 177, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P16"), 0, 2, 0 },

  { 178, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P17"), 0, 2, 0 },

  { 179, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P18"), 0, 2, 0 },

  { 180, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P19"), 0, 2, 0 },

  { 181, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P20"), 0, 2, 0 },

  { 182, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P21"), 0, 2, 0 },

  { 183, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P22"), 0, 2, 0 },

  { 184, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P23"), 0, 2, 0 },

  { 185, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P24"), 0, 2, 0 },

  { 186, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P25"), 0, 2, 0 },

  { 187, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P26"), 0, 2, 0 },

  { 188, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P27"), 0, 2, 0 },

  { 189, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P28"), 0, 2, 0 },

  { 190, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P29"), 0, 2, 0 },

  { 191, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P30"), 0, 2, 0 },

  { 192, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P31"), 0, 2, 0 },

  { 193, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P32"), 0, 2, 0 },

  { 194, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P33"), 0, 2, 0 },

  { 195, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P34"), 0, 2, 0 },

  { 196, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch1"),
    TARGET_STRING("P35"), 0, 2, 0 },

  { 197, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P1"), 0, 2, 0 },

  { 198, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P2"), 0, 2, 0 },

  { 199, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P3"), 0, 2, 0 },

  { 200, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P4"), 0, 2, 0 },

  { 201, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P5"), 0, 2, 0 },

  { 202, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P6"), 0, 2, 0 },

  { 203, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P7"), 0, 2, 0 },

  { 204, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P8"), 0, 2, 0 },

  { 205, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P9"), 0, 2, 0 },

  { 206, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P10"), 0, 2, 0 },

  { 207, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P11"), 0, 2, 0 },

  { 208, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P12"), 0, 2, 0 },

  { 209, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P13"), 0, 2, 0 },

  { 210, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P14"), 0, 2, 0 },

  { 211, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P15"), 0, 2, 0 },

  { 212, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P16"), 0, 2, 0 },

  { 213, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P17"), 0, 2, 0 },

  { 214, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P18"), 0, 2, 0 },

  { 215, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P19"), 0, 2, 0 },

  { 216, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P20"), 0, 2, 0 },

  { 217, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P21"), 0, 2, 0 },

  { 218, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P22"), 0, 2, 0 },

  { 219, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P23"), 0, 2, 0 },

  { 220, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P24"), 0, 2, 0 },

  { 221, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P25"), 0, 2, 0 },

  { 222, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P26"), 0, 2, 0 },

  { 223, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P27"), 0, 2, 0 },

  { 224, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P28"), 0, 2, 0 },

  { 225, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P29"), 0, 2, 0 },

  { 226, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P30"), 0, 2, 0 },

  { 227, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P31"), 0, 2, 0 },

  { 228, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P32"), 0, 2, 0 },

  { 229, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P33"), 0, 2, 0 },

  { 230, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P34"), 0, 2, 0 },

  { 231, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch2"),
    TARGET_STRING("P35"), 0, 2, 0 },

  { 232, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P1"), 0, 2, 0 },

  { 233, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P2"), 0, 2, 0 },

  { 234, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P3"), 0, 2, 0 },

  { 235, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P4"), 0, 2, 0 },

  { 236, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P5"), 0, 2, 0 },

  { 237, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P6"), 0, 2, 0 },

  { 238, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P7"), 0, 2, 0 },

  { 239, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P8"), 0, 2, 0 },

  { 240, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P9"), 0, 2, 0 },

  { 241, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P10"), 0, 2, 0 },

  { 242, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P11"), 0, 2, 0 },

  { 243, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P12"), 0, 2, 0 },

  { 244, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P13"), 0, 2, 0 },

  { 245, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P14"), 0, 2, 0 },

  { 246, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P15"), 0, 2, 0 },

  { 247, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P16"), 0, 2, 0 },

  { 248, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P17"), 0, 2, 0 },

  { 249, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P18"), 0, 2, 0 },

  { 250, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P19"), 0, 2, 0 },

  { 251, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P20"), 0, 2, 0 },

  { 252, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P21"), 0, 2, 0 },

  { 253, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P22"), 0, 2, 0 },

  { 254, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P23"), 0, 2, 0 },

  { 255, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P24"), 0, 2, 0 },

  { 256, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P25"), 0, 2, 0 },

  { 257, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P26"), 0, 2, 0 },

  { 258, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P27"), 0, 2, 0 },

  { 259, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P28"), 0, 2, 0 },

  { 260, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P29"), 0, 2, 0 },

  { 261, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P30"), 0, 2, 0 },

  { 262, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P31"), 0, 2, 0 },

  { 263, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P32"), 0, 2, 0 },

  { 264, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P33"), 0, 2, 0 },

  { 265, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P34"), 0, 2, 0 },

  { 266, TARGET_STRING("Parker 404XR/Plant/CNT32-8M(PCI) Ch3"),
    TARGET_STRING("P35"), 0, 2, 0 },

  { 267, TARGET_STRING("Parker 404XR/Plant/PCI-DDA08 12 "),
    TARGET_STRING("P1"), 0, 9, 0 },

  { 268, TARGET_STRING("Parker 404XR/Plant/PCI-DDA08 12 "),
    TARGET_STRING("P2"), 0, 9, 0 },

  { 269, TARGET_STRING("Parker 404XR/Plant/PCI-DDA08 12 "),
    TARGET_STRING("P3"), 0, 9, 0 },

  { 270, TARGET_STRING("Parker 404XR/Plant/PCI-DDA08 12 "),
    TARGET_STRING("P4"), 0, 9, 0 },

  { 271, TARGET_STRING("Parker 404XR/Plant/PCI-DDA08 12 "),
    TARGET_STRING("P5"), 0, 2, 0 },

  { 272, TARGET_STRING("Parker 404XR/Plant/PCI-DDA08 12 "),
    TARGET_STRING("P6"), 0, 2, 0 },

  { 273, TARGET_STRING("Parker 404XR/Plant/PCI-DDA08 12 "),
    TARGET_STRING("P7"), 0, 2, 0 },

  { 274, TARGET_STRING("Scopes/Enabled Subsystem/Gain"),
    TARGET_STRING("Gain"), 0, 2, 0 },

  { 275, TARGET_STRING("Scopes/Enabled Subsystem/Gain1"),
    TARGET_STRING("Gain"), 0, 2, 0 },

  { 276, TARGET_STRING("Scopes/File Scope/Gain"),
    TARGET_STRING("Gain"), 0, 2, 0 },

  { 277, TARGET_STRING("Scopes/File Scope/Gain1"),
    TARGET_STRING("Gain"), 0, 2, 0 },

  { 278, TARGET_STRING("Scopes/File Scope/Gain2"),
    TARGET_STRING("Gain"), 0, 2, 0 },

  { 279, TARGET_STRING("Trajectory Planner/Homing/N-Sample Switch"),
    TARGET_STRING("N"), 3, 2, 0 },

  { 280, TARGET_STRING("Trajectory Planner/Homing/A Delay"),
    TARGET_STRING("InitialCondition"), 0, 7, 0 },

  { 281, TARGET_STRING("Trajectory Planner/Homing/homing ready delay"),
    TARGET_STRING("InitialCondition"), 0, 2, 0 },

  { 282, TARGET_STRING("Trajectory Planner/Homing/lsf delay"),
    TARGET_STRING("InitialCondition"), 0, 3, 0 },

  { 283, TARGET_STRING("Trajectory Planner/Homing/qdes Delay"),
    TARGET_STRING("InitialCondition"), 0, 3, 0 },

  { 284, TARGET_STRING("Trajectory Planner/Homing/status delay"),
    TARGET_STRING("InitialCondition"), 0, 2, 0 },

  { 285, TARGET_STRING("Trajectory Planner/Quintic Polynomial/p, pd, pdd"),
    TARGET_STRING("InitialOutput"), 0, 4, 0 },

  { 286, TARGET_STRING("Trajectory Planner/Quintic Polynomial/QuinticRecord"),
    TARGET_STRING("InitialOutput"), 0, 2, 0 },

  { 287, TARGET_STRING("Trajectory Planner/Quintic Polynomial/Manual"),
    TARGET_STRING("Value"), 0, 2, 0 },

  { 288, TARGET_STRING("Trajectory Planner/Quintic Polynomial/enable"),
    TARGET_STRING("Value"), 0, 2, 0 },

  { 289, TARGET_STRING("Trajectory Planner/Quintic Polynomial/q_des"),
    TARGET_STRING("Value"), 0, 3, 0 },

  { 290, TARGET_STRING("Trajectory Planner/safety check/Unit Delay2"),
    TARGET_STRING("InitialCondition"), 0, 4, 0 },

  { 291, TARGET_STRING("Trajectory Planner/safety check/Unit Delay3"),
    TARGET_STRING("InitialCondition"), 0, 2, 0 },

  { 292, TARGET_STRING("Parker 404XR/Count to Position/Accel Filter/Discrete Derivative1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 2, 0 },

  { 293, TARGET_STRING("Parker 404XR/Count to Position/Accel Filter/Discrete FIR Filter"),
    TARGET_STRING("InitialStates"), 0, 2, 0 },

  { 294, TARGET_STRING("Parker 404XR/Count to Position/Position Filter observer/Discrete FIR Filter"),
    TARGET_STRING("InitialStates"), 0, 2, 0 },

  { 295, TARGET_STRING("Parker 404XR/Count to Position/Position Filter observer1/Discrete FIR Filter"),
    TARGET_STRING("InitialStates"), 0, 2, 0 },

  { 296, TARGET_STRING("Parker 404XR/Count to Position/Velocity Filter/Discrete Derivative"),
    TARGET_STRING("ICPrevScaledInput"), 0, 2, 0 },

  { 297, TARGET_STRING("Parker 404XR/Count to Position/Velocity Filter/Discrete FIR Filter"),
    TARGET_STRING("InitialStates"), 0, 2, 0 },

  { 298, TARGET_STRING("Parker 404XR/Count to Position/Velocity Filter observer/Discrete Derivative"),
    TARGET_STRING("ICPrevScaledInput"), 0, 2, 0 },

  { 299, TARGET_STRING("Parker 404XR/Count to Position/Velocity Filter observer/Discrete FIR Filter"),
    TARGET_STRING("InitialStates"), 0, 2, 0 },

  { 300, TARGET_STRING("Trajectory Planner/Homing/N-Sample Switch/N-Sample Enable"),
    TARGET_STRING("ActiveLevel"), 3, 2, 0 },

  { 301, TARGET_STRING("Trajectory Planner/Quintic Polynomial/5th Order Polynomial/N-Sample Switch"),
    TARGET_STRING("N"), 3, 2, 0 },

  { 302, TARGET_STRING("Trajectory Planner/Quintic Polynomial/5th Order Polynomial/tf"),
    TARGET_STRING("Value"), 0, 2, 0 },

  { 303, TARGET_STRING("Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 2, 0 },

  { 304, TARGET_STRING("Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Unit Delay1"),
    TARGET_STRING("InitialCondition"), 0, 2, 0 },

  { 305, TARGET_STRING("Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Unit Delay2"),
    TARGET_STRING("InitialCondition"), 0, 2, 0 },

  { 306, TARGET_STRING("Trajectory Planner/Quintic Polynomial/Get_Initial_Condition/N-Sample Switch"),
    TARGET_STRING("N"), 3, 2, 0 },

  { 307, TARGET_STRING("Trajectory Planner/Quintic Polynomial/Get_Initial_Condition/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 3, 0 },

  { 308, TARGET_STRING("Trajectory Planner/Quintic Polynomial/trigger detection/Counter"),
    TARGET_STRING("InitialCount"), 1, 2, 0 },

  { 309, TARGET_STRING("Trajectory Planner/Quintic Polynomial/trigger detection/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 2, 0 },

  { 310, TARGET_STRING("Parker 404XR/Count to Position/Accel Filter/Discrete Derivative1/TSamp"),
    TARGET_STRING("WtEt"), 0, 2, 0 },

  { 311, TARGET_STRING("Parker 404XR/Count to Position/Velocity Filter/Discrete Derivative/TSamp"),
    TARGET_STRING("WtEt"), 0, 2, 0 },

  { 312, TARGET_STRING("Parker 404XR/Count to Position/Velocity Filter observer/Discrete Derivative/TSamp"),
    TARGET_STRING("WtEt"), 0, 2, 0 },

  { 313, TARGET_STRING("Trajectory Planner/Quintic Polynomial/5th Order Polynomial/N-Sample Switch/N-Sample Enable"),
    TARGET_STRING("ActiveLevel"), 3, 2, 0 },

  { 314, TARGET_STRING("Trajectory Planner/Quintic Polynomial/Get_Initial_Condition/N-Sample Switch/N-Sample Enable"),
    TARGET_STRING("ActiveLevel"), 3, 2, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 315, TARGET_STRING("B"), 0, 10, 0 },

  { 316, TARGET_STRING("ENC_obs_filter_coeffs"), 0, 2, 0 },

  { 317, TARGET_STRING("F"), 0, 10, 0 },

  { 318, TARGET_STRING("HOMING_Vmov"), 0, 3, 0 },

  { 319, TARGET_STRING("HOMING_dx"), 0, 3, 0 },

  { 320, TARGET_STRING("HOMING_tspan"), 0, 2, 0 },

  { 321, TARGET_STRING("Kd"), 0, 10, 0 },

  { 322, TARGET_STRING("Kp"), 0, 10, 0 },

  { 323, TARGET_STRING("N_ENC_obs_filter"), 0, 2, 0 },

  { 324, TARGET_STRING("N_acceleration"), 0, 2, 0 },

  { 325, TARGET_STRING("N_obs_velocity"), 0, 2, 0 },

  { 326, TARGET_STRING("N_velocity"), 0, 2, 0 },

  { 327, TARGET_STRING("accel_filter_coeffs"), 0, 0, 0 },

  { 328, TARGET_STRING("counter_offset"), 0, 2, 0 },

  { 329, TARGET_STRING("dt"), 0, 2, 0 },

  { 330, TARGET_STRING("encoder_counts"), 0, 2, 0 },

  { 331, TARGET_STRING("grav_vector"), 0, 3, 0 },

  { 332, TARGET_STRING("pitch"), 0, 2, 0 },

  { 333, TARGET_STRING("quadrature_mode"), 0, 2, 0 },

  { 334, TARGET_STRING("screw_pitch"), 0, 2, 0 },

  { 335, TARGET_STRING("torque_constant"), 0, 2, 0 },

  { 336, TARGET_STRING("vel_filter_coeffs"), 0, 0, 0 },

  { 337, TARGET_STRING("vel_obs_filter_coeffs"), 0, 0, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &slrt_parker_B.ByteUnpacking1[0],    /* 0: Signal */
  &slrt_parker_B.Receive1_o1[0],       /* 1: Signal */
  &slrt_parker_B.Receive1_o2,          /* 2: Signal */
  &slrt_parker_B.EnableMotors[0],      /* 3: Signal */
  &slrt_parker_B.DeadZone1[0],         /* 4: Signal */
  &slrt_parker_B.AmpGain[0],           /* 5: Signal */
  &slrt_parker_B.tau_motion[0],        /* 6: Signal */
  &slrt_parker_B.Kdvoltssecondrad[0],  /* 7: Signal */
  &slrt_parker_B.Kp[0],                /* 8: Signal */
  &slrt_parker_B.TorqueConstant[0],    /* 9: Signal */
  &slrt_parker_B.ViscousFriction[0],   /* 10: Signal */
  &slrt_parker_B.ms2[0],               /* 11: Signal */
  &slrt_parker_B.pitch1[0],            /* 12: Signal */
  &slrt_parker_B.Saturation1010[0],    /* 13: Signal */
  &slrt_parker_B.Add_e[0],             /* 14: Signal */
  &slrt_parker_B.tau[0],               /* 15: Signal */
  &slrt_parker_B.Sum[0],               /* 16: Signal */
  &slrt_parker_B.Sum1[0],              /* 17: Signal */
  &slrt_parker_B.sys_stat[0],          /* 18: Signal */
  &slrt_parker_B.Product,              /* 19: Signal */
  &slrt_parker_B.MultiportSwitch[0],   /* 20: Signal */
  &slrt_parker_B.Gain_Rads[0],         /* 21: Signal */
  &slrt_parker_B.Rads_mm[0],           /* 22: Signal */
  &slrt_parker_B.RateTransition[0],    /* 23: Signal */
  &slrt_parker_B.RateTransition1[0],   /* 24: Signal */
  &slrt_parker_B.RateTransition2[0],   /* 25: Signal */
  &slrt_parker_B.Add[0],               /* 26: Signal */
  &slrt_parker_B.Subtract[0],          /* 27: Signal */
  &slrt_parker_B.UnitDelay[0],         /* 28: Signal */
  &slrt_parker_B.Gain_l,               /* 29: Signal */
  &slrt_parker_B.LogicalOperator[0],   /* 30: Signal */
  &slrt_parker_B.uSTPORTB,             /* 31: Signal */
  &slrt_parker_B.uSTPORTB1,            /* 32: Signal */
  &slrt_parker_B.uSTPORTB2,            /* 33: Signal */
  &slrt_parker_B.CNT328MPCICh1,        /* 34: Signal */
  &slrt_parker_B.CNT328MPCICh2,        /* 35: Signal */
  &slrt_parker_B.CNT328MPCICh3,        /* 36: Signal */
  &slrt_parker_B.Compare,              /* 37: Signal */
  &slrt_parker_B.Gain_a[0],            /* 38: Signal */
  &slrt_parker_B.Gain1_i,              /* 39: Signal */
  &slrt_parker_B.Gain_p[0],            /* 40: Signal */
  &slrt_parker_B.Gain1[0],             /* 41: Signal */
  &slrt_parker_B.Gain2[0],             /* 42: Signal */
  &slrt_parker_B.Compare_h,            /* 43: Signal */
  &slrt_parker_B.Compare_m,            /* 44: Signal */
  &slrt_parker_B.q_des[0],             /* 45: Signal */
  &slrt_parker_B.qd_des[0],            /* 46: Signal */
  &slrt_parker_B.qdd_des[0],           /* 47: Signal */
  &slrt_parker_B.ready,                /* 48: Signal */
  &slrt_parker_B.A_out[0],             /* 49: Signal */
  &slrt_parker_B.cur_status,           /* 50: Signal */
  &slrt_parker_B.reset,                /* 51: Signal */
  &slrt_parker_B.lsf_out[0],           /* 52: Signal */
  &slrt_parker_B.ADelay[0],            /* 53: Signal */
  &slrt_parker_B.homingreadydelay,     /* 54: Signal */
  &slrt_parker_B.lsfdelay[0],          /* 55: Signal */
  &slrt_parker_B.qdesDelay[0],         /* 56: Signal */
  &slrt_parker_B.statusdelay,          /* 57: Signal */
  &slrt_parker_B.MultiportSwitch_k[0], /* 58: Signal */
  &slrt_parker_B.pva_allowed[0],       /* 59: Signal */
  &slrt_parker_B.error_flag,           /* 60: Signal */
  &slrt_parker_B.UnitDelay2[0],        /* 61: Signal */
  &slrt_parker_B.UnitDelay3,           /* 62: Signal */
  &slrt_parker_B.Gain_o[0],            /* 63: Signal */
  &slrt_parker_B.DiscreteFIRFilter_k[0],/* 64: Signal */
  &slrt_parker_B.Gain_m[0],            /* 65: Signal */
  &slrt_parker_B.DiscreteFIRFilter_b[0],/* 66: Signal */
  &slrt_parker_B.Gain[0],              /* 67: Signal */
  &slrt_parker_B.DiscreteFIRFilter[0], /* 68: Signal */
  &slrt_parker_B.Gain_c[0],            /* 69: Signal */
  &slrt_parker_B.DiscreteFIRFilter_m[0],/* 70: Signal */
  &slrt_parker_B.Gain_b[0],            /* 71: Signal */
  &slrt_parker_B.DiscreteFIRFilter_g[0],/* 72: Signal */
  &slrt_parker_B.NSampleEnable_e,      /* 73: Signal */
  &slrt_parker_B.Switch_p[0],          /* 74: Signal */
  &slrt_parker_B.p[0],                 /* 75: Signal */
  &slrt_parker_B.pdot[0],              /* 76: Signal */
  &slrt_parker_B.pdotdot[0],           /* 77: Signal */
  &slrt_parker_B.confn,                /* 78: Signal */
  &slrt_parker_B.t0n,                  /* 79: Signal */
  &slrt_parker_B.p0n[0],               /* 80: Signal */
  &slrt_parker_B.RECORD,               /* 81: Signal */
  &slrt_parker_B.DigitalClock,         /* 82: Signal */
  &slrt_parker_B.UnitDelay_g,          /* 83: Signal */
  &slrt_parker_B.UnitDelay1,           /* 84: Signal */
  &slrt_parker_B.UnitDelay2_j[0],      /* 85: Signal */
  &slrt_parker_B.UnitDelay_h[0],       /* 86: Signal */
  &slrt_parker_B.enable,               /* 87: Signal */
  &slrt_parker_B.Counter,              /* 88: Signal */
  &slrt_parker_B.UnitDelay_f,          /* 89: Signal */
  &slrt_parker_B.Diff_o[0],            /* 90: Signal */
  &slrt_parker_B.TSamp_p[0],           /* 91: Signal */
  &slrt_parker_B.Uk1_c[0],             /* 92: Signal */
  &slrt_parker_B.DataTypeConversion,   /* 93: Signal */
  &slrt_parker_B.Switch[0],            /* 94: Signal */
  &slrt_parker_B.ICic[0],              /* 95: Signal */
  &slrt_parker_B.Diff[0],              /* 96: Signal */
  &slrt_parker_B.TSamp[0],             /* 97: Signal */
  &slrt_parker_B.Uk1[0],               /* 98: Signal */
  &slrt_parker_B.Diff_h[0],            /* 99: Signal */
  &slrt_parker_B.TSamp_b[0],           /* 100: Signal */
  &slrt_parker_B.Uk1_o[0],             /* 101: Signal */
  &slrt_parker_B.NSampleEnable_p,      /* 102: Signal */
  &slrt_parker_B.Switch_b[0],          /* 103: Signal */
  &slrt_parker_B.NSampleEnable,        /* 104: Signal */
  &slrt_parker_B.Switch_f[0],          /* 105: Signal */
  &slrt_parker_P.Receive1_P1[0],       /* 106: Block Parameter */
  &slrt_parker_P.Receive1_P2,          /* 107: Block Parameter */
  &slrt_parker_P.Receive1_P3,          /* 108: Block Parameter */
  &slrt_parker_P.Receive1_P4,          /* 109: Block Parameter */
  &slrt_parker_P.Receive1_P5,          /* 110: Block Parameter */
  &slrt_parker_P.EnableMotors_Value[0],/* 111: Block Parameter */
  &slrt_parker_P.PCIDDA0812toPORTA_P1[0],/* 112: Block Parameter */
  &slrt_parker_P.PCIDDA0812toPORTA_P2, /* 113: Block Parameter */
  &slrt_parker_P.PCIDDA0812toPORTA_P3[0],/* 114: Block Parameter */
  &slrt_parker_P.PCIDDA0812toPORTA_P4[0],/* 115: Block Parameter */
  &slrt_parker_P.PCIDDA0812toPORTA_P5[0],/* 116: Block Parameter */
  &slrt_parker_P.PCIDDA0812toPORTA_P6, /* 117: Block Parameter */
  &slrt_parker_P.PCIDDA0812toPORTA_P7, /* 118: Block Parameter */
  &slrt_parker_P.PCIDDA0812toPORTA_P8, /* 119: Block Parameter */
  &slrt_parker_P.PCIDDA0812toPORTA_P9, /* 120: Block Parameter */
  &slrt_parker_P.PCIDDA0812toPORTA_P10,/* 121: Block Parameter */
  &slrt_parker_P.DeadZone1_Start,      /* 122: Block Parameter */
  &slrt_parker_P.DeadZone1_End,        /* 123: Block Parameter */
  &slrt_parker_P.AmpGain_Gain[0],      /* 124: Block Parameter */
  &slrt_parker_P.ms2_Gain,             /* 125: Block Parameter */
  &slrt_parker_P.Saturation1010_UpperSat,/* 126: Block Parameter */
  &slrt_parker_P.Saturation1010_LowerSat,/* 127: Block Parameter */
  &slrt_parker_P.ENRecord_const,       /* 128: Mask Parameter */
  &slrt_parker_P.DynAna_File_scope_Value,/* 129: Block Parameter */
  &slrt_parker_P.FT_File_scope_Value,  /* 130: Block Parameter */
  &slrt_parker_P.sys_stat_Gain,        /* 131: Block Parameter */
  &slrt_parker_P.EnableHoming_const,   /* 132: Mask Parameter */
  &slrt_parker_P.EnableJoint_const,    /* 133: Mask Parameter */
  &slrt_parker_P.Mode_Value,           /* 134: Block Parameter */
  &slrt_parker_P.SampleandHold_ic[0],  /* 135: Mask Parameter */
  &slrt_parker_P.UnitDelay_InitialCondition_o,/* 136: Block Parameter */
  &slrt_parker_P.Gain_Gain_a,          /* 137: Block Parameter */
  &slrt_parker_P.uSTPORTB_P1,          /* 138: Block Parameter */
  &slrt_parker_P.uSTPORTB_P2,          /* 139: Block Parameter */
  &slrt_parker_P.uSTPORTB_P3[0],       /* 140: Block Parameter */
  &slrt_parker_P.uSTPORTB_P4,          /* 141: Block Parameter */
  &slrt_parker_P.uSTPORTB_P5,          /* 142: Block Parameter */
  &slrt_parker_P.uSTPORTB_P6,          /* 143: Block Parameter */
  &slrt_parker_P.uSTPORTB_P7,          /* 144: Block Parameter */
  &slrt_parker_P.uSTPORTB_P8,          /* 145: Block Parameter */
  &slrt_parker_P.uSTPORTB1_P1,         /* 146: Block Parameter */
  &slrt_parker_P.uSTPORTB1_P2,         /* 147: Block Parameter */
  &slrt_parker_P.uSTPORTB1_P3[0],      /* 148: Block Parameter */
  &slrt_parker_P.uSTPORTB1_P4,         /* 149: Block Parameter */
  &slrt_parker_P.uSTPORTB1_P5,         /* 150: Block Parameter */
  &slrt_parker_P.uSTPORTB1_P6,         /* 151: Block Parameter */
  &slrt_parker_P.uSTPORTB1_P7,         /* 152: Block Parameter */
  &slrt_parker_P.uSTPORTB1_P8,         /* 153: Block Parameter */
  &slrt_parker_P.uSTPORTB2_P1,         /* 154: Block Parameter */
  &slrt_parker_P.uSTPORTB2_P2,         /* 155: Block Parameter */
  &slrt_parker_P.uSTPORTB2_P3[0],      /* 156: Block Parameter */
  &slrt_parker_P.uSTPORTB2_P4,         /* 157: Block Parameter */
  &slrt_parker_P.uSTPORTB2_P5,         /* 158: Block Parameter */
  &slrt_parker_P.uSTPORTB2_P6,         /* 159: Block Parameter */
  &slrt_parker_P.uSTPORTB2_P7,         /* 160: Block Parameter */
  &slrt_parker_P.uSTPORTB2_P8,         /* 161: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P1,     /* 162: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P2,     /* 163: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P3,     /* 164: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P4,     /* 165: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P5,     /* 166: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P6,     /* 167: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P7,     /* 168: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P8,     /* 169: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P9,     /* 170: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P10,    /* 171: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P11,    /* 172: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P12,    /* 173: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P13,    /* 174: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P14,    /* 175: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P15,    /* 176: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P16,    /* 177: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P17,    /* 178: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P18,    /* 179: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P19,    /* 180: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P20,    /* 181: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P21,    /* 182: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P22,    /* 183: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P23,    /* 184: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P24,    /* 185: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P25,    /* 186: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P26,    /* 187: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P27,    /* 188: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P28,    /* 189: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P29,    /* 190: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P30,    /* 191: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P31,    /* 192: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P32,    /* 193: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P33,    /* 194: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P34,    /* 195: Block Parameter */
  &slrt_parker_P.CNT328MPCICh1_P35,    /* 196: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P1,     /* 197: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P2,     /* 198: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P3,     /* 199: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P4,     /* 200: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P5,     /* 201: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P6,     /* 202: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P7,     /* 203: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P8,     /* 204: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P9,     /* 205: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P10,    /* 206: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P11,    /* 207: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P12,    /* 208: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P13,    /* 209: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P14,    /* 210: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P15,    /* 211: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P16,    /* 212: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P17,    /* 213: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P18,    /* 214: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P19,    /* 215: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P20,    /* 216: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P21,    /* 217: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P22,    /* 218: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P23,    /* 219: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P24,    /* 220: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P25,    /* 221: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P26,    /* 222: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P27,    /* 223: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P28,    /* 224: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P29,    /* 225: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P30,    /* 226: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P31,    /* 227: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P32,    /* 228: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P33,    /* 229: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P34,    /* 230: Block Parameter */
  &slrt_parker_P.CNT328MPCICh2_P35,    /* 231: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P1,     /* 232: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P2,     /* 233: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P3,     /* 234: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P4,     /* 235: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P5,     /* 236: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P6,     /* 237: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P7,     /* 238: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P8,     /* 239: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P9,     /* 240: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P10,    /* 241: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P11,    /* 242: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P12,    /* 243: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P13,    /* 244: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P14,    /* 245: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P15,    /* 246: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P16,    /* 247: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P17,    /* 248: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P18,    /* 249: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P19,    /* 250: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P20,    /* 251: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P21,    /* 252: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P22,    /* 253: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P23,    /* 254: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P24,    /* 255: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P25,    /* 256: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P26,    /* 257: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P27,    /* 258: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P28,    /* 259: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P29,    /* 260: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P30,    /* 261: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P31,    /* 262: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P32,    /* 263: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P33,    /* 264: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P34,    /* 265: Block Parameter */
  &slrt_parker_P.CNT328MPCICh3_P35,    /* 266: Block Parameter */
  &slrt_parker_P.PCIDDA0812_P1[0],     /* 267: Block Parameter */
  &slrt_parker_P.PCIDDA0812_P2[0],     /* 268: Block Parameter */
  &slrt_parker_P.PCIDDA0812_P3[0],     /* 269: Block Parameter */
  &slrt_parker_P.PCIDDA0812_P4[0],     /* 270: Block Parameter */
  &slrt_parker_P.PCIDDA0812_P5,        /* 271: Block Parameter */
  &slrt_parker_P.PCIDDA0812_P6,        /* 272: Block Parameter */
  &slrt_parker_P.PCIDDA0812_P7,        /* 273: Block Parameter */
  &slrt_parker_P.Gain_Gain,            /* 274: Block Parameter */
  &slrt_parker_P.Gain1_Gain,           /* 275: Block Parameter */
  &slrt_parker_P.Gain_Gain_f,          /* 276: Block Parameter */
  &slrt_parker_P.Gain1_Gain_d,         /* 277: Block Parameter */
  &slrt_parker_P.Gain2_Gain,           /* 278: Block Parameter */
  &slrt_parker_P.NSampleSwitch_N,      /* 279: Mask Parameter */
  &slrt_parker_P.ADelay_InitialCondition[0],/* 280: Block Parameter */
  &slrt_parker_P.homingreadydelay_InitialConditi,/* 281: Block Parameter */
  &slrt_parker_P.lsfdelay_InitialCondition[0],/* 282: Block Parameter */
  &slrt_parker_P.qdesDelay_InitialCondition[0],/* 283: Block Parameter */
  &slrt_parker_P.statusdelay_InitialCondition,/* 284: Block Parameter */
  &slrt_parker_P.ppdpdd_Y0[0],         /* 285: Block Parameter */
  &slrt_parker_P.QuinticRecord_Y0,     /* 286: Block Parameter */
  &slrt_parker_P.Manual_Value,         /* 287: Block Parameter */
  &slrt_parker_P.enable_Value,         /* 288: Block Parameter */
  &slrt_parker_P.q_des_Value[0],       /* 289: Block Parameter */
  &slrt_parker_P.UnitDelay2_InitialCondition_n[0],/* 290: Block Parameter */
  &slrt_parker_P.UnitDelay3_InitialCondition,/* 291: Block Parameter */
  &slrt_parker_P.DiscreteDerivative1_ICPrevScale,/* 292: Mask Parameter */
  &slrt_parker_P.DiscreteFIRFilter_InitialSta_ew,/* 293: Block Parameter */
  &slrt_parker_P.DiscreteFIRFilter_InitialStat_e,/* 294: Block Parameter */
  &slrt_parker_P.DiscreteFIRFilter_InitialStates,/* 295: Block Parameter */
  &slrt_parker_P.DiscreteDerivative_ICPrevScaled,/* 296: Mask Parameter */
  &slrt_parker_P.DiscreteFIRFilter_InitialStat_b,/* 297: Block Parameter */
  &slrt_parker_P.DiscreteDerivative_ICPrevScal_e,/* 298: Mask Parameter */
  &slrt_parker_P.DiscreteFIRFilter_InitialStat_p,/* 299: Block Parameter */
  &slrt_parker_P.NSampleEnable_ActiveLevel,/* 300: Block Parameter */
  &slrt_parker_P.NSampleSwitch_N_l,    /* 301: Mask Parameter */
  &slrt_parker_P.tf_Value,             /* 302: Block Parameter */
  &slrt_parker_P.UnitDelay_InitialCondition_l,/* 303: Block Parameter */
  &slrt_parker_P.UnitDelay1_InitialCondition,/* 304: Block Parameter */
  &slrt_parker_P.UnitDelay2_InitialCondition,/* 305: Block Parameter */
  &slrt_parker_P.NSampleSwitch_N_p,    /* 306: Mask Parameter */
  &slrt_parker_P.UnitDelay_InitialCondition_h[0],/* 307: Block Parameter */
  &slrt_parker_P.Counter_InitialCount, /* 308: Block Parameter */
  &slrt_parker_P.UnitDelay_InitialCondition,/* 309: Block Parameter */
  &slrt_parker_P.TSamp_WtEt_f,         /* 310: Block Parameter */
  &slrt_parker_P.TSamp_WtEt,           /* 311: Block Parameter */
  &slrt_parker_P.TSamp_WtEt_o,         /* 312: Block Parameter */
  &slrt_parker_P.NSampleEnable_ActiveLevel_be,/* 313: Block Parameter */
  &slrt_parker_P.NSampleEnable_ActiveLevel_b,/* 314: Block Parameter */
  &slrt_parker_P.B[0],                 /* 315: Model Parameter */
  &slrt_parker_P.ENC_obs_filter_coeffs,/* 316: Model Parameter */
  &slrt_parker_P.F[0],                 /* 317: Model Parameter */
  &slrt_parker_P.HOMING_Vmov[0],       /* 318: Model Parameter */
  &slrt_parker_P.HOMING_dx[0],         /* 319: Model Parameter */
  &slrt_parker_P.HOMING_tspan,         /* 320: Model Parameter */
  &slrt_parker_P.Kd[0],                /* 321: Model Parameter */
  &slrt_parker_P.Kp[0],                /* 322: Model Parameter */
  &slrt_parker_P.N_ENC_obs_filter,     /* 323: Model Parameter */
  &slrt_parker_P.N_acceleration,       /* 324: Model Parameter */
  &slrt_parker_P.N_obs_velocity,       /* 325: Model Parameter */
  &slrt_parker_P.N_velocity,           /* 326: Model Parameter */
  &slrt_parker_P.accel_filter_coeffs[0],/* 327: Model Parameter */
  &slrt_parker_P.counter_offset,       /* 328: Model Parameter */
  &slrt_parker_P.dt,                   /* 329: Model Parameter */
  &slrt_parker_P.encoder_counts,       /* 330: Model Parameter */
  &slrt_parker_P.grav_vector[0],       /* 331: Model Parameter */
  &slrt_parker_P.pitch,                /* 332: Model Parameter */
  &slrt_parker_P.quadrature_mode,      /* 333: Model Parameter */
  &slrt_parker_P.screw_pitch,          /* 334: Model Parameter */
  &slrt_parker_P.torque_constant,      /* 335: Model Parameter */
  &slrt_parker_P.vel_filter_coeffs[0], /* 336: Model Parameter */
  &slrt_parker_P.vel_obs_filter_coeffs[0],/* 337: Model Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_VECTOR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_SCALAR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 16, 2, 0 },

  { rtwCAPI_VECTOR, 18, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 20, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  6,                                   /* 0 */
  1,                                   /* 1 */
  48,                                  /* 2 */
  1,                                   /* 3 */
  1,                                   /* 4 */
  1,                                   /* 5 */
  3,                                   /* 6 */
  1,                                   /* 7 */
  9,                                   /* 8 */
  1,                                   /* 9 */
  7,                                   /* 10 */
  1,                                   /* 11 */
  10,                                  /* 12 */
  1,                                   /* 13 */
  3,                                   /* 14 */
  4,                                   /* 15 */
  1,                                   /* 16 */
  11,                                  /* 17 */
  1,                                   /* 18 */
  3,                                   /* 19 */
  3,                                   /* 20 */
  3                                    /* 21 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.001, 0.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    0, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 106,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 209,
    rtModelParameters, 23 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 283823225U,
    2875096504U,
    2392352108U,
    2789671135U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  slrt_parker_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void slrt_parker_InitializeDataMapInfo(RT_MODEL_slrt_parker_T *const
  slrt_parker_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(slrt_parker_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(slrt_parker_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(slrt_parker_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(slrt_parker_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(slrt_parker_M->DataMapInfo.mmi, rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  slrt_parker_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (slrt_parker_M);
  slrt_parker_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof(P_slrt_parker_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(slrt_parker_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(slrt_parker_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(slrt_parker_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void slrt_parker_host_InitializeDataMapInfo(slrt_parker_host_DataMapInfo_T
    *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: slrt_parker_capi.c */
