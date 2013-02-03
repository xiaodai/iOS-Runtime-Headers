/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface PDParagraphBuild : PDBuild {
    double mAutoAdvanceTime;
    NSInteger mBuildLevel;
    BOOL mIsReversedParagraphOrder;
    NSMutableArray *mTimeNodeDataList;
    NSInteger mType;
}

- (id)addTimeNodeData;
- (double)autoAdvanceTime;
- (NSInteger)buildLevel;
- (void)dealloc;
- (id)init;
- (BOOL)isReversedParagraphOrder;
- (void)setAutoAdvanceTime:(double)arg1;
- (void)setBuildLevel:(NSInteger)arg1;
- (void)setIsReversedParagraphOrder:(BOOL)arg1;
- (void)setType:(NSInteger)arg1;
- (id)timeNodeDataAtIndex:(NSInteger)arg1;
- (id)timeNodeDataList;
- (NSInteger)timeNodeDataListCount;
- (NSInteger)type;

@end