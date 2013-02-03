/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIView;

@interface ABContentController : NSObject <ABContentControllerProtocol> {
    void *_addressBook;
    id _contentControllerDelegate;
    UIView *_contentLayer;
}

- (void*)addressBook;
- (void)back:(BOOL)arg1 save:(BOOL)arg2;
- (void)cleanUpContentLayer;
- (id)contentControllerDelegate;
- (id)contentView;
- (BOOL)contentViewIsVisible;
- (void)dealloc;
- (void)displayScrollerIndicators;
- (id)initWithContentControllerDelegate:(id)arg1 addressBook:(void*)arg2;
- (void)preloadController;
- (void)reload;
- (void)setContentControllerDelegate:(id)arg1;
- (BOOL)table:(id)arg1 showDisclosureForRow:(NSInteger)arg2;

@end