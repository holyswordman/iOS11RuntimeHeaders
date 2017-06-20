/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFFlight : NSObject <NSSecureCoding, SFFlight> {
    NSString * _carrierCode;
    NSString * _carrierName;
    NSString * _carrierPhoneNumber;
    NSString * _flightID;
    NSString * _flightNumber;
    NSArray * _legs;
    NSString * _operatorCarrierCode;
    NSString * _operatorFlightNumber;
}

@property (nonatomic, copy) NSString *carrierCode;
@property (nonatomic, copy) NSString *carrierName;
@property (nonatomic, copy) NSString *carrierPhoneNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *flightID;
@property (nonatomic, copy) NSString *flightNumber;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *legs;
@property (nonatomic, copy) NSString *operatorCarrierCode;
@property (nonatomic, copy) NSString *operatorFlightNumber;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)carrierCode;
- (id)carrierName;
- (id)carrierPhoneNumber;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)flightID;
- (id)flightNumber;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (id)legs;
- (id)operatorCarrierCode;
- (id)operatorFlightNumber;
- (void)setCarrierCode:(id)arg1;
- (void)setCarrierName:(id)arg1;
- (void)setCarrierPhoneNumber:(id)arg1;
- (void)setFlightID:(id)arg1;
- (void)setFlightNumber:(id)arg1;
- (void)setLegs:(id)arg1;
- (void)setOperatorCarrierCode:(id)arg1;
- (void)setOperatorFlightNumber:(id)arg1;

@end
