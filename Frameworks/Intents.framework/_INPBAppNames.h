/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAppNames : PBCodable <NSCopying> {
    NSString * _appName;
    NSString * _axSpokenName;
    NSString * _displayName;
    NSString * _spotlightName;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSString *axSpokenName;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasAppName;
@property (nonatomic, readonly) bool hasAxSpokenName;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasSpotlightName;
@property (nonatomic, retain) NSString *spotlightName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)appName;
- (id)axSpokenName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasAppName;
- (bool)hasAxSpokenName;
- (bool)hasDisplayName;
- (bool)hasSpotlightName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAxSpokenName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setSpotlightName:(id)arg1;
- (id)spotlightName;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
