//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef XPCNSClientConnection_h
#define XPCNSClientConnection_h
@import Foundation;

#include "XPCClientConnection.h"
#include "XPCClientConnectionDelegate-Protocol.h"
#include "XPCNSClientConnectionDelegate-Protocol.h"

@class NSString;

@interface XPCNSClientConnection : NSObject<XPCClientConnectionDelegate> {
  /* instance variables */
  XPCClientConnection *_clientConnection;
}

@property (readonly, nonatomic) NSObject<XPCNSClientConnectionDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithServiceName:(id)name delegate:(id)delegate;
- (void)sendMessage:(id)message data:(id)data withHandler:(id /* block */)handler;
- (void)sendMessageReliably:(id)reliably data:(id)data maxRetryCount:(int)count withHandler:(id /* block */)handler;
- (void)shutDownCompletionBlock:(id /* block */)block;
- (void)XPCClientConnection:(id)connection didReceiveRequest:(id)request;
@end

#endif /* XPCNSClientConnection_h */