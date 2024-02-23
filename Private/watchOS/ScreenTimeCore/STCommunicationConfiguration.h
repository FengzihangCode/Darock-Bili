//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STCommunicationConfiguration_h
#define STCommunicationConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface STCommunicationConfiguration : NSObject<NSCopying, NSSecureCoding>

@property (readonly) BOOL isCommunicationSafetySendingRestricted;
@property (readonly) BOOL isCommunicationSafetyReceivingRestricted;
@property (readonly) BOOL isCommunicationSafetyNotificationEnabled;
@property (readonly) BOOL isCommunicationSafetyAnalyticsEnabled;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCommunicationSafetySendingRestricted:(BOOL)restricted communicationSafetyReceivingRestricted:(BOOL)restricted communicationSafetyNotificationEnabled:(BOOL)enabled communicationSafetyAnalyticsEnabled:(BOOL)enabled;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToCommunicationConfiguration:(id)configuration;
- (unsigned long long)hash;
@end

#endif /* STCommunicationConfiguration_h */