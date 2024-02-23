//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUIProactiveCandidateCell_h
#define TUIProactiveCandidateCell_h
@import Foundation;

#include "TUICandidateBaseCell.h"

@class TIKeyboardCandidate, UIView;

@interface TUIProactiveCandidateCell : TUICandidateBaseCell

@property (retain, nonatomic) UIView *slotContentView;
@property (retain, nonatomic) TIKeyboardCandidate *candidate;

/* class methods */
+ (id)reuseIdentifier;

/* instance methods */
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
@end

#endif /* TUIProactiveCandidateCell_h */