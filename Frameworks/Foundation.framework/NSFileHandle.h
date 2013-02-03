/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileHandle : NSObject {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)createFileAtPath:(id)arg1 flags:(NSInteger)arg2 mode:(NSInteger)arg3;
+ (id)fileHandleForReadingAtPath:(id)arg1;
+ (id)fileHandleForTempFile:(id*)arg1 atPath:(id)arg2 mode:(NSInteger)arg3;
+ (id)fileHandleForUniqueFile:(id*)arg1 atPath:(id)arg2 mode:(NSInteger)arg3 extension:(id)arg4;
+ (id)fileHandleForUniqueFile:(id*)arg1 atPath:(id)arg2 mode:(NSInteger)arg3;
+ (id)fileHandleForUpdatingAtPath:(id)arg1;
+ (id)fileHandleForWritingAtPath:(id)arg1;
+ (id)fileHandleWithNullDevice;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleWithStandardInput;
+ (id)fileHandleWithStandardOutput;

- (id)availableData;
- (void)closeFile;
- (NSInteger)fileDescriptor;
- (id)initWithPath:(id)arg1 flags:(NSInteger)arg2 createMode:(NSInteger)arg3;
- (unsigned long long)offsetInFile;
- (id)readDataOfLength:(NSUInteger)arg1;
- (id)readDataToEndOfFile;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)writeData:(id)arg1;

@end