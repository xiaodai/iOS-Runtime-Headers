/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMapTable;

@interface EDKeyedCollection : EDCollection {
     /* Encoded args for previous method: B12@0:4@8 */
     /* Encoded args for previous method: B8@0:4 */
    NSMapTable *mMap;
}

- (NSUInteger)addObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)insertIntoMap:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isObjectInMap:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isOverwritingKeyOK;
- (NSInteger)keyFromObject:(id)arg1;
- (id)objectWithKey:(NSInteger)arg1;
- (void)removeAllObjects;
- (void)removeFromMap:(id)arg1;
- (void)removeObjectAtIndex:(NSUInteger)arg1;

@end