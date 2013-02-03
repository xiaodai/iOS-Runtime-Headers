/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIView, UIImageView, NSMutableArray;

@interface PLCameraButton : UIThreePartButton {
    NSMutableArray *_buttonImages;
    UIImageView *_cameraIcon;
    BOOL _isLandscape;
    BOOL _lockEnabled;
    UIView *_rotationHolder;
}

- (void)_setHighlightOnMouseDown:(BOOL)arg1;
- (void)dealloc;
- (id)initWithDefaultSize;
- (void)lockEnabled:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)setDeviceOrientation:(NSInteger)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)updateButtonBackgrounds;

@end