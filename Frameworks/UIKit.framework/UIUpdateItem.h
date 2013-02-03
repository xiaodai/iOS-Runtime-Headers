/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSIndexPath;

@interface UIUpdateItem : NSObject {
    NSInteger _action;
    NSInteger _animation;
    NSIndexPath *_indexPath;
    float _offset;
}

@property float offset; /* unknown property attribute: V_offset */
@property(readonly) NSInteger animation; /* unknown property attribute: V_animation */
@property(readonly) NSIndexPath *indexPath; /* unknown property attribute: V_indexPath */
@property(readonly) NSInteger action; /* unknown property attribute: V_action */

- (NSInteger)action;
- (NSInteger)animation;
- (NSInteger)compareIndexPaths:(id)arg1;
- (void)dealloc;
- (id)indexPath;
- (id)initWithAction:(NSInteger)arg1 forIndexPath:(id)arg2 animation:(NSInteger)arg3;
- (NSInteger)inverseCompareIndexPaths:(id)arg1;
- (BOOL)isSectionOperation;
- (float)offset;
- (void)setOffset:(float)arg1;

@end