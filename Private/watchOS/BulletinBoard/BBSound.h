//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBSound_h
#define BBSound_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString, TLAlertConfiguration;

@interface BBSound : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) TLAlertConfiguration *alertConfiguration;
@property (copy, nonatomic) NSString *audioCategory;
@property (nonatomic) double maxDuration;
@property (nonatomic) BOOL repeats;
@property (copy, nonatomic) NSString *ringtoneName;
@property (nonatomic) long long soundType;
@property (copy, nonatomic) NSDictionary *vibrationPattern;
@property (copy, nonatomic) NSString *songPath;
@property (nonatomic) unsigned long long soundBehavior;
@property (nonatomic) unsigned int systemSoundID;
@property (readonly, nonatomic) long long alertType;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL ignoreRingerSwitch;
@property (readonly, copy, nonatomic) NSString *toneIdentifier;
@property (readonly, copy, nonatomic) NSString *vibrationIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithToneAlert:(long long)alert;
- (id)initWithToneAlert:(long long)alert ignoreRingerSwitch:(BOOL)switch;
- (id)initWithToneAlert:(long long)alert accountIdentifier:(id)identifier;
- (id)initWithToneAlert:(long long)alert accountIdentifier:(id)identifier ignoreRingerSwitch:(BOOL)switch;
- (id)initWithToneAlert:(long long)alert toneIdentifier:(id)identifier vibrationIdentifier:(id)identifier;
- (id)initWithToneAlert:(long long)alert toneIdentifier:(id)identifier vibrationIdentifier:(id)identifier ignoreRingerSwitch:(BOOL)switch;
- (id)initWithToneAlert:(long long)alert accountIdentifier:(id)identifier toneIdentifier:(id)identifier vibrationIdentifier:(id)identifier ignoreRingerSwitch:(BOOL)switch;
- (id)initWithToneAlertConfiguration:(id)configuration;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)replacementObjectForCoder:(id)coder;
- (id)awakeAfterUsingCoder:(id)coder;
- (id)description;
- (BOOL)isRepeating;
@end

#endif /* BBSound_h */