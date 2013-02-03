/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAContext : NSObject {
}

@property CGColorSpace *colorSpace;
@property(retain) CALayer *layer;
@property(readonly) NSUInteger contextId;
@property float level;
@property(readonly) BOOL valid;

+ (id)allContexts;
+ (id)localContext;
+ (id)localContextWithOptions:(id)arg1;
+ (id)objectForSlot:(NSUInteger)arg1;
+ (id)remoteContext;
+ (id)remoteContextWithOptions:(id)arg1;
+ (void)setClientPort:(NSUInteger)arg1;

- (struct CGColorSpace { }*)colorSpace;
- (NSUInteger)contextId;
- (NSUInteger)createSlot;
- (void)deleteSlot:(NSUInteger)arg1;
- (void)invalidate;
- (id)layer;
- (float)level;
- (void)orderAbove:(NSUInteger)arg1;
- (void)orderBelow:(NSUInteger)arg1;
- (struct _CARenderContext { struct { NSInteger x_1_1_1; } x1; NSUInteger x2; struct __CFDictionary {} *x3; NSUInteger x4; NSUInteger x5; NSUInteger x6; struct _opaque_pthread_mutex_t { long x_7_1_1; BOOL x_7_1_2[40]; } x7; NSUInteger x8; struct _CARenderHandle {} *x9; struct _CARenderLayerNode {} *x10; struct __CFDictionary {} *x11; struct x_list_struct {} *x12; float x13; struct _CARenderFence {} *x14; struct _CARenderLayerHost {} *x15; struct x_list_struct {} *x16; double x17; NSInteger *x18; struct CGSBounds { NSInteger x_19_1_1; NSInteger x_19_1_2; NSInteger x_19_1_3; NSInteger x_19_1_4; } x19; NSUInteger x20; NSUInteger x21; NSUInteger x22; NSUInteger x23; NSInteger *x24; }*)renderContext;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setFence:(NSUInteger)arg1 count:(NSUInteger)arg2;
- (void)setLayer:(id)arg1;
- (void)setLevel:(float)arg1;
- (void)setObject:(id)arg1 forSlot:(NSUInteger)arg2;
- (BOOL)valid;

@end