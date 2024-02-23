//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKBarcodeEventSignatureRequest_h
#define PKBarcodeEventSignatureRequest_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSDate, NSNumber, NSString;

@interface PKBarcodeEventSignatureRequest : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *deviceAccountIdentifier;
@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSString *barcodeIdentifier;
@property (copy, nonatomic) NSString *rawMerchantName;
@property (copy, nonatomic) NSString *merchantName;
@property (retain, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSNumber *amount;
@property (copy, nonatomic) NSString *transactionStatus;
@property (copy, nonatomic) NSData *partialSignature;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPaymentTransaction:(id)transaction deviceAccountIdentifier:(id)identifier;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* PKBarcodeEventSignatureRequest_h */