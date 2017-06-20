/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCaptureManager : NSObject {
    <MTLCaptureScope> * _defaultCaptureScope;
    bool  _isCapturing;
}

@property (retain) <MTLCaptureScope> *defaultCaptureScope;
@property (readonly) bool isCapturing;

+ (id)sharedCaptureManager;

- (void)dealloc;
- (id)defaultCaptureScope;
- (bool)isCapturing;
- (id)newCaptureScopeWithCommandQueue:(id)arg1;
- (id)newCaptureScopeWithDevice:(id)arg1;
- (void)notifySubmissionForEyeSPI:(unsigned long long)arg1 iosurface:(struct __IOSurface { }*)arg2 bounds:(const struct MTLVRTextureBounds { float x1; float x2; float x3; float x4; }*)arg3 submitFlags:(unsigned long long)arg4;
- (void)setDefaultCaptureScope:(id)arg1;
- (void)startCaptureWithCommandQueue:(id)arg1;
- (void)startCaptureWithDevice:(id)arg1;
- (void)startCaptureWithScope:(id)arg1;
- (void)stopCapture;

@end
