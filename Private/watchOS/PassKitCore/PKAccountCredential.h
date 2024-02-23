//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountCredential_h
#define PKAccountCredential_h
@import Foundation;

#include "PKPaymentCredential.h"
#include "PKAccount.h"
#include "PKAccountWebServicePassDetailsResponse.h"
#include "PKPaymentPass.h"

@class NSString;

@interface PKAccountCredential : PKPaymentCredential

@property (readonly, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) PKAccountWebServicePassDetailsResponse *passDetailsResponse;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;

/* instance methods */
- (id)initWithAccount:(id)account;
- (BOOL)isEqual:(id)equal;
- (BOOL)_isEqualToCredential:(id)credential;
- (unsigned long long)hash;
- (id)longDescription;
- (id)detailDescription;
- (BOOL)supportsSuperEasyProvisioning;
@end

#endif /* PKAccountCredential_h */