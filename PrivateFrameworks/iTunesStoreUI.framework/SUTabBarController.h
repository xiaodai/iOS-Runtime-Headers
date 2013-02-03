/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTabBarController : UITabBarController <UITabBarControllerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _allowCustomization : 1;
    unsigned int _adjustedFramesForModalPresent : 1;
    struct __CFArray { } *_observers;
    } _selectedViewFrameBeforeAdjust;
}

@property(getter=isCustomizable) BOOL customizable;

- (void)_adjustViewsAfterModalDismissal;
- (void)_adjustViewsBeforeModalPresentation;
- (void)_configureStatusBarForTransitionToViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_fixControllersForTransitionFromMoreList;
- (void)_fixControllersForTransitionToMoreListWithSelectedController:(id)arg1;
- (id)_navigationControllerWithTag:(unsigned long)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)dismissViewControllerWithModalTransition:(NSInteger)arg1;
- (id)init;
- (BOOL)isCustomizable;
- (void)modalDismissTransitionDidComplete;
- (id)moreListController;
- (void)presentViewController:(id)arg1 withModalTransition:(NSInteger)arg2;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (void)removeObserver:(id)arg1;
- (id)selectedViewControllerIgnoringMoreList;
- (void)setCustomizable:(BOOL)arg1;
- (void)setSelectedIndex:(NSUInteger)arg1;
- (void)setViewControllers:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 willEndCustomizingViewControllers:(id)arg2 changed:(BOOL)arg3;
- (id)topNavigationController;
- (void)updateMoreListState;

@end