//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetAnalysisState_h
#define PLAssetAnalysisState_h
@import Foundation;

#include "PLManagedObject.h"
#include "PLManagedAsset.h"

@class NSDate, NSString;

@interface PLAssetAnalysisState : PLManagedObject

@property (retain, @dynamic, nonatomic) PLManagedAsset *asset;
@property (@dynamic, nonatomic) short workerType;
@property (@dynamic, nonatomic) int analysisState;
@property (retain, @dynamic, nonatomic) NSString *assetUUID;
@property (retain, @dynamic, nonatomic) NSDate *lastIgnoredDate;
@property (retain, @dynamic, nonatomic) NSDate *ignoreUntilDate;
@property (@dynamic, nonatomic) int workerFlags;
@property (@dynamic, nonatomic) double sortToken;

/* class methods */
+ (id)_batchOperationQueue;
+ (id)_countOfAnalysisStatesByWorkerTypeWithPredicate:(id)predicate analysisState:(int)state forDeletedAssets:(BOOL)assets inContext:(id)context error:(id *)error;
+ (unsigned long long)_countOfAssetsAllowedForProcessingInLibrary:(id)library error:(id *)error;
+ (BOOL)_bulkUpdateAnalysisStatesTo:(int)to predicate:(id)predicate library:(id)library error:(id *)error;
+ (id)entityName;
+ (id)_managedObjectContextForStateChangesWithPersistentStoreCoordinator:(id)coordinator;
+ (id)_managedObjectContextForStateChangesWithLibraryURL:(id)url;
+ (id)_subArrayOfChanges:(id)changes toRetryWithConflicts:(id)conflicts;
+ (id)_sanitizeChanges:(id)changes;
+ (id)keyPathDictionaryWithWorkerType:(short)type workerFlags:(int)flags analysisState:(int)state lastIgnoredDate:(id)date ignoreUntilDate:(id)date;
+ (id)workerTypesPersistingAnalysisState;
+ (BOOL)isUnitTestWorker:(short)worker;
+ (void)requestAnalysisCountsInLibrary:(id)library completion:(id /* block */)completion;
+ (id)assetUUIDsFromAssetObjectIDs:(id)ids library:(id)library whereAllWorkerTypes:(id)types matchState:(id)state;
+ (id)analysisCountsForWorkerType:(short)type library:(id)library;
+ (void)requestCountOfAnalysisRecordsForDeletedAssetsInLibrary:(id)library completion:(id /* block */)completion;
+ (id)deletedAssetUUIDsForAnalysisByWorkerType:(short)type fetchLimit:(unsigned long long)limit inLibrary:(id)library error:(id *)error;
+ (BOOL)resetPendingStatesInLibraryAtURL:(id)url error:(id *)error;
+ (BOOL)markStatesProcessedForWorkerType:(short)type library:(id)library error:(id *)error;
+ (BOOL)cleanupInvalidIgnoreUntilDatesInLibraryAtURL:(id)url error:(id *)error;
+ (BOOL)clearIgnoreUntilDatesInLibraryAtURL:(id)url error:(id *)error;
+ (BOOL)resetFaceCropAnalysisStateInLibraryAtURL:(id)url error:(id *)error;
+ (void)_removeAnalysisRecordsWithPredicate:(id)predicate library:(id)library;
+ (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)uuids forWorkerType:(short)type library:(id)library;
+ (void)removeAnalysisRecordsWithNoAssetOrUUIDUseMaintenanceMode:(BOOL)mode library:(id)library;
+ (int)defaultWorkerFlagsForWorkerType:(short)type;

/* instance methods */
- (id)debugLogDescription;
- (id)mutableKeyPathDictionary;
- (void)unionWorkerFlags:(int)flags;
@end

#endif /* PLAssetAnalysisState_h */