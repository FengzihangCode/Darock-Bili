//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCKDatabaseQualityOfServiceUpgradingMiddleware_h
#define FCCKDatabaseQualityOfServiceUpgradingMiddleware_h
@import Foundation;

#include "FCCKDatabaseOperationMiddleware-Protocol.h"

@class NSString;

@interface FCCKDatabaseQualityOfServiceUpgradingMiddleware : NSObject<FCCKDatabaseOperationMiddleware>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (long long)database:(id)database willEnqueueOperation:(id)operation error:(id *)error;
@end

#endif /* FCCKDatabaseQualityOfServiceUpgradingMiddleware_h */