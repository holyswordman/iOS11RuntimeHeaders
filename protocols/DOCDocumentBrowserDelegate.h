/* Generated by RuntimeBrowser.
 */

@protocol DOCDocumentBrowserDelegate <NSObject>

@required

- (void)browser:(DOCBrowserViewController *)arg1 didCommitPreviewOfDocument:(DOCItem *)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didPickItem:(DOCItem *)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didSelectItems:(NSArray *)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didUpdateCurrentLocationIsWritable:(bool)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didUpdateImportSupportInCurrentLocation:(bool)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 didUpdateNumberOfItems:(unsigned long long)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 isDisplayingEmptyCollection:(bool)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 wantsToShowInfoForItem:(DOCItem *)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 wantsToShowLocation:(DOCConcreteLocation *)arg2;
- (void)browser:(DOCBrowserViewController *)arg1 willDisplayThirdPartyUI:(bool)arg2;
- (void)browserWantsToCreateNewFile:(DOCBrowserViewController *)arg1;
- (void)browserWantsToCreateNewFolder:(DOCBrowserViewController *)arg1;
- (void)dismissButtonWasTappedInBrowser:(DOCBrowserViewController *)arg1;
- (void)locationsButtonWasTappedInBrowser:(DOCBrowserViewController *)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
