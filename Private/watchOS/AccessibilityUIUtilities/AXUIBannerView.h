//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXUIBannerView_h
#define AXUIBannerView_h
@import Foundation;

#include "AXUIPlatterContainerView.h"

@class NSArray, NSString, UILabel;

@interface AXUIBannerView : AXUIPlatterContainerView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *secondaryTextLabel;
@property (retain, nonatomic) NSArray *withSecondaryTextConstraints;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) double defaultPlatterToTextVerticalSpacing;
@property (readonly, nonatomic) double platterToTextHorizontalSpacing;
@property (readonly, nonatomic) double defaultTitleToSubtitleVerticalSpacing;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_updateSecondaryTextVisibility;
- (double)platterWidth;
@end

#endif /* AXUIBannerView_h */