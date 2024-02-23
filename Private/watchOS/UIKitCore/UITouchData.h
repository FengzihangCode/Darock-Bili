//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITouchData_h
#define UITouchData_h
@import Foundation;

#include "UITouch.h"

@interface UITouchData : NSObject {
  /* instance variables */
  struct CGPoint { double x; double y; } startTouchDownLocation;
  unsigned long long lastTapCount;
  double lastTouchUpTimestamp;
  double lastTouchDownTimestamp;
  BOOL touchIsValidTap;
  UITouch *lastTouch;
}

@end

#endif /* UITouchData_h */