//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _MSXPCRemoteProxy_h
#define _MSXPCRemoteProxy_h
@import Foundation;

#include "MSXPCConnection.h"
#include "NSXPCProxyCreating-Protocol.h"

@class NSXPCInterface;

@interface _MSXPCRemoteProxy : NSObject<NSXPCProxyCreating> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _selectorLock;
  struct __CFDictionary * _knownSelectors;
  MSXPCConnection *_connection;
  NSXPCInterface *_remoteInterface;
  id /* block */ _errorHandler;
}

@property (retain, nonatomic) id ___nsxpc_remoteObjectProxy;

/* instance methods */
- (id)initWithConnection:(id)connection interface:(id)interface errorHandler:(id /* block */)handler;
- (void)dealloc;
- (BOOL)conformsToProtocol:(id)protocol;
- (id)methodSignatureForSelector:(SEL)selector;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (void)forwardInvocation:(id)invocation;
- (void)___setNSXPCRemoteObjectProxy:(id)proxy;
@end

#endif /* _MSXPCRemoteProxy_h */