//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REPeriodOfDayPredictor_h
#define REPeriodOfDayPredictor_h
@import Foundation;

#include "REPredictor.h"
#include "REDuetKnowledgeStore.h"
#include "REPeriodOfDayPredictorProperties-Protocol.h"
#include "REUpNextTimer.h"

@class NSArray, NSDateInterval, NSLock;

@interface REPeriodOfDayPredictor : REPredictor<REPeriodOfDayPredictorProperties> {
  /* instance variables */
  NSLock *_storedPeriodsLock;
  REUpNextTimer *_periodOfDayUpdateTimer;
  REDuetKnowledgeStore *_knowledgeStore;
}

@property (readonly, nonatomic) unsigned long long currentPeriodOfDay;
@property (readonly, nonatomic) NSDateInterval *intervalForCurrentPeriodOfDay;
@property (readonly, nonatomic) NSArray *storedPeriods;

/* class methods */
+ (double)updateInterval;

/* instance methods */
- (id)_init;
- (void)dealloc;
- (id)_defaultDayPeriodsOfDayForDate:(id)date;
- (void)_handleSignificantTimeChange;
- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)day;
- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)day afterDate:(id)date;
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)day;
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)day beforeDate:(id)date;
- (void)update;
- (void)_getAllSleepIntervalsWithCompletion:(id /* block */)completion;
- (id)_periodsOfDayForSleepIntervals:(id)intervals;
- (void)_getPredictedSleepIntervalsWithCompletion:(id /* block */)completion;
- (void)_getHistoricSleepIntervalsWithCompletion:(id /* block */)completion;
- (void)_queue_updateNextDateUpdateTimer;
- (id)_nextDayPeriodUpdateDate;
@end

#endif /* REPeriodOfDayPredictor_h */