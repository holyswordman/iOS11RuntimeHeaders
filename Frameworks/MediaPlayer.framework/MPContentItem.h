/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPContentItem : NSObject {
    MPMediaItemArtwork * _artwork;
    double  _artworkHeightHint;
    double  _artworkWidthHint;
    void * _mrContentItem;
}

@property (nonatomic, retain) MPMediaItemArtwork *artwork;
@property (getter=isContainer, nonatomic) bool container;
@property (getter=isExplicitContent, nonatomic) bool explicitContent;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isPlayable, nonatomic) bool playable;
@property (nonatomic) float playbackProgress;
@property (getter=isStreamingContent, nonatomic) bool streamingContent;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (void)performSuppressingChangeNotifications:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_applyDeferredNotification;
- (id)_initWithMediaRemoteContentItem:(void*)arg1;
- (void)_loadArtwork:(id)arg1 completion:(id /* block */)arg2;
- (void*)_mediaRemoteContentItem;
- (void)_postItemChangedNotification;
- (void)_setArtworkSize:(double)arg1 height:(double)arg2 completion:(id /* block */)arg3;
- (id)artwork;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (bool)isContainer;
- (bool)isExplicitContent;
- (bool)isPlayable;
- (bool)isStreamingContent;
- (float)playbackProgress;
- (void)setArtwork:(id)arg1;
- (void)setContainer:(bool)arg1;
- (void)setExplicitContent:(bool)arg1;
- (void)setPlayable:(bool)arg1;
- (void)setPlaybackProgress:(float)arg1;
- (void)setStreamingContent:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
