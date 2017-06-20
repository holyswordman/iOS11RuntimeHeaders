/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchBarTextField : UITextField {
    bool  __preventSelectionViewActivation;
    long long  __textInputSource;
    bool  _animatePlaceholderOnResignFirstResponder;
    NSMutableDictionary * _customClearButtons;
    bool  _deferringFirstResponder;
    _UISearchBarSearchFieldBackgroundView * _effectBackgroundBottom;
    _UISearchBarSearchFieldBackgroundView * _effectBackgroundTop;
    NSMutableDictionary * _iconOffsets;
    NSValue * _searchTextOffsetValue;
}

@property (setter=_setPreventSelectionViewActivation:, nonatomic) bool _preventSelectionViewActivation;
@property (setter=_setSearchTextOffetValue:, nonatomic, retain) NSValue *_searchTextOffsetValue;
@property (nonatomic) long long _textInputSource;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void)_activateSelectionView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedTextOrEditingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustmentsForSearchIconViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_availableTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forEditing:(bool)arg2;
- (void)_becomeFirstResponder;
- (bool)_becomeFirstResponderWhenPossible;
- (long long)_blurEffectStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bookmarkViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_clearBackgroundViews;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_clearButtonSize;
- (id)_createEffectsBackgroundViewWithStyle:(unsigned long long)arg1 applyFilter:(id)arg2;
- (bool)_hasActionForEventMask:(unsigned long long)arg1;
- (id)_offsetValueForIcon:(long long)arg1;
- (id)_placeholderColor;
- (Class)_placeholderLabelClass;
- (bool)_preventSelectionViewActivation;
- (void)_removeEffectsBackgroundViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_searchIconViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_searchTextOffsetValue;
- (void)_setBottomEffectBackgroundVisible:(bool)arg1;
- (void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2;
- (void)_setPreventSelectionViewActivation:(bool)arg1;
- (void)_setSearchTextOffetValue:(id)arg1;
- (bool)_shouldCenterPlaceholder;
- (bool)_shouldDetermineInterfaceStyleTextColor;
- (bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_suffixFrame;
- (long long)_suffixLabelTextAlignment;
- (Class)_systemBackgroundViewClass;
- (long long)_textInputSource;
- (bool)_textShouldFillFieldEditorHeight;
- (void)_updateBackgroundView:(id)arg1 withStyle:(unsigned long long)arg2 filter:(id)arg3;
- (void)_updateBackgroundViewsAnimated:(bool)arg1;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertTextSuggestion:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })placeholderRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)resignFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_textInputSource:(long long)arg1;
- (id)textInputTraits;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)tintColorDidChange;
- (void)updateForBackdropStyle:(unsigned long long)arg1;

@end
