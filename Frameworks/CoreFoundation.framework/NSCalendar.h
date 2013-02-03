/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSCalendar : NSObject <NSCopying, NSCoding> {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)autoupdatingCurrentCalendar;
+ (id)currentCalendar;

- (unsigned char)_addComponents:(double*)arg1 :(unsigned long)arg2 :(const char *)arg3 :(void*)arg4;
- (unsigned long)_cfTypeID;
- (unsigned char)_composeAbsoluteTime:(double*)arg1 :(const char *)arg2 :(void*)arg3;
- (id)_copyLocale;
- (id)_copyTimeZone;
- (unsigned char)_decomposeAbsoluteTime:(double)arg1 :(const char *)arg2 :(void*)arg3;
- (unsigned char)_diffComponents:(double)arg1 :(double)arg2 :(unsigned long)arg3 :(const char *)arg4 :(void*)arg5;
- (id)_gregorianStartDate;
- (struct { NSInteger x1; NSInteger x2; })_maximumRangeOfUnit:(NSUInteger)arg1;
- (struct { NSInteger x1; NSInteger x2; })_minimumRangeOfUnit:(NSUInteger)arg1;
- (long)_ordinalityOfUnit:(NSUInteger)arg1 inUnit:(NSUInteger)arg2 forAT:(double)arg3;
- (struct { NSInteger x1; NSInteger x2; })_rangeOfUnit:(NSUInteger)arg1 inUnit:(NSUInteger)arg2 forAT:(double)arg3;
- (unsigned char)_rangeOfUnit:(NSUInteger)arg1 startTime:(double*)arg2 interval:(double*)arg3 forAT:(double)arg4;
- (void)_setGregorianStartDate:(id)arg1;
- (id)calendarIdentifier;
- (Class)classForCoder;
- (id)components:(NSUInteger)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(NSUInteger)arg4;
- (id)components:(NSUInteger)arg1 fromDate:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(NSUInteger)arg3;
- (id)dateFromComponents:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)firstWeekday;
- (id)gregorianStartDate;
- (NSUInteger)hash;
- (id)init;
- (id)initWithCalendarIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)locale;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })maximumRangeOfUnit:(NSUInteger)arg1;
- (NSUInteger)minimumDaysInFirstWeek;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })minimumRangeOfUnit:(NSUInteger)arg1;
- (NSUInteger)ordinalityOfUnit:(NSUInteger)arg1 inUnit:(NSUInteger)arg2 forDate:(id)arg3;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfUnit:(NSUInteger)arg1 inUnit:(NSUInteger)arg2 forDate:(id)arg3;
- (BOOL)rangeOfUnit:(NSUInteger)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4;
- (void)setFirstWeekday:(NSUInteger)arg1;
- (void)setGregorianStartDate:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setMinimumDaysInFirstWeek:(NSUInteger)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end