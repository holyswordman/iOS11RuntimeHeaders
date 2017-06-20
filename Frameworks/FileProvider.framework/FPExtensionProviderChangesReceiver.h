/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPExtensionProviderChangesReceiver : NSObject <FPProviderChangesReceiver> {
    id /* block */  _changesHandler;
    NSString * _identifier;
}

@property (nonatomic, copy) id /* block */ changesHandler;
@property (nonatomic, copy) NSString *identifier;

- (void).cxx_destruct;
- (id /* block */)changesHandler;
- (id)identifier;
- (id)init;
- (void)providersInfoHasChanged:(id)arg1 error:(id)arg2;
- (void)setChangesHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;

@end