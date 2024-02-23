//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLEclipseTimer_h
#define CSLEclipseTimer_h
@import Foundation;

#include "CSLEclipseTimerDelegate-Protocol.h"

@class BSContinuousMachTimer;

@interface CSLEclipseTimer : NSObject {
  /* instance variables */
  BSContinuousMachTimer *_screenBlankTimer;
  BSContinuousMachTimer *_screenFadeTimer;
}

@property (weak, nonatomic) NSObject<CSLEclipseTimerDelegate> *delegate;
@property (readonly, nonatomic) BOOL preparingToBlank;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_screenBlankTimerFired;
- (void)_screenFadeTimerFired;
- (void)updateToPercent:(double)percent;
- (void)cancelTimers;
- (void)_scheduleScreenBlankTimer;
- (void)_cancelScreenBlankTimerIfNecessary;
- (void)_scheduleScreenFadeTimer;
- (void)_cancelScreenFadeTimerIfNecessary;
@end

#endif /* CSLEclipseTimer_h */