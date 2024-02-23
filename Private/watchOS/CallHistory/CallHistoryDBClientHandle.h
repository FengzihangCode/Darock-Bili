//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1222.300.51.0.0
//
#ifndef CallHistoryDBClientHandle_h
#define CallHistoryDBClientHandle_h
@import Foundation;

#include "CHSynchronizedLoggable.h"
#include "CHNotifyObserver.h"
#include "CallDBManager.h"
#include "CallHistoryDBHandle.h"

@class BOOL *;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable {
  /* instance variables */
  id _observerCallTimersRef;
}

@property (readonly, nonatomic) CHNotifyObserver *callsDidChangeNotifyObserver;
@property (readonly, nonatomic) CallHistoryDBHandle *dbStoreHandle;
@property (readonly) CallDBManager *manager;

/* class methods */
+ (id)createForClient;
+ (id)createForServer;

/* instance methods */
- (void)parseCallStatus_sync:(unsigned int)status_sync isAnswered:(BOOL *)answered isOriginated:(BOOL *)originated;
- (unsigned int)getCallStatus_sync:(id)status_sync isOriginated:(id)originated isAnswered:(id)answered;
- (void)setStoreObject_sync:(id)object_sync withClientObject:(id)object;
- (id)convertToCHRecentCalls_sync:(id)calls_sync;
- (id)convertToCHRecentCalls_sync:(id)calls_sync limit:(unsigned long long)limit;
- (id)init:(BOOL)init;
- (void)registerForNotifications;
- (void)unRegisterForNotifications;
- (long long)deleteCallsWithPredicate:(id)predicate;
- (unsigned long long)fetchCallCountWithPredicate:(id)predicate sortDescriptors:(id)descriptors;
- (id)fetchCallsWithPredicate:(id)predicate sortDescriptors:(id)descriptors limit:(unsigned long long)limit offset:(unsigned long long)offset batchSize:(unsigned long long)size;
- (id)fetchCallIdentifiersWithPredicate:(id)predicate sortDescriptors:(id)descriptors limit:(unsigned long long)limit offset:(unsigned long long)offset batchSize:(unsigned long long)size;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)predicate sortDescriptors:(id)descriptors;
- (id)fetchCoalescedCallsWithPredicate:(id)predicate sortDescriptors:(id)descriptors limit:(unsigned long long)limit offset:(unsigned long long)offset batchSize:(unsigned long long)size;
- (id)updateCallsWithPredicate:(id)predicate propertiesToUpdate:(id)update error:(id *)error;
- (id)fetchAll;
- (id)fetchAllNoLimit;
- (id)fetchWithCallTypes:(unsigned int)types;
- (id)fetchObjectsWithPredicate:(id)predicate;
- (id)fetchAllObjectsWithUniqueId:(id)id;
- (id)fetchObjectWithUniqueId:(id)id;
- (id)fetchObjectsWithUniqueIds:(id)ids;
- (BOOL)deleteAll;
- (BOOL)deleteAll:(id *)all;
- (BOOL)deleteObjectWithUniqueId:(id)id;
- (BOOL)deleteObjectWithUniqueId:(id)id error:(id *)error;
- (BOOL)deleteObjectWithUniqueId:(id)id error:(id *)error save:(BOOL)save;
- (BOOL)deleteObjectsWithUniqueIds:(id)ids;
- (BOOL)deleteObjectsWithUniqueIds:(id)ids error:(id *)error;
- (BOOL)createCallRecord:(id)record;
- (BOOL)createCallRecord:(id)record error:(id *)error;
- (BOOL)createCallRecord:(id)record error:(id *)error save:(BOOL)save;
- (BOOL)createCallRecords:(id)records;
- (BOOL)createCallRecords:(id)records error:(id *)error;
- (id)updateCallRecords:(id)records;
- (id)updateCallRecords:(id)records error:(id *)error;
- (id)updateCallRecords:(id)records error:(id *)error save:(BOOL)save;
- (id)updateAllCallRecords:(id)records;
- (id)updateAllCallRecords:(id)records error:(id *)error;
- (id)timerIncoming;
- (id)timerOutgoing;
- (id)timerLastReset;
- (id)timerLifetime;
- (void)resetTimers;
- (BOOL)resetAllTimers;
- (void)handleCallRecordSave_sync;
- (void)handleCallTimersSave_sync:(id)save_sync;
- (BOOL)willHandleNotification_sync:(id)notification_sync;
- (id)updateCallRecords_sync:(id)records_sync error:(id *)error save:(BOOL)save;
- (id)updateAllCallRecords_sync:(id)records_sync error:(id *)error;
- (BOOL)updateCallRecord_sync:(id)record_sync withChangeDict:(id)dict;
- (void)dealloc;
- (BOOL)saveDatabase:(id *)database;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)url;
@end

#endif /* CallHistoryDBClientHandle_h */