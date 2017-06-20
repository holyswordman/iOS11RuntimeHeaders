/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface CAReportingServer : NSObject <NSXPCListenerDelegate> {
    NSMutableArray * _clients;
    NSXPCListener * _listener;
}

@property (retain) NSMutableArray *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clients;
- (id)findReportingSessionForID:(long long)arg1;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setClients:(id)arg1;
- (void)setListener:(id)arg1;
- (void)startListening;

@end
