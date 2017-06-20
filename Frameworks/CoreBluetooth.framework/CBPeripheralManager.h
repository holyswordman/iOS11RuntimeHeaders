/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBPeripheralManager : CBManager {
    NSData * _advertisingAddress;
    NSMapTable * _centrals;
    NSMutableDictionary * _characteristicIDs;
    <CBPeripheralManagerDelegate> * _delegate;
    struct { 
        unsigned int willRestoreState : 1; 
        unsigned int didAddService : 1; 
        unsigned int didReceiveReadRequest : 1; 
        unsigned int didReceiveWriteRequests : 1; 
        unsigned int centralDidSubscribeToCharacteristic : 1; 
        unsigned int centralDidUnsubscribeFromCharacteristic : 1; 
        unsigned int didStartAdvertising : 1; 
        unsigned int isReadyToUpdate : 1; 
        unsigned int centralDidConnect : 1; 
        unsigned int centralDidUpdateConnectionParameters : 1; 
        unsigned int didPublishL2CAPChannel : 1; 
        unsigned int didUnpublishL2CAPChannel : 1; 
        unsigned int didOpenL2CAPChannel : 1; 
    }  _delegateFlags;
    bool  _isAdvertising;
    NSHashTable * _l2capChannels;
    NSNumber * _multipleAdvertisingSupported;
    bool  _readyForUpdates;
    NSMutableArray * _services;
    NSLock * _updateLock;
    bool  _waitingForReady;
}

@property (nonatomic, readonly, copy) NSData *advertisingAddress;
@property (nonatomic, readonly, retain) NSMapTable *centrals;
@property (nonatomic, readonly, retain) NSMutableDictionary *characteristicIDs;
@property (nonatomic) <CBPeripheralManagerDelegate> *delegate;
@property (nonatomic) bool isAdvertising;
@property (getter=supportsMultipleAdvertising, nonatomic, readonly) bool isSupportingMultipleAdvertising;
@property (nonatomic, readonly, retain) NSHashTable *l2capChannels;
@property (nonatomic, retain) NSNumber *multipleAdvertisingSupported;
@property (nonatomic, readonly) bool readyForUpdates;
@property (nonatomic, readonly, retain) NSMutableArray *services;
@property (nonatomic, readonly, retain) NSLock *updateLock;
@property (nonatomic, readonly) bool waitingForReady;

+ (long long)authorizationStatus;

- (void).cxx_destruct;
- (void)addService:(id)arg1;
- (id)advertisingAddress;
- (id)centralWithInfo:(id)arg1;
- (id)centrals;
- (id)characteristicIDs;
- (void)dealloc;
- (id)delegate;
- (void)forEachCentral:(id /* block */)arg1;
- (void)handleAdvertisingAddressChanged:(id)arg1;
- (void)handleAdvertisingStarted:(id)arg1;
- (void)handleAdvertisingStopped:(id)arg1;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleGetAttributeValue:(id)arg1;
- (void)handleL2CAPChannelClosed:(id)arg1;
- (void)handleL2CAPChannelOpened:(id)arg1;
- (void)handleL2CAPChannelPublished:(id)arg1;
- (void)handleL2CAPChannelUnpublished:(id)arg1;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handleNotificationAdded:(id)arg1;
- (void)handleNotificationRemoved:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleServiceAdded:(id)arg1;
- (void)handleSetAttributeValues:(id)arg1;
- (void)handleSolicitedServicesFound:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (bool)isAdvertising;
- (bool)isMsgAllowedAlways:(unsigned short)arg1;
- (bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (id)l2capChannelForPeer:(id)arg1 withPsm:(unsigned short)arg2;
- (id)l2capChannels;
- (id)multipleAdvertisingSupported;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)peerWithInfo:(id)arg1;
- (void)publishL2CAPChannel:(unsigned short)arg1 requiresEncryption:(bool)arg2;
- (void)publishL2CAPChannelWithEncryption:(bool)arg1;
- (bool)readyForUpdates;
- (void)removeAllL2CAPChannels;
- (void)removeAllServices;
- (void)removeService:(id)arg1;
- (void)respondToRequest:(id)arg1 withResult:(long long)arg2;
- (void)respondToTransaction:(id)arg1 value:(id)arg2 attributeID:(id)arg3 result:(long long)arg4;
- (id)services;
- (void)setDelegate:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forCentral:(id)arg2;
- (void)setIsAdvertising:(bool)arg1;
- (void)setMultipleAdvertisingSupported:(id)arg1;
- (void)startAdvertising:(id)arg1;
- (void)stopAdvertising;
- (bool)supportsMultipleAdvertising;
- (void)unpublishL2CAPChannel:(unsigned short)arg1;
- (id)updateLock;
- (bool)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3;
- (bool)waitingForReady;

@end
