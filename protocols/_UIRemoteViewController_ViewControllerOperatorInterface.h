/* Generated by RuntimeBrowser.
 */

@protocol _UIRemoteViewController_ViewControllerOperatorInterface

@required

- (void)__dismissTextServiceSessionAnimated:(bool)arg1;
- (void)__handleFocusMovementAction:(UIFocusMovementAction *)arg1;
- (void)__setServiceMaxFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)__setSupportedInterfaceOrientations:(NSArray *)arg1;
- (void)__setViewServiceIsDisplayingPopover:(bool)arg1;
- (void)__showEditAlertViewWithToken:(long long)arg1 canUndo:(bool)arg2 canRedo:(bool)arg3;
- (void)__showServiceForText:(void *)arg1 selectedTextRangeValue:(void *)arg2 type:(void *)arg3 fromRectValue:(void *)arg4 replyHandler:(void *)arg5; // needs 5 arg types, found 14: NSString *, NSValue *, long long, NSValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)__showServiceForText:(void *)arg1 type:(void *)arg2 fromRectValue:(void *)arg3 replyHandler:(void *)arg4; // needs 4 arg types, found 13: NSString *, long long, NSValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)__trampolineButtonPressData:(NSData *)arg1 canceled:(bool)arg2;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidUpdatePreferredScreenEdgesDeferringSystemGestures:(long long)arg1;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(long long)arg1 preferredStatusBarVisibility:(int)arg2 updateAnimation:(long long)arg3 currentAnimationSettings:(BSAnimationSettings *)arg4;
- (void)__viewServiceDidUpdatePreferredWhitePointAdaptationStyle:(long long)arg1 animationSettings:(BSAnimationSettings *)arg2;
- (void)__viewServiceDidUpdateTintColor:(UIColor *)arg1 duration:(double)arg2;
- (void)__viewServiceInstrinsicContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1 fence:(BKSAnimationFenceHandle *)arg2;
- (void)__viewServicePopoverDidChangeContentSize:(void *)arg1 animated:(void *)arg2 fence:(void *)arg3 withReplyHandler:(void *)arg4; // needs 4 arg types, found 9: struct CGSize { double x1; double x2; }, bool, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGSize { double x1; double x2; }, void*
- (void)__viewServicePopoverDidSetUseToolbarShine:(bool)arg1;
- (void)__viewServicePreferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1 fence:(BKSAnimationFenceHandle *)arg2;

@end
