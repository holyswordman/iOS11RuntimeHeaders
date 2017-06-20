/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUILSApplicationWorkspaceFacade : NSObject <CNUILSApplicationWorkspaceFacade> {
    LSApplicationWorkspace * _applicationWorkspace;
    <CNScheduler> * _backgroundScheduler;
}

@property (nonatomic, readonly) LSApplicationWorkspace *applicationWorkspace;
@property (nonatomic, readonly) <CNScheduler> *backgroundScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicationWorkspace;
- (id)backgroundScheduler;
- (id)init;
- (id)initWithApplicationWorkspace:(id)arg1 schedulerProvider:(id)arg2;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2;

@end
