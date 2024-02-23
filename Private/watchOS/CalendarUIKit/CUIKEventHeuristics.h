//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef CUIKEventHeuristics_h
#define CUIKEventHeuristics_h
@import Foundation;

@interface CUIKEventHeuristics : NSObject
/* class methods */
+ (id)todaysEventsInCalendars:(id)calendars filterOptions:(unsigned long long)options sortMethod:(unsigned long long)method eventStore:(id)store;
+ (id)tomorrowsEventsInCalendars:(id)calendars filterOptions:(unsigned long long)options sortMethod:(unsigned long long)method eventStore:(id)store;
+ (id)upcomingEventsInCalendars:(id)calendars onlyReturnFirstEvents:(BOOL)events filterOptions:(unsigned long long)options sortMethod:(unsigned long long)method eventStore:(id)store;
+ (id)_sortedAndFilteredEventsForPredicate:(id)predicate filterOptions:(unsigned long long)options sortMethod:(unsigned long long)method eventStore:(id)store;
+ (id)_sortedEvents:(id)events withMethod:(unsigned long long)method;
+ (BOOL)_shouldFilterEvent:(id)event filterOptions:(unsigned long long)options;
@end

#endif /* CUIKEventHeuristics_h */