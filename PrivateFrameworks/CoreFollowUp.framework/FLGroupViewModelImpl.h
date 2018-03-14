/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel> {
    NSString * _groupTitle;
    NSString * _identifier;
    NSMutableArray * _mutableItems;
    NSString * _rowTitle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *groupTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *rowTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (id)debugDescription;
- (id)groupTitle;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)items;
- (bool)restrictionEnabled;
- (id)rowTitle;
- (void)setGroupTitle:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRowTitle:(id)arg1;
- (bool)shouldCoalesceItems;

@end