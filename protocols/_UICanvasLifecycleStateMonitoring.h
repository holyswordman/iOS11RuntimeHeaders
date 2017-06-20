/* Generated by RuntimeBrowser.
 */

@protocol _UICanvasLifecycleStateMonitoring <_UICanvasLifecycleStateTransitioning>

@required

- (bool)_hasLifecycle;
- (bool)_isActive;
- (bool)_isRespondingToLifecycleEvent;
- (bool)_runningInTaskSwitcher;
- (void)_setIsActive:(bool)arg1;
- (void)_setIsRespondingToLifecycleEvent:(bool)arg1;
- (void)_setRunningInTaskSwitcher:(bool)arg1;
- (void)_setSuspendedEventsOnly:(bool)arg1;
- (void)_setSuspendedUnderLock:(bool)arg1;
- (bool)_suspendedEventsOnly;
- (bool)_suspendedUnderLock;

@end
