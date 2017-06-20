/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActionItem : NSObject {
    NSDictionary * _associatedRecentContactMetadata;
    NSString * _bundleIdentifier;
    CNContactProperty * _contactProperty;
    long long  _group;
    NSString * _label;
    unsigned long long  _options;
    NSString * _teamIdentifier;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSDictionary *associatedRecentContactMetadata;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) CNContactProperty *contactProperty;
@property (nonatomic, readonly) long long group;
@property (nonatomic, readonly) bool isSuggested;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) bool shouldCurateIfPerformed;
@property (nonatomic, readonly) bool shouldGroupByBundleIdentifier;
@property (nonatomic, readonly) NSString *targetHandle;
@property (nonatomic, copy) NSString *teamIdentifier;
@property (nonatomic, readonly) NSString *type;

+ (id)_voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 dialRequest:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)_voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 userActivity:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)actionItemForContactProperty:(id)arg1 actionType:(id)arg2 bundleIdentifier:(id)arg3;
+ (id)actionItemForContactProperty:(id)arg1 actionType:(id)arg2 bundleIdentifier:(id)arg3 callProviderManager:(id)arg4;
+ (id)emailItemWithLabel:(id)arg1 targetHandle:(id)arg2 url:(id)arg3;
+ (id)emailItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)emailItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 isSuggested:(bool)arg5;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 userActivity:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 userActivity:(id)arg4 isSuggested:(bool)arg5;
+ (id)payItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)payItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)textItemWithLabel:(id)arg1 targetPhoneNumber:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)textItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)textItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)thirdPartyCallActionItemForHandle:(id)arg1 contactProperty:(id)arg2 actionType:(id)arg3 bundleIdentifier:(id)arg4 callProviderManager:(id)arg5;
+ (id)ttyItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)ttyRelayItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)videoItemWithLabel:(id)arg1 targetStringValue:(id)arg2 dialRequest:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)videoItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)videoItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 dialRequest:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 dialRequest:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 userActivity:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;

- (void).cxx_destruct;
- (void)associateWithRecentContactMetadata:(id)arg1;
- (id)associatedRecentContactMetadata;
- (id)bundleIdentifier;
- (id)contactProperty;
- (id)description;
- (long long)group;
- (unsigned long long)hash;
- (id)initWithItem:(id)arg1 contactProperty:(id)arg2;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 group:(long long)arg4 options:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isHandledByFirstPartyApp;
- (bool)isSuggested;
- (id)label;
- (unsigned long long)options;
- (id)performActionWithContext:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTeamIdentifier:(id)arg1;
- (bool)shouldCurateIfPerformed;
- (bool)shouldGroupByBundleIdentifier;
- (bool)shouldUseApplicationNameForLabel;
- (id)targetHandle;
- (id)teamIdentifier;
- (id)type;
- (id)url;

@end
