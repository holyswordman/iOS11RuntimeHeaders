/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceReservationRowView : MKPlaceSectionRowView {
    UIButton * _buttonAttribution;
    UIButton * _buttonMakeReservation;
    NSLayoutConstraint * _constraintButtonBottomMargin;
    NSLayoutConstraint * _constraintButtonTopMargin;
    NSMutableArray * _mutableConstraints;
    UISegmentedControl * _openTimesControl;
    _MKPlaceReservationInfo * _reservationInfo;
}

@property (nonatomic, readonly) _MKPlaceReservationInfo *reservationInfo;
@property (nonatomic) unsigned long long selectedTimeIndex;
@property (nonatomic, retain) NSString *selectedTimeString;

- (void).cxx_destruct;
- (void)_actionMakeReservation;
- (id)_attributedStringFromButtonTitle:(id)arg1 useSmallFont:(bool)arg2;
- (double)_buttonBottomMargin;
- (id)_buttonFontLarge;
- (id)_buttonFontSmall;
- (double)_buttonTopMargin;
- (void)_contentSizeDidChange;
- (id)_newButtonForAttribution:(bool)arg1;
- (void)_setupImmutableConstraints;
- (void)_updateButtonTitleAttributes;
- (void)_updateMutableConstraints;
- (void)_updateTintColor;
- (void)_updateWithReservationInfo;
- (id)initWithReservationInfo:(id)arg1;
- (id)reservationInfo;
- (unsigned long long)selectedTimeIndex;
- (id)selectedTimeString;
- (void)setSelectedTimeIndex:(unsigned long long)arg1;
- (void)setSelectedTimeString:(id)arg1;
- (void)tintColorDidChange;

@end
