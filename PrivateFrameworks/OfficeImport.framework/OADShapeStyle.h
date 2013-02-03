/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADFontReference, OADStyleMatrixReference;

@interface OADShapeStyle : NSObject <NSCopying> {
    OADStyleMatrixReference *mEffectReference;
    OADStyleMatrixReference *mFillReference;
    OADFontReference *mFontReference;
    OADStyleMatrixReference *mLineReference;
}

- (void)applyToParagraphProperties:(id)arg1;
- (void)applyToShapeProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)applyToTextBody:(id)arg1;
- (void)applyToTextListStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)effectReference;
- (id)fillReference;
- (id)fontReference;
- (id)lineReference;
- (void)setEffectReference:(id)arg1;
- (void)setFillReference:(id)arg1;
- (void)setFontReference:(id)arg1;
- (void)setLineReference:(id)arg1;

@end