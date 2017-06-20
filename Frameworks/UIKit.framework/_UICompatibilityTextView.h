/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICompatibilityTextView : UIScrollView <UIDragInteractionDelegate, UIDropInteractionDelegate, UIPreviewItemDelegate, UITextInput, UITextLinkInteraction, UIWebDraggingDelegate, WebEditingDelegate, WebPolicyDelegate> {
    id  _private;
    bool  m_editing;
    UIView * m_inputView;
}

@property (nonatomic) bool allowsEditingTextAttributes;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic) bool clearsOnInsertion;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEditable, nonatomic) bool editable;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (retain) UIView *inputAccessoryView;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (retain) UIView *inputView;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic, copy) NSDictionary *typingAttributes;

+ (bool)_isCompatibilityTextView;
+ (id)excludedElementsForHTML;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_addShortcut:(id)arg1;
- (unsigned long long)_allowedLinkTypes;
- (bool)_alwaysHandleScrollerMouseEvent;
- (id)_dataForPreviewItemController:(id)arg1 atPosition:(struct CGPoint { double x1; double x2; })arg2 type:(long long*)arg3;
- (void)_dealloc;
- (void)_define:(id)arg1;
- (bool)_freezeTextContainerSize;
- (bool)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)_interactionStartedFromPreviewItemController:(id)arg1;
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;
- (id)_keyboardResponder;
- (bool)_ownsInputAccessoryView;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_presentationRectsForPreviewItemController:(id)arg1;
- (id)_presentationSnapshotForPreviewItemController:(id)arg1;
- (Class)_printFormatterClass;
- (void)_promptForReplace:(id)arg1;
- (id)_proxyTextInput;
- (bool)_requiresKeyboardWhenFirstResponder;
- (bool)_restoreFirstResponder;
- (void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)_setFreezeTextContainerSize:(bool)arg1;
- (void)_share:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_transferAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4;
- (void)_transferTextViewPropertiesFromText:(id)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_updateForNewSize:(struct CGSize { double x1; double x2; })arg1 withOldSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)allowsEditingTextAttributes;
- (id)attributedText;
- (id)automaticallySelectedOverlay;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)becomeFirstResponder;
- (bool)becomesEditableWithGestures;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (double)bottomBufferHeight;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResignFirstResponder;
- (void)cancelDataDetectorsWithWebLock;
- (void)cancelInteractionWithLink;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)clearsOnInsertion;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(bool)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (struct CGPoint { double x1; double x2; })constrainedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)contentAsHTMLString;
- (void)copy:(id)arg1;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)cut:(id)arg1;
- (unsigned long long)dataDetectorTypes;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)delayedUpdateForKeyboardDidShow;
- (void)deleteBackward;
- (void)didMoveToSuperview;
- (void)disableClearsOnInsertion;
- (void)displayScrollerIndicators;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endOfDocument;
- (void)endSelectionChange;
- (void)ensureSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)font;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (bool)hasText;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 font:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (id)inputAccessoryView;
- (id)inputDelegate;
- (id)inputView;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (bool)isEditable;
- (bool)isEditing;
- (bool)isFirstResponder;
- (bool)isInteractingWithLink;
- (bool)isPreviewing;
- (void)keyboardDidShow:(id)arg1;
- (bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3;
- (bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (bool)keyboardInputShouldDelete:(id)arg1;
- (void)layoutSubviews;
- (double)lineHeight;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (int)marginTop;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)mightHaveLinks;
- (struct CGImage { }*)newSnapshotWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })offset;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)paste:(id)arg1;
- (void)performBecomeEditableTasks;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)recalculateStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (void)removeFromSuperview;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)resetDataDetectorsResultsWithWebLock;
- (bool)resignFirstResponder;
- (bool)respondsToSelector:(SEL)arg1;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)scrollRectToVisibleInContainingScrollView;
- (void)scrollSelectionToVisible:(bool)arg1;
- (void)scrollToMakeCaretVisible:(bool)arg1;
- (bool)scrollingEnabled;
- (void)select:(id)arg1;
- (void)selectAll;
- (void)selectAll:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (id)selectedText;
- (id)selectedTextRange;
- (long long)selectionAffinity;
- (long long)selectionGranularity;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAllowsEditingTextAttributes:(bool)arg1;
- (void)setAllowsFourWayRubberBanding:(bool)arg1;
- (void)setAllowsRubberBanding:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(bool)arg1;
- (void)setBottomBufferHeight:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setClearsOnInsertion:(bool)arg1;
- (void)setContentToHTMLString:(id)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setEditable:(bool)arg1;
- (void)setEditing:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setLineHeight:(double)arg1;
- (void)setMarginTop:(int)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScrollEnabled:(bool)arg1;
- (void)setScrollerIndicatorSubrect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScrollingEnabled:(bool)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectionAffinity:(long long)arg1;
- (void)setSelectionGranularity:(long long)arg1;
- (void)setSelectionToEnd;
- (void)setSelectionToStart;
- (void)setShouldAutoscrollAboveBottom:(bool)arg1;
- (void)setShowScrollerIndicators:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (bool)shouldAutoscrollAboveBottom;
- (bool)shouldScrollEnclosingScrollView;
- (bool)shouldStartDataDetectors;
- (bool)showScrollerIndicators;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startDataDetectorsWithWebLock;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)styleString;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)tapLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textInputView;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (struct CGSize { double x1; double x2; })tileSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)tokenizer;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)typingAttributes;
- (id)undoManager;
- (id)undoManagerForWebView:(id)arg1;
- (void)unmarkText;
- (void)updateAutoscrollAboveBottom;
- (void)updateContentEditableAttribute:(bool)arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelection;
- (void)updateWebViewObjects;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleTextRect;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webViewDidChange:(id)arg1;
- (bool)willInteractWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
