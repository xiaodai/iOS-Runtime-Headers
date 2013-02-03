/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, OADTextBodyProperties, OADTextListStyle;

@interface OADTextBody : NSObject {
    NSMutableArray *mParagraphs;
    OADTextBodyProperties *mProperties;
    OADTextListStyle *mTextListStyle;
}

- (id)addParagraph;
- (void)dealloc;
- (void)flattenProperties;
- (id)init;
- (BOOL)isEmpty;
- (id)overrideTextListStyle;
- (id)paragraphAtIndex:(NSInteger)arg1;
- (NSInteger)paragraphCount;
- (id)plainText;
- (id)properties;
- (void)removeTrailingNewlines;
- (void)setParentTextListStyle:(id)arg1;
- (id)textListStyle;

@end