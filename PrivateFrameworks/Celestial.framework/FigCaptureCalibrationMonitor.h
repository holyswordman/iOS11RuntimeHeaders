/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureCalibrationMonitor : NSObject {
    FigCaptureAPSSphereInteractionCalibrationContext * _apsSphereInteractionCalibrationContext;
    FigCaptureAutoFocusCalibrationContext * _autoFocusCalibrationContext;
    FigCaptureAutoFocusPositionSensorCalibrationContext * _autoFocusPositionSensorCalibrationContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _calibrationLock;
    bool  _calibrationShouldAbort;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _coreMotionMagneticField;
    double  _coreMotionMagneticFieldMagnitude;
    int  _magneticFieldAccuracyAttemptCount;
    int  _magneticFieldAttempt;
    struct { 
        int attemptCount; 
        double threshold; 
    }  _magneticFieldMagnitudeTiers;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    FigCaptureSphereCalibrationContext * _sphereCalibrationContext;
    FigCaptureSphereEndStopCalibrationContext * _sphereEndStopCalibrationContext;
    NSMutableArray * _streamCalibrationInformation;
}

+ (void)initializeSharedInstance;
+ (id)sharedInstance;

- (bool)_calibrationShouldAbort;
- (id)_createDefaultXPCSchedulingParameters;
- (id)_createDictionaryForFailureOutsideFirmwareWithReasons:(int)arg1 withCalibrationData:(id)arg2 withDeviceType:(int)arg3 withDevicePosition:(int)arg4;
- (double)_getMagneticThresholdFromAttempt;
- (void)_notifyOfDeviceMotion;
- (id)_runAndCreateDictionaryForCalibration:(id)arg1 withDeviceType:(int)arg2 withDevicePosition:(int)arg3 errorsOut:(unsigned int*)arg4 didFirmwareHaveCalibrationError:(bool*)arg5;
- (void)_setCalibrationShouldAbort:(bool)arg1;
- (void)_setupAPSCalibration;
- (void)_setupAPSSPhereInteractionCalibration;
- (void)_setupActivityAndTriggers:(const char *)arg1 interval:(int)arg2 batteryLevel:(int)arg3 calibrationBlock:(id /* block */)arg4 isRepeating:(bool)arg5;
- (void)_setupAutoFocusCalibration;
- (void)_setupDuetTriggersAndScheduling;
- (void)_setupRepeatingCalibrationScheduling:(id)arg1 withCalibrationBlock:(id /* block */)arg2;
- (void)_setupSphereCalibration;
- (void)_setupSphereEndStopCalibration;
- (void)_startCalibrationAndLogWithData:(id)arg1 withDeviceType:(int)arg2 withDevicePosition:(int)arg3 withResultsBlock:(id /* block */)arg4;
- (id)apsSphereInteractionCalibrationData;
- (id)autoFocusCalibrationData;
- (id)autoFocusPositionSensorCalibrationData;
- (id)init;
- (id)runAutoFocusPositionSensorCalibrationAndGetResultsForDeviceType:(int)arg1 devicePosition:(int)arg2;
- (id)sphereCalibrationData;
- (id)sphereEndStopCalibrationData;

@end
