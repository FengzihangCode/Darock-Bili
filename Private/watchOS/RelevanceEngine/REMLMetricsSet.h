//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REMLMetricsSet_h
#define REMLMetricsSet_h
@import Foundation;

#include "REMLMetricsProvider-Protocol.h"

@class NSMutableDictionary, NSMutableSet;

@interface REMLMetricsSet : NSObject<REMLMetricsProvider> {
  /* instance variables */
  NSMutableDictionary *metricsIndex;
  NSMutableSet *metricsSet;
}

/* instance methods */
- (id)init;
- (BOOL)addMetrics:(id)metrics;
- (id)getMetricsByName:(id)name;
- (id)name;
- (void)updateMetricsFromFeatures:(id)features prediction:(id)prediction truth:(id)truth;
- (void)reset;
@end

#endif /* REMLMetricsSet_h */