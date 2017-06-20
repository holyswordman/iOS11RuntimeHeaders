/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionConnection : NSObject <NSCopying> {
    NSObject<OS_dispatch_data> * _cacheData;
    unsigned long long  _cacheDataMax;
    NSURLResponse * _cacheResponse;
    <SessionConnectionDelegate> * _delegate;
    long long  _maxCacheEntrySize;
    NSURLSessionTask * _task;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (retain) <SessionConnectionDelegate> *delegate;
@property (copy) NSURLSessionTask *task;

- (void)_appendDataToCache:(id)arg1;
- (id)_cachedResponse;
- (void)_setupForCache:(bool)arg1 expectedLength:(long long)arg2 response:(id)arg3;
- (void)_storeCachedResponse:(id)arg1;
- (void)_tossCache;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)resume;
- (void)setBytesPerSecondLimit:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsDownload:(bool)arg1;
- (void)setPoolPriority:(long long)arg1;
- (void)setPriorityHint:(float)arg1;
- (void)setTask:(id)arg1;
- (void)suspend;
- (id)task;
- (void)withWorkQueueAsync:(id /* block */)arg1;

@end
