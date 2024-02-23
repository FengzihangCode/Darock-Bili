//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICAddPageViewController_h
#define PUICAddPageViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PUICPageScrollViewController.h"
#include "_PUICAddPageActivationButton.h"

@class UIViewController;
@protocol PUICAddPageViewControllerDelegate;

@interface PUICAddPageViewController : UIViewController {
  /* instance variables */
  _PUICAddPageActivationButton *_activationButton;
}

@property (readonly, nonatomic) PUICPageScrollViewController *pageScrollViewController;
@property (weak, nonatomic) NSObject<PUICAddPageViewControllerDelegate> *delegate;
@property (readonly, nonatomic) unsigned long long currentPageIndex;
@property (readonly, nonatomic) UIViewController *currentPageViewController;
@property (readonly, nonatomic) BOOL active;

/* instance methods */
- (id)init;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)activateWithAdditionalAnimations:(id /* block */)animations completion:(id /* block */)completion;
- (void)activateAnimated:(BOOL)animated additionalAnimations:(id /* block */)animations completion:(id /* block */)completion;
- (void)deactivateWithAdditionalAnimations:(id /* block */)animations completion:(id /* block */)completion;
- (void)deactivateAnimated:(BOOL)animated additionalAnimations:(id /* block */)animations completion:(id /* block */)completion;
- (void)_activationButtonPress;
- (void)willDisappearForPageSelection;
- (void)_setCrownIndicatorVisible:(BOOL)visible animated:(BOOL)animated;
- (BOOL)isActive;
@end

#endif /* PUICAddPageViewController_h */