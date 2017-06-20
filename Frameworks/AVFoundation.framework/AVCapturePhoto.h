/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePhoto : NSObject {
    AVCapturePhotoInternal * _internal;
}

@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) AVDepthData *depthData;
@property (readonly) NSDictionary *embeddedThumbnailPhotoFormat;
@property (readonly) NSDictionary *metadata;
@property (readonly) long long photoCount;
@property (readonly) struct __CVBuffer { }*pixelBuffer;
@property (readonly) struct __CVBuffer { }*previewPixelBuffer;
@property (getter=isRawPhoto, readonly) bool rawPhoto;
@property (readonly) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (readonly) NSString *sourceDeviceType;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

- (struct CGImage { }*)CGImageRepresentation;
- (struct __CVBuffer { }*)_embeddedThumbnailSourcePixelBuffer;
- (id)bracketSettings;
- (id)cameraCalibrationData;
- (void)dealloc;
- (id)debugDescription;
- (id)depthData;
- (id)description;
- (id)embeddedThumbnailPhotoFormat;
- (id)fileDataRepresentation;
- (id)fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer { }*)arg3 replacementDepthData:(id)arg4;
- (id)initWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 photoSurface:(struct __IOSurface { }*)arg2 photoSurfaceSize:(unsigned long long)arg3 previewPhotoSurface:(struct __IOSurface { }*)arg4 metadata:(id)arg5 depthDataSurface:(struct __IOSurface { }*)arg6 depthMetadataDictionary:(id)arg7 captureRequest:(id)arg8 bracketSettings:(id)arg9 sequenceCount:(unsigned long long)arg10 photoCount:(unsigned long long)arg11 sourceDeviceType:(id)arg12;
- (bool)isRawPhoto;
- (long long)lensStabilizationStatus;
- (id)livePhotoMovieFileURL;
- (id)metadata;
- (long long)photoCount;
- (unsigned int)photoProcessingFlags;
- (struct __CVBuffer { }*)pixelBuffer;
- (id)portraitMetadata;
- (struct CGImage { }*)previewCGImageRepresentation;
- (struct __CVBuffer { }*)previewPixelBuffer;
- (id)resolvedSettings;
- (long long)sequenceCount;
- (id)sourceDeviceType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end
