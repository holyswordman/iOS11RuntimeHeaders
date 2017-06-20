/* Generated by RuntimeBrowser.
 */

@protocol MPStoreSocialRequestOperationDataSource <NSObject>

@required

- (NSString *)bagKey;
- (NSString *)customURLString;
- (NSData *)httpBody;
- (long long)httpBodyType;
- (long long)httpMethod;
- (MPModelSocialPerson *)person;
- (NSArray *)queryItems;
- (void)setPerson:(MPModelSocialPerson *)arg1;

@end
