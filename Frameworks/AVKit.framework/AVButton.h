/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVButton : UIButton {
    bool  _collapsed;
    bool  _disablesHighlightWhenLongPressed;
    struct CGSize { 
        double width; 
        double height; 
    }  _extrinsicContentSize;
    double  _force;
    double  _forceThreshold;
    NSString * _fullScreenAlternateImageName;
    NSString * _fullScreenImageName;
    bool  _hasAlternateAppearance;
    bool  _hasFullScreenAppearance;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitRectInsets;
    double  _horizontalTranslationOfLongPress;
    NSString * _imageName;
    bool  _included;
    NSString * _inlineAlternateImageName;
    NSString * _inlineImageName;
    NSTimer * _longPressTimer;
    double  _maximumForceSinceTrackingBegan;
    AVMicaPackage * _micaPackage;
    NSNumber * _previousHorizontalPositionOfLongPress;
    double  _trackingStartTime;
    bool  _treatsForcePressAsLongPress;
    bool  _wasForcePressTriggered;
    bool  _wasLongPressed;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedOrExcluded, nonatomic, readonly) bool collapsedOrExcluded;
@property (nonatomic) bool disablesHighlightWhenLongPressed;
@property (nonatomic) struct CGSize { double x1; double x2; } extrinsicContentSize;
@property (nonatomic) double force;
@property (nonatomic) double forceThreshold;
@property (nonatomic, copy) NSString *fullScreenAlternateImageName;
@property (nonatomic, copy) NSString *fullScreenImageName;
@property (nonatomic) bool hasAlternateAppearance;
@property (nonatomic) bool hasFullScreenAppearance;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitRectInsets;
@property (nonatomic) double horizontalTranslationOfLongPress;
@property (nonatomic, copy) NSString *imageName;
@property (getter=isIncluded, nonatomic) bool included;
@property (nonatomic, copy) NSString *inlineAlternateImageName;
@property (nonatomic, copy) NSString *inlineImageName;
@property (nonatomic) NSTimer *longPressTimer;
@property (nonatomic) double maximumForceSinceTrackingBegan;
@property (nonatomic, retain) AVMicaPackage *micaPackage;
@property (nonatomic, retain) NSNumber *previousHorizontalPositionOfLongPress;
@property (nonatomic) double trackingStartTime;
@property (nonatomic) bool treatsForcePressAsLongPress;
@property (nonatomic) bool wasForcePressTriggered;
@property (nonatomic) bool wasLongPressed;

+ (id)buttonWithAccessibilityIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_animateHighlightAndImageCrossFadeIfNeeded;
- (id)_availabilityObserver;
- (id)_preferredImageName;
- (void)_resetTrackedState;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)disablesHighlightWhenLongPressed;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (double)force;
- (double)forceThreshold;
- (id)fullScreenAlternateImageName;
- (id)fullScreenImageName;
- (bool)hasAlternateAppearance;
- (bool)hasFullScreenAppearance;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitRectInsets;
- (double)horizontalTranslationOfLongPress;
- (id)imageName;
- (id)inlineAlternateImageName;
- (id)inlineImageName;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isIncluded;
- (void)layoutSubviews;
- (id)longPressTimer;
- (double)maximumForceSinceTrackingBegan;
- (id)micaPackage;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)previousHorizontalPositionOfLongPress;
- (void)setCollapsed:(bool)arg1;
- (void)setDisablesHighlightWhenLongPressed:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setForce:(double)arg1;
- (void)setForceThreshold:(double)arg1;
- (void)setFullScreenAlternateImageName:(id)arg1;
- (void)setFullScreenImageName:(id)arg1;
- (void)setHasAlternateAppearance:(bool)arg1;
- (void)setHasFullScreenAppearance:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHitRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHorizontalTranslationOfLongPress:(double)arg1;
- (void)setImageName:(id)arg1;
- (void)setIncluded:(bool)arg1;
- (void)setInlineAlternateImageName:(id)arg1;
- (void)setInlineImageName:(id)arg1;
- (void)setLongPressTimer:(id)arg1;
- (void)setMaximumForceSinceTrackingBegan:(double)arg1;
- (void)setMicaPackage:(id)arg1;
- (void)setPreviousHorizontalPositionOfLongPress:(id)arg1;
- (void)setTrackingStartTime:(double)arg1;
- (void)setTreatsForcePressAsLongPress:(bool)arg1;
- (void)setWasForcePressTriggered:(bool)arg1;
- (void)setWasLongPressed:(bool)arg1;
- (double)trackingStartTime;
- (bool)treatsForcePressAsLongPress;
- (bool)wasForcePressTriggered;
- (bool)wasLongPressed;

@end
