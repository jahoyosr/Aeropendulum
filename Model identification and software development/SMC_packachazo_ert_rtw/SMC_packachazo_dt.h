/*
 * SMC_packachazo_dt.h
 *
 * Code generation for model "SMC_packachazo".
 *
 * Model version              : 1.13
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Mon Nov 21 17:34:19 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(uint16_T),
  sizeof(uint32_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "uint16_T",
  "uint32_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&SMC_packachazo_B.X2), 0, 0, 9 }
  ,

  { (char_T *)(&SMC_packachazo_DW.Scope_PWORK.LoggedData[0]), 11, 0, 5 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  2U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&SMC_packachazo_P.A[0]), 0, 0, 4 },

  { (char_T *)(&SMC_packachazo_P.PWM_pinNumber), 7, 0, 2 },

  { (char_T *)(&SMC_packachazo_P.Constant2_Value), 0, 0, 21 },

  { (char_T *)(&SMC_packachazo_P.AnalogInput_p1), 7, 0, 1 },

  { (char_T *)(&SMC_packachazo_P.Gain_Gain_nwjfwxlfng), 14, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  5U,
  rtPTransitions
};

/* [EOF] SMC_packachazo_dt.h */
