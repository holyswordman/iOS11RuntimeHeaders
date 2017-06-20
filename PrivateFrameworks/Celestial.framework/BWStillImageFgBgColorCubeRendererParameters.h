/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageFgBgColorCubeRendererParameters : NSObject <BWFilterRendererParameters> {
    NSData * _backgroundColorLookupTable;
    CIFilter * _colorFilter;
    BWColorLookupCache * _colorLookupCache;
    NSData * _foregroundColorLookupTable;
    bool  _requiresDepthEffectForColorFilters;
}

@property (nonatomic, retain) NSData *backgroundColorLookupTable;
@property (nonatomic, retain) CIFilter *colorFilter;
@property (nonatomic, readonly, retain) BWColorLookupCache *colorLookupCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *foregroundColorLookupTable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool requiresDepthEffectForColorFilters;
@property (readonly) Class superclass;
@property (nonatomic, readonly) short type;

+ (void)initialize;

- (void)_ensureParametersForColorFilter:(id)arg1 outputRequiresDepthEffectEnabled:(bool*)arg2;
- (id)backgroundColorLookupTable;
- (id)colorFilter;
- (id)colorLookupCache;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)foregroundColorLookupTable;
- (id)init;
- (id)initWithColorFilter:(id)arg1 colorLookupCache:(id)arg2;
- (int)prepareForRenderingWithInputVideoFormat:(id)arg1;
- (bool)requiresDepthEffectForColorFilters;
- (void)setBackgroundColorLookupTable:(id)arg1;
- (void)setColorFilter:(id)arg1;
- (void)setForegroundColorLookupTable:(id)arg1;
- (short)type;
- (void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3;

@end
