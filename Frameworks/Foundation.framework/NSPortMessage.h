/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSPort, NSMutableArray;

@interface NSPortMessage : NSObject {
    NSMutableArray *components;
    NSPort *localPort;
    NSUInteger msgid;
    NSPort *remotePort;
    void *reserved2;
    void *reserved;
}

- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3;
- (NSUInteger)msgid;
- (id)receivePort;
- (BOOL)sendBeforeDate:(id)arg1;
- (id)sendPort;
- (void)setMsgid:(NSUInteger)arg1;

@end