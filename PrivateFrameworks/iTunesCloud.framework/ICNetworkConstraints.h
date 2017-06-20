/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICNetworkConstraints : NSObject <NSCopying, NSMutableCopying> {
    bool  _dataAllowedFallbackValue;
    NSMutableDictionary * _networkTypeToDataAllowed;
    NSMutableDictionary * _networkTypeToSizeLimit;
}

+ (id)mediaTypeNetworkConstraintsFromURLBag:(id)arg1;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone { }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)shouldAllowDataForNetworkType:(long long)arg1;
- (id)sizeLimitForNetworkType:(long long)arg1;

@end
