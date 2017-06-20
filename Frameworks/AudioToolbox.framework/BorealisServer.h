/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface BorealisServer : NSObject <NSXPCListenerDelegate, VoiceTriggerInterface> {
    NSXPCConnection * _clientConnection;
    NSXPCListener * _serverListener;
    int  mClientPID;
    struct BorealisServerImpl { int (**x1)(); unsigned int x2; bool x3; bool x4; bool x5; id x6; struct Listener {} x7; struct CAMutex {} *x8; } * serverImpl;
}

@property (nonatomic, retain) NSXPCConnection *clientConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *serverListener;
@property (readonly) Class superclass;

- (id)clientConnection;
- (void)dealloc;
- (void)enableVoiceTriggerListening:(bool)arg1 reply:(id /* block */)arg2;
- (id)init;
- (void)initializeWithReply:(id /* block */)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)sendVoiceTriggerOccuredNotification;
- (id)serverListener;
- (void)setClientConnection:(id)arg1;
- (void)setServerListener:(id)arg1;
- (void)updateVoiceTriggerConfiguration:(id)arg1 reply:(id /* block */)arg2;
- (void)voiceTriggerPastDataFramesAvailable:(id /* block */)arg1;

@end
