/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUWebView : UIWebDocumentView {
    unsigned int _adjustHeightToFit : 1;
    id _loadDelegate;
    NSString *_stylesheet;
}

@property(retain) NSString *stylesheet; /* unknown property attribute: V_stylesheet */
@property id loadDelegate; /* unknown property attribute: V_loadDelegate */
@property BOOL adjustHeightToFit;

- (BOOL)adjustHeightToFit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)loadDelegate;
- (void)setAdjustHeightToFit:(BOOL)arg1;
- (void)setHTMLFragment:(id)arg1;
- (void)setLoadDelegate:(id)arg1;
- (void)setPlaintextString:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (id)stylesheet;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;

@end