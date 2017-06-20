/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVFullScreenViewController : UIViewController {
    bool  _canChangeStatusBarHidden;
    UIView * _contentView;
    <AVFullScreenViewControllerDelegate> * _delegate;
    UIView * _presentationBackgroundView;
}

@property (nonatomic) bool canChangeStatusBarHidden;
@property (nonatomic) UIView *contentView;
@property (nonatomic) <AVFullScreenViewControllerDelegate> *delegate;
@property (nonatomic, readonly) UIView *presentationBackgroundView;

- (void).cxx_destruct;
- (bool)canChangeStatusBarHidden;
- (id)contentView;
- (void)dealloc;
- (id)delegate;
- (void)fullScreenPresentationDidEnd:(bool)arg1;
- (void)fullScreenPresentationWillBegin;
- (id)initWithDelegate:(id)arg1 presentingViewController:(id)arg2 sourceView:(id)arg3;
- (id)keyCommands;
- (bool)modalPresentationCapturesStatusBarAppearance;
- (long long)preferredStatusBarStyle;
- (long long)preferredWhitePointAdaptivityStyle;
- (bool)prefersStatusBarHidden;
- (id)presentationBackgroundView;
- (void)setCanChangeStatusBarHidden:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)viewDidAppear:(bool)arg1;

@end
