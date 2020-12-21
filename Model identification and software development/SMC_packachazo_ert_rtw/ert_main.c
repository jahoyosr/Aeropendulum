/*
 * File: ert_main.c
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
#include "rtwtypes.h"
#include <ext_work.h>
#include <ext_svr.h>
#include <ext_share.h>
#include <updown.h>

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  SMC_packachazo_step();

  /* Get model outputs here */
#ifndef _MW_ARDUINO_LOOP_

  cli();

#endif;

  OverrunFlag--;
  rtExtModeCheckEndTrigger();
}

int main(void)
{
  volatile boolean_T runModel = 1;
  float modelBaseRate = 0.1;
  float systemClock = 0;
  init();
  MW_Arduino_Init();
  rtmSetErrorStatus(SMC_packachazo_M, 0);

  /* initialize external mode */
  rtParseArgsForExtMode(0, NULL);
  SMC_packachazo_initialize();
  sei();

  /* External mode */
  rtSetTFinalForExtMode(&rtmGetTFinal(SMC_packachazo_M));
  rtExtModeCheckInit(2);

  {
    boolean_T rtmStopReq = false;
    rtExtModeWaitForStartPkt(SMC_packachazo_M->extModeInfo, 2, &rtmStopReq);
    if (rtmStopReq) {
      rtmSetStopRequested(SMC_packachazo_M, true);
    }
  }

  rtERTExtModeStartMsg();
  cli();
  configureArduinoAVRTimer();
  runModel =
    (rtmGetErrorStatus(SMC_packachazo_M) == (NULL)) && !rtmGetStopRequested
    (SMC_packachazo_M);

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  sei();
  while (runModel) {
    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(SMC_packachazo_M->extModeInfo, 2, &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(SMC_packachazo_M, true);
      }
    }

    runModel =
      (rtmGetErrorStatus(SMC_packachazo_M) == (NULL)) && !rtmGetStopRequested
      (SMC_packachazo_M);
    runModel = runModel && MW_Arduino_Loop();
  }

  rtExtModeShutdown(2);

  /* Disable rt_OneStep() here */

  /* Terminate model */
  SMC_packachazo_terminate();
  cli();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
