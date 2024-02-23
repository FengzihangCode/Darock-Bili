//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MEMessageSigner_h
#define MEMessageSigner_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSString;

@interface MEMessageSigner : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) NSData *context;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithEmailAddresses:(id)addresses signatureLabel:(id)label context:(id)context;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* MEMessageSigner_h */