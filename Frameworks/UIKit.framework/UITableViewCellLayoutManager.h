/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellLayoutManager : NSObject

+ (id)_externalDetailTextColor;
+ (id)_externalTextColor;
+ (id)layoutManagerForTableViewCellStyle:(long long)arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessoryRectForCell:(id)arg1 offscreen:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessoryRectForCell:(id)arg1 offscreen:(bool)arg2 rowWidth:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedBackgroundContentRectForCell:(id)arg1 forIndentedState:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedBackgroundContentRectForCell:(id)arg1 forIndentedState:(bool)arg2 rowWidth:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedBackgroundRectForCell:(id)arg1 forIndentedState:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedBackgroundRectForCell:(id)arg1 forIndentedState:(bool)arg2 rowWidth:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundRectForCell:(id)arg1 forIndentedState:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundRectForCell:(id)arg1 forIndentedState:(bool)arg2 rowWidth:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectForCell:(id)arg1 forEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectForCell:(id)arg1 forEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3 rowWidth:(double)arg4;
- (double)_contentRectLeadingOffsetForCell:(id)arg1 editingState:(bool)arg2 rowWidth:(double)arg3;
- (bool)_editControlOnSameSideAsReorderControlForCell:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_editControlRectForCell:(id)arg1 offscreen:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_editingAccessoryRectForCell:(id)arg1 offscreen:(bool)arg2;
- (void)_layoutFocusGuidesForCell:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_reorderControlRectForCell:(id)arg1 offscreen:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_reorderSeparatorRectForCell:(id)arg1 offscreen:(bool)arg2;
- (void)_updateFocusGuidesForCell:(id)arg1 editing:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessoryEndingRectForCell:(id)arg1 forNewEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (bool)accessoryShouldAppearForCell:(id)arg1;
- (bool)accessoryShouldFadeForCell:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessoryStartingRectForCell:(id)arg1 forNewEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (void)applyCarPlayDefaultValuesToTextLabel:(id)arg1 inCell:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundEndingRectForCell:(id)arg1 forNewEditingState:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundStartingRectForCell:(id)arg1 forNewEditingState:(bool)arg2;
- (id)badgeForCell:(id)arg1;
- (void)cell:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)cell:(id)arg1 willTransitionToState:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentEndingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentEndingRectForCell:(id)arg1 forNewEditingState:(bool)arg2;
- (double)contentIndentationForCell:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForCell:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForCell:(id)arg1 forState:(unsigned long long)arg2 rowWidth:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentStartingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentStartingRectForCell:(id)arg1 forNewEditingState:(bool)arg2;
- (id)customAccessoryViewForCell:(id)arg1 editing:(bool)arg2;
- (id)defaultBadgeForCell:(id)arg1;
- (id)defaultDetailTextLabelFontForCell:(id)arg1;
- (double)defaultDetailTextLabelFontSizeForCell:(id)arg1;
- (id)defaultEditableTextFieldForCell:(id)arg1;
- (id)defaultImageViewForCell:(id)arg1;
- (id)defaultLabelForCell:(id)arg1;
- (id)defaultLabelForCell:(id)arg1 ofClass:(Class)arg2;
- (id)defaultTextLabelFontForCell:(id)arg1;
- (double)defaultTextLabelFontSizeForCell:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })deleteConfirmationRectForCell:(id)arg1;
- (id)detailTextLabelForCell:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editControlEndingRectForCell:(id)arg1 forNewEditingState:(bool)arg2;
- (bool)editControlShouldAppearForCell:(id)arg1;
- (bool)editControlShouldFadeForCell:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editControlStartingRectForCell:(id)arg1 forNewEditingState:(bool)arg2;
- (id)editableTextFieldForCell:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editingAccessoryEndingRectForCell:(id)arg1 forNewEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (bool)editingAccessoryShouldAppearForCell:(id)arg1;
- (bool)editingAccessoryShouldFadeForCell:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editingAccessoryStartingRectForCell:(id)arg1 forNewEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (void)getTextLabelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 detailTextLabelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forCell:(id)arg3 rowWidth:(double)arg4 forSizing:(bool)arg5;
- (id)imageViewForCell:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;
- (void)layoutSubviewsOfCell:(id)arg1;
- (struct CGSize { double x1; double x2; })optimumSizeForLabel:(id)arg1 inTotalTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 minimizeWidthOnVerticalOverflow:(bool)arg3 preferSingleLineWidth:(bool)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })reorderControlEndingRectForCell:(id)arg1 forNewEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (bool)reorderControlShouldAppearForCell:(id)arg1;
- (bool)reorderControlShouldFadeForCell:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })reorderControlStartingRectForCell:(id)arg1 forNewEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })reorderSeparatorEndingRectForCell:(id)arg1 forNewEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (bool)reorderSeparatorShouldAppearForCell:(id)arg1;
- (bool)reorderSeparatorShouldFadeForCell:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })reorderSeparatorStartingRectForCell:(id)arg1 forNewEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (double)requiredIndentationForFirstLineOfCell:(id)arg1 rowWidth:(double)arg2;
- (double)requiredIndentationForFirstLineOfCell:(id)arg1 rowWidth:(double)arg2 forSizing:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectedBackgroundEndingRectForCell:(id)arg1 forNewEditingState:(bool)arg2;
- (bool)shouldApplyAccessibilityLargeTextLayoutForCell:(id)arg1;
- (bool)shouldIncreaseMarginForImageViewInCell:(id)arg1;
- (bool)shouldStackAccessoryViewVerticallyForCell:(id)arg1 editing:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })standardLayoutImageViewFrameForCell:(id)arg1 forSizing:(bool)arg2;
- (id)textLabelForCell:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForCell:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForCell:(id)arg1 rowWidth:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(bool)arg3;

@end
