//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountScheduledPaymentCell_h
#define PKAccountScheduledPaymentCell_h
@import Foundation;

#include "UITableViewCell.h"

@class NSTimeZone, PKAccountPayment, UIColor, UILabel, UITableViewCellLayoutManager;

@interface PKAccountScheduledPaymentCell : UITableViewCell {
  /* instance variables */
  UILabel *_frequencyLabel;
  UILabel *_statusLabel;
  UILabel *_amountLabel;
  UITableViewCellLayoutManager *_layoutManager;
  NSTimeZone *_timeZone;
  BOOL _hasPaymentDueDate;
  BOOL _sizing;
  BOOL _useStackedLayout;
}

@property (nonatomic) BOOL onHold;
@property (weak, nonatomic) PKAccountPayment *payment;
@property (copy, nonatomic) UIColor *titleColor;
@property (nonatomic) unsigned long long featureIdentifier;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)_useStackedLayoutForUsableWidth:(double)width;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveLayoutMargins;
- (void)setPayment:(id)payment forAccount:(id)account;
- (void)prepareForReuse;
- (id)_frequencyAttributedString;
- (id)_statusAttributedString;
- (id)_frequencyString;
- (id)_amountString;
- (id)_amountAttributedString;
- (id)_dateString;
@end

#endif /* PKAccountScheduledPaymentCell_h */