/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, _UIPreviewActionsControllerDelegate> {
    bool  _commitTransitionScheduled;
    _UIPreviewInteractionCommitTransition * _currentCommitTransition;
    _UIPreviewInteractionDismissTransition * _currentDismissTransition;
    <_UIPreviewInteractionHighlighting> * _currentHighlighter;
    _UIInteractionEffect_deprecated * _currentInteractionEffect;
    _UIPreviewPresentationController2 * _currentPresentationController;
    _UIPreviewInteractionPresentationTransition * _currentPresentationTransition;
    bool  _currentPreviewActionsGestureAppliesToPlatter;
    UIViewController * _currentPreviewViewController;
    <UIViewControllerPreviewing_Internal> * _currentPreviewingContext;
    <_UIPreviewInteractionControllerDelegate> * _delegate;
    _UITouchesObservingGestureRecognizer * _gestureRecognizerForPreviewActions;
    NSArray * _gestureRecognizersForDelayingActions;
    bool  _hasTransitionedToPreview;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocationForPreviewActionsPanning;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    <_UIPreviewInteractionTouchForceProviding> * _pausingTouchForceProvider;
    bool  _performingCommitTransition;
    bool  _performingPreviewTransition;
    <_UIPreviewInteractionTouchForceProviding> * _presentedViewTouchForceProvider;
    UIViewController * _presentingViewController;
    _UIPreviewActionsController * _previewActionsController;
    bool  _previewActionsGestureInProgress;
    _UIPreviewInteractionGestureRecognizer * _previewGestureRecognizer;
    UIPreviewInteraction * _previewInteraction;
    _UIPreviewInteractionGestureRecognizer * _revealGestureRecognizer;
    UIView * _sourceView;
    _UISteadyTouchForceGestureRecognizer * _steadyTouchForceGestureRecognizer;
}

@property (nonatomic, readonly) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property (nonatomic) bool commitTransitionScheduled;
@property (nonatomic, retain) _UIPreviewInteractionCommitTransition *currentCommitTransition;
@property (nonatomic, retain) _UIPreviewInteractionDismissTransition *currentDismissTransition;
@property (nonatomic, retain) <_UIPreviewInteractionHighlighting> *currentHighlighter;
@property (nonatomic, retain) _UIInteractionEffect_deprecated *currentInteractionEffect;
@property (nonatomic, retain) _UIPreviewPresentationController2 *currentPresentationController;
@property (nonatomic, retain) _UIPreviewInteractionPresentationTransition *currentPresentationTransition;
@property (nonatomic) bool currentPreviewActionsGestureAppliesToPlatter;
@property (nonatomic, retain) UIViewController *currentPreviewViewController;
@property (nonatomic) <UIViewControllerPreviewing_Internal> *currentPreviewingContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIPreviewInteractionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UITouchesObservingGestureRecognizer *gestureRecognizerForPreviewActions;
@property (nonatomic, copy) NSArray *gestureRecognizersForDelayingActions;
@property (nonatomic) bool hasTransitionedToPreview;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialLocationForPreviewActionsPanning;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic, retain) <_UIPreviewInteractionTouchForceProviding> *pausingTouchForceProvider;
@property (nonatomic) bool performingCommitTransition;
@property (nonatomic) bool performingPreviewTransition;
@property (nonatomic, readonly) UIGestureRecognizer *presentationGestureRecognizer;
@property (nonatomic, retain) <_UIPreviewInteractionTouchForceProviding> *presentedViewTouchForceProvider;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) _UIPreviewActionsController *previewActionsController;
@property (nonatomic) bool previewActionsGestureInProgress;
@property (nonatomic, retain) _UIPreviewInteractionGestureRecognizer *previewGestureRecognizer;
@property (nonatomic, retain) UIPreviewInteraction *previewInteraction;
@property (nonatomic, retain) _UIPreviewInteractionGestureRecognizer *revealGestureRecognizer;
@property (nonatomic) UIView *sourceView;
@property (nonatomic, retain) _UISteadyTouchForceGestureRecognizer *steadyTouchForceGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissPreviewViewControllerIfNeeded;
- (void)_dismissPreviewViewControllerIfNeededWithCompletion:(id /* block */)arg1;
- (void)_finalizeAfterPreviewViewControllerPresentation;
- (void)_finalizeHighlighterAfterPreviewViewControllerPresentation;
- (void)_finalizeInteractivePreview;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handlePreviewActionsGesture:(id)arg1;
- (void)_handlePreviewGesture:(id)arg1;
- (void)_handleRevealGesture:(id)arg1;
- (void)_handleSteadyTouchForceGesture:(id)arg1;
- (bool)_isLongPressGestureRecognizerUsedForDelayingActions:(id)arg1;
- (id)_newHighlighterForPreviewingContext:(id)arg1;
- (void)_overrideSourceViewForBinaryCompatibilityIfNeeded:(id*)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)_preferredNavigationControllerForCommitTransition;
- (void)_preparePreviewPresentationControllerIfNeeded:(id)arg1;
- (bool)_preparePreviewViewControllerPresentationFromPreviewInteraction:(id)arg1;
- (id)_preparedInteractionEffect;
- (bool)_previewInteractionShouldEndOnGestureCompletion:(id)arg1;
- (id)_previewPresentationControllerForViewController:(id)arg1;
- (bool)_previewingIsPossibleForView:(id)arg1;
- (void)_registerGestureRecognizerForDelayingActions:(id)arg1;
- (void)_resetCustomPresentationHooks;
- (void)_revertInteractionEffectToStartState;
- (void)_stopCurrentInteractionEffect;
- (bool)_viewControllerIsChildOfTwoColumnSplitViewController:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)beginPreviewGestureRecognizer;
- (void)commitInteractivePreview;
- (bool)commitTransitionScheduled;
- (id)currentCommitTransition;
- (id)currentDismissTransition;
- (id)currentHighlighter;
- (id)currentInteractionEffect;
- (id)currentPresentationController;
- (id)currentPresentationTransition;
- (bool)currentPreviewActionsGestureAppliesToPlatter;
- (id)currentPreviewViewController;
- (id)currentPreviewingContext;
- (void)dealloc;
- (id)delegate;
- (void)didDismissPreviewActionsController:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)gestureRecognizerForPreviewActions;
- (id)gestureRecognizersForDelayingActions;
- (bool)hasTransitionedToPreview;
- (id)initWithView:(id)arg1;
- (struct CGPoint { double x1; double x2; })initialLocationForPreviewActionsPanning;
- (struct CGPoint { double x1; double x2; })initialPlatterPositionForPreviewActionsController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (struct CGPoint { double x1; double x2; })location;
- (struct CGSize { double x1; double x2; })maximumPreviewActionsViewSizeForPreviewActionsController:(id)arg1;
- (id)pausingTouchForceProvider;
- (bool)performingCommitTransition;
- (bool)performingPreviewTransition;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentationGestureRecognizer;
- (id)presentedViewTouchForceProvider;
- (id)presentingViewController;
- (id)previewActionsController;
- (void)previewActionsController:(id)arg1 didCompleteWithSelectedAction:(id)arg2;
- (void)previewActionsController:(id)arg1 didUpdatePlatterTranslation:(struct CGVector { double x1; double x2; })arg2 withVelocity:(struct CGVector { double x1; double x2; })arg3;
- (bool)previewActionsGestureInProgress;
- (id)previewGestureRecognizer;
- (id)previewInteraction;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (id)revealGestureRecognizer;
- (void)setCommitTransitionScheduled:(bool)arg1;
- (void)setCurrentCommitTransition:(id)arg1;
- (void)setCurrentDismissTransition:(id)arg1;
- (void)setCurrentHighlighter:(id)arg1;
- (void)setCurrentInteractionEffect:(id)arg1;
- (void)setCurrentPresentationController:(id)arg1;
- (void)setCurrentPresentationTransition:(id)arg1;
- (void)setCurrentPreviewActionsGestureAppliesToPlatter:(bool)arg1;
- (void)setCurrentPreviewViewController:(id)arg1;
- (void)setCurrentPreviewingContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGestureRecognizerForPreviewActions:(id)arg1;
- (void)setGestureRecognizersForDelayingActions:(id)arg1;
- (void)setHasTransitionedToPreview:(bool)arg1;
- (void)setInitialLocationForPreviewActionsPanning:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPausingTouchForceProvider:(id)arg1;
- (void)setPerformingCommitTransition:(bool)arg1;
- (void)setPerformingPreviewTransition:(bool)arg1;
- (void)setPresentedViewTouchForceProvider:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setPreviewActionsController:(id)arg1;
- (void)setPreviewActionsGestureInProgress:(bool)arg1;
- (void)setPreviewGestureRecognizer:(id)arg1;
- (void)setPreviewInteraction:(id)arg1;
- (void)setRevealGestureRecognizer:(id)arg1;
- (void)setSourceView:(id)arg1;
- (void)setSteadyTouchForceGestureRecognizer:(id)arg1;
- (id)sourceView;
- (id)steadyTouchForceGestureRecognizer;

@end
