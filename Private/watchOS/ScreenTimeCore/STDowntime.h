//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STDowntime_h
#define STDowntime_h
@import Foundation;

#include "NSManagedObject.h"

@class NSSet, NSString;

@interface STDowntime : NSManagedObject

@property (copy, @dynamic, nonatomic) NSString *calendarIdentifier;
@property (@dynamic, nonatomic) BOOL enabled;
@property (@dynamic, nonatomic) BOOL canAskForMoreTime;
@property (copy, @dynamic, nonatomic) NSSet *schedule;

/* instance methods */
- (void)setStartHour:(long long)hour startMinute:(long long)minute endHour:(long long)hour endMinute:(long long)minute;
@end

#endif /* STDowntime_h */