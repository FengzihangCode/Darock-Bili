//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOResolvedItem_h
#define GEOResolvedItem_h
@import Foundation;

#include "GEOPDResolvedItem.h"

@class NSString;

@interface GEOResolvedItem : NSObject {
  /* instance variables */
  GEOPDResolvedItem *_resolvedItem;
}

@property (readonly, nonatomic) BOOL hasResultIndex;
@property (readonly, nonatomic) unsigned long long resultIndex;
@property (readonly, nonatomic) NSString *extractedTerm;
@property (readonly, nonatomic) int itemType;

/* instance methods */
- (id)initWithResolvedItem:(id)item;
- (id)initWithAutocompleteResolvedItem:(id)item;
@end

#endif /* GEOResolvedItem_h */