/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDText, WDTableRow, WDTableCellProperties;

@interface WDTableCell : NSObject {
    NSInteger mIndex;
    WDTableCellProperties *mProperties;
    WDTableRow *mRow;
    WDText *mText;
    BOOL mUseTrackedProperties;
}

- (double)cellWidth;
- (void)dealloc;
- (NSInteger)index;
- (id)initWithRow:(id)arg1 at:(NSInteger)arg2;
- (id)properties;
- (id)row;
- (void)setUseTrackedProperties:(BOOL)arg1;
- (id)text;
- (BOOL)useTrackedProperties;

@end