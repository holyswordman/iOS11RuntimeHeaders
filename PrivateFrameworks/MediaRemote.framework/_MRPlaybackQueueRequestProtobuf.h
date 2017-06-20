/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRPlaybackQueueRequestProtobuf : PBCodable <NSCopying> {
    double  _artworkHeight;
    double  _artworkWidth;
    NSMutableArray * _contentItemIdentifiers;
    _MRPlaybackQueueContextProtobuf * _context;
    struct { 
        unsigned int artworkHeight : 1; 
        unsigned int artworkWidth : 1; 
        unsigned int length : 1; 
        unsigned int location : 1; 
        unsigned int includeInfo : 1; 
        unsigned int includeLanguageOptions : 1; 
        unsigned int includeLyrics : 1; 
        unsigned int includeMetadata : 1; 
        unsigned int includeSections : 1; 
        unsigned int returnContentItemAssetsInUserCompletion : 1; 
    }  _has;
    bool  _includeInfo;
    bool  _includeLanguageOptions;
    bool  _includeLyrics;
    bool  _includeMetadata;
    bool  _includeSections;
    int  _length;
    int  _location;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    NSString * _requestID;
    bool  _returnContentItemAssetsInUserCompletion;
}

@property (nonatomic) double artworkHeight;
@property (nonatomic) double artworkWidth;
@property (nonatomic, retain) NSMutableArray *contentItemIdentifiers;
@property (nonatomic, retain) _MRPlaybackQueueContextProtobuf *context;
@property (nonatomic) bool hasArtworkHeight;
@property (nonatomic) bool hasArtworkWidth;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic) bool hasIncludeInfo;
@property (nonatomic) bool hasIncludeLanguageOptions;
@property (nonatomic) bool hasIncludeLyrics;
@property (nonatomic) bool hasIncludeMetadata;
@property (nonatomic) bool hasIncludeSections;
@property (nonatomic) bool hasLength;
@property (nonatomic) bool hasLocation;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic, readonly) bool hasRequestID;
@property (nonatomic) bool hasReturnContentItemAssetsInUserCompletion;
@property (nonatomic) bool includeInfo;
@property (nonatomic) bool includeLanguageOptions;
@property (nonatomic) bool includeLyrics;
@property (nonatomic) bool includeMetadata;
@property (nonatomic) bool includeSections;
@property (nonatomic) int length;
@property (nonatomic) int location;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, retain) NSString *requestID;
@property (nonatomic) bool returnContentItemAssetsInUserCompletion;

+ (Class)contentItemIdentifiersType;

- (void)addContentItemIdentifiers:(id)arg1;
- (double)artworkHeight;
- (double)artworkWidth;
- (void)clearContentItemIdentifiers;
- (id)contentItemIdentifiers;
- (id)contentItemIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentItemIdentifiersCount;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtworkHeight;
- (bool)hasArtworkWidth;
- (bool)hasContext;
- (bool)hasIncludeInfo;
- (bool)hasIncludeLanguageOptions;
- (bool)hasIncludeLyrics;
- (bool)hasIncludeMetadata;
- (bool)hasIncludeSections;
- (bool)hasLength;
- (bool)hasLocation;
- (bool)hasPlayerPath;
- (bool)hasRequestID;
- (bool)hasReturnContentItemAssetsInUserCompletion;
- (unsigned long long)hash;
- (bool)includeInfo;
- (bool)includeLanguageOptions;
- (bool)includeLyrics;
- (bool)includeMetadata;
- (bool)includeSections;
- (bool)isEqual:(id)arg1;
- (int)length;
- (int)location;
- (void)mergeFrom:(id)arg1;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (id)requestID;
- (bool)returnContentItemAssetsInUserCompletion;
- (void)setArtworkHeight:(double)arg1;
- (void)setArtworkWidth:(double)arg1;
- (void)setContentItemIdentifiers:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHasArtworkHeight:(bool)arg1;
- (void)setHasArtworkWidth:(bool)arg1;
- (void)setHasIncludeInfo:(bool)arg1;
- (void)setHasIncludeLanguageOptions:(bool)arg1;
- (void)setHasIncludeLyrics:(bool)arg1;
- (void)setHasIncludeMetadata:(bool)arg1;
- (void)setHasIncludeSections:(bool)arg1;
- (void)setHasLength:(bool)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setHasReturnContentItemAssetsInUserCompletion:(bool)arg1;
- (void)setIncludeInfo:(bool)arg1;
- (void)setIncludeLanguageOptions:(bool)arg1;
- (void)setIncludeLyrics:(bool)arg1;
- (void)setIncludeMetadata:(bool)arg1;
- (void)setIncludeSections:(bool)arg1;
- (void)setLength:(int)arg1;
- (void)setLocation:(int)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setReturnContentItemAssetsInUserCompletion:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
