/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentHistoryChangeRequest : NSPersistentStoreRequest {
    NSDate * _date;
    bool  _delete;
    long long  _resultType;
    NSPersistentHistoryToken * _token;
    NSArray * _transactionIDs;
    NSNumber * _transactionNumber;
}

@property long long resultType;
@property (readonly) NSPersistentHistoryToken *token;

+ (id)deleteHistoryBeforeDate:(id)arg1;
+ (id)deleteHistoryBeforeToken:(id)arg1;
+ (id)deleteHistoryBeforeTransaction:(id)arg1;
+ (id)fetchHistoryAfterDate:(id)arg1;
+ (id)fetchHistoryAfterToken:(id)arg1;
+ (id)fetchHistoryAfterTransaction:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)entityNameToFetch;
- (unsigned long long)fetchLimit;
- (unsigned long long)fetchOffset;
- (bool)includesPropertyValues;
- (bool)includesSubentities;
- (id)initWithDate:(id)arg1;
- (id)initWithDate:(id)arg1 delete:(bool)arg2;
- (id)initWithToken:(id)arg1;
- (id)initWithToken:(id)arg1 delete:(bool)arg2;
- (id)initWithTransactionID:(id)arg1 delete:(bool)arg2;
- (id)initWithTransactionIDs:(id)arg1;
- (bool)isDelete;
- (id)predicate;
- (id)propertiesToFetch;
- (id)propertiesToGroupBy;
- (unsigned long long)requestType;
- (long long)resultType;
- (bool)returnsDistinctResults;
- (void)setResultType:(long long)arg1;
- (id)sortDescriptors;
- (id)token;
- (id)transactionNumber;

@end
