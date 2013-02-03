/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUMachO64Header : VMUMachOHeader {
    NSUInteger _reserved;
}

+ (id)machO64HeaderWithUniverse:(id)arg1 memory:(id)arg2 name:(id)arg3 path:(id)arg4 timestamp:(id)arg5;

- (id)initWithUniverse:(id)arg1 memory:(id)arg2 name:(id)arg3 path:(id)arg4 timestamp:(id)arg5;
- (BOOL)isMachO64;

@end