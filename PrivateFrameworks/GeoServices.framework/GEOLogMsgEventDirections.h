/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventDirections : PBCodable <NSCopying> {
    bool  _arrivedAtDestination;
    NSMutableArray * _directionsFeedbacks;
    NSMutableArray * _durationInNavigationModes;
    double  _durationOfTrip;
    GEOLocation * _finalLocation;
    struct { 
        unsigned int navigationAudioFeedback : 1; 
        unsigned int navSessionId : 1; 
        unsigned int durationOfTrip : 1; 
        unsigned int arrivedAtDestination : 1; 
    }  _has;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _navSessionId;
    struct GEONavigationAudioFeedback { 
        int _currentRouteTypeAtEndOfNav; 
        unsigned int _manuallyChangedRouteCount; 
        unsigned int _manuallyDisabledHFPCount; 
        unsigned int _manuallyEnabledHFPCount; 
        unsigned int _spokenPromptsCount; 
        bool _bTHFPAvailableAtEndOfNav; 
        bool _bTHFPRoutesAvailable; 
        bool _currentRouteHFPEnabledAtEndOfNav; 
        bool _everManuallyChangedRoute; 
        bool _everManuallyEnabledHFPRoute; 
        bool _everViewedAudioSheet; 
        bool _everViewedAudioSheetBTAny; 
        bool _everViewedAudioSheetBTHFP; 
        bool _pauseSpokenAudioEnabled; 
        bool _viewedAudioSheet; 
        bool _viewedAudioSheetBTAny; 
        bool _viewedAudioSheetBTHFP; 
        bool _wirelessRoutesAvailable; 
        struct { 
            unsigned int currentRouteTypeAtEndOfNav : 1; 
            unsigned int manuallyChangedRouteCount : 1; 
            unsigned int manuallyDisabledHFPCount : 1; 
            unsigned int manuallyEnabledHFPCount : 1; 
            unsigned int spokenPromptsCount : 1; 
            unsigned int bTHFPAvailableAtEndOfNav : 1; 
            unsigned int bTHFPRoutesAvailable : 1; 
            unsigned int currentRouteHFPEnabledAtEndOfNav : 1; 
            unsigned int everManuallyChangedRoute : 1; 
            unsigned int everManuallyEnabledHFPRoute : 1; 
            unsigned int everViewedAudioSheet : 1; 
            unsigned int everViewedAudioSheetBTAny : 1; 
            unsigned int everViewedAudioSheetBTHFP : 1; 
            unsigned int pauseSpokenAudioEnabled : 1; 
            unsigned int viewedAudioSheet : 1; 
            unsigned int viewedAudioSheetBTAny : 1; 
            unsigned int viewedAudioSheetBTHFP : 1; 
            unsigned int wirelessRoutesAvailable : 1; 
        } _has; 
    }  _navigationAudioFeedback;
}

@property (nonatomic) bool arrivedAtDestination;
@property (nonatomic, retain) NSMutableArray *directionsFeedbacks;
@property (nonatomic, retain) NSMutableArray *durationInNavigationModes;
@property (nonatomic) double durationOfTrip;
@property (nonatomic, retain) GEOLocation *finalLocation;
@property (nonatomic) bool hasArrivedAtDestination;
@property (nonatomic) bool hasDurationOfTrip;
@property (nonatomic, readonly) bool hasFinalLocation;
@property (nonatomic) bool hasNavSessionId;
@property (nonatomic) bool hasNavigationAudioFeedback;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } navSessionId;
@property (nonatomic) struct GEONavigationAudioFeedback { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; bool x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; } navigationAudioFeedback;

+ (Class)directionsFeedbackType;
+ (Class)durationInNavigationModeType;

- (void).cxx_destruct;
- (void)addDirectionsFeedback:(id)arg1;
- (void)addDurationInNavigationMode:(id)arg1;
- (bool)arrivedAtDestination;
- (void)clearDirectionsFeedbacks;
- (void)clearDurationInNavigationModes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;
- (id)directionsFeedbacks;
- (unsigned long long)directionsFeedbacksCount;
- (id)durationInNavigationModeAtIndex:(unsigned long long)arg1;
- (id)durationInNavigationModes;
- (unsigned long long)durationInNavigationModesCount;
- (double)durationOfTrip;
- (id)finalLocation;
- (bool)hasArrivedAtDestination;
- (bool)hasDurationOfTrip;
- (bool)hasFinalLocation;
- (bool)hasNavSessionId;
- (bool)hasNavigationAudioFeedback;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })navSessionId;
- (struct GEONavigationAudioFeedback { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; bool x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; })navigationAudioFeedback;
- (bool)readFrom:(id)arg1;
- (void)setArrivedAtDestination:(bool)arg1;
- (void)setDirectionsFeedbacks:(id)arg1;
- (void)setDurationInNavigationModes:(id)arg1;
- (void)setDurationOfTrip:(double)arg1;
- (void)setFinalLocation:(id)arg1;
- (void)setHasArrivedAtDestination:(bool)arg1;
- (void)setHasDurationOfTrip:(bool)arg1;
- (void)setHasNavSessionId:(bool)arg1;
- (void)setHasNavigationAudioFeedback:(bool)arg1;
- (void)setNavSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setNavigationAudioFeedback:(struct GEONavigationAudioFeedback { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; bool x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; })arg1;
- (void)writeTo:(id)arg1;

@end
