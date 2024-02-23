//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHCurrentActivitySummaryQuery_h
#define ACHCurrentActivitySummaryQuery_h
@import Foundation;

#include "HKQuery.h"
#include "ACHCurrentActivitySummaryClientInterface-Protocol.h"

@class NSDictionary, NSString;

@interface ACHCurrentActivitySummaryQuery : HKQuery<ACHCurrentActivitySummaryClientInterface>

@property (copy, nonatomic) id /* block */ updateHandler;
@property (retain, nonatomic) NSDictionary *collectionIntervals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;

/* instance methods */
- (id)initWithUpdateHandler:(id /* block */)handler;
- (void)client_deliverTodaySummary:(id)summary changedTodayFields:(unsigned long long)fields yesterdaySummary:(id)summary changedYesterdayFields:(unsigned long long)fields queryUUID:(id)uuid;
- (void)queue_populateConfiguration:(id)configuration;
- (void)queue_queryDidDeactivate:(id)deactivate;
- (void)queue_validate;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_deliverError:(id)error;
- (void)_setCollectionIntervals:(id)intervals;
@end

#endif /* ACHCurrentActivitySummaryQuery_h */