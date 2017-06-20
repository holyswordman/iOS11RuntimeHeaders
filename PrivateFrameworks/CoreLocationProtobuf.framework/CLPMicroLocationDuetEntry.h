/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPMicroLocationDuetEntry : PBCodable <NSCopying> {
    double  _endTimestamp;
    struct { 
        unsigned int endTimestamp : 1; 
        unsigned int startTimestamp : 1; 
    }  _has;
    NSMutableArray * _localizationResults;
    double  _startTimestamp;
    NSString * _uUID;
    NSString * _value;
}

@property (nonatomic) double endTimestamp;
@property (nonatomic) bool hasEndTimestamp;
@property (nonatomic) bool hasStartTimestamp;
@property (nonatomic, readonly) bool hasUUID;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSMutableArray *localizationResults;
@property (nonatomic) double startTimestamp;
@property (nonatomic, retain) NSString *uUID;
@property (nonatomic, retain) NSString *value;

+ (Class)localizationResultsType;

- (void).cxx_destruct;
- (void)addLocalizationResults:(id)arg1;
- (void)clearLocalizationResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endTimestamp;
- (bool)hasEndTimestamp;
- (bool)hasStartTimestamp;
- (bool)hasUUID;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizationResults;
- (id)localizationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizationResultsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndTimestamp:(double)arg1;
- (void)setHasEndTimestamp:(bool)arg1;
- (void)setHasStartTimestamp:(bool)arg1;
- (void)setLocalizationResults:(id)arg1;
- (void)setStartTimestamp:(double)arg1;
- (void)setUUID:(id)arg1;
- (void)setValue:(id)arg1;
- (double)startTimestamp;
- (id)uUID;
- (id)value;
- (void)writeTo:(id)arg1;

@end
