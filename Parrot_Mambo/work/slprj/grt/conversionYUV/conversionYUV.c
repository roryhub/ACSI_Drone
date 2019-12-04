/*
 * Code generation for system model 'conversionYUV'
 *
 * Model                      : conversionYUV
 * Model version              : 1.141
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C source code generated on : Wed May 22 15:05:02 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "conversionYUV.h"
#include "conversionYUV_private.h"

/* Output and update for referenced model: 'conversionYUV' */
void conversionYUV(const uint8_T rtu_ImageData[38400], uint8_T rty_Y[19200],
                   uint8_T rty_Cb[19200], uint8_T rty_Cr[19200],
                   B_conversionYUV_c_T *localB)
{
  int32_T i;
  int32_T i_0;

  /* Assignment: '<S1>/Assignment' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Selector: '<Root>/u'
   */
  memcpy(&localB->Reshape[0], rtCP_Constant_Value, 19200U * sizeof(uint8_T));
  for (i = 0; i < 9600; i++) {
    localB->Reshape[(int32_T)rtCP_Constant1_Value[i] - 1] = rtu_ImageData[(i <<
      2) + 1];
  }

  /* End of Assignment: '<S1>/Assignment' */

  /* Assignment: '<S1>/Assignment1' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Selector: '<Root>/u'
   */
  for (i = 0; i < 9600; i++) {
    localB->Reshape[(int32_T)rtCP_Constant2_Value[i] - 1] = rtu_ImageData[(i <<
      2) + 1];
  }

  /* End of Assignment: '<S1>/Assignment1' */

  /* Math: '<Root>/Transpose1' */
  for (i = 0; i < 160; i++) {
    for (i_0 = 0; i_0 < 120; i_0++) {
      rty_Cb[i_0 + 120 * i] = localB->Reshape[160 * i_0 + i];
    }
  }

  /* End of Math: '<Root>/Transpose1' */

  /* Assignment: '<S2>/Assignment' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S2>/Constant1'
   *  Selector: '<Root>/v'
   */
  memcpy(&localB->Reshape[0], rtCP_Constant_Value_d, 19200U * sizeof(uint8_T));
  for (i = 0; i < 9600; i++) {
    localB->Reshape[(int32_T)rtCP_Constant1_Value_l[i] - 1] = rtu_ImageData[(i <<
      2) + 3];
  }

  /* End of Assignment: '<S2>/Assignment' */

  /* Assignment: '<S2>/Assignment1' incorporates:
   *  Constant: '<S2>/Constant2'
   *  Selector: '<Root>/v'
   */
  for (i = 0; i < 9600; i++) {
    localB->Reshape[(int32_T)rtCP_Constant2_Value_l[i] - 1] = rtu_ImageData[(i <<
      2) + 3];
  }

  /* End of Assignment: '<S2>/Assignment1' */

  /* Math: '<Root>/Transpose2' */
  for (i = 0; i < 160; i++) {
    for (i_0 = 0; i_0 < 120; i_0++) {
      rty_Cr[i_0 + 120 * i] = localB->Reshape[160 * i_0 + i];
    }
  }

  /* End of Math: '<Root>/Transpose2' */

  /* Assignment: '<S3>/Assignment' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant1'
   *  Selector: '<Root>/y1'
   */
  memcpy(&localB->Reshape[0], rtCP_Constant_Value_i, 19200U * sizeof(uint8_T));
  for (i = 0; i < 9600; i++) {
    localB->Reshape[(int32_T)rtCP_Constant1_Value_i[i] - 1] = rtu_ImageData[i <<
      2];
  }

  /* End of Assignment: '<S3>/Assignment' */

  /* Assignment: '<S3>/Assignment1' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Selector: '<Root>/y2'
   */
  for (i = 0; i < 9600; i++) {
    localB->Reshape[(int32_T)rtCP_Constant2_Value_g[i] - 1] = rtu_ImageData[(i <<
      2) + 2];
  }

  /* End of Assignment: '<S3>/Assignment1' */

  /* Math: '<Root>/Transpose' */
  for (i = 0; i < 160; i++) {
    for (i_0 = 0; i_0 < 120; i_0++) {
      rty_Y[i_0 + 120 * i] = localB->Reshape[160 * i_0 + i];
    }
  }

  /* End of Math: '<Root>/Transpose' */
}

/* Model initialize function */
void conversionYUV_initialize(const char_T **rt_errorStatus,
  RT_MODEL_conversionYUV_T *const conversionYUV_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(conversionYUV_M, rt_errorStatus);
}
