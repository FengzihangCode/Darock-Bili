//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDDeviceSetupManager_h
#define HMDDeviceSetupManager_h
@import Foundation;

#include "HMFObject.h"
#include "HMDCoreFollowUpManager.h"

@class NSNotificationCenter;
@protocol HMDarwinNotificationProvider;

@interface HMDDeviceSetupManager : HMFObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  int _proxSetupNotificationToken;
}

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<HMDarwinNotificationProvider> *darwinNotificationProvider;
@property (readonly) BOOL running;
@property (readonly) HMDCoreFollowUpManager *followUpManager;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)initWithNotificationCenter:(id)center followUpManager:(id)manager darwinNotificationProvider:(id)provider;
- (void)dealloc;
- (BOOL)isRunning;
@end

#endif /* HMDDeviceSetupManager_h */