//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRAVReconnaissanceSession_h
#define MRAVReconnaissanceSession_h
@import Foundation;

#include "MRAVEndpoint.h"
#include "MRAVRoutingDiscoverySession.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MRAVReconnaissanceSession : NSObject {
  /* instance variables */
  double _timeoutTimerTimeout;
  NSObject<OS_dispatch_queue> *_serialQueue;
  NSMutableDictionary *_localMatchingDevicesFound;
  NSMutableSet *_knownIncompleteClusterMembers;
  BOOL _searchInProgress;
  BOOL _shouldWaitForUnanimousEndpoints;
  NSSet *_matchingOutputDeviceUIDsSet;
  id _discoverySessionCallbackToken;
  id /* block */ _callback;
  NSObject<OS_dispatch_source> *_timeoutTimer;
  NSMutableDictionary *_matchingDevicesFound;
  NSMutableArray *_matchingEndpointsFound;
  MRAVEndpoint *_unanimousEndpoint;
  NSArray *_availableOutputDevices;
  NSArray *_availableEndpoints;
  unsigned long long _updatesReceived;
  NSArray *_lastProcessedOutputDevices;
  NSArray *_lastProcessedEndpoints;
  unsigned long long _expectedLogicalDevices;
}

@property (readonly, nonatomic) NSArray *matchingOutputDeviceUIDs;
@property (readonly, nonatomic) NSString *matchingOutputDeviceGroupID;
@property (readonly, nonatomic) unsigned int endpointFeatures;
@property (readonly, nonatomic) MRAVRoutingDiscoverySession *discoverySession;
@property (nonatomic) BOOL useWeakMatching;
@property (nonatomic) BOOL returnPartialResults;
@property (nonatomic) BOOL waitForCompleteClusters;
@property (copy, nonatomic) NSArray *matchingLogicalDeviceIDs;

/* instance methods */
- (id)initWithOutputDeviceUIDs:(id)uids outputDeviceGroupID:(id)id features:(unsigned int)features;
- (void)dealloc;
- (void)beginSearchWithTimeout:(double)timeout completion:(id /* block */)completion;
- (void)beginSearchWithTimeout:(double)timeout endpointsCompletion:(id /* block */)completion;
- (void)beginSearchWithTimeout:(double)timeout mapCompletion:(id /* block */)completion;
- (void)cancelSearch;
@end

#endif /* MRAVReconnaissanceSession_h */