/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDSStyle;

@interface GQDWPParagraph : GQDWPInlineList {
    BOOL mContinue;
    long mListLevel;
    GQDSStyle *mParaStyle;
    BOOL mRestartList;
}

- (BOOL)cont;
- (void)dealloc;
- (BOOL)isBlank;
- (long)listLevel;
- (id)paragraphStyle;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (BOOL)restartList;

@end