/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextDragAssistant : NSObject <UIDragInteractionDelegate_Private, UIDropInteractionDelegate, UITextDragDropSupport, UITextPasteSessionDelegate, _UITextPasteProgressSupport> {
    UIDragInteraction * _currentDragInteraction;
    <UIDragSession> * _currentDragSession;
    UITextPosition * _currentDropPosition;
    UITextDropProposal * _currentDropProposal;
    <UIDropSession> * _currentDropSession;
    UIDragInteraction * _dragInteraction;
    NSArray * _draggedTextRanges;
    _UITextDragCaretView * _dropCaret;
    UIDropInteraction * _dropInteraction;
    UITextPasteController * _dropPasteController;
    <UITextPasteSession> * _dropPasteSession;
    struct { 
        unsigned int viewSupportsGhostedRanges : 1; 
        unsigned int shouldRestoreFirstResponder : 1; 
        unsigned int draggingOngoing : 1; 
        unsigned int handledCancelAnimation : 1; 
        unsigned int restoreNonEditableAfterDrop : 1; 
        unsigned int forceEditable : 1; 
        unsigned int delegateSupportsProposalForDrop : 1; 
        unsigned int delegateSupportsSessionDidUpdate : 1; 
        unsigned int dropPerformed : 1; 
    }  _flags;
    <UITextDraggableGeometry> * _geometry;
    UITextRange * _initialDragSelectedRange;
    NSArray * _movedItemsInView;
    UITextRange * _preDropSelectionRange;
    NSMapTable * _previewProviders;
    <UITextDraggableGeometrySameViewDropOperation> * _sameViewDropOperation;
    UITextDraggableGeometrySameViewDropOperationResult * _sameViewDropOperationResult;
    NSMapTable * _targetedPreviewProviders;
    UIDragItem * _topmostDropItem;
    UITargetedDragPreview * _topmostDropPreview;
    UIView<UITextDragSupporting><UITextDropSupporting> * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDragActive, nonatomic, readonly) bool dragActive;
@property (nonatomic, readonly) UIDragInteraction *dragInteraction;
@property (getter=isDropActive, nonatomic, readonly) bool dropActive;
@property (nonatomic, readonly) UIDropInteraction *dropInteraction;
@property (nonatomic, readonly) <UITextDraggableGeometry> *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView<UITextDragSupporting><UITextDropSupporting> *view;

- (void).cxx_destruct;
- (id)_accessibilityDraggableRanges;
- (void)_addDraggedTextRangeForItems:(id)arg1 defaultRange:(id)arg2;
- (void)_applyOptionsToGeometry;
- (void)_cleanupDrop;
- (void)_clearDraggedTextRanges;
- (id)_closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_containerViewForDropPreviews;
- (id)_containerViewForLiftPreviews;
- (bool)_dragInteraction:(id)arg1 competingGestureRecognizerShouldDelayLift:(id)arg2;
- (id)_dropRangeForPosition:(id)arg1;
- (id)_dropRequestWithPosition:(id)arg1 inSession:(id)arg2;
- (void)_forDraggedTextRangesDo:(id /* block */)arg1;
- (void)_ghostDraggedTextRanges:(bool)arg1;
- (bool)_hasDraggedTextRange:(id)arg1;
- (void)_initializeDragSession:(id)arg1 withInteraction:(id)arg2;
- (id)_itemsForDraggedRange:(id)arg1;
- (void)_performDropToPosition:(id)arg1 inSession:(id)arg2;
- (void)_performSameViewOperation:(id)arg1;
- (void)_prepareSameViewOperation:(unsigned long long)arg1 forItems:(id)arg2 toRange:(id)arg3;
- (id)_previewForIrrelevantItemFromPreview:(id)arg1;
- (id)_previewForTopmostItem:(id)arg1 withDefault:(id)arg2;
- (void)_restoreResponderIfNeededForOperation:(unsigned long long)arg1;
- (id)_shrinkingPreview:(id)arg1 toPosition:(id)arg2;
- (id)_suggestedProposalForPosition:(id)arg1 inSession:(id)arg2 allowCancel:(bool)arg3;
- (bool)_supportsSameViewDropOperations;
- (double)_textPasteBlockingTimeout;
- (long long)_textPasteRangeBehavior;
- (id)_textPasteSelectableRangeForResult:(id)arg1 fromRange:(id)arg2;
- (bool)_textPasteShouldBlockPasting;
- (id)_textRangeForDraggingFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateDropCaretToPosition:(id)arg1;
- (void)_viewBecomeFirstResponderIfNeededAfterDrop;
- (bool)accessibilityCanDrag;
- (id)dragInteraction;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dropInteraction;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)geometry;
- (id)initWithDraggableOnlyView:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 geometry:(id)arg2;
- (void)installDragInteractionIfNeeded;
- (void)installDropInteractionIfNeeded;
- (bool)isDragActive;
- (bool)isDropActive;
- (void)notifyTextInteraction;
- (id)view;

@end
