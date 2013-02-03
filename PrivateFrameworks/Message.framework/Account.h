/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableDictionary;

@interface Account : NSObject {
    unsigned int _isOffline : 1;
    unsigned int _autosynchronizingEnabled : 1;
    unsigned int _isActive : 2;
    NSMutableDictionary *_info;
}

+ (BOOL)_shouldUseKeychain;
+ (id)accountInfoValueForKey:(id)arg1 value:(id)arg2;
+ (id)accountTypeString;
+ (BOOL)allObjectsInArrayAreOffline:(id)arg1;
+ (id)createAccountWithDictionary:(id)arg1;
+ (id)displayedAccountTypeString;
+ (id)displayedShortAccountTypeString;
+ (BOOL)haveAccountsBeenConfigured;
+ (id)hostname;
+ (void)initialize;
+ (BOOL)isPredefinedAccountType;
+ (BOOL)isSSLEditable;
+ (id)myFullName;
+ (id)predefinedValueForKey:(id)arg1;
+ (id)readAccountsUsingKey:(id)arg1;
+ (id)saslProfileName;
+ (void)saveAccountInfoToDefaults;
+ (void)saveAccounts:(id)arg1 usingKey:(id)arg2;

- (BOOL)_connectAndAuthenticate:(id)arg1;
- (id)_createConnection;
- (void)_queueAccountInfoDidChange;
- (void)_removePasswordInKeychain;
- (void)_setAccountInfo:(id)arg1;
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(NSUInteger)arg1;
- (id)accountInfo;
- (void)accountInfoDidChange;
- (BOOL)acquireCredentialsWithPassword:(id)arg1;
- (id)alternateConnectionSettings;
- (void)applySettingsAsDefault:(id)arg1;
- (id)authenticatedConnection;
- (BOOL)canGoOffline;
- (Class)connectionClass;
- (id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3;
- (id)customTitleForAuthenticationError:(id)arg1 authScheme:(id)arg2 defaultTitle:(id)arg3;
- (id)customTitleForError:(id)arg1 authScheme:(id)arg2 defaultTitle:(id)arg3;
- (long)dataContextIdentifier;
- (void)dealloc;
- (id)defaultConnectionSettings;
- (NSUInteger)defaultPortNumber;
- (NSUInteger)defaultSecurePortNumber;
- (id)defaultsDictionary;
- (id)displayName;
- (id)domain;
- (BOOL)enableAccount;
- (id)hostname;
- (id)init;
- (id)insecureConnectionSettings;
- (BOOL)isActive;
- (BOOL)isCommonPortNumber:(NSUInteger)arg1;
- (BOOL)isOffline;
- (BOOL)isPasswordMissing;
- (NSUInteger)keychainPortNumber;
- (id)managedTag;
- (id)missingPasswordErrorWithTitle:(id)arg1;
- (id)nameForMailboxUid:(id)arg1;
- (BOOL)needsCredentials;
- (id)password;
- (id)passwordFromKeychain;
- (id)passwordFromStoredUserInfo;
- (NSUInteger)portNumber;
- (id)preferredAuthScheme;
- (id)promptUserForPasswordWithMessage:(id)arg1;
- (id)promptUserIfNeededForPasswordWithMessage:(id)arg1;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (void)removeValueInAccountInfoForKey:(id)arg1;
- (void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2;
- (BOOL)requiresAuthentication;
- (id)secureConnectionSettings;
- (id)secureServiceName;
- (id)serviceName;
- (void)setAccountInfo:(id)arg1;
- (void)setAutosynchronizingEnabled:(BOOL)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setIsActive:(BOOL)arg1;
- (void)setIsOffline:(BOOL)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordInKeychain:(id)arg1;
- (void)setPortNumber:(NSUInteger)arg1;
- (void)setPreferredAuthScheme:(id)arg1;
- (void)setTemporaryPassword:(id)arg1;
- (void)setTryDirectSSL:(BOOL)arg1;
- (void)setUserApprovedCertificateDigest:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setUsesSSL:(BOOL)arg1;
- (void)setValueInAccountInfo:(id)arg1 forKey:(id)arg2;
- (BOOL)shouldDisplayHostnameInErrorMessages;
- (BOOL)shouldEnableAfterError:(id)arg1;
- (BOOL)storesPassword;
- (id)uniqueId;
- (id)userApprovedCertificateDigest;
- (id)username;
- (BOOL)usesSSL;
- (void)validateConnections;
- (id)valueInAccountInfoForKey:(id)arg1;

@end