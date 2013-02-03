/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDResources, NSArray, NSMutableArray, EDColumnInfoCollection, EDRows, EDWorksheet;

@interface EPStyleFlattener : EDProcessor {
     /* Encoded args for previous method: @32@0:4i8@12@16B20i24@28 */
    EDColumnInfoCollection *mColumnInfos;
    NSInteger mFirstColumn;
    NSUInteger mFirstColumnStripeSize;
    NSInteger mFirstRow;
    NSUInteger mFirstRowStripeSize;
    NSArray *mKeys;
    NSInteger mLastColumn;
    NSInteger mLastRow;
    NSMutableArray *mRanges;
    EDResources *mResources;
    EDRows *mRows;
    NSUInteger mSecondColumnStripeSize;
    NSUInteger mSecondRowStripeSize;
    EDWorksheet *mWorksheet;
}

- (id)addCellWithColumnNumber:(NSInteger)arg1 toRow:(id)arg2;
- (void)applyDifferentialStyle:(id)arg1 borderFlags:(NSInteger)arg2 precedence:(NSInteger)arg3 toCell:(id)arg4;
- (void)applyProcessorToObject:(id)arg1 withWorkbook:(id)arg2;
- (void)applyStyleElements:(id)arg1 toCell:(id)arg2 row:(NSInteger)arg3 column:(NSInteger)arg4;
- (NSInteger)borderFlagsForStyleType:(NSInteger)arg1 row:(NSInteger)arg2 column:(NSInteger)arg3;
- (void)cacheRange:(id)arg1;
- (void)cacheSizes:(id)arg1 inObject:(id)arg2;
- (id)cellWithSetupStyleAtRow:(id)arg1 columnNumber:(NSInteger)arg2;
- (id)cellWithSetupStyleAtRowNumber:(NSInteger)arg1 columnNumber:(NSInteger)arg2;
- (void)clearCache;
- (id)collectionFromWorksheet:(id)arg1;
- (void)dealloc;
- (id)extractCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(NSInteger)arg3 column:(NSInteger)arg4;
- (id)extractGlobalStyleElements:(id)arg1;
- (id)extractKeys:(id)arg1 from:(id)arg2 parent:(id)arg3;
- (id)extractRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(NSInteger)arg3;
- (id)flattenBorder:(NSInteger)arg1 borders:(id)arg2 differentialBorders:(id)arg3 flag:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg4 precedence:(NSInteger)arg5 cell:(id)arg6;
- (id)flattenBorders:(id)arg1 differentialBorders:(id)arg2 borderFlags:(NSInteger)arg3 precedence:(NSInteger)arg4 cell:(id)arg5;
- (id)flattenFill:(id)arg1 differentialFill:(id)arg2;
- (id)flattenFont:(id)arg1 differentialFont:(id)arg2;
- (id)keysInTheOrderTheyShouldBeApplied;
- (void)processObject:(id)arg1;
- (id)styleFromObject:(id)arg1;
- (id)wrapDifferentialStyleInATableStyleElement:(id)arg1 type:(NSInteger)arg2;

@end