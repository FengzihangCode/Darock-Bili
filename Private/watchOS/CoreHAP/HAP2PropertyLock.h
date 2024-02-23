//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2PropertyLock_h
#define HAP2PropertyLock_h
@import Foundation;

#include "HAP2Lock.h"

@interface HAP2PropertyLock : HAP2Lock
/* class methods */
+ (id)lockWithName:(id)name;

/* instance methods */
- (void)performBlock:(id /* block */)block;
- (void)performReadingBlock:(id /* block */)block;
- (void)performWritingBlock:(id /* block */)block;
@end

#endif /* HAP2PropertyLock_h */