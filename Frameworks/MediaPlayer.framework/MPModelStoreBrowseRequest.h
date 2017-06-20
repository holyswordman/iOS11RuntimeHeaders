/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStoreBrowseRequest : MPStoreModelRequest {
    long long  _domain;
    long long  _filteringPolicy;
    NSURL * _loadAdditionalContentURL;
    MPModelStoreBrowseResponse * _previousResponse;
    MPModelStoreBrowseResponse * _previousRetrievedNestedResponse;
}

@property (nonatomic) long long domain;
@property (nonatomic) long long filteringPolicy;
@property (nonatomic, copy) NSURL *loadAdditionalContentURL;
@property (nonatomic, retain) MPModelStoreBrowseResponse *previousResponse;
@property (nonatomic, retain) MPModelStoreBrowseResponse *previousRetrievedNestedResponse;

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;

- (void).cxx_destruct;
- (void)configureWithParentSection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)domain;
- (void)encodeWithCoder:(id)arg1;
- (long long)filteringPolicy;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)loadAdditionalContentURL;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)previousResponse;
- (id)previousRetrievedNestedResponse;
- (void)setDomain:(long long)arg1;
- (void)setFilteringPolicy:(long long)arg1;
- (void)setLoadAdditionalContentURL:(id)arg1;
- (void)setPreviousResponse:(id)arg1;
- (void)setPreviousRetrievedNestedResponse:(id)arg1;

@end
