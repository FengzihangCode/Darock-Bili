//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICQuickboardHeaderMessageViewController_h
#define PUICQuickboardHeaderMessageViewController_h
@import Foundation;

#include "PUICQuickboardMessageViewController.h"

@class UIView;

@interface PUICQuickboardHeaderMessageViewController : PUICQuickboardMessageViewController

@property (retain, nonatomic) UIView *customHeaderView;

/* instance methods */
- (id)headerContentView;
- (double)headerContentViewHeight;
- (BOOL)shouldShowTrayView;
- (BOOL)shouldShowTextField;
@end

#endif /* PUICQuickboardHeaderMessageViewController_h */