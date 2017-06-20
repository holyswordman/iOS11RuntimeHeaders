/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCDOSDataOutputStorage : NSObject {
    AVCaptureOutput<AVCaptureDataOutputDelegateOverride> * _dataOutput;
    NSMutableArray * _mdoTimeStampHistoryQueue;
    NSMutableArray * _synchronizedDataQueue;
    NSMutableArray * _timestampAdjustmentsDataQueue;
}

@property (nonatomic, readonly) AVCaptureOutput<AVCaptureDataOutputDelegateOverride> *dataOutput;
@property (nonatomic, retain) NSMutableArray *mdoTimeStampHistoryQueue;
@property (nonatomic, readonly) NSMutableArray *synchronizedDataQueue;
@property (nonatomic, retain) NSMutableArray *timestampAdjustmentsDataQueue;

- (id)dataOutput;
- (void)dealloc;
- (id)initWithDataOutput:(id)arg1;
- (id)mdoTimeStampHistoryQueue;
- (void)setMdoTimeStampHistoryQueue:(id)arg1;
- (void)setTimestampAdjustmentsDataQueue:(id)arg1;
- (id)synchronizedDataQueue;
- (id)timestampAdjustmentsDataQueue;

@end