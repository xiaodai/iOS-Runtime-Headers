/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSIndexPath : NSObject <NSCopying, NSCoding> {
    NSUInteger _hash;
    NSUInteger *_indexes;
    NSUInteger _length;
    void *_reserved;
}

@property(readonly) NSUInteger row;
@property(readonly) NSUInteger section;

+ (id)_fastUniquer;
+ (id)_uniquer;
+ (id)indexPathForRow:(NSUInteger)arg1 inSection:(NSUInteger)arg2;
+ (id)indexPathWithIndex:(NSUInteger)arg1;
+ (id)indexPathWithIndexes:(NSUInteger*)arg1 length:(NSUInteger)arg2;
+ (id)indexPathWithTileLocation:(struct { struct { NSUInteger x_1_1_1; NSUInteger x_1_1_2; } x1; NSUInteger x2; })arg1;
+ (id)indexPathWithZoomLevel:(NSUInteger)arg1 x:(NSUInteger)arg2 y:(NSUInteger)arg3;
+ (id)tileZoomLevelTwo;
+ (id)tileZoomLevelZero;

- (NSInteger)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)getIndexes:(NSUInteger*)arg1;
- (BOOL)hasCoordinate;
- (NSUInteger)indexAtPosition:(NSUInteger)arg1;
- (id)indexPathByAddingIndex:(NSUInteger)arg1;
- (id)indexPathByRemovingLastIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(NSUInteger)arg1;
- (id)initWithIndexes:(NSUInteger*)arg1 length:(NSUInteger)arg2;
- (id)initWithTileLocation:(struct { struct { NSUInteger x_1_1_1; NSUInteger x_1_1_2; } x1; NSUInteger x2; })arg1;
- (id)initWithZoomLevel:(NSUInteger)arg1 x:(NSUInteger)arg2 y:(NSUInteger)arg3;
- (NSUInteger)length;
- (NSUInteger)row;
- (NSUInteger)section;
- (struct { struct { NSUInteger x_1_1_1; NSUInteger x_1_1_2; } x1; NSUInteger x2; })tileLocation;
- (NSUInteger)x;
- (NSUInteger)y;
- (NSUInteger)zoomLevel;

@end