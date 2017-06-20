/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNLocationDetails : PBCodable <NSCopying> {
    double  _course;
    double  _courseAccuracy;
    double  _distanceFromRoute;
    struct { 
        unsigned int course : 1; 
        unsigned int courseAccuracy : 1; 
        unsigned int distanceFromRoute : 1; 
        unsigned int horizontalAccuracy : 1; 
        unsigned int shieldType : 1; 
        unsigned int speedLimitShieldType : 1; 
        unsigned int timestamp : 1; 
        unsigned int transitID : 1; 
        unsigned int locationState : 1; 
        unsigned int rampType : 1; 
        unsigned int rawReferenceFrame : 1; 
        unsigned int roadLineType : 1; 
        unsigned int speedLimit : 1; 
        unsigned int stepIndex : 1; 
        unsigned int isGoodMatch : 1; 
        unsigned int isTunnelProjection : 1; 
        unsigned int speedLimitIsMPH : 1; 
    }  _has;
    double  _horizontalAccuracy;
    bool  _isGoodMatch;
    bool  _isTunnelProjection;
    GEOLocation * _location;
    unsigned int  _locationState;
    int  _rampType;
    int  _rawReferenceFrame;
    GEOLatLng * _roadCoordinate;
    unsigned int  _roadLineType;
    NSString * _roadName;
    MNRouteCoordinate * _routeCoordinate;
    NSData * _routeDetailsID;
    NSString * _shieldText;
    long long  _shieldType;
    unsigned int  _speedLimit;
    bool  _speedLimitIsMPH;
    long long  _speedLimitShieldType;
    unsigned int  _stepIndex;
    double  _timestamp;
    unsigned long long  _transitID;
}

@property (nonatomic) double course;
@property (nonatomic) double courseAccuracy;
@property (nonatomic) double distanceFromRoute;
@property (nonatomic) bool hasCourse;
@property (nonatomic) bool hasCourseAccuracy;
@property (nonatomic) bool hasDistanceFromRoute;
@property (nonatomic) bool hasHorizontalAccuracy;
@property (nonatomic) bool hasIsGoodMatch;
@property (nonatomic) bool hasIsTunnelProjection;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasLocationState;
@property (nonatomic) bool hasRampType;
@property (nonatomic) bool hasRawReferenceFrame;
@property (nonatomic, readonly) bool hasRoadCoordinate;
@property (nonatomic) bool hasRoadLineType;
@property (nonatomic, readonly) bool hasRoadName;
@property (nonatomic, readonly) bool hasRouteCoordinate;
@property (nonatomic, readonly) bool hasRouteDetailsID;
@property (nonatomic, readonly) bool hasShieldText;
@property (nonatomic) bool hasShieldType;
@property (nonatomic) bool hasSpeedLimit;
@property (nonatomic) bool hasSpeedLimitIsMPH;
@property (nonatomic) bool hasSpeedLimitShieldType;
@property (nonatomic) bool hasStepIndex;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTransitID;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) bool isGoodMatch;
@property (nonatomic) bool isTunnelProjection;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic) unsigned int locationState;
@property (nonatomic) int rampType;
@property (nonatomic) int rawReferenceFrame;
@property (nonatomic, retain) GEOLatLng *roadCoordinate;
@property (nonatomic) unsigned int roadLineType;
@property (nonatomic, retain) NSString *roadName;
@property (nonatomic, retain) MNRouteCoordinate *routeCoordinate;
@property (nonatomic, retain) NSData *routeDetailsID;
@property (nonatomic, retain) NSString *shieldText;
@property (nonatomic) long long shieldType;
@property (nonatomic) unsigned int speedLimit;
@property (nonatomic) bool speedLimitIsMPH;
@property (nonatomic) long long speedLimitShieldType;
@property (nonatomic) unsigned int stepIndex;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long transitID;

+ (id)locationDetailsWithLocation:(id)arg1;
+ (id)locationWithLocationDetails:(id)arg1;
+ (id)locationWithLocationDetails:(id)arg1 route:(id)arg2;

- (void).cxx_destruct;
- (int)StringAsRampType:(id)arg1;
- (int)StringAsRawReferenceFrame:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (double)courseAccuracy;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distanceFromRoute;
- (bool)hasCourse;
- (bool)hasCourseAccuracy;
- (bool)hasDistanceFromRoute;
- (bool)hasHorizontalAccuracy;
- (bool)hasIsGoodMatch;
- (bool)hasIsTunnelProjection;
- (bool)hasLocation;
- (bool)hasLocationState;
- (bool)hasRampType;
- (bool)hasRawReferenceFrame;
- (bool)hasRoadCoordinate;
- (bool)hasRoadLineType;
- (bool)hasRoadName;
- (bool)hasRouteCoordinate;
- (bool)hasRouteDetailsID;
- (bool)hasShieldText;
- (bool)hasShieldType;
- (bool)hasSpeedLimit;
- (bool)hasSpeedLimitIsMPH;
- (bool)hasSpeedLimitShieldType;
- (bool)hasStepIndex;
- (bool)hasTimestamp;
- (bool)hasTransitID;
- (unsigned long long)hash;
- (double)horizontalAccuracy;
- (bool)isEqual:(id)arg1;
- (bool)isGoodMatch;
- (bool)isTunnelProjection;
- (id)location;
- (unsigned int)locationState;
- (void)mergeFrom:(id)arg1;
- (int)rampType;
- (id)rampTypeAsString:(int)arg1;
- (int)rawReferenceFrame;
- (id)rawReferenceFrameAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)roadCoordinate;
- (unsigned int)roadLineType;
- (id)roadName;
- (id)routeCoordinate;
- (id)routeDetailsID;
- (void)setCourse:(double)arg1;
- (void)setCourseAccuracy:(double)arg1;
- (void)setDistanceFromRoute:(double)arg1;
- (void)setHasCourse:(bool)arg1;
- (void)setHasCourseAccuracy:(bool)arg1;
- (void)setHasDistanceFromRoute:(bool)arg1;
- (void)setHasHorizontalAccuracy:(bool)arg1;
- (void)setHasIsGoodMatch:(bool)arg1;
- (void)setHasIsTunnelProjection:(bool)arg1;
- (void)setHasLocationState:(bool)arg1;
- (void)setHasRampType:(bool)arg1;
- (void)setHasRawReferenceFrame:(bool)arg1;
- (void)setHasRoadLineType:(bool)arg1;
- (void)setHasShieldType:(bool)arg1;
- (void)setHasSpeedLimit:(bool)arg1;
- (void)setHasSpeedLimitIsMPH:(bool)arg1;
- (void)setHasSpeedLimitShieldType:(bool)arg1;
- (void)setHasStepIndex:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransitID:(bool)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setIsGoodMatch:(bool)arg1;
- (void)setIsTunnelProjection:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationState:(unsigned int)arg1;
- (void)setRampType:(int)arg1;
- (void)setRawReferenceFrame:(int)arg1;
- (void)setRoadCoordinate:(id)arg1;
- (void)setRoadLineType:(unsigned int)arg1;
- (void)setRoadName:(id)arg1;
- (void)setRouteCoordinate:(id)arg1;
- (void)setRouteDetailsID:(id)arg1;
- (void)setShieldText:(id)arg1;
- (void)setShieldType:(long long)arg1;
- (void)setSpeedLimit:(unsigned int)arg1;
- (void)setSpeedLimitIsMPH:(bool)arg1;
- (void)setSpeedLimitShieldType:(long long)arg1;
- (void)setStepIndex:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTransitID:(unsigned long long)arg1;
- (id)shieldText;
- (long long)shieldType;
- (unsigned int)speedLimit;
- (bool)speedLimitIsMPH;
- (long long)speedLimitShieldType;
- (unsigned int)stepIndex;
- (double)timestamp;
- (unsigned long long)transitID;
- (void)writeTo:(id)arg1;

@end
