//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDBackingAccount_h
#define CKDBackingAccount_h
@import Foundation;

@class ACAccount, NSPersonNameComponents, NSString, NSURL;

@interface CKDBackingAccount : NSObject

@property (readonly, nonatomic) ACAccount *appleAccount;
@property (readonly, nonatomic) ACAccount *ckAccount;
@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property (readonly, nonatomic) NSPersonNameComponents *fullName;
@property (readonly, nonatomic) NSString *displayedHostname;
@property (readonly, nonatomic) NSString *sharingURLHostname;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) BOOL isPrimaryAccount;
@property (readonly, nonatomic) BOOL isAccountSuspended;
@property (readonly, nonatomic) BOOL canSuspendedAccountRenewCredentials;
@property (readonly, nonatomic) long long accountType;
@property (readonly, nonatomic) BOOL isPrimaryEmailVerified;
@property (readonly, nonatomic) NSURL *privateCloudDBURL;
@property (readonly, nonatomic) NSURL *privateShareServiceURL;
@property (readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property (readonly, nonatomic) NSURL *privateCodeServiceURL;
@property (readonly, nonatomic) NSURL *privateMetricsServiceURL;

/* class methods */
+ (id)accountWithIdentifier:(id)identifier;
+ (id)accountWithAltDSID:(id)dsid;
+ (id)primaryAccount;
+ (id)explicitCredentialsAccountWithEmail:(id)email password:(id)password recoveryKey:(id)key propertyOverrides:(id)overrides overridesByDataclass:(id)dataclass;
+ (id)mockAccountWithTestAccount:(id)account testDevice:(id)device;
+ (id)credentialRenewalDatesBySuspendedAccountID;
+ (void)registerDeviceCountRefreshActivity;
+ (id)deviceCountQueue;
+ (void)deviceCountForAccount:(id)account ignoreCache:(BOOL)cache completionHandler:(id /* block */)handler;
+ (void)fetchDeviceCountForAccount:(id)account completionHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
- (id)initWithAppleAccount:(id)account;
- (BOOL)isDataclassEnabled:(id)enabled;
- (BOOL)isDataclassEnabledForCellular:(id)cellular;
- (id)_accountCredentialForAccount:(id)account withError:(id *)error;
- (id)cloudKitAuthTokenWithError:(id *)error;
- (id)iCloudAuthTokenWithError:(id *)error;
- (void)noteSuspendedAccountRenewalDate;
- (id)accountPropertiesForDataclass:(id)dataclass;
- (void)renewAuthTokenWithOptions:(id)options completionHandler:(id /* block */)handler;
- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)account;
- (void)validateVettingToken:(id)token vettingEmail:(id)email vettingPhone:(id)phone completionHandler:(id /* block */)handler;
- (void)_setOverridesOnVettingContext:(id)context;
- (id)urlForDataclass:(id)dataclass preferringGateway:(BOOL)gateway;
- (id)urlForDataclass:(id)dataclass;
- (id)privateCodeServiceURLPreferringGateway:(BOOL)gateway;
- (long long)lastKnownDeviceCount;
@end

#endif /* CKDBackingAccount_h */