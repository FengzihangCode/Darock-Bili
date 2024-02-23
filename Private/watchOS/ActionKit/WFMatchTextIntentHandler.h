//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFMatchTextIntentHandler_h
#define WFMatchTextIntentHandler_h
@import Foundation;

#include "WFMatchTextIntentHandling-Protocol.h"

@class NSString;

@interface WFMatchTextIntentHandler : NSObject<WFMatchTextIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)resolveCaseSensitiveForMatchText:(id)text withCompletion:(id /* block */)completion;
- (void)resolvePatternForMatchText:(id)text withCompletion:(id /* block */)completion;
- (void)resolveTextForMatchText:(id)text withCompletion:(id /* block */)completion;
- (void)handleMatchText:(id)text completion:(id /* block */)completion;
@end

#endif /* WFMatchTextIntentHandler_h */