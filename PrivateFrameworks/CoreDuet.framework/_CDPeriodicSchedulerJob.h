/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPeriodicSchedulerJob : NSObject {
    NSObject<OS_xpc_object> * _executionCriteria;
    id /* block */  _handler;
    double  _interval;
    NSString * _jobName;
    long long  _period;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) NSObject<OS_xpc_object> *executionCriteria;
@property (readonly) id /* block */ handler;
@property (readonly) double interval;
@property (readonly) NSString *jobName;
@property (readonly) long long period;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)jobWithInterval:(double)arg1 schedulerJobName:(id)arg2 handler:(id /* block */)arg3;
+ (id)jobWithPeriod:(long long)arg1 schedulerJobName:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)executionCriteria;
- (id /* block */)handler;
- (id)init;
- (id)initWithPeriod:(long long)arg1 interval:(double)arg2 schedulerJobName:(id)arg3 queue:(id)arg4 handler:(id /* block */)arg5;
- (id)initWithPeriod:(long long)arg1 schedulerJobName:(id)arg2 handler:(id /* block */)arg3;
- (id)initWithPeriod:(long long)arg1 schedulerJobName:(id)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (double)interval;
- (id)jobName;
- (long long)period;
- (id)queue;

@end
