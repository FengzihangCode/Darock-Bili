//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _EMOneTimeCodeObserver_h
#define _EMOneTimeCodeObserver_h
@import Foundation;

#include "EMOneTimeCodeObserver_xpc-Protocol.h"
#include "EMRecoverableObserver-Protocol.h"

@class EFCancelationToken, NSString;

@interface _EMOneTimeCodeObserver : NSObject<EMRecoverableObserver> {
  /* instance variables */
  NSObject<EMOneTimeCodeObserver_xpc> *_observer;
  EFCancelationToken *_token;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithObserver:(id)observer;
- (void)dealloc;
- (void)cancel;
- (void)performWithRemoteConnection:(id)connection;
- (void)recoverWithRemoteConnection:(id)connection;
- (void)_performWithRemoteConnection:(id)connection forRecovery:(BOOL)recovery;
@end

#endif /* _EMOneTimeCodeObserver_h */