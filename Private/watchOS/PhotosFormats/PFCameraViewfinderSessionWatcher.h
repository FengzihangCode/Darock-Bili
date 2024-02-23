//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFCameraViewfinderSessionWatcher_h
#define PFCameraViewfinderSessionWatcher_h
@import Foundation;

@protocol PFCameraViewfinderSessionWatcherDelegate;

@interface PFCameraViewfinderSessionWatcher : NSObject

@property (readonly) BOOL isCameraRunning;
@property (readonly, weak) NSObject<PFCameraViewfinderSessionWatcherDelegate> *delegate;

/* instance methods */
- (id)initWithDispatchQueue:(id)queue delegate:(id)delegate;
- (void)startWatching;
- (void)stopWatching;
@end

#endif /* PFCameraViewfinderSessionWatcher_h */