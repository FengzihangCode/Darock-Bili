//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPSleepScheduleModelManager_h
#define HDSPSleepScheduleModelManager_h
@import Foundation;

#include "HDSPApplicationWorkspaceObserver-Protocol.h"
#include "HDSPDiagnosticsProvider-Protocol.h"
#include "HDSPEnvironment.h"
#include "HDSPEnvironmentAware-Protocol.h"
#include "HDSPSleepEventDelegate-Protocol.h"
#include "HDSPSleepEventProvider-Protocol.h"
#include "HDSPSleepScheduleModelChangeEvaluator.h"
#include "HDSPSleepStorageObserver-Protocol.h"
#include "HDSPSource-Protocol.h"
#include "HDSPTimeChangeObserver-Protocol.h"

@class HKSPObserverSet, HKSPSleepEventRecord, HKSPSleepSchedule, HKSPSleepScheduleModel, HKSPSleepSettings, NSSet, NSString;
@protocol HKSPMutexProvider;

@interface HDSPSleepScheduleModelManager : NSObject<HDSPDiagnosticsProvider, HDSPSleepEventProvider, HDSPTimeChangeObserver, HDSPSource, HDSPEnvironmentAware, HDSPSleepStorageObserver, HDSPApplicationWorkspaceObserver>

@property (readonly, nonatomic) NSObject<HKSPMutexProvider> *mutexProvider;
@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) HDSPSleepScheduleModelChangeEvaluator *changeEvaluator;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) HKSPSleepSchedule *sleepSchedule;
@property (readonly, nonatomic) HKSPSleepSettings *sleepSettings;
@property (readonly, nonatomic) HKSPSleepEventRecord *sleepEventRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) NSObject<HDSPSleepEventDelegate> *sleepEventDelegate;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, nonatomic) NSSet *observedApplicationBundleIdentifiers;

/* instance methods */
- (id)initWithEnvironment:(id)environment;
- (void)_withLock:(id /* block */)lock;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)environmentWillBecomeReady:(id)ready;
- (void)environmentDidBecomeReady:(id)ready;
- (id)_loadSleepScheduleModel:(id *)model;
- (id)_locked_loadSleepScheduleModel:(id *)model;
- (BOOL)saveSleepScheduleModel:(id)model error:(id *)error;
- (BOOL)removeSleepScheduleModelWithError:(id *)error;
- (void)_locked_notifyObserversForSleepScheduleModelChange:(id)change;
- (id)_locked_sleepScheduleModel;
- (id)_loadSleepSchedule:(id *)schedule;
- (id)_locked_loadSleepSchedule:(id *)schedule;
- (BOOL)saveSleepSchedule:(id)schedule error:(id *)error;
- (BOOL)_locked_saveSleepSchedule:(id)schedule error:(id *)error;
- (id)_locked_saveSleepSchedule:(id)schedule;
- (id)_locked_setSleepSchedule:(id)schedule;
- (id)_locked_updateSleepSchedule:(id)schedule;
- (id)_locked_applyNecessaryChangesBeforeSavingSleepSchedule:(id)schedule validationResult:(id)result;
- (void)_locked_applyNecessaryEventRecordChangesBeforeSavingSleepSchedule:(id)schedule validationResult:(id)result;
- (id)_locked_validateSleepSchedule:(id)schedule generateValidSchedule:(BOOL)schedule;
- (id)_locked_removeSleepSchedule;
- (void)notifyObserversForSleepScheduleChange:(id)change;
- (void)_locked_notifyObserversForSleepScheduleChange:(id)change;
- (id)_loadSleepSettings:(id *)settings;
- (id)_locked_loadSleepSettings:(id *)settings;
- (BOOL)saveSleepSettings:(id)settings error:(id *)error;
- (BOOL)_locked_saveSleepSettings:(id)settings error:(id *)error;
- (id)_locked_saveSleepSettings:(id)settings;
- (id)_locked_setSleepSettings:(id)settings;
- (id)_locked_updateSleepSettings:(id)settings;
- (id)_locked_resetSleepSettings;
- (void)notifyObserversForSleepSettingsChange:(id)change;
- (void)_locked_notifyObserversForSleepSettingsChange:(id)change;
- (id)_loadSleepEventRecord:(id *)record;
- (id)_locked_loadSleepEventRecord:(id *)record;
- (BOOL)saveSleepEventRecord:(id)record error:(id *)error;
- (BOOL)_locked_saveSleepEventRecord:(id)record error:(id *)error;
- (BOOL)saveSleepEventRecord:(id)record error:(id *)error preNotifyBlock:(id /* block */)block;
- (BOOL)_locked_saveSleepEventRecord:(id)record error:(id *)error preNotifyBlock:(id /* block */)block;
- (id)_locked_saveSleepEventRecord:(id)record;
- (id)_locked_updateSleepEventRecord:(id)record;
- (id)_locked_applyNecessaryChangesBeforeSavingSleepEventRecord:(id)record;
- (void)_locked_applyNecessarySleepSettingsChangesBeforeSavingSleepEventRecord:(id)record;
- (id)_locked_setSleepEventRecord:(id)record;
- (id)_locked_resetSleepEventRecord;
- (BOOL)_locked_updateModelWithBlock:(id /* block */)block persistBlock:(id /* block */)block error:(id *)error;
- (BOOL)_locked_canApplyChangesFrom:(id)from to:(id)to error:(id *)error;
- (id)_locked_applyNecessaryChangesBeforeSaving:(id)saving;
- (void)notifyObserversForSleepEventRecordChange:(id)change;
- (void)_locked_notifyObserversForSleepEventRecordChange:(id)change;
- (id)upcomingEventsDueAfterDate:(id)date;
- (id)_earliestDateToScheduleEventsForDate:(id)date;
- (void)significantTimeChangeDetected:(id)detected;
- (void)observedApplicationDidInstall:(id)install;
- (void)observedApplicationDidUninstall:(id)uninstall;
- (BOOL)_shouldTurnOffWatchSleepFeatures;
- (void)_turnOffWatchSleepFeatures;
- (BOOL)_shouldTurnOffSleepSchedule;
- (void)_turnOffSleepSchedule;
- (void)sleepStorageDidChangeExternally:(id)externally;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
@end

#endif /* HDSPSleepScheduleModelManager_h */