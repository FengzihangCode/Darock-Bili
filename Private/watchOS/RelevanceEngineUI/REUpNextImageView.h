//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REUpNextImageView_h
#define REUpNextImageView_h
@import Foundation;

#include "UIView.h"

@class CLKImageProvider, UIColor, UIImage, UIImageView;

@interface REUpNextImageView : UIView {
  /* instance variables */
  UIImageView *_foregroundImageView;
  UIImageView *_backgroundImageView;
  UIImageView *_foregroundAccentImageView;
}

@property (retain, nonatomic) UIColor *fallbackTintColor;
@property (retain, nonatomic) CLKImageProvider *imageProvider;
@property (retain, nonatomic) UIImage *overrideImage;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (BOOL)_hasMultipartImages;
- (void)_updateColors;
- (void)setContentMode:(long long)mode;
@end

#endif /* REUpNextImageView_h */