/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSArray, NSString, NSDictionary;

@interface VMULazySymbolOwner : NSObject {
    NSUInteger _flags;
    NSString *_name;
    NSArray *_regions;
    NSDictionary *_signature;
}

+ (id)lazySymbolOwnerWithName:(id)arg1 signature:(id)arg2 regions:(id)arg3 flags:(NSUInteger)arg4;

- (id)architecture;
- (BOOL)containsAddress:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (NSUInteger)flags;
- (BOOL)hasRegionsForName:(id)arg1;
- (id)initWithName:(id)arg1 signature:(id)arg2 regions:(id)arg3 flags:(NSUInteger)arg4;
- (BOOL)isLazy;
- (BOOL)isProtected;
- (id)name;
- (BOOL)overlapsAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)path;
- (id)regions;
- (id)signature;
- (void)slideToSegmentAddresses:(id)arg1;
- (BOOL)validate;

@end