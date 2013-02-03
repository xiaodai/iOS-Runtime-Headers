/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNetService : NSObject {
    id _delegate;
    id _netService;
    id _reserved;
}

+ (id)dataFromTXTRecordDictionary:(id)arg1;
+ (id)dictionaryFromTXTRecordData:(id)arg1;

- (id)TXTRecordData;
- (void)_dispatchCallBackWithError:(struct { NSInteger x1; NSInteger x2; })arg1;
- (struct __CFNetService { }*)_internalNetService;
- (id)_monitors;
- (void)_scheduleInDefaultRunLoopForMode:(id)arg1;
- (id)addresses;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)domain;
- (void)finalize;
- (BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2;
- (NSUInteger)hash;
- (id)hostName;
- (id)initWithCFNetService:(struct __CFNetService { }*)arg1;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(NSInteger)arg4;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (NSInteger)port;
- (id)protocolSpecificInformation;
- (void)publish;
- (void)publishWithOptions:(NSUInteger)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)resolve;
- (void)resolveWithTimeout:(double)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setProtocolSpecificInformation:(id)arg1;
- (BOOL)setTXTRecordData:(id)arg1;
- (void)startMonitoring;
- (void)stop;
- (void)stopMonitoring;
- (id)type;

@end