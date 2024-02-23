//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLScrollCenter_h
#define CSLScrollCenter_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"
#include "CSLDynamicBlurSlowModeAssertion.h"
#include "CSLGlobalScrollCenterDelegate-Protocol.h"
#include "CSLGlobalScrollCenterViewController.h"
#include "CSLNotificationCenterViewController.h"
#include "CSLNotificationCenterViewControllerDelegate-Protocol.h"
#include "CSLPIButtonHandlerProtocol-Protocol.h"
#include "CSLScrollCenterGesturing-Protocol.h"
#include "CSLUIStateProviding-Protocol.h"
#include "CSLWorkspaceRequestHandling-Protocol.h"

@class NSDictionary, NSHashTable, NSString, UIApplicationSceneDeactivationAssertion, UIView, UIViewPropertyAnimator, UIWindow;

@interface CSLScrollCenter : NSObject<CSLNotificationCenterViewControllerDelegate, CSLGlobalScrollCenterDelegate, CSLPIButtonHandlerProtocol, CSLWorkspaceRequestHandling, CSLUIStateProviding, CSLScrollCenterGesturing> {
  /* instance variables */
  CSLGlobalScrollCenterViewController *_viewController;
  CSLDynamicBlurSlowModeAssertion *_blurAssertion;
  NSDictionary *_hapticOptions;
  UIApplicationSceneDeactivationAssertion *_sceneAssertion;
  BOOL _reducedMotion;
  NSHashTable *_observers;
  NSHashTable *_validators;
  NSObject<BSInvalidatable> *_backlightPresentationAssertion;
  UIViewPropertyAnimator *_blurAnimator;
}

@property (nonatomic) long long gestureFlags;
@property (readonly, nonatomic) BOOL isPresented;
@property (readonly, @dynamic, nonatomic) struct { long long x0; double x1; unsigned long long x2; } visibilityState;
@property (readonly, nonatomic) UIWindow *scrollCenterWindow;
@property (retain, nonatomic) UIView *preferredGestureView;
@property (readonly, nonatomic) CSLNotificationCenterViewController *notificationCenterViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_handleReducedMotionStatusDidChangedNotification:(id)notification;
- (void)populateUIState:(id)uistate;
- (void)handleWorkspaceRequest:(id)request withTransitionCoordinator:(id)coordinator;
- (void)globalScrollCenterDidPeek:(id)peek;
- (void)globalScrollCenter:(id)center didUpdateRevealPercent:(double)percent;
- (void)globalScrollCenterWillPresent:(id)present;
- (void)globalScrollCenterDidPresent:(id)present;
- (void)globalScrollCenterWillDismiss:(id)dismiss;
- (void)globalScrollCenterDidDismiss:(id)dismiss;
- (BOOL)_shouldUseScaleEffect;
- (void)_updateVisibilityStateWithBlock:(id /* block */)block;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)addTransitionValidator:(id)validator;
- (void)_playHaptic;
- (void)notificationCenterWasCleared:(id)cleared;
- (BOOL)canPerformTransitionOfType:(unsigned long long)type declinedReason:(id *)reason;
- (void)presentNotificationCenterAnimated:(BOOL)animated withCompletion:(id /* block */)completion;
- (void)dismissAnimated:(BOOL)animated withCompletion:(id /* block */)completion;
- (void)dismissWithStyle:(unsigned long long)style animated:(BOOL)animated withCompletion:(id /* block */)completion;
- (void)_pptSwipeToNotificationCenterWithCompletion:(id /* block */)completion;
- (void)_pptDismissNotificationCenterWithCompletion:(id /* block */)completion;
@end

#endif /* CSLScrollCenter_h */