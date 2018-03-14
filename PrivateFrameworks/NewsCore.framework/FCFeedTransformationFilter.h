/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationFilter : NSObject <FCFeedTransforming> {
    NSString * _briefingsTagID;
    long long  _filterOptions;
    NSSet * _mutedChannelTagIDs;
    NSSet * _otherArticleIDs;
    NSSet * _otherClusterIDs;
    NSSet * _purchasedTagIDs;
    NSSet * _subscribedTagIDs;
}

@property (nonatomic, copy) NSString *briefingsTagID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long filterOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *mutedChannelTagIDs;
@property (nonatomic, copy) NSSet *otherArticleIDs;
@property (nonatomic, copy) NSSet *otherClusterIDs;
@property (nonatomic, copy) NSSet *purchasedTagIDs;
@property (nonatomic, copy) NSSet *subscribedTagIDs;
@property (readonly) Class superclass;

+ (id)transformationWithFilterOptions:(long long)arg1 appConfiguration:(id)arg2 context:(id)arg3;
+ (id)transformationWithFilterOptions:(long long)arg1 appConfiguration:(id)arg2 context:(id)arg3 otherArticleIDs:(id)arg4;
+ (id)transformationWithFilterOptions:(long long)arg1 otherArticleIDs:(id)arg2 otherClusterIDs:(id)arg3 subscribedTagIDs:(id)arg4 mutedChannelTagIDs:(id)arg5 purchasedTagIDs:(id)arg6 briefingsTagID:(id)arg7;

- (void).cxx_destruct;
- (id)briefingsTagID;
- (long long)filterOptions;
- (id)mutedChannelTagIDs;
- (id)otherArticleIDs;
- (id)otherClusterIDs;
- (id)purchasedTagIDs;
- (void)setBriefingsTagID:(id)arg1;
- (void)setFilterOptions:(long long)arg1;
- (void)setMutedChannelTagIDs:(id)arg1;
- (void)setOtherArticleIDs:(id)arg1;
- (void)setOtherClusterIDs:(id)arg1;
- (void)setPurchasedTagIDs:(id)arg1;
- (void)setSubscribedTagIDs:(id)arg1;
- (id)subscribedTagIDs;
- (id)transformFeedItems:(id)arg1;
- (id)transformHeadlines:(id)arg1;

@end