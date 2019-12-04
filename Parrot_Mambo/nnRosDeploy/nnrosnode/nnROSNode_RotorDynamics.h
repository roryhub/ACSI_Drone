//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: nnROSNode_RotorDynamics.h
//
// Code generated for Simulink model 'nnROSNode'.
//
// Model version                  : 1.43
// Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
// C/C++ source code generated on : Mon Aug 19 10:32:25 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_nnROSNode_RotorDynamics_h_
#define RTW_HEADER_nnROSNode_RotorDynamics_h_
#include <math.h>
#ifndef nnROSNode_COMMON_INCLUDES_
# define nnROSNode_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // nnROSNode_COMMON_INCLUDES_

#include "nnROSNode_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

// Parameters for system: '<S90>/Rotor_Dynamics'
struct P_RotorDynamics_nnROSNode_T_ {
  real_T Constant4_Value;              // Expression: realmin
                                          //  Referenced by: '<S92>/Constant4'

  real_T Gain_Gain;                    // Expression: -1
                                          //  Referenced by: '<S92>/Gain'

  real_T R1_Gain;                      // Expression: 2
                                          //  Referenced by: '<S92>/R1'

  real_T R2_Gain;                      // Expression: .5
                                          //  Referenced by: '<S92>/R2'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S92>/Constant1'

  real_T Gain1_Gain;                   // Expression: -1
                                          //  Referenced by: '<S92>/Gain1'

  real_T Gain2_Gain;                   // Expression: -1
                                          //  Referenced by: '<S92>/Gain2'

  real_T Constant3_Value[2];           // Expression: [0 0]
                                          //  Referenced by: '<S92>/Constant3'

  real32_T R_Gain;                     // Expression: Vehicle.Rotor.radius
                                          //  Referenced by: '<S92>/R'

  real32_T R3_Gain;                    // Computed Parameter: R3_Gain
                                          //  Referenced by: '<S92>/R3'

  real32_T R4_Gain;                    // Computed Parameter: R4_Gain
                                          //  Referenced by: '<S92>/R4'

};

extern void nnROSNode_RotorDynamics(const real_T rtu_Vb[3], const real_T
  rtu_pqr[3], real_T rtu_rho, real32_T rtu_w, const real_T rtu_Arm[3], real_T
  rty_Fxyz[3], real_T rty_Mxyz[3], P_RotorDynamics_nnROSNode_T *localP);

#endif                                 // RTW_HEADER_nnROSNode_RotorDynamics_h_

//
// File trailer for generated code.
//
// [EOF]
//
