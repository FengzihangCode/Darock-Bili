//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPSleepModeObserver_Protocol_h
#define HDSPSleepModeObserver_Protocol_h
@import Foundation;

@protocol HDSPSleepModeObserver <NSObject>
/* instance methods */
- (void)sleepModeDidChange:(long long)change previousMode:(long long)mode reason:(unsigned long long)reason;
@end

#endif /* HDSPSleepModeObserver_Protocol_h */