//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIKeyboardCandidateGroup_h
#define TIKeyboardCandidateGroup_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSOrderedSet, NSString;

@interface TIKeyboardCandidateGroup : NSObject<NSCopying, NSSecureCoding>

@property (copy) NSString *title;
@property (copy) NSOrderedSet *candidates;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithTitle:(id)title candidates:(id)candidates;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)mutableCandidates;
- (BOOL)hasAlternativeText;
- (void)addCandidate:(id)candidate;
- (id)description;
@end

#endif /* TIKeyboardCandidateGroup_h */