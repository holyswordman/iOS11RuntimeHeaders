/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEONetworkDefaultsLocalProxy : NSObject <_GEONetworkDefaultsServerProxy> {
    <_GEONetworkDefaultsServerProxyDelegate> * _delegate;
    NSLock * _lock;
    NSMutableArray * _updateCompletionHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_GEONetworkDefaultsServerProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)updateNetworkDefaults:(id /* block */)arg1;

@end
