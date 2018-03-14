/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityVerticalLockupView : MusicEntityAbstractLockupView <MusicEntityContentDescriptorViewConfiguring> {
    UIImageView * _availableOfflineBadgeImageView;
    <MusicEntityVerticalLockupViewDelegate> * _delegate;
    bool  _isAvailableOffline;
    double  _textLateralEdgePadding;
}

@property (nonatomic, retain) MusicEntityViewContentDescriptor *contentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicEntityVerticalLockupViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;

- (void).cxx_destruct;
- (void)_contentDescriptorDidChange:(id)arg1;
- (bool)_shouldArtworkViewRespectHighlightProperty;
- (bool)_shouldEnableArtworkViewUserInteraction;
- (id)contentDescriptor;
- (id)delegate;
- (void)layoutSubviews;
- (void)setContentDescriptor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTextLateralEdgePadding:(double)arg1;

@end