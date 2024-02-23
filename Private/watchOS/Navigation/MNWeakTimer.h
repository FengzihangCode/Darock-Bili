//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNWeakTimer_h
#define MNWeakTimer_h
@import Foundation;

@class NSTimer;

@interface MNWeakTimer : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (readonly, nonatomic) NSTimer *timer;

/* class methods */
+ (id)scheduledTimerWithTimeInterval:(double)interval target:(id)target selector:(SEL)selector;

/* instance methods */
- (id)initWithTimeInterval:(double)interval target:(id)target selector:(SEL)selector;
- (void)dealloc;
- (void)invalidate;
- (void)_timerDidFire;
@end

#endif /* MNWeakTimer_h */