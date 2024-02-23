//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.1.16.0.0
//
#ifndef RBDisplayListPredicate_h
#define RBDisplayListPredicate_h
@import Foundation;

#include "NSCopying-Protocol.h"

@protocol {Invertible="predicate"{DisplayListPredicate="_terms"{vector<RB::DisplayListPredicate::Term, 1UL, unsigned int>="_p"[24C]"_p"^{Term}"_size"I"_capacity"I}}"inverts_result"B};

@interface RBDisplayListPredicate : NSObject<NSCopying> {
  /* instance variables */
  struct Invertible { struct DisplayListPredicate { struct vector<RB::DisplayListPredicate::Term, 1UL, unsigned int> { unsigned char x[24] _p; struct Term *_p; unsigned int _size; unsigned int _capacity; } _terms; } predicate; BOOL inverts_result; } _predicate;
}

@property (nonatomic) BOOL invertsResult;

/* class methods */
+ (id)predicate;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)removeAll;
- (void)addCondition:(int)condition;
- (void)addConditionWithFillColor:(struct { float x0; float x1; float x2; float x3; })color colorSpace:(int)space;
- (void)addPredicate:(id)predicate;
- (id)filteringDisplayList:(id)list;
@end

#endif /* RBDisplayListPredicate_h */