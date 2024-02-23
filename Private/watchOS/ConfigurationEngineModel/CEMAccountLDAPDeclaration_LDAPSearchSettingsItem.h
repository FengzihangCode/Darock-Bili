//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMAccountLDAPDeclaration_LDAPSearchSettingsItem_h
#define CEMAccountLDAPDeclaration_LDAPSearchSettingsItem_h
@import Foundation;

#include "CEMPayloadBase.h"

@class NSString;

@interface CEMAccountLDAPDeclaration_LDAPSearchSettingsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadLDAPSearchSettingDescription;
@property (copy, nonatomic) NSString *payloadLDAPSearchSettingSearchBase;
@property (copy, nonatomic) NSString *payloadLDAPSearchSettingScope;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithLDAPSearchSettingDescription:(id)description withLDAPSearchSettingSearchBase:(id)base withLDAPSearchSettingScope:(id)scope;
+ (id)buildRequiredOnlyWithLDAPSearchSettingSearchBase:(id)base;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMAccountLDAPDeclaration_LDAPSearchSettingsItem_h */