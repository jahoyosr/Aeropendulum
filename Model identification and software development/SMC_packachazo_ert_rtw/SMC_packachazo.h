/*
 * File: SMC_packachazo.h
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

#ifndef RTW_HEADER_SMC_packachazo_h_
#define RTW_HEADER_SMC_packachazo_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef SMC_packachazo_COMMON_INCLUDES_
# define SMC_packachazo_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "arduino_analoginput_lct.h"
#include "arduino_analogoutput_lct.h"
#include "arduino_digitaloutput_lct.h"
#endif                                 /* SMC_packachazo_COMMON_INCLUDES_ */

#include "SMC_packachazo_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->ModelData.odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->ModelData.odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T X2;                           /* '<S1>/Sum1' */
  real_T Gain11;                       /* '<S1>/Gain11' */
  real_T Gain12;                       /* '<S1>/Gain12' */
  real_T theta;                        /* '<S1>/Gain1' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T S;                            /* '<Root>/Sum2' */
  real_T U;                            /* '<Root>/Gain3' */
  real_T TmpSignalConversionAtStateSpace[2];
} B_SMC_packachazo_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<Root>/Scope3' */
} DW_SMC_packachazo_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T StateSpace1_CSTATE[2];        /* '<S1>/State-Space1' */
} X_SMC_packachazo_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T StateSpace1_CSTATE[2];        /* '<S1>/State-Space1' */
} XDot_SMC_packachazo_T;

/* State disabled  */
typedef struct {
  boolean_T StateSpace1_CSTATE[2];     /* '<S1>/State-Space1' */
} XDis_SMC_packachazo_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Parameters (auto storage) */
struct P_SMC_packachazo_T_ {
  real_T A[4];                         /* Variable: A
                                        * Referenced by: '<S1>/State-Space1'
                                        */
  uint32_T PWM_pinNumber;              /* Mask Parameter: PWM_pinNumber
                                        * Referenced by: '<S3>/PWM'
                                        */
  uint32_T DigitalOutput_pinNumber;    /* Mask Parameter: DigitalOutput_pinNumber
                                        * Referenced by: '<S2>/Digital Output'
                                        */
  real_T Constant2_Value;              /* Expression: 38.677
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T StateSpace1_B[4];             /* Expression: [B L]
                                        * Referenced by: '<S1>/State-Space1'
                                        */
  real_T StateSpace1_C[4];             /* Expression: eye(2)
                                        * Referenced by: '<S1>/State-Space1'
                                        */
  real_T StateSpace1_X0[2];            /* Expression: [-0.65 0]
                                        * Referenced by: '<S1>/State-Space1'
                                        */
  real_T Gain11_Gain;                  /* Expression: 180/pi
                                        * Referenced by: '<S1>/Gain11'
                                        */
  real_T Gain12_Gain;                  /* Expression: 180/pi
                                        * Referenced by: '<S1>/Gain12'
                                        */
  real_T Ref_Value;                    /* Expression: 0
                                        * Referenced by: '<S1>/Ref'
                                        */
  real_T Gain1_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S1>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: 4
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Gain3_Gain;                   /* Expression: -175
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 255
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 110
                                        * Referenced by: '<S1>/Saturation'
                                        */
  real_T U_eq1_Value;                  /* Expression: 205
                                        * Referenced by: '<S1>/U_eq1'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant1'
                                        */
  uint32_T AnalogInput_p1;             /* Computed Parameter: AnalogInput_p1
                                        * Referenced by: '<S1>/Analog Input'
                                        */
  uint16_T Gain_Gain_nwjfwxlfng;       /* Computed Parameter: Gain_Gain_nwjfwxlfng
                                        * Referenced by: '<S1>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_SMC_packachazo_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    X_SMC_packachazo_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    real_T odeY[2];
    real_T odeF[3][2];
    ODE3_IntgData intgData;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_SMC_packachazo_T SMC_packachazo_P;

/* Block signals (auto storage) */
extern B_SMC_packachazo_T SMC_packachazo_B;

/* Continuous states (auto storage) */
extern X_SMC_packachazo_T SMC_packachazo_X;

/* Block states (auto storage) */
extern DW_SMC_packachazo_T SMC_packachazo_DW;

/* Model entry point functions */
extern void SMC_packachazo_initialize(void);
extern void SMC_packachazo_step(void);
extern void SMC_packachazo_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SMC_packachazo_T *const SMC_packachazo_M;

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
 * '<Root>' : 'SMC_packachazo'
 * '<S1>'   : 'SMC_packachazo/Subsystem'
 * '<S2>'   : 'SMC_packachazo/Subsystem/Digital Output'
 * '<S3>'   : 'SMC_packachazo/Subsystem/PWM'
 */
#endif                                 /* RTW_HEADER_SMC_packachazo_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
