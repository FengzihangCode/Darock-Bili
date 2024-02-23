//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef _MSPSharedTripSingleCapabilityLevelFetcher_h
#define _MSPSharedTripSingleCapabilityLevelFetcher_h
@import Foundation;

#include "GCDTimer.h"
#include "MSPSharedTripCapabilityLevelFetcherObserver-Protocol.h"
#include "MSPSharedTripContact.h"
#include "_MSPSharedTripSingleCapabilityLevelFetcher.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface _MSPSharedTripSingleCapabilityLevelFetcher : NSObject<MSPSharedTripCapabilityLevelFetcherObserver> {
  /* instance variables */
  MSPSharedTripContact *_contact;
  id /* block */ _completion;
  _MSPSharedTripSingleCapabilityLevelFetcher *_keepAliveReference;
  double _timeoutInterval;
  GCDTimer *_timeoutTimer;
  unsigned long long _type;
  NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContact:(id)contact timeout:(double)timeout queue:(id)queue completion:(id /* block */)completion;
- (void)start;
- (void)capabilityLevelsDidUpdateForHandles:(id)handles;
- (void)_timeout;
- (void)_finish;
@end

#endif /* _MSPSharedTripSingleCapabilityLevelFetcher_h */