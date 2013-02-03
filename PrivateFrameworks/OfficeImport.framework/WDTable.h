/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDTableProperties;

@interface WDTable : WDBlock {
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (id)addRow;
- (NSInteger)blockType;
- (id)cellIterator;
- (void)dealloc;
- (id)initWithText:(id)arg1;
- (NSInteger)nestingLevel;
- (id)properties;
- (id)rowAt:(NSInteger)arg1;
- (NSInteger)rowCount;
- (id)rowIterator;
- (id)runIterator;

@end