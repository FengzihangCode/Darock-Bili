//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef ISVisibilityOffsetComputer_Protocol_h
#define ISVisibilityOffsetComputer_Protocol_h
@import Foundation;

@protocol ISVisibilityOffsetComputer 
/* instance methods */
- (void)getVisibility:(BOOL *)visibility offset:(double *)offset targetVisibilityOffset:(double *)offset forView:(id)view;
@end

#endif /* ISVisibilityOffsetComputer_Protocol_h */