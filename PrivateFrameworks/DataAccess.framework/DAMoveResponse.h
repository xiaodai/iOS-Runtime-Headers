/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMoveResponse : NSObject {
    NSString *_destID;
    NSString *_sourceID;
    NSInteger _status;
}

- (void)dealloc;
- (id)destID;
- (id)initWithStatus:(NSInteger)arg1 sourceID:(id)arg2 destID:(id)arg3;
- (id)sourceID;
- (NSInteger)status;

@end