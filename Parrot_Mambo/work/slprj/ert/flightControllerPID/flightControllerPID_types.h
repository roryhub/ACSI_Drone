/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControllerPID_types.h
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

#ifndef RTW_HEADER_flightControllerPID_types_h_
#define RTW_HEADER_flightControllerPID_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_error_pid1_
#define DEFINED_TYPEDEF_FOR_error_pid1_

typedef struct {
  real32_T p;
  real32_T i;
  real32_T d;
} error_pid1;

#endif

#ifndef DEFINED_TYPEDEF_FOR_error_pid2_
#define DEFINED_TYPEDEF_FOR_error_pid2_

typedef struct {
  real32_T p[2];
  real32_T i[2];
  real32_T d[2];
} error_pid2;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ErrorBus_
#define DEFINED_TYPEDEF_FOR_ErrorBus_

typedef struct {
  error_pid1 yaw;
  error_pid2 pr;
  error_pid2 xy;
  error_pid1 z;
} ErrorBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_CommandBus_
#define DEFINED_TYPEDEF_FOR_CommandBus_

typedef struct {
  boolean_T controlModePosVSOrient;
  real32_T pos_ref[3];
  boolean_T takeoff_flag;
  real32_T orient_ref[3];
  uint32_T live_time_ticks;
} CommandBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_statesEstim_t_
#define DEFINED_TYPEDEF_FOR_statesEstim_t_

typedef struct {
  real32_T X;
  real32_T Y;
  real32_T Z;
  real32_T yaw;
  real32_T pitch;
  real32_T roll;
  real32_T dx;
  real32_T dy;
  real32_T dz;
  real32_T p;
  real32_T q;
  real32_T r;
} statesEstim_t;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_eAf0NJvzCY9HYTXF7bLNgB_
#define DEFINED_TYPEDEF_FOR_struct_eAf0NJvzCY9HYTXF7bLNgB_

typedef struct {
  real_T Ts2Q[16];
  real_T Q2Ts[16];
  real_T takeoffGain;
  real_T totalThrustMaxRelative;
  real_T motorsThrustPerMotorMax;
} struct_eAf0NJvzCY9HYTXF7bLNgB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_XRMsui9C07VjBvdq1msujB_
#define DEFINED_TYPEDEF_FOR_struct_XRMsui9C07VjBvdq1msujB_

typedef struct {
  real_T initGreenwich;
  real_T quatGain;
} struct_XRMsui9C07VjBvdq1msujB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_hxsmtt0xTZOLDNa2Rz7GAF_
#define DEFINED_TYPEDEF_FOR_struct_hxsmtt0xTZOLDNa2Rz7GAF_

typedef struct {
  real_T xAxis;
} struct_hxsmtt0xTZOLDNa2Rz7GAF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_IZWOW0zYvpphl7qLgSfN7E_
#define DEFINED_TYPEDEF_FOR_struct_IZWOW0zYvpphl7qLgSfN7E_

typedef struct {
  real_T href;
  struct_hxsmtt0xTZOLDNa2Rz7GAF FlatEarthToLLA;
} struct_IZWOW0zYvpphl7qLgSfN7E;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_q6UUpnZ4gTjFvULFx6Rxa_
#define DEFINED_TYPEDEF_FOR_struct_q6UUpnZ4gTjFvULFx6Rxa_

typedef struct {
  real_T mass;
  real_T inertia[9];
  real_T d;
  real_T xy;
  real_T h;
  real_T Cdx;
  real_T Cdy;
  real_T diameter;
} struct_q6UUpnZ4gTjFvULFx6Rxa;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_OMRgDnJcZuQneKEj9vdTyD_
#define DEFINED_TYPEDEF_FOR_struct_OMRgDnJcZuQneKEj9vdTyD_

typedef struct {
  real_T blades;
  real_T radius;
  real_T chord;
  real_T flappingOffset;
  real_T bladeMass;
  real_T bladeInertia;
  real_T hubMass;
  real_T hubInertia;
  real_T inertia;
  real_T Ct;
  real_T Cq;
  real_T solidity;
  real_T theta0;
  real_T thetaTip;
  real_T theta1;
  real_T theta34;
  real_T a;
  real_T area;
  real_T lock;
  real_T b;
  real_T k;
  real_T w2ToThrustGain;
} struct_OMRgDnJcZuQneKEj9vdTyD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_p3FXZIgqtjF2uqDpmYjb6C_
#define DEFINED_TYPEDEF_FOR_struct_p3FXZIgqtjF2uqDpmYjb6C_

typedef struct {
  real_T maxLimit;
  real_T minLimit;
  real_T commandToW2Gain;
  real_T thrustToMotorCommand;
} struct_p3FXZIgqtjF2uqDpmYjb6C;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_OSJpyIZcrpXqReVWwh9iuG_
#define DEFINED_TYPEDEF_FOR_struct_OSJpyIZcrpXqReVWwh9iuG_

typedef struct {
  struct_XRMsui9C07VjBvdq1msujB SixDOF;
  struct_IZWOW0zYvpphl7qLgSfN7E PositionOnEarth;
  struct_q6UUpnZ4gTjFvULFx6Rxa Airframe;
  struct_OMRgDnJcZuQneKEj9vdTyD Rotor;
  struct_p3FXZIgqtjF2uqDpmYjb6C Motor;
} struct_OSJpyIZcrpXqReVWwh9iuG;

#endif

/* Parameters (default storage) */
typedef struct P_flightControllerPID_T_ P_flightControllerPID_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_flightControllerPID_T RT_MODEL_flightControllerPID_T;

#endif                             /* RTW_HEADER_flightControllerPID_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
