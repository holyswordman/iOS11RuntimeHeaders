/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNActiveRouteDetails : PBCodable <NSCopying> {
    int  _alternateRouteIndex;
    GEOTransitDecoderData * _decoderData;
    GEOComposedWaypoint * _destination;
    struct { 
        unsigned int alternateRouteIndex : 1; 
        unsigned int navigationType : 1; 
        unsigned int reconnectionRouteIndex : 1; 
        unsigned int routeIndex : 1; 
        unsigned int transportType : 1; 
    }  _has;
    int  _navigationType;
    GEOComposedWaypoint * _origin;
    unsigned int  _reconnectionRouteIndex;
    GEODirectionsRequest * _request;
    GEODirectionsResponse * _response;
    GEORoute * _route;
    NSData * _routeDetailsID;
    unsigned int  _routeIndex;
    GEOTransitSuggestedRoute * _suggestedRoute;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _trafficIncidentOffsets;
    NSMutableArray * _trafficIncidents;
    int  _transportType;
}

@property (nonatomic) int alternateRouteIndex;
@property (nonatomic, retain) GEOTransitDecoderData *decoderData;
@property (nonatomic, retain) GEOComposedWaypoint *destination;
@property (nonatomic) bool hasAlternateRouteIndex;
@property (nonatomic, readonly) bool hasDecoderData;
@property (nonatomic, readonly) bool hasDestination;
@property (nonatomic) bool hasNavigationType;
@property (nonatomic, readonly) bool hasOrigin;
@property (nonatomic) bool hasReconnectionRouteIndex;
@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, readonly) bool hasResponse;
@property (nonatomic, readonly) bool hasRoute;
@property (nonatomic, readonly) bool hasRouteDetailsID;
@property (nonatomic) bool hasRouteIndex;
@property (nonatomic, readonly) bool hasSuggestedRoute;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) int navigationType;
@property (nonatomic, retain) GEOComposedWaypoint *origin;
@property (nonatomic) unsigned int reconnectionRouteIndex;
@property (nonatomic, retain) GEODirectionsRequest *request;
@property (nonatomic, retain) GEODirectionsResponse *response;
@property (nonatomic, retain) GEORoute *route;
@property (nonatomic, retain) NSData *routeDetailsID;
@property (nonatomic) unsigned int routeIndex;
@property (nonatomic, retain) GEOTransitSuggestedRoute *suggestedRoute;
@property (nonatomic, readonly) unsigned int*trafficIncidentOffsets;
@property (nonatomic, readonly) unsigned long long trafficIncidentOffsetsCount;
@property (nonatomic, retain) NSMutableArray *trafficIncidents;
@property (nonatomic) int transportType;

+ (id)activeRouteDetailsForActiveRouteInfo:(id)arg1;
+ (id)activeRouteDetailsForRoute:(id)arg1;
+ (Class)trafficIncidentsType;

- (void).cxx_destruct;
- (int)StringAsNavigationType:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)addTrafficIncidentOffsets:(unsigned int)arg1;
- (void)addTrafficIncidents:(id)arg1;
- (int)alternateRouteIndex;
- (void)clearTrafficIncidentOffsets;
- (void)clearTrafficIncidents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)decoderData;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (bool)hasAlternateRouteIndex;
- (bool)hasDecoderData;
- (bool)hasDestination;
- (bool)hasNavigationType;
- (bool)hasOrigin;
- (bool)hasReconnectionRouteIndex;
- (bool)hasRequest;
- (bool)hasResponse;
- (bool)hasRoute;
- (bool)hasRouteDetailsID;
- (bool)hasRouteIndex;
- (bool)hasSuggestedRoute;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)navigationType;
- (id)navigationTypeAsString:(int)arg1;
- (id)origin;
- (bool)readFrom:(id)arg1;
- (unsigned int)reconnectionRouteIndex;
- (id)request;
- (id)response;
- (id)route;
- (id)routeDetailsID;
- (unsigned int)routeIndex;
- (void)setAlternateRouteIndex:(int)arg1;
- (void)setDecoderData:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setHasAlternateRouteIndex:(bool)arg1;
- (void)setHasNavigationType:(bool)arg1;
- (void)setHasReconnectionRouteIndex:(bool)arg1;
- (void)setHasRouteIndex:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setNavigationType:(int)arg1;
- (void)setOrigin:(id)arg1;
- (void)setReconnectionRouteIndex:(unsigned int)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteDetailsID:(id)arg1;
- (void)setRouteIndex:(unsigned int)arg1;
- (void)setSuggestedRoute:(id)arg1;
- (void)setTrafficIncidentOffsets:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTrafficIncidents:(id)arg1;
- (void)setTransportType:(int)arg1;
- (id)suggestedRoute;
- (unsigned int*)trafficIncidentOffsets;
- (unsigned int)trafficIncidentOffsetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficIncidentOffsetsCount;
- (id)trafficIncidents;
- (id)trafficIncidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficIncidentsCount;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
