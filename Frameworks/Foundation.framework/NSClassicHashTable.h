/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSClassicHashTable : NSHashTable {
    struct { 
        int (*hash)(); 
        int (*isEqual)(); 
        int (*retain)(); 
        int (*release)(); 
        int (*describe)(); 
    } _callBacks;
    struct __CFSet { } *_table;
}

- (void)addObject:(id)arg1;
- (id)allObjects;
- (id)copy;
- (NSUInteger)count;
- (void)dealloc;
- (id)description;
- (void*)getItem:(const void*)arg1;
- (NSUInteger)getKeys:(const void**)arg1;
- (NSUInteger)hash;
- (id)init;
- (void)insertItem:(const void*)arg1;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)removeAllItems;
- (void)removeItem:(const void*)arg1;

@end