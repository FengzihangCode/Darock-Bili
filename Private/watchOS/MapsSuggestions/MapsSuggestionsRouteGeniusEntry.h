//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsRouteGeniusEntry_h
#define MapsSuggestionsRouteGeniusEntry_h
@import Foundation;

#include "MapsSuggestionsEntry.h"
#include "NSSecureCoding-Protocol.h"

@class GEOComposedRoute;

@interface MapsSuggestionsRouteGeniusEntry : NSObject<NSSecureCoding>

@property (retain, nonatomic) MapsSuggestionsEntry *entry;
@property (retain, nonatomic) GEOComposedRoute *route;

/* class methods */
+ (id)entryWithData:(id)data;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithEntry:(id)entry route:(id)route;
- (id)data;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (double)etaInSeconds;
@end

#endif /* MapsSuggestionsRouteGeniusEntry_h */