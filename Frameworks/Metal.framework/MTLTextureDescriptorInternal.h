/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLTextureDescriptorInternal : MTLTextureDescriptor {
    struct MTLTextureDescriptorPrivate { 
        unsigned long long textureType; 
        unsigned long long pixelFormat; 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
        unsigned long long mipmapLevelCount; 
        unsigned long long sampleCount; 
        unsigned long long arrayLength; 
        bool zeroFill; 
        unsigned long long rotation; 
        bool framebufferOnly; 
        bool isDrawable; 
        unsigned long long swizzle; 
        unsigned long long compressionMode; 
        union { 
            unsigned long long textureUsage; 
            unsigned long long usage; 
        } ; 
        unsigned long long cpuCacheMode; 
        unsigned long long storageMode; 
        unsigned long long resourceOptions; 
        unsigned long long resolvedUsage; 
    }  _private;
}

- (unsigned long long)arrayLength;
- (unsigned long long)compressionMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)depth;
- (id)description;
- (const struct MTLTextureDescriptorPrivate { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; bool x9; unsigned long long x10; bool x11; bool x12; unsigned long long x13; unsigned long long x14; union { unsigned long long x_15_1_1; unsigned long long x_15_1_2; } x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; }*)descriptorPrivate;
- (id)formattedDescription:(unsigned long long)arg1;
- (bool)framebufferOnly;
- (unsigned long long)getSwizzle;
- (unsigned long long)hash;
- (unsigned long long)height;
- (id)init;
- (bool)isDrawable;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mipmapLevelCount;
- (unsigned long long)pixelFormat;
- (unsigned long long)resourceOptions;
- (unsigned long long)rotation;
- (unsigned long long)sampleCount;
- (void)setArrayLength:(unsigned long long)arg1;
- (void)setCompressionMode:(unsigned long long)arg1;
- (void)setCpuCacheMode:(unsigned long long)arg1;
- (void)setDepth:(unsigned long long)arg1;
- (void)setFramebufferOnly:(bool)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setIsDrawable:(bool)arg1;
- (void)setMipmapLevelCount:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setResourceOptions:(unsigned long long)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setStorageMode:(unsigned long long)arg1;
- (void)setSwizzle:(unsigned long long)arg1;
- (void)setSwizzleAlpha:(unsigned long long)arg1;
- (void)setSwizzleBlue:(unsigned long long)arg1;
- (void)setSwizzleGreen:(unsigned long long)arg1;
- (void)setSwizzleRed:(unsigned long long)arg1;
- (void)setTextureType:(unsigned long long)arg1;
- (void)setTextureUsage:(unsigned long long)arg1;
- (void)setUsage:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)storageMode;
- (unsigned long long)swizzleAlpha;
- (unsigned long long)swizzleBlue;
- (unsigned long long)swizzleGreen;
- (unsigned long long)swizzleRed;
- (unsigned long long)textureType;
- (unsigned long long)textureUsage;
- (unsigned long long)usage;
- (bool)validateWithDevice:(id)arg1;
- (unsigned long long)width;

@end
