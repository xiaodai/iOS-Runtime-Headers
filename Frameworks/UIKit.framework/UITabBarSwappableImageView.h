/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITabBar;

@interface UITabBarSwappableImageView : UIView {
    id _alternate;
    NSInteger _buttonTag;
    NSInteger _currentAnimation;
    BOOL _flipped;
    BOOL _showAlternate;
    UITabBar *_tabBar;
    id _value;
}

- (void)animateImage:(float)arg1 withTabBar:(id)arg2 withTag:(NSInteger)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2;
- (void)setCurrentImage;
- (void)setFlipped:(BOOL)arg1;
- (void)showAlternateImage:(BOOL)arg1;

@end