/* Generated by RuntimeBrowser.
 */

@protocol PCGrowthAlgorithm <NSObject>

@required

- (NSDictionary *)cacheInfo;
- (unsigned long long)countOfGrowthActions;
- (double)currentKeepAliveInterval;
- (id)initWithCacheInfo:(NSDictionary *)arg1 loggingIdentifier:(NSString *)arg2 algorithmName:(NSString *)arg3;
- (bool)isServerOriginatedKeepAlive;
- (double)lastSuccessfulKeepAliveInterval;
- (double)maximumKeepAliveInterval;
- (bool)minimumIntervalFallbackEnabled;
- (double)minimumKeepAliveInterval;
- (void)processNextAction:(int)arg1;
- (void)setIsServerOriginatedKeepAlive:(bool)arg1;
- (void)setLastSuccessfulKeepAliveInterval:(double)arg1;
- (void)setMaximumKeepAliveInterval:(double)arg1;
- (void)setMinimumIntervalFallbackEnabled:(bool)arg1;
- (void)setMinimumKeepAliveInterval:(double)arg1;
- (bool)useIntervalIfImprovement:(double)arg1;

@end
