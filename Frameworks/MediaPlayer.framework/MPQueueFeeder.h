/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController;

@interface MPQueueFeeder : AVQueueFeeder {
    MPAVController *_avController;
    struct __CFSet { } *_items;
    struct __CFDictionary { } *_nextStartTimes;
    NSUInteger _repeatType;
    NSUInteger _shuffleType;
}

@property NSUInteger shuffleType; /* unknown property attribute: V_shuffleType */
@property NSUInteger repeatType; /* unknown property attribute: V_repeatType */
@property MPAVController *AVController; /* unknown property attribute: V_avController */
@property(retain,readonly) NSDictionary *preferredLanguages;
@property(readonly) Class itemClass;
@property(readonly) NSUInteger realRepeatType;
@property(readonly) NSUInteger realShuffleType;
@property(readonly) BOOL trackChangesCanEndPlayback;

- (id)AVController;
- (BOOL)_canPurgeNextStartTimes;
- (void)_fixNextStartTimesByInsertingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_fixNextStartTimesByRemovingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)addReferenceToItem:(id)arg1;
- (void)clearReferencesToItem:(id)arg1;
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(NSUInteger)arg1;
- (void)contentsDidChangeByInsertingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)contentsDidChangeByRemovingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)copyRawItemAtIndex:(NSUInteger)arg1;
- (void)dealloc;
- (void)dequeueOnDemandItem;
- (Class)itemClass;
- (id)itemForIndex:(NSUInteger)arg1;
- (NSUInteger)itemTypeForIndex:(NSUInteger)arg1;
- (NSUInteger)onDemandItemIndex;
- (id)playbackInfoAtIndex:(NSUInteger)arg1;
- (id)preferredLanguages;
- (NSUInteger)realRepeatType;
- (NSUInteger)realShuffleType;
- (NSUInteger)repeatType;
- (void)setAVController:(id)arg1;
- (void)setNextStartTime:(double)arg1 forIndex:(NSUInteger)arg2;
- (void)setRepeatType:(NSUInteger)arg1;
- (void)setShuffleType:(NSUInteger)arg1;
- (void)shuffleItemsWithAnchor:(NSUInteger*)arg1;
- (NSUInteger)shuffleType;
- (BOOL)trackChangesCanEndPlayback;

@end