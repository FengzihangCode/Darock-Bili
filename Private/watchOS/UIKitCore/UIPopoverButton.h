//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIPopoverButton_h
#define UIPopoverButton_h
@import Foundation;

#include "UIButton.h"

@interface UIPopoverButton : UIButton
/* class methods */
+ (Class)_visualProviderClassForIdiom:(long long)idiom;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame buttonType:(long long)type;
- (void)setEnabled:(BOOL)enabled;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* UIPopoverButton_h */