/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface _FPItemProgressManager : NSObject {
    NSMutableDictionary * _downloadProgressPerItemIDs;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _uploadProgressPerItemIDs;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_discardProgressForItem:(id)arg1 usingProgressMap:(id)arg2;
- (id)_progressForItem:(id)arg1 usingProgressMap:(id)arg2;
- (void)discardDownloadProgressForItem:(id)arg1;
- (void)discardUploadProgressForItem:(id)arg1;
- (id)downloadProgressForItem:(id)arg1;
- (id)init;
- (id)uploadProgressForItem:(id)arg1;

@end
