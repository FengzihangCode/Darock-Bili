//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXPIFingerController_h
#define AXPIFingerController_h
@import Foundation;

#include "AXAssertionCoordinatorDelegate-Protocol.h"
#include "AXPIFingerAppearanceDelegate-Protocol.h"
#include "AXPIFingerContainerView.h"
#include "AXPIFingerEventSender.h"
#include "AXPIFingerModelDelegate-Protocol.h"

@class AXAssertionCoordinator, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIView, UIWindow;

@interface AXPIFingerController : NSObject<AXPIFingerModelDelegate, AXAssertionCoordinatorDelegate> {
  /* instance variables */
  AXPIFingerEventSender *_eventSender;
  unsigned long long _updateCount;
  NSMutableDictionary *_downInfosByIdentifier;
  NSMutableDictionary *_upInfosByIdentifier;
  BOOL _didMoveFingersDuringUpdate;
  id /* block */ _gestureCompletion;
}

@property (readonly, nonatomic) AXAssertionCoordinator *suppressVisualsAssertionCoodinator;
@property (readonly, nonatomic) UIView *fingerContainerView;
@property (readonly, nonatomic) BOOL isPinchEnabled;
@property (readonly, nonatomic) NSArray *fingerModels;
@property (readonly, nonatomic) unsigned long long numberOfFingers;
@property (nonatomic) BOOL shouldAddRealEventFlag;
@property (nonatomic) unsigned long long senderID;
@property (readonly, nonatomic) BOOL isPerformingGesture;
@property (weak, nonatomic) NSObject<AXPIFingerAppearanceDelegate> *appearanceDelegate;
@property (retain, nonatomic) UIWindow *fixedReferenceWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fixedReferenceBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)init;
- (id)initWithDisplayUUID:(id)uuid;
- (void)dealloc;
- (void)clearAllFingersAnimated:(BOOL)animated endPointForAnimation:(struct CGPoint { double x0; double x1; })animation;
- (void)showFingerModels:(id)models animated:(BOOL)animated startPointForAnimation:(struct CGPoint { double x0; double x1; })animation;
- (void)_showFingerModels:(id)models animated:(BOOL)animated startPointForAnimation:(struct CGPoint { double x0; double x1; })animation shouldShowPinchChain:(BOOL)chain shouldReuseFingers:(BOOL)fingers;
- (void)showPinchFingersAnimated:(BOOL)animated midpoint:(struct CGPoint { double x0; double x1; })midpoint;
- (void)resetPinchFingers;
- (struct CGPoint { double x0; double x1; })_sceneReferencePointFromFingerLocation:(struct CGPoint { double x0; double x1; })location;
- (struct CGPoint { double x0; double x1; })_fingerLocationFromSceneReferencePoint:(struct CGPoint { double x0; double x1; })point;
- (id)_eventTouchInfoForFingerLocation:(struct CGPoint { double x0; double x1; })location force:(double)force;
- (id)_eventTouchInfoForFinger:(id)finger;
- (id)_touchInfosByIdentifierForPressedFingers;
- (void)pressFingersDownAnimated:(BOOL)animated sendTouchEvents:(BOOL)events;
- (void)liftFingersUpAnimated:(BOOL)animated sendTouchEvents:(BOOL)events;
- (void)pressFingersDownAnimated:(BOOL)animated;
- (void)liftFingersUpAnimated:(BOOL)animated;
- (void)performCircularProgressAnimationOnFingersWithDuration:(double)duration completion:(id /* block */)completion;
- (void)cancelCircularProgressAnimation;
- (void)enumerateFingersUsingBlock:(id /* block */)block;
- (struct CGPoint { double x0; double x1; })midpointForFingers;
- (struct CGPoint { double x0; double x1; })midpointOfStartingFingersForGesture:(id)gesture;
- (id)_showStartingFingersForGesture:(id)gesture animated:(BOOL)animated startPointForAnimation:(struct CGPoint { double x0; double x1; })animation;
- (id)_handleStartingFingersForGesture:(id)gesture animated:(BOOL)animated startPointForAnimation:(struct CGPoint { double x0; double x1; })animation midpoint:(struct CGPoint { double x0; double x1; } *)midpoint showFingers:(BOOL)fingers;
- (void)showStartingFingersForGesture:(id)gesture;
- (void)showStartingFingersForGesture:(id)gesture animated:(BOOL)animated startPointForAnimation:(struct CGPoint { double x0; double x1; })animation;
- (void)_replayEventAtIndex:(unsigned long long)index inGesture:(id)gesture allFingerIdentifiers:(id)identifiers;
- (void)performGesture:(id)gesture;
- (void)performGesture:(id)gesture completion:(id /* block */)completion;
- (void)performWithoutPreparingGesture:(id)gesture completion:(id /* block */)completion;
- (void)_performGesture:(id)gesture shouldShowFingers:(BOOL)fingers completion:(id /* block */)completion;
- (void)cancelGesture;
- (void)_interruptGestureIfNeeded;
- (void)_endGestureWithSuccess:(BOOL)success;
- (id)fingerModelAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)acquireAssertionToSuppressVisualsWithReason:(id)reason;
- (void)assertionCoordinator:(id)coordinator assertionsDidBecomeActive:(BOOL)active;
- (id)_pointStringsFromFingers;
- (id)legacyPressFingersDown;
- (id)legacyLiftFingersUp;
- (BOOL)moveFingersToPoints:(id)points;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForFingersAtPoints:(id)points;
- (void)animateToTapWithDuration:(double)duration;
- (void)performDownAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)performMoveToPoint:(struct CGPoint { double x0; double x1; })point;
- (void)performUpAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)_sendMoveEventIfNeededForFingerModel:(id)model atIndex:(unsigned long long)index;
- (void)didUpdateForceForFingerModel:(id)model;
- (void)didUpdateLocationForFingerModel:(id)model;
- (void)didUpdatePressStateForFingerModel:(id)model;
- (void)didUpdateSelectedStateForFingerModel:(id)model;
- (void)didUpdateShapeForFingerModel:(id)model;
- (unsigned long long)_fingerIdentifierForIndex:(unsigned long long)index;
- (BOOL)_isInUpdateBlock;
- (void)beginUpdates;
- (void)endUpdates;
@end

#endif /* AXPIFingerController_h */