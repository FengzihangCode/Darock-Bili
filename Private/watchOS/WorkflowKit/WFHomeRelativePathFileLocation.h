//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFHomeRelativePathFileLocation_h
#define WFHomeRelativePathFileLocation_h
@import Foundation;

#include "WFFilePathLocation.h"

@interface WFHomeRelativePathFileLocation : WFFilePathLocation
/* class methods */
+ (id)homeDirectory;
+ (BOOL)canRepresentURL:(id)url;
+ (id)subpathFromURL:(id)url;

/* instance methods */
- (BOOL)isSupportedOnCurrentPlatform;
- (id)resolveLocationWithError:(id *)error;
- (BOOL)shouldShowUsersDuringDisplay:(id)display;
@end

#endif /* WFHomeRelativePathFileLocation_h */