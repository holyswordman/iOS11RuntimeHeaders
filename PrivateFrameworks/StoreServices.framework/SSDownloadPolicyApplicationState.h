/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadPolicyApplicationState : NSObject <NSCoding, NSCopying, SSXPCCoding> {
    NSString * _applicationIdentifier;
    NSSet * _applicationStates;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSSet *applicationStates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addApplicationState:(long long)arg1;
- (id)applicationIdentifier;
- (id)applicationStates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithApplicationIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationStates:(id)arg1;
- (void)setNotRunningApplicationStates;

@end
