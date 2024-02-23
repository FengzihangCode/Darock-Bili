//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVOptionsTask_h
#define CoreDAVOptionsTask_h
@import Foundation;

#include "CoreDAVTask.h"
#include "CoreDAVOptionsTaskDelegate-Protocol.h"

@interface CoreDAVOptionsTask : CoreDAVTask

@property (weak, @dynamic, nonatomic) NSObject<CoreDAVOptionsTaskDelegate> *delegate;

/* instance methods */
- (id)httpMethod;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)error;
@end

#endif /* CoreDAVOptionsTask_h */