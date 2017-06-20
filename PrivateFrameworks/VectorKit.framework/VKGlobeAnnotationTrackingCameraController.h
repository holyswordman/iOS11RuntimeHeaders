/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
    struct Anchor { int (**x1)(); } * _anchor;
    struct { 
        double latitude; 
        double longitude; 
    }  _currentAnimationEndCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    }  _currentAnimationPresentationStartCoordinate;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _currentAnimationStartCoordinate;
    struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct AnchorManagerPrivate {} *x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_3_1; } x_1_2_1; struct Unit<RadianUnitDescription, double> { double x_2_3_1; } x_1_2_2; struct Unit<MeterUnitDescription, double> { double x_3_3_1; } x_1_2_3; } x_10_1_1; struct Unit<MeterUnitDescription, double> { double x_2_2_1; } x_10_1_2; struct Unit<RadianUnitDescription, double> { double x_3_2_1; } x_10_1_3; struct Unit<RadianUnitDescription, double> { double x_4_2_1; } x_10_1_4; struct Unit<RadianUnitDescription, double> { double x_5_2_1; } x_10_1_5; } x10; } * _globeView;
}

@property (nonatomic) struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct AnchorManagerPrivate {} *x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; /* Warning: unhandled struct encoding: '{CameraFrame<geo::Radians' */ struct x10; }*globeView; /* unknown property attribute:  altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[24C]}^{__base<altitude::TextureMap *()>}}}} */

- (struct Matrix<int, 2, 1> { int x1[2]; })_centerCursor;
- (void)_goToAnnotationAnimated:(bool)arg1 duration:(double)arg2 isInitial:(bool)arg3;
- (void)_rotateToHeadingAnimated:(bool)arg1 duration:(double)arg2;
- (void)dealloc;
- (struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct AnchorManagerPrivate {} *x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_3_1; } x_1_2_1; struct Unit<RadianUnitDescription, double> { double x_2_3_1; } x_1_2_2; struct Unit<MeterUnitDescription, double> { double x_3_3_1; } x_1_2_3; } x_10_1_1; struct Unit<MeterUnitDescription, double> { double x_2_2_1; } x_10_1_2; struct Unit<RadianUnitDescription, double> { double x_3_2_1; } x_10_1_3; struct Unit<RadianUnitDescription, double> { double x_4_2_1; } x_10_1_4; struct Unit<RadianUnitDescription, double> { double x_5_2_1; } x_10_1_5; } x10; }*)globeView;
- (id)init;
- (void)setGlobeView:(struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct AnchorManagerPrivate {} *x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_3_1; } x_1_2_1; struct Unit<RadianUnitDescription, double> { double x_2_3_1; } x_1_2_2; struct Unit<MeterUnitDescription, double> { double x_3_3_1; } x_1_2_3; } x_10_1_1; struct Unit<MeterUnitDescription, double> { double x_2_2_1; } x_10_1_2; struct Unit<RadianUnitDescription, double> { double x_3_2_1; } x_10_1_3; struct Unit<RadianUnitDescription, double> { double x_4_2_1; } x_10_1_4; struct Unit<RadianUnitDescription, double> { double x_5_2_1; } x_10_1_5; } x10; }*)arg1;

@end
