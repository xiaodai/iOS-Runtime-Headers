/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying> {
    BOOL acceptsEmoji;
    NSInteger autocapitalizationType;
    NSInteger autocorrectionType;
    BOOL contentsIsSingleValue;
    BOOL enablesReturnKeyAutomatically;
    UIColor *insertionPointColor;
    NSUInteger insertionPointWidth;
    NSInteger keyboardAppearance;
    NSInteger keyboardType;
    NSInteger returnKeyType;
    BOOL secureTextEntry;
    NSInteger textLoupeVisibility;
    NSInteger textSelectionBehavior;
    id textSuggestionDelegate;
    struct __CFCharacterSet { } *textTrimmingSet;
}

@property BOOL acceptsEmoji; /* unknown property attribute: VacceptsEmoji */
@property BOOL contentsIsSingleValue; /* unknown property attribute: VcontentsIsSingleValue */
@property NSInteger textSelectionBehavior; /* unknown property attribute: VtextSelectionBehavior */
@property NSInteger textLoupeVisibility; /* unknown property attribute: VtextLoupeVisibility */
@property NSUInteger insertionPointWidth; /* unknown property attribute: VinsertionPointWidth */
@property(retain) UIColor *insertionPointColor; /* unknown property attribute: VinsertionPointColor */
@property(getter=isSecureTextEntry) BOOL secureTextEntry; /* unknown property attribute: VsecureTextEntry */
@property BOOL enablesReturnKeyAutomatically; /* unknown property attribute: VenablesReturnKeyAutomatically */
@property NSInteger returnKeyType; /* unknown property attribute: VreturnKeyType */
@property NSInteger keyboardAppearance; /* unknown property attribute: VkeyboardAppearance */
@property NSInteger keyboardType; /* unknown property attribute: VkeyboardType */
@property NSInteger autocorrectionType; /* unknown property attribute: VautocorrectionType */
@property NSInteger autocapitalizationType; /* unknown property attribute: VautocapitalizationType */
@property __CFCharacterSet *textTrimmingSet;
@property id textSuggestionDelegate;

+ (id)defaultTextInputTraits;
+ (BOOL)keyboardTypeRequiresASCIICapable:(NSInteger)arg1;

- (BOOL)acceptsEmoji;
- (NSInteger)autocapitalizationType;
- (NSInteger)autocorrectionType;
- (BOOL)contentsIsSingleValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)enablesReturnKeyAutomatically;
- (id)init;
- (id)insertionPointColor;
- (NSUInteger)insertionPointWidth;
- (BOOL)isSecureTextEntry;
- (NSInteger)keyboardAppearance;
- (NSInteger)keyboardType;
- (NSInteger)returnKeyType;
- (void)setAcceptsEmoji:(BOOL)arg1;
- (void)setAutocapitalizationType:(NSInteger)arg1;
- (void)setAutocorrectionType:(NSInteger)arg1;
- (void)setContentsIsSingleValue:(BOOL)arg1;
- (void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
- (void)setInsertionPointColor:(id)arg1;
- (void)setInsertionPointWidth:(NSUInteger)arg1;
- (void)setKeyboardAppearance:(NSInteger)arg1;
- (void)setKeyboardType:(NSInteger)arg1;
- (void)setReturnKeyType:(NSInteger)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setTextLoupeVisibility:(NSInteger)arg1;
- (void)setTextSelectionBehavior:(NSInteger)arg1;
- (void)setTextSuggestionDelegate:(id)arg1;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (void)setToDefaultValues;
- (void)setToSecureValues;
- (void)takeTraitsFrom:(id)arg1;
- (NSInteger)textLoupeVisibility;
- (NSInteger)textSelectionBehavior;
- (id)textSuggestionDelegate;
- (struct __CFCharacterSet { }*)textTrimmingSet;

@end