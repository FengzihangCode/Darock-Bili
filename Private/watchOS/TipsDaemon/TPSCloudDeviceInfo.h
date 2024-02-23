//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSCloudDeviceInfo_h
#define TPSCloudDeviceInfo_h
@import Foundation;

#include "TPSSerializableObject.h"

@class NSString;

@interface TPSCloudDeviceInfo : TPSSerializableObject

@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *minOSVersion;
@property (copy, nonatomic) NSString *maxOSVersion;
@property (copy, nonatomic) NSString *symbolIdentifier;

/* instance methods */
- (id)initWithModel:(id)model;
- (id)initWithDictionary:(id)dictionary;
- (id)debugDescription;
@end

#endif /* TPSCloudDeviceInfo_h */