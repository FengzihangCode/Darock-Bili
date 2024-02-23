//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarBatteryItem_h
#define STUIStatusBarBatteryItem_h
@import Foundation;

#include "STUIStatusBarItem.h"
#include "STUIStatusBarBatteryView.h"
#include "STUIStatusBarImageView.h"
#include "STUIStatusBarStaticBatteryView.h"
#include "STUIStatusBarStringView.h"

@interface STUIStatusBarBatteryItem : STUIStatusBarItem

@property (retain, nonatomic) STUIStatusBarBatteryView *batteryView;
@property (retain, nonatomic) STUIStatusBarStaticBatteryView *staticBatteryView;
@property (retain, nonatomic) STUIStatusBarImageView *chargingView;
@property (retain, nonatomic) STUIStatusBarStringView *percentView;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL usesCondensedPercentageDisplay;

/* class methods */
+ (id)iconDisplayIdentifier;
+ (id)staticIconDisplayIdentifier;
+ (id)chargingDisplayIdentifier;
+ (id)percentDisplayIdentifier;

/* instance methods */
- (id)dependentEntryKeys;
- (id)applyUpdate:(id)update toDisplayItem:(id)item;
- (void)_create_batteryView;
- (void)_create_staticBatteryView;
- (void)_create_chargingView;
- (void)_create_percentView;
- (id)viewForIdentifier:(id)identifier;
@end

#endif /* STUIStatusBarBatteryItem_h */