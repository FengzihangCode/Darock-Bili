//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFChargingUICoordinator_h
#define SFChargingUICoordinator_h
@import Foundation;

#include "SFXPCClient.h"

@class NSDate;
@protocol OS_dispatch_source;

@interface SFChargingUICoordinator : SFXPCClient {
  /* instance variables */
  BOOL _activateCalled;
  BOOL _invalidateCalled;
  BOOL _animationSPIAdopted;
  BOOL _runningAsCarry;
  NSDate *_uiUpdateMaxDate;
  NSDate *_uiUpdateRequestDate;
  id /* block */ _uiUpdateHandler;
  BOOL _uiUpdateMinTimeElapsed;
  BOOL _uiUpdateShouldDismiss;
  NSObject<OS_dispatch_source> *_uiUpdateTimer;
}

@property (nonatomic) long long defaultDuration;

/* instance methods */
- (void)activate;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (void)requestToShowUIWithHandler:(id /* block */)handler;
- (void)requestToStartAnimationAtDate:(id)date;
- (void)_requestToStartAnimationAtDate:(id)date;
- (void)requestToDismissUIHandler:(id /* block */)uihandler;
- (void)_requestToDismissUIHandler:(id /* block */)uihandler;
- (void)sendDismissUIWithReason:(long long)reason;
- (void)_sendDismissUIWithReason:(long long)reason;
- (void)_dismissUI;
- (void)initialViewControllerDidAppear;
- (void)_initialViewControllerDidAppear;
- (void)initialViewControllerDidDisappear;
- (void)_initialViewControllerDidDisappear;
- (void)requestAnimationDateWithCompletion:(id /* block */)completion;
- (void)_timingRestartMinTimer;
- (void)_timingInvalidateMinTimer;
- (id)machServiceName;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)onqueue_connectionEstablished;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_connectionInvalidated;
@end

#endif /* SFChargingUICoordinator_h */