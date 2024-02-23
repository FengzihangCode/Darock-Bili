//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsBaseTrigger_h
#define MapsSuggestionsBaseTrigger_h
@import Foundation;

#include "MapsSuggestionsObservers.h"
#include "MapsSuggestionsTrigger-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsBaseTrigger : NSObject<MapsSuggestionsTrigger> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSString *_name;
  MapsSuggestionsObservers *_observers;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithName:(id)name;
- (id)initWithName:(id)name queue:(id)queue;
- (id)dispatchQueue;
- (BOOL)hasObservers;
- (void)triggerMyObservers;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (void)registerObserver:(id)observer;
- (void)unregisterObserver:(id)observer;
- (id)nameForJSON;
- (id)objectForJSON;
@end

#endif /* MapsSuggestionsBaseTrigger_h */