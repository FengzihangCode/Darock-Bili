//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKTimeIntervalLabel_h
#define NTKTimeIntervalLabel_h
@import Foundation;

#include "UIView.h"

@class CLKDevice, CLKFont, NSMutableArray, NSMutableDictionary, NSString, UIColor, UILabel;

@interface NTKTimeIntervalLabel : UIView {
  /* instance variables */
  CLKDevice *_device;
  double _currentTextTime;
  long long _style;
  UILabel *_label;
  NSString *_text;
  NSMutableArray *_digits;
  NSMutableDictionary *_images;
  double _staticLabelWidth;
  double _digitWidth;
  BOOL _isShowingDigits;
  BOOL _labelWasSized;
  BOOL _isSigned;
}

@property (nonatomic) double time;
@property (copy, nonatomic) NSString *suffix;
@property (nonatomic) BOOL suffixSmallCaps;
@property (copy, nonatomic) NSString *prefix;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) CLKFont *font;
@property (readonly, nonatomic) BOOL showSubSeconds;
@property (nonatomic) BOOL frozen;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } textSize;
@property (readonly, nonatomic) double actualWidth;
@property (copy, nonatomic) id /* block */ didResizeHandler;

/* instance methods */
- (id)initWithMonospacedFontOfSize:(double)size color:(id)color style:(long long)style signed:(BOOL)signed forDevice:(id)device;
- (void)dealloc;
- (id)initWithMonospacedFontOfSize:(double)size color:(id)color style:(long long)style forDevice:(id)device;
- (id)initWithMonospacedFontOfSize:(double)size forDevice:(id)device;
- (id)_localImageForDigit:(unsigned long long)digit;
- (void)calculateMetrics;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)createDigitViews;
- (double)_labelWidth;
- (void)layoutSubviews;
- (void)_localeChanged;
- (id)getTimeText;
- (id)formatTimeInterval;
- (BOOL)shouldShowDigits;
- (void)forceTime:(double)time;
- (void)sizeToFitLabelIfNeeded;
- (void)recalculateSize;
- (void)setLabelText:(id)text;
- (void)_invalidateDigitImages;
- (id)_cachedImageForDigit:(unsigned long long)digit;
@end

#endif /* NTKTimeIntervalLabel_h */