//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKRewardsSummaryChartBarConfiguration_h
#define PKRewardsSummaryChartBarConfiguration_h
@import Foundation;

#include "PKSegmentedBarConfiguration-Protocol.h"

@class NSArray, NSString, PKAccountRewardsTierSummary;

@interface PKRewardsSummaryChartBarConfiguration : NSObject<PKSegmentedBarConfiguration> {
  /* instance variables */
  NSArray *_tierAmounts;
}

@property (readonly, nonatomic) PKAccountRewardsTierSummary *summary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSummary:(id)summary;
- (BOOL)isReady;
- (long long)numberOfSegments;
- (double)totalValue;
- (double)valueForSegmentAtIndex:(long long)index;
- (id)colorForSegmentAtIndex:(long long)index;
- (id)_valueAtIndex:(long long)index;
- (unsigned long long)_rewardsTierForIndex:(long long)index;
@end

#endif /* PKRewardsSummaryChartBarConfiguration_h */