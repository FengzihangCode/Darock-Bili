//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOSearchAutoRedoThreshold_h
#define GEOSearchAutoRedoThreshold_h
@import Foundation;

@interface GEOSearchAutoRedoThreshold : NSObject

@property (readonly, nonatomic) unsigned long long numberOfVisiblePoisThreshold;
@property (readonly, nonatomic) double zoomInPercentThreshold;
@property (readonly, nonatomic) double zoomOutPercentThreshold;
@property (readonly, nonatomic) double panDeltaThresholdInMeters;

/* instance methods */
- (id)init;
- (id)initWithSearchAutoRedoThreshold:(id)threshold;
- (id)initWithNumberOfVisiblePOIsThreshold:(unsigned long long)threshold zoomInPercentThreshold:(double)threshold zoomOutPercentThreshold:(double)threshold panDeltaThresholdInMeters:(double)meters;
@end

#endif /* GEOSearchAutoRedoThreshold_h */