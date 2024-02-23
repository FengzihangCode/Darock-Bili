//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UINavigationBarTitleControl_h
#define _UINavigationBarTitleControl_h
@import Foundation;

#include "UIControl.h"
#include "UIImageView.h"
#include "UILabel.h"
#include "UILayoutGuide.h"
#include "UIView.h"
#include "_UITAMICAdaptorView.h"
#include "_UITAMICAdaptorViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSLayoutConstraint, NSString;
@protocol _UINavigationBarTitleControlVisualProvider;

@interface _UINavigationBarTitleControl : UIControl<_UITAMICAdaptorViewDelegate> {
  /* instance variables */
  UIView *_backgroundView;
  UILabel *_inlineTitleView;
  _UITAMICAdaptorView *_wrapperView;
  NSDictionary *_resolvedAttributes;
  UIImageView *_chevron;
  UILayoutGuide *_chevronGuide;
  NSLayoutConstraint *_sosConstraint;
  NSArray *_backgroundViewConstraints;
  NSArray *_titleConstraints;
  NSArray *_inlineTitleConstraints;
  NSArray *_chevronConstraints;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *titleAttributes;
@property (retain, nonatomic) UIView *titleView;
@property (nonatomic) float titleViewCompressionResistancePriority;
@property (nonatomic) double contentAlpha;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIView *effectiveTitleView;
@property (readonly, nonatomic) BOOL hasBaseline;
@property (readonly, nonatomic) BOOL isInteractive;
@property (readonly, nonatomic) double trailingPadding;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } menuAlignmentInsets;
@property (retain, nonatomic) UILayoutGuide *titleLayoutGuide;
@property (retain, nonatomic) NSObject<_UINavigationBarTitleControlVisualProvider> *visualProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)titleMenuSuggestedActionsWithDocumentFileURL:(id)url;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)_baselineView;
- (void)_resetTitleViewConstraints;
- (void)_cleanupWrapperView;
- (void)_ensureNecessaryViews;
- (id)_backgroundViewConstraintsForIdiom:(long long)idiom;
- (void)_updateInlineTitleView;
- (void)_updateContentAlpha;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)didMoveToWindow;
- (void)setHighlighted:(BOOL)highlighted;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_debugInfo;
- (struct CGSize { double x0; double x1; })availableSizeForAdaptor:(id)adaptor proposedSize:(struct CGSize { double x0; double x1; })size;
- (id)_preferredPresentationSourceItem;
- (id)_preferredSender;
- (void)_invalidateSceneDraggingBehavior;
@end

#endif /* _UINavigationBarTitleControl_h */