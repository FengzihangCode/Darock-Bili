//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSEventMonitor_h
#define SSEventMonitor_h
@import Foundation;

#include "SSXPCConnection.h"

@protocol OS_dispatch_queue, SSEventMonitorDelegate;

@interface SSEventMonitor : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_delegateQueue;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  SSXPCConnection *_eventConnection;
}

@property NSObject<SSEventMonitorDelegate> *delegate;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_connectEventConnection;
- (void)_handleMessage:(id)message fromServerConnection:(id)connection;
@end

#endif /* SSEventMonitor_h */