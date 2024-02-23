//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCConnectionHealthMonitor_h
#define VCConnectionHealthMonitor_h
@import Foundation;

#include "VCConnectionHealthMonitorDelegate-Protocol.h"

@protocol OS_dispatch_queue;

@interface VCConnectionHealthMonitor : NSObject {
  /* instance variables */
  unsigned char _lastReportedIndex;
  struct ConnectionStatsHistory { unsigned char latestConnectionStatsIndex; unsigned char x[5] totalPacketsReceived; C] x[2[5] connectionStats; C] x[2[5] connectionStatsRatio; } _statsHistory;
  struct _opaque_pthread_rwlock_t { long long __sig; char x[192] __opaque; } _peerStateRWLock;
  struct ConnectionStatsHistory { unsigned char latestConnectionStatsIndex; unsigned char x[5] totalPacketsReceived; C] x[2[5] connectionStats; C] x[2[5] connectionStatsRatio; } _peerStatsHistory;
  NSObject<OS_dispatch_queue> *_delegateQueue;
  struct _opaque_pthread_rwlock_t { long long __sig; char x[192] __opaque; } _stateRWLock;
  struct ConnectionStats { unsigned char totalPacketsReceived; unsigned char x[2] connectionStats; unsigned char currentIndex; double startTime; } _currentReceivingStats;
  struct ConnectionStats { unsigned char totalPacketsReceived; unsigned char x[2] connectionStats; unsigned char currentIndex; double startTime; } _tempReceivingStats;
  BOOL _firstPacketReceived;
  struct ConnectionStatsSequenceNumberData { unsigned short seqNumber; double receivedTimestamp; } _secondaryConnReceivedSequenceNumberStats[1024];
}

@property NSObject<VCConnectionHealthMonitorDelegate> *delegate;
@property double primaryConnHealthAllowedDelay;
@property BOOL usingServerBasedLinks;

/* instance methods */
- (id)init;
- (void)dealloc;
- (unsigned int)generateStatsBlob;
- (void)processPeerStatsBlob:(unsigned int)blob;
- (void)resetConnectionStats:(BOOL)stats;
- (void)resetHistory:(struct ConnectionStatsHistory { unsigned char x0; unsigned char x1[5] C] x2[2[5] C] x3[2[5] } *)history;
@end

#endif /* VCConnectionHealthMonitor_h */