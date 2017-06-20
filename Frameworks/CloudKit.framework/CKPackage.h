/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPackage : NSObject <CKRecordValue, NSSecureCoding> {
    NSString * _UUID;
    NSData * _archiverInfo;
    NSArray * _assets;
    NSString * _databaseBasePath;
    bool  _downloaded;
    bool  _hasSize;
    unsigned long long  _nextItemIndex;
    bool  _open;
    long long  _packageID;
    NSObject<OS_dispatch_queue> * _queue;
    CKRecord * _record;
    NSString * _recordKey;
    struct _OpaquePCSShareProtection { } * _recordPCS;
    bool  _shouldReadRawEncryptedData;
    unsigned long long  _size;
    CKSQLite * _sqlite;
    long long  _state;
    long long  _storageGroupingPolicy;
    bool  _transaction;
    long long  _uploadRank;
    bool  _uploaded;
    bool  _wasCached;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, copy) NSData *archiverInfo;
@property (nonatomic, copy) NSArray *assets;
@property (nonatomic, retain) NSString *databaseBasePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool downloaded;
@property (nonatomic) bool hasSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long nextItemIndex;
@property (getter=isOpen, nonatomic) bool open;
@property (nonatomic) long long packageID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) CKRecord *record;
@property (nonatomic, copy) NSString *recordKey;
@property (nonatomic) struct _OpaquePCSShareProtection { }*recordPCS;
@property (nonatomic) bool shouldReadRawEncryptedData;
@property (nonatomic, copy) NSData *signature;
@property (nonatomic) unsigned long long size;
@property (nonatomic, retain) CKSQLite *sqlite;
@property (nonatomic) long long state;
@property (nonatomic) long long storageGroupingPolicy;
@property (readonly) Class superclass;
@property (getter=inTransaction, nonatomic) bool transaction;
@property (nonatomic) long long uploadRank;
@property (nonatomic) bool uploaded;
@property (nonatomic) bool wasCached;

+ (id)_createPackageDBWithPath:(id)arg1;
+ (id)_packageDatabaseDirectoryWithBasePath:(id)arg1 state:(long long)arg2;
+ (id)_packageDatabasePathWithBasePath:(id)arg1 UUID:(id)arg2 state:(long long)arg3;
+ (id)_packagesBasePathForBundleID:(id)arg1;
+ (id)clientPackageDatabaseDirectory;
+ (void)destroyClientPackageWithDatabaseBasePath:(id)arg1 UUID:(id)arg2;
+ (void)gcPackagesInDirectory:(id)arg1 dbInUseBlock:(id /* block */)arg2;
+ (id)packageInDaemonWithBundleIdentifier:(id)arg1 error:(id*)arg2;
+ (id)packageWithError:(id*)arg1;
+ (id)packageWithPackage:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)UUID;
- (id)_initWithBasePath:(id)arg1 UUID:(id)arg2;
- (id)_itemOrNilAtIndex:(unsigned long long)arg1;
- (id)_itemWithColumnsByName:(id)arg1;
- (void)_locked_beginTransaction;
- (void)_locked_endTransaction;
- (void)_locked_open;
- (bool)_locked_openWithError:(id*)arg1;
- (id)_packageDatabasePath;
- (id)_packageDatabasePathWithState:(long long)arg1;
- (void)addItem:(id)arg1;
- (void)addSection:(id)arg1;
- (id)archiverInfo;
- (id)assets;
- (void)beginTransaction;
- (bool)claimOwnershipWithError:(id*)arg1;
- (void)close;
- (id)databaseBasePath;
- (void)dealloc;
- (id)description;
- (bool)downloaded;
- (void)encodeWithCoder:(id)arg1;
- (void)endTransaction;
- (void)handleChangeStateAction:(long long)arg1;
- (bool)handleChangeStateAction:(long long)arg1 error:(id*)arg2;
- (bool)hasSize;
- (bool)inTransaction;
- (id)init;
- (id)initUnreachablePackageWithUUID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isOpen;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemCount;
- (id)itemEnumerator;
- (id)itemEnumeratorForSectionAtIndex:(unsigned long long)arg1;
- (bool)movePackagesDatabaseInDirection:(bool)arg1 error:(id*)arg2;
- (unsigned long long)nextItemIndex;
- (void)open;
- (bool)openWithError:(id*)arg1;
- (long long)packageID;
- (bool)prepareDBWithError:(id*)arg1;
- (id)queue;
- (id)record;
- (id)recordKey;
- (struct _OpaquePCSShareProtection { }*)recordPCS;
- (void)releaseDB;
- (void)releaseDBWithRemove:(bool)arg1;
- (void)removeDB;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionCount;
- (void)setArchiverInfo:(id)arg1;
- (bool)setArchiverInfo:(id)arg1 error:(id*)arg2;
- (void)setAssets:(id)arg1;
- (void)setDatabaseBasePath:(id)arg1;
- (void)setDownloaded:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setNextItemIndex:(unsigned long long)arg1;
- (void)setOpen:(bool)arg1;
- (void)setPackageID:(long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordKey:(id)arg1;
- (void)setRecordPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setShouldReadRawEncryptedData:(bool)arg1;
- (void)setSignature:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setSqlite:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStorageGroupingPolicy:(long long)arg1;
- (void)setTransaction:(bool)arg1;
- (void)setUUID:(id)arg1;
- (void)setUploadRank:(long long)arg1;
- (void)setUploaded:(bool)arg1;
- (void)setWasCached:(bool)arg1;
- (bool)shouldReadRawEncryptedData;
- (id)signature;
- (unsigned long long)size;
- (id)sqlite;
- (id)sqliteOrRaise;
- (long long)state;
- (long long)storageGroupingPolicy;
- (void)updateItemAtIndex:(long long)arg1 withFileURL:(id)arg2;
- (void)updateItemAtIndex:(long long)arg1 withSignature:(id)arg2 size:(unsigned long long)arg3 itemID:(unsigned long long)arg4 sectionIndex:(unsigned long long)arg5;
- (void)updateItemsAtIndexes:(id)arg1 fileURLs:(id)arg2;
- (long long)uploadRank;
- (bool)uploaded;
- (bool)wasCached;

@end