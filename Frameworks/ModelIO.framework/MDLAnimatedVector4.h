/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLAnimatedVector4 : MDLAnimatedValue

- (unsigned long long)copyDouble4ArrayInto:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)copyFloat4ArrayInto:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct VtValue { struct aligned_storage_imp<8, 8> { union data_t { BOOL x_1_2_1[8]; struct a8 { } x_1_2_2; } x_1_1_1; } x1; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo {} *x_2_1_1; } x2; })defaultVtValue;
- (void)double4AtTime:(double)arg1;
- (void)float4AtTime:(double)arg1;
- (id)initWithName:(id)arg1;
- (unsigned long long)precision;
- (void)resetWithDouble4Array:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3;
- (void)resetWithFloat4Array:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute { int x1; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1 timeScale:(double)arg2;
- (void)setDouble4:(void *)arg1 atTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)setFloat4:(void *)arg1 atTime:(void *)arg2; // needs 2 arg types, found 1: double

@end
