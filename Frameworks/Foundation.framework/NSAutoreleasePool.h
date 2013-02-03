/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAutoreleasePool : NSObject {
    void *_reserved2;
    void *_reserved3;
    void *_reserved;
    void *_token;
}

+ (void)addObject:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)autoreleasePoolExists;
+ (NSUInteger)autoreleasedObjectCount;
+ (void)enableFreedObjectCheck:(BOOL)arg1;
+ (void)enableRelease:(BOOL)arg1;
+ (NSUInteger)poolCountHighWaterMark;
+ (NSUInteger)poolCountHighWaterResolution;
+ (void)releaseAllPools;
+ (void)resetTotalAutoreleasedObjects;
+ (void)setPoolCountHighWaterMark:(NSUInteger)arg1;
+ (void)setPoolCountHighWaterResolution:(NSUInteger)arg1;
+ (void)showPools;
+ (NSUInteger)topAutoreleasePoolCount;
+ (NSUInteger)totalAutoreleasedObjects;

- (void)addObject:(id)arg1;
- (id)autorelease;
- (void)dealloc;
- (void)drain;
- (id)init;
- (id)initWithCapacity:(NSUInteger)arg1;
- (void)release;
- (id)retain;
- (NSUInteger)retainCount;

@end