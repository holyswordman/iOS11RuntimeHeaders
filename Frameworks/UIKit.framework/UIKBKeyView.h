/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBKeyView : UIView <UIKBCacheableView> {
    struct CGColor { } * _activeBackgroundColor;
    id  _activeCompositingFilter;
    int  _cachedAnchorCorner;
    bool  _cachedControlKeyRenderingPreference;
    long long  _cachedSelector;
    unsigned long long  _cachedShiftState;
    NSString * _cachedTraitsHashString;
    double  _endingTransitionDuration;
    NSMutableDictionary * _keyLayers;
    UIKeyboardMenuView * _popupMenu;
    bool  _renderAsMask;
    int  _renderedKeyState;
    bool  _singleRerender;
    struct __CFBoolean { } * m_allowsCaching;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_drawFrame;
    UIKBRenderFactory * m_factory;
    UIKBTree * m_key;
    UIKBTree * m_keyplane;
    UIKBRenderConfig * m_renderConfig;
}

@property (nonatomic, readonly) bool cacheDeferable;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic) int cachedAnchorCorner;
@property (nonatomic) bool cachedControlKeyRenderingPreference;
@property (readonly) long long cachedRenderFlags;
@property (nonatomic) long long cachedSelector;
@property (nonatomic) unsigned long long cachedShiftState;
@property (nonatomic, retain) NSString *cachedTraitsHashString;
@property (nonatomic, readonly) double cachedWidth;
@property (nonatomic, readonly) UIKBKeyView *contentsKeyView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } displayInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } drawFrame;
@property (nonatomic) double endingTransitionDuration;
@property (nonatomic, retain) UIKBRenderFactory *factory;
@property (nonatomic, readonly) bool hasRendered;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keepNonPersistent;
@property (nonatomic, readonly) UIKBTree *key;
@property (nonatomic, readonly) UIKBTree *keyplane;
@property (nonatomic) UIKeyboardMenuView *popupMenu;
@property (nonatomic) bool renderAsMask;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } variantFrame;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void)_applyAppearanceInvocations;
- (bool)_canDrawContent;
- (id)_generateBackdropMaskImage;
- (void)_populateLayer:(id)arg1 withContents:(id)arg2;
- (bool)_shouldUpdateLayers;
- (bool)_viewShouldBeOpaque;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (bool)allowBackgroundCachingForRenderFlags:(long long)arg1;
- (bool)cacheDeferable;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (int)cachedAnchorCorner;
- (bool)cachedControlKeyRenderingPreference;
- (long long)cachedRenderFlags;
- (long long)cachedSelector;
- (unsigned long long)cachedShiftState;
- (id)cachedTraitsHashString;
- (double)cachedWidth;
- (void)changeBackgroundToActiveIfNecessary;
- (void)changeBackgroundToEnabled;
- (id)contentsKeyView;
- (void)dealloc;
- (long long)didInputSubTree:(id)arg1;
- (void)dimKeys:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })displayInsets;
- (void)displayLayer:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawFrame;
- (double)endingTransitionDuration;
- (id)factory;
- (unsigned long long)focusableVariantCount;
- (bool)hasRendered;
- (long long)imageOrientationForLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (bool)keepNonPersistent;
- (id)key;
- (id)keyplane;
- (id)layerForRenderFlags:(long long)arg1;
- (id)popupMenu;
- (void)prepareForDisplay;
- (void)removeFromSuperview;
- (bool)renderAsMask;
- (id)renderConfig;
- (id)renderFlagsForTraits:(id)arg1;
- (bool)requiresSublayers;
- (void)setCachedAnchorCorner:(int)arg1;
- (void)setCachedControlKeyRenderingPreference:(bool)arg1;
- (void)setCachedSelector:(long long)arg1;
- (void)setCachedShiftState:(unsigned long long)arg1;
- (void)setCachedTraitsHashString:(id)arg1;
- (void)setDrawFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEndingTransitionDuration:(double)arg1;
- (void)setFactory:(id)arg1;
- (void)setPopupMenu:(id)arg1;
- (void)setRenderAsMask:(bool)arg1;
- (void)setRenderConfig:(id)arg1;
- (id)subTreeHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (int)textEffectsVisibilityLevel;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })variantFrame;
- (void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(id /* block */)arg3;

@end
