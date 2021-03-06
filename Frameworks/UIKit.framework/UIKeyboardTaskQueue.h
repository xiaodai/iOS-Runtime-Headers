/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardTaskQueue : NSObject {
    NSMutableArray *_deferredTasks;
    BOOL _executingOnMainThread;
    UIKeyboardTaskExecutionContext *_executionContext;
    NSConditionLock *_lock;
    id /* block */ _mainThreadContinuation;
    NSMutableArray *_tasks;
}

@property (nonatomic, retain) UIKeyboardTaskExecutionContext *executionContext;

- (void)addDeferredTask:(id /* block */)arg1;
- (void)addTask:(id /* block */)arg1;
- (void)continueExecutionOnMainThread;
- (void)dealloc;
- (id)executionContext;
- (void)finishExecution;
- (id)init;
- (BOOL)isMainThreadExecutingTask;
- (void)lock;
- (void)lockWhenReadyForMainThread;
- (void)performDeferredTaskIfIdle;
- (void)performTask:(id /* block */)arg1;
- (void)performTaskOnMainThread:(id /* block */)arg1 waitUntilDone:(BOOL)arg2;
- (void)promoteDeferredTaskIfIdle;
- (id)scheduleTask:(id /* block */)arg1 timeInterval:(double)arg2 repeats:(BOOL)arg3;
- (void)setExecutionContext:(id)arg1;
- (BOOL)tryLockWhenReadyForMainThread;
- (void)unlock;
- (void)waitUntilAllTasksAreFinished;

@end
