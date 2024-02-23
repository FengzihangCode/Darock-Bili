//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPImageCompositionAnalyzer_h
#define VCPImageCompositionAnalyzer_h
@import Foundation;

#include "VCPImageAnalyzer.h"

@interface VCPImageCompositionAnalyzer : VCPImageAnalyzer
/* instance methods */
- (int)analyzePixelBuffer:(struct __CVBuffer *)buffer flags:(unsigned long long *)flags results:(id *)results cancel:(id /* block */)cancel;
@end

#endif /* VCPImageCompositionAnalyzer_h */