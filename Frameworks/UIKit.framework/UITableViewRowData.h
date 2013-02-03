/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISectionRowData, NSIndexPath, UITableView;

@interface UITableViewRowData : NSObject <NSCopying> {
    float _minimumRowHeight;
    NSInteger _numSections;
    NSIndexPath *_reorderedIndexPath;
    float _reorderedRowHeight;
    UISectionRowData **_sectionRowData;
    NSInteger _sectionRowDataCapacity;
    float _tableFooterHeight;
    float _tableHeaderHeight;
    UITableView *_tableView;
    float _tableViewWidth;
}

@property float minimumRowHeight; /* unknown property attribute: V_minimumRowHeight */
@property(retain) NSIndexPath *reorderedIndexPath;

- (void)_updateNumSections;
- (void)_updateSectionRowDataArrayForNumSections:(NSInteger)arg1;
- (void)addReorderGapFromIndexPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)deleteRowsAtIndexPaths:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)ensureAllSectionsAreValid;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })floatingRectForFooterInSection:(NSInteger)arg1 visibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })floatingRectForHeaderInSection:(NSInteger)arg1 visibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (NSInteger)globalRowForRowAtIndexPath:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })globalRowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)hasFooterForSection:(NSInteger)arg1;
- (BOOL)hasHeaderForSection:(NSInteger)arg1;
- (float)heightForFooterInSection:(NSInteger)arg1;
- (float)heightForHeaderInSection:(NSInteger)arg1;
- (float)heightForRow:(NSInteger)arg1 inSection:(NSInteger)arg2;
- (float)heightForSection:(NSInteger)arg1;
- (float)heightForTable;
- (id)indexPathForRowAtGlobalRow:(NSInteger)arg1;
- (id)indexPathsForRowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithTableView:(id)arg1;
- (void)insertRowsAtIndexPaths:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)invalidateAllSections;
- (void)invalidateSection:(NSInteger)arg1;
- (float)minimumRowHeight;
- (void)moveRowAtIndexPathFrom:(id)arg1 toIndexPath:(id)arg2;
- (NSInteger)numberOfRows;
- (NSInteger)numberOfRowsBeforeSection:(NSInteger)arg1;
- (NSInteger)numberOfRowsInSection:(NSInteger)arg1;
- (NSInteger)numberOfSections;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForFooterInSection:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForGlobalRow:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForHeaderInSection:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForRow:(NSInteger)arg1 inSection:(NSInteger)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSection:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForTable;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForTableFooterView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForTableHeaderView;
- (void)removeReorderGapFromIndexPath:(id)arg1;
- (id)reorderedIndexPath;
- (NSInteger)sectionLocationForReorderedRow:(NSInteger)arg1 inSection:(NSInteger)arg2;
- (NSInteger)sectionLocationForRow:(NSInteger)arg1 inSection:(NSInteger)arg2;
- (void)setMinimumRowHeight:(float)arg1;
- (void)setReorderedIndexPath:(id)arg1;
- (void)tableFooterHeightDidChangeToHeight:(float)arg1;
- (void)tableHeaderHeightDidChangeToHeight:(float)arg1;
- (void)tableViewWidthDidChangeToWidth:(float)arg1;
- (id)targetIndexPathForPoint:(struct CGPoint { float x1; float x2; })arg1;

@end