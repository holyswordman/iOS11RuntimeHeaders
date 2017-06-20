/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataURLSession : NSObject <GEODataSession, NSURLSessionDataDelegate> {
    NSObject<OS_dispatch_queue> * _sessionIsolation;
    NSOperationQueue * _sessionIsolationOperationQueue;
    NSMutableDictionary * _sessionTasks;
    int  _symptomsAlternateAdviceToken;
    NSMutableArray * _urlSessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (nonatomic, readonly) NSOperationQueue *sessionIsolationOperationQueue;
@property (nonatomic, readonly) NSMutableDictionary *sessionTasks;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *urlSessions;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)_configureTask:(id)arg1 withRequest:(id)arg2;
- (void)_considerRetryingDueToAlternateAdvice;
- (double)_wifiAssistRetryDelay;
- (bool)_wifiAssistRetryEnabled;
- (void)configureTask:(id)arg1 withRequest:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)createNewURLSessionWithRequest:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)removeTaskForURLSession:(id)arg1 task:(id)arg2;
- (id)sessionIsolation;
- (id)sessionIsolationOperationQueue;
- (id)sessionTasks;
- (id)taskForURLSession:(id)arg1 task:(id)arg2;
- (id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (void)tearDown;
- (id)urlSessionForRequest:(id)arg1;
- (id)urlSessions;

@end
