//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMAudioSessionController_iOS_h
#define IMAudioSessionController_iOS_h
@import Foundation;

#include "IMAudioSessionController.h"

@interface IMAudioSessionController_iOS : IMAudioSessionController
/* instance methods */
- (void)dealloc;
- (id)init;
- (void)configureAudioSessionWithOptions:(unsigned long long)options;
- (void)audioSessionRouteChange:(id)change;
- (void)audioSessionInterruption:(id)interruption;
- (void)audioSessionMediaServicesWereLost:(id)lost;
- (void)audioSessionMediaServicesWereReset:(id)reset;
- (void)setActive:(BOOL)active;
@end

#endif /* IMAudioSessionController_iOS_h */