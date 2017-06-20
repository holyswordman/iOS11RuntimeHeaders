/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWBravoStreamSelector : NSObject {
    BWFigVideoCaptureStream * _currentMasterStream;
    bool  _ignoreFocusAndExposureStability;
    float  _initialFocusDistance;
    int  _initialFocusPosition;
    int  _initialLuxLevel;
    bool  _lockWhenExposureAndFocusAreStable;
    bool  _locked;
    bool  _lockedOnTele;
    float  _minFocusDistanceChangeForSceneChange;
    int  _minFocusPositionChangeForSceneChange;
    float  _minLuxLevelChangeForSceneChange;
    float  _previousZoomFactor;
    BWFigVideoCaptureStream * _recommendedMasterStream;
    bool  _resetSceneChangeMonitoring;
    bool  _sceneChangeDetected;
    int  _selectionBehavior;
    float  _teleAEGainHysteresisLag;
    float  _teleBaseZoomFactor;
    float  _teleMaxAEGain;
    BWFigVideoCaptureStream * _teleStream;
    int  _teleToWideFocusDistance;
    int  _teleToWideFocusPosition;
    bool  _usesAPSFocusDistance;
    bool  _usesLensMakersFocusDistance;
    int  _waitForFocusFrameCounter;
    BWFigVideoCaptureStream * _wideStream;
    int  _wideToTeleFocusDistance;
    int  _wideToTeleFocusPosition;
}

@property (nonatomic) bool ignoreFocusAndExposureStability;
@property (nonatomic) int selectionBehavior;

+ (void)initialize;

- (void)_attemptLockWithFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg1;
- (bool)_exposureAndFocusStableForSwitchOverForFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg1;
- (id)_preferredMasterStreamForZoomFactor:(float)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg2;
- (bool)_selectionBehaviorAllowsSwitchOverForFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg1 zoomFactor:(float)arg2;
- (void)_updateSceneChangeMonitorWithFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg1 fromMasterStream:(id)arg2 zoomFactor:(float)arg3;
- (bool)ignoreFocusAndExposureStability;
- (id)initWithStreamSelectionAttributes:(id)arg1 wideStream:(id)arg2 teleStream:(id)arg3;
- (void)lockWhenExposureAndFocusAreStable;
- (id)recommendMasterStreamUsingCurrentMasterStream:(id)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; unsigned char x16; double x17; int x18; int x19; int x20; float x21; float x22; int x23; int x24; int x25; float x26; float x27; int x28; int x29; int x30; int x31; long long x32; }*)arg2 zoomFactor:(float)arg3;
- (void)resetWithZoomFactor:(float)arg1 currentMasterStream:(id)arg2 teleMaxAEGain:(float)arg3;
- (int)selectionBehavior;
- (void)setIgnoreFocusAndExposureStability:(bool)arg1;
- (void)setSelectionBehavior:(int)arg1;
- (void)unlock;

@end
