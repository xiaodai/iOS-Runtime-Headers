/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDParagraphProperties, NSMutableArray;

@interface WDParagraph : WDBlock {
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
}

- (id)addAnnotation:(NSInteger)arg1;
- (id)addBookmark:(id)arg1 type:(NSInteger)arg2;
- (id)addBookmark;
- (id)addCharacterRun;
- (id)addDateTime:(id)arg1;
- (id)addEndnote;
- (id)addFieldMarker:(NSInteger)arg1;
- (id)addFieldMarker;
- (id)addFootnote;
- (void)addRun:(id)arg1;
- (id)addSpecialCharacter;
- (id)addSymbol;
- (NSInteger)blockType;
- (NSInteger)characterCount;
- (void)dealloc;
- (id)initWithText:(id)arg1 string:(id)arg2;
- (id)initWithText:(id)arg1;
- (BOOL)isEmpty;
- (id)properties;
- (void)removeLastCharacter:(unsigned short)arg1;
- (void)removeRun:(id)arg1;
- (id)runAt:(NSInteger)arg1;
- (NSInteger)runCount;
- (id)runIterator;
- (id)runs;

@end