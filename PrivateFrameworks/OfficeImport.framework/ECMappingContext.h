/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMapTable, NSMutableDictionary, NSMutableArray;

@interface ECMappingContext : NSObject {
    NSMapTable *mIndexToMappedIndex;
    NSMutableArray *mMappingInfos;
    NSMapTable *mObjectToMappingInfo;
    NSMutableDictionary *mSheetNameToMappedIndex;
}

- (void)associateMappingInfo:(id)arg1 withSheetName:(id)arg2 andSheetIndex:(NSUInteger)arg3 andObject:(id)arg4;
- (void)dealloc;
- (id)init;
- (NSUInteger)mappedSheetIndexForSheetIndex:(NSUInteger)arg1;
- (NSUInteger)mappedSheetIndexForSheetName:(id)arg1;
- (struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)mappedSheetNames;
- (id)mappingInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)mappingInfoCount;
- (id)mappingInfoForObject:(id)arg1;

@end