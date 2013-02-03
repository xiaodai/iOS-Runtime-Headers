/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDDocument, WDStyle;

@interface WDListDefinition : NSObject {
    WDDocument *mDocument;
    NSMutableArray *mLevels;
    NSInteger mListId;
    WDStyle *mListStyle;
    WDStyle *mListStyleLink;
    NSInteger mType;
}

- (id)addLevel;
- (void)dealloc;
- (id)document;
- (id)initWithDocument:(id)arg1;
- (id)levelAt:(NSInteger)arg1;
- (NSInteger)levelCount;
- (NSInteger)listId;
- (id)listStyle;
- (id)listStyleLink;
- (void)setListId:(NSInteger)arg1;
- (void)setListStyle:(id)arg1;
- (void)setListStyleLink:(id)arg1;
- (void)setType:(NSInteger)arg1;
- (NSInteger)type;

@end