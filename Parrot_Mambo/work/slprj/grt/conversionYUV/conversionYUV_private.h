/*
 * conversionYUV_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "conversionYUV".
 *
 * Model version              : 1.141
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C source code generated on : Wed May 22 15:05:02 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_conversionYUV_private_h_
#define RTW_HEADER_conversionYUV_private_h_
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

extern const real_T rtCP_pooled_3xP4gIMwQyos[9600];
extern const real_T rtCP_pooled_NMXgYGj7EHjM[9600];
extern const uint8_T rtCP_pooled_2rfkhHGkcmPO[19200];

#define rtCP_Constant1_Value           rtCP_pooled_3xP4gIMwQyos  /* Expression: 1:2:120*160
                                                                  * Referenced by: '<S1>/Constant1'
                                                                  */
#define rtCP_Constant2_Value           rtCP_pooled_NMXgYGj7EHjM  /* Expression: 2:2:120*160
                                                                  * Referenced by: '<S1>/Constant2'
                                                                  */
#define rtCP_Constant1_Value_l         rtCP_pooled_3xP4gIMwQyos  /* Expression: 1:2:120*160
                                                                  * Referenced by: '<S2>/Constant1'
                                                                  */
#define rtCP_Constant2_Value_l         rtCP_pooled_NMXgYGj7EHjM  /* Expression: 2:2:120*160
                                                                  * Referenced by: '<S2>/Constant2'
                                                                  */
#define rtCP_Constant1_Value_i         rtCP_pooled_3xP4gIMwQyos  /* Expression: 1:2:120*160
                                                                  * Referenced by: '<S3>/Constant1'
                                                                  */
#define rtCP_Constant2_Value_g         rtCP_pooled_NMXgYGj7EHjM  /* Expression: 2:2:120*160
                                                                  * Referenced by: '<S3>/Constant2'
                                                                  */
#define rtCP_Constant_Value            rtCP_pooled_2rfkhHGkcmPO  /* Computed Parameter: rtCP_Constant_Value
                                                                  * Referenced by: '<S1>/Constant'
                                                                  */
#define rtCP_Constant_Value_d          rtCP_pooled_2rfkhHGkcmPO  /* Computed Parameter: rtCP_Constant_Value_d
                                                                  * Referenced by: '<S2>/Constant'
                                                                  */
#define rtCP_Constant_Value_i          rtCP_pooled_2rfkhHGkcmPO  /* Computed Parameter: rtCP_Constant_Value_i
                                                                  * Referenced by: '<S3>/Constant'
                                                                  */
#endif                                 /* RTW_HEADER_conversionYUV_private_h_ */
