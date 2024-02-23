//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGModelFeatures_h
#define SGModelFeatures_h
@import Foundation;

#include "SGModelSource.h"

@class PMLSparseVector;

@interface SGModelFeatures : NSObject {
  /* instance variables */
  SGModelSource *_source;
  PMLSparseVector *_vector;
}

/* instance methods */
- (id)initWithSource:(id)source vector:(id)vector;
- (id)vector;
- (id)source;
- (id)sessionDescriptor;
@end

#endif /* SGModelFeatures_h */