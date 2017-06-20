/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficRerouteFeedback : PBCodable <NSCopying> {
    int  _actionType;
    int  _alertType;
    bool  _backgrounded;
    struct { 
        unsigned int actionType : 1; 
        unsigned int alertType : 1; 
        unsigned int oldRouteHistoricTravelTime : 1; 
        unsigned int oldRouteTravelTime : 1; 
        unsigned int reroutedRouteHistoricTravelTime : 1; 
        unsigned int reroutedRouteTravelTime : 1; 
        unsigned int backgrounded : 1; 
    }  _has;
    unsigned int  _oldRouteHistoricTravelTime;
    NSData * _oldRouteID;
    NSMutableArray * _oldRouteIncidents;
    unsigned int  _oldRouteTravelTime;
    unsigned int  _reroutedRouteHistoricTravelTime;
    NSData * _reroutedRouteID;
    unsigned int  _reroutedRouteTravelTime;
}

@property (nonatomic) int actionType;
@property (nonatomic) int alertType;
@property (nonatomic) bool backgrounded;
@property (nonatomic) bool hasActionType;
@property (nonatomic) bool hasAlertType;
@property (nonatomic) bool hasBackgrounded;
@property (nonatomic) bool hasOldRouteHistoricTravelTime;
@property (nonatomic, readonly) bool hasOldRouteID;
@property (nonatomic) bool hasOldRouteTravelTime;
@property (nonatomic) bool hasReroutedRouteHistoricTravelTime;
@property (nonatomic, readonly) bool hasReroutedRouteID;
@property (nonatomic) bool hasReroutedRouteTravelTime;
@property (nonatomic) unsigned int oldRouteHistoricTravelTime;
@property (nonatomic, retain) NSData *oldRouteID;
@property (nonatomic, retain) NSMutableArray *oldRouteIncidents;
@property (nonatomic) unsigned int oldRouteTravelTime;
@property (nonatomic) unsigned int reroutedRouteHistoricTravelTime;
@property (nonatomic, retain) NSData *reroutedRouteID;
@property (nonatomic) unsigned int reroutedRouteTravelTime;

+ (Class)oldRouteIncidentsType;

- (void).cxx_destruct;
- (int)StringAsActionType:(id)arg1;
- (int)StringAsAlertType:(id)arg1;
- (int)actionType;
- (id)actionTypeAsString:(int)arg1;
- (void)addOldRouteIncidents:(id)arg1;
- (int)alertType;
- (id)alertTypeAsString:(int)arg1;
- (bool)backgrounded;
- (void)clearOldRouteIncidents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionType;
- (bool)hasAlertType;
- (bool)hasBackgrounded;
- (bool)hasOldRouteHistoricTravelTime;
- (bool)hasOldRouteID;
- (bool)hasOldRouteTravelTime;
- (bool)hasReroutedRouteHistoricTravelTime;
- (bool)hasReroutedRouteID;
- (bool)hasReroutedRouteTravelTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)oldRouteHistoricTravelTime;
- (id)oldRouteID;
- (id)oldRouteIncidents;
- (id)oldRouteIncidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)oldRouteIncidentsCount;
- (unsigned int)oldRouteTravelTime;
- (bool)readFrom:(id)arg1;
- (unsigned int)reroutedRouteHistoricTravelTime;
- (id)reroutedRouteID;
- (unsigned int)reroutedRouteTravelTime;
- (void)setActionType:(int)arg1;
- (void)setAlertType:(int)arg1;
- (void)setBackgrounded:(bool)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasAlertType:(bool)arg1;
- (void)setHasBackgrounded:(bool)arg1;
- (void)setHasOldRouteHistoricTravelTime:(bool)arg1;
- (void)setHasOldRouteTravelTime:(bool)arg1;
- (void)setHasReroutedRouteHistoricTravelTime:(bool)arg1;
- (void)setHasReroutedRouteTravelTime:(bool)arg1;
- (void)setOldRouteHistoricTravelTime:(unsigned int)arg1;
- (void)setOldRouteID:(id)arg1;
- (void)setOldRouteIncidents:(id)arg1;
- (void)setOldRouteTravelTime:(unsigned int)arg1;
- (void)setReroutedRouteHistoricTravelTime:(unsigned int)arg1;
- (void)setReroutedRouteID:(id)arg1;
- (void)setReroutedRouteTravelTime:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end