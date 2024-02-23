//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 378.2.12.0.0
//
#ifndef NCABContactListBottomPaletteContentView_h
#define NCABContactListBottomPaletteContentView_h
@import Foundation;

#include "UIView.h"
#include "NCABContactListBottomPaletteContentViewDelegate-Protocol.h"

@class NSArray, NSDate, NSTimer, UIButton, UILabel, UIStackView, UIView;

@interface NCABContactListBottomPaletteContentView : UIView

@property (retain, nonatomic) UIStackView *vStack;
@property (retain, nonatomic) UILabel *syncStatusLabel;
@property (retain, nonatomic) UIView *labelContainer;
@property (retain, nonatomic) UIButton *addContactButton;
@property (retain, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) NSArray *superviewConstraints;
@property (retain, nonatomic) NSArray *syncStatusLabelConstraints;
@property (readonly, nonatomic) double secondsSinceLastUserSync;
@property (retain, nonatomic) NSTimer *syncLabelTimer;
@property (readonly, nonatomic) BOOL shouldShowSyncStatusLabel;
@property (weak, nonatomic) NSObject<NCABContactListBottomPaletteContentViewDelegate> *delegate;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) BOOL canShowSyncStatus;
@property (readonly, nonatomic) BOOL canUserRequestSync;
@property (readonly, nonatomic) BOOL syncStatusLabelHasContent;
@property (readonly, nonatomic) BOOL shouldShowAddContactButton;
@property (readonly, nonatomic) double overscrollThresholdForSync;
@property (retain, nonatomic) NSDate *lastSyncDate;
@property (nonatomic) BOOL defaultContainerIsGuardianRestricted;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)willMoveToSuperview:(id)superview;
- (void)didMoveToSuperview;
- (void)setAddContactTarget:(id)target action:(SEL)action;
- (void)_setSuperviewConstraintsActive:(BOOL)active;
- (void)_updateViewStack;
- (void)_updateSyncStatusLabel;
- (void)_startTimerWithDuration:(double)duration;
- (BOOL)isDefaultContainerGuardianRestricted;
@end

#endif /* NCABContactListBottomPaletteContentView_h */