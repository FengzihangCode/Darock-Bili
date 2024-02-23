//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionPreferredSizes_h
#define _UICollectionPreferredSizes_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "_UICollectionLayoutAuxillaryOffsets-Protocol.h"

@class NSMutableDictionary, NSMutableIndexSet;

@interface _UICollectionPreferredSizes : NSObject<NSCopying> {
  /* instance variables */
  NSMutableDictionary *_sizes;
  NSMutableIndexSet *_indexes;
  NSMutableDictionary *_supplementarySizesDict;
  long long _frameOffset;
  NSObject<_UICollectionLayoutAuxillaryOffsets> *_supplementaryBaseOffsets;
  struct CGSize { double width; double height; } _largestItemSize;
}

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* _UICollectionPreferredSizes_h */