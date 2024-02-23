//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2041.0.0.0.0
//
#ifndef CertUIKeyDataCell_h
#define CertUIKeyDataCell_h
@import Foundation;

#include "UITableViewCell.h"

@class NSArray, UILabel;

@interface CertUIKeyDataCell : UITableViewCell

@property (retain, nonatomic) UILabel *keyLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSArray *constraints;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)_setup;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (void)setValue:(id)value forKey:(id)key;
- (void)_setupConstraints;
@end

#endif /* CertUIKeyDataCell_h */