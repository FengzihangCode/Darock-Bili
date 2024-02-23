//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIAlertControllerVisualStyleActionSheetInline_h
#define UIAlertControllerVisualStyleActionSheetInline_h
@import Foundation;

#include "UIAlertControllerVisualStyleActionSheet.h"
#include "UIView.h"
#include "UIVisualEffectView.h"
#include "_UIPreviewPresentationEffectView.h"

@interface UIAlertControllerVisualStyleActionSheetInline : UIAlertControllerVisualStyleActionSheet

@property (nonatomic) BOOL actionsReversed;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIVisualEffectView *revealEffectView;
@property (retain, nonatomic) _UIPreviewPresentationEffectView *sourceViewSnapshot;

/* class methods */
+ (long long)interfaceActionPresentationStyle;
+ (void)positionContentsOfAlertController:(id)controller alertContentView:(id)view availableSpaceView:(id)view visualStyle:(id)style updatableConstraints:(id)constraints;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (double)_actionDescriptiveTextFontSize;
- (BOOL)shouldOccludeDuringPresentation;
- (BOOL)shouldPreserveRespondersAcrossWindows;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceRectForAlertController:(id)controller inContainerView:(id)view;
- (void)animateRevealOfAlertControllerView:(id)view alertController:(id)controller inContainerView:(id)view duration:(double)duration completionBlock:(id /* block */)block;
- (void)animateAlertControllerView:(id)view ofAlertController:(id)controller forPresentation:(BOOL)presentation inContainerView:(id)view descendantOfContainerView:(id)view duration:(double)duration completionBlock:(id /* block */)block;
- (double)transitionDurationForPresentation:(BOOL)presentation ofAlertController:(id)controller;
- (long long)permittedActionLayoutDirection;
- (double)minimumWidth;
- (BOOL)transitionOfType:(long long)type shouldBeInteractiveForAlertController:(id)controller;
- (id)interactionProgressForTransitionOfType:(long long)type forAlertController:(id)controller;
- (id)tintColorForAlertController:(id)controller;
- (BOOL)hideCancelAction:(id)action inAlertController:(id)controller;
- (id)dimmingViewForAlertController:(id)controller;
- (BOOL)_shouldReverseActions;
- (BOOL)placementAvoidsKeyboard;
@end

#endif /* UIAlertControllerVisualStyleActionSheetInline_h */