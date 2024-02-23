//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWifiTrigger_h
#define WFWifiTrigger_h
@import Foundation;

#include "WFTrigger.h"

@class NSArray;

@interface WFWifiTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedNetworks;
@property (nonatomic) unsigned long long selection;
@property (nonatomic) BOOL onConnect;
@property (nonatomic) BOOL onDisconnect;
@property (nonatomic) BOOL runAfterConnectionInterruption;

/* class methods */
+ (id)localizedDisplayName;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyphName;
+ (long long)triggerBacking;
+ (BOOL)isAllowedToRunAutomatically;
+ (BOOL)requiresNotification;
+ (id)onIcon;
+ (id)offIcon;
+ (id)onLabel;
+ (id)offLabel;
+ (id)onIconTintColor;
+ (id)offIconTintColor;
+ (id)tintColor;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (BOOL)hasValidConfiguration;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)suggestedActions;
@end

#endif /* WFWifiTrigger_h */