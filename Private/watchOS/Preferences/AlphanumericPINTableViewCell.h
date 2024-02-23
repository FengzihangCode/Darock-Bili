//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef AlphanumericPINTableViewCell_h
#define AlphanumericPINTableViewCell_h
@import Foundation;

#include "UITableViewCell.h"
#include "AlphanumericPINTextField.h"

@interface AlphanumericPINTableViewCell : UITableViewCell

@property (retain, nonatomic) AlphanumericPINTextField *pinTextField;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;
@end

#endif /* AlphanumericPINTableViewCell_h */