/*
 * stateEstimator_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "stateEstimator".
 *
 * Model version              : 1.49
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C source code generated on : Wed May 22 13:06:18 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_stateEstimator_private_h_
#define RTW_HEADER_stateEstimator_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
# define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

extern const real_T rtCP_pooled_OlAt8KbpQEG0[3];
extern const real32_T rtCP_pooled_kqUvCpwgnPyl[4];
extern const real32_T rtCP_pooled_adLCBuYxtU1Q[6];
extern const real32_T rtCP_pooled_VH0dmwbCQMUq[6];
extern const real32_T rtCP_pooled_KvfM2cKww6Wz[6];
extern const real32_T rtCP_pooled_bW9qz7zDL7dr[4];

#define rtCP_gravity_Value             rtCP_pooled_OlAt8KbpQEG0  /* Expression: [0 0 g]
                                                                  * Referenced by: '<S4>/gravity'
                                                                  */
#define rtCP_C_Value_p                 rtCP_pooled_kqUvCpwgnPyl  /* Computed Parameter: rtCP_C_Value_p
                                                                  * Referenced by: '<S134>/C'
                                                                  */
#define rtCP_IIR_IMUgyro_r_NumCoef     rtCP_pooled_adLCBuYxtU1Q  /* Computed Parameter: rtCP_IIR_IMUgyro_r_NumCoef
                                                                  * Referenced by: '<S6>/IIR_IMUgyro_r'
                                                                  */
#define rtCP_IIR_IMUgyro_r_DenCoef     rtCP_pooled_VH0dmwbCQMUq  /* Computed Parameter: rtCP_IIR_IMUgyro_r_DenCoef
                                                                  * Referenced by: '<S6>/IIR_IMUgyro_r'
                                                                  */
#define rtCP_FIR_IMUaccel_Coefficients rtCP_pooled_KvfM2cKww6Wz  /* Computed Parameter: rtCP_FIR_IMUaccel_Coefficients
                                                                  * Referenced by: '<S6>/FIR_IMUaccel'
                                                                  */
#define rtCP_C_Value_f                 rtCP_pooled_kqUvCpwgnPyl  /* Computed Parameter: rtCP_C_Value_f
                                                                  * Referenced by: '<S72>/C'
                                                                  */
#define rtCP_IIRgyroz_NumCoef          rtCP_pooled_adLCBuYxtU1Q  /* Computed Parameter: rtCP_IIRgyroz_NumCoef
                                                                  * Referenced by: '<S71>/IIRgyroz'
                                                                  */
#define rtCP_IIRgyroz_DenCoef          rtCP_pooled_VH0dmwbCQMUq  /* Computed Parameter: rtCP_IIRgyroz_DenCoef
                                                                  * Referenced by: '<S71>/IIRgyroz'
                                                                  */
#define rtCP_D_Value_f                 rtCP_pooled_bW9qz7zDL7dr  /* Computed Parameter: rtCP_D_Value_f
                                                                  * Referenced by: '<S72>/D'
                                                                  */
#define rtCP_D_Value_b                 rtCP_pooled_bW9qz7zDL7dr  /* Computed Parameter: rtCP_D_Value_b
                                                                  * Referenced by: '<S134>/D'
                                                                  */

extern const ConstB_stateEstimator_h_T stateEstimator_ConstB;

#endif                                /* RTW_HEADER_stateEstimator_private_h_ */
