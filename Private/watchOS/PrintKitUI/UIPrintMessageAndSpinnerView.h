//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 37.5.0.0.0
//
#ifndef UIPrintMessageAndSpinnerView_h
#define UIPrintMessageAndSpinnerView_h
@import Foundation;

#include "UIView.h"

@class NSArray, NSString, UIActivityIndicatorView, UILabel;

@interface UIPrintMessageAndSpinnerView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NSArray *currentHorizontalConstraints;
@property (retain, nonatomic) NSString *messageText;
@property (nonatomic) BOOL spinSpinner;
@property (nonatomic) BOOL spinnerHidden;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateFont;
- (void)updateConstraints;
@end

#endif /* UIPrintMessageAndSpinnerView_h */