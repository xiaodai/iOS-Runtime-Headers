/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Twitter.framework/Twitter
 */

@class NSData, NSString;

@interface TWRequestMultiPart : NSObject {
    NSString *_name;
    NSData *_payload;
    NSString *_type;
}

@property(copy) NSString * name;
@property(retain) NSData * payload;
@property(copy) NSString * type;

+ (id)multiPartWithName:(id)arg1 payload:(id)arg2 type:(id)arg3;
+ (id)multipartBoundary;

- (void)dealloc;
- (id)formPartData;
- (id)imagePartData;
- (id)name;
- (id)partData;
- (id)payload;
- (void)setName:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end