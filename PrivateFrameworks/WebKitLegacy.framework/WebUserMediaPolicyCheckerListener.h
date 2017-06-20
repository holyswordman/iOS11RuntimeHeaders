/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebUserMediaPolicyCheckerListener : NSObject <WebAllowDenyPolicyListener> {
    struct RefPtr<WebCore::MediaDevicesEnumerationRequest> { 
        struct MediaDevicesEnumerationRequest {} *m_ptr; 
    }  _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allow;
- (void)cancelMediaDevicesEnumerationRequest;
- (void)deny;
- (void)denyOnlyThisRequest;
- (id)initWithMediaDevicesEnumerationRequest:(struct PassRefPtr<WebCore::MediaDevicesEnumerationRequest> { struct MediaDevicesEnumerationRequest {} *x1; })arg1;
- (bool)shouldClearCache;

@end
