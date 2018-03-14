/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAFilterInfimumConvolution : NSObject {
    <MTLDevice> * _device;
    unsigned long long  _height;
    <MTLComputePipelineState> * _infimumConvolutionKernel;
    <MTLComputePipelineState> * _infimumKernel;
    <MTLLibrary> * _library;
    <MTLTexture> * _tmpBlurHalf;
    <MTLTexture> * _tmpOutHalf;
    unsigned long long  _width;
}

- (void).cxx_destruct;
- (void)encodeInfimumToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 smallSourceTexture:(id)arg3 destinationTexture:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 smallSourceTexture:(id)arg3 destinationTexture:(id)arg4 orientation:(float)arg5 majorRadius:(float)arg6 minorRadius:(float)arg7 iterations:(unsigned int)arg8;
- (void)encodeToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 config:(struct InfimumConvolutionConfig { struct Point { float x_1_1_1; float x_1_1_2; } x1; struct Point { float x_2_1_1; float x_2_1_2; } x2; struct Point { float x_3_1_1; float x_3_1_2; } x3; struct Point { float x_4_1_1; float x_4_1_2; } x4; })arg4;
- (id)initWithDevice:(id)arg1 library:(id)arg2 bufferWidth:(unsigned long long)arg3 bufferHeight:(unsigned long long)arg4;

@end