/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQueryServer : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HKQueryServerInterface> {
    NSDictionary * _baseDataEntityEncodingOptions;
    HDXPCClient * _client;
    <HKQueryClientInterface><NSXPCProxyCreating> * _clientProxy;
    double  _collectionInterval;
    HKQueryServerConfiguration * _configuration;
    NSArray * _dataObservationAssertions;
    <HDQueryServerDelegate> * _delegate;
    bool  _didEndActivationTransaction;
    _HKFilter * _filter;
    HKObjectType * _objectType;
    bool  _observingData;
    HDProfile * _profile;
    id /* block */  _queryDidFinishHandler;
    NSObject<OS_dispatch_queue> * _queryQueue;
    long long  _queryState;
    NSUUID * _queryUUID;
    int  _shouldFinish;
    int  _shouldPause;
    NSObject<OS_dispatch_queue> * _unitTestQueryQueue;
    id /* block */  _unitTest_queryServerSetShouldPauseHandler;
    id /* block */  _unitTest_queryServerWillChangeStateHandler;
}

@property (nonatomic, readonly) HDXPCClient *client;
@property (readonly) bool clientHasActiveWorkout;
@property (readonly) bool clientIsInForeground;
@property (nonatomic, readonly) <HKQueryClientInterface><NSXPCProxyCreating> *clientProxy;
@property (nonatomic) double collectionInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDQueryServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _HKFilter *filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKObjectType *objectType;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queryQueue;
@property (nonatomic, readonly) long long queryState;
@property (nonatomic, readonly, copy) NSUUID *queryUUID;
@property (nonatomic, readonly) HKSampleType *sampleType;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_queryServerSetShouldPauseHandler;
@property (nonatomic, copy) id /* block */ unitTest_queryServerWillChangeStateHandler;

- (void).cxx_destruct;
- (id)_activationTransactionString;
- (id)_collectionObserverState;
- (void)_currentWorkoutDidChange:(id)arg1;
- (void)_pauseServerValidate:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)_predicateString;
- (id)_queryStateString;
- (void)_queue_beginObservingDataTypes;
- (void)_queue_closeActivationTransactionIfNecessary;
- (void)_queue_endObservingDataTypes;
- (void)_queue_setQueryState:(long long)arg1;
- (void)_queue_start;
- (void)_queue_startDataCollection;
- (void)_queue_startQueryIfNecessary;
- (void)_queue_stop;
- (void)_queue_stopDataCollection;
- (void)_queue_transitionToFinished;
- (void)_queue_transitionToPaused;
- (void)_queue_transitionToRunning;
- (void)_queue_transitionToSuspendedState:(long long)arg1;
- (bool)_queue_validateConfiguration:(id*)arg1;
- (id)_sampleTypeToObserveForUpdates;
- (void)_scheduleStartQuery;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)_shouldListenForUpdates;
- (bool)_shouldObserveAllSampleTypes;
- (bool)_shouldObserveOnPause;
- (bool)_shouldStopProcessingQuery;
- (bool)_shouldSuspendQuery;
- (void)activateServerWithCompletion:(id /* block */)arg1;
- (id)client;
- (bool)clientHasActiveWorkout;
- (bool)clientIsInForeground;
- (id)clientProxy;
- (void)clientStateChanged;
- (double)collectionInterval;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)deactivateServerWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)diagnosticDescription;
- (id)filter;
- (id)filteredSamplesForClientWithSamples:(id)arg1;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (id)newDataEntityEnumerator;
- (id)objectType;
- (void)onQueue:(id /* block */)arg1;
- (void)pauseServer;
- (void)pauseServerValidateWithCompletion:(id /* block */)arg1;
- (id)profile;
- (id)quantityType;
- (id)queryQueue;
- (long long)queryState;
- (id)queryUUID;
- (id)readAuthorizationStatusForType:(id)arg1 error:(id*)arg2;
- (void)remote_deactivateServer;
- (id)requiredEntitlements;
- (void)resumeServer;
- (id /* block */)sampleAuthorizationFilter;
- (id)sampleType;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (id)sanitizedSampleForQueryClient:(id)arg1;
- (void)scheduleDatabaseAccessOnQueueWithBlock:(id /* block */)arg1;
- (void)setCollectionInterval:(double)arg1;
- (void)setQueryDidFinishHandler:(id /* block */)arg1;
- (void)setShouldPause:(bool)arg1;
- (void)setUnitTest_queryServerSetShouldPauseHandler:(id /* block */)arg1;
- (void)setUnitTest_queryServerWillChangeStateHandler:(id /* block */)arg1;
- (id /* block */)unitTest_queryServerSetShouldPauseHandler;
- (id /* block */)unitTest_queryServerWillChangeStateHandler;

@end
