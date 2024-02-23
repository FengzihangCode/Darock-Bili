//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMutableSet_h
#define AMSMutableSet_h
@import Foundation;

#include "NSMutableSet.h"

@class NSMutableSet;

@interface AMSMutableSet : NSMutableSet {
  /* instance variables */
  NSMutableSet *_backingSet;
}

@property (copy, nonatomic) id /* block */ hashBlock;

/* class methods */
+ (id)setWithHashBlock:(id /* block */)block;

/* instance methods */
- (id)initWithHashBlock:(id /* block */)block;
- (void)addObject:(id)object;
- (void)addObjectsFromArray:(id)array;
- (unsigned long long)count;
- (id)allObjects;
- (id)anyObject;
- (id)member:(id)member;
- (id)objectEnumerator;
- (BOOL)containsObject:(id)object;
- (id)_allObjectsFromBackingSet;
@end

#endif /* AMSMutableSet_h */