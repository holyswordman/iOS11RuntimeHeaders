/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewInProcessAnimationState : UIViewAnimationState {
    id /* block */  _animationAndComposerGetter;
    bool  _retargeted;
    long long  _type;
}

@property (nonatomic, copy) id /* block */ animationAndComposerGetter;
@property (nonatomic) bool retargeted;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)animatePropertyWithCurrentValue:(id)arg1 targetValueGetter:(id /* block */)arg2 preTickShouldRemoveCallback:(id /* block */)arg3 newValueCallback:(id /* block */)arg4 removedCallback:(id /* block */)arg5 animatablePropertyState:(id)arg6;
- (void)animatePropertyWithKey:(id)arg1 view:(id)arg2 forceNew:(bool)arg3 currentValue:(id)arg4 targetValueGetter:(id /* block */)arg5 preTickShouldRemoveCallback:(id /* block */)arg6 newValueCallback:(id /* block */)arg7 removedCallback:(id /* block */)arg8;
- (id /* block */)animationAndComposerGetter;
- (id)init;
- (bool)retargeted;
- (void)setAnimationAndComposerGetter:(id /* block */)arg1;
- (void)setRetargeted:(bool)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
