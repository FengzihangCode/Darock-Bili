//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPBTLECentralManager_h
#define HAPBTLECentralManager_h
@import Foundation;

#include "HMFObject.h"
#include "CBCentralManagerDelegate-Protocol.h"

@class CBCentralManager, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HAPBTLECentralManager : HMFObject<CBCentralManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) NSMutableSet *delegates;
@property long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)getInstance;

/* instance methods */
- (id)init;
- (id)_getCentralManager;
- (void)centralManagerDidUpdateState:(id)state;
- (void)registerCentralManagerDelegate:(id)delegate;
@end

#endif /* HAPBTLECentralManager_h */