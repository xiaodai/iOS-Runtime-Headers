/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADLineJoin, OADLineEnd, OADColor, OADDash, OADFill;

@interface OADStroke : OADProperties <NSCopying> {
    NSInteger mCap;
    OADColor *mColor;
    NSInteger mCompoundType;
    OADDash *mDash;
    OADFill *mFill;
    OADLineEnd *mHead;
    BOOL mIsCapOverridden;
    BOOL mIsColorOverridden;
    BOOL mIsCompoundTypeOverridden;
    BOOL mIsDashOverridden;
    BOOL mIsFillOverridden;
    BOOL mIsJoinOverridden;
    BOOL mIsPenAlignmentOverridden;
    BOOL mIsWidthOverridden;
    OADLineJoin *mJoin;
    NSInteger mPenAlignment;
    OADLineEnd *mTail;
    float mWidth;
}

+ (id)defaultProperties;

- (NSInteger)cap;
- (id)color;
- (NSInteger)compoundType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dash;
- (void)dealloc;
- (id)fill;
- (id)head;
- (id)init;
- (id)initWithDefaults;
- (BOOL)isCapOverridden;
- (BOOL)isColorOverridden;
- (BOOL)isCompoundTypeOverridden;
- (BOOL)isDashOverridden;
- (BOOL)isFillOverridden;
- (BOOL)isJoinOverridden;
- (BOOL)isPenAlignmentOverridden;
- (BOOL)isWidthOverridden;
- (id)join;
- (NSInteger)penAlignment;
- (void)setCap:(NSInteger)arg1;
- (void)setColor:(id)arg1;
- (void)setCompoundType:(NSInteger)arg1;
- (void)setDash:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setJoin:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPenAlignment:(NSInteger)arg1;
- (void)setStyleColor:(id)arg1;
- (void)setWidth:(float)arg1;
- (id)tail;
- (float)width;

@end