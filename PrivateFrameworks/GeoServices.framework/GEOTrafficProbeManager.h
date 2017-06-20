/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficProbeManager : NSObject <GEOTrafficProbeProxy> {
    <GEOTrafficProbeProxy> * _proxy;
}

+ (id)sharedManager;
+ (void)useProxyClass:(Class)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)reportBatchTrafficProbes:(id)arg1;
- (void)reportRealtimeTrafficProbes:(id)arg1 probeCount:(unsigned long long)arg2 recvTime:(id)arg3 forTripId:(id)arg4;

@end
