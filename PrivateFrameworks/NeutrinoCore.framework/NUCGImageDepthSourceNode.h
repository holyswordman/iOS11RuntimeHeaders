/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUCGImageDepthSourceNode : NUSourceNode {
    struct { 
        long long width; 
        long long height; 
    }  _aspectMatchedPixelSize;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _aspectTransform;
    NUCGAuxiliaryImageProperties * _depthImageProperties;
    bool  _needsAspectRatioCorrection;
    NUCGImageSourceNode * _sourceNode;
}

@property (retain) NUCGImageSourceNode *sourceNode;

- (void).cxx_destruct;
- (id)_evaluateDepthData:(out id*)arg1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (bool)canPropagateOriginalDepthData;
- (id)initWithSettings:(id)arg1;
- (id)initWithSourceNode:(id)arg1 depthImageProperties:(id)arg2;
- (id)pipelineOptionsForPipelineState:(id)arg1 error:(out id*)arg2;
- (struct { long long x1; long long x2; })pixelSize;
- (void)setSourceNode:(id)arg1;
- (id)sourceNode;
- (long long)sourceOrientation;

@end
