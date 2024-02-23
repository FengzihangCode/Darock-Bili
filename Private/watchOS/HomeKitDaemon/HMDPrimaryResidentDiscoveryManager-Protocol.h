//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDPrimaryResidentDiscoveryManager_Protocol_h
#define HMDPrimaryResidentDiscoveryManager_Protocol_h
@import Foundation;

#include "HMDPrimaryResidentDiscoveryManager-Protocol.h"
#include "HMDPrimaryResidentDiscoveryManagerDataSource-Protocol.h"
#include "HMDPrimaryResidentDiscoveryManagerDelegate-Protocol.h"
#include "HMDPrimaryResidentDiscoveryOperation-Protocol.h"
#include "HMDResidentDeviceManagerContext-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFExponentialBackoffTimer, NSString;
@protocol OS_dispatch_queue;

@protocol HMDPrimaryResidentDiscoveryManager <NSObject>

@property (weak) NSObject<HMDPrimaryResidentDiscoveryManagerDelegate> *delegate;

/* instance methods */
- (void)configureWithContext:(id)context;
- (void)discoverPrimaryResident;
- (void)cancel;
@end

#endif /* HMDPrimaryResidentDiscoveryManager_Protocol_h */