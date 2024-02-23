//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDatePicker_h
#define PKDatePicker_h
@import Foundation;

#include "UIView.h"
#include "PKDatePickerDelegate-Protocol.h"

@class NSCalendar, NSDate, NSLocale;
@protocol UIView<PKDatePickerInternalImplementationProtocol;

@interface PKDatePicker : UIView {
  /* instance variables */
  UIView<PKDatePickerInternalImplementationProtocol> *_internalPicker;
}

@property (readonly, nonatomic) BOOL showsDay;
@property (readonly, nonatomic) BOOL showsMonth;
@property (readonly, nonatomic) BOOL showsYear;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDate *date;
@property (weak, nonatomic) NSObject<PKDatePickerDelegate> *delegate;
@property (nonatomic) BOOL usesDarkAppearance;

/* class methods */
+ (BOOL)_preventsAppearanceProxyCustomization;

/* instance methods */
- (id)pk_childrenForAppearance;
- (void)pk_applyAppearance:(id)appearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)reconfigureToShowDay:(BOOL)day month:(BOOL)month year:(BOOL)year style:(unsigned long long)style locale:(id)locale calendar:(id)calendar;
- (void)setBackgroundColor:(id)color;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (Class)_classForDay:(BOOL)day month:(BOOL)month year:(BOOL)year style:(unsigned long long)style;
- (void)_dateValueChanged:(id)changed;
- (void)_forceReloadInternalPicker;
@end

#endif /* PKDatePicker_h */