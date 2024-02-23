//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFChooseFromListIntent_h
#define WFChooseFromListIntent_h
@import Foundation;

#include "INIntent.h"

@class NSArray, NSString;

@interface WFChooseFromListIntent : INIntent

@property (copy, @dynamic, nonatomic) NSString *prompt;
@property (copy, @dynamic, nonatomic) NSArray *originalItems;
@property (copy, @dynamic, nonatomic) NSArray *chosenItems;

@end

#endif /* WFChooseFromListIntent_h */