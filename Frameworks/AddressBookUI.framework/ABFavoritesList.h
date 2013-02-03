/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableArray;

@interface ABFavoritesList : NSObject {
    struct { 
        unsigned int dirty : 1; 
        unsigned int postCount : 1; 
        unsigned int needsReload : 1; 
        unsigned int unused : 29; 
    } _flags;
    NSMutableArray *_list;
    struct __CFDictionary { } *_uidToEntry;
}

+ (id)sharedInstance;

- (void)_addEntryToMap:(id)arg1;
- (void)_applicationWillSuspend:(id)arg1;
- (void)_delayedLookup;
- (void)_entryIdentityChanged:(id)arg1;
- (void)_initializeList;
- (void)_listChangedExternally;
- (void)_postChangeNotification;
- (void)_removeEntryFromMap:(id)arg1 withUid:(NSInteger)arg2;
- (void)_scheduleSave;
- (BOOL)_writeFavoritesToFile:(id)arg1;
- (void)addEntry:(id)arg1;
- (BOOL)addEntryForPerson:(void*)arg1 property:(NSInteger)arg2 withIdentifier:(NSInteger)arg3;
- (BOOL)containsEntryWithIdentifier:(NSInteger)arg1 forPerson:(void*)arg2;
- (void)dealloc;
- (id)entries;
- (id)entriesForPerson:(void*)arg1;
- (BOOL)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(NSInteger)arg2;
- (id)entryWithIdentifier:(NSInteger)arg1 forPerson:(void*)arg2;
- (id)init;
- (BOOL)isFull;
- (void)moveEntryAtIndex:(NSInteger)arg1 toIndex:(NSInteger)arg2;
- (void)recacheIdentitiesSoon;
- (void)removeEntryAtIndex:(NSInteger)arg1;
- (void)save;

@end