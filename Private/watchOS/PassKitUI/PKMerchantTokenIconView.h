//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKMerchantTokenIconView_h
#define PKMerchantTokenIconView_h
@import Foundation;

#include "UIImageView.h"

@class NSURLSessionDataTask, UIImage, UILabel;

@interface PKMerchantTokenIconView : UIImageView {
  /* instance variables */
  UILabel *_monogramLabel;
  UIImage *_image;
  double _cornerRadius;
  NSURLSessionDataTask *_imageDownloadTask;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateWithImage:(id)image cornerRadius:(double)radius;
- (void)updateWithImageURL:(id)url monogramText:(id)text cornerRadius:(double)radius;
- (void)_setUpViews;
- (void)_setUpSelf;
- (void)_setUpMonogramLabel;
- (void)_setUpConstraints;
- (void)_updateMonogramLabelWithText:(id)text;
- (void)_updateIconImage;
- (void)_downloadImageFromURL:(id)url;
- (void)_cancelImageDownload;
@end

#endif /* PKMerchantTokenIconView_h */