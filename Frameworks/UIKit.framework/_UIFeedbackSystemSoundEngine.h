/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFeedbackSystemSoundEngine : _UIFeedbackEngine <_UIFeedbackPlayer> {
    id /* block */  _invalidationBlock;
    NSCountedSet * _suspendedSSIDs;
    NSCountedSet * _warmSSIDs;
}

@property (nonatomic, copy) id /* block */ invalidationBlock;
@property (nonatomic, readonly) NSCountedSet *suspendedSSIDs;
@property (nonatomic, readonly) NSCountedSet *warmSSIDs;

+ (bool)_supportsPlayingFeedback:(id)arg1;
+ (id)sharedEngine;

- (void).cxx_destruct;
- (void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)arg1;
- (void)_performForEachSSIDsInFeedbacks:(id)arg1 block:(id /* block */)arg2;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (void)_playFeedbackNow:(id)arg1 withOptions:(id)arg2;
- (bool)_prepareSystemSoundID:(unsigned int)arg1 forBeingActive:(bool)arg2;
- (void)_startWarmingFeedbacks:(id)arg1;
- (id)_stats_key;
- (void)_stopFeedback:(id)arg1;
- (void)_stopWarmingFeedbacks:(id)arg1;
- (void)_updateSuspension;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (id /* block */)invalidationBlock;
- (void)setInvalidationBlock:(id /* block */)arg1;
- (id)suspendedSSIDs;
- (id)warmSSIDs;

@end
