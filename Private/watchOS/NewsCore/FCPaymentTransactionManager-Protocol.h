//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPaymentTransactionManager_Protocol_h
#define FCPaymentTransactionManager_Protocol_h
@import Foundation;

#include "FCPaymentTransactionManager-Protocol.h"
#include "FCPaymentTransactionManagerDelegate-Protocol.h"
#include "FCPaymentTransactionObserver.h"
#include "FCPaymentTransactionObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@protocol FCPaymentTransactionManager 

@property (weak, nonatomic) NSObject<FCPaymentTransactionManagerDelegate> *delegate;

/* instance methods */
- (BOOL)canMakePayments;
- (void)registerOngoingPurchaseTransactionsWithEntry:(id)entry;
- (void)startPurchaseWithTagID:(id)id productID:(id)id purchaseID:(id)id bundleID:(id)id appAdamID:(id)id storeExternalVersion:(id)version price:(id)price webAccessOptIn:(BOOL)in payment:(id)payment;
@end

#endif /* FCPaymentTransactionManager_Protocol_h */