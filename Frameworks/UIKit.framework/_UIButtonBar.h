/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIButtonBar : NSObject <NSCoding, _UIBarButtonItemGroupOwner, _UIBarButtonItemViewOwner> {
    <_UIButtonBarAppearanceDelegate> * __appearanceDelegate;
    NSArray * _barButtonGroups;
    UIView * _centeredView;
    NSLayoutConstraint * _centeringConstraint;
    bool  _compact;
    id /* block */  _defaultActionFilter;
    <_UIButtonBarDelegate> * _delegate;
    NSMutableArray * _effectiveLayout;
    UILayoutGuide * _flexibleSpaceEqualSizeLayoutGuide;
    NSMapTable * _groupLayoutMap;
    NSMutableArray * _groupLayouts;
    bool  _itemsInGroupUseSameSize;
    NSMutableArray * _layoutActiveConstraints;
    NSMutableArray * _layoutGuides;
    _UIButtonBarLayoutMetrics * _layoutMetrics;
    NSMutableArray * _layoutViews;
    double  _minimumInterGroupSpace;
    NSLayoutConstraint * _minimumInterGroupSpaceConstraint;
    UILayoutGuide * _minimumInterGroupSpaceLayoutGuide;
    double  _minimumInterItemSpace;
    NSLayoutConstraint * _minimumInterItemSpaceConstraint;
    UILayoutGuide * _minimumInterItemSpaceLayoutGuide;
    NSMapTable * _senderActionMap;
    _UIButtonBarStackView * _stackView;
    _UIButtonBarButtonVisualProvider * _visualProvider;
}

@property (nonatomic) <_UIButtonBarAppearanceDelegate> *_appearanceDelegate;
@property (nonatomic, copy) NSArray *barButtonGroups;
@property (getter=_compact, setter=_setCompact:, nonatomic) bool compact;
@property (nonatomic) bool createsPopoverLayoutGuides;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ defaultActionFilter;
@property (nonatomic) <_UIButtonBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_itemsInGroupUseSameSize, setter=_setItemsInGroupUseSameSize:, nonatomic) bool itemsInGroupUseSameSize;
@property (getter=_layoutWidth, nonatomic, readonly) double layoutWidth;
@property (getter=_minimumInterGroupSpace, setter=_setMinimumInterGroupSpace:, nonatomic) double minimumInterGroupSpace;
@property (nonatomic) double minimumInterItemSpace;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIBarButtonItem *ultimateFallbackItem;
@property (nonatomic, readonly) UIView *view;
@property (getter=_visualProvider, setter=_setVisualProvider:, nonatomic, copy) _UIButtonBarButtonVisualProvider *visualProvider;

+ (float)optionalConstraintsPriority;

- (void).cxx_destruct;
- (void)_appearanceChanged;
- (id)_appearanceDelegate;
- (bool)_compact;
- (id)_debug;
- (double)_estimatedWidth;
- (void)_groupDidChangeGeometry:(id)arg1;
- (void)_groupDidChangePriority:(id)arg1;
- (void)_groupDidUpdateItems:(id)arg1 removedItems:(id)arg2;
- (void)_groupDidUpdateRepresentative:(id)arg1 fromRepresentative:(id)arg2;
- (void)_groupDidUpdateVisibility:(id)arg1;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (bool)_itemsInGroupUseSameSize;
- (void)_layoutBar;
- (id)_layoutForGroup:(id)arg1;
- (double)_layoutWidth;
- (double)_minimumInterGroupSpace;
- (id)_newGroupLayout:(id)arg1;
- (void)_reloadBarButtonGroups;
- (void)_setCompact:(bool)arg1;
- (void)_setItemsInGroupUseSameSize:(bool)arg1;
- (void)_setMinimumInterGroupSpace:(double)arg1;
- (void)_setNeedsVisualUpdate;
- (void)_setNeedsVisualUpdateAndNotify:(bool)arg1;
- (void)_setVisualProvider:(id)arg1;
- (id)_targetActionForBarButtonItem:(id)arg1;
- (void)_updateForTraitCollectionChange:(id)arg1;
- (void)_updateToFitInWidth:(double)arg1;
- (id)_updatedViewForBarButtonItem:(id)arg1 withView:(id)arg2;
- (void)_validateAllItems;
- (id)_visualProvider;
- (id)barButtonGroups;
- (bool)createsPopoverLayoutGuides;
- (void)dealloc;
- (id /* block */)defaultActionFilter;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)minimumInterItemSpace;
- (void)setBarButtonGroups:(id)arg1;
- (void)setCreatesPopoverLayoutGuides:(bool)arg1;
- (void)setDefaultActionFilter:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMinimumInterItemSpace:(double)arg1;
- (void)set_appearanceDelegate:(id)arg1;
- (id)ultimateFallbackItem;
- (id)view;

@end
