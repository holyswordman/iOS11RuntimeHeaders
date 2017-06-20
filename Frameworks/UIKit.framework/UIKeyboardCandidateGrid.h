/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGrid : UIView <UIKeyboardCandidateGridCollectionViewControllerDelegate, UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateRowViewControllerDelegate> {
    UIKBBackdropView * _backdropView;
    UIImageView * _backgroundView;
    UIView * _bottomBarShadow;
    <UIKeyboardCandidateListDelegate> * _candidateListDelegate;
    TIKeyboardCandidateResultSet * _candidateSet;
    int  _candidatesVisualStyle;
    UIKeyboardCandidateGridCollectionViewController * _collectionViewController;
    NSMutableDictionary * _collectionViewControllers;
    bool  _drawBottomShadow;
    bool  _drawTopShadow;
    UIKeyboardCandidateGridHeader * _gridHeader;
    NSString * _inlineText;
    <UICollectionViewDelegate> * _scrollViewDelegate;
    UIKeyboardCandidateRowViewController * _secondaryCandidatesViewController;
    bool  _secondaryCandidatesViewIsCurrent;
    UIKeyboardCandidateSortControl * _sortBar;
    NSArray * _sortedCandidates;
    UIView * _topBarShadow;
}

@property (nonatomic, retain) UIKBBackdropView *backdropView;
@property (nonatomic) <UIKeyboardCandidateListDelegate> *candidateListDelegate;
@property (nonatomic, retain) TIKeyboardCandidateResultSet *candidateSet;
@property (nonatomic) int candidatesVisualStyle;
@property (nonatomic, retain) UIKeyboardCandidateGridCollectionViewController *collectionViewController;
@property (nonatomic, readonly) NSMutableDictionary *collectionViewControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawBottomShadow;
@property (nonatomic) bool drawTopShadow;
@property (nonatomic) UIKeyboardCandidateGridHeader *gridHeader;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *inlineText;
@property (nonatomic) <UICollectionViewDelegate> *scrollViewDelegate;
@property (nonatomic, retain) UIKeyboardCandidateRowViewController *secondaryCandidatesViewController;
@property (nonatomic) bool secondaryCandidatesViewIsCurrent;
@property (nonatomic) UIKeyboardCandidateSortControl *sortBar;
@property (nonatomic, retain) NSArray *sortedCandidates;
@property (readonly) Class superclass;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void).cxx_destruct;
- (id)backdropView;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (id)candidateListDelegate;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (id)candidateSet;
- (void)candidateViewDidFinishExtending;
- (void)candidateViewWillBeginExtendingWithVisibleCandidates:(id)arg1;
- (void)candidatesDidChange;
- (int)candidatesVisualStyle;
- (void)clearViews;
- (id)collectionViewController;
- (id)collectionViewControllers;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (bool)drawBottomShadow;
- (bool)drawTopShadow;
- (unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1;
- (unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (id)gridHeader;
- (bool)handleNumberKey:(unsigned long long)arg1;
- (bool)handleTabKeyWithShift:(bool)arg1;
- (bool)hasCandidateInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (bool)hasCandidates;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inlineText;
- (bool)isExtendedList;
- (bool)isFloatingList;
- (id)keyboardBehaviors;
- (void)layout;
- (void)layoutSubviews;
- (bool)padInlineFloatingViewIsExpanded:(id)arg1;
- (void)revealHiddenCandidates;
- (unsigned long long)rowForCandidateAtIndex:(unsigned long long)arg1;
- (id)scrollViewDelegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)secondaryCandidatesViewController;
- (bool)secondaryCandidatesViewIsCurrent;
- (unsigned long long)selectedSortIndex;
- (void)setBackdropView:(id)arg1;
- (void)setCandidateListDelegate:(id)arg1;
- (void)setCandidateSet:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 maxX:(double)arg5 layout:(bool)arg6;
- (void)setCandidatesVisualStyle:(int)arg1;
- (void)setCollectionViewController:(id)arg1;
- (void)setDrawBottomShadow:(bool)arg1;
- (void)setDrawTopShadow:(bool)arg1;
- (void)setGridHeader:(id)arg1;
- (void)setInlineText:(id)arg1;
- (void)setScrollViewDelegate:(id)arg1;
- (void)setSecondaryCandidatesViewController:(id)arg1;
- (void)setSecondaryCandidatesViewIsCurrent:(bool)arg1;
- (void)setSortBar:(id)arg1;
- (void)setSortedCandidates:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)showArrowButton:(bool)arg1;
- (bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showCandidateInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (id)sortBar;
- (void)sortSelectionBarAction:(id)arg1;
- (id)sortedCandidates;
- (id)statisticsIdentifier;
- (void)statusBarFrameWillChange:(id)arg1;

@end
