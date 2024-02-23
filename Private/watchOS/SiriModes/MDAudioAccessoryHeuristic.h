//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.7.1.0.0
//
#ifndef MDAudioAccessoryHeuristic_h
#define MDAudioAccessoryHeuristic_h
@import Foundation;

#include "MDModeDecision.h"
#include "MDModeHeuristic-Protocol.h"

@class AFNotifyObserver, AVOutputContext;

@interface MDAudioAccessoryHeuristic : NSObject<MDModeHeuristic> {
  /* instance variables */
  BOOL _connectedToAudioAccessory;
  AFNotifyObserver *_connectedOutputDevicesObserver;
  AVOutputContext *_sharedSystemAudioContext;
  MDModeDecision *_modeDecisionBasedOnAudioAccessory;
}

/* instance methods */
- (id)init;
- (id)determineCurrentMode;
- (BOOL)isConnectedToAudioAccessory;
- (void)_fetchConnectedAudioAccessoryState;
- (void)_connectedOutputDevicesDidChange:(id)change;
@end

#endif /* MDAudioAccessoryHeuristic_h */