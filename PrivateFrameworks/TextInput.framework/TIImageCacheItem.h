/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIImageCacheItem : NSObject <NSSecureCoding> {
    NSData * _data;
    unsigned char  _format;
    struct CGColor { } * _formatColor;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic) unsigned char format;
@property (nonatomic) struct CGColor { }*formatColor;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

+ (id)cacheItemWithSize:(struct CGSize { double x1; double x2; })arg1 format:(unsigned char)arg2 formatColor:(struct CGColor { }*)arg3 scale:(double)arg4 data:(id)arg5;
+ (bool)supportsSecureCoding;

- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)format;
- (struct CGColor { }*)formatColor;
- (id)initWithCoder:(id)arg1;
- (double)scale;
- (void)setData:(id)arg1;
- (void)setFormat:(unsigned char)arg1;
- (void)setFormatColor:(struct CGColor { }*)arg1;
- (void)setScale:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
