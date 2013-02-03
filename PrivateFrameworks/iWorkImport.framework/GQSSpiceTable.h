/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQSSpiceTable : GQSTable {
    struct vector<float,std::allocator<float> > { struct _Vector_impl { 
            float *_M_start; 
            float *_M_finish; 
            float *_M_end_of_storage; 
    struct vector<float,std::allocator<float> > { struct _Vector_impl { 
            float *_M_start; 
            float *_M_finish; 
            float *_M_end_of_storage; 
        } x1; } *mColumnPositions;
    float mCurrentCellMaxX;
    float mCurrentCellMaxY;
    float mCurrentCellMinX;
    float mCurrentCellMinY;
    id mCurrentCellStorage;
    id mCurrentCellStyle;
    BOOL mReadingRowVectors;
        } x1; } *mRowPositions;
    struct __CFDictionary { } *mVectorUidToAlongMap;
}

- (void)aboutToReadCells;
- (void)aboutToReadColumnVectors;
- (void)aboutToReadRowVectors;
- (float)alongValueForVectorUid:(const char *)arg1;
- (void)dealloc;
- (id)init;
- (void)setAlongValue:(float)arg1 forOwnedVectorUid:(char *)arg2;

@end