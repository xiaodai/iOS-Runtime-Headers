/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, ODDPresentationPoint;

@interface ODDPresentationPoint : ODDPoint {
    NSMutableArray *mChildren;
    ODDPresentationPoint *mParent;
}

- (void)addChild:(id)arg1 order:(unsigned long)arg2;
- (id)children;
- (void)dealloc;
- (id)parent;
- (void)setType:(NSInteger)arg1;

@end