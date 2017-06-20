/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKBuildingTile : VKSkewingVectorTile {
    float  _alpha;
    VKAnimation * _animation;
    VKAnimation * _animationForPitch;
    struct CullingGridWithHeight { 
        float _heights[16]; 
    }  _cullingGrid;
    struct vector<std::__1::shared_ptr<ggl::Texture2D>, std::__1::allocator<std::__1::shared_ptr<ggl::Texture2D> > > { 
        struct shared_ptr<ggl::Texture2D> {} *__begin_; 
        struct shared_ptr<ggl::Texture2D> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<ggl::Texture2D> *, std::__1::allocator<std::__1::shared_ptr<ggl::Texture2D> > > { 
            struct shared_ptr<ggl::Texture2D> {} *__first_; 
        } __end_cap_; 
    }  _facadeTextures;
    struct FogInfo { 
        struct shared_ptr<ggl::ConstantDataTyped<ggl::Fog::Skyfog> > { 
            struct ConstantDataTyped<ggl::Fog::Skyfog> {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } _fogConstantData; 
    }  _fogInfo;
    double  _maxHeight;
    float  _maxLayeringHeight;
    float  _minLayeringHeight;
    VK3DObjectSubTile * _objectSubTile;
    NSMutableArray * _polygonGroups;
    float  _scale;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _shadowModelMatrix;
    struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> > { 
        struct __compressed_pair<ggl::Texture2D *, std::__1::default_delete<ggl::Texture2D> > { 
            struct Texture2D {} *__first_; 
        } __ptr_; 
    }  _shadowTexture;
    struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { 
        struct ConstantDataTyped<ggl::Tile::View> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _shadowViewConstantData;
}

@property (nonatomic) float alpha;
@property (nonatomic, retain) VKAnimation *animation;
@property (nonatomic, retain) VKAnimation *animationForPitch;
@property (nonatomic, readonly) struct CullingGridWithHeight { float x1[16]; } cullingGrid;
@property (nonatomic, readonly) struct FogInfo { struct shared_ptr<ggl::ConstantDataTyped<ggl::Fog::Skyfog> > { struct ConstantDataTyped<ggl::Fog::Skyfog> {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*fogInfo;
@property (nonatomic, readonly) double maxHeight;
@property (nonatomic, readonly) float maxLayeringHeight;
@property (nonatomic, readonly) float minLayeringHeight;
@property (nonatomic, readonly) VK3DObjectSubTile *objectSubTile;
@property (nonatomic) float scale;
@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*shadowTexture;
@property (nonatomic, readonly) struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x1; struct __shared_weak_count {} *x2; } shadowViewConstantData;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_blurTexture:(char *)arg1;
- (void)_buildShadowTexture;
- (void)_fillShadowAreasInContext:(struct CGContext { }*)arg1 data:(char *)arg2;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })_shadowBounds;
- (float)alpha;
- (id)animation;
- (id)animationForPitch;
- (void)buildMeshesWithTriangulator:(id)arg1 device:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg2 prepareExtrusion:(bool)arg3;
- (void)confirmBuildingSuppression:(struct { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; bool x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; unsigned char x_1_1_17; bool x_1_1_18; unsigned char x_1_1_19; struct _NSRange { unsigned long long x_20_2_1; unsigned long long x_20_2_2; } x_1_1_20; bool x_1_1_21; } x1; }*)arg1;
- (struct CullingGridWithHeight { float x1[16]; })cullingGrid;
- (void)dealloc;
- (const struct vector<std::__1::shared_ptr<ggl::Texture2D>, std::__1::allocator<std::__1::shared_ptr<ggl::Texture2D> > > { struct shared_ptr<ggl::Texture2D> {} *x1; struct shared_ptr<ggl::Texture2D> {} *x2; struct __compressed_pair<std::__1::shared_ptr<ggl::Texture2D> *, std::__1::allocator<std::__1::shared_ptr<ggl::Texture2D> > > { struct shared_ptr<ggl::Texture2D> {} *x_3_1_1; } x3; }*)facadeTextures;
- (struct FogInfo { struct shared_ptr<ggl::ConstantDataTyped<ggl::Fog::Skyfog> > { struct ConstantDataTyped<ggl::Fog::Skyfog> {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)fogInfo;
- (bool)heightAtPoint:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 outZ:(float*)arg2;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 prepareExtrusion:(bool)arg3 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg7;
- (double)maxHeight;
- (float)maxLayeringHeight;
- (float)minLayeringHeight;
- (unsigned long long)numberOfFacadeTextures;
- (id)objectSubTile;
- (id)polygonGroupsForTextureAtIndex:(unsigned long long)arg1;
- (float)scale;
- (void)setAlpha:(float)arg1;
- (void)setAnimation:(id)arg1;
- (void)setAnimationForPitch:(id)arg1;
- (void)setScale:(float)arg1;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*)shadowTexture;
- (struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x1; struct __shared_weak_count {} *x2; })shadowViewConstantData;
- (void)updateViewDependentStateIfNecessaryWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;
- (void)updateViewDependentStateWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1;
- (void)updateWithStyleManager:(const struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; }*)arg1;

@end
