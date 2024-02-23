//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NHSButton_h
#define NHSButton_h
@import Foundation;

#include "UIButton.h"

@class NSString, UIColor, UIImage;

@interface NHSButton : UIButton

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } touchEdgeInsets;
@property (copy, nonatomic) NSString *groupNameBase;
@property (retain, nonatomic) UIImage *configuredImage;
@property (retain, nonatomic) UIColor *backgroundColor;

/* class methods */
+ (id)buttonForDevice:(id)device withStyle:(unsigned long long)style fillStyle:(unsigned long long)style handler:(id /* block */)handler;
+ (id)defaultConfigurationForDevice:(id)device withStyle:(unsigned long long)style fillStyle:(unsigned long long)style;
+ (id)_buttonForDevice:(id)device withConfiguration:(id)configuration style:(unsigned long long)style fillStyle:(unsigned long long)style handler:(id /* block */)handler;
+ (void)_configureConfiguration:(id)configuration withGroupNameBase:(id)base style:(unsigned long long)style fillStyle:(unsigned long long)style;
+ (id)_backdropGroupNameForBase:(id)base style:(unsigned long long)style;

/* instance methods */
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)setHighlighted:(BOOL)highlighted;
@end

#endif /* NHSButton_h */