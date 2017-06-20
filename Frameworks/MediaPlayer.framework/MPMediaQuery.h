/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQuery : NSObject <MPPProtobufferCoding, NSCopying, NSSecureCoding> {
    MPMediaQueryCriteria * _criteria;
    int  _isFilteringDisabled;
    MPMediaLibrary * _mediaLibrary;
    NSArray * _staticEntities;
    long long  _staticEntityType;
}

@property (nonatomic, readonly) unsigned long long _countOfCollections;
@property (nonatomic, readonly) unsigned long long _countOfItems;
@property (nonatomic, readonly) bool _hasCollections;
@property (nonatomic, readonly) bool _hasItems;
@property (nonatomic, readonly) bool _hasStaticEntities;
@property (nonatomic, readonly) MPMediaItemCollection *_representativeCollection;
@property (nonatomic, readonly) long long _representativeCollectionGroupingType;
@property (nonatomic, readonly) MPMediaItemCollection *collectionByJoiningCollections;
@property (nonatomic, readonly) NSArray *collectionPersistentIdentifiers;
@property (nonatomic, copy) NSSet *collectionPropertiesToFetch;
@property (nonatomic, readonly) MPMediaQuerySectionInfo *collectionSectionInfo;
@property (nonatomic, readonly) NSArray *collectionSections;
@property (nonatomic, readonly) NSArray *collections;
@property (nonatomic, readonly) MPMediaPlaylist *containingPlaylist;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long entityLimit;
@property (nonatomic, readonly) bool excludesEntitiesWithBlankNames;
@property (nonatomic, retain) NSSet *filterPredicates;
@property (nonatomic) long long groupingType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreRestrictionsPredicates;
@property (nonatomic) bool ignoreSystemFilterPredicates;
@property (nonatomic) bool includeEntitiesWithBlankNames;
@property (nonatomic, readonly) NSArray *itemPersistentIdentifiers;
@property (nonatomic, copy) NSSet *itemPropertiesToFetch;
@property (nonatomic, readonly) MPMediaQuerySectionInfo *itemSectionInfo;
@property (nonatomic, readonly) NSArray *itemSections;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (getter=_orderingDirectionMappings, setter=_setOrderingDirectionMappings:, nonatomic, copy) NSDictionary *orderingDirectionMappings;
@property (getter=_orderingProperties, setter=_setOrderingProperties:, nonatomic, copy) NSArray *orderingProperties;
@property (nonatomic) bool shouldIncludeNonLibraryEntities;
@property (nonatomic) bool sortItems;
@property (nonatomic, readonly) bool specifiesPlaylistItems;
@property (readonly) Class superclass;
@property (nonatomic) bool useSections;
@property (nonatomic, readonly) bool willGroupEntities;

+ (id)ITunesUAudioQuery;
+ (id)ITunesUQuery;
+ (id)activeGeniusPlaylist;
+ (id)albumArtistsQuery;
+ (id)albumsQuery;
+ (id)artistsQuery;
+ (id)audibleAudiobooksQuery;
+ (id)audioPodcastsQuery;
+ (id)audiobooksQuery;
+ (id)compilationsQuery;
+ (id)composersQuery;
+ (id)currentDevicePurchasesPlaylist;
+ (id)geniusMixesQuery;
+ (id)genresQuery;
+ (id)homeVideosQuery;
+ (void)initFilteringDisabled;
+ (void)initialize;
+ (bool)isFilteringDisabled;
+ (id)movieRentalsQuery;
+ (id)moviesQuery;
+ (id)musicVideosQuery;
+ (id)playbackHistoryPlaylist;
+ (id)playlistsQuery;
+ (id)playlistsRecentlyAddedQuery;
+ (id)podcastsQuery;
+ (void)setFilteringDisabled:(bool)arg1;
+ (id)songsQuery;
+ (bool)supportsSecureCoding;
+ (id)tvShowsQuery;
+ (id)videoITunesUQuery;
+ (id)videoPodcastsQuery;
+ (id)videosQuery;

- (void).cxx_destruct;
- (bool)MPSD_hasDownloadableEntities;
- (bool)MPSD_hasDownloadingEntities;
- (id)MPSD_mediaQueryForDownloadableEntities;
- (id)MPSD_mediaQueryForDownloadingEntities;
- (unsigned long long)_countOfCollections;
- (unsigned long long)_countOfItems;
- (void)_enumerateCollectionPersistentIDsInOrder:(bool)arg1 usingBlock:(id /* block */)arg2;
- (void)_enumerateCollectionPersistentIDsUsingBlock:(id /* block */)arg1;
- (void)_enumerateCollectionsInOrder:(bool)arg1 usingBlock:(id /* block */)arg2;
- (void)_enumerateCollectionsUsingBlock:(id /* block */)arg1;
- (void)_enumerateItemPersistentIDsInOrder:(bool)arg1 usingBlock:(id /* block */)arg2;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)arg1;
- (void)_enumerateItemsInOrder:(bool)arg1 usingBlock:(id /* block */)arg2;
- (void)_enumerateItemsUsingBlock:(id /* block */)arg1;
- (void)_enumerateUnorderedCollectionPersistentIDsUsingBlock:(id /* block */)arg1;
- (void)_enumerateUnorderedCollectionsUsingBlock:(id /* block */)arg1;
- (void)_enumerateUnorderedItemPersistentIDsUsingBlock:(id /* block */)arg1;
- (void)_enumerateUnorderedItemsUsingBlock:(id /* block */)arg1;
- (void)_getRepresentativeCollectionGrouping:(long long*)arg1 propertyPredicate:(id*)arg2;
- (bool)_hasCollections;
- (bool)_hasItems;
- (bool)_hasStaticEntities;
- (bool)_isFilteringDisabled;
- (id)_orderingDirectionMappings;
- (id)_orderingProperties;
- (id)_representativeCollection;
- (long long)_representativeCollectionGroupingType;
- (void)_setOrderingDirectionMappings:(id)arg1;
- (void)_setOrderingProperties:(id)arg1;
- (bool)_updatePredicateForProperty:(id)arg1 withPropertyPredicate:(id)arg2;
- (id)_valueForAggregateFunction:(id)arg1 onProperty:(id)arg2 entityType:(long long)arg3;
- (void)addFilterPredicate:(id)arg1;
- (id)collectionByJoiningCollections;
- (id)collectionPersistentIdentifiers;
- (id)collectionPropertiesToFetch;
- (id)collectionSectionInfo;
- (id)collectionSections;
- (id)collections;
- (id)containingPlaylist;
- (id)copyByRemovingStaticEntities;
- (id)copyBySanitizingStaticEntities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criteria;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)entityLimit;
- (bool)excludesEntitiesWithBlankNames;
- (id)filterPredicates;
- (unsigned long long)groupingThreshold;
- (long long)groupingType;
- (unsigned long long)hash;
- (bool)ignoreRestrictionsPredicates;
- (bool)ignoreSystemFilterPredicates;
- (bool)includeEntitiesWithBlankNames;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCriteria:(id)arg1 library:(id)arg2;
- (id)initWithEntities:(id)arg1 entityType:(long long)arg2;
- (id)initWithFilterPredicates:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemPersistentIdentifiers;
- (id)itemPropertiesToFetch;
- (id)itemSectionInfo;
- (id)itemSections;
- (id)items;
- (id)mediaLibrary;
- (id)predicateForProperty:(id)arg1;
- (id)protobufferEncodableObject;
- (void)removeFilterPredicate:(id)arg1;
- (void)removePredicatesForProperty:(id)arg1;
- (void)setCollectionPropertiesToFetch:(id)arg1;
- (void)setCriteria:(id)arg1;
- (void)setEntityLimit:(unsigned long long)arg1;
- (void)setFilterPredicate:(id)arg1 forProperty:(id)arg2;
- (void)setFilterPredicates:(id)arg1;
- (void)setFilterPropertyPredicate:(id)arg1;
- (void)setGroupingType:(long long)arg1;
- (void)setIgnoreRestrictionsPredicates:(bool)arg1;
- (void)setIgnoreSystemFilterPredicates:(bool)arg1;
- (void)setIncludeEntitiesWithBlankNames:(bool)arg1;
- (void)setItemPropertiesToFetch:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setShouldIncludeNonLibraryEntities:(bool)arg1;
- (void)setSortItems:(bool)arg1;
- (void)setStaticEntities:(id)arg1 entityType:(long long)arg2;
- (void)setUseSections:(bool)arg1;
- (bool)shouldIncludeNonLibraryEntities;
- (bool)sortItems;
- (bool)specifiesPlaylistItems;
- (bool)useSections;
- (id)valueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2;
- (id)valueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2;
- (bool)willGroupEntities;

@end
