//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef FMKeychainManager_h
#define FMKeychainManager_h
@import Foundation;

@interface FMKeychainManager : NSObject
/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (BOOL)deleteDataForAccount:(id)account service:(id)service;
- (BOOL)setData:(id)data forAccount:(id)account service:(id)service synchronizable:(long long)synchronizable dataProtectionClass:(long long)class migratable:(long long)migratable;
- (BOOL)setData:(id)data forAccount:(id)account service:(id)service;
- (id)dataForAccount:(id)account service:(id)service;
- (BOOL)setPassword:(id)password forAccount:(id)account service:(id)service;
- (BOOL)setPassword:(id)password forAccount:(id)account service:(id)service synchronizable:(long long)synchronizable dataProtectionClass:(long long)class migratable:(long long)migratable;
- (id)passwordForAccount:(id)account service:(id)service;
- (id)itemForAccount:(id)account service:(id)service error:(id *)error;
- (id)allServices;
- (id)allAccountsForService:(id)service;
- (id)allRecords;
- (int)_add:(id)_add;
- (int)_updateWithQuery:(id)query attributes:(id)attributes;
- (int)_delete:(id)_delete;
- (id)_query:(id)_query error:(id *)error;
- (id)_accessibilityForDataProtectionClass:(long long)class migratable:(BOOL)migratable;
@end

#endif /* FMKeychainManager_h */