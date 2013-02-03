/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAWindowServer : NSObject {
    struct CAWindowServerImpl { struct __CFArray {} *x1; NSUInteger x2; unsigned int x3 : 1; } *_impl;
}

@property(readonly) NSArray *displays;
@property BOOL GPUDisabled;
@property double minimumAnimationDelay;
@property NSUInteger rendererFlags;

+ (id)context;
+ (id)contextWithOptions:(id)arg1;
+ (id)server;
+ (id)serverIfRunning;

- (BOOL)GPUDisabled;
- (void)_detectDisplays;
- (id)_init;
- (void)addDisplay:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)displayWithName:(id)arg1;
- (id)displays;
- (id)init;
- (double)minimumAnimationDelay;
- (void)removeAllDisplays;
- (void)removeDisplay:(id)arg1;
- (NSUInteger)rendererFlags;
- (void)setGPUDisabled:(BOOL)arg1;
- (void)setMinimumAnimationDelay:(double)arg1;
- (void)setRendererFlags:(NSUInteger)arg1;

@end