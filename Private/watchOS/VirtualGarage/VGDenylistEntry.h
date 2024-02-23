//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef VGDenylistEntry_h
#define VGDenylistEntry_h
@import Foundation;

@class NSArray, NSNumber;

@interface VGDenylistEntry : NSObject {
  /* instance variables */
  NSNumber *_modelId;
  NSArray *_firmwareIds;
  NSArray *_years;
  NSArray *_models;
}

/* instance methods */
- (id)initWithModelId:(id)id firmwareIds:(id)ids years:(id)years models:(id)models;
- (BOOL)isEqual:(id)equal;
- (BOOL)isSupersetOfEntry:(id)entry;
- (id)description;
@end

#endif /* VGDenylistEntry_h */