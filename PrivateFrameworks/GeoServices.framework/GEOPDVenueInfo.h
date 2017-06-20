/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVenueInfo : PBCodable <NSCopying> {
    int  _featureType;
    GEOPDVenueFeatureValue * _featureValue;
    struct { 
        unsigned int featureType : 1; 
        unsigned int locationTag : 1; 
    }  _has;
    GEOPDVenueItemList * _itemList;
    int  _locationTag;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _venueFeatureIds;
}

@property (nonatomic) int featureType;
@property (nonatomic, retain) GEOPDVenueFeatureValue *featureValue;
@property (nonatomic) bool hasFeatureType;
@property (nonatomic, readonly) bool hasFeatureValue;
@property (nonatomic, readonly) bool hasItemList;
@property (nonatomic) bool hasLocationTag;
@property (nonatomic, retain) GEOPDVenueItemList *itemList;
@property (nonatomic) int locationTag;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *venueFeatureIds;

+ (Class)venueFeatureIdType;
+ (id)venueInfoForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsFeatureType:(id)arg1;
- (int)StringAsLocationTag:(id)arg1;
- (void)addVenueFeatureId:(id)arg1;
- (void)clearVenueFeatureIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)featureType;
- (id)featureTypeAsString:(int)arg1;
- (id)featureValue;
- (bool)hasFeatureType;
- (bool)hasFeatureValue;
- (bool)hasItemList;
- (bool)hasLocationTag;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)itemList;
- (int)locationTag;
- (id)locationTagAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeatureType:(int)arg1;
- (void)setFeatureValue:(id)arg1;
- (void)setHasFeatureType:(bool)arg1;
- (void)setHasLocationTag:(bool)arg1;
- (void)setItemList:(id)arg1;
- (void)setLocationTag:(int)arg1;
- (void)setVenueFeatureIds:(id)arg1;
- (id)unknownFields;
- (id)venueFeatureIdAtIndex:(unsigned long long)arg1;
- (id)venueFeatureIds;
- (unsigned long long)venueFeatureIdsCount;
- (void)writeTo:(id)arg1;

@end
