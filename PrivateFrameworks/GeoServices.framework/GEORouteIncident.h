/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteIncident : PBCodable <NSCopying> {
    NSString * _crossStreet;
    long long  _endTime;
    bool  _endTimeReliable;
    struct { 
        unsigned int endTime : 1; 
        unsigned int startTime : 1; 
        unsigned int updateTime : 1; 
        unsigned int laneClosureCount : 1; 
        unsigned int laneClosureType : 1; 
        unsigned int significance : 1; 
        unsigned int type : 1; 
        unsigned int endTimeReliable : 1; 
    }  _has;
    NSString * _incidentId;
    NSString * _info;
    unsigned int  _laneClosureCount;
    int  _laneClosureType;
    GEOLatLng * _position;
    int  _significance;
    long long  _startTime;
    NSString * _street;
    int  _type;
    long long  _updateTime;
}

@property (nonatomic, retain) NSString *crossStreet;
@property (nonatomic) long long endTime;
@property (nonatomic) bool endTimeReliable;
@property (nonatomic, readonly) bool hasCrossStreet;
@property (nonatomic) bool hasEndTime;
@property (nonatomic) bool hasEndTimeReliable;
@property (nonatomic, readonly) bool hasIncidentId;
@property (nonatomic, readonly) bool hasInfo;
@property (nonatomic) bool hasLaneClosureCount;
@property (nonatomic) bool hasLaneClosureType;
@property (nonatomic, readonly) bool hasPosition;
@property (nonatomic) bool hasSignificance;
@property (nonatomic) bool hasStartTime;
@property (nonatomic, readonly) bool hasStreet;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasUpdateTime;
@property (nonatomic, retain) NSString *incidentId;
@property (nonatomic, retain) NSString *info;
@property (nonatomic) unsigned int laneClosureCount;
@property (nonatomic) int laneClosureType;
@property (nonatomic, retain) GEOLatLng *position;
@property (nonatomic) int significance;
@property (nonatomic) long long startTime;
@property (nonatomic, retain) NSString *street;
@property (nonatomic) int type;
@property (nonatomic) long long updateTime;

- (void).cxx_destruct;
- (int)StringAsLaneClosureType:(id)arg1;
- (int)StringAsSignificance:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossStreet;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)endTime;
- (bool)endTimeReliable;
- (bool)hasCrossStreet;
- (bool)hasEndTime;
- (bool)hasEndTimeReliable;
- (bool)hasIncidentId;
- (bool)hasInfo;
- (bool)hasLaneClosureCount;
- (bool)hasLaneClosureType;
- (bool)hasPosition;
- (bool)hasSignificance;
- (bool)hasStartTime;
- (bool)hasStreet;
- (bool)hasType;
- (bool)hasUpdateTime;
- (unsigned long long)hash;
- (id)incidentId;
- (id)info;
- (bool)isEqual:(id)arg1;
- (unsigned int)laneClosureCount;
- (int)laneClosureType;
- (id)laneClosureTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)position;
- (bool)readFrom:(id)arg1;
- (void)setCrossStreet:(id)arg1;
- (void)setEndTime:(long long)arg1;
- (void)setEndTimeReliable:(bool)arg1;
- (void)setHasEndTime:(bool)arg1;
- (void)setHasEndTimeReliable:(bool)arg1;
- (void)setHasLaneClosureCount:(bool)arg1;
- (void)setHasLaneClosureType:(bool)arg1;
- (void)setHasSignificance:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasUpdateTime:(bool)arg1;
- (void)setIncidentId:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setLaneClosureCount:(unsigned int)arg1;
- (void)setLaneClosureType:(int)arg1;
- (void)setPosition:(id)arg1;
- (void)setSignificance:(int)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setStreet:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUpdateTime:(long long)arg1;
- (int)significance;
- (id)significanceAsString:(int)arg1;
- (long long)startTime;
- (id)street;
- (int)type;
- (id)typeAsString:(int)arg1;
- (long long)updateTime;
- (void)writeTo:(id)arg1;

@end
