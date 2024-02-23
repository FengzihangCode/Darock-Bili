//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplePayTrustSignature_h
#define PKApplePayTrustSignature_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKApplePayTrustSignatureRequest.h"

@class NSData;

@interface PKApplePayTrustSignature : NSObject<NSSecureCoding>

@property (readonly, nonatomic) PKApplePayTrustSignatureRequest *signatureRequest;
@property (readonly, copy, nonatomic) NSData *signatureData;
@property (readonly, copy, nonatomic) NSData *paymentData;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSignatureRequest:(id)request signature:(id)signature;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* PKApplePayTrustSignature_h */