/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLCommandQueue : NSObject {
    bool  _StatEnabled;
    unsigned long long  _StatLocations;
    unsigned long long  _StatOptions;
    int  _backgroundTrackingPID;
    NSObject<OS_dispatch_semaphore> * _commandBufferSemaphore;
    NSObject<OS_dispatch_queue> * _commandQueueDispatch;
    NSObject<OS_dispatch_source> * _commandQueueEventSource;
    NSObject<OS_dispatch_queue> * _completionQueueDispatch;
    _MTLDevice * _dev;
    bool  _executionEnabled;
    unsigned long long  _globalTraceObjectID;
    NSString * _label;
    unsigned long long  _labelTraceID;
    unsigned long long  _listIndex;
    unsigned long long  _maxCommandBufferCount;
    unsigned long long  _numCommandBuffers;
    bool  _openGLQueue;
    NSMutableArray * _pendingQueue;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _pendingQueueLock;
    id /* block */  _perfSampleHandlerBlock;
    bool  _profilingEnabled;
    unsigned long long  _qosClass;
    long long  _qosRelativePriority;
    bool  _skipRender;
    NSObject<OS_dispatch_group> * _submittedGroup;
    NSMutableArray * _submittedQueue;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _submittedQueueLock;
}

@property (getter=isStatEnabled, nonatomic) bool StatEnabled;
@property (getter=getStatLocations, nonatomic) unsigned long long StatLocations;
@property (getter=getStatOptions, nonatomic) unsigned long long StatOptions;
@property int backgroundTrackingPID;
@property bool executionEnabled;
@property (readonly) unsigned long long globalTraceObjectID;
@property (readonly) bool isOpenGLQueue;
@property (copy) NSString *label;
@property (getter=getListIndex, nonatomic) unsigned long long listIndex;
@property (readonly) unsigned long long maxCommandBufferCount;
@property (nonatomic) unsigned long long numCommandBuffers;
@property (getter=isProfilingEnabled) bool profilingEnabled;
@property (readonly) unsigned long long qosClass;
@property (readonly) long long qosRelativePriority;
@property bool skipRender;

- (void)_submitAvailableCommandBuffers;
- (void)addPerfSampleHandler:(id /* block */)arg1;
- (void)availableCounters;
- (int)backgroundTrackingPID;
- (void)commandBufferDidComplete:(id)arg1 startTime:(unsigned long long)arg2 completionTime:(unsigned long long)arg3 error:(id)arg4;
- (void)commitCommandBuffer:(id)arg1 wake:(bool)arg2;
- (void)completeCommandBuffers:(id*)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (id)description;
- (void)enqueueCommandBuffer:(id)arg1;
- (bool)executionEnabled;
- (void)finish;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)getAndIncrementNumCommandBuffers;
- (unsigned long long)getListIndex;
- (unsigned long long)getStatLocations;
- (unsigned long long)getStatOptions;
- (unsigned long long)globalTraceObjectID;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2;
- (void)insertDebugCaptureBoundary;
- (bool)isOpenGLQueue;
- (bool)isProfilingEnabled;
- (bool)isStatEnabled;
- (id)label;
- (unsigned long long)maxCommandBufferCount;
- (unsigned long long)numCommandBuffers;
- (unsigned long long)qosClass;
- (long long)qosRelativePriority;
- (int)requestCounters:(id)arg1;
- (int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)setBackgroundTrackingPID:(int)arg1;
- (void)setExecutionEnabled:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setListIndex:(unsigned long long)arg1;
- (void)setNumCommandBuffers:(unsigned long long)arg1;
- (void)setProfilingEnabled:(bool)arg1;
- (void)setSkipRender:(bool)arg1;
- (void)setStatEnabled:(bool)arg1;
- (void)setStatLocations:(unsigned long long)arg1;
- (void)setStatOptions:(unsigned long long)arg1;
- (void)setSubmissionQueue:(id)arg1;
- (bool)skipRender;
- (void)submitCommandBuffers:(const id*)arg1 count:(unsigned long long)arg2;

@end
