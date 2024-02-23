//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionCompositionalLayoutDynamicAnimator_h
#define _UICollectionCompositionalLayoutDynamicAnimator_h
@import Foundation;

#include "UIDynamicAnimator.h"

@class NSMutableDictionary;

@interface _UICollectionCompositionalLayoutDynamicAnimator : UIDynamicAnimator {
  /* instance variables */
  id /* block */ _invalidationHandler;
  NSMutableDictionary *_itemBehaviors;
}

/* instance methods */
- (BOOL)_animatorStep:(double)step;
@end

#endif /* _UICollectionCompositionalLayoutDynamicAnimator_h */