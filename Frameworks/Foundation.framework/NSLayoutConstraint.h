/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutConstraint : NSObject <DebugHierarchyObject, NSISConstraint> {
    float  _coefficient;
    double  _constant;
    id  _container;
    id  _firstAnchor;
    unsigned long long  _layoutConstraintFlags;
    double  _loweredConstant;
    id  _markerAndPositiveExtraVar;
    id  _negativeExtraVar;
    float  _priority;
    id  _secondAnchor;
}

@property (setter=_setAssociatedRuleNode:) _NSConstraintDescriptionLayoutRuleNode *_associatedRuleNode;
@property (setter=_setContainerDeclaredConstraint:) bool _containerDeclaredConstraint;
@property (readonly, copy) NSSet *_referencedLayoutItems;
@property (getter=isActive) bool active;
@property double constant;
@property id container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_encodedConstant, setter=_setEncodedConstant:) _NSLayoutConstraintConstant *encodedConstant;
@property (setter=_setFirstAnchor:, copy) NSLayoutAnchor *firstAnchor;
@property (readonly) long long firstAttribute;
@property (readonly) id firstItem;
@property (readonly) bool hasBeenLowered;
@property (readonly) unsigned long long hash;
@property (copy) NSString *identifier;
@property (getter=_loweredConstantNeedsUpdate, setter=_setLoweredConstantNeedsUpdate:, nonatomic) bool loweredConstantNeedsUpdate;
@property (setter=_setMultiplier:) double multiplier;
@property float priority;
@property (setter=_setRelation:) long long relation;
@property (setter=_setSecondAnchor:, copy) NSLayoutAnchor *secondAnchor;
@property (readonly) long long secondAttribute;
@property (readonly) id secondItem;
@property bool shouldBeArchived;
@property (readonly) Class superclass;
@property (copy) NSString *symbolicConstant;
@property (readonly) double unsatisfaction;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_addOrRemoveConstraints:(id)arg1 activate:(bool)arg2;
+ (id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2;
+ (void)_setLegacyDecodingOnly:(bool)arg1;
+ (void)activateConstraints:(id)arg1;
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 constant:(double)arg3;
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 multiplier:(double)arg4 constant:(double)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;
+ (void)deactivateConstraints:(id)arg1;

- (bool)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 integralizationAdjustment:(double)arg3 lastLoweredConstantWasRounded:(bool)arg4 mutuallyExclusiveConstraints:(id*)arg5;
- (void)_addToEngine:(id)arg1;
- (bool)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (id)_allocationDescription;
- (double)_allowedMagnitudeForIntegralizationAdjustment;
- (double)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(double*)arg1;
- (id)_ancestorRuleNodes;
- (id)_associatedRuleNode;
- (void)_clearWeakContainerReference;
- (id)_constantDescriptionForDTrace;
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;
- (int)_constraintType;
- (id)_constraintValueCopy;
- (unsigned long long)_constraintValueHashIncludingConstant:(bool)arg1 includeOtherMutableProperties:(bool)arg2;
- (bool)_containerDeclaredConstraint;
- (void)_containerGeometryDidChange;
- (id)_deallocSafeDescription;
- (bool)_deferDTraceLogging;
- (bool)_describesSameRestrictionAsConstraint:(id)arg1;
- (id)_descriptionforSymbolicConstant;
- (bool)_effectiveConstant:(double*)arg1 error:(id*)arg2;
- (struct CGSize { double x1; double x2; })_engineToContainerScalingCoefficients;
- (void)_ensureValueMaintainsArbitraryLimit:(double*)arg1;
- (bool)_existsInEngine:(id)arg1;
- (id)_explainUnsatisfaction;
- (void)_forceSatisfactionMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2;
- (double)_fudgeIncrement;
- (id)_identifier;
- (bool)_isEqualToConstraintValue:(id)arg1 includingConstant:(bool)arg2 includeOtherMutableProperties:(bool)arg3;
- (bool)_isFudgeable;
- (bool)_isIBPrototypingLayoutConstraint;
- (id)_layoutEngine;
- (bool)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(bool*)arg2;
- (bool)_loweredConstantIsRounded;
- (bool)_loweredConstantNeedsUpdate;
- (id)_loweredExpression;
- (void)_makeExtraVars;
- (id)_markerAndPositiveExtraVar;
- (id)_negativeExtraVar;
- (bool)_nsib_isRedundant;
- (bool)_nsib_isRedundantInEngine:(id)arg1;
- (int)_primitiveConstraintType;
- (id)_priorityDescription;
- (id)_referencedLayoutItems;
- (bool)_referencesLayoutItem:(id)arg1;
- (void)_removeFromEngine:(id)arg1;
- (void)_setActive:(bool)arg1 mutuallyExclusiveConstraints:(id*)arg2;
- (void)_setAssociatedRuleNode:(id)arg1;
- (void)_setContainerDeclaredConstraint:(bool)arg1;
- (void)_setDeferDTraceLogging:(bool)arg1;
- (void)_setFirstAnchor:(id)arg1;
- (void)_setFirstItem:(id)arg1 attribute:(long long)arg2;
- (void)_setIdentifier:(id)arg1;
- (void)_setLoweredConstantNeedsUpdate:(bool)arg1;
- (void)_setMarkerAndPositiveErrorVar:(id)arg1;
- (void)_setMultiplier:(double)arg1;
- (void)_setMutablePropertiesFromConstraint:(id)arg1;
- (void)_setNegativeExtraVar:(id)arg1;
- (void)_setPrimitiveConstraintType:(int)arg1;
- (void)_setRelation:(long long)arg1;
- (void)_setSecondAnchor:(id)arg1;
- (void)_setSecondItem:(id)arg1 attribute:(long long)arg2;
- (void)_setSymbolicConstant:(id)arg1;
- (void)_setSymbolicConstant:(id)arg1 constant:(double)arg2;
- (id)_symbolicConstant;
- (void)_tryToActivateMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2;
- (bool)_tryToChangeContainerGeometryWithUndoHandler:(id /* block */)arg1;
- (id)animations;
- (id)asciiArtDescription;
- (double)constant;
- (id)container;
- (void)dealloc;
- (id)description;
- (id)descriptionAccessory;
- (double)dissatisfaction;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (id)firstAnchor;
- (long long)firstAttribute;
- (id)firstItem;
- (bool)hasBeenLowered;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (double)multiplier;
- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (float)priority;
- (double)priorityForVariable:(id)arg1;
- (long long)relation;
- (id)secondAnchor;
- (long long)secondAttribute;
- (id)secondItem;
- (void)setActive:(bool)arg1;
- (void)setAnimations:(id)arg1;
- (void)setConstant:(double)arg1;
- (void)setContainer:(id)arg1;
- (void)setHasBeenLowered:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setShouldBeArchived:(bool)arg1;
- (void)setSymbolicConstant:(id)arg1;
- (bool)shouldBeArchived;
- (id)sourceRuleHierarchy;
- (id)symbolicConstant;
- (double)unsatisfaction;

// Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib

- (id)debugHierarchyPropertyDescriptions;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)avkit_constraintsFromEdgesOfItem:(id)arg1 toEdgesOfItem:(id)arg2;
+ (id)avkit_constraintsFromEdgesOfItem:(id)arg1 toLeadingAnchor:(id)arg2 topAnchor:(id)arg3 trailingAnchor:(id)arg4 bottomAnchor:(id)arg5 priority:(float)arg6;
+ (id)avkit_constraintsFromLeadingAndTrailingEdgesOfItem:(id)arg1 toEdgesOfItem:(id)arg2;
+ (id)avkit_constraintsFromTopAndBottomEdgesOfItem:(id)arg1 toEdgesOfItem:(id)arg2;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (bool)_UIWantsMarginAttributeSupport;
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 withSystemSpacingMultipliedBy:(double)arg4;

- (id)_baselineLoweringInfoForFirstItem:(bool)arg1;
- (id)_debuggableEquationBaseDescription;
- (id)_debuggableEquationDescriptionWithoutLegend;
- (id)_debuggableEquationLegendDescription;
- (id)_encodedConstant;
- (id)_ola_dimensionItem;
- (id)_ola_dimensionRefItem;
- (void)_setBaselineLoweringInfo:(id)arg1 forFirstItem:(bool)arg2;
- (void)_setEncodedConstant:(id)arg1;
- (id)_uiFirstRefView;
- (id)_uiSecondRefView;
- (id)_ui_constraintWithPriority:(float)arg1;
- (bool)defaultResolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 error:(id*)arg3;
- (id)spacingMultiplier;

// Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

+ (id)PG_constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 priority:(float)arg8;

@end
