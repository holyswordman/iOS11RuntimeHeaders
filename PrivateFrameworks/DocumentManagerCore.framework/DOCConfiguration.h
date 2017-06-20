/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

@interface DOCConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _capNumberOfItemsDynamically;
    DOCConcreteLocation * _defaultLocation;
    NSArray * _documentTypes;
    NSArray * _excludedDocumentTypes;
    bool  _forPickingDocuments;
    NSArray * _forbiddenActionIdentifiers;
    NSArray * _hiddenSourcesIdentifiers;
    NSString * _hostIdentifier;
    bool  _inProcess;
    unsigned long long  _interactionMode;
    unsigned long long  _maximumNumberOfItemsToFetch;
    unsigned long long  _maximumNumberOfRows;
    bool  _neverCreateBookmarkForOpenInPlace;
    bool  _onlyShowiCloudDrive;
    bool  _pickingItemsShouldBumpLastOpenDate;
    bool  _restoreLastVisitedLocation;
    NSString * _roleIdentifier;
    bool  _shouldAdjustContentInset;
    bool  _showCollectionControls;
    bool  _showListModeButton;
    bool  _showLocationPopover;
    bool  _showSearchInCollection;
    bool  _showSearchInNavBar;
    bool  _singleSourceMode;
    bool  _sourceIsManaged;
    bool  _sourceIsWritableFileProvider;
    bool  _suppressBlackCallout;
    unsigned long long  _targetSelectionBrowserMode;
    FPSandboxingURLWrapper * _url;
    bool  _useExpandedSourceList;
    bool  _useSharedQuickLook;
}

@property bool capNumberOfItemsDynamically;
@property (retain) DOCConcreteLocation *defaultLocation;
@property (nonatomic, copy) NSArray *documentTypes;
@property (nonatomic, copy) NSArray *excludedDocumentTypes;
@property bool forPickingDocuments;
@property (retain) NSArray *forbiddenActionIdentifiers;
@property (nonatomic, copy) NSArray *hiddenSourcesIdentifiers;
@property (copy) NSString *hostIdentifier;
@property bool inProcess;
@property unsigned long long interactionMode;
@property unsigned long long maximumNumberOfItemsToFetch;
@property unsigned long long maximumNumberOfRows;
@property bool neverCreateBookmarkForOpenInPlace;
@property bool onlyShowiCloudDrive;
@property bool pickingItemsShouldBumpLastOpenDate;
@property bool restoreLastVisitedLocation;
@property (nonatomic, copy) NSString *roleIdentifier;
@property bool shouldAdjustContentInset;
@property bool showCollectionControls;
@property bool showListModeButton;
@property bool showLocationPopover;
@property bool showSearchInCollection;
@property bool showSearchInNavBar;
@property bool singleSourceMode;
@property bool sourceIsManaged;
@property bool sourceIsWritableFileProvider;
@property bool suppressBlackCallout;
@property unsigned long long targetSelectionBrowserMode;
@property (retain) FPSandboxingURLWrapper *url;
@property bool useExpandedSourceList;
@property bool useSharedQuickLook;

+ (id)configurationForExportingDocumentsToURLs:(id)arg1 mode:(unsigned long long)arg2;
+ (id)configurationForImportingDocumentsWithContentTypes:(id)arg1 mode:(unsigned long long)arg2;
+ (id)configurationForOpeningDocumentsOfApplicationWithBundleIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)capNumberOfItemsDynamically;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultLocation;
- (id)documentTypes;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedDocumentTypes;
- (bool)forPickingDocuments;
- (id)forbiddenActionIdentifiers;
- (id)hiddenSourcesIdentifiers;
- (id)hostIdentifier;
- (bool)inProcess;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interactionMode;
- (unsigned long long)maximumNumberOfItemsToFetch;
- (unsigned long long)maximumNumberOfRows;
- (bool)neverCreateBookmarkForOpenInPlace;
- (bool)onlyShowiCloudDrive;
- (bool)pickingItemsShouldBumpLastOpenDate;
- (bool)restoreLastVisitedLocation;
- (id)roleIdentifier;
- (void)setCapNumberOfItemsDynamically:(bool)arg1;
- (void)setDefaultLocation:(id)arg1;
- (void)setDocumentTypes:(id)arg1;
- (void)setExcludedDocumentTypes:(id)arg1;
- (void)setForPickingDocuments:(bool)arg1;
- (void)setForbiddenActionIdentifiers:(id)arg1;
- (void)setHiddenSourcesIdentifiers:(id)arg1;
- (void)setHostIdentifier:(id)arg1;
- (void)setInProcess:(bool)arg1;
- (void)setInteractionMode:(unsigned long long)arg1;
- (void)setMaximumNumberOfItemsToFetch:(unsigned long long)arg1;
- (void)setMaximumNumberOfRows:(unsigned long long)arg1;
- (void)setNeverCreateBookmarkForOpenInPlace:(bool)arg1;
- (void)setOnlyShowiCloudDrive:(bool)arg1;
- (void)setPickingItemsShouldBumpLastOpenDate:(bool)arg1;
- (void)setRestoreLastVisitedLocation:(bool)arg1;
- (void)setRoleIdentifier:(id)arg1;
- (void)setShouldAdjustContentInset:(bool)arg1;
- (void)setShowCollectionControls:(bool)arg1;
- (void)setShowListModeButton:(bool)arg1;
- (void)setShowLocationPopover:(bool)arg1;
- (void)setShowSearchInCollection:(bool)arg1;
- (void)setShowSearchInNavBar:(bool)arg1;
- (void)setSingleSourceMode:(bool)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)setSourceIsWritableFileProvider:(bool)arg1;
- (void)setSuppressBlackCallout:(bool)arg1;
- (void)setTargetSelectionBrowserMode:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setUseExpandedSourceList:(bool)arg1;
- (void)setUseSharedQuickLook:(bool)arg1;
- (bool)shouldAdjustContentInset;
- (bool)showCollectionControls;
- (bool)showListModeButton;
- (bool)showLocationPopover;
- (bool)showSearchInCollection;
- (bool)showSearchInNavBar;
- (bool)singleSourceMode;
- (bool)sourceIsManaged;
- (bool)sourceIsWritableFileProvider;
- (bool)suppressBlackCallout;
- (unsigned long long)targetSelectionBrowserMode;
- (id)url;
- (bool)useExpandedSourceList;
- (bool)useSharedQuickLook;

@end
