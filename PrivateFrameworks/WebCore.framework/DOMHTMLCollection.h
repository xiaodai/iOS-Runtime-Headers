/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface DOMHTMLCollection : DOMObject {
     /* Encoded args for previous method: @12@0:4^{HTMLCollection=^^?iB{RefPtr<WebCore::Node>=^{Node}}i^{CollectionInfo}B}8 */
     /* Encoded args for previous method: ^{HTMLCollection=^^?iB{RefPtr<WebCore::Node>=^{Node}}i^{CollectionInfo}B}8@0:4 */
     /* Encoded args for previous method: @12@0:4^{HTMLCollection=^^?iB{RefPtr<WebCore::Node>=^{Node}}i^{CollectionInfo}B}8 */
}

@property(readonly) NSUInteger length;

+ (id)_wrapHTMLCollection:(struct HTMLCollection { int (**x1)(); NSInteger x2; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x3; struct RefPtr<WebCore::Node> { struct Node {} *x_4_1_1; } x4; NSInteger x5; struct CollectionInfo {} *x6; void*x7; }*)arg1;

- (struct HTMLCollection { int (**x1)(); NSInteger x2; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x3; struct RefPtr<WebCore::Node> { struct Node {} *x_4_1_1; } x4; NSInteger x5; struct CollectionInfo {} *x6; void*x7; }*)_HTMLCollection;
- (id)_initWithHTMLCollection:(struct HTMLCollection { int (**x1)(); NSInteger x2; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x3; struct RefPtr<WebCore::Node> { struct Node {} *x_4_1_1; } x4; NSInteger x5; struct CollectionInfo {} *x6; void*x7; }*)arg1;
- (void)dealloc;
- (void)finalize;
- (id)item:(NSUInteger)arg1;
- (NSUInteger)length;
- (id)namedItem:(id)arg1;
- (id)tags:(id)arg1;

@end