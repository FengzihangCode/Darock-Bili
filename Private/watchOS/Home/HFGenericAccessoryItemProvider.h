//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFGenericAccessoryItemProvider_h
#define HFGenericAccessoryItemProvider_h
@import Foundation;

#include "HFItemProvider.h"

@class HMHome, NSMutableSet;

@interface HFGenericAccessoryItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *genericItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

/* instance methods */
- (id)initWithHome:(id)home;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
@end

#endif /* HFGenericAccessoryItemProvider_h */