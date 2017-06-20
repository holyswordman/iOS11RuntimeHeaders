/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNIndexRequestHandler : NSObject {
    unsigned long long  _batchSize;
    CNIndexClientState * _clientState;
    CNContactStore * _contactStore;
    <CNCSSearchableIndex> * _index;
    bool  _isFullSyncNeeded;
    <CNSpotlightIndexingLogger> * _logger;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, retain) CNIndexClientState *clientState;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) <CNCSSearchableIndex> *index;
@property (nonatomic) bool isFullSyncNeeded;
@property (nonatomic, readonly) <CNSpotlightIndexingLogger> *logger;

- (void).cxx_destruct;
- (bool)_batchIndexUpdatingItems:(id)arg1 deletingItemsWithIdentifiers:(id)arg2 fullSyncOffset:(id)arg3 fullSyncDone:(id)arg4;
- (id)_futureForDeleteAllSearchableItems;
- (id)_futureForDeleteSearchableItemsWithIdentifiers:(id)arg1;
- (id)_futureForEndIndexBatchWithClientState:(id)arg1;
- (id)_futureForFetchLastClientState;
- (id)_futureForIndexSearchableItems:(id)arg1;
- (void)_performIndexingWithForcedReindexing:(bool)arg1;
- (bool)batchIndexUpdatingItems:(id)arg1 deletingItemsWithIdentifiers:(id)arg2;
- (bool)batchIndexUpdatingItems:(id)arg1 fullSyncOffset:(long long)arg2 fullSyncDone:(bool)arg3;
- (unsigned long long)batchSize;
- (bool)beginIndexBatch;
- (id)clientState;
- (void)consumeChangeHistory:(id)arg1;
- (id)contactStore;
- (bool)deleteAllSearchableItems;
- (bool)deleteSearchableItemsWithIdentifiers:(id)arg1;
- (bool)deltaSyncContacts:(id)arg1;
- (bool)endIndexBatchWithClientState;
- (void)fetchAndCheckLastClientState;
- (id)fetchChangeHistory;
- (bool)fetchLastClientState;
- (bool)fullSyncContacts;
- (id)index;
- (bool)indexSearchableItems:(id)arg1;
- (id)init;
- (id)initWithContactStore:(id)arg1 searchableIndex:(id)arg2 logger:(id)arg3 batchSize:(unsigned long long)arg4;
- (bool)isFullSyncNeeded;
- (id)logger;
- (void)performIndexing;
- (bool)prepareForFullSync:(id)arg1;
- (void)registerForChangeHistory;
- (void)reindexAllSearchableItems;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1;
- (id)searchableItemsForContactIdentifiers:(id)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setClientState:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setIndex:(id)arg1;
- (void)setIsFullSyncNeeded:(bool)arg1;

@end
