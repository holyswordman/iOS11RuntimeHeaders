/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor {
    struct MTLSamplerDescriptorPrivate { 
        union { 
            struct { 
                unsigned int minFilter : 2; 
                unsigned int magFilter : 2; 
                unsigned int mipFilter : 2; 
                unsigned int sAddressMode : 3; 
                unsigned int tAddressMode : 3; 
                unsigned int rAddressMode : 3; 
                unsigned int normalizedCoords : 1; 
                unsigned int lodAverage : 1; 
                unsigned int compareFunction : 3; 
            } ; 
            unsigned int miscHash; 
        } ; 
        union { 
            unsigned int lodMinClampHash; 
            float lodMinClamp; 
        } ; 
        union { 
            unsigned int lodMaxClampHash; 
            float lodMaxClamp; 
        } ; 
        union { 
            unsigned int lodBiasHash; 
            float lodBias; 
        } ; 
        unsigned long long maxAnisotropy; 
        NSString *label; 
    }  _private;
}

- (unsigned long long)compareFunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (const /* Warning: unhandled struct encoding: '{MTLSamplerDescriptorPrivate=(?={?=b2b2b2b3b3b3b1b1b3}I)(?=If)(?=If)(?=If)Q@}' */ struct MTLSamplerDescriptorPrivate { union { struct { unsigned int x_1_2_1 : 2; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3 : 2; unsigned int x_1_2_4 : 3; unsigned int x_1_2_5 : 3; unsigned int x_1_2_6 : 3; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 3; } x_1_1_1; unsigned int x_1_1_2; } x1; union { unsigned int x_2_1_1; float x_2_1_2; } x2; union { unsigned int x_3_1_1; float x_3_1_2; } x3; union { unsigned int x_4_1_1; float x_4_1_2; } x4; unsigned long long x5; id x6; }*)descriptorPrivate;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)label;
- (bool)lodAverage;
- (float)lodBias;
- (float)lodMaxClamp;
- (float)lodMinClamp;
- (unsigned long long)magFilter;
- (unsigned long long)maxAnisotropy;
- (unsigned long long)minFilter;
- (unsigned long long)mipFilter;
- (bool)normalizedCoordinates;
- (unsigned long long)rAddressMode;
- (unsigned long long)sAddressMode;
- (void)setCompareFunction:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setLodAverage:(bool)arg1;
- (void)setLodBias:(float)arg1;
- (void)setLodMaxClamp:(float)arg1;
- (void)setLodMinClamp:(float)arg1;
- (void)setMagFilter:(unsigned long long)arg1;
- (void)setMaxAnisotropy:(unsigned long long)arg1;
- (void)setMinFilter:(unsigned long long)arg1;
- (void)setMipFilter:(unsigned long long)arg1;
- (void)setNormalizedCoordinates:(bool)arg1;
- (void)setRAddressMode:(unsigned long long)arg1;
- (void)setSAddressMode:(unsigned long long)arg1;
- (void)setTAddressMode:(unsigned long long)arg1;
- (unsigned long long)tAddressMode;

@end
