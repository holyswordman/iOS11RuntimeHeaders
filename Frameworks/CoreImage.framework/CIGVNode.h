/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIGVNode : GVNode {
    struct CGSize { 
        double width; 
        double height; 
    }  badgeSize;
    int  color;
    struct CGSize { 
        double width; 
        double height; 
    }  contentSize;
    struct CGImage { } * image;
    struct CGSize { 
        double width; 
        double height; 
    }  imageSize;
    struct __CFString { } * label;
    struct CGSize { 
        double width; 
        double height; 
    }  labelSize;
    void * node;
    int  shape;
    struct __CFString { } * title;
    struct CGSize { 
        double width; 
        double height; 
    }  titleSize;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } badgeFrame;
@property (nonatomic) int color;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentCornerSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentInsertSize;
@property (nonatomic) struct CGImage { }*image;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageFrame;
@property (nonatomic) struct __CFString { }*label;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } labelFrame;
@property (readonly) void*node;
@property (nonatomic) int shape;
@property (nonatomic) struct __CFString { }*title;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleFrame;

+ (struct __CFDictionary { }*)textAttributesForLabel;
+ (struct __CFDictionary { }*)textAttributesForTitle;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })badgeFrame;
- (int)color;
- (struct CGSize { double x1; double x2; })contentCornerSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (struct CGSize { double x1; double x2; })contentInsertSize;
- (void)dealloc;
- (id)description;
- (struct CGImage { }*)image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (id)init;
- (id)initWithCINode:(void*)arg1;
- (struct __CFString { }*)label;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelFrame;
- (void*)node;
- (void)setColor:(int)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (void)setLabel:(struct __CFString { }*)arg1;
- (void)setShape:(int)arg1;
- (void)setTitle:(struct __CFString { }*)arg1;
- (int)shape;
- (struct __CFString { }*)title;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleFrame;
- (void)updateBadgeSize;
- (void)updateContentSize;
- (void)updateSize;

@end
