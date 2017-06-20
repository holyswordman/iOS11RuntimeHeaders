/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPageViewController : UIViewController <DebugHierarchyObject, UIGestureRecognizerDelegate, _UIQueuingScrollViewDataSource, _UIQueuingScrollViewDelegate> {
    NSMutableDictionary * _cachedViewControllersForCurl;
    NSHashTable * _cachedViewControllersForScroll;
    <UIPageViewControllerDataSource> * _dataSource;
    <UIPageViewControllerDelegate> * _delegate;
    struct { 
        unsigned int delegateWantsTransitionWillBegin : 1; 
        unsigned int delegateWantsTransitionCompleted : 1; 
        unsigned int delegateWantsTransitionsFinished : 1; 
        unsigned int delegateCustomizesSpineLocationForInterfaceOrientation : 1; 
        unsigned int delegateSupportedInterfaceOrientations : 1; 
        unsigned int delegatePreferredInterfaceOrientationForPresentation : 1; 
        unsigned int dataSourceSuppliesBeforeViewController : 1; 
        unsigned int dataSourceSuppliesAfterViewController : 1; 
        unsigned int dataSourceSuppliesPageCount : 1; 
        unsigned int dataSourceSuppliesPageNumber : 1; 
    }  _delegateFlags;
    long long  _disableAutorotationCount;
    bool  _doubleSided;
    struct CGSize { 
        double width; 
        double height; 
    }  _effectiveTapRegionBreadths;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _effectiveTapRegionInsets;
    NSDictionary * _incomingAndOutgoingViewControllersForManualTransition;
    bool  _interfaceRotating;
    long long  _lastKnownNavigationDirection;
    long long  _navigationOrientation;
    bool  _pageControlRequiresValidation;
    _UIPageCurl * _pageCurl;
    double  _pageSpacing;
    UIPanGestureRecognizer * _panGestureRecognizer;
    NSMutableArray * _rotationSnapshotViews;
    long long  _spineLocation;
    long long  _spineLocationPriorToInterfaceRotation;
    bool  _stashingViewControllersForRotation;
    UITapGestureRecognizer * _tapGestureRecognizer;
    struct CGSize { 
        double width; 
        double height; 
    }  _tapRegionBreadths;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tapRegionInsets;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _tapRegions;
    long long  _transitionStyle;
    <UIPageViewControllerDataSource> * _unsafeUnretainedDataSource;
    <UIPageViewControllerDelegate> * _unsafeUnretainedDelegate;
    NSArray * _viewControllers;
    NSArray * _viewControllersStashedForRotation;
}

@property (nonatomic, readonly) _UIPageViewControllerContentView *_contentView;
@property (getter=_isInterfaceRotating, nonatomic, readonly) bool _interfaceRotating;
@property (nonatomic, readonly) long long _navigationOrientation;
@property (getter=_isPageControlVisible, nonatomic, readonly) bool _pageControlVisible;
@property (setter=_setPageSpacing:, nonatomic) double _pageSpacing;
@property (nonatomic, readonly) _UIQueuingScrollView *_scrollView;
@property (nonatomic, readonly) long long _transitionStyle;
@property (setter=_setViewControllers:, nonatomic, retain) NSArray *_viewControllers;
@property (setter=_setViewControllersStashedForRotation:, nonatomic, retain) NSArray *_viewControllersStashedForRotation;
@property (nonatomic) <UIPageViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIPageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDoubleSided, nonatomic) bool doubleSided;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long navigationOrientation;
@property (nonatomic, readonly) long long spineLocation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long transitionStyle;
@property (nonatomic, readonly) NSArray *viewControllers;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_incomingViewControllerKeys;
+ (bool)_isNavigationOrientation:(long long)arg1 supportedForTransitionStyle:(long long)arg2;
+ (bool)_isSpineLocation:(long long)arg1 supportedForTransitionStyle:(long long)arg2;
+ (bool)_isSupportedTransitionStyle:(long long)arg1;
+ (id)_outgoingViewControllerKeys;
+ (bool)doesOverridePreferredInterfaceOrientationForPresentation;
+ (bool)doesOverrideSupportedInterfaceOrientations;
+ (id)stringForSpineLocation:(long long)arg1;

- (void).cxx_destruct;
- (void)_beginDisablingInterfaceAutorotation;
- (void)_cacheViewControllerForScroll:(id)arg1;
- (bool)_canHandleGestures;
- (void)_child:(id)arg1 beginAppearanceTransition:(bool)arg2 animated:(bool)arg3;
- (void)_child:(id)arg1 beginAppearanceTransitionIfPossible:(bool)arg2 animated:(bool)arg3;
- (bool)_child:(id)arg1 canBeginAppearanceTransition:(bool)arg2;
- (void)_child:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (void)_child:(id)arg1 endAppearanceTransitionIfPossible:(bool)arg2;
- (void)_child:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)_child:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (bool)_childCanEndAppearanceTransition:(id)arg1;
- (void)_childEndAppearanceTransition:(id)arg1;
- (struct CGSize { double x1; double x2; })_contentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_contentView;
- (void)_contentViewFrameOrBoundsDidChange;
- (id)_deepestUnambiguousResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_disabledScrollingRegion;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (struct CGSize { double x1; double x2; })_effectiveTapRegionBreadths;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveTapRegionInsets;
- (void)_endDisablingInterfaceAutorotation;
- (void)_flushViewController:(id)arg1 animated:(bool)arg2;
- (bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_handlePagingInDirection:(long long)arg1 completion:(id /* block */)arg2;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (bool)_hasPreferredInterfaceOrientationForPresentation;
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(long long)arg1;
- (void)_invalidateEffectiveTapRegions;
- (void)_invalidatePageCurl;
- (void)_invalidateViewControllersStashedForCurlFromDataSource;
- (bool)_isCurrentViewControllerStateValid;
- (bool)_isInterfaceRotating;
- (bool)_isPageControlVisible;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
- (long long)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)arg1 suggestedVelocity:(double*)arg2;
- (long long)_navigationOrientation;
- (id)_pageControl;
- (void)_pageControlValueChanged:(id)arg1;
- (double)_pageSpacing;
- (void)_populateIncomingViewControllersInMap:(id)arg1 withViewControllers:(id)arg2 forCurlInDirection:(long long)arg3;
- (void)_populateOutgoingViewControllersInMap:(id)arg1;
- (id)_queuingScrollView:(id)arg1 viewBefore:(bool)arg2 view:(id)arg3;
- (long long)_requestSpineLocationForInterfaceOrientationAndUpdateStashedViewControllers:(long long)arg1;
- (id)_scrollView;
- (void)_sendChildViewWill:(bool)arg1 appear:(bool)arg2 animated:(bool)arg3;
- (void)_setDisabledScrollingRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setPageSpacing:(double)arg1;
- (void)_setSpineLocation:(long long)arg1;
- (void)_setTapRegionBreadths:(struct CGSize { double x1; double x2; })arg1;
- (void)_setTapRegionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setViewControllers:(id)arg1;
- (void)_setViewControllers:(id)arg1 withCurlOfType:(long long)arg2 fromLocation:(struct CGPoint { double x1; double x2; })arg3 direction:(long long)arg4 animated:(bool)arg5 notifyDelegate:(bool)arg6 completion:(id /* block */)arg7;
- (void)_setViewControllers:(id)arg1 withScrollInDirection:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_setViewControllersStashedForRotation:(id)arg1;
- (bool)_shouldBeginNavigationInDirection:(long long*)arg1 inResponseToPanGestureRecognizer:(id)arg2;
- (bool)_shouldCompleteManualCurlWithSuggestedVelocity:(double*)arg1;
- (bool)_shouldFlipInRightToLeft;
- (bool)_shouldNavigateInDirection:(long long*)arg1 inResponseToTapGestureRecognizer:(id)arg2;
- (bool)_shouldNavigateInDirection:(long long*)arg1 inResponseToVelocity:(double*)arg2 ofGestureRecognizedByPanGestureRecognizer:(id)arg3;
- (bool)_shouldPersistViewWhenCoding;
- (bool)_shouldSynthesizeSupportedOrientations;
- (struct CGSize { double x1; double x2; })_tapRegionBreadths;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_tapRegionInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)_tapRegions;
- (long long)_transitionStyle;
- (void)_updatePageControlViaDataSourceIfNecessary;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_validRangeForPresentationOfViewControllersWithSpineLocation:(long long)arg1;
- (id)_validatedViewControllersForPresentationOfViewControllers:(id)arg1 validRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_validatedViewControllersForTransitionWithViewControllers:(id)arg1 animated:(bool)arg2;
- (id)_viewControllerAfterViewController:(id)arg1;
- (id)_viewControllerBefore:(bool)arg1 viewController:(id)arg2;
- (id)_viewControllerBeforeViewController:(id)arg1;
- (id)_viewControllers;
- (id)_viewControllersForCurlWithViewControllers:(id)arg1 direction:(long long)arg2;
- (id)_viewControllersForPendingSpineLocation:(long long)arg1;
- (id)_viewControllersStashedForRotation;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)gestureRecognizers;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;
- (bool)isDoubleSided;
- (void)loadView;
- (long long)navigationOrientation;
- (id)preferredFocusedView;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)queuingScrollView:(id)arg1 attemptToPageInDirection:(long long)arg2;
- (void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;
- (void)queuingScrollView:(id)arg1 didCommitManualScroll:(bool)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(long long)arg5 animated:(bool)arg6 canComplete:(bool)arg7;
- (void)queuingScrollView:(id)arg1 didEndManualScroll:(bool)arg2 toRevealView:(id)arg3 direction:(long long)arg4 animated:(bool)arg5 didFinish:(bool)arg6 didComplete:(bool)arg7;
- (void)queuingScrollView:(id)arg1 didFlushView:(id)arg2 animated:(bool)arg3;
- (id)queuingScrollView:(id)arg1 viewAfterView:(id)arg2;
- (id)queuingScrollView:(id)arg1 viewBeforeView:(id)arg2;
- (void)queuingScrollView:(id)arg1 willManuallyScroll:(bool)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(bool)arg5;
- (void)queuingScrollViewDidFinishScrolling:(id)arg1;
- (bool)queuingScrollViewShouldLayoutSubviews:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoubleSided:(bool)arg1;
- (void)setViewControllers:(id)arg1 direction:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)spineLocation;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)transitionStyle;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillUnload;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib

- (id)debugHierarchyPropertyDescriptions;

@end
