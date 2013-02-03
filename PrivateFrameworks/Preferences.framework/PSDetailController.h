/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIView, UIKeyboard, PSEditingPane;

@interface PSDetailController : PSViewController {
    UIKeyboard *_keyboard;
    BOOL _keyboardVisible;
    PSEditingPane *_pane;
    UIView *_view;
}

- (void)_addKeyboardView;
- (void)_updateNavBarButtons;
- (void)cancelButtonClicked:(id)arg1;
- (void)dealloc;
- (void)doneButtonClicked:(id)arg1;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)keyboardVisible;
- (void)navigationBarButtonClicked:(NSInteger)arg1;
- (id)navigationTitle;
- (id)pane;
- (BOOL)popController;
- (void)saveChanges;
- (void)setKeyboardVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPane:(id)arg1;
- (void)suspend;
- (id)view;
- (void)viewWillBecomeVisible:(void*)arg1;
- (void)viewWillRedisplay;

@end