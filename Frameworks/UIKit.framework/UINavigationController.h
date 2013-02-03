/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UINavigationBar, NSMutableArray, <UINavigationControllerDelegate>, UIViewController;

@interface UINavigationController : UIViewController {
    struct { 
        unsigned int isAnimating : 1; 
        unsigned int isShown : 1; 
        unsigned int isAlreadyPoppingNavigationItem : 1; 
        unsigned int isPushing : 1; 
        unsigned int needsDeferredTransition : 1; 
        unsigned int isNavigationBarHidden : 1; 
    UIViewController *_bottomBarRedisplayViewController;
    UIView *_containerView;
    float _currentScrollContentInsetDelta;
    <UINavigationControllerDelegate> *_delegate;
    UIViewController *_disappearingViewController;
    UINavigationBar *_navigationBar;
    Class _navigationBarClass;
    } _navigationControllerFlags;
    UIView *_navigationTransitionView;
    float _previousScrollContentInsetDelta;
    float _previousScrollContentOffsetDelta;
    UIViewController *_topViewControllerDuringWillAppear;
    NSMutableArray *_viewControllers;
}

@property(retain) UIViewController *disappearingViewController; /* unknown property attribute: V_disappearingViewController */
@property <UINavigationControllerDelegate> *delegate; /* unknown property attribute: V_delegate */
@property(readonly) UIViewController *bottomViewController;
@property(readonly) UIViewController *firstViewController;
@property(readonly) UINavigationBar *navigationBar;
@property(readonly) UITransitionView *navigationTransitionView;
@property(readonly) UIViewController *previousViewController;
@property(retain,readonly) UIViewController *topViewController;
@property(copy) NSArray *viewControllers;
@property(retain,readonly) UIViewController *visibleViewController;
@property(getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property BOOL needsDeferredTransition;
@property(getter=isShown) BOOL shown;

+ (void)setCustomTransitionDuration:(double)arg1;

- (void)_applyScrollContentInsetDelta:(float)arg1 toScrollView:(id)arg2;
- (void)_applyScrollContentOffsetDelta:(float)arg1 toScrollView:(id)arg2;
- (void)_finishedHideShowNavigationBar;
- (BOOL)_hasTranslucentNavigationBar;
- (void)_layoutNavigationTransitionView;
- (void)_layoutNavigationTransitionViewForScrollView:(id)arg1;
- (id)_popViewControllerWithTransition:(NSInteger)arg1 allowPoppingLast:(BOOL)arg2;
- (void)_positionNavigationBarHidden:(BOOL)arg1;
- (void)_restoreOriginalInsetAndOffsetToScrollView:(id)arg1;
- (void)_startTransition:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_updateNavigationBarForInterfaceOrientation:(NSInteger)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)bottomViewController;
- (void)dealloc;
- (id)defaultPNGName;
- (id)delegate;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)disappearingViewController;
- (double)durationForTransition:(NSInteger)arg1;
- (BOOL)editing;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long)firstSUNavigationControllerTag;
- (id)firstViewController;
- (id)historyItemsForViewControllers;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (BOOL)isNavigationBarHidden;
- (BOOL)isShown;
- (void)loadView;
- (void)makeModalViewControllerTopViewController;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)moreListTableCell;
- (void)navigationBar:(id)arg1 buttonClicked:(NSInteger)arg2;
- (void)navigationBar:(id)arg1 didSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (id)navigationBar;
- (Class)navigationBarClass;
- (id)navigationTransitionView;
- (BOOL)needsDeferredTransition;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToRootViewControllerWithTransition:(NSInteger)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popToViewController:(id)arg1 transition:(NSInteger)arg2;
- (id)popToViewControllerWithSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerWithAnimationTransition:(NSInteger)arg1 duration:(double)arg2 curve:(NSInteger)arg3;
- (id)popViewControllerWithTransition:(NSInteger)arg1;
- (id)previousViewController;
- (void)purgeMemoryForReason:(NSInteger)arg1 exceptLast:(BOOL)arg2;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (void)pushControllersFromHistoryItems:(id)arg1 isComplete:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 transition:(NSInteger)arg2 forceImmediate:(BOOL)arg3;
- (void)pushViewController:(id)arg1 transition:(NSInteger)arg2;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)setDelegate:(id)arg1;
- (void)setDisappearingViewController:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setInMoreList:(BOOL)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setNavigationBarClass:(Class)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setNeedsDeferredTransition:(BOOL)arg1;
- (void)setShown:(BOOL)arg1;
- (void)setViewControllers:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (id)tabBarItem;
- (id)topViewController;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)updateTitleForViewController:(id)arg1;
- (NSUInteger)viewControllerCount;
- (id)viewControllers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (id)visibleViewController;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;

@end