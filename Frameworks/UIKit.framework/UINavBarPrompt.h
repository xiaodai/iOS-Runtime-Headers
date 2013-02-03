/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINavigationBar, NSString;

@interface UINavBarPrompt : UIView {
    UINavigationBar *_navBar;
    NSString *_prompt;
}

- (void)clearWeakReference:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithPrompt:(id)arg1 navBar:(id)arg2;
- (id)prompt;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })promptBounds;
- (void)setPrompt:(id)arg1;

@end