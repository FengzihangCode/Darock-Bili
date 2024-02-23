//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef IPAIdentityOperator_h
#define IPAIdentityOperator_h
@import Foundation;

#include "IPAGeometryOperator.h"

@interface IPAIdentityOperator : IPAGeometryOperator
/* instance methods */
- (id)transformForGeometry:(id)geometry;
- (id)description;
@end

#endif /* IPAIdentityOperator_h */