//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarActivityItem_Split_h
#define STUIStatusBarActivityItem_Split_h
@import Foundation;

#include "STUIStatusBarActivityItem_SyncOnly.h"
#include "STUIStatusBarActivityIndicator.h"
#include "STUIStatusBarActivityView.h"

@interface STUIStatusBarActivityItem_Split : STUIStatusBarActivityItem_SyncOnly

@property (retain, nonatomic) STUIStatusBarActivityView *activityView;
@property (retain, nonatomic) STUIStatusBarActivityIndicator *syncStartView;

/* class methods */
+ (id)pillDisplayIdentifier;
+ (id)syncStartDisplayIdentifier;

/* instance methods */
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })activityIndicatorAlignmentRectInsets;
- (void)_create_activityView;
- (void)_create_syncStartView;
- (id)viewForIdentifier:(id)identifier;
- (id)applyUpdate:(id)update toDisplayItem:(id)item;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)identifier;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)identifier;
@end

#endif /* STUIStatusBarActivityItem_Split_h */