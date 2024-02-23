//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDManagedObjectContext_h
#define HMDManagedObjectContext_h
@import Foundation;

#include "NSManagedObjectContext.h"
#include "HMFAsyncContext-Protocol.h"

@interface HMDManagedObjectContext : NSManagedObjectContext<HMFAsyncContext>
/* instance methods */
- (void)assertIsExecuting;
- (void)performBlock:(id /* block */)block;
- (void)performBlockAndWait:(id /* block */)wait;
- (BOOL)save:(id *)save;
@end

#endif /* HMDManagedObjectContext_h */