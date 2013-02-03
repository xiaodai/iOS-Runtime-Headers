/* Generated by RuntimeBrowser
   Image: /usr/lib/libobjc.A.dylib
 */

@class Protocol;

@interface Protocol : Object <NSObject> {
    struct objc_method_description_list { NSInteger x1; struct objc_method_description { 
            SEL name; 
            char *types; 
    struct objc_method_description_list { NSInteger x1; struct objc_method_description { 
            SEL name; 
            char *types; 
        } x2[1]; } *class_methods;
        } x2[1]; } *instance_methods;
    struct objc_protocol_list { struct objc_protocol_list {} *x1; long x2; Protocol *x3[1]; } *protocol_list;
    char *protocol_name;
}

+ (id)autorelease;
+ (Class)class;
+ (BOOL)conformsToProtocol:(id)arg1;
+ (id)description;
+ (NSUInteger)hash;
+ (void)initialize;
+ (BOOL)isEqual:(id)arg1;
+ (BOOL)isKindOfClass:(Class)arg1;
+ (BOOL)isMemberOfClass:(Class)arg1;
+ (BOOL)isProxy;
+ (void)load;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)performSelector:(SEL)arg1;
+ (oneway void)release;
+ (BOOL)respondsToSelector:(SEL)arg1;
+ (id)retain;
+ (NSUInteger)retainCount;
+ (id)self;
+ (Class)superclass;
+ (struct _NSZone { }*)zone;

- (id)autorelease;
- (Class)class;
- (BOOL)conformsTo:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (struct objc_method_description { SEL x1; char *x2; }*)descriptionForClassMethod:(SEL)arg1;
- (struct objc_method_description { SEL x1; char *x2; }*)descriptionForInstanceMethod:(SEL)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isProxy;
- (const char *)name;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)retain;
- (NSUInteger)retainCount;
- (id)self;
- (Class)superclass;
- (struct _NSZone { }*)zone;

@end