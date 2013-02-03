/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    id _keyboardSupport;
    NSInteger _tableViewStyle;
}

@property(retain) UITableView *tableView;

- (void)_adjustTableForKeyboardHeight:(id)arg1;
- (void)_deselectAllRowsAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)existingTableView;
- (id)init;
- (id)initWithStyle:(NSInteger)arg1;
- (void)loadView;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end