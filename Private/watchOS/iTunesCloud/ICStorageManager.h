//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICStorageManager_h
#define ICStorageManager_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface ICStorageManager : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (readonly, nonatomic) unsigned long long storageSpaceAvailable;
@property (readonly, nonatomic) BOOL cachingEnabled;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (void)ensureStorageIsAvailable:(unsigned long long)available withCompletionHandler:(id /* block */)handler;
@end

#endif /* ICStorageManager_h */