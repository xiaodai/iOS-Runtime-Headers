/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString;

@interface VMUClassInfo : NSObject {
    NSString *_binaryName;
    NSString *_className;
    NSString *_type;
}

+ (id)classInfoWithClassName:(id)arg1 binaryName:(id)arg2 type:(id)arg3;

- (id)binaryName;
- (id)className;
- (void)dealloc;
- (NSUInteger)hash;
- (id)initWithClassName:(id)arg1 binaryName:(id)arg2 type:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)type;

@end