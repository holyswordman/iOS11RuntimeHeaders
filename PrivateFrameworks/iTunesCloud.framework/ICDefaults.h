/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDefaults : NSObject {
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, copy) NSString *authServiceClientToken;
@property (nonatomic, copy) NSNumber *authServiceClientTokenDSID;
@property (nonatomic, copy) NSDate *authServiceClientTokenExpiration;
@property (nonatomic, copy) NSDictionary *cachedSubscriptionStatus;
@property (nonatomic, copy) NSString *cloudMediaLibraryUID;
@property (nonatomic, copy) NSString *defaultStoreFront;
@property (nonatomic, readonly, copy) NSNumber *deviceClassOverride;
@property (nonatomic, readonly, copy) NSString *deviceModelOverride;
@property (nonatomic, readonly, copy) NSNumber *fairPlayDeviceTypeOverride;
@property (nonatomic, readonly, copy) NSString *hardwarePlatformOverride;
@property (nonatomic) bool ignoreExtendedCertificateValidation;
@property (nonatomic, copy) NSDictionary *mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
@property (nonatomic, readonly, copy) NSString *productPlatformOverride;
@property (nonatomic, readonly, copy) NSString *productVersionOverride;
@property (nonatomic, copy) NSDictionary *pushNotificationState;
@property (nonatomic, readonly) bool shouldForceiPhoneBehaviors;

+ (id)standardDefaults;

- (void).cxx_destruct;
- (void)_setOrRemoveObject:(id)arg1 forKey:(id)arg2;
- (bool)_shouldSpoofIPhoneRequestProperties;
- (id)authServiceClientToken;
- (id)authServiceClientTokenDSID;
- (id)authServiceClientTokenExpiration;
- (id)cachedSubscriptionStatus;
- (id)cloudMediaLibraryUID;
- (id)defaultStoreFront;
- (id)deviceClassOverride;
- (id)deviceModelOverride;
- (id)fairPlayDeviceTypeOverride;
- (id)hardwarePlatformOverride;
- (bool)ignoreExtendedCertificateValidation;
- (id)init;
- (id)mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
- (id)productPlatformOverride;
- (id)productVersionOverride;
- (id)pushNotificationState;
- (void)setAuthServiceClientToken:(id)arg1;
- (void)setAuthServiceClientTokenDSID:(id)arg1;
- (void)setAuthServiceClientTokenExpiration:(id)arg1;
- (void)setCachedSubscriptionStatus:(id)arg1;
- (void)setCloudMediaLibraryUID:(id)arg1;
- (void)setDefaultStoreFront:(id)arg1;
- (void)setIgnoreExtendedCertificateValidation:(bool)arg1;
- (void)setMediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates:(id)arg1;
- (void)setPushNotificationState:(id)arg1;
- (bool)shouldForceiPhoneBehaviors;
- (void)synchronize;

@end
