/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCInterfaceMethodInfo : NSObject {
    NSMutableArray * _arguments;
    NSMutableArray * _replyArguments;
    int  _replyPosition;
    char * _replySignature;
    Class  _returnClass;
    unsigned long long  _version;
}

@property (retain) NSArray *arguments;
@property (retain) NSArray *replyArguments;
@property int replyPosition;
@property Class returnClass;
@property unsigned long long version;

- (id)arguments;
- (void)dealloc;
- (id)init;
- (id)replyArguments;
- (int)replyPosition;
- (const char *)replySignature;
- (Class)returnClass;
- (void)setArguments:(id)arg1;
- (void)setReplyArguments:(id)arg1;
- (void)setReplyPosition:(int)arg1;
- (void)setReplySignature:(id)arg1;
- (void)setReturnClass:(Class)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end