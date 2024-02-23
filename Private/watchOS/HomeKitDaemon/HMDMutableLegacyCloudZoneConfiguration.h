//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMutableLegacyCloudZoneConfiguration_h
#define HMDMutableLegacyCloudZoneConfiguration_h
@import Foundation;

#include "HMDLegacyCloudZoneConfiguration.h"
#include "NSMutableCopying-Protocol.h"

@class NSString;

@interface HMDMutableLegacyCloudZoneConfiguration : HMDLegacyCloudZoneConfiguration<NSMutableCopying>

@property (copy, @dynamic) NSString *rootRecordName;

/* instance methods */
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMDMutableLegacyCloudZoneConfiguration_h */