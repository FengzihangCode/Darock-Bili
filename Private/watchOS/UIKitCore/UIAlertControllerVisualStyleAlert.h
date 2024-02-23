//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIAlertControllerVisualStyleAlert_h
#define UIAlertControllerVisualStyleAlert_h
@import Foundation;

#include "UIAlertControllerVisualStyle.h"

@interface UIAlertControllerVisualStyleAlert : UIAlertControllerVisualStyle
/* instance methods */
- (id)titleLabelFont;
- (id)titleLabelColor;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (id)messageLabelFont;
- (id)messageLabelColor;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)_marginAroundActionGroup;
- (double)maximumWidth;
- (double)accessibilityWidth;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)view;
- (double)textFieldHorizontalMargin;
- (id)textFieldContainingViewWithTextField:(id)field position:(long long)position;
- (long long)permittedActionLayoutDirection;
- (double)transitionDurationForPresentation:(BOOL)presentation ofAlertController:(id)controller;
- (void)animateAlertControllerView:(id)view ofAlertController:(id)controller forPresentation:(BOOL)presentation inContainerView:(id)view descendantOfContainerView:(id)view duration:(double)duration completionBlock:(id /* block */)block;
- (BOOL)placementAvoidsKeyboard;
@end

#endif /* UIAlertControllerVisualStyleAlert_h */