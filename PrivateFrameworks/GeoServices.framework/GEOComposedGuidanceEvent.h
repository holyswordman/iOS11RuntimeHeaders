/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedGuidanceEvent : NSObject {
    bool  _clampToStep;
    unsigned long long  _creationOrder;
    double  _distanceForStrings;
    double  _endValidDistance;
    GEOGuidanceEvent * _guidanceEvent;
    NSMutableArray * _lanes;
    GEOJunction * _maneuverJunction;
    double  _referencePointDistance;
    GEOComposedRoute * _route;
    double  _startValidDistance;
    unsigned long long  _stepIndex;
    NSUUID * _uniqueID;
}

@property (nonatomic, readonly) NSArray *announcements;
@property (nonatomic, readonly) int composedGuidanceEventType;
@property (nonatomic, readonly) double distanceForStrings;
@property (nonatomic, readonly) int drivingSide;
@property (nonatomic, readonly) double endValidDistance;
@property (nonatomic, readonly) NSString *exclusiveSetIdentifier;
@property (nonatomic, retain) GEOGuidanceEvent *guidanceEvent;
@property (nonatomic, readonly) bool hasHaptics;
@property (nonatomic, readonly) bool hasSignGuidance;
@property (nonatomic, readonly) bool hasSpokenGuidance;
@property (nonatomic, readonly) bool isLaneGuidanceForManeuver;
@property (nonatomic, readonly) NSArray *laneInstructions;
@property (nonatomic, readonly) NSArray *lanes;
@property (nonatomic, readonly) int maneuverArrow;
@property (nonatomic, readonly) GEOJunction *maneuverJunction;
@property (nonatomic, readonly) unsigned long long numChainedAnnouncements;
@property (nonatomic, readonly) double referencePointDistance;
@property (nonatomic, readonly) double repetitionInterval;
@property (nonatomic, readonly) GEONameInfo *shieldInfo;
@property (nonatomic, readonly) NSArray *signDetails;
@property (nonatomic, readonly) NSArray *signTitles;
@property (nonatomic, readonly) unsigned long long stackRanking;
@property (nonatomic, readonly) double startValidDistance;
@property (nonatomic, readonly) GEOComposedRouteStep *step;
@property (nonatomic, readonly) NSUUID *uniqueID;

- (void).cxx_destruct;
- (void)_commonInitWithComposedRoute:(id)arg1;
- (void)_lazyInit;
- (bool)_needsLazyInit;
- (id)announcements;
- (long long)compare:(id)arg1;
- (long long)compareFactoringInSpeed:(id)arg1 speed:(double)arg2;
- (long long)comparePriority:(id)arg1;
- (int)composedGuidanceEventType;
- (id)description;
- (double)desiredTimeGapToEvent:(id)arg1 chained:(bool)arg2;
- (double)distanceForStrings;
- (int)drivingSide;
- (double)endDistanceForSpeed:(double)arg1;
- (double)endValidDistance;
- (id)exclusiveSetIdentifier;
- (id)guidanceEvent;
- (bool)hasHaptics;
- (bool)hasSignGuidance;
- (bool)hasSpokenGuidance;
- (id)initWithGuidanceEvent:(id)arg1 stepIndex:(unsigned long long)arg2 composedRoute:(id)arg3 clampToStep:(bool)arg4;
- (bool)isLaneGuidanceForManeuver;
- (bool)isValidForSpeed:(double)arg1;
- (id)laneInstructions;
- (id)lanes;
- (int)maneuverArrow;
- (id)maneuverJunction;
- (unsigned long long)numChainedAnnouncements;
- (double)referencePointDistance;
- (double)repetitionInterval;
- (void)setGuidanceEvent:(id)arg1;
- (id)shieldInfo;
- (id)signDetails;
- (id)signTitles;
- (unsigned long long)stackRanking;
- (double)startDistanceForSpeed:(double)arg1;
- (double)startValidDistance;
- (id)step;
- (double)triggerDistanceForSpeed:(double)arg1 andDuration:(id /* block */)arg2;
- (id)uniqueID;

@end
