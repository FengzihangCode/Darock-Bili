//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDTimerTriggerModel_h
#define HMDTimerTriggerModel_h
@import Foundation;

#include "HMDTriggerModel.h"

@class NSData, NSDate, NSString;

@interface HMDTimerTriggerModel : HMDTriggerModel

@property (copy, @dynamic, nonatomic) NSDate *fireDate;
@property (copy, @dynamic, nonatomic) NSData *fireDateTimeZone;
@property (copy, @dynamic, nonatomic) NSString *significantEvent;
@property (copy, @dynamic, nonatomic) NSData *significantEventOffset;
@property (copy, @dynamic, nonatomic) NSData *fireRepeatInterval;
@property (copy, @dynamic, nonatomic) NSData *recurrences;

/* class methods */
+ (id)properties;

/* instance methods */
- (id)createPayload;
@end

#endif /* HMDTimerTriggerModel_h */