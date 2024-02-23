//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVSupportedCalendarComponentSets_h
#define CalDAVSupportedCalendarComponentSets_h
@import Foundation;

#include "CoreDAVItem.h"

@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {
  /* instance variables */
  NSMutableSet *_componentSets;
}

/* class methods */
+ (BOOL)allowedCalendars:(id)calendars contains:(id)contains;

/* instance methods */
- (id)copyParseRules;
- (id)init;
- (id)componentsAsString;
- (id)description;
- (void)addCompSet:(id)set;
- (id)childrenToWrite;
@end

#endif /* CalDAVSupportedCalendarComponentSets_h */