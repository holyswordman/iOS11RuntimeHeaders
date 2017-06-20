/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface _ICUserCredentialProviderRequestSession : NSObject {
    ICUserIdentityProperties * _activeICloudAccountProperties;
    NSArray * _credentialRequests;
    NSMapTable * _delegationCredentialRequestToIdentityProperties;
    NSMapTable * _delegationCredentialRequestToSpecificUserIdentity;
    NSMutableDictionary * _delegationUserIdentityToUUIDs;
    long long  _maximumQualityOfService;
    NSMutableArray * _pendingPropertyLoadCredentialRequests;
    NSMutableArray * _pendingResponseCredentialRequests;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) ICUserIdentityProperties *activeICloudAccountProperties;
@property (nonatomic, readonly, copy) NSArray *credentialRequests;
@property (nonatomic, retain) NSMapTable *delegationCredentialRequestToIdentityProperties;
@property (nonatomic, retain) NSMapTable *delegationCredentialRequestToSpecificUserIdentity;
@property (nonatomic, retain) NSMutableDictionary *delegationUserIdentityToUUIDs;
@property (nonatomic, readonly) bool hasPendingResponses;
@property (nonatomic, readonly) ICUserIdentityStore *identityStore;
@property (nonatomic, readonly) long long maximumQualityOfService;
@property (nonatomic, retain) NSMutableArray *pendingPropertyLoadCredentialRequests;
@property (nonatomic, retain) NSMutableArray *pendingResponseCredentialRequests;
@property (nonatomic, readonly, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)activeICloudAccountProperties;
- (id)credentialRequests;
- (id)delegationCredentialRequestToIdentityProperties;
- (id)delegationCredentialRequestToSpecificUserIdentity;
- (id)delegationUserIdentityToUUIDs;
- (bool)hasPendingResponses;
- (id)identityStore;
- (id)initWithCredentialRequests:(id)arg1 responseHandler:(id /* block */)arg2;
- (long long)maximumQualityOfService;
- (id)pendingPropertyLoadCredentialRequests;
- (id)pendingResponseCredentialRequests;
- (id /* block */)responseHandler;
- (void)setActiveICloudAccountProperties:(id)arg1;
- (void)setDelegationCredentialRequestToIdentityProperties:(id)arg1;
- (void)setDelegationCredentialRequestToSpecificUserIdentity:(id)arg1;
- (void)setDelegationUserIdentityToUUIDs:(id)arg1;
- (void)setPendingPropertyLoadCredentialRequests:(id)arg1;
- (void)setPendingResponseCredentialRequests:(id)arg1;

@end
