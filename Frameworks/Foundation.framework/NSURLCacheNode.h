/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLCacheNode, NSString, NSCachedURLResponse, NSURLRequest;

@interface NSURLCacheNode : NSObject {
    NSCachedURLResponse *cachedResponse;
    NSUInteger hash;
    NSString *key;
    NSURLCacheNode *next;
    NSURLCacheNode *prev;
    NSURLRequest *request;
}

- (void)dealloc;
- (id)description;
- (id)initWithCachedResponse:(id)arg1 request:(id)arg2 key:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end