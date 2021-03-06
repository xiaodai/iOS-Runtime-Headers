/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVQueuePlayerFeeder : NSObject <SSDownloadManagerObserver> {
    unsigned int _desiredQueueDepth;
    MPDownloadManager *_downloadManager;
    BOOL _fillQueueActive;
    BOOL _forceSynchronousQueueFilling;
    NSMutableArray *_items;
    BOOL _managesSystemDownloads;
    unsigned int _maxQueueDepth;
    unsigned int _minQueueDepth;
    int _nextFillQueueToken;
    NSMutableSet *_pausedDownloads;
    NSObject<OS_dispatch_queue> *_pausedDownloadsQueue;
    MPQueuePlayer *_player;
    NSObject<OS_dispatch_queue> *_playerQueue;
    <MPAVQueuePlayerFeederSource> *_playlistItemSource;
    NSMutableSet *_reusableItems;
}

@property (nonatomic, readonly) MPAVItem *currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceSynchronousQueueFilling;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic) BOOL managesSystemDownloads;
@property (nonatomic) unsigned int maxQueueDepth;
@property (nonatomic) unsigned int minQueueDepth;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fillInQueue;
- (id)_fillInQueueWithExtraSpace:(int)arg1;
- (id)_fillInQueueWithExtraSpace:(int)arg1 ignoreExistingItems:(BOOL)arg2;
- (id)_fillInQueueWithExtraSpace:(int)arg1 ignoreExistingItems:(BOOL)arg2 removeCurrentItem:(BOOL)arg3;
- (void)_markIsReusable:(BOOL)arg1 item:(id)arg2;
- (void)_pauseOrResumeDownloads:(id)arg1 currentDownloadID:(long long)arg2;
- (void)_reloadQueueKeepingCurrentItem:(BOOL)arg1 allowReusingItems:(BOOL)arg2;
- (void)_removeCurrentItemAndFillQueue:(BOOL)arg1;
- (void)_removeInvalidItems:(id)arg1;
- (void)_updatePlayerQueueWithRemovedItems:(id)arg1 addedItems:(id)arg2 removeCurrentItem:(BOOL)arg3;
- (void)_updateQueueDepthForRateChange;
- (id)acquireReusableItemsUsingBlock:(id /* block */)arg1;
- (void)advanceToNextItem;
- (void)cancelReusableItemsPassingTest:(id /* block */)arg1;
- (id)currentItem;
- (void)dealloc;
- (id)description;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (BOOL)forceSynchronousQueueFilling;
- (id)initWithMPQueuePlayer:(id)arg1 itemSource:(id)arg2;
- (void)invalidate;
- (id)items;
- (BOOL)managesSystemDownloads;
- (unsigned int)maxQueueDepth;
- (unsigned int)minQueueDepth;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)reloadQueueKeepingCurrentItem:(BOOL)arg1;
- (void)setForceSynchronousQueueFilling:(BOOL)arg1;
- (void)setManagesSystemDownloads:(BOOL)arg1;
- (void)setMaxQueueDepth:(unsigned int)arg1;
- (void)setMinQueueDepth:(unsigned int)arg1;

@end
