/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDText, NSMutableArray;

@interface WDStory : NSObject {
    BOOL mOle;
    NSMutableArray *mShapes;
    WDText *mText;
}

- (void)addShape:(id)arg1;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 textType:(NSInteger)arg2;
- (BOOL)isOle;
- (void)setOle:(BOOL)arg1;
- (id)shapeAtIndex:(NSUInteger)arg1;
- (NSUInteger)shapeCount;
- (id)shapeEnumerator;
- (id)text;

@end