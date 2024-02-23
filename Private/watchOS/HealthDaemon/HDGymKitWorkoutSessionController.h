//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDGymKitWorkoutSessionController_h
#define HDGymKitWorkoutSessionController_h
@import Foundation;

#include "HDDefaultWorkoutSessionController.h"
#include "HDFitnessMachineSessionObserver-Protocol.h"
#include "HDProfile.h"
#include "HDWorkoutDataAccumulator-Protocol.h"
#include "HDWorkoutSessionController-Protocol.h"
#include "HDWorkoutSessionStateController-Protocol.h"

@class NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HDGymKitWorkoutSessionController : NSObject<HDFitnessMachineSessionObserver, HDWorkoutSessionController, HDWorkoutSessionStateController> {
  /* instance variables */
  HDProfile *_profile;
  NSObject<HDWorkoutSessionStateController> *_sessionStateController;
  NSObject<OS_dispatch_queue> *_queue;
  HDDefaultWorkoutSessionController *_defaultSessionController;
  NSUUID *_fitnessMachineSessionUUID;
  BOOL _acceptsDataAccumulators;
  NSObject<HDWorkoutDataAccumulator> *_currentAccumulator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<HDWorkoutDataAccumulator> *workoutDataAccumulator;

/* class methods */
+ (id)recoveryIdentifier;
+ (void)willFinishSessionWithRecoveryData:(id)data profile:(id)profile;

/* instance methods */
- (id)initWithProfile:(id)profile sessionConfiguration:(id)configuration sessionStateController:(id)controller recoveryState:(id)state;
- (void)workoutSessionServer:(id)server didTransitionFromState:(long long)state toState:(long long)state date:(id)date;
- (void)workoutSessionServer:(id)server didChangeConfiguration:(id)configuration;
- (void)workoutSessionServer:(id)server accumulatorDidChange:(id)change;
- (void)beginNewActivity:(id)activity;
- (void)endCurrentActivity:(id)activity;
- (BOOL)enableAutomaticDetectionForActivityConfigurations:(id)configurations;
- (void)fitnessMachineSessionUUID:(id)uuid updatedRecoveryConfiguration:(id)configuration;
- (BOOL)prepareWithError:(id *)error;
- (BOOL)startActivityWithDate:(id)date error:(id *)error;
- (BOOL)stopActivityWithDate:(id)date error:(id *)error;
- (BOOL)endWithError:(id *)error;
- (BOOL)pauseWithError:(id *)error;
- (BOOL)resumeWithError:(id *)error;
- (void)autoPauseWithDate:(id)date;
- (void)autoResumeWithDate:(id)date;
- (void)endHeartRateRecovery;
- (void)finish;
- (void)generateEvent:(id)event;
- (void)generateError:(id)error;
- (void)generateMetadata:(id)metadata;
- (void)generateConfigurationUpdate:(id)update;
- (void)didBeginNewActivity:(id)activity;
- (void)didEndCurrentActivity:(id)activity;
- (void)didDetectActivityChange:(id)change;
- (BOOL)storeSessionControllerState:(id)state forRecoveryIdentifier:(id)identifier error:(id *)error;
- (void)finishAggregationWithDate:(id)date;
- (void)hktest_setStateTransitionCompletionHandler:(id /* block */)handler;
- (void)unitTest_setCMWorkoutManager:(id)manager;
@end

#endif /* HDGymKitWorkoutSessionController_h */