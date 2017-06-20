/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INBalanceAmount : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _amount;
    long long  _balanceType;
    NSString * _currencyCode;
}

@property (nonatomic, readonly, copy) NSDecimalNumber *amount;
@property (nonatomic, readonly) long long balanceType;
@property (nonatomic, readonly, copy) NSString *currencyCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)amount;
- (long long)balanceType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAmount:(id)arg1 balanceType:(long long)arg2;
- (id)initWithAmount:(id)arg1 balanceType:(long long)arg2 currencyCode:(id)arg3;
- (id)initWithAmount:(id)arg1 currencyCode:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
