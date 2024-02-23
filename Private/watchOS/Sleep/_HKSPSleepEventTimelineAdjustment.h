//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKSPSleepEventTimelineAdjustment_h
#define _HKSPSleepEventTimelineAdjustment_h
@import Foundation;

#include "HKSPResolvedSleepScheduleOccurrence.h"

@interface _HKSPSleepEventTimelineAdjustment : NSObject

@property (retain, nonatomic) HKSPResolvedSleepScheduleOccurrence *originalOccurrence;
@property (retain, nonatomic) HKSPResolvedSleepScheduleOccurrence *adjustedOccurrence;

/* instance methods */
@end

#endif /* _HKSPSleepEventTimelineAdjustment_h */