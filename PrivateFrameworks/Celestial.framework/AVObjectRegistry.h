/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMutableDictionary, NSLock;

@interface AVObjectRegistry : NSObject {
    NSLock *_lock;
    NSMutableDictionary *_perThreadObjSet;
}

+ (id)defaultObjectRegistry;

- (void)dealloc;
- (id)init;
- (BOOL)isObjectRegistered:(id)arg1;
- (BOOL)isObjectValueRegistered:(id)arg1;
- (void)registerObject:(id)arg1 forThread:(id)arg2;
- (void)registerObject:(id)arg1;
- (void)safeInvokeWithDescription:(id)arg1;
- (void)safeInvokeWithDescriptionDelayed:(id)arg1;
- (void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4;
- (void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)safePerformOnThread:(id)arg1 target:(id)arg2 selector:(SEL)arg3 object:(id)arg4;
- (void)safePostDelayedNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)safePostDelayedNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4;
- (void)safePostNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)safePostNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4;
- (void)unregisterObject:(id)arg1 forThread:(id)arg2;
- (void)unregisterObject:(id)arg1;

@end