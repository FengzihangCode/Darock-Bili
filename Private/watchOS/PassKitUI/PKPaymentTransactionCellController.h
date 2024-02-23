//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentTransactionCellController_h
#define PKPaymentTransactionCellController_h
@import Foundation;

#include "PKPaymentTransactionIconGenerator.h"

@class PKContactResolver, UIImage;

@interface PKPaymentTransactionCellController : NSObject {
  /* instance variables */
  PKPaymentTransactionIconGenerator *_iconGenerator;
  unsigned long long _context;
  UIImage *_emptyImage;
}

@property (readonly, nonatomic) PKContactResolver *contactResolver;

/* instance methods */
- (id)initWithContactResolver:(id)resolver;
- (id)initWithContactResolver:(id)resolver context:(unsigned long long)context;
- (void)configureCell:(id)cell forTransaction:(id)transaction transactionSource:(id)source familyMember:(id)member account:(id)account detailStyle:(long long)style deviceName:(id)name;
- (void)_updateAvatarOnTransactionCell:(id)cell withTransaction:(id)transaction contact:(id)contact;
- (void)_updatePrimaryLabelOnTransactionCell:(id)cell withPeerPaymentCounterpartHandle:(id)handle contact:(id)contact;
@end

#endif /* PKPaymentTransactionCellController_h */