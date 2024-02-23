//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 648.2.0.0.0
//
#ifndef NSUserDefaults_NanoCalendarPreferences_h
#define NSUserDefaults_NanoCalendarPreferences_h
@import Foundation;

#include "CalendarPreferences.h"

@class CalPreferences, NPSDomainAccessor, NPSManager, NSArray, NSString;

@interface NSUserDefaults (NanoCalendarPreferences)
/* instance methods */
- (void)setShowWeekNumbers:(BOOL)numbers;
- (BOOL)ShowWeekNumbers;
@end

#endif /* NSUserDefaults_NanoCalendarPreferences_h */