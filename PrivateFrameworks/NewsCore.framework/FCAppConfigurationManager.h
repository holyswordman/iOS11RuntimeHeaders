/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAppConfigurationManager : NSObject <FCJSONEncodableObjectProviding> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    <FCAppConfiguration> * _appConfiguration;
    bool  _attemptedAppConfigFetch;
    FCAsyncSerialQueue * _configRefreshSerialQueue;
    FCAsyncSerialQueue * _configRequestSerialQueue;
    FCAppConfigurationResource * _configurationResource;
    NSString * _configurationResourceID;
    FCCKContentDatabase * _contentDatabase;
    NSURL * _contentDirectoryFileURL;
    NSNumber * _currentModdedBucketID;
    NSNumber * _currentUserBucket;
    NSMutableArray * _observationBlocks;
    NSHashTable * _observers;
    NSSet * _preferredLanguages;
    FCKeyValueStore * _resourceCache;
    FCAppConfigurationResource * _trendingSearchesResource;
    NSString * _trendingSearchesResourceID;
    FCAsyncSerialQueue * _trendingSerialQueue;
    NSArray * _trendingTopics;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, copy) <FCAppConfiguration> *appConfiguration;
@property (nonatomic) bool attemptedAppConfigFetch;
@property (nonatomic, readonly) NSArray *availableExperiments;
@property (nonatomic, retain) FCAsyncSerialQueue *configRefreshSerialQueue;
@property (nonatomic, retain) FCAsyncSerialQueue *configRequestSerialQueue;
@property (nonatomic, retain) FCAppConfigurationResource *configurationResource;
@property (nonatomic, retain) NSString *configurationResourceID;
@property (nonatomic, retain) FCCKContentDatabase *contentDatabase;
@property (nonatomic, copy) NSURL *contentDirectoryFileURL;
@property (nonatomic, copy) NSNumber *currentModdedBucketID;
@property (nonatomic, copy) NSNumber *currentUserBucket;
@property (nonatomic, readonly) <FCAppConfiguration> *fetchedAppConfig;
@property (nonatomic, retain) NSMutableArray *observationBlocks;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) <FCAppConfiguration> *possiblyUnfetchedAppConfig;
@property (nonatomic, retain) NSSet *preferredLanguages;
@property (nonatomic, readonly, copy) NSURL *remoteURL;
@property (nonatomic, retain) FCKeyValueStore *resourceCache;
@property (nonatomic, retain) FCAppConfigurationResource *trendingSearchesResource;
@property (nonatomic, retain) NSString *trendingSearchesResourceID;
@property (nonatomic, retain) FCAsyncSerialQueue *trendingSerialQueue;
@property (nonatomic, copy) NSArray *trendingTopics;
@property (nonatomic, readonly) <FCAppConfiguration> *unsafeFetchedAppConfig;

+ (void)initialize;
+ (id)overrideAppConfigID;
+ (id)overrideForYouConfigID;
+ (id)overrideWidgetSectionConfigID;

- (void).cxx_destruct;
- (id)_adoptConfigurationResource:(id)arg1;
- (id)_adoptConfigurationResource:(id)arg1 force:(bool)arg2;
- (id)_adoptTrendingSearchesResource:(id)arg1;
- (void)_didChange;
- (void)_didChangeTrendingTopics;
- (void)_extractCommonValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 intoConfig:(id)arg4;
- (void)_extractEndpointConfigValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 intoConfig:(id)arg4;
- (void)_extractFeedIDsFromLanguageConfigurations:(id)arg1 hiddenFeedIDs:(id*)arg2 presubscribedFeedIDs:(id*)arg3 onboardingFeedIDs:(id*)arg4;
- (void)_extractPersonalizationValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 intoConfig:(id)arg4;
- (void)_extractPrefetchConfigFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 intoConfig:(id)arg4;
- (void)_extractTopStoriesIntervals:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 intoConfig:(id)arg4;
- (void)_extractTrendingTopicsFromLanguageConfiguration:(id)arg1;
- (id)_extractWidgetConfigFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (void)_extractiAdValuesFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3 intoConfig:(id)arg4;
- (id)_languageConfigurationsFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (id)_languageConfigurationsInProtobufTrendingConfiguration:(id)arg1;
- (id)_loadConfigurationResourceFromCache;
- (id)_loadResourceCache;
- (id)_loadTrendingSearchesResourceFromCache;
- (bool)_processTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (bool)_processTrendingSearchesData:(id)arg1;
- (id)_resolvedBriefingsTagIDForLanguageConfiguration:(id)arg1;
- (id)_resolvedForYouRecordConfigIDForLanguageConfiguration:(id)arg1;
- (id)_resolvedTopLevelCategoryFromTreatmentConfig:(id)arg1 controlConfig:(id)arg2 defaultConfig:(id)arg3;
- (id)_resolvedWidgetSectionConfigRecordIDForLanguageConfiguration:(id)arg1;
- (bool)_selectConfigurationForBucket:(id)arg1 configurationData:(id)arg2;
- (bool)_selectConfigurationForTreatment:(id)arg1 configurationData:(id)arg2;
- (id)_userBucket;
- (id)accessQueue;
- (void)addChangeObservationBlock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (id)appConfiguration;
- (bool)attemptedAppConfigFetch;
- (id)availableExperiments;
- (id)configRefreshSerialQueue;
- (id)configRequestSerialQueue;
- (id)configurationResource;
- (id)configurationResourceID;
- (id)contentDatabase;
- (id)contentDirectoryFileURL;
- (id)currentModdedBucketID;
- (id)currentUserBucket;
- (void)fetchAppConfigurationIfNeededWithCompletion:(id /* block */)arg1;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 force:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 force:(bool)arg2 refreshCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)fetchTrendingSearchesIfNeededWithCompletion:(id /* block */)arg1;
- (id)fetchedAppConfig;
- (id)init;
- (id)initWithContentDatabase:(id)arg1 contentDirectoryFileURL:(id)arg2;
- (id)initWithContentHostDirectoryFileURL:(id)arg1 networkBehaviorMonitor:(id)arg2;
- (id)jsonEncodableObject;
- (id)observationBlocks;
- (id)observers;
- (void)overrideConfigWithTreatment:(id)arg1;
- (id)possiblyUnfetchedAppConfig;
- (id)preferredLanguages;
- (void)refreshAppConfigIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(id /* block */)arg2;
- (id)remoteURL;
- (void)removeObserver:(id)arg1;
- (id)resourceCache;
- (void)setAccessQueue:(id)arg1;
- (void)setAppConfiguration:(id)arg1;
- (void)setAttemptedAppConfigFetch:(bool)arg1;
- (void)setConfigRefreshSerialQueue:(id)arg1;
- (void)setConfigRequestSerialQueue:(id)arg1;
- (void)setConfigurationResource:(id)arg1;
- (void)setConfigurationResourceID:(id)arg1;
- (void)setContentDatabase:(id)arg1;
- (void)setContentDirectoryFileURL:(id)arg1;
- (void)setCurrentModdedBucketID:(id)arg1;
- (void)setCurrentUserBucket:(id)arg1;
- (void)setObservationBlocks:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setResourceCache:(id)arg1;
- (void)setTrendingSearchesResource:(id)arg1;
- (void)setTrendingSearchesResourceID:(id)arg1;
- (void)setTrendingSerialQueue:(id)arg1;
- (void)setTrendingTopics:(id)arg1;
- (id)trendingSearchesResource;
- (id)trendingSearchesResourceID;
- (id)trendingSerialQueue;
- (id)trendingTopics;
- (id)unsafeFetchedAppConfig;

@end