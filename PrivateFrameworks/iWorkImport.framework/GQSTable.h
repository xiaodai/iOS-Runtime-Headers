/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDTOverlapCell, GQDTCell, GQDTTable;

@interface GQSTable : NSObject {
    BOOL mAlwaysPutReadCellsInArray;
    GQDTOverlapCell *mCurrentOverlapCell;
    BOOL mIsStreaming;
    GQDTCell *mLastCellRead;
    GQDTTable *mTable;
}

- (BOOL)alwaysPutReadCellsInArray;
- (id)currentOverlapCell;
- (void)dealloc;
- (id)initWithStreaming:(BOOL)arg1 table:(id)arg2;
- (BOOL)isStreaming;
- (id)lastCellRead;
- (void)setAlwaysPutReadCellsInArray:(BOOL)arg1;
- (void)setCurrentOverlapCell:(id)arg1;
- (void)setLastCellRead:(id)arg1;
- (id)table;

@end