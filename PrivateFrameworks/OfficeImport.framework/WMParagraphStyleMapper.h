/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WDParagraphProperties, WDParagraph, WMParagraphStyle;

@interface WMParagraphStyleMapper : CMMapper {
     /* Encoded args for previous method: B16@0:4i8i12 */
    WMParagraphStyle *mStyle;
    WDParagraphProperties *wdParaProperties;
    WDParagraph *wdParagraph;
}

- (id)bulletLabelAtLevel:(id)arg1 forIndex:(NSInteger)arg2 bulletFormat:(NSInteger)arg3 listState:(id)arg4;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)checkListId:(NSInteger)arg1 level:(NSInteger)arg2;
- (void)dealloc;
- (void)destyleEmptyParagraph;
- (id)initWithWDParagraph:(id)arg1 parent:(id)arg2;
- (BOOL)isListItem;
- (id)labelStringWithGap:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapBulletAt:(id)arg1 forLevel:(id)arg2 forIndex:(NSInteger)arg3 listState:(id)arg4 isOutline:(BOOL)arg5;
- (void)mapListStyleAt:(id)arg1 state:(id)arg2;

@end