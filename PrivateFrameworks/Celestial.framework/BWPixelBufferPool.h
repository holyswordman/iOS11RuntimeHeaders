/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPixelBufferPool : NSObject {
    NSDictionary * _additionalPixelBufferAttributes;
    unsigned long long  _capacity;
    bool  _clientProvidesPool;
    bool  _logAllDrops;
    NSString * _name;
    int  _numConsecutiveDrops;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    NSDictionary * _pixelBufferPoolAuxAttributes;
    int  _pixelBufferPoolCreateError;
    long long  _pixelBufferPoolOnce;
    BWVideoFormat * _videoFormat;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic, readonly) struct __CVPixelBufferPool { }*cvPixelBufferPool;
@property (nonatomic, readonly) struct __CFDictionary { }*cvPixelBufferPoolAuxAttributes;
@property (readonly) NSString *name;

+ (void)initialize;

- (int)_ensurePool;
- (unsigned long long)capacity;
- (struct __CVPixelBufferPool { }*)cvPixelBufferPool;
- (struct __CFDictionary { }*)cvPixelBufferPoolAuxAttributes;
- (void)dealloc;
- (void)enumerateSurfacesUsingBlock:(id /* block */)arg1;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(bool)arg4;
- (id)name;
- (struct __CVBuffer { }*)newPixelBuffer;
- (int)preallocate;
- (void)preallocateWithCompletionHandler:(id /* block */)arg1;
- (void)prefetchWithCompletionHandler:(id /* block */)arg1;
- (void)setCVPixelBufferPool:(struct __CVPixelBufferPool { }*)arg1 attributes:(struct __CFDictionary { }*)arg2;

@end
