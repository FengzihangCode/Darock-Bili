//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCWCMClient_h
#define VCWCMClient_h
@import Foundation;

#include "WCMClientDelegate-Protocol.h"

@protocol OS_dispatch_queue, OS_xpc_object;

@interface VCWCMClient : NSObject

@property (readonly) NSObject<OS_xpc_object> *connection;
@property (readonly) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSObject<WCMClientDelegate> *wcmClientDelegate;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)startWCMClient;
- (void)stopWCMClient;
@end

#endif /* VCWCMClient_h */