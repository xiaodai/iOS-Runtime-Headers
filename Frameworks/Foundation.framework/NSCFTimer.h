/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFTimer : NSTimer {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (unsigned long)_cfTypeID;
- (void)finalize;
- (void)fire;
- (id)fireDate;
- (NSUInteger)hash;
- (id)init;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (oneway void)release;
- (id)retain;
- (NSUInteger)retainCount;
- (void)setFireDate:(id)arg1;
- (double)timeInterval;
- (id)userInfo;

@end