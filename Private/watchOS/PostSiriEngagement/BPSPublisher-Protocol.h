//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.4.2.0.0
//
#ifndef BPSPublisher_Protocol_h
#define BPSPublisher_Protocol_h
@import Foundation;

@protocol BPSPublisher <NSObject>
/* instance methods */
- (void)subscribe:(id)subscribe;
@optional
/* instance methods */
- (id)upstreamPublishers;
- (id)startWithSubscriber:(id)subscriber;
- (id)nextEvent;
- (BOOL)completed;
- (void)reset;
@end

#endif /* BPSPublisher_Protocol_h */