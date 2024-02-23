//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPSleepStoreServer_h
#define HDSPSleepStoreServer_h
@import Foundation;

#include "HDSPDiagnosticsProvider-Protocol.h"
#include "HDSPEnvironment.h"
#include "HDSPEnvironmentAware-Protocol.h"
#include "HDSPProcessStateManager.h"
#include "HDSPProcessStateManagerDelegate-Protocol.h"
#include "HDSPSleepEventHandler-Protocol.h"
#include "HDSPSleepModeObserver-Protocol.h"
#include "HDSPSleepScheduleModelObserver-Protocol.h"
#include "HDSPSleepScheduleStateObserver-Protocol.h"
#include "HKSPSleepServer-Protocol.h"
#include "HKSPXPCConnectionListenerDelegate-Protocol.h"

@class HKSPPersistentSyncAnchorContainer, HKSPXPCConnectionListener, NSString;

@interface HDSPSleepStoreServer : NSObject<HKSPSleepServer, HDSPSleepScheduleStateObserver, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPSleepModeObserver, HDSPProcessStateManagerDelegate, HKSPXPCConnectionListenerDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware>

@property (readonly, nonatomic) HKSPXPCConnectionListener *connectionListener;
@property (readonly, nonatomic) HDSPProcessStateManager *processStateManager;
@property (retain, nonatomic) HKSPPersistentSyncAnchorContainer *syncAnchorContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

/* instance methods */
- (id)initWithEnvironment:(id)environment;
- (id)initWithEnvironment:(id)environment connectionListenerProvider:(id /* block */)provider processStateManager:(id)manager;
- (void)startListening;
- (void)_performWhenCurrentClientIsReady:(id /* block */)ready;
- (void)_performWhenClientIsReady:(id)ready block:(id /* block */)block;
- (void)_performWhenEnvironmentIsReady:(id /* block */)ready;
- (void)_performWhenEnvironmentIsReady:(id /* block */)ready withContext:(id)context;
- (void)environmentWillBecomeReady:(id)ready;
- (void)environmentDidBecomeReady:(id)ready;
- (void)environmentWillInvalidate:(id)invalidate;
- (void)connectWithCompletion:(id /* block */)completion;
- (void)checkInWithSyncAnchorContainer:(id)container completion:(id /* block */)completion;
- (void)getSleepScheduleWithCompletion:(id /* block */)completion;
- (void)saveSleepSchedule:(id)schedule completion:(id /* block */)completion;
- (void)getSleepSettingsWithCompletion:(id /* block */)completion;
- (void)saveSleepSettings:(id)settings completion:(id /* block */)completion;
- (void)getSleepEventRecordWithCompletion:(id /* block */)completion;
- (void)saveSleepEventRecord:(id)record completion:(id /* block */)completion;
- (void)getSleepModeWithCompletion:(id /* block */)completion;
- (void)setSleepMode:(long long)mode reason:(unsigned long long)reason completion:(id /* block */)completion;
- (void)getSleepScheduleStateWithCompletion:(id /* block */)completion;
- (void)getSleepWidgetStateWithCompletion:(id /* block */)completion;
- (void)publishNotificationWithIdentifier:(id)identifier userInfo:(id)info completion:(id /* block */)completion;
- (void)publishWakeUpResultsNotificationWithCompletion:(id /* block */)completion;
- (void)setLockScreenOverrideState:(long long)state userInfo:(id)info completion:(id /* block */)completion;
- (void)setWidgetOverrideState:(long long)state completion:(id /* block */)completion;
- (void)clearWidgetOverrideWithCompletion:(id /* block */)completion;
- (void)createSleepFocusModeWithCompletion:(id /* block */)completion;
- (void)deleteSleepFocusModeWithCompletion:(id /* block */)completion;
- (void)confirmAwakeWithCompletion:(id /* block */)completion;
- (void)dismissGoodMorningWithCompletion:(id /* block */)completion;
- (void)dismissSleepLockWithCompletion:(id /* block */)completion;
- (void)sleepAlarmWasDismissedOnDate:(id)date source:(unsigned long long)source completion:(id /* block */)completion;
- (void)sleepAlarmWasSnoozedUntilDate:(id)date source:(unsigned long long)source completion:(id /* block */)completion;
- (void)sleepAlarmWasModifiedFromSource:(unsigned long long)source completion:(id /* block */)completion;
- (void)sleepScheduleModelManager:(id)manager didUpdateSleepSchedule:(id)schedule;
- (void)sleepScheduleModelManager:(id)manager didUpdateSleepSettings:(id)settings;
- (void)sleepScheduleModelManager:(id)manager didUpdateSleepEventRecord:(id)record;
- (void)sleepEventIsDue:(id)due;
- (id)eventIdentifiers;
- (void)sleepScheduleStateDidChange:(unsigned long long)change previousState:(unsigned long long)state reason:(unsigned long long)reason;
- (void)sleepModeDidChange:(long long)change previousMode:(long long)mode reason:(unsigned long long)reason;
- (id /* block */)_checkForSuspendedBlock;
- (void)_notifyClient:(id)client forMissedMessagesWithSyncAnchorContainer:(id)container;
- (void)processNoLongerSuspended:(int)suspended;
- (void)processDidBecomeSuspended:(int)suspended;
- (void)connectionListenerDidAddClient:(id)client;
- (void)connectionListenerDidRemoveClient:(id)client;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
@end

#endif /* HDSPSleepStoreServer_h */