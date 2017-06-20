/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewCell : UICollectionReusableView <UIGestureRecognizerDelegate, _UILayoutEngineSuspending> {
    UIView * _backgroundView;
    struct { 
        unsigned int selected : 1; 
        unsigned int highlighted : 1; 
        unsigned int showingMenu : 1; 
        unsigned int clearSelectionWhenMenuDisappears : 1; 
        unsigned int waitingForSelectionAnimationHalfwayPoint : 1; 
    }  _collectionCellFlags;
    UIView * _contentView;
    long long  _dragState;
    bool  _dragging;
    long long  _focusStyle;
    _UIFloatingContentView * _focusedFloatingContentView;
    bool  _highlighted;
    id  _highlightingSupport;
    bool  _isLayoutEngineSuspended;
    UILongPressGestureRecognizer * _menuGesture;
    bool  _selected;
    UIView * _selectedBackgroundView;
    id  _selectionSegueTemplate;
}

@property (getter=_dragState, setter=_setDragState:, nonatomic) long long _dragState;
@property (getter=_isLayoutEngineSuspended, setter=_setLayoutEngineSuspended:, nonatomic) bool _layoutEngineSuspended;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIView *contentView;
@property (getter=_contentViewFrame, nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentViewFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDragging, nonatomic) bool dragging;
@property (getter=_focusStyle, setter=_setFocusStyle:, nonatomic) long long focusStyle;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) UIView *selectedBackgroundView;
@property (getter=_selectionAnimationDuration, nonatomic, readonly) double selectionAnimationDuration;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (Class)_contentViewClass;

- (bool)_canFocusProgrammatically;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentViewFrame;
- (bool)_descendantsShouldHighlight;
- (void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (long long)_dragState;
- (id)_encodableSubviews;
- (void)_ensureFocusedFloatingContentView;
- (long long)_focusStyle;
- (bool)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1;
- (bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleMenuGesture:(id)arg1;
- (bool)_highlightDescendantsWhenSelected;
- (bool)_isLayoutEngineSuspended;
- (bool)_isUsingOldStyleMultiselection;
- (void)_menuDismissed:(id)arg1;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (double)_selectionAnimationDuration;
- (id)_selectionSegueTemplate;
- (void)_setContentView:(id)arg1 addToHierarchy:(bool)arg2;
- (void)_setDragState:(long long)arg1;
- (void)_setFocusStyle:(long long)arg1;
- (void)_setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)_setLayoutAttributes:(id)arg1;
- (void)_setLayoutEngineSuspended:(bool)arg1;
- (void)_setOpaque:(bool)arg1 forSubview:(id)arg2;
- (void)_setSelected:(bool)arg1 animated:(bool)arg2;
- (void)_setSelectionSegueTemplate:(id)arg1;
- (void)_setupHighlightingSupport;
- (bool)_shouldSaveOpaqueStateForView:(id)arg1;
- (void)_teardownHighlightingSupportIfReady;
- (void)_updateBackgroundView;
- (void)_updateFocusedFloatingContentControlStateAnimated:(bool)arg1;
- (void)_updateFocusedFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(bool)arg3;
- (void)_updateGhostedAppearance;
- (void)_updateHighlightColorsForAnimationHalfwayPoint;
- (void)_updateHighlightColorsForView:(id)arg1 highlight:(bool)arg2;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void).cxx_destruct;
- (id)backgroundView;
- (bool)canBecomeFocused;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contentView;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)dragStateDidChange:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDragging;
- (bool)isEditing;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)layoutSubviews;
- (void)paste:(id)arg1;
- (void)prepareForReuse;
- (id)selectedBackgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDragging:(bool)arg1;
- (void)setEditing:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedBackgroundView:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
