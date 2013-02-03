/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, NSString, PDPresentation, CMArchiveManager;

@interface PMPresentationMapper : CMMapper <CMMapperRoot> {
    CMArchiveManager *mArchiver;
    PDPresentation *mPresentation;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    NSMutableArray *mSlideGuids;
    NSMutableArray *mSlideNames;
    NSInteger mWidth;
}

- (id)archiver;
- (id)blipAtIndex:(NSUInteger)arg1;
- (id)createFramesetDocument:(id)arg1;
- (void)dealloc;
- (id)documentTitle;
- (id)initWithPDPresentation:(id)arg1 archiver:(id)arg2;
- (void)mapContinuousWithState:(id)arg1;
- (void)mapDefaultCssStylesAt:(id)arg1;
- (void)mapWithState:(id)arg1;
- (struct CGSize { float x1; float x2; })pageSizeForDevice;
- (void)setHtmlDocumentSizeInArchiver;
- (struct CGSize { float x1; float x2; })slideSize;

@end