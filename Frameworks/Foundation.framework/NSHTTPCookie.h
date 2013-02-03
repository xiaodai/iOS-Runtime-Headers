/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSHTTPCookieInternal;

@interface NSHTTPCookie : NSObject {
    NSHTTPCookieInternal *_cookiePrivate;
}

+ (id)_cf2nsCookies:(struct __CFArray { }*)arg1;
+ (struct __CFArray { }*)_ns2cfCookies:(id)arg1;
+ (id)cookieWithCFHTTPCookie:(struct OpaqueCFHTTPCookie { }*)arg1;
+ (id)cookieWithProperties:(id)arg1;
+ (id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;
+ (id)requestHeaderFieldsWithCookies:(id)arg1;

- (struct OpaqueCFHTTPCookie { }*)_GetInternalCFHTTPCookie;
- (NSInteger)_compareForHeaderOrder:(id)arg1;
- (BOOL)_isExpired;
- (id)_key;
- (id)comment;
- (id)commentURL;
- (void)dealloc;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)expiresDate;
- (NSUInteger)hash;
- (id)init;
- (id)initWithCFHTTPCookie:(struct OpaqueCFHTTPCookie { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHTTPOnly;
- (BOOL)isSecure;
- (BOOL)isSessionOnly;
- (id)name;
- (id)path;
- (id)portList;
- (id)properties;
- (id)value;
- (NSUInteger)version;

@end