//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDDoorbellChimeControllerContext_Protocol_h
#define HMDDoorbellChimeControllerContext_Protocol_h
@import Foundation;

#include "HMDCharacteristicsAvailabilityListener.h"
#include "HMDCoordinationStateManagerProviding-Protocol.h"
#include "HMDDoorbellChimeControllerContext-Protocol.h"
#include "HMDHAPAccessory.h"
#include "HMMLogEventSubmitting-Protocol.h"

@class NSNotificationCenter, NSString, NSUUID;
@protocol HMDCOStateManager, OS_dispatch_queue;

@protocol HMDDoorbellChimeControllerContext <NSObject>

@property (weak) HMDHAPAccessory *accessory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDCharacteristicsAvailabilityListener *listener;
@property (readonly) BOOL featureEnabled;
@property (readonly) BOOL currentDevicePrimaryResident;
@property (readonly) Class doorbellBulletinUtilitiesClass;
@property (readonly) double doorbellChimeMaximumAnnounceDelay;
@property (readonly, copy) NSUUID *currentAccessoryUUID;
@property (readonly) BOOL coordinationPathEnabled;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventDispatcher;

/* instance methods */
- (id)postCULiveAction:(id)action;
- (id)postCoordinationState:(id)state;
- (id)keyPathFromComponents:(id)components;
- (id)clearCoordinationStateForKeyPaths:(id)paths;
- (id)fetchDoorbellDelay;
- (BOOL)accessorySupportsCoordinationDoorbellChime:(id)chime;
- (BOOL)isFeatureEnabled;
- (BOOL)isCurrentDevicePrimaryResident;
- (BOOL)isCoordinationPathEnabled;
@end

#endif /* HMDDoorbellChimeControllerContext_Protocol_h */