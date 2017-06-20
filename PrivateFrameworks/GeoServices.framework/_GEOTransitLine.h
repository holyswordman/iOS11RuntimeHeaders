/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTransitLine : NSObject <GEOTransitLine> {
    GEOPBTransitLine * _line;
    <GEOTransitSystem> * _system;
}

@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *alternateArtwork;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long departureTimeDisplayStyle;
@property (nonatomic, readonly) bool departuresAreVehicleSpecific;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLineColorString;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) NSString *lineColorString;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *modeArtwork;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (nonatomic, readonly) bool showVehicleNumber;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOTransitSystem> *system;

- (void).cxx_destruct;
- (id)alternateArtwork;
- (id)artwork;
- (unsigned long long)departureTimeDisplayStyle;
- (bool)departuresAreVehicleSpecific;
- (bool)hasLineColorString;
- (id)identifier;
- (id)initWithLine:(id)arg1 system:(id)arg2;
- (id)lineColorString;
- (id)modeArtwork;
- (unsigned long long)muid;
- (id)name;
- (id)operatingHours;
- (bool)showVehicleNumber;
- (id)styleAttributes;
- (id)system;

@end
