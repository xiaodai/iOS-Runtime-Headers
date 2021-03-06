/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface APDLearnMoreViewController : UIViewController <APDDataManagerDelegate, APDGlossaryViewControllerDelegate, APDSearchViewControllerDelegate, APDTOCViewControllerDelegate, APDTopicViewControllerDelegate, UIAlertViewDelegate, UIGestureRecognizerDelegate, UIToolbarDelegate> {
    APDKVOManager *_KVOManager;
    BOOL _RTL;
    APDTOCViewController *_TOCViewController;
    UIBarButtonItem *_backToolbarButton;
    APDDataManager *_dataManager;
    <APDLearnMoreViewControllerDelegate> *_delegate;
    BOOL _dismissTopicViewWhenLoded;
    BOOL _displayAsPopover;
    UIBarButtonItem *_doneToolbarButton;
    UIBarButtonItem *_forwardToolbarButton;
    UINavigationController *_glossaryNavigationController;
    APDGlossaryViewController *_glossaryViewController;
    int _mode;
    BOOL _panning;
    BOOL _panningPending;
    struct CGSize { 
        float width; 
        float height; 
    } _popoverSize;
    BOOL _reloadTopicPending;
    UIColor *_searchBarTintColor;
    UIBarButtonItem *_searchToolbarButton;
    APDSearchViewController *_searchViewController;
    NSString *_selectedTopicName;
    BOOL _showDoneButton;
    UIBarButtonItem *_tocToolbarButton;
    UIToolbar *_toolbar;
    UIView *_toolbarBottomStrokeView;
    UIColor *_toolbarTintColor;
    float _topicContainerOriginX;
    float _topicContainerStartingY;
    UIView *_topicView;
    APDTopicViewController *_topicViewController;
    UIImageView *_topicViewLeftShadow;
    BOOL _topicWebViewAnimating;
    UITapGestureRecognizer *_topicWebViewTapGestureRecognizer;
    BOOL _useDefaultToolbarColor;
    BOOL _viewDidAppeared;
    NSArray *_viewInterfaceOrientations;
}

@property (nonatomic, retain) APDKVOManager *KVOManager;
@property (nonatomic) BOOL RTL;
@property (nonatomic, retain) APDTOCViewController *TOCViewController;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic) UIBarButtonItem *backToolbarButton;
@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, copy) UIColor *cellHighlightedColor;
@property (nonatomic, copy) NSString *configServerAppIdentifier;
@property (nonatomic, copy) NSString *configServerTargetedReleaseVersion;
@property (nonatomic, copy) NSURL *configServerURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APDLearnMoreViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic) UIBarButtonItem *doneToolbarButton;
@property (nonatomic) BOOL enableContextMenu;
@property (nonatomic) UIBarButtonItem *forwardToolbarButton;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *helpVersion;
@property (nonatomic, copy) NSURL *localResourceBundleURL;
@property (nonatomic) int mode;
@property (nonatomic, copy) NSURL *remoteHelpURL;
@property (nonatomic, copy) UIColor *searchBarBarTintColor;
@property (nonatomic, copy) UIColor *searchBarTintColor;
@property (nonatomic) UIBarButtonItem *searchToolbarButton;
@property (nonatomic, retain) APDSearchViewController *searchViewController;
@property (nonatomic, copy) NSString *selectedISOCode;
@property (nonatomic, copy) NSString *selectedTopicID;
@property (nonatomic, copy) NSString *selectedTopicName;
@property (nonatomic) BOOL showDoneButton;
@property (nonatomic) BOOL showGlossaryLinks;
@property (readonly) Class superclass;
@property (nonatomic) UIBarButtonItem *tocToolbarButton;
@property (nonatomic) UIToolbar *toolbar;
@property (nonatomic, copy) UIColor *toolbarBarTintColor;
@property (nonatomic) UIView *toolbarBottomStrokeView;
@property (nonatomic, copy) UIColor *toolbarTintColor;
@property (nonatomic) UIView *topicView;
@property (nonatomic) UIImageView *topicViewLeftShadow;
@property (nonatomic) BOOL translucentBar;
@property (nonatomic) BOOL useRemoteAssetsForLocalHelp;
@property (nonatomic, copy) NSArray *viewInterfaceOrientations;

+ (id)learnMoreViewController;
+ (id)learnMoreViewControllerWithAPDID:(id)arg1;
+ (id)learnMoreViewControllerWithTopicTitle:(id)arg1;
+ (id)version;

- (void).cxx_destruct;
- (id)KVOManager;
- (BOOL)RTL;
- (id)TOCViewController;
- (id)appName;
- (id)backToolbarButton;
- (id)baseURL;
- (id)cellHighlightedColor;
- (id)configServerAppIdentifier;
- (id)configServerTargetedReleaseVersion;
- (id)configServerURL;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)dataManagerRequestFailed:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)deviceType;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismissTopicWebView;
- (void)dismissTopicWebViewWithDuration:(float)arg1 animated:(BOOL)arg2;
- (void)dismissViewController:(id)arg1;
- (id)doneToolbarButton;
- (BOOL)enableContextMenu;
- (id)forwardToolbarButton;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)helpVersion;
- (id)init;
- (BOOL)isPortrait;
- (id)localResourceBundleURL;
- (int)mode;
- (void)navigationTableViewControllerOnSameTopicSelected:(id)arg1;
- (void)navigationViewController:(id)arg1 showNavigationTopic:(id)arg2;
- (void)onBackButtonTapped:(id)arg1;
- (void)onDoneTapped:(id)arg1;
- (void)onForwardButtonTapped:(id)arg1;
- (void)onLocaleChanged:(id)arg1;
- (void)onLocalizationsListChanged:(id)arg1;
- (void)onRemoteHelpURLChanged:(id)arg1;
- (void)onSearchButtonTapped:(id)arg1;
- (void)onSectionListChanged:(id)arg1;
- (void)onTocButtonTapped:(id)arg1;
- (void)panned:(id)arg1;
- (int)positionForBar:(id)arg1;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)presentViewController:(id)arg1;
- (id)remoteHelpURL;
- (id)searchBarBarTintColor;
- (id)searchBarTintColor;
- (id)searchToolbarButton;
- (id)searchViewController;
- (void)searchViewControllerSearchBarShown:(id)arg1;
- (void)searchViewControllerSearchHidden:(id)arg1;
- (void)searchViewControllerSearchWillHide:(id)arg1;
- (id)selectedISOCode;
- (id)selectedTopicID;
- (id)selectedTopicName;
- (void)setAppName:(id)arg1;
- (void)setBackToolbarButton:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setBaseURL:(id)arg1 appName:(id)arg2 deviceType:(id)arg3 helpVersion:(id)arg4;
- (void)setCellHighlightedColor:(id)arg1;
- (void)setConfigServerAppIdentifier:(id)arg1;
- (void)setConfigServerTargetedReleaseVersion:(id)arg1;
- (void)setConfigServerURL:(id)arg1;
- (void)setContentSizeForViewInPopover:(struct CGSize { float x1; float x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setDoneToolbarButton:(id)arg1;
- (void)setEnableContextMenu:(BOOL)arg1;
- (void)setForwardToolbarButton:(id)arg1;
- (void)setHelpVersion:(id)arg1;
- (void)setKVOManager:(id)arg1;
- (void)setLocalResourceBundleURL:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setPreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRTL:(BOOL)arg1;
- (void)setRemoteHelpURL:(id)arg1;
- (void)setSearchBarBarTintColor:(id)arg1;
- (void)setSearchBarTintColor:(id)arg1;
- (void)setSearchToolbarButton:(id)arg1;
- (void)setSearchViewController:(id)arg1;
- (void)setSelectedISOCode:(id)arg1;
- (void)setSelectedTopicID:(id)arg1;
- (void)setSelectedTopicName:(id)arg1;
- (void)setShowDoneButton:(BOOL)arg1;
- (void)setShowGlossaryLinks:(BOOL)arg1;
- (void)setSupportPortrait:(BOOL)arg1 upsideDown:(BOOL)arg2 landscapeLeft:(BOOL)arg3 landscapeRight:(BOOL)arg4;
- (void)setTOCViewController:(id)arg1;
- (void)setTocToolbarButton:(id)arg1;
- (void)setToolbar:(id)arg1;
- (void)setToolbarBarTintColor:(id)arg1;
- (void)setToolbarBottomStrokeView:(id)arg1;
- (void)setToolbarTintColor:(id)arg1;
- (void)setTopicView:(id)arg1;
- (void)setTopicViewLeftShadow:(id)arg1;
- (void)setTranslucentBar:(BOOL)arg1;
- (void)setUseRemoteAssetsForLocalHelp:(BOOL)arg1;
- (void)setViewInterfaceOrientations:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)showDoneButton;
- (BOOL)showGlossaryLinks;
- (void)showGlossaryTopic:(id)arg1;
- (void)showTopicWebView;
- (void)showTopicWebViewAnimated:(BOOL)arg1 duration:(float)arg2;
- (void)showWebViewWithTopic:(id)arg1 animated:(BOOL)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (id)tocToolbarButton;
- (id)toolbar;
- (id)toolbarBarTintColor;
- (id)toolbarBottomStrokeView;
- (id)toolbarTintColor;
- (id)topicView;
- (id)topicViewController:(id)arg1 lastScrollPositionForTopic:(id)arg2;
- (void)topicViewController:(id)arg1 loadMovieURL:(id)arg2;
- (BOOL)topicViewController:(id)arg1 loadNavigationItem:(id)arg2 request:(id)arg3;
- (void)topicViewControllerLoadTopic:(id)arg1;
- (void)topicViewControllerLoadTopicFailed:(id)arg1;
- (void)topicViewControllerSelectedTopicIDChanged:(id)arg1;
- (void)topicViewControllerWebViewDidFinishLoading:(id)arg1;
- (id)topicViewLeftShadow;
- (BOOL)topicWebViewCanGoBack;
- (BOOL)topicWebViewCanGoForward;
- (BOOL)translucentBar;
- (void)updateLocalizationModel;
- (void)updateLocalizedStrings;
- (void)updateScrollToTop;
- (void)updateTOCToolbarAccessibilityHint;
- (void)updateToolbarButtons;
- (void)updateViewLayout;
- (BOOL)useRemoteAssetsForLocalHelp;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (id)viewInterfaceOrientations;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
