//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1211.0.0.0.0
//
#ifndef _CRAndConjunctionPredicate_h
#define _CRAndConjunctionPredicate_h
@import Foundation;

#include "CRSearchPredicate.h"

@class NSArray;

@interface _CRAndConjunctionPredicate : CRSearchPredicate

@property (readonly, copy) NSArray *subpredicates;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSubpredicates:(id)subpredicates;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)asNSPredicate;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* _CRAndConjunctionPredicate_h */