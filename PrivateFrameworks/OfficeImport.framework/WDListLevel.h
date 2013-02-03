/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDOfficeArt, WDCharacterProperties, WDParagraphProperties, NSMutableString;

@interface WDListLevel : NSObject {
    WDCharacterProperties *mCharacterProperties;
    WDOfficeArt *mImage;
    NSInteger mJustification;
    BOOL mLegacy;
    NSInteger mLegacyIndent;
    NSInteger mLegacySpace;
    BOOL mLegal;
    NSInteger mNumberFormat;
    WDParagraphProperties *mParagraphProperties;
    BOOL mRestartNumbering;
    NSInteger mStartNumber;
    NSInteger mSuffix;
    NSMutableString *mText;
}

- (id)characterProperties;
- (void)dealloc;
- (id)image;
- (BOOL)imageBullet;
- (BOOL)imageBulletOverridden;
- (id)initWithDocument:(id)arg1;
- (NSInteger)justification;
- (BOOL)justificationOverridden;
- (BOOL)legacy;
- (long)legacyIndent;
- (long)legacySpace;
- (BOOL)legal;
- (BOOL)legalOverridden;
- (NSInteger)numberFormat;
- (BOOL)numberFormatOverridden;
- (id)paragraphProperties;
- (BOOL)restartNumbering;
- (BOOL)restartNumberingOverridden;
- (void)setImage:(id)arg1;
- (void)setJustification:(NSInteger)arg1;
- (void)setLegacy:(BOOL)arg1;
- (void)setLegacyIndent:(long)arg1;
- (void)setLegacySpace:(long)arg1;
- (void)setLegal:(BOOL)arg1;
- (void)setNumberFormat:(NSInteger)arg1;
- (void)setRestartNumbering:(BOOL)arg1;
- (void)setStartNumber:(long)arg1;
- (void)setSuffix:(NSInteger)arg1;
- (void)setText:(id)arg1;
- (long)startNumber;
- (BOOL)startNumberOverridden;
- (NSInteger)suffix;
- (BOOL)suffixOverridden;
- (id)text;
- (BOOL)textOverridden;

@end