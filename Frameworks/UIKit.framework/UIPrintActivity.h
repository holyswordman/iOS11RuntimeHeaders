/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintActivity : UIActivity {
    UIViewController * _wrapperViewController;
}

@property (retain) UIViewController *wrapperViewController;

+ (unsigned long long)_xpcAttributes;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_embeddedActivityViewController;
- (void)activityDidFinish:(bool)arg1;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)cancelPrintOptions;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (id)printInteractionController;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (void)setWrapperViewController:(id)arg1;
- (id)wrapperViewController;

@end
