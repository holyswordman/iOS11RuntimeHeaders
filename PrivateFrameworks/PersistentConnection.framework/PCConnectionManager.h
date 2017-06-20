/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCConnectionManager : NSObject <PCInterfaceMonitorDelegate> {
    bool  _alwaysWantsInterfaceChangeCallbacks;
    int  _connectionClass;
    double  _defaultPollingInterval;
    PCPersistentTimer * _delayTimer;
    <PCConnectionManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSRunLoop * _delegateRunLoop;
    bool  _deviceUnderGoodCondition;
    bool  _disableEarlyFire;
    NSString * _duetIdentifier;
    bool  _enableNonCellularConnections;
    bool  _forceManualWhenRoaming;
    unsigned long long  _guidancePriority;
    bool  _hasStarted;
    bool  _inCallback;
    long long  _interfaceIdentifier;
    PCPersistentTimer * _intervalTimer;
    bool  _isInReconnectMode;
    bool  _isReachable;
    bool  _isRunning;
    double  _keepAliveGracePeriod;
    double  _lastElapsedInterval;
    int  _lastProcessedAction;
    double  _lastReachableTime;
    double  _lastReconnectTime;
    double  _lastResumeTime;
    <PCGrowthAlgorithm> * _lastScheduledGrowthAlgorithm;
    double  _lastScheduledIntervalTime;
    double  _lastStartTime;
    double  _lastStopTime;
    NSObject<OS_os_log> * _logObject;
    bool  _minimumIntervalFallbackEnabled;
    double  _onTimeKeepAliveTime;
    int  _onlyAllowedStyle;
    bool  _onlyAllowedStyleSet;
    bool  _operatorMinimumIntervalFallbackAllowed;
    double  _pollingIntervalOverride;
    bool  _pollingIntervalOverrideSet;
    unsigned int  _powerAssertionID;
    int  _prefsChangedToken;
    int  _prefsStyle;
    int  _pushIsConnectedToken;
    unsigned int  _reconnectIteration;
    PCPersistentTimer * _reconnectWakeTimer;
    bool  _reconnectWithKeepAliveDelay;
    NSString * _serviceIdentifier;
    double  _timerGuidance;
    int  _timerGuidanceToken;
    <PCGrowthAlgorithm> * _wifiGrowthAlgorithm;
    <PCGrowthAlgorithm> * _wwanGrowthAlgorithm;
}

@property (nonatomic) bool alwaysWantsInterfaceChangeCallbacks;
@property (nonatomic, readonly) unsigned long long countOfGrowthActions;
@property (nonatomic, readonly) double currentKeepAliveInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PCConnectionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableEarlyFire;
@property (nonatomic, copy) NSString *duetIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interfaceIdentifier;
@property (nonatomic, readonly) bool isRunning;
@property (nonatomic) double keepAliveGracePeriod;
@property (nonatomic, readonly) int lastProcessedAction;
@property double maximumKeepAliveInterval;
@property (nonatomic) bool minimumIntervalFallbackEnabled;
@property (nonatomic) double minimumKeepAliveInterval;
@property (nonatomic, readonly) double pollingInterval;
@property (readonly) Class superclass;

+ (bool)_isCachedKeepAliveIntervalStillValid:(double)arg1 date:(id)arg2;
+ (id)_keepAliveCachePath;
+ (Class)growthAlgorithmClass;
+ (id)intervalCacheDictionaries;

- (void).cxx_destruct;
- (void)_adjustInterfaceAssertions;
- (void)_adjustMinimumIntervalFallback;
- (void)_adjustPollTimerIfNecessary;
- (void)_callDelegateWithEventAndContext:(id)arg1;
- (void)_calloutWithEvent:(int)arg1 context:(id)arg2;
- (void)_clearTimers;
- (void)_clearTimersReleasingPowerAssertion:(bool)arg1;
- (id)_currentGrowthAlgorithm;
- (void)_delayTimerFired;
- (id)_getCachedWWANKeepAliveInterval;
- (void)_handleDeviceConditionChangeCallback;
- (bool)_hasBudgetRemaining;
- (id)_initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 serviceIdentifier:(id)arg6;
- (void)_intervalTimerFired;
- (bool)_isPushConnected;
- (void)_loadPreferencesGeneratingEvent:(bool)arg1;
- (void)_pauseTimers;
- (void)_preferencesChanged;
- (void)_processDeviceConditionChanges;
- (void)_registerForDeviceConditionsNotifications;
- (void)_releasePowerAssertion;
- (void)_resolveStateWithAction:(int)arg1;
- (void)_saveWWANKeepAliveInterval;
- (void)_setTimerGuidance:(double)arg1;
- (void)_setupKeepAliveForReconnect;
- (void)_setupTimerForPollForAdjustment:(bool)arg1;
- (void)_setupTimerForPushWithKeepAliveInterval:(double)arg1;
- (id)_stringForAction:(int)arg1;
- (id)_stringForEvent:(int)arg1;
- (id)_stringForStyle:(int)arg1;
- (void)_takePowerAssertionWithTimeout:(double)arg1;
- (void)_validateActionForCurrentStyle:(int)arg1;
- (bool)alwaysWantsInterfaceChangeCallbacks;
- (void)cancelPollingIntervalOverride;
- (unsigned long long)countOfGrowthActions;
- (double)currentKeepAliveInterval;
- (int)currentStyle;
- (void)dealloc;
- (id)delegate;
- (bool)disableEarlyFire;
- (id)duetIdentifier;
- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 serviceIdentifier:(id)arg4;
- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 serviceIdentifier:(id)arg3;
- (id)initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 serviceIdentifier:(id)arg5;
- (long long)interfaceIdentifier;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceManagerInHomeCountryStatusChanged:(id)arg1;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (bool)isRunning;
- (double)keepAliveGracePeriod;
- (int)lastProcessedAction;
- (double)maximumKeepAliveInterval;
- (bool)minimumIntervalFallbackEnabled;
- (double)minimumKeepAliveInterval;
- (bool)operatorMinimumIntervalFallbackAllowed;
- (id)persistentInterfaceManager;
- (double)pollingInterval;
- (void)resumeManagerWithAction:(int)arg1;
- (void)resumeManagerWithAction:(int)arg1 forceGrow:(bool)arg2;
- (void)setAlwaysWantsInterfaceChangeCallbacks:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableEarlyFire:(bool)arg1;
- (void)setDuetIdentifier:(id)arg1;
- (void)setEnableNonCellularConnections:(bool)arg1;
- (void)setInterfaceIdentifier:(long long)arg1;
- (void)setKeepAliveGracePeriod:(double)arg1;
- (void)setMaximumKeepAliveInterval:(double)arg1;
- (void)setMinimumIntervalFallbackEnabled:(bool)arg1;
- (void)setMinimumKeepAliveInterval:(double)arg1;
- (void)setOnlyAllowedStyle:(int)arg1;
- (void)setOperatorMinimumIntervalFallbackAllowed:(bool)arg1;
- (void)setPollingIntervalOverride:(double)arg1;
- (bool)shouldClientScheduleReconnectDueToFailure;
- (void)startManager;
- (void)stopAndResetManager;
- (void)stopManager;

@end
