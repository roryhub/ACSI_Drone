/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControllerPID_private.h
 *
 * Code generated for Simulink model 'flightControllerPID'.
 *
 * Model version                  : 1.170
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Tue Jun 11 16:07:05 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_flightControllerPID_private_h_
#define RTW_HEADER_flightControllerPID_private_h_
#include "rtwtypes.h"

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

#ifndef flightControllerPID_MDLREF_HIDE_CHILD_

extern P_flightControllerPID_T flightControllerPID_P_g;

#endif                                /*flightControllerPID_MDLREF_HIDE_CHILD_*/
#endif                           /* RTW_HEADER_flightControllerPID_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
