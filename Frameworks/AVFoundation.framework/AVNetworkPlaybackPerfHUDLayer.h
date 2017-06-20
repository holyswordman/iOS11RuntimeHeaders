/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer {
    int  _colorId;
    int  _fontSizeInt;
    NSObject<OS_dispatch_source> * _hudTimer;
    unsigned long long  _hudUpdateInterval;
    int  _hudXoffset;
    int  _hudYoffset;
    NSMutableDictionary * _loadingStatusCache;
    double  _opacity;
    AVPlayer * _player;
    long long  _prevStallCount;
    long long  _prevVariantIdx;
    bool  _showCompleteURI;
    bool  _showHud;
    long long  _totalStallCount;
    bool  _updateUISettings;
}

+ (id)convertBitrate:(double)arg1;
+ (bool)runningAnInternalBuild;

- (void)_hudUpdate;
- (void)currentItemChanged;
- (void)currentItemTracksChanged;
- (void)dealloc;
- (void)getHudSetting;
- (float)getScaleFactorForDisplaySize:(struct CGSize { double x1; double x2; })arg1;
- (id)getTrackFormatDesc:(id)arg1;
- (bool)hudEnabled;
- (id)init;
- (void)readHudSettingsAndCallCompletionHandler:(id /* block */)arg1;
- (void)setColor:(int)arg1;
- (void)setPlayer:(id)arg1;
- (void)startDispatchTimer;
- (void)updateBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)valueLoadedForKey:(id)arg1 onObject:(id)arg2;

@end
