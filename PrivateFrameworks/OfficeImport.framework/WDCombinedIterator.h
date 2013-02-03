/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDIterator;

@interface WDCombinedIterator : WDIterator {
    WDIterator *mChildIterator;
    WDIterator *mParentIterator;
}

- (id)childIteratorFrom:(id)arg1;
- (void)dealloc;
- (BOOL)hasNext;
- (void)incrementChildIterator;
- (id)initWithParentIterator:(id)arg1;
- (id)next;

@end