/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADParagraphProperties, NSMutableArray, OADCharacterProperties;

@interface OADParagraph : NSObject {
    OADCharacterProperties *mParagraphEndCharacterProperties;
    OADParagraphProperties *mProperties;
    NSMutableArray *mTextRuns;
}

- (id)addDateTimeField;
- (id)addGenericTextField;
- (id)addRegularTextRun;
- (id)addSlideNumberField;
- (id)addTextLineBreak;
- (id)bulletCharacterProperties;
- (void)dealloc;
- (BOOL)hasBulletCharacterProperties;
- (id)init;
- (BOOL)isEmpty;
- (id)paragraphEndCharacterProperties;
- (id)plainText;
- (id)properties;
- (void)setParentTextListStyle:(id)arg1;
- (id)textRunAtIndex:(NSInteger)arg1;
- (NSInteger)textRunCount;

@end