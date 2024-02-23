//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef _ICMusicSubscriptionLeaseIdentityCacheKey_h
#define _ICMusicSubscriptionLeaseIdentityCacheKey_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface _ICMusicSubscriptionLeaseIdentityCacheKey : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSNumber *delegatedDSID;
@property (readonly, copy, nonatomic) NSNumber *DSID;
@property (readonly, copy, nonatomic) NSString *carrierBundleDeviceIdentifier;

/* instance methods */
- (id)initWithDSID:(id)dsid carrierBundleDeviceIdentifier:(id)identifier delegatedDSID:(id)dsid;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* _ICMusicSubscriptionLeaseIdentityCacheKey_h */