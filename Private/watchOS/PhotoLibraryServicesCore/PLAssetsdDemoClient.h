//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetsdDemoClient_h
#define PLAssetsdDemoClient_h
@import Foundation;

#include "PLAssetsdBaseClient.h"

@class BOOL *;

@interface PLAssetsdDemoClient : PLAssetsdBaseClient
/* instance methods */
- (void)cleanupForStoreDemoModeWithCompletion:(id /* block */)completion;
- (BOOL)cleanupForStoreDemoMode:(id *)mode;
- (BOOL)hasCompletedRestorePostProcessing:(BOOL *)processing error:(id *)error;
- (BOOL)hasCompletedMomentAnalysis:(BOOL *)analysis error:(id *)error;
@end

#endif /* PLAssetsdDemoClient_h */