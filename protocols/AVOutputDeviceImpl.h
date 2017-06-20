/* Generated by RuntimeBrowser.
 */

@protocol AVOutputDeviceImpl <NSObject>

@required

- (NSString *)ID;
- (NSNumber *)batteryLevel;
- (bool)canAccessRemoteAssets;
- (bool)canBeGroupLeader;
- (bool)canBeGrouped;
- (NSNumber *)caseBatteryLevel;
- (NSArray *)connectedPairedDevices;
- (unsigned long long)deviceFeatures;
- (long long)deviceSubType;
- (long long)deviceType;
- (bool)groupContainsGroupLeader;
- (NSString *)groupID;
- (bool)isGroupLeader;
- (bool)isInUseByPairedDevice;
- (NSNumber *)leftBatteryLevel;
- (NSString *)modelID;
- (NSString *)name;
- (bool)requiresAuthorization;
- (NSNumber *)rightBatteryLevel;
- (void)setAdministrativeConfiguration:(void *)arg1 administrationPassword:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, NSDictionary *, void*
- (void)setSecondDisplayEnabled:(bool)arg1;

@end
