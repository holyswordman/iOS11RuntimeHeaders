/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationInterpretation : NSObject <NSSecureCoding> {
    double  _averageConfidenceScore;
    NSArray * _tokens;
}

@property (nonatomic) double averageConfidenceScore;
@property (nonatomic, readonly) bool removeSpaceAfter;
@property (nonatomic, readonly) bool removeSpaceBefore;
@property (nonatomic, readonly) NSArray *tokens;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)averageConfidenceScore;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokens:(id)arg1;
- (id)initWithTokens:(id)arg1 score:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)removeSpaceAfter;
- (bool)removeSpaceBefore;
- (void)setAverageConfidenceScore:(double)arg1;
- (id)textWithShiftState:(unsigned long long)arg1 ranges:(id*)arg2 filter:(id /* block */)arg3;
- (id)tokens;

@end
