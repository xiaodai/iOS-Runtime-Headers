/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MediaVolumeSlider, UIPushButton, MPItem;

@interface MPTransportControls : UIView {
    unsigned int _forVideo : 1;
    unsigned int _paused : 1;
    UIPushButton *_alternatesButton;
    UIPushButton *_bookmarkButton;
    UIPushButton *_chaptersButton;
    NSUInteger _desiredParts;
    NSUInteger _disabledParts;
    UIPushButton *_emailButton;
    NSUInteger _heldPart;
    MPItem *_item;
    UIPushButton *_nextButton;
    UIPushButton *_playButton;
    UIPushButton *_previousButton;
    id _target;
    NSUInteger _visibleParts;
    MediaVolumeSlider *_volumeSlider;
}

@property NSUInteger visibleParts; /* unknown property attribute: V_visibleParts */
@property id target; /* unknown property attribute: V_target */
@property(retain) MPItem *item; /* unknown property attribute: V_item */
@property NSUInteger disabledParts; /* unknown property attribute: V_disabledParts */
@property NSUInteger desiredParts; /* unknown property attribute: V_desiredParts */
@property(getter=isForVideo) BOOL forVideo;

- (void)_alternateTypesChangedNotification:(id)arg1;
- (NSUInteger)_applyDesiredPartsToParts:(NSUInteger)arg1;
- (void)_applyDesiredPartsWithAnimation:(BOOL)arg1;
- (id)_buttonImageForPart:(NSUInteger)arg1;
- (id)_createButtonForPart:(NSUInteger)arg1;
- (void)_handleHoldForPart:(NSUInteger)arg1;
- (void)_handleReleaseForPart:(NSUInteger)arg1;
- (void)_handleTapForPart:(NSUInteger)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_reloadViewWithAnimation:(BOOL)arg1;
- (id)_updateAdditions:(id)arg1 removals:(id)arg2 forPart:(NSUInteger)arg3;
- (void)_updateEnabledStates:(BOOL)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)buttonUp:(id)arg1;
- (id)createVolumeSlider;
- (void)dealloc;
- (NSUInteger)desiredParts;
- (void)didMoveToWindow;
- (NSUInteger)disabledParts;
- (id)init;
- (BOOL)isForVideo;
- (id)item;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3;
- (void)setAlpha:(float)arg1;
- (void)setDesiredParts:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)setDesiredParts:(NSUInteger)arg1;
- (void)setDisabledParts:(NSUInteger)arg1;
- (void)setForVideo:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setVisibleParts:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)setVisibleParts:(NSUInteger)arg1;
- (id)target;
- (void)updateVolumeHUDVisibility;
- (void)viewHandleTouchPause:(id)arg1 isDown:(BOOL)arg2;
- (double)viewTouchPauseThreshold:(id)arg1;
- (NSUInteger)visibleParts;

@end