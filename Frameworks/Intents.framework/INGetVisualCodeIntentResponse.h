/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INGetVisualCodeIntentResponse : INIntentResponse <INGetVisualCodeIntentResponseExport> {
    _INPBGetVisualCodeIntentResponse * _responseMessagePBRepresentation;
}

@property (nonatomic, readonly) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) INImage *visualCodeImage;

+ (bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(bool)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_responseMessagePBRepresentation;
- (long long)code;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)propertiesByName;
- (void)setPropertiesByName:(id)arg1;
- (void)setVisualCodeImage:(id)arg1;
- (id)visualCodeImage;

@end
