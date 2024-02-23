//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFCloudKitResolveReferencesOperation_h
#define WFCloudKitResolveReferencesOperation_h
@import Foundation;

#include "WFCloudKitAsyncOperation.h"
#include "WFCloudKitItemRequest.h"
#include "WFCloudKitItemTask.h"

@class CKFetchRecordsOperation, CKOperationGroup, NSArray;

@interface WFCloudKitResolveReferencesOperation : WFCloudKitAsyncOperation

@property (readonly, weak, nonatomic) WFCloudKitItemRequest *request;
@property (readonly, nonatomic) NSArray *records;
@property (readonly, nonatomic) CKOperationGroup *operationGroup;
@property (retain, nonatomic) CKFetchRecordsOperation *currentOperation;
@property (retain, nonatomic) WFCloudKitItemTask *task;

/* instance methods */
- (id)initWithRequest:(id)request records:(id)records operationGroup:(id)group task:(id)task;
- (void)start;
- (void)cancel;
@end

#endif /* WFCloudKitResolveReferencesOperation_h */