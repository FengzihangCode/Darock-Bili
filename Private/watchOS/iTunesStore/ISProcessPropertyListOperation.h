//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISProcessPropertyListOperation_h
#define ISProcessPropertyListOperation_h
@import Foundation;

#include "ISOperation.h"
#include "ISPropertyListProvider.h"

@class NSDictionary;

@interface ISProcessPropertyListOperation : ISOperation {
  /* instance variables */
  NSDictionary *_propertyList;
}

@property (retain) ISPropertyListProvider *dataProvider;

/* instance methods */
- (id)initWithPropertyList:(id)list;
- (void)dealloc;
- (void)run;
@end

#endif /* ISProcessPropertyListOperation_h */