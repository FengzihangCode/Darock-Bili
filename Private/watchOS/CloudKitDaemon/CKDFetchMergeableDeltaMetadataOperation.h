//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDFetchMergeableDeltaMetadataOperation_h
#define CKDFetchMergeableDeltaMetadataOperation_h
@import Foundation;

#include "CKDDatabaseOperation.h"

@class NSArray;
@protocol CKFetchMergeableDeltaMetadataOperationCallbacks;

@interface CKDFetchMergeableDeltaMetadataOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *mergeableValueIDs;
@property (@dynamic, nonatomic) unsigned long long state;
@property (retain, @dynamic, nonatomic) NSObject<CKFetchMergeableDeltaMetadataOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ metadataFetchedBlock;

/* class methods */
+ (id)nameForState:(unsigned long long)state;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (int)operationType;
- (id)activityCreate;
- (BOOL)makeStateTransition;
- (void)main;
- (void)fetchMetadata;
- (void)fetchMetadataRecursivelyForMergeableValueIDs:(id)ids continuationTokens:(id)tokens completionHandler:(id /* block */)handler;
- (void)handleFetchedMetadatasForMergeableValueID:(id)id metadatas:(id)metadatas result:(id)result;
@end

#endif /* CKDFetchMergeableDeltaMetadataOperation_h */