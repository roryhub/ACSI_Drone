/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: communicationFlightControlSystem_private.h
 *
 * Code generated for Simulink model 'communicationFlightControlSystem'.
 *
 * Model version                  : 1.214
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Wed May 22 14:02:07 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_communicationFlightControlSystem_private_h_
#define RTW_HEADER_communicationFlightControlSystem_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "communicationFlightControlSystem.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

/* Used by FromWorkspace Block: '<S3>/fromWS_Signal 1' */
#ifndef rtInterpolate
# define rtInterpolate(v1,v2,f1,f2)    (((v1)==(v2))?((double)(v1)): (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif

#ifndef rtRound
# define rtRound(v)                    ( ((v) >= 0) ? floor((v) + 0.5) : ceil((v) - 0.5) )
#endif

extern const int32_T rtCP_pooled_JTeu8W9IxEfI[8];

#define rtCP_BlobAnalysis_WALKER_RTP   rtCP_pooled_JTeu8W9IxEfI  /* Computed Parameter: rtCP_BlobAnalysis_WALKER_RTP
                                                                  * Referenced by: '<S2>/Blob Analysis'
                                                                  */

/* Imported (extern) pointer block signals */
extern uint8_T *imRGB;                 /* '<Root>/Image Data' */
extern void communicationFlightControlSystem_Geofencingerror(uint8_T *rty_Out1,
  P_Geofencingerror_communicationFlightControlSystem_T *localP);
extern void communicationFlightControlSystem_Logging_SetupRTR
  (RT_MODEL_communicationFlightControlSystem_T * const
   communicationFlightControlSystem_M,
   DW_Logging_communicationFlightControlSystem_T *localDW);
extern void communicationFlightControlSystem_Logging
  (RT_MODEL_communicationFlightControlSystem_T * const
   communicationFlightControlSystem_M, const real32_T rtu_motorCmds[4], const
   real32_T rtu_posRef[8], const statesEstim_t *rtu_states_estim_Inport_3, const
   CommandBus *rtu_ReferenceValueServerBus_Inport_4, const SensorsBus
   *rtu_Sensors_Inport_5, real32_T rtu_sensordata_datin_Inport_6, uint32_T
   rtu_sensordata_datin_Inport_6_d, real32_T rtu_sensordata_datin_Inport_6_e,
   real32_T rtu_sensordata_datin_Inport_6_c, real32_T
   rtu_sensordata_datin_Inport_6_cg, real32_T rtu_sensordata_datin_Inport_6_i,
   real32_T rtu_sensordata_datin_Inport_6_h, real32_T
   rtu_sensordata_datin_Inport_6_b, real32_T rtu_sensordata_datin_Inport_6_dz,
   real32_T rtu_sensordata_datin_Inport_6_n,
   B_Logging_communicationFlightControlSystem_T *localB,
   DW_Logging_communicationFlightControlSystem_T *localDW);
extern void communicationFlightControlSyst_FlightControlSystem_SetupRTR
  (RT_MODEL_communicationFlightControlSystem_T * const
   communicationFlightControlSystem_M,
   DW_FlightControlSystem_communicationFlightControlSystem_T *localDW);
extern void communicationFlightControlSystem_FlightControlSystem_Init(uint8_T
  *rty_Flag, DW_FlightControlSystem_communicationFlightControlSystem_T *localDW,
  P_FlightControlSystem_communicationFlightControlSystem_T *localP);
extern void communicationFlightControlSystem_FlightControlSystem
  (RT_MODEL_communicationFlightControlSystem_T * const
   communicationFlightControlSystem_M, const CommandBus
   *rtu_ReferenceValueServerCmds, const SensorsBus *rtu_Sensors, real_T
   rtu_VisionbasedData, real32_T rty_motorCmds[4], uint8_T *rty_Flag,
   B_FlightControlSystem_communicationFlightControlSystem_T *localB,
   DW_FlightControlSystem_communicationFlightControlSystem_T *localDW,
   P_FlightControlSystem_communicationFlightControlSystem_T *localP);

#endif              /* RTW_HEADER_communicationFlightControlSystem_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
