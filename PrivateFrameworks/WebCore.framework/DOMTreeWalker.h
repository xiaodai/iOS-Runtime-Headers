/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <DOMNodeFilter>;

@interface DOMTreeWalker : DOMObject {
     /* Encoded args for previous method: @16@0:4^{TreeWalker=^^?i{RefPtr<WebCore::Node>=^{Node}}I{RefPtr<WebCore::NodeFilter>=^{NodeFilter}}B{RefPtr<WebCore::Node>=^{Node}}}8@12 */
     /* Encoded args for previous method: ^{TreeWalker=^^?i{RefPtr<WebCore::Node>=^{Node}}I{RefPtr<WebCore::NodeFilter>=^{NodeFilter}}B{RefPtr<WebCore::Node>=^{Node}}}8@0:4 */
     /* Encoded args for previous method: @16@0:4^{TreeWalker=^^?i{RefPtr<WebCore::Node>=^{Node}}I{RefPtr<WebCore::NodeFilter>=^{NodeFilter}}B{RefPtr<WebCore::Node>=^{Node}}}8@12 */
    <DOMNodeFilter> *m_filter;
}

@property(retain) DOMNode *currentNode;
@property(retain,readonly) <DOMNodeFilter> *filter;
@property(retain,readonly) DOMNode *root;
@property(readonly) BOOL expandEntityReferences;
@property(readonly) NSUInteger whatToShow;

+ (id)_wrapTreeWalker:(struct TreeWalker { int (**x1)(); NSInteger x2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_1_1; } x3; NSUInteger x4; struct RefPtr<WebCore::NodeFilter> { struct NodeFilter {} *x_5_1_1; } x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; struct RefPtr<WebCore::Node> { struct Node {} *x_7_1_1; } x7; }*)arg1 filter:(id)arg2;

- (struct TreeWalker { int (**x1)(); NSInteger x2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_1_1; } x3; NSUInteger x4; struct RefPtr<WebCore::NodeFilter> { struct NodeFilter {} *x_5_1_1; } x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; struct RefPtr<WebCore::Node> { struct Node {} *x_7_1_1; } x7; }*)_treeWalker;
- (id)_initWithTreeWalker:(struct TreeWalker { int (**x1)(); NSInteger x2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_1_1; } x3; NSUInteger x4; struct RefPtr<WebCore::NodeFilter> { struct NodeFilter {} *x_5_1_1; } x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; struct RefPtr<WebCore::Node> { struct Node {} *x_7_1_1; } x7; }*)arg1 filter:(id)arg2;
- (id)currentNode;
- (void)dealloc;
- (BOOL)expandEntityReferences;
- (id)filter;
- (void)finalize;
- (id)firstChild;
- (id)lastChild;
- (id)nextNode;
- (id)nextSibling;
- (id)parentNode;
- (id)previousNode;
- (id)previousSibling;
- (id)root;
- (void)setCurrentNode:(id)arg1;
- (NSUInteger)whatToShow;

@end