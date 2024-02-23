//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSBacklightFBSSceneEnvironmentDiffActionNullDelegate_h
#define BLSBacklightFBSSceneEnvironmentDiffActionNullDelegate_h
@import Foundation;

#include "BLSBacklightFBSSceneEnvironmentDiffActionDelegate-Protocol.h"

@class NSString;

@interface BLSBacklightFBSSceneEnvironmentDiffActionNullDelegate : NSObject<BLSBacklightFBSSceneEnvironmentDiffActionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)performChangesWithTransitionContext:(id)context environmentDelta:(struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; })delta performActionsBlock:(id /* block */)block;
@end

#endif /* BLSBacklightFBSSceneEnvironmentDiffActionNullDelegate_h */