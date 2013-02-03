/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAFolder : NSObject {
    NSString *_folderID;
    NSString *_folderName;
    NSInteger _folderType;
    BOOL _hasRemoteChanges;
    BOOL _isDefault;
    NSString *_parentFolderID;
}

- (void)dealloc;
- (id)description;
- (id)folderID;
- (id)folderName;
- (NSInteger)folderType;
- (BOOL)hasRemoteChanges;
- (NSUInteger)hash;
- (BOOL)isDefault;
- (BOOL)isEqual:(id)arg1;
- (id)mailboxID;
- (id)parentFolderID;
- (id)parentMailboxID;
- (void)setFolderID:(id)arg1;
- (void)setFolderName:(id)arg1;
- (void)setFolderType:(NSInteger)arg1;
- (void)setHasRemoteChanges:(BOOL)arg1;
- (void)setIsDefault:(BOOL)arg1;
- (void)setParentFolderID:(id)arg1;

@end