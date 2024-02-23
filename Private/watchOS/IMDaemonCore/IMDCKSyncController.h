//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDCKSyncController_h
#define IMDCKSyncController_h
@import Foundation;

#include "IMDCKAbstractSyncController.h"
#include "IMDCKAbstractSyncControllerDelegate-Protocol.h"
#include "IMDMessageSyncCoordinatorDelegate-Protocol.h"
#include "IMDXPCEventStreamHandlerDelegate-Protocol.h"
#include "IMStateLoggable-Protocol.h"
#include "IMUnlockMonitorListener-Protocol.h"

@class IMStateCaptureAssistant, IMSyncResumer, IMTimer, NSDate, NSString, NSTimer;

@interface IMDCKSyncController : IMDCKAbstractSyncController<IMDMessageSyncCoordinatorDelegate, IMDXPCEventStreamHandlerDelegate, IMUnlockMonitorListener, IMDCKAbstractSyncControllerDelegate, IMStateLoggable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDate *syncStartDate;
@property (retain, nonatomic) NSTimer *longRunningSyncTimer;
@property (retain, nonatomic) IMTimer *nightlySyncTimer;
@property (nonatomic) long long initialSyncAttempts;
@property (retain, nonatomic) NSDate *lastLogDumpDate;
@property (retain, nonatomic) NSDate *lastRestoreFailureLogDumpDate;
@property BOOL shouldReloadConversations;
@property (retain) NSTimer *reloadTimer;
@property (retain, nonatomic) IMSyncResumer *syncResumer;
@property (retain, nonatomic) IMStateCaptureAssistant *stateCaptureAssistant;
@property (nonatomic) BOOL isFetchingExitForEnablement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (BOOL)initialSyncAllowed;

/* instance methods */
- (void)syncCoordinatorStartedSyncWithName:(id)name identifier:(id)identifier;
- (void)syncCoordinatorFinishedSyncWithName:(id)name identifier:(id)identifier error:(id)error;
- (void)syncCoordinatorFinishedFetchingRecordsOfType:(long long)type name:(id)name identifier:(id)identifier count:(long long)count error:(id)error;
- (void)syncCoordinatorWaitingForImportToFinishWithName:(id)name identifier:(id)identifier;
- (id)messageSyncController;
- (id)initialMessageSyncController;
- (id)chatSyncController;
- (id)exitManager;
- (id)attachmentSyncController;
- (id)updateSyncController;
- (id)recoverableMessageSyncController;
- (id)initialAttachmentSyncController;
- (long long)syncControllerRecordType;
- (unsigned long long)_maxTimeToDeferInSeconds;
- (void)_postMetricsToCloudKitOnAutomaticHistoryDeletionAgentLaunch;
- (void)idsAccountsDidChange;
- (void)_iCloudAccountDidChange:(id)change;
- (BOOL)_didUpgradeOrRestoreFromBackup;
- (BOOL)_hasTriedToEnableMiCByDefault;
- (void)_setHasTriedToEnableMiCByDefault;
- (void)_attemptToEnableMiCByDefaultOnce;
- (void)_attemptToEnableMiCByDefaultOnceAttempt:(int)attempt;
- (double)_retryIntervalToEnableMicByDefaultForAttempt:(int)attempt;
- (int)_maxRetryAttemptsToEnableMiCByDefault;
- (void)registerForAccountNotifications;
- (void)_attemptToMigrateACAccountEnablementOnce;
- (id)_dateForNext24LogDumpAtHour:(long long)hour timeNow:(id)now dumpNow:(BOOL *)now;
- (void)_dispatchNotification:(id)notification withBlock:(id /* block */)block;
- (double)_IMAHDAgentFallbackIntervalInSeconds;
- (BOOL)_syncNotCompletedRecently;
- (void)_kickOffNightlyPeriodicSyncIfApplicable;
- (void)_nightlySyncTimerFired;
- (void)kickOffEagerSyncIfApplicable;
- (id)init;
- (void)dealloc;
- (void)performInitialSyncOnFirstConnectionOfImagentIfNeeded;
- (void)kickOffCloudKitSyncIfNeededOnImagentLaunch;
- (void)resumeSyncOnLaunchIfNeeded;
- (void)_needsSyncOnIdentityUpdate;
- (void)_needsSyncOnAccountUpdate;
- (void)_didPassAccountAndIdentityUpdateNeeds;
- (void)registerCloudSyncDependencies;
- (void)scheduleAttachmentAssetDownload;
- (void)beginInitialSyncWithActivity:(id)activity;
- (void)beginChatSyncPeriodic:(BOOL)periodic activity:(id)activity;
- (BOOL)shouldMarkAllIncompatibleMessagesForDeletion;
- (void)beginPeriodicSyncWithChecks:(unsigned long long)checks priority:(const char *)priority reason:(id)reason;
- (void)beginPeriodicSyncWithActivity:(id)activity;
- (void)beginUserInitiatedSync;
- (BOOL)_serverDoesNotAllowComingBackOnlineChatSync;
- (double)_minimumChatComingOnlineSyncInterval;
- (BOOL)_chatSyncedRecently;
- (BOOL)_serverDoesNotSingleDeviceLimitation;
- (BOOL)_accountHasMultipleDevices;
- (void)_clearTombstonesWithActivity:(id)activity;
- (void)beginComingBackOnlineSyncWithActivity:(id)activity;
- (void)clearCKRelatedDefaults;
- (void)clearLocalCloudKitSyncState;
- (void)syncController:(id)controller syncBatchCompleted:(unsigned long long)completed;
- (BOOL)_serverAllowsUIRefreshWhileSyncing;
- (BOOL)_serverAllowsUIRefreshTimerWhileSyncing;
- (double)reloadTimeInterval;
- (void)refreshUIIfApplicableWithBatchCount:(unsigned long long)count;
- (void)_refreshUIWhileSyncing;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)systemDidUnlock;
- (void)recordMetricIsCloudKitEnabled;
- (BOOL)_hasDumpedLogsInPastHour;
- (BOOL)_hasDumpedRestoreFailureLogsInPastHour;
- (unsigned long long)_currentHour;
- (BOOL)_withinAnHourOfLogDumpHour;
- (void)_deleteRestoreFailuresDirectory;
- (void)sendRestoreFailuresLogDumps;
- (void)sendRestoreFailuresLogDumpsIfNeeded;
- (void)collectLogsIfNeeded;
- (BOOL)_handleSyncFailureType:(long long)type step:(long long)step activity:(id)activity attemptCount:(unsigned long long)count startTime:(id)time error:(id)error retry:(id /* block */)retry;
- (id)_retryError;
- (id)_keychainErrorWithCause:(id)cause;
- (id)_keychainError;
- (void)beginInitialSyncAttemptCount:(unsigned long long)count withActivity:(id)activity;
- (BOOL)_errorIndicatesDeviceNotGoodForSync:(id)sync;
- (void)_nukeCKData;
- (void)_reloadChatRegistryOnMainThread;
- (id)_recordManager;
- (void)_beginPeriodicSyncWithActivity:(id)activity attemptCount:(unsigned long long)count;
- (void)syncAttachmentMetadataFirstSyncWithActivity:(id)activity deviceConditionsToCheck:(unsigned long long)check completionBlock:(id /* block */)block;
- (void)_beginPeriodicSyncWithActivity:(id)activity attemptCount:(unsigned long long)count syncChatsCompletionBlock:(id /* block */)block;
- (void)syncDeletesToCloudKitWithActivity:(id)activity completion:(id /* block */)completion;
- (void)_syncRecoverableMessagesToCloudKitWithActivity:(id)activity syncAttemptCount:(unsigned long long)count startTime:(id)time syncCompletionBlock:(id /* block */)block retryCompletionBock:(id /* block */)bock;
- (id)_sharedDatabaseManager;
- (void)_syncChatsWithActivity:(id)activity;
- (void)_callSyncWithCompletion:(id /* block */)completion activity:(id)activity;
- (void)_ifCloudKitAbleToSyncWithActivity:(id)activity callBlock:(id /* block */)block;
- (void)_beginExitStateCleanupIfNeededWithActivity:(id)activity;
- (void)_autoBugCaptureWithSubType:(id)type debugDescription:(id)description;
- (void)_noteSyncStarted:(BOOL)started;
- (void)_noteMetricsForSyncStartFrom:(id)from fullSync:(BOOL)sync;
- (void)_resetSyncStateAndAttemptCounts;
- (long long)_periodicSyncAttemptCount;
- (long long)_manualSyncAttemptCount;
- (void)_writeDownSyncDate;
- (void)syncChatsWithMessageContext:(id)context;
- (void)_noteMeticsForSyncEndedWithSuccces:(BOOL)succces;
- (id)syncStateDebuggingInfo:(id)info;
- (void)eventStreamHandler:(id)handler didReceiveEventWithName:(id)name userInfo:(id)info;
- (void)updateSecurityLevelDowngradedIfNeeded:(id /* block */)needed;
- (void)handleAKUserInfoChangedNotification:(id)notification;
- (BOOL)verifyAccountsMatchForMoc;
- (void)performOneTimeAccountUpgradeCheckIfNeeded;
- (void)clearAnalyticDefaultsAndLocalSyncState;
- (void)_addDatesDefaultsIfNeededToDictionary:(id)dictionary keys:(id)keys;
- (void)_addDatesDefaultsIfNeededToDictionary:(id)dictionary;
- (id)_dailySyncStateDictionary;
- (BOOL)_completedPeriodicSyncSinceFirstFullSyncForLastSyncDate:(id)date firstFullSyncCompletedDate:(id)date;
- (id)_periodicSyncStateDictionary;
- (BOOL)_serverDeniesPeriodicSyncAnalytics;
- (BOOL)_serverDeniesDailySyncStateAnalytics;
- (void)_submitCloudKitAnalyticWithOperationGroupName:(id)name analyticDictionary:(id)dictionary;
- (BOOL)logCloudKitAnalytics;
- (id)_stringForDate:(id)date withFormatter:(id)formatter;
- (id)_stringForObject:(id)object;
- (id)stateDictionaryForDiagnosticsRequest;
- (void)resumeSyncUsingKey:(id)key;
@end

#endif /* IMDCKSyncController_h */