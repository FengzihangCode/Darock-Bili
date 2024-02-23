//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupTransferCardView_h
#define PKPaymentSetupTransferCardView_h
@import Foundation;

#include "UIView.h"

@class UIButton;
@protocol PKPaymentSetupTransferCardDelegate;

@interface PKPaymentSetupTransferCardView : UIView

@property (retain, nonatomic) UIButton *transferBalanceButton;
@property (weak, nonatomic) NSObject<PKPaymentSetupTransferCardDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_createSubviews;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_transferBalanceButtonTapped:(id)tapped;
@end

#endif /* PKPaymentSetupTransferCardView_h */