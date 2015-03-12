/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlaySlideshowSessionStartedOnClient : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int repeat : 1; 
        unsigned int slideMs : 1; 
        unsigned int status : 1; 
    } _has;
    unsigned int _repeat;
    NSString *_sessionUUID;
    unsigned int _slideMs;
    int _status;
    NSString *_theme;
    unsigned long long _timestamp;
    NSString *_transition;
}

@property BOOL hasRepeat;
@property(readonly) BOOL hasSessionUUID;
@property BOOL hasSlideMs;
@property BOOL hasStatus;
@property(readonly) BOOL hasTheme;
@property BOOL hasTimestamp;
@property(readonly) BOOL hasTransition;
@property unsigned int repeat;
@property(retain) NSString * sessionUUID;
@property unsigned int slideMs;
@property int status;
@property(retain) NSString * theme;
@property unsigned long long timestamp;
@property(retain) NSString * transition;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRepeat;
- (BOOL)hasSessionUUID;
- (BOOL)hasSlideMs;
- (BOOL)hasStatus;
- (BOOL)hasTheme;
- (BOOL)hasTimestamp;
- (BOOL)hasTransition;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)repeat;
- (id)sessionUUID;
- (void)setHasRepeat:(BOOL)arg1;
- (void)setHasSlideMs:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setRepeat:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSlideMs:(unsigned int)arg1;
- (void)setStatus:(int)arg1;
- (void)setTheme:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransition:(id)arg1;
- (unsigned int)slideMs;
- (int)status;
- (id)theme;
- (unsigned long long)timestamp;
- (id)transition;
- (void)writeTo:(id)arg1;

@end