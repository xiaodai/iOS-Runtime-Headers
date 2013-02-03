/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSMutableDictionary, NSArray, NSString, NSDictionary;

@interface PSSpecifier : NSObject {
    NSString *_name;
    NSMutableDictionary *_properties;
    NSDictionary *_shortTitleDict;
    NSDictionary *_titleDict;
    id _userInfo;
    NSArray *_values;
    SEL action;
    NSInteger autoCapsType;
    NSInteger autoCorrectionType;
    NSInteger cellType;
    Class detailControllerClass;
    Class editPaneClass;
    SEL getter;
    NSInteger keyboardType;
    SEL setter;
    id target;
    NSInteger textFieldType;
}

+ (NSInteger)autoCapsTypeForString:(id)arg1;
+ (id)emptyGroupSpecifier;
+ (id)groupSpecifierWithName:(id)arg1;
+ (NSInteger)keyboardTypeForString:(id)arg1;
+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(NSInteger)arg6 edit:(Class)arg7;

- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)init;
- (void)loadValuesAndTitlesFromDataSource;
- (id)name;
- (id)properties;
- (id)propertyForKey:(id)arg1;
- (void)removePropertyForKey:(id)arg1;
- (void)setKeyboardType:(NSInteger)arg1 autoCaps:(NSInteger)arg2 autoCorrection:(NSInteger)arg3;
- (void)setName:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setShortTitleDictionary:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitleDictionary:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3;
- (void)setValues:(id)arg1 titles:(id)arg2;
- (void)setValues:(id)arg1;
- (void)setupIconImageWithPath:(id)arg1;
- (id)shortTitleDictionary;
- (NSInteger)titleCompare:(id)arg1;
- (id)titleDictionary;
- (id)userInfo;
- (id)values;

@end