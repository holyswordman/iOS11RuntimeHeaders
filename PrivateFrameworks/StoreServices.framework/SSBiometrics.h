/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSBiometrics : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    SSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)_sendMessage:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)getIdentityMapCountWithCompletionBlock:(id /* block */)arg1;
- (void)getStateWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (void)isIdentityMapValidForAccountIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)renewPurchaseTokenWithAuthToken:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)resetAccount:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)resetWithCompletionBlock:(id /* block */)arg1;
- (void)saveIdentityMapForAccountIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setAllowed:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)setEnabled:(bool)arg1 withAuthToken:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setEnabled:(bool)arg1 withCompletionBlock:(id /* block */)arg2;

@end
