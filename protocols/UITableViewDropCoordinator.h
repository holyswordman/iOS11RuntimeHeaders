/* Generated by RuntimeBrowser.
 */

@protocol UITableViewDropCoordinator <NSObject>

@required

- (NSIndexPath *)destinationIndexPath;
- (void)dropItem:(UIDragItem *)arg1 intoRowAtIndexPath:(NSIndexPath *)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (<UITableViewDropPlaceholderContext> *)dropItem:(void *)arg1 toPlaceholderInsertedAtIndexPath:(void *)arg2 withReuseIdentifier:(void *)arg3 rowHeight:(void *)arg4 cellUpdateHandler:(void *)arg5; // needs 5 arg types, found 10: UIDragItem *, NSIndexPath *, NSString *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UITableViewCell *, void*
- (void)dropItem:(UIDragItem *)arg1 toRowAtIndexPath:(NSIndexPath *)arg2;
- (void)dropItem:(UIDragItem *)arg1 toTarget:(UIDragPreviewTarget *)arg2;
- (NSArray *)items;
- (UITableViewDropProposal *)proposal;
- (<UIDropSession> *)session;

@end
