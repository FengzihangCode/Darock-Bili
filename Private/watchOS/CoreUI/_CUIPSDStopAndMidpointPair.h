//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 866.4.0.0.0
//
#ifndef _CUIPSDStopAndMidpointPair_h
#define _CUIPSDStopAndMidpointPair_h
@import Foundation;

@interface _CUIPSDStopAndMidpointPair : NSObject {
  /* instance variables */
  id stop;
  double midpoint;
}

/* instance methods */
- (id)initWithStop:(id)stop midpoint:(id)midpoint;
- (void)dealloc;
- (long long)compare:(id)compare;
- (id)stop;
- (double)midpoint;
@end

#endif /* _CUIPSDStopAndMidpointPair_h */