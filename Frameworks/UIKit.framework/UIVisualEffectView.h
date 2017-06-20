/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVisualEffectView : UIView <NSSecureCoding> {
    bool  __useKeyframeWorkaround;
    double  _backdropViewBackgroundColorAlpha;
    NSArray * _backgroundEffects;
    _UIVisualEffectHost * _backgroundHost;
    bool  _backgroundHostNeedsUpdate;
    _UIVisualEffectViewBackdropCaptureGroup * _captureGroup;
    NSArray * _contentEffects;
    _UIVisualEffectHost * _contentHost;
    bool  _contentHostNeedsUpdate;
    double  _cornerRadius;
    UIVisualEffect * _effect;
    struct { 
        unsigned int suppressReportingEmptyContentView : 1; 
        unsigned int cornerRadiusIsContinuous : 1; 
    }  _effectViewFlags;
    UIImage * _maskImage;
    UIView * _maskView;
    bool  _noiseEnabled;
    bool  _useLiveMasking;
    bool  _useReducedTransparencyForContentHost;
}

@property (getter=_backdropViewBackgroundColorAlpha, setter=_setBackdropViewBackgroundColorAlpha:, nonatomic) double _backdropViewBackgroundColorAlpha;
@property (setter=_setCornerRadius:, nonatomic) double _cornerRadius;
@property (setter=_setGroupName:, nonatomic, copy) NSString *_groupName;
@property (setter=_setMaskImage:, nonatomic, retain) UIImage *_maskImage;
@property (setter=_setUseKeyframeWorkaround:, nonatomic) bool _useKeyframeWorkaround;
@property (nonatomic, copy) NSArray *backgroundEffects;
@property (nonatomic, copy) NSArray *contentEffects;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, copy) UIVisualEffect *effect;
@property (getter=_useLiveMasking, setter=_setUseLiveMasking:, nonatomic) bool useLiveMasking;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (bool)supportsSecureCoding;

- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)_applyCornerRadiusToSubviews;
- (id)_backdropSubview;
- (double)_backdropViewBackgroundColorAlpha;
- (id)_backgroundHost;
- (void)_commonInit;
- (void)_configureAllEffects;
- (void)_configureEffects;
- (id)_contentHost;
- (double)_continuousCornerRadius;
- (double)_cornerRadius;
- (id)_debug;
- (id)_effectNodeForEffects:(id)arg1 traits:(id)arg2 options:(id)arg3;
- (void)_ensureBackgroundHost;
- (void)_ensureContentHostWithView:(id)arg1;
- (void)_generateAnimationsForPendingKeyframes:(id)arg1 duration:(double)arg2;
- (void)_generateWorkaroundKeyframeAnimationsForEffects:(id)arg1;
- (id)_groupName;
- (bool)_hasTransformForEffectSubview:(id)arg1;
- (id)_initialValueForKey:(id)arg1;
- (bool)_isNoiseEnabled;
- (id)_maskImage;
- (id)_maskImageForMaskView:(id)arg1;
- (id)_maskView;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setBackdropViewBackgroundColorAlpha:(double)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setEffect:(id)arg1;
- (void)_setGroupName:(id)arg1;
- (void)_setMaskImage:(id)arg1;
- (void)_setMaskView:(id)arg1;
- (void)_setNoiseEnabled:(bool)arg1;
- (void)_setTintOpacity:(double)arg1;
- (void)_setUseKeyframeWorkaround:(bool)arg1;
- (void)_setUseLiveMasking:(bool)arg1;
- (bool)_shouldManageCornerRadiusForEffectSubview:(id)arg1;
- (void)_updateEffectForAccessibilityChanges:(id)arg1;
- (void)_updateEffectForSnapshotDidEnd:(id)arg1;
- (void)_updateEffectForSnapshotWillBegin:(id)arg1;
- (void)_updateEffectsFromLegacyEffect;
- (void)_updateSubviews;
- (bool)_useKeyframeWorkaround;
- (bool)_useLiveMasking;
- (id)_whatsWrongWithThisEffect;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void).cxx_destruct;
- (id)backgroundEffects;
- (id)contentEffects;
- (id)contentView;
- (void)dealloc;
- (id)effect;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundEffects:(id)arg1;
- (void)setContentEffects:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidMoveToSuperview;

@end
