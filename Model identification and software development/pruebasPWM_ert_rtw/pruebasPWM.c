/*
 * File: pruebasPWM.c
 *
 * Code generated for Simulink model 'pruebasPWM'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Tue Nov 22 15:22:27 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "pruebasPWM.h"
#include "pruebasPWM_private.h"
#include "pruebasPWM_dt.h"

/* Real-time model */
RT_MODEL_pruebasPWM_T pruebasPWM_M_;
RT_MODEL_pruebasPWM_T *const pruebasPWM_M = &pruebasPWM_M_;

/* Model step function */
void pruebasPWM_step(void)
{
  uint8_T tmp;

  /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant'
   */
  if (pruebasPWM_P.Constant_Value < 256.0) {
    if (pruebasPWM_P.Constant_Value >= 0.0) {
      tmp = (uint8_T)pruebasPWM_P.Constant_Value;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_digitalWrite(pruebasPWM_P.DigitalOutput_pinNumber, tmp);

  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  if (pruebasPWM_P.Constant1_Value < 256.0) {
    if (pruebasPWM_P.Constant1_Value >= 0.0) {
      tmp = (uint8_T)pruebasPWM_P.Constant1_Value;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

  /* S-Function (arduinoanalogoutput_sfcn): '<S2>/PWM' */
  MW_analogWrite(pruebasPWM_P.PWM_pinNumber, tmp);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.2s, 0.0s] */
    rtExtModeUpload(0, pruebasPWM_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(pruebasPWM_M)!=-1) &&
        !((rtmGetTFinal(pruebasPWM_M)-pruebasPWM_M->Timing.taskTime0) >
          pruebasPWM_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(pruebasPWM_M, "Simulation finished");
    }

    if (rtmGetStopRequested(pruebasPWM_M)) {
      rtmSetErrorStatus(pruebasPWM_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++pruebasPWM_M->Timing.clockTick0)) {
    ++pruebasPWM_M->Timing.clockTickH0;
  }

  pruebasPWM_M->Timing.taskTime0 = pruebasPWM_M->Timing.clockTick0 *
    pruebasPWM_M->Timing.stepSize0 + pruebasPWM_M->Timing.clockTickH0 *
    pruebasPWM_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void pruebasPWM_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)pruebasPWM_M, 0,
                sizeof(RT_MODEL_pruebasPWM_T));
  rtmSetTFinal(pruebasPWM_M, -1);
  pruebasPWM_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  pruebasPWM_M->Sizes.checksums[0] = (1795712339U);
  pruebasPWM_M->Sizes.checksums[1] = (2460282395U);
  pruebasPWM_M->Sizes.checksums[2] = (2306752090U);
  pruebasPWM_M->Sizes.checksums[3] = (618004298U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    pruebasPWM_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(pruebasPWM_M->extModeInfo,
      &pruebasPWM_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(pruebasPWM_M->extModeInfo, pruebasPWM_M->Sizes.checksums);
    rteiSetTPtr(pruebasPWM_M->extModeInfo, rtmGetTPtr(pruebasPWM_M));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    pruebasPWM_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_pinModeOutput(pruebasPWM_P.DigitalOutput_pinNumber);

  /* Start for S-Function (arduinoanalogoutput_sfcn): '<S2>/PWM' */
  MW_pinModeOutput(pruebasPWM_P.PWM_pinNumber);
}

/* Model terminate function */
void pruebasPWM_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
