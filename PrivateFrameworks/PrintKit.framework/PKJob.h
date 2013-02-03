/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSString, PKPrintSettings, NSDate, NSData;

@interface PKJob : NSObject {
    int mediaProgress;
    int mediaSheets;
    int mediaSheetsCompleted;
    int number;
    NSString *printerDisplayName;
    int printerKind;
    NSString *printerLocation;
    PKPrintSettings *settings;
    int state;
    NSData *thumbnailImage;
    NSDate *timeAtCompleted;
    NSDate *timeAtCreation;
    NSDate *timeAtProcessing;
}

@property int mediaProgress;
@property int mediaSheets;
@property int mediaSheetsCompleted;
@property int number;
@property(retain) NSString * printerDisplayName;
@property int printerKind;
@property(retain) NSString * printerLocation;
@property(retain) PKPrintSettings * settings;
@property int state;
@property(retain) NSData * thumbnailImage;
@property(retain) NSDate * timeAtCompleted;
@property(retain) NSDate * timeAtCreation;
@property(retain) NSDate * timeAtProcessing;

+ (id)currentJob;
+ (id)jobs;

- (int)cancel;
- (BOOL)isEqual:(id)arg1;
- (int)mediaProgress;
- (int)mediaSheets;
- (int)mediaSheetsCompleted;
- (int)number;
- (id)printerDisplayName;
- (int)printerKind;
- (id)printerLocation;
- (void)setMediaProgress:(int)arg1;
- (void)setMediaSheets:(int)arg1;
- (void)setMediaSheetsCompleted:(int)arg1;
- (void)setNumber:(int)arg1;
- (void)setPrinterDisplayName:(id)arg1;
- (void)setPrinterKind:(int)arg1;
- (void)setPrinterLocation:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setState:(int)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setTimeAtCompleted:(id)arg1;
- (void)setTimeAtCreation:(id)arg1;
- (void)setTimeAtProcessing:(id)arg1;
- (id)settings;
- (int)state;
- (id)thumbnailImage;
- (id)timeAtCompleted;
- (id)timeAtCreation;
- (id)timeAtProcessing;
- (int)update;

@end