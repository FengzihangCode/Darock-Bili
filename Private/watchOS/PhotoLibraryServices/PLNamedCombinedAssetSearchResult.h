//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLNamedCombinedAssetSearchResult_h
#define PLNamedCombinedAssetSearchResult_h
@import Foundation;

#include "PLCombinedAssetSearchResult.h"

@class NSString;

@interface PLNamedCombinedAssetSearchResult : PLCombinedAssetSearchResult

@property (copy, nonatomic) NSString *name;

/* instance methods */
- (id)initWithName:(id)name assetSearchResults:(id)results canOverlap:(BOOL)overlap;
- (id)contentStrings;
- (unsigned long long)matchCount;
- (id)matchRanges;
- (BOOL)hasSpecialName;
@end

#endif /* PLNamedCombinedAssetSearchResult_h */