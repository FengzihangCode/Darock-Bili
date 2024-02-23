//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSavingsAccountStepUpDetails_h
#define PKSavingsAccountStepUpDetails_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate;

@interface PKSavingsAccountStepUpDetails : NSObject<NSSecureCoding, NSCopying>

@property (nonatomic) BOOL thresholdExceeded;
@property (copy, nonatomic) NSDate *neededBy;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKSavingsAccountStepUpDetails_h */