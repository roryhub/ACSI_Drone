/*
 * Code generation for system model 'flightControllerPID'
 * For more details, see corresponding source file flightControllerPID.c
 *
 */

#ifndef RTW_HEADER_flightControllerPID_h_
#define RTW_HEADER_flightControllerPID_h_
#include <math.h>
#include <string.h>
#ifndef flightControllerPID_COMMON_INCLUDES_
# define flightControllerPID_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                /* flightControllerPID_COMMON_INCLUDES_ */

#include "flightControllerPID_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Block states (default storage) for model 'flightControllerPID' */
#ifndef flightControllerPID_MDLREF_HIDE_CHILD_

typedef struct {
  struct {
    void *LoggedData;
  } AttitudeError_PWORK;               /* '<S2>/Attitude Error' */

  struct {
    void *LoggedData;
  } XYError_PWORK;                     /* '<S4>/XY Error' */

  struct {
    void *LoggedData;
  } ZError_PWORK;                      /* '<S6>/Z Error' */

  real32_T DiscreteTimeIntegrator_DSTATE[2];/* '<S4>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTATE_m[2];/* '<S2>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTATE_a;/* '<S6>/Discrete-Time Integrator' */
  real32_T Delay_DSTATE[2];            /* '<S2>/Delay' */
  real32_T Delay_DSTATE_g[2];          /* '<S4>/Delay' */
  real32_T Delay_DSTATE_m;             /* '<S6>/Delay' */
} DW_flightControllerPID_f_T;

#endif                                /*flightControllerPID_MDLREF_HIDE_CHILD_*/

#ifndef flightControllerPID_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_flightControllerPID_T {
  const char_T **errorStatus;
};

#endif                                /*flightControllerPID_MDLREF_HIDE_CHILD_*/

#ifndef flightControllerPID_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_flightControllerPID_T rtm;
} MdlrefDW_flightControllerPID_T;

#endif                                /*flightControllerPID_MDLREF_HIDE_CHILD_*/

extern void flightControllerPID_Init(void);
extern void flightControllerPID_Reset(void);
extern void flightControllerPID(const CommandBus *rtu_ReferenceValueServerBus,
  const statesEstim_t *rtu_states_estim, real32_T rty_motors_refout[4], real32_T
  rty_pose_refout[8]);

/* Model reference registration function */
extern void flightControllerPID_initialize(const char_T **rt_errorStatus);

#ifndef flightControllerPID_MDLREF_HIDE_CHILD_

extern MdlrefDW_flightControllerPID_T flightControllerPID_MdlrefDW;

#endif                                /*flightControllerPID_MDLREF_HIDE_CHILD_*/

#ifndef flightControllerPID_MDLREF_HIDE_CHILD_

/* Block states (default storage) */
extern DW_flightControllerPID_f_T flightControllerPID_DW;

#endif                                /*flightControllerPID_MDLREF_HIDE_CHILD_*/

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'flightControllerPID'
 * '<S1>'   : 'flightControllerPID/Flight Controller'
 * '<S2>'   : 'flightControllerPID/Flight Controller/Attitude'
 * '<S3>'   : 'flightControllerPID/Flight Controller/ControlMixer'
 * '<S4>'   : 'flightControllerPID/Flight Controller/XY-to-reference-orientation'
 * '<S5>'   : 'flightControllerPID/Flight Controller/Yaw'
 * '<S6>'   : 'flightControllerPID/Flight Controller/gravity feedforward//equilibrium thrust'
 * '<S7>'   : 'flightControllerPID/Flight Controller/thrustsToMotorCommands'
 */
#endif                                 /* RTW_HEADER_flightControllerPID_h_ */
