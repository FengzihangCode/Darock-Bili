//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef FMQueue_h
#define FMQueue_h
@import Foundation;

#include "FMQueueingStrategy-Protocol.h"

@class NSArray, NSMutableArray;

@interface FMQueue : NSObject {
  /* instance variables */
  NSMutableArray *_buffer;
  NSObject<FMQueueingStrategy> *_strategy;
}

@property (readonly) unsigned long long count;
@property (readonly) NSArray *allObjects;

/* class methods */
+ (id)priorityQueueWithComparator:(id /* block */)comparator;
+ (id)boundedQueueWithCapacity:(unsigned long long)capacity;
+ (id)boundedQueueWithCapacity:(unsigned long long)capacity overflowHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
- (id)initWithStrategy:(id)strategy;
- (void)enqueue:(id)enqueue;
- (id)peek;
- (id)dequeue;
- (void)dequeueObject:(id)object;
- (id)drain;
@end

#endif /* FMQueue_h */