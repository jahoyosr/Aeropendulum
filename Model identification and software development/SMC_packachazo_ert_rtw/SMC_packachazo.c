/*
 * File: SMC_packachazo.c
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
#include "SMC_packachazo_dt.h"

/* Block signals (auto storage) */
B_SMC_packachazo_T SMC_packachazo_B;

/* Continuous states */
X_SMC_packachazo_T SMC_packachazo_X;

/* Block states (auto storage) */
DW_SMC_packachazo_T SMC_packachazo_DW;

/* Real-time model */
RT_MODEL_SMC_packachazo_T SMC_packachazo_M_;
RT_MODEL_SMC_packachazo_T *const SMC_packachazo_M = &SMC_packachazo_M_;

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 2;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  SMC_packachazo_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  SMC_packachazo_step();
  SMC_packachazo_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  SMC_packachazo_step();
  SMC_packachazo_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void SMC_packachazo_step(void)
{
  uint16_T rtb_adc_0;
  real_T rtb_StateSpace1;
  uint8_T tmp;
  if (rtmIsMajorTimeStep(SMC_packachazo_M)) {
    /* set solver stop time */
    if (!(SMC_packachazo_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&SMC_packachazo_M->solverInfo,
                            ((SMC_packachazo_M->Timing.clockTickH0 + 1) *
        SMC_packachazo_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&SMC_packachazo_M->solverInfo,
                            ((SMC_packachazo_M->Timing.clockTick0 + 1) *
        SMC_packachazo_M->Timing.stepSize0 +
        SMC_packachazo_M->Timing.clockTickH0 *
        SMC_packachazo_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(SMC_packachazo_M)) {
    SMC_packachazo_M->Timing.t[0] = rtsiGetT(&SMC_packachazo_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(SMC_packachazo_M)) {
    /* S-Function (arduinoanaloginput_sfcn): '<S1>/Analog Input' */
    rtb_adc_0 = MW_analogRead(SMC_packachazo_P.AnalogInput_p1);

    /* Sum: '<S1>/Sum1' incorporates:
     *  Constant: '<S1>/Constant2'
     *  Gain: '<S1>/Gain'
     *  S-Function (arduinoanaloginput_sfcn): '<S1>/Analog Input'
     */
    SMC_packachazo_B.X2 = SMC_packachazo_P.Constant2_Value - (real_T)((uint32_T)
      SMC_packachazo_P.Gain_Gain_nwjfwxlfng * rtb_adc_0) * 1.9073486328125E-6;
  }

  /* StateSpace: '<S1>/State-Space1' */
  rtb_StateSpace1 = SMC_packachazo_P.StateSpace1_C[1] *
    SMC_packachazo_X.StateSpace1_CSTATE[0] + SMC_packachazo_P.StateSpace1_C[3] *
    SMC_packachazo_X.StateSpace1_CSTATE[1];

  /* Gain: '<S1>/Gain11' incorporates:
   *  StateSpace: '<S1>/State-Space1'
   */
  SMC_packachazo_B.Gain11 = (SMC_packachazo_P.StateSpace1_C[0] *
    SMC_packachazo_X.StateSpace1_CSTATE[0] + SMC_packachazo_P.StateSpace1_C[2] *
    SMC_packachazo_X.StateSpace1_CSTATE[1]) * SMC_packachazo_P.Gain11_Gain;
  if (rtmIsMajorTimeStep(SMC_packachazo_M)) {
  }

  /* Gain: '<S1>/Gain12' */
  SMC_packachazo_B.Gain12 = SMC_packachazo_P.Gain12_Gain * rtb_StateSpace1;
  if (rtmIsMajorTimeStep(SMC_packachazo_M)) {
    /* Gain: '<S1>/Gain1' incorporates:
     *  Constant: '<S1>/Ref'
     *  Sum: '<S1>/Sum2'
     */
    SMC_packachazo_B.theta = (SMC_packachazo_B.X2 + SMC_packachazo_P.Ref_Value) *
      SMC_packachazo_P.Gain1_Gain;

    /* Gain: '<Root>/Gain' */
    SMC_packachazo_B.Gain = SMC_packachazo_P.Gain_Gain * SMC_packachazo_B.theta;
  }

  /* Sum: '<Root>/Sum2' */
  SMC_packachazo_B.S = rtb_StateSpace1 + SMC_packachazo_B.Gain;

  /* Signum: '<Root>/Sign' */
  if (SMC_packachazo_B.S < 0.0) {
    rtb_StateSpace1 = -1.0;
  } else if (SMC_packachazo_B.S > 0.0) {
    rtb_StateSpace1 = 1.0;
  } else if (SMC_packachazo_B.S == 0.0) {
    rtb_StateSpace1 = 0.0;
  } else {
    rtb_StateSpace1 = SMC_packachazo_B.S;
  }

  /* Gain: '<Root>/Gain3' incorporates:
   *  Signum: '<Root>/Sign'
   */
  SMC_packachazo_B.U = SMC_packachazo_P.Gain3_Gain * rtb_StateSpace1;
  if (rtmIsMajorTimeStep(SMC_packachazo_M)) {
    /* Saturate: '<S1>/Saturation' */
    if (SMC_packachazo_B.U > SMC_packachazo_P.Saturation_UpperSat) {
      /* DataTypeConversion: '<S3>/Data Type Conversion' */
      rtb_StateSpace1 = SMC_packachazo_P.Saturation_UpperSat;
    } else if (SMC_packachazo_B.U < SMC_packachazo_P.Saturation_LowerSat) {
      /* DataTypeConversion: '<S3>/Data Type Conversion' */
      rtb_StateSpace1 = SMC_packachazo_P.Saturation_LowerSat;
    } else {
      /* DataTypeConversion: '<S3>/Data Type Conversion' */
      rtb_StateSpace1 = SMC_packachazo_B.U;
    }

    /* End of Saturate: '<S1>/Saturation' */

    /* DataTypeConversion: '<S3>/Data Type Conversion' */
    if (rtb_StateSpace1 < 256.0) {
      if (rtb_StateSpace1 >= 0.0) {
        tmp = (uint8_T)rtb_StateSpace1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    /* S-Function (arduinoanalogoutput_sfcn): '<S3>/PWM' */
    MW_analogWrite(SMC_packachazo_P.PWM_pinNumber, tmp);
  }

  /* SignalConversion: '<S1>/TmpSignal ConversionAtState-Space1Inport1' incorporates:
   *  Constant: '<S1>/U_eq1'
   *  Sum: '<S1>/Sum5'
   */
  SMC_packachazo_B.TmpSignalConversionAtStateSpace[0] = SMC_packachazo_B.U -
    SMC_packachazo_P.U_eq1_Value;
  SMC_packachazo_B.TmpSignalConversionAtStateSpace[1] = SMC_packachazo_B.theta;
  if (rtmIsMajorTimeStep(SMC_packachazo_M)) {
    /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    if (SMC_packachazo_P.Constant1_Value < 256.0) {
      if (SMC_packachazo_P.Constant1_Value >= 0.0) {
        tmp = (uint8_T)SMC_packachazo_P.Constant1_Value;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

    /* S-Function (arduinodigitaloutput_sfcn): '<S2>/Digital Output' */
    MW_digitalWrite(SMC_packachazo_P.DigitalOutput_pinNumber, tmp);
  }

  if (rtmIsMajorTimeStep(SMC_packachazo_M)) {
    /* External mode */
    rtExtModeUploadCheckTrigger(2);

    {                                  /* Sample time: [0.0s, 0.0s] */
      rtExtModeUpload(0, SMC_packachazo_M->Timing.t[0]);
    }

    if (rtmIsMajorTimeStep(SMC_packachazo_M)) {/* Sample time: [0.1s, 0.0s] */
      rtExtModeUpload(1, (((SMC_packachazo_M->Timing.clockTick1+
                            SMC_packachazo_M->Timing.clockTickH1* 4294967296.0))
                          * 0.1));
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(SMC_packachazo_M)) {
    /* signal main to stop simulation */
    {                                  /* Sample time: [0.0s, 0.0s] */
      if ((rtmGetTFinal(SMC_packachazo_M)!=-1) &&
          !((rtmGetTFinal(SMC_packachazo_M)-
             (((SMC_packachazo_M->Timing.clockTick1+
                SMC_packachazo_M->Timing.clockTickH1* 4294967296.0)) * 0.1)) >
            (((SMC_packachazo_M->Timing.clockTick1+
               SMC_packachazo_M->Timing.clockTickH1* 4294967296.0)) * 0.1) *
            (DBL_EPSILON))) {
        rtmSetErrorStatus(SMC_packachazo_M, "Simulation finished");
      }

      if (rtmGetStopRequested(SMC_packachazo_M)) {
        rtmSetErrorStatus(SMC_packachazo_M, "Simulation finished");
      }
    }

    rt_ertODEUpdateContinuousStates(&SMC_packachazo_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++SMC_packachazo_M->Timing.clockTick0)) {
      ++SMC_packachazo_M->Timing.clockTickH0;
    }

    SMC_packachazo_M->Timing.t[0] = rtsiGetSolverStopTime
      (&SMC_packachazo_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.1s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.1, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick1 and the high bits
       * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
       */
      SMC_packachazo_M->Timing.clockTick1++;
      if (!SMC_packachazo_M->Timing.clockTick1) {
        SMC_packachazo_M->Timing.clockTickH1++;
      }
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void SMC_packachazo_derivatives(void)
{
  XDot_SMC_packachazo_T *_rtXdot;
  _rtXdot = ((XDot_SMC_packachazo_T *) SMC_packachazo_M->ModelData.derivs);

  /* Derivatives for StateSpace: '<S1>/State-Space1' */
  _rtXdot->StateSpace1_CSTATE[0] = 0.0;
  _rtXdot->StateSpace1_CSTATE[0] += (SMC_packachazo_P.A[0] - 22.19) *
    SMC_packachazo_X.StateSpace1_CSTATE[0];
  _rtXdot->StateSpace1_CSTATE[0] += SMC_packachazo_P.A[2] *
    SMC_packachazo_X.StateSpace1_CSTATE[1];
  _rtXdot->StateSpace1_CSTATE[0] += SMC_packachazo_P.StateSpace1_B[0] *
    SMC_packachazo_B.TmpSignalConversionAtStateSpace[0];
  _rtXdot->StateSpace1_CSTATE[0] += SMC_packachazo_P.StateSpace1_B[2] *
    SMC_packachazo_B.TmpSignalConversionAtStateSpace[1];
  _rtXdot->StateSpace1_CSTATE[1] = 0.0;
  _rtXdot->StateSpace1_CSTATE[1] += (SMC_packachazo_P.A[1] - 98.741099999999989)
    * SMC_packachazo_X.StateSpace1_CSTATE[0];
  _rtXdot->StateSpace1_CSTATE[1] += SMC_packachazo_P.A[3] *
    SMC_packachazo_X.StateSpace1_CSTATE[1];
  _rtXdot->StateSpace1_CSTATE[1] += SMC_packachazo_P.StateSpace1_B[1] *
    SMC_packachazo_B.TmpSignalConversionAtStateSpace[0];
  _rtXdot->StateSpace1_CSTATE[1] += SMC_packachazo_P.StateSpace1_B[3] *
    SMC_packachazo_B.TmpSignalConversionAtStateSpace[1];
}

/* Model initialize function */
void SMC_packachazo_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)SMC_packachazo_M, 0,
                sizeof(RT_MODEL_SMC_packachazo_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&SMC_packachazo_M->solverInfo,
                          &SMC_packachazo_M->Timing.simTimeStep);
    rtsiSetTPtr(&SMC_packachazo_M->solverInfo, &rtmGetTPtr(SMC_packachazo_M));
    rtsiSetStepSizePtr(&SMC_packachazo_M->solverInfo,
                       &SMC_packachazo_M->Timing.stepSize0);
    rtsiSetdXPtr(&SMC_packachazo_M->solverInfo,
                 &SMC_packachazo_M->ModelData.derivs);
    rtsiSetContStatesPtr(&SMC_packachazo_M->solverInfo, (real_T **)
                         &SMC_packachazo_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&SMC_packachazo_M->solverInfo,
      &SMC_packachazo_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&SMC_packachazo_M->solverInfo,
      &SMC_packachazo_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&SMC_packachazo_M->solverInfo,
      &SMC_packachazo_M->ModelData.periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&SMC_packachazo_M->solverInfo,
      &SMC_packachazo_M->ModelData.periodicContStateRanges);
    rtsiSetErrorStatusPtr(&SMC_packachazo_M->solverInfo, (&rtmGetErrorStatus
      (SMC_packachazo_M)));
    rtsiSetRTModelPtr(&SMC_packachazo_M->solverInfo, SMC_packachazo_M);
  }

  rtsiSetSimTimeStep(&SMC_packachazo_M->solverInfo, MAJOR_TIME_STEP);
  SMC_packachazo_M->ModelData.intgData.y = SMC_packachazo_M->ModelData.odeY;
  SMC_packachazo_M->ModelData.intgData.f[0] = SMC_packachazo_M->ModelData.odeF[0];
  SMC_packachazo_M->ModelData.intgData.f[1] = SMC_packachazo_M->ModelData.odeF[1];
  SMC_packachazo_M->ModelData.intgData.f[2] = SMC_packachazo_M->ModelData.odeF[2];
  SMC_packachazo_M->ModelData.contStates = ((X_SMC_packachazo_T *)
    &SMC_packachazo_X);
  rtsiSetSolverData(&SMC_packachazo_M->solverInfo, (void *)
                    &SMC_packachazo_M->ModelData.intgData);
  rtsiSetSolverName(&SMC_packachazo_M->solverInfo,"ode3");
  rtmSetTPtr(SMC_packachazo_M, &SMC_packachazo_M->Timing.tArray[0]);
  rtmSetTFinal(SMC_packachazo_M, -1);
  SMC_packachazo_M->Timing.stepSize0 = 0.1;

  /* External mode info */
  SMC_packachazo_M->Sizes.checksums[0] = (3659987659U);
  SMC_packachazo_M->Sizes.checksums[1] = (2498293648U);
  SMC_packachazo_M->Sizes.checksums[2] = (615262163U);
  SMC_packachazo_M->Sizes.checksums[3] = (3225033647U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    SMC_packachazo_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(SMC_packachazo_M->extModeInfo,
      &SMC_packachazo_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(SMC_packachazo_M->extModeInfo,
                        SMC_packachazo_M->Sizes.checksums);
    rteiSetTPtr(SMC_packachazo_M->extModeInfo, rtmGetTPtr(SMC_packachazo_M));
  }

  /* block I/O */
  {
    SMC_packachazo_B.X2 = 0.0;
    SMC_packachazo_B.Gain11 = 0.0;
    SMC_packachazo_B.Gain12 = 0.0;
    SMC_packachazo_B.theta = 0.0;
    SMC_packachazo_B.Gain = 0.0;
    SMC_packachazo_B.S = 0.0;
    SMC_packachazo_B.U = 0.0;
    SMC_packachazo_B.TmpSignalConversionAtStateSpace[0] = 0.0;
    SMC_packachazo_B.TmpSignalConversionAtStateSpace[1] = 0.0;
  }

  /* states (continuous) */
  {
    (void) memset((void *)&SMC_packachazo_X, 0,
                  sizeof(X_SMC_packachazo_T));
  }

  /* states (dwork) */
  (void) memset((void *)&SMC_packachazo_DW, 0,
                sizeof(DW_SMC_packachazo_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    SMC_packachazo_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 16;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for S-Function (arduinoanaloginput_sfcn): '<S1>/Analog Input' */
  MW_pinModeAnalogInput(SMC_packachazo_P.AnalogInput_p1);

  /* Start for S-Function (arduinoanalogoutput_sfcn): '<S3>/PWM' */
  MW_pinModeOutput(SMC_packachazo_P.PWM_pinNumber);

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S2>/Digital Output' */
  MW_pinModeOutput(SMC_packachazo_P.DigitalOutput_pinNumber);

  /* InitializeConditions for StateSpace: '<S1>/State-Space1' */
  SMC_packachazo_X.StateSpace1_CSTATE[0] = SMC_packachazo_P.StateSpace1_X0[0];
  SMC_packachazo_X.StateSpace1_CSTATE[1] = SMC_packachazo_P.StateSpace1_X0[1];
}

/* Model terminate function */
void SMC_packachazo_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
