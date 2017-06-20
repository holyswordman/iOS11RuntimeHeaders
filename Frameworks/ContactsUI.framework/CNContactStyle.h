/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactStyle : NSObject <NSSecureCoding> {
    UIColor * _backgroundColor;
    long long  _barStyle;
    bool  _blurSupported;
    UIColor * _contactHeaderBackgroundColor;
    UIColor * _contactHeaderDropShadowColor;
    UIColor * _disabledTextColor;
    UIColor * _headerBackgroundColor;
    UIColor * _highlightedTextColor;
    long long  _inlineActionsViewStyle;
    long long  _keyboardAppearance;
    long long  _modalTransitionStyle;
    UIColor * _notesTextColor;
    UIColor * _placeholderTextColor;
    UIColor * _readOnlyTextColor;
    UIColor * _searchBarBackgroundColor;
    UIColor * _sectionBackgroundColor;
    UIColor * _selectedCellBackgroundColor;
    long long  _separatorBackdropOverlayBlendMode;
    UIColor * _separatorColor;
    long long  _separatorStyle;
    bool  _shouldPresentInCurrentContext;
    UIColor * _suggestedLabelTextColor;
    UIColor * _suggestedValueTextColor;
    UIColor * _taglineTextColor;
    UIColor * _textColor;
    UIColor * _tintColorOverride;
    long long  _topActionsViewStyle;
    UIColor * _transportBackgroundColor;
    UIColor * _transportBoldBackgroundColor;
    UIColor * _transportBorderColor;
    bool  _usesOpaqueBackground;
    bool  _usesTranslucentBarStyle;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) long long barStyle;
@property (nonatomic) bool blurSupported;
@property (nonatomic, readonly) UIFont *boldTextFont;
@property (nonatomic, retain) UIColor *contactHeaderBackgroundColor;
@property (nonatomic, retain) UIColor *contactHeaderDropShadowColor;
@property (nonatomic, retain) UIColor *disabledTextColor;
@property (nonatomic, retain) UIColor *headerBackgroundColor;
@property (nonatomic, retain) UIColor *highlightedTextColor;
@property (nonatomic) long long inlineActionsViewStyle;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long modalTransitionStyle;
@property (nonatomic, retain) UIColor *notesTextColor;
@property (nonatomic, retain) UIColor *placeholderTextColor;
@property (nonatomic, retain) UIColor *readOnlyTextColor;
@property (nonatomic, retain) UIColor *searchBarBackgroundColor;
@property (nonatomic, retain) UIColor *sectionBackgroundColor;
@property (nonatomic, retain) UIColor *selectedCellBackgroundColor;
@property (nonatomic) long long separatorBackdropOverlayBlendMode;
@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) bool shouldPresentInCurrentContext;
@property (nonatomic, retain) UIColor *suggestedLabelTextColor;
@property (nonatomic, retain) UIColor *suggestedValueTextColor;
@property (nonatomic, retain) UIColor *taglineTextColor;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) UIFont *textFont;
@property (nonatomic, retain) UIColor *tintColorOverride;
@property (nonatomic) long long topActionsViewStyle;
@property (nonatomic, retain) UIColor *transportBackgroundColor;
@property (nonatomic, retain) UIColor *transportBoldBackgroundColor;
@property (nonatomic, retain) UIColor *transportBorderColor;
@property (nonatomic) bool usesOpaqueBackground;
@property (nonatomic) bool usesTranslucentBarStyle;

+ (id)currentStyle;
+ (id)darkStyle;
+ (id)defaultStyle;
+ (id)faceTimeStyle;
+ (void)setCurrentStyle:(id)arg1;
+ (id)siriStyle;
+ (id)starkStyle;
+ (bool)supportsSecureCoding;
+ (id)testStyle;
+ (id)watchStyle;

- (void).cxx_destruct;
- (id)backgroundColor;
- (long long)barStyle;
- (bool)blurSupported;
- (id)boldTextFont;
- (id)contactHeaderBackgroundColor;
- (id)contactHeaderDropShadowColor;
- (id)disabledTextColor;
- (void)encodeWithCoder:(id)arg1;
- (id)headerBackgroundColor;
- (id)highlightedTextColor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)inlineActionsViewStyle;
- (long long)keyboardAppearance;
- (long long)modalTransitionStyle;
- (id)notesTextColor;
- (id)placeholderTextColor;
- (id)readOnlyTextColor;
- (id)searchBarBackgroundColor;
- (id)sectionBackgroundColor;
- (id)selectedCellBackgroundColor;
- (long long)separatorBackdropOverlayBlendMode;
- (id)separatorColor;
- (long long)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBlurSupported:(bool)arg1;
- (void)setContactHeaderBackgroundColor:(id)arg1;
- (void)setContactHeaderDropShadowColor:(id)arg1;
- (void)setDisabledTextColor:(id)arg1;
- (void)setHeaderBackgroundColor:(id)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setInlineActionsViewStyle:(long long)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setModalTransitionStyle:(long long)arg1;
- (void)setNotesTextColor:(id)arg1;
- (void)setPlaceholderTextColor:(id)arg1;
- (void)setReadOnlyTextColor:(id)arg1;
- (void)setSearchBarBackgroundColor:(id)arg1;
- (void)setSectionBackgroundColor:(id)arg1;
- (void)setSelectedCellBackgroundColor:(id)arg1;
- (void)setSeparatorBackdropOverlayBlendMode:(long long)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setShouldPresentInCurrentContext:(bool)arg1;
- (void)setSuggestedLabelTextColor:(id)arg1;
- (void)setSuggestedValueTextColor:(id)arg1;
- (void)setTaglineTextColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTintColorOverride:(id)arg1;
- (void)setTopActionsViewStyle:(long long)arg1;
- (void)setTransportBackgroundColor:(id)arg1;
- (void)setTransportBoldBackgroundColor:(id)arg1;
- (void)setTransportBorderColor:(id)arg1;
- (void)setUsesOpaqueBackground:(bool)arg1;
- (void)setUsesTranslucentBarStyle:(bool)arg1;
- (bool)shouldPresentInCurrentContext;
- (id)suggestedLabelTextColor;
- (id)suggestedValueTextColor;
- (id)taglineTextColor;
- (id)textColor;
- (id)textFont;
- (id)tintColorOverride;
- (long long)topActionsViewStyle;
- (id)transportBackgroundColor;
- (id)transportBoldBackgroundColor;
- (id)transportBorderColor;
- (bool)usesOpaqueBackground;
- (bool)usesTranslucentBarStyle;

@end
