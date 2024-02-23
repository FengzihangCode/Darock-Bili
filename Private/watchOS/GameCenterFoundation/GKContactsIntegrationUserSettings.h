//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKContactsIntegrationUserSettings_h
#define GKContactsIntegrationUserSettings_h
@import Foundation;

@interface GKContactsIntegrationUserSettings : NSObject
/* class methods */
+ (int)integrationConsentValueFromServerResult:(id)result;
+ (id)associationIDFromServerResult:(id)result;
+ (id)dateFromServerResult:(id)result;
+ (void)applySettingsToObject:(id)object fromResults:(id)results;
@end

#endif /* GKContactsIntegrationUserSettings_h */