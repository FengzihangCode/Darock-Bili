//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef ICCreateDayOneEntryAction_h
#define ICCreateDayOneEntryAction_h
@import Foundation;

#include "ICSchemeAction.h"

@interface ICCreateDayOneEntryAction : ICSchemeAction
/* instance methods */
- (BOOL)inputRequired;
- (void)performActionWithInput:(id)input parameters:(id)parameters userInterface:(id)interface successHandler:(id /* block */)handler errorHandler:(id /* block */)handler;
- (void)getImagesFromInput:(id)input completionHandler:(id /* block */)handler;
@end

#endif /* ICCreateDayOneEntryAction_h */