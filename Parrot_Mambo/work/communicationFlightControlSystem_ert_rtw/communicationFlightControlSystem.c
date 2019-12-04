/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: communicationFlightControlSystem.c
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

#include "communicationFlightControlSystem.h"
#include "communicationFlightControlSystem_private.h"
#include "rt_roundd_snf.h"

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
real32_T motors_outport[4];            /* '<S6>/Default Controller' */
uint8_T flag_outport;                  /* '<S4>/Merge' */

/* Block signals (default storage) */
B_communicationFlightControlSystem_T communicationFlightControlSystem_B;

/* Block states (default storage) */
DW_communicationFlightControlSystem_T communicationFlightControlSystem_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_communicationFlightControlSystem_T communicationFlightControlSystem_Y;

/* Real-time model */
RT_MODEL_communicationFlightControlSystem_T communicationFlightControlSystem_M_;
RT_MODEL_communicationFlightControlSystem_T *const
  communicationFlightControlSystem_M = &communicationFlightControlSystem_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void communicationFlightControlSystem_SetEventsForThisBaseStep(boolean_T
  *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(communicationFlightControlSystem_M, 1));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (communicationFlightControlSystem_M->Timing.TaskCounters.TID[1])++;
  if ((communicationFlightControlSystem_M->Timing.TaskCounters.TID[1]) > 39) {/* Sample time: [0.2s, 0.0s] */
    communicationFlightControlSystem_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for action system:
 *    '<S4>/Geofencing error'
 *    '<S4>/estimator//Optical flow error'
 *    '<S4>/Normal condition'
 */
void communicationFlightControlSystem_Geofencingerror(uint8_T *rty_Out1,
  P_Geofencingerror_communicationFlightControlSystem_T *localP)
{
  /* SignalConversion: '<S15>/OutportBufferForOut1' incorporates:
   *  Constant: '<S15>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;
}

/* SetupRuntimeResources for atomic system: '<S1>/Logging' */
void communicationFlightControlSystem_Logging_SetupRTR
  (RT_MODEL_communicationFlightControlSystem_T * const
   communicationFlightControlSystem_M,
   DW_Logging_communicationFlightControlSystem_T *localDW)
{
  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace2' */
  {
    static int_T rt_ToWksWidths[] = { 12 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 12 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "communicationFlightControlSystem/Flight Control System/Logging/To Workspace2";
    localDW->ToWorkspace2_PWORK.LoggedData = rt_CreateStructLogVar(
      communicationFlightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(communicationFlightControlSystem_M),
      communicationFlightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(communicationFlightControlSystem_M)),
      "estim",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace2_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace6' */
  {
    static int_T rt_ToWksWidths[] = { 10 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 10 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "communicationFlightControlSystem/Flight Control System/Logging/To Workspace6";
    localDW->ToWorkspace6_PWORK.LoggedData = rt_CreateStructLogVar(
      communicationFlightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(communicationFlightControlSystem_M),
      communicationFlightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(communicationFlightControlSystem_M)),
      "sensor",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace6_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace3' */
  {
    static int_T rt_ToWksWidths[] = { 9 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 9 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "communicationFlightControlSystem/Flight Control System/Logging/To Workspace3";
    localDW->ToWorkspace3_PWORK.LoggedData = rt_CreateStructLogVar(
      communicationFlightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(communicationFlightControlSystem_M),
      communicationFlightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(communicationFlightControlSystem_M)),
      "cmd",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace3_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace4' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "communicationFlightControlSystem/Flight Control System/Logging/To Workspace4";
    localDW->ToWorkspace4_PWORK.LoggedData = rt_CreateStructLogVar(
      communicationFlightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(communicationFlightControlSystem_M),
      communicationFlightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(communicationFlightControlSystem_M)),
      "optical",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace4_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace5' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "SensorCalibration" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "communicationFlightControlSystem/Flight Control System/Logging/To Workspace5";
    localDW->ToWorkspace5_PWORK.LoggedData = rt_CreateStructLogVar(
      communicationFlightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(communicationFlightControlSystem_M),
      communicationFlightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(communicationFlightControlSystem_M)),
      "calib",
      1,
      0,
      100,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace5_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace' */
  {
    static int_T rt_ToWksWidths[] = { 4 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 4 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "communicationFlightControlSystem/Flight Control System/Logging/To Workspace";
    localDW->ToWorkspace_PWORK.LoggedData = rt_CreateStructLogVar(
      communicationFlightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(communicationFlightControlSystem_M),
      communicationFlightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(communicationFlightControlSystem_M)),
      "motor",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace1' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "communicationFlightControlSystem/Flight Control System/Logging/To Workspace1";
    localDW->ToWorkspace1_PWORK.LoggedData = rt_CreateStructLogVar(
      communicationFlightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(communicationFlightControlSystem_M),
      communicationFlightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(communicationFlightControlSystem_M)),
      "posref",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace1_PWORK.LoggedData == (NULL))
      return;
  }
}

/* Output and update for atomic system: '<S1>/Logging' */
void communicationFlightControlSystem_Logging
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
   DW_Logging_communicationFlightControlSystem_T *localDW)
{
  /* local block i/o variables */
  real32_T rtb_SigConversion_InsertedFor_Sensors_BusSelector_BusSelector_i[8];
  real32_T rtb_DataTypeConversion7;
  real32_T rtb_DataTypeConversion11;
  int32_T i;

  /* SignalConversion: '<S5>/states_estim_BusSelector' */
  rtb_DataTypeConversion7 = rtu_states_estim_Inport_3->q;
  rtb_DataTypeConversion11 = rtu_states_estim_Inport_3->r;

  /* SignalConversion: '<S5>/TmpSignal ConversionAtTo Workspace2Inport1' incorporates:
   *  SignalConversion: '<S5>/states_estim_BusSelector'
   */
  localB->TmpSignalConversionAtToWorkspace2Inport1_h[0] =
    rtu_states_estim_Inport_3->X;
  localB->TmpSignalConversionAtToWorkspace2Inport1_h[1] =
    rtu_states_estim_Inport_3->Y;
  localB->TmpSignalConversionAtToWorkspace2Inport1_h[2] =
    rtu_states_estim_Inport_3->Z;
  localB->TmpSignalConversionAtToWorkspace2Inport1_h[3] =
    rtu_states_estim_Inport_3->yaw;
  localB->TmpSignalConversionAtToWorkspace2Inport1_h[4] =
    rtu_states_estim_Inport_3->pitch;
  localB->TmpSignalConversionAtToWorkspace2Inport1_h[5] =
    rtu_states_estim_Inport_3->roll;
  localB->TmpSignalConversionAtToWorkspace2Inport1_h[6] =
    rtu_states_estim_Inport_3->dx;
  localB->TmpSignalConversionAtToWorkspace2Inport1_h[7] =
    rtu_states_estim_Inport_3->dy;
  localB->TmpSignalConversionAtToWorkspace2Inport1_h[8] =
    rtu_states_estim_Inport_3->dz;
  localB->TmpSignalConversionAtToWorkspace2Inport1_h[9] =
    rtu_states_estim_Inport_3->p;
  localB->TmpSignalConversionAtToWorkspace2Inport1_h[10] =
    rtb_DataTypeConversion7;
  localB->TmpSignalConversionAtToWorkspace2Inport1_h[11] =
    rtb_DataTypeConversion11;

  /* ToWorkspace: '<S5>/To Workspace2' */
  {
    double locTime = communicationFlightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace2_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace2Inport1_h[0]);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion1' */
  rtb_DataTypeConversion11 = rtu_sensordata_datin_Inport_6;

  /* DataTypeConversion: '<S5>/Data Type Conversion2' */
  rtb_DataTypeConversion7 = (real32_T)rtu_sensordata_datin_Inport_6_d;

  /* SignalConversion: '<S5>/TmpSignal ConversionAtTo Workspace6Inport1' */
  localB->TmpSignalConversionAtToWorkspace6Inport1[0] =
    rtu_sensordata_datin_Inport_6_e;
  localB->TmpSignalConversionAtToWorkspace6Inport1[1] =
    rtu_sensordata_datin_Inport_6_c;
  localB->TmpSignalConversionAtToWorkspace6Inport1[2] =
    rtu_sensordata_datin_Inport_6_cg;
  localB->TmpSignalConversionAtToWorkspace6Inport1[3] =
    rtu_sensordata_datin_Inport_6_i;
  localB->TmpSignalConversionAtToWorkspace6Inport1[4] =
    rtu_sensordata_datin_Inport_6_h;
  localB->TmpSignalConversionAtToWorkspace6Inport1[5] =
    rtu_sensordata_datin_Inport_6_b;
  localB->TmpSignalConversionAtToWorkspace6Inport1[6] =
    rtu_sensordata_datin_Inport_6_dz;
  localB->TmpSignalConversionAtToWorkspace6Inport1[7] =
    rtu_sensordata_datin_Inport_6_n;
  localB->TmpSignalConversionAtToWorkspace6Inport1[8] = rtb_DataTypeConversion11;
  localB->TmpSignalConversionAtToWorkspace6Inport1[9] = rtb_DataTypeConversion7;

  /* ToWorkspace: '<S5>/To Workspace6' */
  {
    double locTime = communicationFlightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace6_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace6Inport1[0]);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion3' */
  rtb_DataTypeConversion11 =
    rtu_ReferenceValueServerBus_Inport_4->controlModePosVSOrient;

  /* DataTypeConversion: '<S5>/Data Type Conversion7' */
  rtb_DataTypeConversion7 = rtu_ReferenceValueServerBus_Inport_4->takeoff_flag;

  /* SignalConversion: '<S5>/TmpSignal ConversionAtTo Workspace3Inport1' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion9'
   *  SignalConversion: '<S5>/ReferenceValueServerBus_BusSelector'
   */
  localB->TmpSignalConversionAtToWorkspace3Inport1[0] = rtb_DataTypeConversion11;
  localB->TmpSignalConversionAtToWorkspace3Inport1[1] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[0];
  localB->TmpSignalConversionAtToWorkspace3Inport1[2] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[1];
  localB->TmpSignalConversionAtToWorkspace3Inport1[3] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[2];
  localB->TmpSignalConversionAtToWorkspace3Inport1[4] = rtb_DataTypeConversion7;
  localB->TmpSignalConversionAtToWorkspace3Inport1[5] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[0];
  localB->TmpSignalConversionAtToWorkspace3Inport1[6] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[1];
  localB->TmpSignalConversionAtToWorkspace3Inport1[7] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[2];
  localB->TmpSignalConversionAtToWorkspace3Inport1[8] = (real32_T)
    rtu_ReferenceValueServerBus_Inport_4->live_time_ticks;

  /* ToWorkspace: '<S5>/To Workspace3' */
  {
    double locTime = communicationFlightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace3_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace3Inport1[0]);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion11' */
  rtb_DataTypeConversion11 = rtu_Sensors_Inport_5->VisionSensors.usePosVIS_flag;

  /* SignalConversion: '<S5>/TmpSignal ConversionAtTo Workspace4Inport1' incorporates:
   *  SignalConversion: '<S5>/Sensors_BusSelector'
   */
  localB->TmpSignalConversionAtToWorkspace4Inport1[0] = rtb_DataTypeConversion11;
  localB->TmpSignalConversionAtToWorkspace4Inport1[1] =
    rtu_Sensors_Inport_5->VisionSensors.opticalFlow_data[0];
  localB->TmpSignalConversionAtToWorkspace4Inport1[2] =
    rtu_Sensors_Inport_5->VisionSensors.opticalFlow_data[1];
  localB->TmpSignalConversionAtToWorkspace4Inport1[3] =
    rtu_Sensors_Inport_5->VisionSensors.opticalFlow_data[2];
  localB->TmpSignalConversionAtToWorkspace4Inport1[4] =
    rtu_Sensors_Inport_5->VisionSensors.posVIS_data[0];
  localB->TmpSignalConversionAtToWorkspace4Inport1[5] =
    rtu_Sensors_Inport_5->VisionSensors.posVIS_data[1];
  localB->TmpSignalConversionAtToWorkspace4Inport1[6] =
    rtu_Sensors_Inport_5->VisionSensors.posVIS_data[2];
  localB->TmpSignalConversionAtToWorkspace4Inport1[7] =
    rtu_Sensors_Inport_5->VisionSensors.posVIS_data[3];

  /* ToWorkspace: '<S5>/To Workspace4' */
  {
    double locTime = communicationFlightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace4_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace4Inport1[0]);
  }

  /* SignalConversion: '<S5>/Sensors_BusSelector' */
  for (i = 0; i < 8; i++) {
    rtb_SigConversion_InsertedFor_Sensors_BusSelector_BusSelector_i[i] =
      rtu_Sensors_Inport_5->SensorCalibration[i];
  }

  /* ToWorkspace: '<S5>/To Workspace5' */
  {
    double locTime = communicationFlightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace5_PWORK.LoggedData,
                          &locTime,
                          &rtb_SigConversion_InsertedFor_Sensors_BusSelector_BusSelector_i
                          [0]);
  }

  /* ToWorkspace: '<S5>/To Workspace' */
  {
    double locTime = communicationFlightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace_PWORK.LoggedData,
                          &locTime, &rtu_motorCmds[0]);
  }

  /* ToWorkspace: '<S5>/To Workspace1' */
  {
    double locTime = communicationFlightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace1_PWORK.LoggedData,
                          &locTime, &rtu_posRef[0]);
  }
}

/* SetupRuntimeResources for atomic system: '<Root>/Flight Control System' */
void communicationFlightControlSyst_FlightControlSystem_SetupRTR
  (RT_MODEL_communicationFlightControlSystem_T * const
   communicationFlightControlSystem_M,
   DW_FlightControlSystem_communicationFlightControlSystem_T *localDW)
{
  /* SetupRuntimeResources for Atomic SubSystem: '<S1>/Logging' */
  communicationFlightControlSystem_Logging_SetupRTR
    (communicationFlightControlSystem_M, &localDW->Logging);

  /* End of SetupRuntimeResources for SubSystem: '<S1>/Logging' */
}

/* System initialize for atomic system: '<Root>/Flight Control System' */
void communicationFlightControlSystem_FlightControlSystem_Init(uint8_T *rty_Flag,
  DW_FlightControlSystem_communicationFlightControlSystem_T *localDW,
  P_FlightControlSystem_communicationFlightControlSystem_T *localP)
{
  /* InitializeConditions for Memory: '<S7>/Memory' */
  localDW->Memory_PreviousInput = localP->Memory_InitialCondition;

  /* SystemInitialize for ModelReference: '<S1>/estimator' */
  stateEstimator_Init();

  /* SystemInitialize for ModelReference: '<S6>/Default Controller' */
  flightController_Init();

  /* SystemInitialize for Merge: '<S4>/Merge' */
  *rty_Flag = localP->Merge_InitialOutput;
}

/* Output and update for atomic system: '<Root>/Flight Control System' */
void communicationFlightControlSystem_FlightControlSystem
  (RT_MODEL_communicationFlightControlSystem_T * const
   communicationFlightControlSystem_M, const CommandBus
   *rtu_ReferenceValueServerCmds, const SensorsBus *rtu_Sensors, real_T
   rtu_VisionbasedData, real32_T rty_motorCmds[4], uint8_T *rty_Flag,
   B_FlightControlSystem_communicationFlightControlSystem_T *localB,
   DW_FlightControlSystem_communicationFlightControlSystem_T *localDW,
   P_FlightControlSystem_communicationFlightControlSystem_T *localP)
{
  /* Switch: '<S7>/Switch' incorporates:
   *  BusCreator: '<S7>/Bus Creator'
   *  Constant: '<S18>/Constant'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   *  Constant: '<S7>/Constant2'
   *  Constant: '<S7>/Constant3'
   *  Logic: '<S7>/Logical Operator'
   *  Memory: '<S7>/Memory'
   *  RelationalOperator: '<S18>/Compare'
   *  SignalConversion: '<S7>/TmpSignal ConversionAtBus CreatorInport2'
   */
  if ((rtu_VisionbasedData == localP->CompareToConstant_const) &&
      rtP_enableLanding) {
    localB->Switch_o.controlModePosVSOrient = localP->Constant1_Value;
    localB->Switch_o.pos_ref[0] = localDW->Memory_PreviousInput.X;
    localB->Switch_o.pos_ref[1] = localDW->Memory_PreviousInput.Y;
    localB->Switch_o.pos_ref[2] = rtP_landingAltitude;
    localB->Switch_o.takeoff_flag = rtu_ReferenceValueServerCmds->takeoff_flag;
    localB->Switch_o.orient_ref[0] = localP->Constant3_Value[0];
    localB->Switch_o.orient_ref[1] = localP->Constant3_Value[1];
    localB->Switch_o.orient_ref[2] = localP->Constant3_Value[2];
    localB->Switch_o.live_time_ticks =
      rtu_ReferenceValueServerCmds->live_time_ticks;
  } else {
    localB->Switch_o = *rtu_ReferenceValueServerCmds;
  }

  /* End of Switch: '<S7>/Switch' */

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector3_at_outport_0' */
  localB->rtb_x_m = rtu_Sensors->HALSensors.HAL_acc_SI.x;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector3_at_outport_1' */
  localB->rtb_y_c = rtu_Sensors->HALSensors.HAL_acc_SI.y;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector3_at_outport_2' */
  localB->rtb_z_k = rtu_Sensors->HALSensors.HAL_acc_SI.z;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector4_at_outport_0' */
  localB->rtb_x_c_c = rtu_Sensors->HALSensors.HAL_gyro_SI.x;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector4_at_outport_1' */
  localB->rtb_y_n_b = rtu_Sensors->HALSensors.HAL_gyro_SI.y;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector4_at_outport_2' */
  localB->rtb_z_p_p = rtu_Sensors->HALSensors.HAL_gyro_SI.z;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector5_at_outport_0' */
  localB->rtb_altitude_c = rtu_Sensors->HALSensors.HAL_ultrasound_SI.altitude;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector6_at_outport_0' */
  localB->rtb_pressure_f = rtu_Sensors->HALSensors.HAL_pressure_SI.pressure;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector1_at_outport_0' */
  localB->rtb_vbat_V_g = rtu_Sensors->HALSensors.HAL_vbat_SI.vbat_V;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector1_at_outport_1' */
  localB->rtb_vbat_percentage_g =
    rtu_Sensors->HALSensors.HAL_vbat_SI.vbat_percentage;

  /* BusCreator: '<S1>/BusConversion_InsertedFor_estimator_at_inport_1' */
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddx =
    localB->rtb_x_m;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddy =
    localB->rtb_y_c;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddz =
    localB->rtb_z_k;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.p =
    localB->rtb_x_c_c;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.q =
    localB->rtb_y_n_b;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.r =
    localB->rtb_z_p_p;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.altitude_sonar
    = localB->rtb_altitude_c;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.prs =
    localB->rtb_pressure_f;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.vbat_V =
    localB->rtb_vbat_V_g;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.vbat_percentage
    = localB->rtb_vbat_percentage_g;

  /* ModelReference: '<S1>/estimator' */
  stateEstimator_run(localB->Switch_o.controlModePosVSOrient,
                     &localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1,
                     rtu_Sensors->VisionSensors.usePosVIS_flag,
                     &rtu_Sensors->VisionSensors.opticalFlow_data[0],
                     &rtu_Sensors->VisionSensors.posVIS_data[0],
                     &localB->estimator, &rtu_Sensors->SensorCalibration[0]);

  /* ModelReference: '<S6>/Default Controller' */
  flightController_run(&localB->Switch_o, &localB->estimator, &rty_motorCmds[0],
                       &localB->DefaultController_o2[0]);

  /* Outputs for Atomic SubSystem: '<S1>/Logging' */
  communicationFlightControlSystem_Logging(communicationFlightControlSystem_M,
    rty_motorCmds, localB->DefaultController_o2, &localB->estimator,
    rtu_ReferenceValueServerCmds, rtu_Sensors, localB->rtb_vbat_V_g,
    localB->rtb_vbat_percentage_g, localB->rtb_x_m, localB->rtb_y_c,
    localB->rtb_z_k, localB->rtb_x_c_c, localB->rtb_y_n_b, localB->rtb_z_p_p,
    localB->rtb_altitude_c, localB->rtb_pressure_f, &localB->Logging,
    &localDW->Logging);

  /* End of Outputs for SubSystem: '<S1>/Logging' */

  /* If: '<S4>/If' incorporates:
   *  Abs: '<S4>/Abs'
   *  Abs: '<S4>/Abs1'
   *  Abs: '<S4>/Abs2'
   *  Abs: '<S4>/Abs3'
   *  Abs: '<S4>/Abs4'
   *  Abs: '<S4>/Abs5'
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S14>/Constant'
   *  Constant: '<S9>/Constant'
   *  Gain: '<S4>/Gain'
   *  Gain: '<S4>/Gain1'
   *  Logic: '<S4>/Logical Operator'
   *  Logic: '<S4>/Logical Operator1'
   *  Logic: '<S4>/Logical Operator2'
   *  Logic: '<S4>/Logical Operator3'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S14>/Compare'
   *  RelationalOperator: '<S9>/Compare'
   *  Sum: '<S4>/Subtract'
   *  Sum: '<S4>/Subtract1'
   */
  if ((((real32_T)fabs(localB->estimator.X) > localP->CompareToConstant_const_o)
       || ((real32_T)fabs(localB->estimator.Y) >
           localP->CompareToConstant1_const)) > 0) {
    /* Outputs for IfAction SubSystem: '<S4>/Geofencing error' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    communicationFlightControlSystem_Geofencingerror(rty_Flag,
      &localP->Geofencingerror);

    /* End of Outputs for SubSystem: '<S4>/Geofencing error' */
  } else if (((((real32_T)fabs(rtu_Sensors->VisionSensors.opticalFlow_data[0]) >
                localP->CompareToConstant4_const) && ((real32_T)fabs
                (localP->Gain_Gain * rtu_Sensors->
                 VisionSensors.opticalFlow_data[0] - localB->estimator.dx) >
                localP->CompareToConstant2_const)) || (((real32_T)fabs
                (localP->Gain1_Gain *
                 rtu_Sensors->VisionSensors.opticalFlow_data[1] -
                 localB->estimator.dy) > localP->CompareToConstant3_const) &&
               ((real32_T)fabs(rtu_Sensors->VisionSensors.opticalFlow_data[1]) >
                localP->CompareToConstant5_const))) > 0) {
    /* Outputs for IfAction SubSystem: '<S4>/estimator//Optical flow error' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    communicationFlightControlSystem_Geofencingerror(rty_Flag,
      &localP->estimatorOpticalflowerror);

    /* End of Outputs for SubSystem: '<S4>/estimator//Optical flow error' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/Normal condition' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    communicationFlightControlSystem_Geofencingerror(rty_Flag,
      &localP->Normalcondition);

    /* End of Outputs for SubSystem: '<S4>/Normal condition' */
  }

  /* End of If: '<S4>/If' */

  /* Update for Memory: '<S7>/Memory' */
  localDW->Memory_PreviousInput = localB->estimator;
}

/* Model step function for TID0 */
void communicationFlightControlSystem_step0(void) /* Sample time: [0.005s, 0.0s] */
{
  uint8_T rtb_ROSInputy_o2;
  uint8_T rtb_ROSInputx_o2;
  uint8_T rtb_ROSInputSonar_o2;

  {                                    /* Sample time: [0.005s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* FromWorkspace: '<S3>/fromWS_Signal 1' */
  {
    real32_T *pDataValues = (real32_T *)
      communicationFlightControlSystem_DW.fromWS_Signal1_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *)
      communicationFlightControlSystem_DW.fromWS_Signal1_PWORK.TimePtr;
    int_T currTimeIndex =
      communicationFlightControlSystem_DW.fromWS_Signal1_IWORK.PrevIndex;
    real_T t = communicationFlightControlSystem_M->Timing.taskTime0;
    if (t >= pTimeValues[362]) {
      {
        int_T elIdx;
        for (elIdx = 0; elIdx < 3; ++elIdx) {
          (&communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
            [0])[elIdx] = pDataValues[362];
          pDataValues += 363;
        }
      }
    } else {
      /* Get index */
      if (t <= pTimeValues[0]) {
        currTimeIndex = 0;
      } else if (t >= pTimeValues[362]) {
        currTimeIndex = 361;
      } else {
        if (t < pTimeValues[currTimeIndex]) {
          while (t < pTimeValues[currTimeIndex]) {
            currTimeIndex--;
          }
        } else {
          while (t >= pTimeValues[currTimeIndex + 1]) {
            currTimeIndex++;
          }
        }
      }

      communicationFlightControlSystem_DW.fromWS_Signal1_IWORK.PrevIndex =
        currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            {
              int_T elIdx;
              for (elIdx = 0; elIdx < 3; ++elIdx) {
                (&communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
                  [0])[elIdx] = pDataValues[currTimeIndex];
                pDataValues += 363;
              }
            }
          } else {
            {
              int_T elIdx;
              for (elIdx = 0; elIdx < 3; ++elIdx) {
                (&communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
                  [0])[elIdx] = pDataValues[currTimeIndex + 1];
                pDataValues += 363;
              }
            }
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real32_T d1;
          real32_T d2;
          int_T TimeIndex= currTimeIndex;

          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 3; ++elIdx) {
              d1 = pDataValues[TimeIndex];
              d2 = pDataValues[TimeIndex + 1];
              (&communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
                [0])[elIdx] = (real32_T) rtInterpolate(d1, d2, f1, f2);
              pDataValues += 363;
            }
          }
        }
      }
    }
  }

  /* BusAssignment: '<Root>/Bus Assignment2' incorporates:
   *  BusAssignment: '<Root>/Bus Assignment1'
   *  Inport: '<Root>/AC cmd'
   */
  communicationFlightControlSystem_B.rtb_BusAssignment2_c = cmd_inport;

  /* BusAssignment: '<Root>/Bus Assignment1' incorporates:
   *  BusAssignment: '<Root>/Bus Assignment2'
   */
  communicationFlightControlSystem_B.rtb_BusAssignment2_c.pos_ref[0] =
    communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
    [0];
  communicationFlightControlSystem_B.rtb_BusAssignment2_c.pos_ref[1] =
    communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
    [1];
  communicationFlightControlSystem_B.rtb_BusAssignment2_c.pos_ref[2] =
    communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
    [2];

  /* FromWorkspace: '<S3>/From Workspace' */
  {
    real_T t = communicationFlightControlSystem_M->Timing.taskTime0;
    real_T *pTimeValues = (real_T *)
      communicationFlightControlSystem_DW.FromWorkspace_PWORK.TimePtr;
    real32_T *pDataValues = (real32_T *)
      communicationFlightControlSystem_DW.FromWorkspace_PWORK.DataPtr;
    if (t < pTimeValues[0]) {
      {
        int_T elIdx;
        for (elIdx = 0; elIdx < 3; ++elIdx) {
          (&communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
            [0])[elIdx] = 0.0F;
        }
      }
    } else if (t == pTimeValues[1]) {
      {
        int_T elIdx;
        for (elIdx = 0; elIdx < 3; ++elIdx) {
          (&communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
            [0])[elIdx] = pDataValues[1];
          pDataValues += 2;
        }
      }
    } else if (t > pTimeValues[1]) {
      {
        int_T elIdx;
        for (elIdx = 0; elIdx < 3; ++elIdx) {
          (&communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
            [0])[elIdx] = 0.0F;
        }
      }
    } else {
      int_T currTimeIndex =
        communicationFlightControlSystem_DW.FromWorkspace_IWORK.PrevIndex;
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      {
        int_T elIdx;
        for (elIdx = 0; elIdx < 3; ++elIdx) {
          (&communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
            [0])[elIdx] = pDataValues[currTimeIndex];
          pDataValues += 2;
        }
      }

      communicationFlightControlSystem_DW.FromWorkspace_IWORK.PrevIndex =
        currTimeIndex;
    }
  }

  /* BusAssignment: '<Root>/Bus Assignment2' */
  communicationFlightControlSystem_B.rtb_BusAssignment2_c.orient_ref[0] =
    communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
    [0];
  communicationFlightControlSystem_B.rtb_BusAssignment2_c.orient_ref[1] =
    communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
    [1];
  communicationFlightControlSystem_B.rtb_BusAssignment2_c.orient_ref[2] =
    communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
    [2];

  /* MATLABSystem: '<Root>/ROS Input Sonar' */
  communicationFlightControlSystem_B.rtb_RateTransition_b = rt_roundd_snf
    (communicationFlightControlSystem_DW.obj.isServer_);
  if (communicationFlightControlSystem_B.rtb_RateTransition_b < 65536.0) {
    if (communicationFlightControlSystem_B.rtb_RateTransition_b >= 0.0) {
      communicationFlightControlSystem_B.u0 = (uint16_T)
        communicationFlightControlSystem_B.rtb_RateTransition_b;
    } else {
      communicationFlightControlSystem_B.u0 = 0U;
    }
  } else {
    communicationFlightControlSystem_B.u0 = MAX_uint16_T;
  }

  TCPStreamStepRecv(&communicationFlightControlSystem_B.b_varargout_1,
                    &rtb_ROSInputSonar_o2, 4,
                    communicationFlightControlSystem_DW.obj.connStream_,
                    &communicationFlightControlSystem_B.errorNo,
                    communicationFlightControlSystem_B.u0);
  if (communicationFlightControlSystem_DW.obj.isLittleEnd_ == 1) {
    memcpy((void *)&communicationFlightControlSystem_B.b_x[0], (void *)
           &communicationFlightControlSystem_B.b_varargout_1, (uint32_T)((size_t)
            4 * sizeof(uint8_T)));
    communicationFlightControlSystem_B.xtmp =
      communicationFlightControlSystem_B.b_x[0];
    communicationFlightControlSystem_B.b_x[0] =
      communicationFlightControlSystem_B.b_x[3];
    communicationFlightControlSystem_B.b_x[3] =
      communicationFlightControlSystem_B.xtmp;
    communicationFlightControlSystem_B.xtmp =
      communicationFlightControlSystem_B.b_x[1];
    communicationFlightControlSystem_B.b_x[1] =
      communicationFlightControlSystem_B.b_x[2];
    communicationFlightControlSystem_B.b_x[2] =
      communicationFlightControlSystem_B.xtmp;
    memcpy((void *)&communicationFlightControlSystem_B.b_varargout_1, (void *)
           &communicationFlightControlSystem_B.b_x[0], (uint32_T)((size_t)1 *
            sizeof(real32_T)));
  }

  /* Switch: '<Root>/Switch' incorporates:
   *  MATLABSystem: '<Root>/ROS Input Sonar'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  if (communicationFlightControlSystem_B.b_varargout_1 >=
      communicationFlightControlSystem_P.Switch_Threshold) {
    communicationFlightControlSystem_DW.UnitDelay_DSTATE =
      communicationFlightControlSystem_B.b_varargout_1;
  }

  /* End of Switch: '<Root>/Switch' */

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  Inport: '<Root>/Sensors'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  communicationFlightControlSystem_B.BusAssignment = sensor_inport;
  communicationFlightControlSystem_B.BusAssignment.HALSensors.HAL_ultrasound_SI.altitude
    = communicationFlightControlSystem_DW.UnitDelay_DSTATE;

  /* RateTransition: '<Root>/Rate Transition' */
  communicationFlightControlSystem_B.rtb_RateTransition_b =
    communicationFlightControlSystem_DW.RateTransition_Buffer[communicationFlightControlSystem_DW.RateTransition_ActiveBufIdx];

  /* Outputs for Atomic SubSystem: '<Root>/Flight Control System' */
  communicationFlightControlSystem_FlightControlSystem
    (communicationFlightControlSystem_M,
     &communicationFlightControlSystem_B.rtb_BusAssignment2_c,
     &communicationFlightControlSystem_B.BusAssignment,
     communicationFlightControlSystem_B.rtb_RateTransition_b, motors_outport,
     &flag_outport, &communicationFlightControlSystem_B.FlightControlSystem,
     &communicationFlightControlSystem_DW.FlightControlSystem,
     &communicationFlightControlSystem_P.FlightControlSystem);

  /* End of Outputs for SubSystem: '<Root>/Flight Control System' */

  /* Outport: '<Root>/Actuators' */
  communicationFlightControlSystem_Y.Actuators[0] = motors_outport[0];
  communicationFlightControlSystem_Y.Actuators[1] = motors_outport[1];
  communicationFlightControlSystem_Y.Actuators[2] = motors_outport[2];
  communicationFlightControlSystem_Y.Actuators[3] = motors_outport[3];

  /* MATLABSystem: '<Root>/ROS Input x' */
  communicationFlightControlSystem_B.rtb_RateTransition_b = rt_roundd_snf
    (communicationFlightControlSystem_DW.obj_a.isServer_);
  if (communicationFlightControlSystem_B.rtb_RateTransition_b < 65536.0) {
    if (communicationFlightControlSystem_B.rtb_RateTransition_b >= 0.0) {
      communicationFlightControlSystem_B.u0 = (uint16_T)
        communicationFlightControlSystem_B.rtb_RateTransition_b;
    } else {
      communicationFlightControlSystem_B.u0 = 0U;
    }
  } else {
    communicationFlightControlSystem_B.u0 = MAX_uint16_T;
  }

  TCPStreamStepRecv(&communicationFlightControlSystem_B.b_varargout_1,
                    &rtb_ROSInputx_o2, 4,
                    communicationFlightControlSystem_DW.obj_a.connStream_,
                    &communicationFlightControlSystem_B.errorNo,
                    communicationFlightControlSystem_B.u0);
  if (communicationFlightControlSystem_DW.obj_a.isLittleEnd_ == 1) {
    memcpy((void *)&communicationFlightControlSystem_B.b_x_p[0], (void *)
           &communicationFlightControlSystem_B.b_varargout_1, (uint32_T)((size_t)
            4 * sizeof(uint8_T)));
    communicationFlightControlSystem_B.xtmp =
      communicationFlightControlSystem_B.b_x_p[0];
    communicationFlightControlSystem_B.b_x_p[0] =
      communicationFlightControlSystem_B.b_x_p[3];
    communicationFlightControlSystem_B.b_x_p[3] =
      communicationFlightControlSystem_B.xtmp;
    communicationFlightControlSystem_B.xtmp =
      communicationFlightControlSystem_B.b_x_p[1];
    communicationFlightControlSystem_B.b_x_p[1] =
      communicationFlightControlSystem_B.b_x_p[2];
    communicationFlightControlSystem_B.b_x_p[2] =
      communicationFlightControlSystem_B.xtmp;
    memcpy((void *)&communicationFlightControlSystem_B.b_varargout_1, (void *)
           &communicationFlightControlSystem_B.b_x_p[0], (uint32_T)((size_t)1 *
            sizeof(real32_T)));
  }

  /* Switch: '<Root>/Switch1' incorporates:
   *  MATLABSystem: '<Root>/ROS Input x'
   *  UnitDelay: '<Root>/Unit Delay1'
   */
  if (communicationFlightControlSystem_B.b_varargout_1 >=
      communicationFlightControlSystem_P.Switch1_Threshold) {
    communicationFlightControlSystem_DW.UnitDelay1_DSTATE =
      communicationFlightControlSystem_B.b_varargout_1;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* MATLABSystem: '<Root>/ROS Input y' */
  communicationFlightControlSystem_B.rtb_RateTransition_b = rt_roundd_snf
    (communicationFlightControlSystem_DW.obj_e.isServer_);
  if (communicationFlightControlSystem_B.rtb_RateTransition_b < 65536.0) {
    if (communicationFlightControlSystem_B.rtb_RateTransition_b >= 0.0) {
      communicationFlightControlSystem_B.u0 = (uint16_T)
        communicationFlightControlSystem_B.rtb_RateTransition_b;
    } else {
      communicationFlightControlSystem_B.u0 = 0U;
    }
  } else {
    communicationFlightControlSystem_B.u0 = MAX_uint16_T;
  }

  TCPStreamStepRecv(&communicationFlightControlSystem_B.b_varargout_1,
                    &rtb_ROSInputy_o2, 4,
                    communicationFlightControlSystem_DW.obj_e.connStream_,
                    &communicationFlightControlSystem_B.errorNo,
                    communicationFlightControlSystem_B.u0);
  if (communicationFlightControlSystem_DW.obj_e.isLittleEnd_ == 1) {
    memcpy((void *)&communicationFlightControlSystem_B.b_x_c[0], (void *)
           &communicationFlightControlSystem_B.b_varargout_1, (uint32_T)((size_t)
            4 * sizeof(uint8_T)));
    communicationFlightControlSystem_B.xtmp =
      communicationFlightControlSystem_B.b_x_c[0];
    communicationFlightControlSystem_B.b_x_c[0] =
      communicationFlightControlSystem_B.b_x_c[3];
    communicationFlightControlSystem_B.b_x_c[3] =
      communicationFlightControlSystem_B.xtmp;
    communicationFlightControlSystem_B.xtmp =
      communicationFlightControlSystem_B.b_x_c[1];
    communicationFlightControlSystem_B.b_x_c[1] =
      communicationFlightControlSystem_B.b_x_c[2];
    communicationFlightControlSystem_B.b_x_c[2] =
      communicationFlightControlSystem_B.xtmp;
    memcpy((void *)&communicationFlightControlSystem_B.b_varargout_1, (void *)
           &communicationFlightControlSystem_B.b_x_c[0], (uint32_T)((size_t)1 *
            sizeof(real32_T)));
  }

  /* Switch: '<Root>/Switch2' incorporates:
   *  MATLABSystem: '<Root>/ROS Input y'
   *  UnitDelay: '<Root>/Unit Delay2'
   */
  if (communicationFlightControlSystem_B.b_varargout_1 >=
      communicationFlightControlSystem_P.Switch2_Threshold) {
    communicationFlightControlSystem_DW.UnitDelay2_DSTATE =
      communicationFlightControlSystem_B.b_varargout_1;
  }

  /* End of Switch: '<Root>/Switch2' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtTo Workspace2Inport1' incorporates:
   *  UnitDelay: '<Root>/Unit Delay'
   *  UnitDelay: '<Root>/Unit Delay1'
   *  UnitDelay: '<Root>/Unit Delay2'
   */
  communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1[0]
    = communicationFlightControlSystem_DW.UnitDelay_DSTATE;
  communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1[1]
    = communicationFlightControlSystem_DW.UnitDelay1_DSTATE;
  communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1[2]
    = communicationFlightControlSystem_DW.UnitDelay2_DSTATE;

  /* ToWorkspace: '<Root>/To Workspace2' */
  {
    double locTime = communicationFlightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)
                          communicationFlightControlSystem_DW.ToWorkspace2_PWORK.LoggedData,
                          &locTime,
                          &communicationFlightControlSystem_B.TmpSignalConversionAtToWorkspace2Inport1
                          [0]);
  }

  /* Outport: '<Root>/Flag' */
  communicationFlightControlSystem_Y.Flag = flag_outport;

  /* Matfile logging */
  rt_UpdateTXYLogVars(communicationFlightControlSystem_M->rtwLogInfo,
                      (&communicationFlightControlSystem_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(communicationFlightControlSystem_M)!=-1) &&
        !((rtmGetTFinal(communicationFlightControlSystem_M)-
           communicationFlightControlSystem_M->Timing.taskTime0) >
          communicationFlightControlSystem_M->Timing.taskTime0 * (DBL_EPSILON)))
    {
      rtmSetErrorStatus(communicationFlightControlSystem_M,
                        "Simulation finished");
    }
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  communicationFlightControlSystem_M->Timing.taskTime0 =
    (++communicationFlightControlSystem_M->Timing.clockTick0) *
    communicationFlightControlSystem_M->Timing.stepSize0;
}

/* Model step function for TID1 */
void communicationFlightControlSystem_step1(void) /* Sample time: [0.2s, 0.0s] */
{
  int32_T ns;
  int32_T ms;
  int32_T numLoops;
  int32_T p;
  boolean_T maxNumBlobsReached;
  uint8_T currentLabel;
  uint32_T walkerIdx;
  uint32_T pixIdx;
  uint32_T centerIdx;
  uint32_T padIdx;
  int32_T idx;
  int32_T n;
  int32_T m;
  real32_T centroid_idx_1;
  real32_T centroid_idx_0;

  /* Outputs for Atomic SubSystem: '<Root>/Image Processing System' */
  /* ModelReference: '<S2>/Y1UY2V to YUV' incorporates:
   *  Inport: '<Root>/Image Data'
   */
  conversionYUV(&imRGB[0], &communicationFlightControlSystem_B.Y1UY2VtoYUV_o1[0],
                &communicationFlightControlSystem_B.Y1UY2VtoYUV_o2[0],
                &communicationFlightControlSystem_B.Y1UY2VtoYUV_o3[0],
                &(communicationFlightControlSystem_DW.Y1UY2VtoYUV_InstanceData.rtb));

  /* S-Function (svipcolorconv): '<S2>/Color Space  Conversion' */
  /* Precompute constants */
  pixIdx = ((uint16_T)26149U) * 128U;
  padIdx = (((uint16_T)6419U) * 128U + ((uint16_T)13320U) * 128U) + 8192U;
  centerIdx = ((uint16_T)33050U) * 128U;
  for (communicationFlightControlSystem_B.k = 0;
       communicationFlightControlSystem_B.k < 19200;
       communicationFlightControlSystem_B.k++) {
    /* Convert YcbCr to RGB; apply coefficients and offsets */
    /* derived from the ITU BT.601-5 recommendation; all of the */
    /* coefficients and offsets are scaled (by 2^14) such that */
    /* the conversion can be done using integer arithmetic; this */
    /* routine relies on the user supplying the data in proper */
    /* ranges: Y [16..235], Cb & Cr [16..240] */
    /* Note that all of the operations are grouped in such a way */
    /* that the arithmetic can be done using unsigned integers */
    /* Given that Y is in the proper range, yDiff should */
    /* always be positive */
    communicationFlightControlSystem_B.yDiff =
      communicationFlightControlSystem_B.Y1UY2VtoYUV_o1[communicationFlightControlSystem_B.k]
      - 16U;

    /* Red; 8192 in this equations is 0.5*2^14 or 2^13; adding 0.5  */
    /* before truncation will result in rounding */
    communicationFlightControlSystem_B.pos =
      (communicationFlightControlSystem_B.yDiff * ((uint16_T)19077U) + (uint32_T)
       communicationFlightControlSystem_B.Y1UY2VtoYUV_o3[communicationFlightControlSystem_B.k]
       * ((uint16_T)26149U)) + 8192U;
    if (communicationFlightControlSystem_B.pos > pixIdx) {
      communicationFlightControlSystem_B.pos -= pixIdx;
    } else {
      communicationFlightControlSystem_B.pos = 0U;
    }

    walkerIdx = communicationFlightControlSystem_B.pos >> 14;

    /* limit to avoid wrapping */
    if (walkerIdx > 255U) {
      walkerIdx = 255U;
    }

    /* Compute green channel */
    communicationFlightControlSystem_B.pos =
      communicationFlightControlSystem_B.yDiff * ((uint16_T)19077U) + padIdx;
    communicationFlightControlSystem_B.neg = (uint32_T)
      communicationFlightControlSystem_B.Y1UY2VtoYUV_o2[communicationFlightControlSystem_B.k]
      * ((uint16_T)6419U) + (uint32_T)
      communicationFlightControlSystem_B.Y1UY2VtoYUV_o3[communicationFlightControlSystem_B.k]
      * ((uint16_T)13320U);

    /* scale back */
    if (communicationFlightControlSystem_B.pos >
        communicationFlightControlSystem_B.neg) {
      communicationFlightControlSystem_B.pos -=
        communicationFlightControlSystem_B.neg;
    } else {
      communicationFlightControlSystem_B.pos = 0U;
    }

    communicationFlightControlSystem_B.neg =
      communicationFlightControlSystem_B.pos >> 14;
    if (communicationFlightControlSystem_B.neg > 255U) {
      communicationFlightControlSystem_B.neg = 255U;
    }

    /* Compute blue channel */
    communicationFlightControlSystem_B.pos =
      (communicationFlightControlSystem_B.yDiff * ((uint16_T)19077U) + (uint32_T)
       communicationFlightControlSystem_B.Y1UY2VtoYUV_o2[communicationFlightControlSystem_B.k]
       * ((uint16_T)33050U)) + 8192U;

    /* scale back */
    if (communicationFlightControlSystem_B.pos > centerIdx) {
      communicationFlightControlSystem_B.pos -= centerIdx;
    } else {
      communicationFlightControlSystem_B.pos = 0U;
    }

    communicationFlightControlSystem_B.yDiff =
      communicationFlightControlSystem_B.pos >> 14;
    if (communicationFlightControlSystem_B.yDiff > 255U) {
      communicationFlightControlSystem_B.yDiff = 255U;
    }

    /* assign back the results */
    communicationFlightControlSystem_B.ColorSpaceConversion_o1[communicationFlightControlSystem_B.k]
      = (uint8_T)walkerIdx;
    communicationFlightControlSystem_B.ColorSpaceConversion_o2[communicationFlightControlSystem_B.k]
      = (uint8_T)communicationFlightControlSystem_B.neg;
    communicationFlightControlSystem_B.ColorSpaceConversion_o3[communicationFlightControlSystem_B.k]
      = (uint8_T)communicationFlightControlSystem_B.yDiff;
  }

  /* End of S-Function (svipcolorconv): '<S2>/Color Space  Conversion' */

  /* RelationalOperator: '<S2>/Relational Operator1' incorporates:
   *  Constant: '<S2>/Constant'
   *  Sum: '<S2>/Sum'
   */
  for (communicationFlightControlSystem_B.k = 0;
       communicationFlightControlSystem_B.k < 19200;
       communicationFlightControlSystem_B.k++) {
    /* Sum: '<S2>/Sum' */
    n =
      (communicationFlightControlSystem_B.ColorSpaceConversion_o1[communicationFlightControlSystem_B.k]
       - communicationFlightControlSystem_B.ColorSpaceConversion_o2[communicationFlightControlSystem_B.k])
      - communicationFlightControlSystem_B.ColorSpaceConversion_o3[communicationFlightControlSystem_B.k];
    if (n < 0) {
      n = 0;
    }

    communicationFlightControlSystem_B.RelationalOperator1[communicationFlightControlSystem_B.k]
      = (n > communicationFlightControlSystem_P.Constant_Value);
  }

  /* End of RelationalOperator: '<S2>/Relational Operator1' */

  /* S-Function (svipblob): '<S2>/Blob Analysis' */
  maxNumBlobsReached = false;
  memset(&communicationFlightControlSystem_DW.BlobAnalysis_PAD_DW[0], 0, 123U *
         sizeof(uint8_T));
  currentLabel = 1U;
  communicationFlightControlSystem_B.k = 0;
  idx = 123;
  for (n = 0; n < 160; n++) {
    for (m = 0; m < 120; m++) {
      communicationFlightControlSystem_DW.BlobAnalysis_PAD_DW[idx] = (uint8_T)
        (communicationFlightControlSystem_B.RelationalOperator1[communicationFlightControlSystem_B.k]
         ? 255 : 0);
      communicationFlightControlSystem_B.k++;
      idx++;
    }

    communicationFlightControlSystem_DW.BlobAnalysis_PAD_DW[idx] = 0U;
    communicationFlightControlSystem_DW.BlobAnalysis_PAD_DW[idx + 1] = 0U;
    idx += 2;
  }

  memset(&communicationFlightControlSystem_DW.BlobAnalysis_PAD_DW[idx], 0, 121U *
         sizeof(uint8_T));
  idx = 0;
  pixIdx = 0U;
  n = 0;
  while (n < 160) {
    communicationFlightControlSystem_B.j = 0;
    ns = (idx + 1) * 122;
    m = 0;
    while (m < 120) {
      padIdx = (uint32_T)((ns + communicationFlightControlSystem_B.j) + 1);
      if (communicationFlightControlSystem_DW.BlobAnalysis_PAD_DW[padIdx] == 255)
      {
        communicationFlightControlSystem_DW.BlobAnalysis_PAD_DW[padIdx] =
          currentLabel;
        communicationFlightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[pixIdx] =
          (int16_T)idx;
        communicationFlightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[pixIdx] =
          (int16_T)communicationFlightControlSystem_B.j;
        pixIdx++;
        ms = currentLabel - 1;
        communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[ms] = 1U;
        communicationFlightControlSystem_DW.BlobAnalysis_STACK_DW[0U] = padIdx;
        padIdx = 1U;
        while (padIdx != 0U) {
          padIdx--;
          centerIdx =
            communicationFlightControlSystem_DW.BlobAnalysis_STACK_DW[padIdx];
          for (communicationFlightControlSystem_B.k = 0;
               communicationFlightControlSystem_B.k < 8;
               communicationFlightControlSystem_B.k++) {
            walkerIdx = centerIdx +
              rtCP_BlobAnalysis_WALKER_RTP[communicationFlightControlSystem_B.k];
            if (communicationFlightControlSystem_DW.BlobAnalysis_PAD_DW[walkerIdx]
                == 255) {
              communicationFlightControlSystem_DW.BlobAnalysis_PAD_DW[walkerIdx]
                = currentLabel;
              communicationFlightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[pixIdx]
                = (int16_T)((int16_T)(walkerIdx / 122U) - 1);
              communicationFlightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[pixIdx]
                = (int16_T)(walkerIdx % 122U - 1U);
              pixIdx++;
              communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[ms]++;
              communicationFlightControlSystem_DW.BlobAnalysis_STACK_DW[padIdx] =
                walkerIdx;
              padIdx++;
            }
          }
        }

        if (currentLabel == 50) {
          maxNumBlobsReached = true;
          n = 160;
          m = 120;
        }

        if (m < 120) {
          currentLabel++;
        }
      }

      communicationFlightControlSystem_B.j++;
      m++;
    }

    idx++;
    n++;
  }

  n = maxNumBlobsReached ? (int32_T)currentLabel : (int32_T)(uint8_T)
    (currentLabel - 1U);
  m = 0;
  idx = 0;
  communicationFlightControlSystem_B.k = 0;
  while (communicationFlightControlSystem_B.k < n) {
    communicationFlightControlSystem_B.rtb_BlobAnalysis_o1_k[communicationFlightControlSystem_B.k]
      = (int32_T)
      communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[communicationFlightControlSystem_B.k];
    ns = 0;
    ms = 0;
    if (communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[communicationFlightControlSystem_B.k]
        <= 260000U) {
      communicationFlightControlSystem_B.j = 0;
      while (communicationFlightControlSystem_B.j < (int32_T)
             communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[communicationFlightControlSystem_B.k])
      {
        ns +=
          communicationFlightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[communicationFlightControlSystem_B.j
          + idx];
        ms +=
          communicationFlightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[communicationFlightControlSystem_B.j
          + m];
        communicationFlightControlSystem_B.j++;
      }

      centroid_idx_0 = (real32_T)ms / (real32_T)
        communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[communicationFlightControlSystem_B.k];
      centroid_idx_1 = (real32_T)ns / (real32_T)
        communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[communicationFlightControlSystem_B.k];
    } else {
      numLoops = (int32_T)((real32_T)
                           communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW
                           [communicationFlightControlSystem_B.k] / 260000.0F);
      centroid_idx_0 = 0.0F;
      centroid_idx_1 = 0.0F;
      for (p = 0; p < numLoops; p++) {
        ns = 0;
        ms = 0;
        for (communicationFlightControlSystem_B.j = 0;
             communicationFlightControlSystem_B.j < 260000;
             communicationFlightControlSystem_B.j++) {
          ns += communicationFlightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW
            [(idx + communicationFlightControlSystem_B.j) + p * 260000];
          ms += communicationFlightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[(m
            + communicationFlightControlSystem_B.j) + p * 260000];
        }

        centroid_idx_0 += (real32_T)ms / (real32_T)
          communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[communicationFlightControlSystem_B.k];
        centroid_idx_1 += (real32_T)ns / (real32_T)
          communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[communicationFlightControlSystem_B.k];
      }

      ns = 0;
      ms = 0;
      numLoops *= 260000;
      p = (int32_T)
        (communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[communicationFlightControlSystem_B.k]
         - numLoops);
      communicationFlightControlSystem_B.j = 0;
      while (communicationFlightControlSystem_B.j < p) {
        ns += communicationFlightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW
          [(communicationFlightControlSystem_B.j + idx) + numLoops];
        ms += communicationFlightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW
          [(communicationFlightControlSystem_B.j + m) + numLoops];
        communicationFlightControlSystem_B.j++;
      }

      centroid_idx_0 += (real32_T)ms / (real32_T)
        communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[communicationFlightControlSystem_B.k];
      centroid_idx_1 += (real32_T)ns / (real32_T)
        communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[communicationFlightControlSystem_B.k];
    }

    communicationFlightControlSystem_B.rtb_BlobAnalysis_o2_c[communicationFlightControlSystem_B.k]
      = centroid_idx_1 + 1.0F;
    pixIdx = 50U + communicationFlightControlSystem_B.k;
    communicationFlightControlSystem_B.rtb_BlobAnalysis_o2_c[pixIdx] =
      centroid_idx_0 + 1.0F;
    ns = 160;
    ms = 120;
    numLoops = 0;
    p = 0;
    communicationFlightControlSystem_B.j = 0;
    while (communicationFlightControlSystem_B.j < (int32_T)
           communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[communicationFlightControlSystem_B.k])
    {
      communicationFlightControlSystem_B.j_pixListNinc =
        communicationFlightControlSystem_B.j + idx;
      if (communicationFlightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[communicationFlightControlSystem_B.j_pixListNinc]
          < ns) {
        ns =
          communicationFlightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[communicationFlightControlSystem_B.j_pixListNinc];
      }

      if (communicationFlightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[communicationFlightControlSystem_B.j_pixListNinc]
          > numLoops) {
        numLoops =
          communicationFlightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[communicationFlightControlSystem_B.j_pixListNinc];
      }

      communicationFlightControlSystem_B.j_pixListNinc =
        communicationFlightControlSystem_B.j + m;
      if (communicationFlightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[communicationFlightControlSystem_B.j_pixListNinc]
          < ms) {
        ms =
          communicationFlightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[communicationFlightControlSystem_B.j_pixListNinc];
      }

      if (communicationFlightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[communicationFlightControlSystem_B.j_pixListNinc]
          > p) {
        p =
          communicationFlightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[communicationFlightControlSystem_B.j_pixListNinc];
      }

      communicationFlightControlSystem_B.j++;
    }

    communicationFlightControlSystem_B.rtb_BlobAnalysis_o3_m[communicationFlightControlSystem_B.k]
      = ns + 1;
    communicationFlightControlSystem_B.rtb_BlobAnalysis_o3_m[pixIdx] = ms + 1;
    communicationFlightControlSystem_B.rtb_BlobAnalysis_o3_m[100 +
      communicationFlightControlSystem_B.k] = (numLoops - ns) + 1;
    communicationFlightControlSystem_B.rtb_BlobAnalysis_o3_m[150 +
      communicationFlightControlSystem_B.k] = (p - ms) + 1;
    m += (int32_T)
      communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[communicationFlightControlSystem_B.k];
    idx += (int32_T)
      communicationFlightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[communicationFlightControlSystem_B.k];
    communicationFlightControlSystem_B.k++;
  }

  communicationFlightControlSystem_B.k = n;
  while (communicationFlightControlSystem_B.k < 50) {
    communicationFlightControlSystem_B.rtb_BlobAnalysis_o1_k[communicationFlightControlSystem_B.k]
      = (-1);
    communicationFlightControlSystem_B.k++;
  }

  communicationFlightControlSystem_B.k = n;
  while (communicationFlightControlSystem_B.k < 50) {
    communicationFlightControlSystem_B.rtb_BlobAnalysis_o2_c[communicationFlightControlSystem_B.k]
      = (-1.0F);
    communicationFlightControlSystem_B.k++;
  }

  communicationFlightControlSystem_B.k = 50 + n;
  while (communicationFlightControlSystem_B.k < 100) {
    communicationFlightControlSystem_B.rtb_BlobAnalysis_o2_c[communicationFlightControlSystem_B.k]
      = (-1.0F);
    communicationFlightControlSystem_B.k++;
  }

  communicationFlightControlSystem_B.k = n;
  while (communicationFlightControlSystem_B.k < 50) {
    communicationFlightControlSystem_B.rtb_BlobAnalysis_o3_m[communicationFlightControlSystem_B.k]
      = (-1);
    communicationFlightControlSystem_B.k++;
  }

  communicationFlightControlSystem_B.k = 50 + n;
  while (communicationFlightControlSystem_B.k < 100) {
    communicationFlightControlSystem_B.rtb_BlobAnalysis_o3_m[communicationFlightControlSystem_B.k]
      = (-1);
    communicationFlightControlSystem_B.k++;
  }

  communicationFlightControlSystem_B.k = 100 + n;
  while (communicationFlightControlSystem_B.k < 150) {
    communicationFlightControlSystem_B.rtb_BlobAnalysis_o3_m[communicationFlightControlSystem_B.k]
      = (-1);
    communicationFlightControlSystem_B.k++;
  }

  communicationFlightControlSystem_B.k = 150 + n;
  while (communicationFlightControlSystem_B.k < 200) {
    communicationFlightControlSystem_B.rtb_BlobAnalysis_o3_m[communicationFlightControlSystem_B.k]
      = (-1);
    communicationFlightControlSystem_B.k++;
  }

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/One'
   *  Constant: '<S2>/One1'
   *  Constant: '<S2>/One2'
   *  RelationalOperator: '<S2>/Relational Operator'
   *  S-Function (svipblob): '<S2>/Blob Analysis'
   */
  if (n >= communicationFlightControlSystem_P.One_Value) {
    communicationFlightControlSystem_B.Switch =
      communicationFlightControlSystem_P.One1_Value;
  } else {
    communicationFlightControlSystem_B.Switch =
      communicationFlightControlSystem_P.One2_Value;
  }

  /* End of Switch: '<S2>/Switch' */
  /* End of Outputs for SubSystem: '<Root>/Image Processing System' */

  /* Update for RateTransition: '<Root>/Rate Transition' */
  communicationFlightControlSystem_DW.RateTransition_Buffer[communicationFlightControlSystem_DW.RateTransition_ActiveBufIdx
    == 0] = communicationFlightControlSystem_B.Switch;
  communicationFlightControlSystem_DW.RateTransition_ActiveBufIdx = (int8_T)
    (communicationFlightControlSystem_DW.RateTransition_ActiveBufIdx == 0);
}

/* Model initialize function */
void communicationFlightControlSystem_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)communicationFlightControlSystem_M, 0,
                sizeof(RT_MODEL_communicationFlightControlSystem_T));
  rtmSetTFinal(communicationFlightControlSystem_M, 30.0);
  communicationFlightControlSystem_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    communicationFlightControlSystem_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(communicationFlightControlSystem_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(communicationFlightControlSystem_M->rtwLogInfo, (NULL));
    rtliSetLogT(communicationFlightControlSystem_M->rtwLogInfo, "tout");
    rtliSetLogX(communicationFlightControlSystem_M->rtwLogInfo, "");
    rtliSetLogXFinal(communicationFlightControlSystem_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(communicationFlightControlSystem_M->rtwLogInfo,
      "rt_");
    rtliSetLogFormat(communicationFlightControlSystem_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(communicationFlightControlSystem_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(communicationFlightControlSystem_M->rtwLogInfo, 1);

    /*
     * Set pointers to the data and signal info for each output
     */
    {
      static void * rt_LoggedOutputSignalPtrs[] = {
        &communicationFlightControlSystem_Y.Actuators[0],
        &communicationFlightControlSystem_Y.Flag
      };

      rtliSetLogYSignalPtrs(communicationFlightControlSystem_M->rtwLogInfo,
                            ((LogSignalPtrsType)rt_LoggedOutputSignalPtrs));
    }

    {
      static int_T rt_LoggedOutputWidths[] = {
        4,
        1
      };

      static int_T rt_LoggedOutputNumDimensions[] = {
        1,
        1
      };

      static int_T rt_LoggedOutputDimensions[] = {
        4,
        1
      };

      static boolean_T rt_LoggedOutputIsVarDims[] = {
        0,
        0
      };

      static void* rt_LoggedCurrentSignalDimensions[] = {
        (NULL),
        (NULL)
      };

      static int_T rt_LoggedCurrentSignalDimensionsSize[] = {
        4,
        4
      };

      static BuiltInDTypeId rt_LoggedOutputDataTypeIds[] = {
        SS_SINGLE,
        SS_UINT8
      };

      static int_T rt_LoggedOutputComplexSignals[] = {
        0,
        0
      };

      static RTWPreprocessingFcnPtr rt_LoggingPreprocessingFcnPtrs[] = {
        (NULL),
        (NULL)
      };

      static const char_T *rt_LoggedOutputLabels[] = {
        "motors",
        "flag" };

      static const char_T *rt_LoggedOutputBlockNames[] = {
        "communicationFlightControlSystem/Actuators",
        "communicationFlightControlSystem/Flag" };

      static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert[] = {
        { 0, SS_SINGLE, SS_SINGLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_UINT8, SS_UINT8, 0, 0, 0, 1.0, 0, 0.0 }
      };

      static RTWLogSignalInfo rt_LoggedOutputSignalInfo[] = {
        {
          2,
          rt_LoggedOutputWidths,
          rt_LoggedOutputNumDimensions,
          rt_LoggedOutputDimensions,
          rt_LoggedOutputIsVarDims,
          rt_LoggedCurrentSignalDimensions,
          rt_LoggedCurrentSignalDimensionsSize,
          rt_LoggedOutputDataTypeIds,
          rt_LoggedOutputComplexSignals,
          (NULL),
          rt_LoggingPreprocessingFcnPtrs,

          { rt_LoggedOutputLabels },
          (NULL),
          (NULL),
          (NULL),

          { rt_LoggedOutputBlockNames },

          { (NULL) },
          (NULL),
          rt_RTWLogDataTypeConvert
        }
      };

      rtliSetLogYSignalInfo(communicationFlightControlSystem_M->rtwLogInfo,
                            rt_LoggedOutputSignalInfo);

      /* set currSigDims field */
      rt_LoggedCurrentSignalDimensions[0] = &rt_LoggedOutputWidths[0];
      rt_LoggedCurrentSignalDimensions[1] = &rt_LoggedOutputWidths[1];
    }

    rtliSetLogY(communicationFlightControlSystem_M->rtwLogInfo, "yout");
  }

  /* block I/O */
  (void) memset(((void *) &communicationFlightControlSystem_B), 0,
                sizeof(B_communicationFlightControlSystem_T));

  /* exported global signals */
  motors_outport[0] = 0.0F;
  motors_outport[1] = 0.0F;
  motors_outport[2] = 0.0F;
  motors_outport[3] = 0.0F;
  flag_outport = 0U;

  /* states (dwork) */
  (void) memset((void *)&communicationFlightControlSystem_DW, 0,
                sizeof(DW_communicationFlightControlSystem_T));

  /* external inputs */
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));

  /* external outputs */
  (void) memset((void *)&communicationFlightControlSystem_Y, 0,
                sizeof(ExtY_communicationFlightControlSystem_T));

  /* Model Initialize function for ModelReference Block: '<S6>/Default Controller' */
  flightController_g_initialize(rtmGetErrorStatusPointer
    (communicationFlightControlSystem_M));

  /* Model Initialize function for ModelReference Block: '<S1>/estimator' */
  stateEstimator_o_initialize(rtmGetErrorStatusPointer
    (communicationFlightControlSystem_M));

  /* Model Initialize function for ModelReference Block: '<S2>/Y1UY2V to YUV' */
  conversionYUV_initialize(rtmGetErrorStatusPointer
    (communicationFlightControlSystem_M),
    &(communicationFlightControlSystem_DW.Y1UY2VtoYUV_InstanceData.rtm));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime
    (communicationFlightControlSystem_M->rtwLogInfo, 0.0, rtmGetTFinal
     (communicationFlightControlSystem_M),
     communicationFlightControlSystem_M->Timing.stepSize0, (&rtmGetErrorStatus
      (communicationFlightControlSystem_M)));

  {
    static const char_T tmp[7] = { 'S', 'e', 'r', 'v', 'e', 'r', '\x00' };

    /* SetupRuntimeResources for Atomic SubSystem: '<Root>/Flight Control System' */
    communicationFlightControlSyst_FlightControlSystem_SetupRTR
      (communicationFlightControlSystem_M,
       &communicationFlightControlSystem_DW.FlightControlSystem);

    /* End of SetupRuntimeResources for SubSystem: '<Root>/Flight Control System' */

    /* SetupRuntimeResources for ToWorkspace: '<Root>/To Workspace2' */
    {
      static int_T rt_ToWksWidths[] = { 3 };

      static int_T rt_ToWksNumDimensions[] = { 1 };

      static int_T rt_ToWksDimensions[] = { 3 };

      static boolean_T rt_ToWksIsVarDims[] = { 0 };

      static void *rt_ToWksCurrSigDims[] = { (NULL) };

      static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

      static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

      static int_T rt_ToWksComplexSignals[] = { 0 };

      static int_T rt_ToWksFrameData[] = { 0 };

      static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
        (NULL)
      };

      static const char_T *rt_ToWksLabels[] = { "" };

      static RTWLogSignalInfo rt_ToWksSignalInfo = {
        1,
        rt_ToWksWidths,
        rt_ToWksNumDimensions,
        rt_ToWksDimensions,
        rt_ToWksIsVarDims,
        rt_ToWksCurrSigDims,
        rt_ToWksCurrSigDimsSize,
        rt_ToWksDataTypeIds,
        rt_ToWksComplexSignals,
        rt_ToWksFrameData,
        rt_ToWksLoggingPreprocessingFcnPtrs,

        { rt_ToWksLabels },
        (NULL),
        (NULL),
        (NULL),

        { (NULL) },

        { (NULL) },
        (NULL),
        (NULL)
      };

      static const char_T rt_ToWksBlockName[] =
        "communicationFlightControlSystem/To Workspace2";
      communicationFlightControlSystem_DW.ToWorkspace2_PWORK.LoggedData =
        rt_CreateStructLogVar(
        communicationFlightControlSystem_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(communicationFlightControlSystem_M),
        communicationFlightControlSystem_M->Timing.stepSize0,
        (&rtmGetErrorStatus(communicationFlightControlSystem_M)),
        "rt_ros",
        1,
        0,
        1,
        0.005,
        &rt_ToWksSignalInfo,
        rt_ToWksBlockName);
      if (communicationFlightControlSystem_DW.ToWorkspace2_PWORK.LoggedData ==
          (NULL))
        return;
    }

    /* Start for FromWorkspace: '<S3>/fromWS_Signal 1' */
    {
      static real_T pTimeValues0[] = { 0.0, 7.0, 7.0349061419934955,
        7.069812283986991, 7.1047184259804865, 7.139624567973982,
        7.1745307099674775, 7.2094368519609731, 7.2443429939544686,
        7.2792491359479641, 7.31415527794146, 7.3490614199349551,
        7.3839675619284506, 7.4188737039219461, 7.4537798459154416,
        7.4886859879089371, 7.5235921299024326, 7.5584982718959282,
        7.5934044138894237, 7.6283105558829192, 7.6632166978764147,
        7.69812283986991, 7.7330289818634057, 7.7679351238569012,
        7.8028412658503967, 7.8377474078438922, 7.8726535498373877,
        7.9075596918308833, 7.9424658338243788, 7.9773719758178743,
        8.01227811781137, 8.0471842598048653, 8.08209040179836,
        8.1169965437918563, 8.1519026857853518, 8.1868088277788473,
        8.2217149697723428, 8.2566211117658384, 8.2915272537593339,
        8.32643339575283, 8.3613395377463249, 8.39624567973982,
        8.4311518217333159, 8.4660579637268114, 8.5009641057203069,
        8.5358702477138024, 8.5707763897072979, 8.6056825317007934,
        8.640588673694289, 8.6754948156877845, 8.71040095768128,
        8.7453070996747755, 8.780213241668271, 8.8151193836617665,
        8.850025525655262, 8.8849316676487575, 8.919837809642253,
        8.9547439516357485, 8.9896500936292441, 9.02455623562274,
        9.0594623776162351, 9.09436851960973, 9.1292746616032261,
        9.1641808035967216, 9.1990869455902171, 9.2339930875837126,
        9.2688992295772081, 9.3038053715707036, 9.3387115135642,
        9.3736176555576947, 9.40852379755119, 9.4434299395446857,
        9.4783360815381812, 9.5132422235316767, 9.5481483655251722,
        9.5830545075186677, 9.6179606495121632, 9.6528667915056587,
        9.6877729334991542, 9.72267907549265, 9.7575852174861453,
        9.79249135947964, 9.8273975014731363, 9.8623036434666318,
        9.8972097854601273, 9.9321159274536228, 9.9670220694471183,
        10.001928211440614, 10.036834353434109, 10.071740495427605,
        10.1066466374211, 10.141552779414596, 10.176458921408091,
        10.211365063401587, 10.246271205395082, 10.281177347388578,
        10.316083489382073, 10.350989631375569, 10.385895773369064,
        10.42080191536256, 10.455708057356057, 10.490614199349553,
        10.525520341343048, 10.560426483336544, 10.595332625330039,
        10.630238767323535, 10.66514490931703, 10.700051051310526,
        10.734957193304021, 10.769863335297517, 10.804769477291012,
        10.839675619284508, 10.874581761278003, 10.909487903271499,
        10.944394045264994, 10.97930018725849, 11.014206329251985,
        11.049112471245481, 11.084018613238976, 11.118924755232472,
        11.153830897225967, 11.188737039219463, 11.223643181212958,
        11.258549323206454, 11.293455465199949, 11.328361607193445,
        11.36326774918694, 11.398173891180436, 11.433080033173932,
        11.467986175167427, 11.502892317160923, 11.537798459154418,
        11.572704601147914, 11.607610743141409, 11.642516885134905,
        11.6774230271284, 11.712329169121896, 11.747235311115391,
        11.782141453108887, 11.817047595102382, 11.851953737095878,
        11.886859879089373, 11.921766021082869, 11.956672163076364,
        11.99157830506986, 12.026484447063355, 12.061390589056852,
        12.096296731050348, 12.131202873043843, 12.166109015037339,
        12.201015157030835, 12.23592129902433, 12.270827441017826,
        12.305733583011321, 12.340639725004817, 12.375545866998312,
        12.410452008991808, 12.445358150985303, 12.480264292978799,
        12.515170434972294, 12.55007657696579, 12.584982718959285,
        12.619888860952781, 12.654795002946276, 12.689701144939772,
        12.724607286933267, 12.759513428926763, 12.794419570920258,
        12.829325712913754, 12.864231854907249, 12.899137996900745,
        12.93404413889424, 12.968950280887736, 13.003856422881231,
        13.038762564874727, 13.073668706868222, 13.108574848861718,
        13.143480990855213, 13.178387132848709, 13.213293274842204,
        13.2481994168357, 13.283105558829195, 13.318011700822691,
        13.352917842816186, 13.387823984809682, 13.422730126803177,
        13.457636268796673, 13.492542410790168, 13.527448552783664,
        13.562354694777159, 13.597260836770655, 13.63216697876415,
        13.667073120757646, 13.701979262751141, 13.736885404744637,
        13.771791546738132, 13.806697688731628, 13.841603830725123,
        13.876509972718621, 13.911416114712116, 13.946322256705612,
        13.981228398699107, 14.016134540692603, 14.051040682686098,
        14.085946824679594, 14.120852966673089, 14.155759108666585,
        14.19066525066008, 14.225571392653576, 14.260477534647071,
        14.295383676640569, 14.330289818634064, 14.36519596062756,
        14.400102102621055, 14.435008244614551, 14.469914386608046,
        14.504820528601542, 14.539726670595037, 14.574632812588533,
        14.609538954582028, 14.644445096575524, 14.679351238569019,
        14.714257380562515, 14.74916352255601, 14.784069664549506,
        14.818975806543001, 14.853881948536497, 14.888788090529992,
        14.923694232523488, 14.958600374516983, 14.993506516510479,
        15.028412658503976, 15.063318800497473, 15.098224942490969,
        15.133131084484464, 15.16803722647796, 15.202943368471455,
        15.237849510464951, 15.272755652458448, 15.307661794451944,
        15.342567936445439, 15.377474078438935, 15.41238022043243,
        15.447286362425928, 15.482192504419423, 15.517098646412919,
        15.552004788406416, 15.586910930399911, 15.621817072393407,
        15.656723214386902, 15.691629356380398, 15.726535498373893,
        15.761441640367391, 15.796347782360886, 15.831253924354382,
        15.866160066347879, 15.901066208341375, 15.93597235033487,
        15.970878492328366, 16.005784634321859, 16.040690776315355,
        16.07559691830885, 16.110503060302346, 16.145409202295841,
        16.180315344289337, 16.215221486282832, 16.250127628276328,
        16.285033770269823, 16.319939912263319, 16.354846054256814,
        16.38975219625031, 16.424658338243805, 16.4595644802373,
        16.494470622230796, 16.529376764224292, 16.564282906217787,
        16.599189048211283, 16.634095190204778, 16.669001332198274,
        16.703907474191769, 16.738813616185265, 16.77371975817876,
        16.808625900172256, 16.843532042165752, 16.878438184159247,
        16.913344326152743, 16.948250468146238, 16.983156610139734,
        17.018062752133229, 17.052968894126725, 17.08787503612022,
        17.122781178113716, 17.157687320107211, 17.192593462100707,
        17.227499604094202, 17.262405746087698, 17.297311888081193,
        17.332218030074689, 17.367124172068184, 17.40203031406168,
        17.436936456055175, 17.471842598048671, 17.506748740042166,
        17.541654882035662, 17.576561024029157, 17.611467166022653,
        17.646373308016148, 17.681279450009644, 17.716185592003139,
        17.751091733996635, 17.78599787599013, 17.820904017983626,
        17.855810159977121, 17.890716301970617, 17.925622443964112,
        17.960528585957608, 17.995434727951103, 18.0303408699446,
        18.065247011938094, 18.10015315393159, 18.135059295925085,
        18.169965437918581, 18.204871579912076, 18.239777721905572,
        18.274683863899067, 18.309590005892563, 18.344496147886058,
        18.379402289879554, 18.414308431873049, 18.449214573866545,
        18.48412071586004, 18.519026857853536, 18.553932999847031,
        18.588839141840527, 18.623745283834023, 18.658651425827518,
        18.693557567821014, 18.728463709814509, 18.763369851808005,
        18.7982759938015, 18.833182135794996, 18.868088277788491,
        18.902994419781987, 18.937900561775482, 18.972806703768978,
        19.007712845762473, 19.042618987755969, 19.077525129749464,
        19.11243127174296, 19.147337413736455, 19.182243555729951,
        19.217149697723446, 19.252055839716942, 19.286961981710437,
        19.321868123703933, 19.356774265697428, 19.391680407690924,
        19.426586549684419, 19.461492691677915, 19.49639883367141,
        19.531304975664906, 19.5662111176584, 25.0 } ;

      static real32_T pDataValues0[] = { 0.0F, 1.0F, 0.99984771F, 0.999390841F,
        0.99862951F, 0.997564077F, 0.99619472F, 0.994521916F, 0.992546141F,
        0.990268052F, 0.987688363F, 0.98480773F, 0.981627166F, 0.978147626F,
        0.974370062F, 0.970295727F, 0.965925813F, 0.96126169F, 0.956304729F,
        0.95105654F, 0.945518553F, 0.939692616F, 0.933580399F, 0.927183867F,
        0.920504868F, 0.91354543F, 0.906307817F, 0.898794055F, 0.891006529F,
        0.882947564F, 0.874619722F, 0.866025388F, 0.857167304F, 0.848048091F,
        0.838670552F, 0.829037547F, 0.819152057F, 0.809017F, 0.798635483F,
        0.788010776F, 0.777146F, 0.766044438F, 0.754709601F, 0.74314481F,
        0.7313537F, 0.719339788F, 0.707106769F, 0.694658399F, 0.681998372F,
        0.669130623F, 0.656059F, 0.642787635F, 0.629320383F, 0.615661502F,
        0.601815045F, 0.587785244F, 0.57357645F, 0.559192896F, 0.544639051F,
        0.529919267F, 0.515038073F, 0.5F, 0.484809607F, 0.469471574F,
        0.453990489F, 0.438371152F, 0.42261827F, 0.406736642F, 0.390731126F,
        0.37460658F, 0.35836795F, 0.342020154F, 0.325568169F, 0.309017F,
        0.29237169F, 0.275637358F, 0.258819044F, 0.241921902F, 0.224951059F,
        0.207911685F, 0.190809F, 0.173648179F, 0.156434461F, 0.139173105F,
        0.121869341F, 0.104528464F, 0.0871557444F, 0.0697564706F, 0.0523359552F,
        0.0348994955F, 0.0174524058F, 6.12323426E-17F, -0.0174524058F,
        -0.0348994955F, -0.0523359552F, -0.0697564706F, -0.0871557444F,
        -0.104528464F, -0.121869341F, -0.139173105F, -0.156434461F,
        -0.173648179F, -0.190809F, -0.207911685F, -0.224951059F, -0.241921902F,
        -0.258819044F, -0.275637358F, -0.29237169F, -0.309017F, -0.325568169F,
        -0.342020154F, -0.35836795F, -0.37460658F, -0.390731126F, -0.406736642F,
        -0.42261827F, -0.438371152F, -0.453990489F, -0.469471574F, -0.484809607F,
        -0.5F, -0.515038073F, -0.529919267F, -0.544639051F, -0.559192896F,
        -0.57357645F, -0.587785244F, -0.601815045F, -0.615661502F, -0.629320383F,
        -0.642787635F, -0.656059F, -0.669130623F, -0.681998372F, -0.694658399F,
        -0.707106769F, -0.719339788F, -0.7313537F, -0.74314481F, -0.754709601F,
        -0.766044438F, -0.777146F, -0.788010776F, -0.798635483F, -0.809017F,
        -0.819152057F, -0.829037547F, -0.838670552F, -0.848048091F,
        -0.857167304F, -0.866025388F, -0.874619722F, -0.882947564F,
        -0.891006529F, -0.898794055F, -0.906307817F, -0.91354543F, -0.920504868F,
        -0.927183867F, -0.933580399F, -0.939692616F, -0.945518553F, -0.95105654F,
        -0.956304729F, -0.96126169F, -0.965925813F, -0.970295727F, -0.974370062F,
        -0.978147626F, -0.981627166F, -0.98480773F, -0.987688363F, -0.990268052F,
        -0.992546141F, -0.994521916F, -0.99619472F, -0.997564077F, -0.99862951F,
        -0.999390841F, -0.99984771F, -1.0F, -0.99984771F, -0.999390841F,
        -0.99862951F, -0.997564077F, -0.99619472F, -0.994521916F, -0.992546141F,
        -0.990268052F, -0.987688363F, -0.98480773F, -0.981627166F, -0.978147626F,
        -0.974370062F, -0.970295727F, -0.965925813F, -0.96126169F, -0.956304729F,
        -0.95105654F, -0.945518553F, -0.939692616F, -0.933580399F, -0.927183867F,
        -0.920504868F, -0.91354543F, -0.906307817F, -0.898794055F, -0.891006529F,
        -0.882947564F, -0.874619722F, -0.866025388F, -0.857167304F,
        -0.848048091F, -0.838670552F, -0.829037547F, -0.819152057F, -0.809017F,
        -0.798635483F, -0.788010776F, -0.777146F, -0.766044438F, -0.754709601F,
        -0.74314481F, -0.7313537F, -0.719339788F, -0.707106769F, -0.694658399F,
        -0.681998372F, -0.669130623F, -0.656059F, -0.642787635F, -0.629320383F,
        -0.615661502F, -0.601815045F, -0.587785244F, -0.57357645F, -0.559192896F,
        -0.544639051F, -0.529919267F, -0.515038073F, -0.5F, -0.484809607F,
        -0.469471574F, -0.453990489F, -0.438371152F, -0.42261827F, -0.406736642F,
        -0.390731126F, -0.37460658F, -0.35836795F, -0.342020154F, -0.325568169F,
        -0.309017F, -0.29237169F, -0.275637358F, -0.258819044F, -0.241921902F,
        -0.224951059F, -0.207911685F, -0.190809F, -0.173648179F, -0.156434461F,
        -0.139173105F, -0.121869341F, -0.104528464F, -0.0871557444F,
        -0.0697564706F, -0.0523359552F, -0.0348994955F, -0.0174524058F,
        -1.83697015E-16F, 0.0174524058F, 0.0348994955F, 0.0523359552F,
        0.0697564706F, 0.0871557444F, 0.104528464F, 0.121869341F, 0.139173105F,
        0.156434461F, 0.173648179F, 0.190809F, 0.207911685F, 0.224951059F,
        0.241921902F, 0.258819044F, 0.275637358F, 0.29237169F, 0.309017F,
        0.325568169F, 0.342020154F, 0.35836795F, 0.37460658F, 0.390731126F,
        0.406736642F, 0.42261827F, 0.438371152F, 0.453990489F, 0.469471574F,
        0.484809607F, 0.5F, 0.515038073F, 0.529919267F, 0.544639051F,
        0.559192896F, 0.57357645F, 0.587785244F, 0.601815045F, 0.615661502F,
        0.629320383F, 0.642787635F, 0.656059F, 0.669130623F, 0.681998372F,
        0.694658399F, 0.707106769F, 0.719339788F, 0.7313537F, 0.74314481F,
        0.754709601F, 0.766044438F, 0.777146F, 0.788010776F, 0.798635483F,
        0.809017F, 0.819152057F, 0.829037547F, 0.838670552F, 0.848048091F,
        0.857167304F, 0.866025388F, 0.874619722F, 0.882947564F, 0.891006529F,
        0.898794055F, 0.906307817F, 0.91354543F, 0.920504868F, 0.927183867F,
        0.933580399F, 0.939692616F, 0.945518553F, 0.95105654F, 0.956304729F,
        0.96126169F, 0.965925813F, 0.970295727F, 0.974370062F, 0.978147626F,
        0.981627166F, 0.98480773F, 0.987688363F, 0.990268052F, 0.992546141F,
        0.994521916F, 0.99619472F, 0.997564077F, 0.99862951F, 0.999390841F,
        0.99984771F, 1.0F, 1.0F, 0.0F, 0.0F, 0.0174524058F, 0.0348994955F,
        0.0523359552F, 0.0697564706F, 0.0871557444F, 0.104528464F, 0.121869341F,
        0.139173105F, 0.156434461F, 0.173648179F, 0.190809F, 0.207911685F,
        0.224951059F, 0.241921902F, 0.258819044F, 0.275637358F, 0.29237169F,
        0.309017F, 0.325568169F, 0.342020154F, 0.35836795F, 0.37460658F,
        0.390731126F, 0.406736642F, 0.42261827F, 0.438371152F, 0.453990489F,
        0.469471574F, 0.484809607F, 0.5F, 0.515038073F, 0.529919267F,
        0.544639051F, 0.559192896F, 0.57357645F, 0.587785244F, 0.601815045F,
        0.615661502F, 0.629320383F, 0.642787635F, 0.656059F, 0.669130623F,
        0.681998372F, 0.694658399F, 0.707106769F, 0.719339788F, 0.7313537F,
        0.74314481F, 0.754709601F, 0.766044438F, 0.777146F, 0.788010776F,
        0.798635483F, 0.809017F, 0.819152057F, 0.829037547F, 0.838670552F,
        0.848048091F, 0.857167304F, 0.866025388F, 0.874619722F, 0.882947564F,
        0.891006529F, 0.898794055F, 0.906307817F, 0.91354543F, 0.920504868F,
        0.927183867F, 0.933580399F, 0.939692616F, 0.945518553F, 0.95105654F,
        0.956304729F, 0.96126169F, 0.965925813F, 0.970295727F, 0.974370062F,
        0.978147626F, 0.981627166F, 0.98480773F, 0.987688363F, 0.990268052F,
        0.992546141F, 0.994521916F, 0.99619472F, 0.997564077F, 0.99862951F,
        0.999390841F, 0.99984771F, 1.0F, 0.99984771F, 0.999390841F, 0.99862951F,
        0.997564077F, 0.99619472F, 0.994521916F, 0.992546141F, 0.990268052F,
        0.987688363F, 0.98480773F, 0.981627166F, 0.978147626F, 0.974370062F,
        0.970295727F, 0.965925813F, 0.96126169F, 0.956304729F, 0.95105654F,
        0.945518553F, 0.939692616F, 0.933580399F, 0.927183867F, 0.920504868F,
        0.91354543F, 0.906307817F, 0.898794055F, 0.891006529F, 0.882947564F,
        0.874619722F, 0.866025388F, 0.857167304F, 0.848048091F, 0.838670552F,
        0.829037547F, 0.819152057F, 0.809017F, 0.798635483F, 0.788010776F,
        0.777146F, 0.766044438F, 0.754709601F, 0.74314481F, 0.7313537F,
        0.719339788F, 0.707106769F, 0.694658399F, 0.681998372F, 0.669130623F,
        0.656059F, 0.642787635F, 0.629320383F, 0.615661502F, 0.601815045F,
        0.587785244F, 0.57357645F, 0.559192896F, 0.544639051F, 0.529919267F,
        0.515038073F, 0.5F, 0.484809607F, 0.469471574F, 0.453990489F,
        0.438371152F, 0.42261827F, 0.406736642F, 0.390731126F, 0.37460658F,
        0.35836795F, 0.342020154F, 0.325568169F, 0.309017F, 0.29237169F,
        0.275637358F, 0.258819044F, 0.241921902F, 0.224951059F, 0.207911685F,
        0.190809F, 0.173648179F, 0.156434461F, 0.139173105F, 0.121869341F,
        0.104528464F, 0.0871557444F, 0.0697564706F, 0.0523359552F, 0.0348994955F,
        0.0174524058F, 1.22464685E-16F, -0.0174524058F, -0.0348994955F,
        -0.0523359552F, -0.0697564706F, -0.0871557444F, -0.104528464F,
        -0.121869341F, -0.139173105F, -0.156434461F, -0.173648179F, -0.190809F,
        -0.207911685F, -0.224951059F, -0.241921902F, -0.258819044F,
        -0.275637358F, -0.29237169F, -0.309017F, -0.325568169F, -0.342020154F,
        -0.35836795F, -0.37460658F, -0.390731126F, -0.406736642F, -0.42261827F,
        -0.438371152F, -0.453990489F, -0.469471574F, -0.484809607F, -0.5F,
        -0.515038073F, -0.529919267F, -0.544639051F, -0.559192896F, -0.57357645F,
        -0.587785244F, -0.601815045F, -0.615661502F, -0.629320383F,
        -0.642787635F, -0.656059F, -0.669130623F, -0.681998372F, -0.694658399F,
        -0.707106769F, -0.719339788F, -0.7313537F, -0.74314481F, -0.754709601F,
        -0.766044438F, -0.777146F, -0.788010776F, -0.798635483F, -0.809017F,
        -0.819152057F, -0.829037547F, -0.838670552F, -0.848048091F,
        -0.857167304F, -0.866025388F, -0.874619722F, -0.882947564F,
        -0.891006529F, -0.898794055F, -0.906307817F, -0.91354543F, -0.920504868F,
        -0.927183867F, -0.933580399F, -0.939692616F, -0.945518553F, -0.95105654F,
        -0.956304729F, -0.96126169F, -0.965925813F, -0.970295727F, -0.974370062F,
        -0.978147626F, -0.981627166F, -0.98480773F, -0.987688363F, -0.990268052F,
        -0.992546141F, -0.994521916F, -0.99619472F, -0.997564077F, -0.99862951F,
        -0.999390841F, -0.99984771F, -1.0F, -0.99984771F, -0.999390841F,
        -0.99862951F, -0.997564077F, -0.99619472F, -0.994521916F, -0.992546141F,
        -0.990268052F, -0.987688363F, -0.98480773F, -0.981627166F, -0.978147626F,
        -0.974370062F, -0.970295727F, -0.965925813F, -0.96126169F, -0.956304729F,
        -0.95105654F, -0.945518553F, -0.939692616F, -0.933580399F, -0.927183867F,
        -0.920504868F, -0.91354543F, -0.906307817F, -0.898794055F, -0.891006529F,
        -0.882947564F, -0.874619722F, -0.866025388F, -0.857167304F,
        -0.848048091F, -0.838670552F, -0.829037547F, -0.819152057F, -0.809017F,
        -0.798635483F, -0.788010776F, -0.777146F, -0.766044438F, -0.754709601F,
        -0.74314481F, -0.7313537F, -0.719339788F, -0.707106769F, -0.694658399F,
        -0.681998372F, -0.669130623F, -0.656059F, -0.642787635F, -0.629320383F,
        -0.615661502F, -0.601815045F, -0.587785244F, -0.57357645F, -0.559192896F,
        -0.544639051F, -0.529919267F, -0.515038073F, -0.5F, -0.484809607F,
        -0.469471574F, -0.453990489F, -0.438371152F, -0.42261827F, -0.406736642F,
        -0.390731126F, -0.37460658F, -0.35836795F, -0.342020154F, -0.325568169F,
        -0.309017F, -0.29237169F, -0.275637358F, -0.258819044F, -0.241921902F,
        -0.224951059F, -0.207911685F, -0.190809F, -0.173648179F, -0.156434461F,
        -0.139173105F, -0.121869341F, -0.104528464F, -0.0871557444F,
        -0.0697564706F, -0.0523359552F, -0.0348994955F, -0.0174524058F,
        -2.44929371E-16F, -2.44929371E-16F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -0.2F } ;

      communicationFlightControlSystem_DW.fromWS_Signal1_PWORK.TimePtr = (void *)
        pTimeValues0;
      communicationFlightControlSystem_DW.fromWS_Signal1_PWORK.DataPtr = (void *)
        pDataValues0;
      communicationFlightControlSystem_DW.fromWS_Signal1_IWORK.PrevIndex = 0;
    }

    /* Start for FromWorkspace: '<S3>/From Workspace' */
    {
      static real_T pTimeValues0[] = { 0.0, 100.0 } ;

      static real32_T pDataValues0[] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F } ;

      communicationFlightControlSystem_DW.FromWorkspace_PWORK.TimePtr = (void *)
        pTimeValues0;
      communicationFlightControlSystem_DW.FromWorkspace_PWORK.DataPtr = (void *)
        pDataValues0;
      communicationFlightControlSystem_DW.FromWorkspace_IWORK.PrevIndex = 0;
    }

    /* Start for MATLABSystem: '<Root>/ROS Input Sonar' */
    communicationFlightControlSystem_DW.obj.isInitialized = 0;
    communicationFlightControlSystem_DW.obj.isInitialized = 1;
    communicationFlightControlSystem_DW.obj.isServer_ = 1.0;
    for (communicationFlightControlSystem_B.i0 = 0;
         communicationFlightControlSystem_B.i0 < 7;
         communicationFlightControlSystem_B.i0++) {
      communicationFlightControlSystem_B.ipaddr[communicationFlightControlSystem_B.i0]
        = tmp[communicationFlightControlSystem_B.i0];
    }

    communicationFlightControlSystem_B.d0 = rt_roundd_snf
      (communicationFlightControlSystem_DW.obj.isServer_);
    if (communicationFlightControlSystem_B.d0 < 65536.0) {
      if (communicationFlightControlSystem_B.d0 >= 0.0) {
        communicationFlightControlSystem_B.u1 = (uint16_T)
          communicationFlightControlSystem_B.d0;
      } else {
        communicationFlightControlSystem_B.u1 = 0U;
      }
    } else {
      communicationFlightControlSystem_B.u1 = MAX_uint16_T;
    }

    TCPStreamSetup(25000, 0,
                   &communicationFlightControlSystem_DW.obj.connStream_,
                   communicationFlightControlSystem_B.u1, 0.0,
                   &communicationFlightControlSystem_B.errorNo_f,
                   communicationFlightControlSystem_B.ipaddr);
    littleEndianCheck(&communicationFlightControlSystem_DW.obj.isLittleEnd_);

    /* End of Start for MATLABSystem: '<Root>/ROS Input Sonar' */

    /* Start for MATLABSystem: '<Root>/ROS Input x' */
    communicationFlightControlSystem_DW.obj_a.isInitialized = 0;
    communicationFlightControlSystem_DW.obj_a.isInitialized = 1;
    communicationFlightControlSystem_DW.obj_a.isServer_ = 1.0;
    for (communicationFlightControlSystem_B.i0 = 0;
         communicationFlightControlSystem_B.i0 < 7;
         communicationFlightControlSystem_B.i0++) {
      communicationFlightControlSystem_B.ipaddr[communicationFlightControlSystem_B.i0]
        = tmp[communicationFlightControlSystem_B.i0];
    }

    communicationFlightControlSystem_B.d0 = rt_roundd_snf
      (communicationFlightControlSystem_DW.obj_a.isServer_);
    if (communicationFlightControlSystem_B.d0 < 65536.0) {
      if (communicationFlightControlSystem_B.d0 >= 0.0) {
        communicationFlightControlSystem_B.u1 = (uint16_T)
          communicationFlightControlSystem_B.d0;
      } else {
        communicationFlightControlSystem_B.u1 = 0U;
      }
    } else {
      communicationFlightControlSystem_B.u1 = MAX_uint16_T;
    }

    TCPStreamSetup(25001, 0,
                   &communicationFlightControlSystem_DW.obj_a.connStream_,
                   communicationFlightControlSystem_B.u1, 0.0,
                   &communicationFlightControlSystem_B.errorNo_f,
                   communicationFlightControlSystem_B.ipaddr);
    littleEndianCheck(&communicationFlightControlSystem_DW.obj_a.isLittleEnd_);

    /* End of Start for MATLABSystem: '<Root>/ROS Input x' */

    /* Start for MATLABSystem: '<Root>/ROS Input y' */
    communicationFlightControlSystem_DW.obj_e.isInitialized = 0;
    communicationFlightControlSystem_DW.obj_e.isInitialized = 1;
    communicationFlightControlSystem_DW.obj_e.isServer_ = 1.0;
    for (communicationFlightControlSystem_B.i0 = 0;
         communicationFlightControlSystem_B.i0 < 7;
         communicationFlightControlSystem_B.i0++) {
      communicationFlightControlSystem_B.ipaddr[communicationFlightControlSystem_B.i0]
        = tmp[communicationFlightControlSystem_B.i0];
    }

    communicationFlightControlSystem_B.d0 = rt_roundd_snf
      (communicationFlightControlSystem_DW.obj_e.isServer_);
    if (communicationFlightControlSystem_B.d0 < 65536.0) {
      if (communicationFlightControlSystem_B.d0 >= 0.0) {
        communicationFlightControlSystem_B.u1 = (uint16_T)
          communicationFlightControlSystem_B.d0;
      } else {
        communicationFlightControlSystem_B.u1 = 0U;
      }
    } else {
      communicationFlightControlSystem_B.u1 = MAX_uint16_T;
    }

    TCPStreamSetup(25002, 0,
                   &communicationFlightControlSystem_DW.obj_e.connStream_,
                   communicationFlightControlSystem_B.u1, 0.0,
                   &communicationFlightControlSystem_B.errorNo_f,
                   communicationFlightControlSystem_B.ipaddr);
    littleEndianCheck(&communicationFlightControlSystem_DW.obj_e.isLittleEnd_);

    /* End of Start for MATLABSystem: '<Root>/ROS Input y' */

    /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
    communicationFlightControlSystem_DW.UnitDelay_DSTATE =
      communicationFlightControlSystem_P.UnitDelay_InitialCondition;

    /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
    communicationFlightControlSystem_DW.RateTransition_Buffer[0] =
      communicationFlightControlSystem_P.RateTransition_InitialCondition;

    /* InitializeConditions for UnitDelay: '<Root>/Unit Delay1' */
    communicationFlightControlSystem_DW.UnitDelay1_DSTATE =
      communicationFlightControlSystem_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for UnitDelay: '<Root>/Unit Delay2' */
    communicationFlightControlSystem_DW.UnitDelay2_DSTATE =
      communicationFlightControlSystem_P.UnitDelay2_InitialCondition;

    /* SystemInitialize for Atomic SubSystem: '<Root>/Flight Control System' */
    communicationFlightControlSystem_FlightControlSystem_Init(&flag_outport,
      &communicationFlightControlSystem_DW.FlightControlSystem,
      &communicationFlightControlSystem_P.FlightControlSystem);

    /* End of SystemInitialize for SubSystem: '<Root>/Flight Control System' */
  }
}

/* Model terminate function */
void communicationFlightControlSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
