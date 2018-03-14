/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMessageStore : MFMessageStore {
    MailAccount * _account;
    unsigned long long  _deletedMessageCount;
    unsigned long long  _deletedMessagesSize;
    struct { 
        unsigned int isReadOnly : 1; 
        unsigned int hasUnsavedChangesToMessageData : 1; 
        unsigned int haveOpenLockFile : 1; 
        unsigned int compacting : 1; 
        unsigned int cancelInvalidation : 1; 
        unsigned int forceInvalidation : 1; 
        unsigned int isWritingChangesToDisk : 1; 
        unsigned int isTryingToClose : 1; 
        unsigned int compactOnClose : 1; 
        unsigned int reserved : 23; 
    }  _flags;
    unsigned long long  _generationNumber;
    unsigned long long  _lastFetchCount;
    MFMailboxUid * _mailboxUid;
    MFActivityMonitor * _openMonitor;
    unsigned long long  _state;
    unsigned long long  _unreadMessageCount;
}

+ (Class)classForMimePart;
+ (id)copyMessages:(id)arg1 toMailbox:(id)arg2 markAsRead:(bool)arg3 deleteOriginals:(bool)arg4 isDeletion:(bool)arg5;
+ (bool)createEmptyStoreForPath:(id)arg1;
+ (bool)createEmptyStoreIfNeededForPath:(id)arg1;
+ (Class)headersClass;
+ (bool)storeAtPathIsWritable:(id)arg1;

- (id)_defaultRouterDestination;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(bool)arg2;
- (void)_flushAllMessageData;
- (void)_rebuildTableOfContentsSynchronously;
- (void)_setFlagsForMessages:(id)arg1;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(bool)arg3;
- (bool)_shouldChangeComponentMessageFlags;
- (bool)_shouldChangeComponentMessageFlagsForMessage:(id)arg1;
- (bool)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(bool)arg3;
- (id)account;
- (void)allMessageFlagsDidChange:(id)arg1;
- (unsigned long long)allNonDeletedCountIncludingServerSearch:(bool)arg1 andThreadSearch:(bool)arg2;
- (bool)allowsAppend;
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2;
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3;
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4;
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (int)archiveDestination;
- (bool)canCompact;
- (bool)canFetchMessageIDs;
- (bool)canFetchSearchResults;
- (void)cancelOpen;
- (void)close;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingText:(id)arg1;
- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)copyOfMessagesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (void)deleteMessages:(id)arg1 moveToTrash:(bool)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(bool)arg2;
- (void)deletedCount:(unsigned long long*)arg1 andSize:(unsigned long long*)arg2;
- (id)description;
- (void)didOpen;
- (id)displayName;
- (void)doCompact;
- (long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (long long)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (long long)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (long long)fetchMobileSynchronously:(unsigned long long)arg1;
- (long long)fetchMobileSynchronously:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;
- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)fetchWindow;
- (unsigned long long)fetchWindowCap;
- (id)finishRoutingMessages:(id)arg1 routed:(id)arg2;
- (unsigned long long)growFetchWindow;
- (bool)hasCachedDataForMimePart:(id)arg1;
- (bool)hasMessageForAccount:(id)arg1;
- (bool)hasMoreFetchableMessages;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(bool)arg2;
- (unsigned long long)indexOfMessage:(id)arg1;
- (id)initWithMailboxUid:(id)arg1 readOnly:(bool)arg2;
- (void)invalidateFetchWindow;
- (bool)isDrafts;
- (bool)isOpened;
- (bool)isReadOnly;
- (id)lastViewedMessageDate;
- (id)lastViewedMessageWithOptions:(unsigned int)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (id)mailboxUid;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;
- (id)messageForRemoteID:(id)arg1;
- (id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2;
- (id)messageIdRollCall:(id)arg1;
- (void)messagesWereAdded:(id)arg1;
- (void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (void)messagesWereCompacted:(id)arg1;
- (void)messagesWereDeleted:(id)arg1;
- (void)messagesWillBeCompacted:(id)arg1;
- (id)mutableCopyOfAllMessages;
- (unsigned long long)nonDeletedCountIncludingServerSearch:(bool)arg1 andThreadSearch:(bool)arg2;
- (void)openAsynchronously;
- (void)openSynchronously;
- (void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2;
- (id)remoteIDsFromUniqueRemoteIDs:(id)arg1;
- (unsigned long long)serverMessageCount;
- (unsigned long long)serverNonDeletedCount;
- (unsigned long long)serverUnreadCount;
- (unsigned long long)serverUnreadOnlyOnServerCount;
- (void)setFlag:(id)arg1 state:(bool)arg2 forMessages:(id)arg3;
- (void)setFlagForAllMessages:(id)arg1 state:(bool)arg2;
- (void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setLibrary:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(bool)arg2 isEncrypted:(bool)arg3 forMessage:(id)arg4;
- (bool)setPreferredEncoding:(unsigned int)arg1 forMessage:(id)arg2;
- (bool)shouldArchive;
- (bool)shouldDeleteInPlace;
- (bool)shouldDownloadBodyDataForMessage:(id)arg1;
- (bool)shouldGrowFetchWindow;
- (bool)shouldSetSummaryForMessage:(id)arg1;
- (id)status;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(bool)arg3;
- (id)storePathRelativeToAccount;
- (id)storeSearchResultMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 offset:(id)arg3 error:(id*)arg4;
- (id)storeSearchResultMatchingSearchText:(id)arg1 criterion:(id)arg2 limit:(unsigned int)arg3 offset:(id)arg4 error:(id*)arg5;
- (void)structureDidChange;
- (bool)supportsArchiving;
- (unsigned long long)totalCount;
- (void)undeleteMessages:(id)arg1;
- (id)uniqueRemoteIDsForMessages:(id)arg1;
- (unsigned long long)unreadCount;
- (unsigned long long)unreadCountMatchingCriterion:(id)arg1;
- (void)updateMessages:(id)arg1 updateNumberOfAttachments:(bool)arg2;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)writeUpdatedMessageDataToDisk;

@end