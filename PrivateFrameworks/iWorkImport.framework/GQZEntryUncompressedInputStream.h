/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <GQZArchiveInputStream>;

@interface GQZEntryUncompressedInputStream : NSObject <GQZEntryInputStream> {
    long long mEnd;
    <GQZArchiveInputStream> *mInput;
    long long mOffset;
}

- (void)dealloc;
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 input:(id)arg3;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)readToOwnBuffer:(const char **)arg1 size:(NSUInteger*)arg2;

@end