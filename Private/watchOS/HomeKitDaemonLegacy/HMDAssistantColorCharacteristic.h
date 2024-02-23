//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAssistantColorCharacteristic_h
#define HMDAssistantColorCharacteristic_h
@import Foundation;

#include "HMFObject.h"

@class NSString;

@interface HMDAssistantColorCharacteristic : HMFObject

@property (readonly, nonatomic) NSString *readCharacteristicType;
@property (readonly, nonatomic) NSString *writeCharacteristicType;
@property (readonly, nonatomic) NSString *format;
@property (readonly, nonatomic) BOOL mandatory;

/* instance methods */
- (id)initWithReadCharacteristicType:(id)type writeCharacteristicType:(id)type format:(id)format mandatory:(BOOL)mandatory;
@end

#endif /* HMDAssistantColorCharacteristic_h */