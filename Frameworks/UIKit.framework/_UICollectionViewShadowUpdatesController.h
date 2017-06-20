/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICollectionViewShadowUpdatesController : NSObject <UICollectionViewDragDestination_Internal> {
    NSMutableArray * __shadowUpdates;
    UICollectionView * _collectionView;
    _UIDataSourceSnapshotter * _initialSnapshot;
    NSPointerArray * _rebaseObservers;
    _UIDataSourceUpdateMap * _updateMap;
}

@property (nonatomic, retain) NSMutableArray *_shadowUpdates;
@property (nonatomic) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIDataSourceSnapshotter *initialSnapshot;
@property (nonatomic, retain) NSPointerArray *rebaseObservers;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIDataSourceUpdateMap *updateMap;

- (void).cxx_destruct;
- (id)_coalesceUpdatesIfPossible:(id)arg1;
- (bool)_collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;
- (bool)_collectionView:(id)arg1 canHandleDropSesson:(id)arg2;
- (bool)_collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)_collectionView:(id)arg1 dragDestinationTargetIndexPathForProposedIndexPath:(id)arg2 currentIndexPath:(id)arg3 dropSession:(id)arg4;
- (void)_collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (void)_collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;
- (void)_collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;
- (void)_collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;
- (void)_collectionView:(id)arg1 dropSessionDidExit:(id)arg2;
- (id)_collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)_collectionView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)_collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (id)_collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)_collectionView:(id)arg1 liftingPreviewParametersForItemAtIndexPath:(id)arg2;
- (void)_collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)_collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (bool)_collectionView:(id)arg1 prefersFullSizePreviewsForDragSession:(id)arg2;
- (bool)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint { double x1; double x2; })arg2 contentSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)_collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
- (struct CGPoint { double x1; double x2; })_collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)_collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)_collectionView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2;
- (void)_collectionView:(id)arg1 willLayoutCell:(id)arg2 usingTemplateLayoutCell:(id)arg3 forItemAtIndexPath:(id)arg4;
- (id)_findInsertShadowUpdateForFinalIndexPath:(id)arg1;
- (id)_findShadowUpdateForIdentifier:(id)arg1 inShadowUpdates:(id)arg2;
- (id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg1;
- (id)_indexPathsBeforeShadowUpdates:(id)arg1;
- (void)_pruneAndRebaseShadowUpdatesForShadowInsertWithIdentifier:(id)arg1;
- (id)_rebasedShadowUpdatesForUpdate:(id)arg1 initialSnapshot:(id)arg2 shadowUpdates:(id)arg3;
- (id)_rebasedUpdateMapForUpdate:(id)arg1;
- (void)_regenerateUpdateMap;
- (id)_sectionIndexTitlesForCollectionView:(id)arg1;
- (id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg1;
- (id)_shadowUpdates;
- (bool)_shadowUpdatesAreSimpleInsertWithOptionalMoveSequenceForIndexPath:(id)arg1;
- (id)_snapshotForShadowUpdatePreceedingShadowUpdate:(id)arg1 shadowUpdates:(id)arg2;
- (id)_supplementaryIndexPathBeforeShadowUpdates:(id)arg1;
- (void)_updateCellIfNeeded:(id)arg1 atIndexPath:(id)arg2;
- (void)addRebaseObserver:(id)arg1;
- (void)appendShadowUpdate:(id)arg1;
- (id)collectionView;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (bool)collectionView:(id)arg1 canHandleDropSesson:(id)arg2;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidExit:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
- (bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;
- (struct CGPoint { double x1; double x2; })collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)computeRevertShadowUpdates;
- (void)didRebaseWithNewBaseUpdateMap:(id)arg1;
- (id)indexPathAfterShadowUpdates:(id)arg1;
- (id)indexPathBeforeShadowUpdates:(id)arg1;
- (id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)indexTitlesForCollectionView:(id)arg1;
- (id)initWithCollectionView:(id)arg1;
- (id)initialSnapshot;
- (id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)rebaseForUpdates:(id)arg1;
- (id)rebaseObservers;
- (void)reset;
- (long long)sectionIndexAfterShadowUpdates:(long long)arg1;
- (long long)sectionIndexBeforeShadowUpdates:(long long)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setInitialSnapshot:(id)arg1;
- (void)setRebaseObservers:(id)arg1;
- (void)setUpdateMap:(id)arg1;
- (void)set_shadowUpdates:(id)arg1;
- (id)shadowUpdates;
- (id)updateMap;

@end
