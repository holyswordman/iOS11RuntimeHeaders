/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventListInteractionSession : PBCodable <NSCopying> {
    struct { 
        unsigned int listType : 1; 
    }  _has;
    NSMutableArray * _listResultItems;
    int  _listType;
    NSString * _searchString;
}

@property (nonatomic) bool hasListType;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic, retain) NSMutableArray *listResultItems;
@property (nonatomic) int listType;
@property (nonatomic, retain) NSString *searchString;

+ (Class)listResultItemType;

- (void).cxx_destruct;
- (int)StringAsListType:(id)arg1;
- (void)addListResultItem:(id)arg1;
- (void)clearListResultItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasListType;
- (bool)hasSearchString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)listResultItemAtIndex:(unsigned long long)arg1;
- (id)listResultItems;
- (unsigned long long)listResultItemsCount;
- (int)listType;
- (id)listTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchString;
- (void)setHasListType:(bool)arg1;
- (void)setListResultItems:(id)arg1;
- (void)setListType:(int)arg1;
- (void)setSearchString:(id)arg1;
- (void)writeTo:(id)arg1;

@end