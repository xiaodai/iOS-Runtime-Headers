/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIFont, NSString, NSTimer;

@interface TPLockTextView : UIView {
    float _fps;
    NSString *_label;
    UIFont *_labelFont;
    double _maskStartTime;
    NSTimer *_maskTimer;
    struct CGImage { } *_textCache;
    char *_textData;
}

- (void)_cacheLabel:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithLabel:(id)arg1 fontSize:(float)arg2;
- (BOOL)isAnimating;
- (id)label;
- (void)movedFromWindow:(id)arg1;
- (void)setFPS:(float)arg1;
- (void)startAnimation;
- (void)stopAnimation;

@end