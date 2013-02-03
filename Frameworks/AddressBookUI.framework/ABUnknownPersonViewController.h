/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABUnknownPersonViewControllerDelegate>, NSString;

@interface ABUnknownPersonViewController : UIViewController {
    BOOL _allowsActions;
    BOOL _allowsAddingToAddressBook;
    NSString *_alternateName;
    id _helper;
    NSString *_message;
    <ABUnknownPersonViewControllerDelegate> *_unknownPersonViewDelegate;
}

@property BOOL allowsAddingToAddressBook; /* unknown property attribute: V_allowsAddingToAddressBook */
@property BOOL allowsActions; /* unknown property attribute: V_allowsActions */
@property(copy) NSString *message; /* unknown property attribute: V_message */
@property(copy) NSString *alternateName; /* unknown property attribute: V_alternateName */
@property void *addressBook;
@property void *displayedPerson;
@property <ABUnknownPersonViewControllerDelegate> *unknownPersonViewDelegate;

+ (id)defaultLabelsForProperty:(NSInteger)arg1 person:(void*)arg2;

- (void*)addressBook;
- (BOOL)allowsActions;
- (BOOL)allowsAddingToAddressBook;
- (id)alternateName;
- (void)dealloc;
- (void*)displayedPerson;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)message;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setMessage:(id)arg1;
- (void)setStringValue:(id)arg1 forProperty:(NSInteger)arg2;
- (void)setUnknownPersonViewDelegate:(id)arg1;
- (id)unknownPersonViewDelegate;
- (void)viewWillAppear:(BOOL)arg1;

@end