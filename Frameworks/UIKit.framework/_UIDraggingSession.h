/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDraggingSession : NSObject <_UIDraggingInfo> {
    <_UIDraggingSessionDelegate> * _delegate;
    _UIInternalDraggingSessionSource * _internalSessionSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIDraggingSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long draggingSourceOperationMask;
@property (readonly) unsigned long long hash;
@property (getter=_internalSessionSource, nonatomic, readonly) _UIInternalDraggingSessionSource *internalSessionSource;
@property (nonatomic, readonly) _UIDraggingSession *localDraggingSession;
@property (nonatomic) long long numberOfValidItemsForDrop;
@property (readonly) Class superclass;

+ (void)_cancelAllDrags;

- (void).cxx_destruct;
- (void)_cancelDrag;
- (void)_getOperationMaskFromDelegateInApp:(unsigned long long*)arg1 outsideApp:(unsigned long long*)arg2 prefersFullSizePreview:(bool*)arg3;
- (id)_internalSessionSource;
- (void)_sendDataTransferFinished;
- (void)_sendDidEndWithOperation:(unsigned long long)arg1;
- (void)_sendDidMove;
- (void)_sendHandedOffDragImage;
- (void)_sendWillAddItems:(id)arg1;
- (void)_sendWillBegin;
- (void)_sendWillEndWithOperation:(unsigned long long)arg1;
- (bool)_shouldCancelOnAppDeactivation;
- (void)addItems:(id)arg1;
- (id)delegate;
- (struct CGPoint { double x1; double x2; })draggingLocationInCoordinateSpace:(id)arg1;
- (unsigned long long)draggingSourceOperationMask;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 acceptableTypeIdentifiers:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithInternalSessionSource:(id)arg1;
- (id)localDraggingSession;
- (long long)numberOfValidItemsForDrop;
- (void)setDelegate:(id)arg1;
- (void)setNumberOfValidItemsForDrop:(long long)arg1;

@end
