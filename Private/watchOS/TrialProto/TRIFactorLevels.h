//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFactorLevels_h
#define TRIFactorLevels_h
@import Foundation;

#include "TRIPBMessage.h"

@class NSMutableArray;

@interface TRIFactorLevels : TRIPBMessage

@property (retain, @dynamic, nonatomic) NSMutableArray *factorLevelArray;
@property (readonly, @dynamic, nonatomic) unsigned long long factorLevelArray_Count;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIFactorLevels_h */