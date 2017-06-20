/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactListViewController : UITableViewController <CNAvatarCardControllerDelegate, CNContactDataSourceDelegate, CNContactListBannerViewDelegate, CNContactViewControllerDelegate, CNUIObjectViewControllerDelegate, CNUIPeopleGroupsGridViewControllerDelegate, CNVCardImportControllerDelegate, CNVCardImportControllerPresentationDelegate, UIGestureRecognizerDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDragDestinationDelegate, UITableViewDragSourceDelegate> {
    bool  _allowsSearching;
    CNAvatarCardController * _cardController;
    CNContactFormatter * _contactFormatter;
    double  _contentOffsetDueToMeContactBanner;
    NSObject<CNContactDataSource> * _dataSource;
    <CNContactListViewControllerDelegate> * _delegate;
    CNUIContactsEnvironment * _environment;
    CNUIPeopleGroupsGridViewController * _groupsGridController;
    CNAvatarViewController * _meBannerAvatarController;
    CNContactListBannerView * _meContactBanner;
    NSString * _meContactBannerFootnoteLabel;
    NSString * _meContactBannerFootnoteValue;
    _UIContentUnavailableView * _noContactsView;
    NSArray * _pendingLayoutBlocks;
    bool  _pendingSearchControllerActivation;
    NSString * _pendingSearchQuery;
    CNContact * _preferredForNameMeContact;
    bool  _presentsSearchUI;
    UISearchBar * _searchBar;
    id /* block */  _searchCompletionBlock;
    UISearchController * _searchController;
    CNContactListViewController * _searchResultsController;
    bool  _shouldAllowDrags;
    bool  _shouldAllowDrops;
    bool  _shouldAutoHideMeContactBanner;
    bool  _shouldDisplayGroupsGrid;
    bool  _shouldDisplayMeContactBanner;
    bool  _shouldRefreshMeContact;
    bool  _shouldUseLargeTitle;
    NSArray * _tableViewHeaderConstraints;
    CNVCardImportController * _vCardImportController;
}

@property (nonatomic) bool allowsSearching;
@property (nonatomic, retain) CNAvatarCardController *cardController;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, readonly) double contentOffsetDueToMeContactBanner;
@property (nonatomic, retain) NSObject<CNContactDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNUIContactsEnvironment *environment;
@property (nonatomic, retain) CNUIPeopleGroupsGridViewController *groupsGridController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNAvatarViewController *meBannerAvatarController;
@property (nonatomic, retain) CNContactListBannerView *meContactBanner;
@property (nonatomic, copy) NSString *meContactBannerFootnoteLabel;
@property (nonatomic, copy) NSString *meContactBannerFootnoteValue;
@property (nonatomic, readonly) _UIContentUnavailableView *noContactsView;
@property (nonatomic, retain) NSArray *pendingLayoutBlocks;
@property (nonatomic) bool pendingSearchControllerActivation;
@property (nonatomic, retain) NSString *pendingSearchQuery;
@property (nonatomic, readonly) CNContact *preferredForNameMeContact;
@property (nonatomic, readonly) bool presentsSearchUI;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (nonatomic, copy) id /* block */ searchCompletionBlock;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) CNContactListViewController *searchResultsController;
@property (getter=isSearching, nonatomic, readonly) bool searching;
@property (nonatomic, readonly) NSArray *selectedContacts;
@property (nonatomic) bool shouldAllowDrags;
@property (nonatomic) bool shouldAllowDrops;
@property (nonatomic) bool shouldAutoHideMeContactBanner;
@property (nonatomic) bool shouldDisplayGroupsGrid;
@property (nonatomic) bool shouldDisplayMeContactBanner;
@property (nonatomic) bool shouldRefreshMeContact;
@property (nonatomic, readonly) bool shouldUseLargeTitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tableViewHeaderConstraints;
@property (nonatomic, retain) CNVCardImportController *vCardImportController;

- (void).cxx_destruct;
- (void)_applicationEnteringForeground:(id)arg1;
- (id)_contactAtIndexPath:(id)arg1;
- (void)_searchBarDidEndEditing:(id)arg1;
- (id)_sections;
- (bool)_tableView:(id)arg1 canHandleDropSession:(id)arg2;
- (id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)_updateCountStringNow:(bool)arg1;
- (bool)allowsSearching;
- (long long)avatarCardController:(id)arg1 presentationResultForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2;
- (void)beginSearch:(id)arg1;
- (bool)canBecomeFirstResponder;
- (void)cancelSearch:(id)arg1;
- (id)cardController;
- (void)configureNavigationBarForLargeTitles;
- (void)contactDataSourceDidChange:(id)arg1;
- (void)contactDataSourceDidChangeDisplayName:(id)arg1;
- (id)contactFormatter;
- (void)contactStoreDidChangeWithNotification:(id)arg1;
- (double)contentOffsetDueToMeContactBanner;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (id)dragItemsForIndexPath:(id)arg1;
- (id)environment;
- (id)groupsGridController;
- (id)hostingViewControllerForController:(id)arg1;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2 shouldUseLargeTitle:(bool)arg3;
- (id)initWithDataSource:(id)arg1 searchable:(bool)arg2 environment:(id)arg3 shouldUseLargeTitle:(bool)arg4;
- (id)initWithDataSource:(id)arg1 shouldUseLargeTitle:(bool)arg2;
- (id)initWithStyle:(long long)arg1;
- (bool)isContactWithIdentifierMeContactOrLinkedToMeContact:(id)arg1;
- (bool)isHandlingSearch;
- (bool)isSearching;
- (void)loadView;
- (id)meBannerAvatarController;
- (id)meContactBanner;
- (id)meContactBannerFootnoteLabel;
- (id)meContactBannerFootnoteValue;
- (id)noContactsView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pendingLayoutBlocks;
- (bool)pendingSearchControllerActivation;
- (id)pendingSearchQuery;
- (void)peopleGroupsGridViewControllerDidChange:(id)arg1;
- (void)performWhenViewIsLaidOut:(id /* block */)arg1;
- (id)preferredForNameMeContact;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (bool)presentsSearchUI;
- (void)refreshTableViewHeader;
- (void)refreshTableViewHeaderIfVisible;
- (void)reloadContacts;
- (id)searchBar;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id /* block */)searchCompletionBlock;
- (id)searchController;
- (void)searchForString:(id)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (id)searchResultsController;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (bool)selectContact:(id)arg1 animated:(bool)arg2 scrollPosition:(long long)arg3;
- (void)selectRowAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(long long)arg3;
- (id)selectedContacts;
- (void)setAllowsSearching:(bool)arg1;
- (void)setCardController:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroupsGridController:(id)arg1;
- (void)setMeBannerAvatarController:(id)arg1;
- (void)setMeContactBanner:(id)arg1;
- (void)setMeContactBannerFootnoteLabel:(id)arg1;
- (void)setMeContactBannerFootnoteValue:(id)arg1;
- (void)setPendingLayoutBlocks:(id)arg1;
- (void)setPendingSearchControllerActivation:(bool)arg1;
- (void)setPendingSearchQuery:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSearchCompletionBlock:(id /* block */)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchResultsController:(id)arg1;
- (void)setShouldAllowDrags:(bool)arg1;
- (void)setShouldAllowDrops:(bool)arg1;
- (void)setShouldAutoHideMeContactBanner:(bool)arg1;
- (void)setShouldDisplayGroupsGrid:(bool)arg1;
- (void)setShouldDisplayMeContactBanner:(bool)arg1;
- (void)setShouldRefreshMeContact:(bool)arg1;
- (void)setTableViewHeaderConstraints:(id)arg1;
- (void)setVCardImportController:(id)arg1;
- (void)setupForMultiSelection;
- (bool)shouldAllowDrags;
- (bool)shouldAllowDrops;
- (bool)shouldAutoHideMeContactBanner;
- (bool)shouldDisplayGroupsGrid;
- (bool)shouldDisplayMeContactBanner;
- (bool)shouldRefreshMeContact;
- (bool)shouldUseLargeTitle;
- (void)startSearching;
- (void)startSearchingForString:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableViewHeaderConstraints;
- (bool)updateFrameAndDisplayNoContactsViewIfNeeded;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)vCardImportController;
- (void)vCardImportController:(id)arg1 didSaveContact:(id)arg2;
- (void)vCardImportController:(id)arg1 presentViewController:(id)arg2 animated:(bool)arg3;
- (void)vCardImportControllerDidCompleteQueue:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
