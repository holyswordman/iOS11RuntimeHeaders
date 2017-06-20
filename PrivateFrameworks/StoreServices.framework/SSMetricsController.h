/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsController : NSObject {
    SSMetricsConfiguration * _configuration;
    SSXPCConnection * _connection;
    NSTimer * _flushEventsTimer;
    bool  _flushOnForeground;
    NSObject<OS_dispatch_queue> * _flushSerialQueue;
    bool  _flushTimerEnabled;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (getter=isFlushTimerEnabled, nonatomic) bool flushTimerEnabled;

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground;
- (id)_connection;
- (id)_cookieValuesForConfiguration:(id)arg1;
- (void)_enumerateFieldValuesWithMap:(id)arg1 fieldData:(id)arg2 block:(id /* block */)arg3;
- (void)_flushUnreportedEventsIfEnabled;
- (void)_handleFlushTimer;
- (void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_setupFlushTimer;
- (id)_userType;
- (id)_valueForField:(id)arg1 withFieldData:(id)arg2;
- (id)configuration;
- (void)dealloc;
- (void)flushUnreportedEventsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)insertEvent:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)insertEvents:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)isDisabled;
- (bool)isFlushTimerEnabled;
- (id)locationWithPosition:(long long)arg1 type:(id)arg2 fieldData:(id)arg3;
- (id)pingURLs;
- (id)serialQueue;
- (void)setFlushTimerEnabled:(bool)arg1;
- (void)setGlobalConfiguration:(id)arg1;
- (void)setPageConfiguration:(id)arg1;

@end
