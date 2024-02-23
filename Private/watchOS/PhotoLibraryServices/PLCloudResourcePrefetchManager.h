//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLCloudResourcePrefetchManager_h
#define PLCloudResourcePrefetchManager_h
@import Foundation;

#include "PLCloudPhotoLibraryManager.h"
#include "PLCloudResourcePruneManager.h"
#include "PLLibraryServicesManager.h"
#include "PLPrefetchConfiguration.h"

@class NSDate, NSDictionary, PLVolumeInfo;
@protocol OS_dispatch_queue;

@interface PLCloudResourcePrefetchManager : NSObject {
  /* instance variables */
  PLLibraryServicesManager *_lsm;
  PLCloudPhotoLibraryManager *_cplManager;
  PLCloudResourcePruneManager *_pruneManager;
  NSDictionary *_inflightResources;
  long long _prefetchMode;
  long long _prefetchOptimizeMode;
  NSDate *_lastCheckCPLBGDownloadDate;
  BOOL _enqueuedCheckCPLBGDownload;
  NSObject<OS_dispatch_queue> *_workQueue;
  PLVolumeInfo *_volumeInfo;
  NSDate *_initialSyncDate;
  NSDate *_lastCompletePrefetchDate;
  PLPrefetchConfiguration *_prefetchConfiguration;
  BOOL _isWalrusEnabled;
}

/* class methods */
+ (id)descriptionForPrefetchPhase:(unsigned long long)phase;
+ (id)_identifierForResourceDownload:(id)download;
+ (id)_overridePrefetchMode;
+ (id)_descriptionForPrefetchMode:(long long)mode;
+ (id)_resourcesWithPredicate:(id)predicate limit:(unsigned long long)limit context:(id)context;
+ (BOOL)_prefetchIsEnabledForPhase:(unsigned long long)phase givenMode:(long long)mode andInitialSyncDate:(id)date;
+ (id)thumbnailResourcesNeedingPrefetchInContext:(id)context maxRetry:(unsigned long long)retry limit:(long long)limit;
+ (void)resourcesToPrefetchWithPrefetchPhase:(unsigned long long)phase prefetchMode:(long long)mode prefetchOptimizeMode:(long long)mode initialSyncDate:(id)date lastCompletePrefetchDate:(id)date initialBudget:(long long)budget excludeDynamicCPLResources:(BOOL)cplresources prefetchConfiguration:(id)configuration photoLibrary:(id)library applyPerPrefetchLimit:(BOOL)limit completionHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
- (id)initWithCPLManager:(id)cplmanager pruneManager:(id)manager libraryServicesManager:(id)manager;
- (void)invalidate;
- (void)startAutomaticPrefetch;
- (void)_startAutomaticPrefetch;
- (void)handleCPLStatusChange;
- (void)handleCPLConfigurationChange;
- (void)handleOptimizeModeChange;
- (void)_checkCPLBackgroundDownloadOperations;
- (void)_enqueueCheckCPLBGDownloadFromNow:(id)now withReason:(id)reason;
- (void)_cleanupInflightResources;
- (void)stop;
- (id)prefetchStatusForDebug:(BOOL)debug;
- (id)_prefetchStatusForDebug:(BOOL)debug;
- (void)prefetchResourcesWithPredicates:(id)predicates photoLibrary:(id)library prefetchPhase:(unsigned long long)phase completionHandler:(id /* block */)handler;
- (void)_reloadDownloadOriginalsSetting;
- (void)_reloadDefaultDownload;
- (void)_runOnWorkQueueWithTransaction:(id)transaction block:(id /* block */)block;
- (unsigned long long)_countOfAllInflightResources;
- (unsigned long long)_countOfInflightResourcesForPrefetchPhase:(unsigned long long)phase;
- (id)_allInflightResourceIdentifiers;
- (id)_inflightResourceIdentifiersForPrefetchPhase:(unsigned long long)phase;
- (BOOL)_isInflightResourceIdentifier:(id)identifier;
- (void)_addInflightResourceIdentifier:(id)identifier prefetchPhase:(unsigned long long)phase cplResource:(id)resource;
- (void)_removeInflightResourceIdentifier:(id)identifier prefetchPhase:(unsigned long long)phase cplResource:(id)resource;
- (void)_removeAllInflightResourceIdentifiers;
- (BOOL)_isPrefetchDisabled;
- (BOOL)_canPrefetch;
- (void)_writeDownloadFinishedMarkerIfNeeded;
- (void)clearPrefetchState;
- (void)_startPrefetchNextBatch;
- (unsigned long long)_intentForPrefetchPhase:(unsigned long long)phase;
- (void)_prefetchResources:(id)resources photoLibrary:(id)library prefetchPhase:(unsigned long long)phase shouldAutoPefetchNextBatch:(BOOL)batch;
- (void)_incrementPrefetchCountForPrefetchPhase:(unsigned long long)phase resources:(id)resources photoLibrary:(id)library;
- (void)_handlePrefetchError:(id)error forPLCloudResourceWithObjectID:(id)id;
- (id)_volumeInfo;
- (long long)_diskSpaceBudgetForPrefetchPhase:(unsigned long long)phase;
- (long long)_diskSpaceBudgetForPrefetchPhase:(unsigned long long)phase prefetchOptimizeMode:(long long)mode;
- (long long)_totalSizeOfOriginalResourcesForPrefetchWithPredicate:(id)predicate;
- (long long)_totalSizeOfOriginalResources;
- (long long)_totalSizeOfLocallyAvailableOriginalResources;
- (unsigned long long)_smallLibrarySizeThresholdForTotalSizeOfLocallyAvailableOriginalResources:(long long)resources;
- (long long)_prefetchOptimizeModeBasedOnLibrarySize;
- (void)_setLastCompletePrefetchDate:(id)date;
- (BOOL)_prefetchIsEnabledForPhase:(unsigned long long)phase;
- (void)_resourcesToPrefetchWithPrefetchPhase:(unsigned long long)phase photoLibrary:(id)library applyPerPrefetchLimit:(BOOL)limit completionHandler:(id /* block */)handler;
@end

#endif /* PLCloudResourcePrefetchManager_h */