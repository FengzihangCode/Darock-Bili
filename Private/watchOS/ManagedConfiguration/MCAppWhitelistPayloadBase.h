//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCAppWhitelistPayloadBase_h
#define MCAppWhitelistPayloadBase_h
@import Foundation;

#include "MCPayload.h"

@class NSArray;

@interface MCAppWhitelistPayloadBase : MCPayload

@property (retain, nonatomic) NSArray *whitelistedAppsAndOptions;
@property (nonatomic) BOOL allowAccessWithoutPasscode;
@property (nonatomic) BOOL forceAllowSupervisorAccess;

/* class methods */
+ (id)knownOptionsKeys;
+ (id)knownUserEnabledOptionKeys;

/* instance methods */
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;
- (id)restrictions;
- (id)stubDictionary;
- (id)verboseDescription;
- (id)payloadDescriptionKeyValueSections;
@end

#endif /* MCAppWhitelistPayloadBase_h */