/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRMipmapLevel : NSObject <NSCopying> {
    NSMutableArray * _elements;
    unsigned long long  _level;
}

@property (readonly) NSArray *elements;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)elements;
- (id)initAsLevel:(unsigned long long)arg1 arrayLength:(unsigned long long)arg2 cubemap:(bool)arg3 dataSourceProvider:(id)arg4;
- (id)initAsLevel:(void *)arg1 dimensions:(void *)arg2 pixelFormat:(void *)arg3 alphaInfo:(void *)arg4 arrayLength:(void *)arg5 cubemap:(void *)arg6 bufferAllocator:(void *)arg7; // needs 7 arg types, found 6: unsigned long long, unsigned long long, unsigned long long, unsigned long long, bool, id
- (void)setImage:(id)arg1 atElement:(unsigned long long)arg2 atFace:(unsigned long long)arg3;

@end
