//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1222.300.51.0.0
//
#ifndef WatchDogTimer_h
#define WatchDogTimer_h
@import Foundation;

#include "CHLogger.h"

@class NSString;
@protocol OS_dispatch_source;

@interface WatchDogTimer : CHLogger {
  /* instance variables */
  NSString *_name;
  NSObject<OS_dispatch_source> *_timer;
}

/* instance methods */
- (id)initWithQueue:(id)queue withName:(id)name withTimeout:(double)timeout withCallback:(id /* block */)callback;
- (void)dealloc;
- (void)cancel;
@end

#endif /* WatchDogTimer_h */