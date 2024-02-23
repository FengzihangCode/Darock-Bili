//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef _AdditiveAnimation_h
#define _AdditiveAnimation_h
@import Foundation;

@interface _AdditiveAnimation : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double delta;

/* instance methods */
- (double)deltaFrom:(double)from to:(double)to;
@end

#endif /* _AdditiveAnimation_h */