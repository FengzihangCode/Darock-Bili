//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCSynchronous_h
#define DMCSynchronous_h
@import Foundation;

@class NSConditionLock;

@interface DMCSynchronous : NSObject {
  /* instance variables */
  NSConditionLock *_lock;
}

/* instance methods */
- (id)init;
- (void)complete;
- (void)waitForCompletion;
@end

#endif /* DMCSynchronous_h */