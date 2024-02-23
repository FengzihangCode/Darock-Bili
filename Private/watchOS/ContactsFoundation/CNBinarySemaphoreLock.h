//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNBinarySemaphoreLock_h
#define CNBinarySemaphoreLock_h
@import Foundation;

#include "NSLocking-Protocol.h"

@class NSString;
@protocol OS_dispatch_semaphore;

@interface CNBinarySemaphoreLock : NSObject<NSLocking> {
  /* instance variables */
  NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (copy) NSString *name;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)lock;
- (void)unlock;
- (id)description;
@end

#endif /* CNBinarySemaphoreLock_h */