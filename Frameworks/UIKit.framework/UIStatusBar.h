/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBar : UIStatusBar_Base <UIStatusBarServerClient, UIStatusBarStateObserver> {
    UIStatusBarBackgroundView * _backgroundView;
    NSString * _currentDoubleHeightText;
    struct { 
        bool itemIsEnabled[35]; 
        BOOL timeString[64]; 
        BOOL shortTimeString[64]; 
        int gsmSignalStrengthRaw; 
        int gsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL serviceCrossfadeString[100]; 
        BOOL serviceImages[2][100]; 
        BOOL operatorDirectory[1024]; 
        unsigned int serviceContentType; 
        int wifiSignalStrengthRaw; 
        int wifiSignalStrengthBars; 
        unsigned int dataNetworkType; 
        int batteryCapacity; 
        unsigned int batteryState; 
        BOOL batteryDetailString[150]; 
        int bluetoothBatteryCapacity; 
        int thermalColor; 
        unsigned int thermalSunlightMode : 1; 
        unsigned int slowActivity : 1; 
        unsigned int syncActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
        unsigned int locationIconType : 1; 
        unsigned int quietModeInactive : 1; 
        unsigned int tetheringConnectionCount; 
        unsigned int batterySaverModeActive : 1; 
        unsigned int deviceIsRTL : 1; 
        unsigned int lock : 1; 
        BOOL breadcrumbTitle[256]; 
        BOOL breadcrumbSecondaryTitle[256]; 
        BOOL personName[100]; 
        unsigned int electronicTollCollectionAvailable : 1; 
        unsigned int wifiLinkWarning : 1; 
        unsigned int wifiSearching : 1; 
        double backgroundActivityDisplayStartDate; 
    }  _currentRawData;
    NSMutableSet * _disableRasterizationReasons;
    UILabel * _doubleHeightLabel;
    UIView * _doubleHeightLabelContainer;
    UIStatusBarForegroundView * _foregroundView;
    bool  _foregroundViewShouldIgnoreStatusBarDataDuringAnimation;
    <UIStatusBarStateProvider> * _inProcessProvider;
    NSMutableArray * _interruptedAnimationCompositeViews;
    UIColor * _lastUsedBackgroundColor;
    UIStatusBarBackgroundView * _newStyleBackgroundView;
    UIStatusBarForegroundView * _newStyleForegroundView;
    UIStatusBarStyleAnimationParameters * _nextTintTransition;
    long long  _orientation;
    NSNumber * _overrideHeight;
    bool  _showOnlyCenterItems;
    bool  _showsForeground;
    UIStatusBar * _slidingStatusBar;
    UIStatusBarWindow * _statusBarWindow;
    UIStatusBarStyleAttributes * _styleAttributes;
    bool  _suppressGlow;
    bool  _timeHidden;
    UIColor * _tintColor;
    double  _translucentBackgroundAlpha;
    bool  _waitingOnCallbackAfterChangingStyleOverridesLocally;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isTimeHidden, nonatomic) bool timeHidden;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (bool)_isLightContentStyle:(long long)arg1;
+ (id)_newStyleAttributesForRequest:(id)arg1;
+ (void)_setDeviceUserInterfaceLayoutDirection:(long long)arg1;
+ (bool)_shouldForwardToImplementationClassForStyle:(long long)arg1;
+ (id)_styleAttributesForRequest:(id)arg1;
+ (id)_styleAttributesForStatusBarStyle:(long long)arg1 legacy:(bool)arg2;
+ (double)_viewControllerAdjustmentForOrientation:(long long)arg1;
+ (int)cornerStyleForRequestedStyle:(long long)arg1 effectiveStyle:(long long)arg2 alignment:(int)arg3;
+ (id)defaultBlueTintColor;
+ (long long)defaultStatusBarStyleWithTint:(bool)arg1;
+ (long long)defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2;
+ (long long)deviceUserInterfaceLayoutDirection;
+ (void)enumerateStatusBarStyleOverridesWithBlock:(id /* block */)arg1;
+ (void)getData:(struct { bool x1[35]; BOOL x2[64]; BOOL x3[64]; int x4; int x5; BOOL x6[100]; BOOL x7[100]; BOOL x8[2][100]; BOOL x9[1024]; unsigned int x10; int x11; int x12; unsigned int x13; int x14; unsigned int x15; BOOL x16[150]; int x17; int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; BOOL x22[256]; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; BOOL x33[256]; BOOL x34[100]; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; double x38; }*)arg1 forRequestedData:(const struct { bool x1[35]; BOOL x2[64]; BOOL x3[64]; int x4; int x5; BOOL x6[100]; BOOL x7[100]; BOOL x8[2][100]; BOOL x9[1024]; unsigned int x10; int x11; int x12; unsigned int x13; int x14; unsigned int x15; BOOL x16[150]; int x17; int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; BOOL x22[256]; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; BOOL x33[256]; BOOL x34[100]; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; double x38; }*)arg2 withOverrides:(const struct { bool x1[35]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; struct { bool x_27_1_1[35]; BOOL x_27_1_2[64]; BOOL x_27_1_3[64]; int x_27_1_4; int x_27_1_5; BOOL x_27_1_6[100]; BOOL x_27_1_7[100]; BOOL x_27_1_8[2][100]; BOOL x_27_1_9[1024]; unsigned int x_27_1_10; int x_27_1_11; int x_27_1_12; unsigned int x_27_1_13; int x_27_1_14; unsigned int x_27_1_15; BOOL x_27_1_16[150]; int x_27_1_17; int x_27_1_18; unsigned int x_27_1_19 : 1; unsigned int x_27_1_20 : 1; unsigned int x_27_1_21 : 1; BOOL x_27_1_22[256]; unsigned int x_27_1_23 : 1; unsigned int x_27_1_24 : 1; unsigned int x_27_1_25 : 1; unsigned int x_27_1_26 : 1; unsigned int x_27_1_27 : 1; unsigned int x_27_1_28; unsigned int x_27_1_29 : 1; unsigned int x_27_1_30 : 1; unsigned int x_27_1_31 : 1; BOOL x_27_1_32[256]; BOOL x_27_1_33[256]; BOOL x_27_1_34[100]; unsigned int x_27_1_35 : 1; unsigned int x_27_1_36 : 1; unsigned int x_27_1_37 : 1; double x_27_1_38; } x27; }*)arg3;
+ (double)heightForStyle:(long long)arg1 orientation:(long long)arg2;
+ (long long)lowBatteryLevel;
+ (id)navBarTintColorFromStatusBarTintColor:(id)arg1;
+ (void)setTintOverrideEnabled:(bool)arg1 withColor:(id)arg2;
+ (id)statusBarTintColorForNavBarTintColor:(id)arg1;

- (void)_adjustDoubleHeightTextVisibility;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundFrameForAttributes:(id)arg1;
- (id)_backgroundView;
- (void)_beginDisablingRasterizationForReason:(id)arg1;
- (void)_clearOverrideHeight;
- (void)_crossfadeToNewBackgroundView;
- (void)_crossfadeToNewForegroundViewWithAlpha:(double)arg1;
- (id)_currentComposedData;
- (id)_currentComposedDataForStyle:(id)arg1;
- (id)_currentStyleAttributes;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;
- (void)_endDisablingRasterizationForReason:(id)arg1;
- (void)_finishedSettingStyleWithOldHeight:(double)arg1 newHeight:(double)arg2 animation:(int)arg3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 showForegroundView:(bool)arg2 inProcessStateProvider:(id)arg3;
- (bool)_isTransparent;
- (void)_itemViewPerformButtonAction:(id)arg1;
- (void)_itemViewShouldBeginDisablingRasterization:(id)arg1;
- (void)_itemViewShouldEndDisablingRasterization:(id)arg1;
- (void)_performBlockWhileIgnoringForegroundViewChanges:(id /* block */)arg1;
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(bool)arg1;
- (id)_prepareToSetStyle:(id)arg1 animation:(int)arg2 forced:(bool)arg3;
- (bool)_rectIntersectsTimeItem:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_requestStyle:(long long)arg1 animationParameters:(id)arg2 forced:(bool)arg3;
- (void)_setDoubleHeightStatusString:(id)arg1;
- (void)_setFrameForStyle:(id)arg1;
- (void)_setOverrideHeight:(double)arg1;
- (void)_setStyle:(id)arg1;
- (void)_setStyle:(id)arg1 animation:(int)arg2;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { double x1; double x2; })arg1;
- (bool)_shouldReverseLayoutDirection;
- (bool)_shouldSeekHigherPriorityTouchTarget;
- (bool)_shouldUseInProcessProviderDoubleHeightStatusString;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_slideTransform;
- (double)_standardHeight;
- (void)_statusBarDidAnimateRotation;
- (void)_statusBarWillAnimateRotation;
- (id)_styleAttributesForRequest:(id)arg1;
- (void)_swapToNewBackgroundView;
- (void)_swapToNewForegroundView;
- (bool)_touchShouldProduceReturnEvent;
- (void)_updateBackgroundFrame;
- (void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1;
- (void)_updateShouldRasterize;
- (void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2;
- (void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2 forced:(bool)arg3;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void).cxx_destruct;
- (id)activeTintColor;
- (void)animateUnlock;
- (void)crossfadeTime:(bool)arg1 duration:(double)arg2;
- (id)currentDoubleHeightLabelText;
- (long long)currentStyle;
- (id)currentStyleRequestForStyle:(long long)arg1;
- (void)dealloc;
- (double)defaultDoubleHeight;
- (double)defaultHeight;
- (void)forceUpdate:(bool)arg1;
- (void)forceUpdateData:(bool)arg1;
- (void)forceUpdateDoubleHeightStatus;
- (void)forceUpdateGlowAnimation;
- (void)forceUpdateToData:(const struct { bool x1[35]; BOOL x2[64]; BOOL x3[64]; int x4; int x5; BOOL x6[100]; BOOL x7[100]; BOOL x8[2][100]; BOOL x9[1024]; unsigned int x10; int x11; int x12; unsigned int x13; int x14; unsigned int x15; BOOL x16[150]; int x17; int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; BOOL x22[256]; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; BOOL x33[256]; BOOL x34[100]; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; double x38; }*)arg1 animated:(bool)arg2;
- (void)forgetEitherSideHistory;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForOrientation:(long long)arg1;
- (double)heightForOrientation:(long long)arg1;
- (bool)isDoubleHeight;
- (bool)isTimeHidden;
- (bool)isTranslucent;
- (void)jiggleLockIcon;
- (void)layoutSubviews;
- (void)noteStyleOverridesChangedLocally;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)requestStyle:(long long)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setEnabledCenterItems:(id)arg1 duration:(double)arg2;
- (void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setHidden:(bool)arg1 animationParameters:(id)arg2;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setPersistentAnimationsEnabled:(bool)arg1;
- (void)setRegistered:(bool)arg1;
- (void)setShowsOnlyCenterItems:(bool)arg1;
- (void)setSimulatesLegacyAppearance:(bool)arg1;
- (void)setStatusBarWindow:(id)arg1;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (void)setSuppressesGlow:(bool)arg1;
- (void)setSuppressesHiddenSideEffects:(bool)arg1;
- (void)setTimeHidden:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(bool)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const struct { bool x1[35]; BOOL x2[64]; BOOL x3[64]; int x4; int x5; BOOL x6[100]; BOOL x7[100]; BOOL x8[2][100]; BOOL x9[1024]; unsigned int x10; int x11; int x12; unsigned int x13; int x14; unsigned int x15; BOOL x16[150]; int x17; int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; BOOL x22[256]; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; BOOL x33[256]; BOOL x34[100]; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; double x38; }*)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const struct { bool x1[35]; BOOL x2[64]; BOOL x3[64]; int x4; int x5; BOOL x6[100]; BOOL x7[100]; BOOL x8[2][100]; BOOL x9[1024]; unsigned int x10; int x11; int x12; unsigned int x13; int x14; unsigned int x15; BOOL x16[150]; int x17; int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; BOOL x22[256]; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; BOOL x33[256]; BOOL x34[100]; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; double x38; }*)arg2 withActions:(int)arg3;
- (id)statusBarWindow;
- (id)styleRequest;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
