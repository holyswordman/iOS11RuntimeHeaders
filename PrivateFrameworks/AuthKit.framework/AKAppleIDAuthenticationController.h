/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAppleIDAuthenticationController : NSObject {
    NSXPCConnection * _authenticationServiceConnection;
    NSLock * _connectionLock;
    _AKAppleIDAuthenticationContextManager * _contextManager;
    NSXPCListenerEndpoint * _daemonXPCEndpoint;
    id /* block */  _deallocHandler;
    NSString * _serviceID;
}

@property (nonatomic, copy) id /* block */ deallocHandler;
@property (nonatomic) <AKAppleIDAuthenticationDelegate> *delegate;

+ (id)sensitiveAuthenticationKeys;

- (void).cxx_destruct;
- (id)_authenticationServiceConnection;
- (id)activeLoginCode:(id*)arg1;
- (void)authenticateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(id /* block */)arg2;
- (void)checkSecurityUpgradeEligibilityForAppleID:(id)arg1 completion:(id /* block */)arg2;
- (void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id /* block */)deallocHandler;
- (id)delegate;
- (id)emailsForAltDSID:(id)arg1;
- (void)fetchDeviceListWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchDeviceListWithContext:(id)arg1 error:(id*)arg2;
- (void)fetchUserInformationForAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)generateLoginCodeWithCompletion:(id /* block */)arg1;
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 daemonXPCEndpoint:(id)arg2;
- (bool)isDevicePasscodeProtected:(id*)arg1;
- (void)performCircleRequestWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)persistMasterKeyVerifier:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)reportSignOutForAllAppleIDsWithCompletion:(id /* block */)arg1;
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(id /* block */)arg3;
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(bool)arg2 forService:(long long)arg3;
- (void)setAppleIDWithDSID:(id)arg1 inUse:(bool)arg2 forService:(long long)arg3;
- (void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(id /* block */)arg4;
- (void)setDeallocHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(id /* block */)arg2;
- (bool)synchronizeFollowUpItemsForContext:(id)arg1 error:(id*)arg2;
- (void)teardownFollowUpWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(id /* block */)arg3;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(id /* block */)arg3;
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 completion:(id /* block */)arg3;
- (void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(id /* block */)arg3;
- (void)verifyMasterKey:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;

@end
