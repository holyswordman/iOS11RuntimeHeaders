/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAuthenticateRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext * _authenticationContext;
    SSLogConfig * _logConfig;
    NSString * _logUUID;
}

@property (readonly) SSAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSAuthenticateRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SSLogConfig *logConfig;
@property (nonatomic, retain) NSString *logUUID;
@property (readonly) Class superclass;

+ (id)_backingAccountToAuthenticateWithAuthenticationContext:(id)arg1 logUUID:(id)arg2;

- (void).cxx_destruct;
- (bool)_shouldRunAuthenticationForAccount:(id)arg1;
- (id)authenticationContext;
- (id)copyXPCEncoding;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithAuthenticationContext:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)logConfig;
- (id)logUUID;
- (id)run;
- (void)setLogConfig:(id)arg1;
- (void)setLogUUID:(id)arg1;
- (bool)start;
- (void)startWithAuthenticateResponseBlock:(id /* block */)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
