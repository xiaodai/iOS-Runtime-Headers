/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQUFileOutputBundle : NSObject <GQUOutputBundle> {
    struct __CFURL { } *mOutputUrl;
}

- (struct __CFString { }*)createUriForResource:(struct __CFString { }*)arg1;
- (void)dealloc;
- (id)initWithOutputPath:(struct __CFString { }*)arg1;
- (BOOL)setData:(struct __CFData { }*)arg1 mimeType:(struct __CFString { }*)arg2 forNamedResource:(struct __CFString { }*)arg3;
- (BOOL)setDataForMainHtmlResource:(struct __CFData { }*)arg1;
- (void)setDocumentSize:(struct CGSize { float x1; float x2; })arg1;

@end