/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystem_private.h
 *
 * Code generated for Simulink model 'flightControlSystem'.
 *
 * Model version                  : 1.531
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Jul 25 12:21:03 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_flightControlSystem_private_h_
#define RTW_HEADER_flightControlSystem_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "flightControlSystem.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

extern real32_T rt_powf_snf(real32_T u0, real32_T u1);
extern void flightControlSystem_Geofencingerror(uint8_T *rty_Out1,
  P_Geofencingerror_flightControlSystem_T *localP);
extern void flightControlSystem_Logging_SetupRTR(RT_MODEL_flightControlSystem_T *
  const flightControlSystem_M, DW_Logging_flightControlSystem_T *localDW);
extern void flightControlSystem_Logging(RT_MODEL_flightControlSystem_T * const
  flightControlSystem_M, const real32_T rtu_motorCmds[4], real32_T
  rtu_error_in_Inport_2, real32_T rtu_error_in_Inport_2_k, real32_T
  rtu_error_in_Inport_2_o, const real32_T rtu_error_in_Inport_2_m[2], const
  real32_T rtu_error_in_Inport_2_c[2], const real32_T rtu_error_in_Inport_2_g[2],
  const real32_T rtu_error_in_Inport_2_b[2], const real32_T
  rtu_error_in_Inport_2_kt[2], const real32_T rtu_error_in_Inport_2_l[2],
  real32_T rtu_error_in_Inport_2_i, real32_T rtu_error_in_Inport_2_me, real32_T
  rtu_error_in_Inport_2_d, const real32_T rtu_estimatedStates[2], real32_T
  rtu_estimatedStates_j, const real32_T rtu_estimatedStates_p[3], const real32_T
  rtu_estimatedStates_l[2], real32_T rtu_estimatedStates_f, const real32_T
  rtu_estimatedStates_k[3], const CommandBus
  *rtu_ReferenceValueServerBus_Inport_4, const boolean_T rtu_optical_flags[5],
  const real32_T rtu_mocap[24], real32_T rtu_mocap_f, const boolean_T
  rtu_sonar_flags[5], const real32_T rtu_imu_in_Inport_8[3], const real32_T
  rtu_imu_in_Inport_8_p[2], real32_T rtu_imu_in_Inport_8_h, const real32_T
  rtu_alt[2], const real32_T rtu_calibration[8], B_Logging_flightControlSystem_T
  *localB, DW_Logging_flightControlSystem_T *localDW);
extern void flightControlSystem_Send(const real32_T rtu_IMU[3], const real32_T
  rtu_SensorCalibration[8], const real32_T rtu_MotorCommands[4], const real32_T
  rtu_States[3], const real32_T rtu_States_l[2], real32_T rtu_States_m, const
  real32_T rtu_States_d[3], real32_T rty_SendUDP[20],
  P_Send_flightControlSystem_T *localP);
extern void flightControlSystem_FlightControlSystem_SetupRTR
  (RT_MODEL_flightControlSystem_T * const flightControlSystem_M,
   DW_FlightControlSystem_flightControlSystem_T *localDW);
extern void flightControlSystem_FlightControlSystem_Init
  (B_FlightControlSystem_flightControlSystem_T *localB,
   DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP);
extern void flightControlSystem_FlightControlSystem
  (RT_MODEL_flightControlSystem_T * const flightControlSystem_M, const
   CommandBus *rtu_ReferenceValueServerCmds, const SensorsBus *rtu_Sensors,
   const real32_T rtu_mocapdata[24], uint16_T rtu_mocapsize, real32_T
   rty_motorCmds[4], uint8_T *rty_Flag, real32_T rty_SendUDP[20],
   B_FlightControlSystem_flightControlSystem_T *localB,
   DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP);

#endif                           /* RTW_HEADER_flightControlSystem_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
