/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLTransformRotateOp : NSObject <MDLTransformOp> {
    MDLAnimatedVector3 * _animatedValue;
    bool  _inverse;
    NSString * _name;
    unsigned long long  _order;
}

@property (nonatomic, readonly) MDLAnimatedVector3 *animatedValue;
@property (nonatomic) bool inverse;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) unsigned long long order;

- (void).cxx_destruct;
- (bool)IsInverseOp;
- (id)animatedValue;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })double4x4AtTime:(double)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })float4x4AtTime:(double)arg1;
- (id)initWithName:(id)arg1 inverse:(bool)arg2 order:(unsigned long long)arg3 data:(id)arg4;
- (bool)inverse;
- (id)name;
- (unsigned long long)order;
- (void)setInverse:(bool)arg1;
- (void)setOrder:(unsigned long long)arg1;

@end
