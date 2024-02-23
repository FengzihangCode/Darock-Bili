//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSDetentService_Protocol_h
#define CSLSDetentService_Protocol_h
@import Foundation;

#include "CSLSConcurrentObserverStore.h"
#include "CSLSDetentServiceConnection.h"

@class AOPHapticsController, NSArray, NSDictionary;
@protocol OS_dispatch_queue;

@protocol CSLSDetentService <NSObject>
/* instance methods */
- (void)takeDetentAssertion:(id /* block */)assertion;
- (void)releaseDetentAssertion:(id /* block */)assertion;
- (void)getPreferences:(id /* block */)preferences;
- (void)recordMetrics:(id)metrics;
@end

#endif /* CSLSDetentService_Protocol_h */