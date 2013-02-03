/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConditionLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (NSInteger)condition;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithCondition:(NSInteger)arg1;
- (void)lock;
- (BOOL)lockBeforeDate:(id)arg1;
- (BOOL)lockWhenCondition:(NSInteger)arg1 beforeDate:(id)arg2;
- (void)lockWhenCondition:(NSInteger)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)tryLock;
- (BOOL)tryLockWhenCondition:(NSInteger)arg1;
- (void)unlock;
- (void)unlockWithCondition:(NSInteger)arg1;

@end