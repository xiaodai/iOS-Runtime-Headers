/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPLCDTextView, TPLCDSubImageView;

@interface TPLCDView : UIImageView {
    unsigned int _layoutAsLabelled : 1;
    TPLCDSubImageView *_imageView;
    TPLCDTextView *_labelView;
    TPLCDTextView *_secondLineTextView;
    TPLCDTextView *_textView;
}

+ (id)backgroundImage;
+ (float)defaultHeight;
+ (float)labelFontSize;
+ (void)preloadImages;
+ (float)textFontSize;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_text1Frame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_text2Frame;
- (void)blinkLabel;
- (void)dealloc;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)initWithDefaultSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (id)secondLineText;
- (void)setContentsAlpha:(float)arg1;
- (void)setLabel:(id)arg1 animate:(BOOL)arg2;
- (void)setLabel:(id)arg1;
- (void)setLayoutAsLabelled:(BOOL)arg1;
- (void)setSecondLineText:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setSubImage:(id)arg1;
- (void)setText:(id)arg1;
- (id)subImage;
- (id)text;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textFrame;

@end