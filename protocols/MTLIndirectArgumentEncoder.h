/* Generated by RuntimeBrowser.
 */

@protocol MTLIndirectArgumentEncoder <NSObject>

@required

- (void*)constantDataAtIndex:(unsigned long long)arg1;
- (<MTLDevice> *)device;
- (unsigned long long)encodedLength;
- (NSString *)label;
- (<MTLIndirectArgumentEncoder> *)newIndirectArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
- (void)setBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setIndirectArgumentBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2;
- (void)setLabel:(NSString *)arg1;
- (void)setSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTexture:(id <MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end