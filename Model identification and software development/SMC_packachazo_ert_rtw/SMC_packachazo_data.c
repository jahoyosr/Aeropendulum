/*
 * File: SMC_packachazo_data.c
 *
 * Code generated for Simulink model 'SMC_packachazo'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Mon Nov 21 17:34:19 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SMC_packachazo.h"
#include "SMC_packachazo_private.h"

/* Block parameters (auto storage) */
P_SMC_packachazo_T SMC_packachazo_P = {
  /*  Variable: A
   * Referenced by: '<S1>/State-Space1'
   */
  { 0.0, 0.0, 1.0, -2.3099538009239815 },
  3U,                                  /* Mask Parameter: PWM_pinNumber
                                        * Referenced by: '<S3>/PWM'
                                        */
  12U,                                 /* Mask Parameter: DigitalOutput_pinNumber
                                        * Referenced by: '<S2>/Digital Output'
                                        */
  38.677,                              /* Expression: 38.677
                                        * Referenced by: '<S1>/Constant2'
                                        */

  /*  Expression: [B L]
   * Referenced by: '<S1>/State-Space1'
   */
  { 0.0, 0.1491661931467253, 22.19, 98.741099999999989 },

  /*  Expression: eye(2)
   * Referenced by: '<S1>/State-Space1'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /*  Expression: [-0.65 0]
   * Referenced by: '<S1>/State-Space1'
   */
  { -0.65, 0.0 },
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S1>/Gain11'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S1>/Gain12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Ref'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S1>/Gain1'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<Root>/Gain'
                                        */
  -175.0,                              /* Expression: -175
                                        * Referenced by: '<Root>/Gain3'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S1>/Saturation'
                                        */
  110.0,                               /* Expression: 110
                                        * Referenced by: '<S1>/Saturation'
                                        */
  205.0,                               /* Expression: 205
                                        * Referenced by: '<S1>/U_eq1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant1'
                                        */
  8U,                                  /* Computed Parameter: AnalogInput_p1
                                        * Referenced by: '<S1>/Analog Input'
                                        */
  48759U                               /* Computed Parameter: Gain_Gain_nwjfwxlfng
                                        * Referenced by: '<S1>/Gain'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
