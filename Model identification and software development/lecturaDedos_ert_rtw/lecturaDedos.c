/*
 * File: lecturaDedos.c
 *
 * Code generated for Simulink model 'lecturaDedos'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Fri Nov 11 16:32:27 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "lecturaDedos.h"
#include "lecturaDedos_private.h"
#include "lecturaDedos_dt.h"

/* Block signals (auto storage) */
B_lecturaDedos_T lecturaDedos_B;

/* Block states (auto storage) */
DW_lecturaDedos_T lecturaDedos_DW;

/* Real-time model */
RT_MODEL_lecturaDedos_T lecturaDedos_M_;
RT_MODEL_lecturaDedos_T *const lecturaDedos_M = &lecturaDedos_M_;

/* Model step function */
void lecturaDedos_step(void)
{
  /* S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input' */
  lecturaDedos_B.AnalogInput = MW_analogRead(lecturaDedos_P.AnalogInput_p1);

  /* S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input1' */
  lecturaDedos_B.AnalogInput1 = MW_analogRead(lecturaDedos_P.AnalogInput1_p1);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.05s, 0.0s] */
    rtExtModeUpload(0, lecturaDedos_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.05s, 0.0s] */
    if ((rtmGetTFinal(lecturaDedos_M)!=-1) &&
        !((rtmGetTFinal(lecturaDedos_M)-lecturaDedos_M->Timing.taskTime0) >
          lecturaDedos_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(lecturaDedos_M, "Simulation finished");
    }

    if (rtmGetStopRequested(lecturaDedos_M)) {
      rtmSetErrorStatus(lecturaDedos_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  lecturaDedos_M->Timing.taskTime0 =
    (++lecturaDedos_M->Timing.clockTick0) * lecturaDedos_M->Timing.stepSize0;
}

/* Model initialize function */
void lecturaDedos_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)lecturaDedos_M, 0,
                sizeof(RT_MODEL_lecturaDedos_T));
  rtmSetTFinal(lecturaDedos_M, -1);
  lecturaDedos_M->Timing.stepSize0 = 0.05;

  /* External mode info */
  lecturaDedos_M->Sizes.checksums[0] = (3672632219U);
  lecturaDedos_M->Sizes.checksums[1] = (1240765087U);
  lecturaDedos_M->Sizes.checksums[2] = (2746395211U);
  lecturaDedos_M->Sizes.checksums[3] = (692480883U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    lecturaDedos_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(lecturaDedos_M->extModeInfo,
      &lecturaDedos_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(lecturaDedos_M->extModeInfo,
                        lecturaDedos_M->Sizes.checksums);
    rteiSetTPtr(lecturaDedos_M->extModeInfo, rtmGetTPtr(lecturaDedos_M));
  }

  /* block I/O */
  (void) memset(((void *) &lecturaDedos_B), 0,
                sizeof(B_lecturaDedos_T));

  /* states (dwork) */
  (void) memset((void *)&lecturaDedos_DW, 0,
                sizeof(DW_lecturaDedos_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    lecturaDedos_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input' */
  MW_pinModeAnalogInput(lecturaDedos_P.AnalogInput_p1);

  /* Start for S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input1' */
  MW_pinModeAnalogInput(lecturaDedos_P.AnalogInput1_p1);
}

/* Model terminate function */
void lecturaDedos_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
