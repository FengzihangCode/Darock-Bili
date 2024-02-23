//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUIAssistantButtonBarGroupView_h
#define TUIAssistantButtonBarGroupView_h
@import Foundation;

#include "UIView.h"
#include "TUIButtonBarViewProvider-Protocol.h"
#include "_UIBarButtonItemViewOwner-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIBarButtonItemGroup, _UIButtonBarButtonVisualProvider;

@interface TUIAssistantButtonBarGroupView : UIView<_UIBarButtonItemViewOwner>

@property (weak, nonatomic) NSObject<TUIButtonBarViewProvider> *buttonProvider;
@property (retain, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider;
@property (retain, nonatomic) UIBarButtonItemGroup *barButtonItemGroup;
@property (nonatomic) BOOL collapsed;
@property (readonly, nonatomic) NSArray *visibleButtons;
@property (nonatomic) double itemSpacing;
@property (readonly, nonatomic) BOOL containsFlexibleItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBarButtonItemGroup:(id)group visualProvider:(id)provider buttonProvider:(id)provider;
- (BOOL)_canBeCollapsed;
- (BOOL)isCollapsed;
- (id)_visibleItemsAllowingCollapse:(BOOL)collapse;
- (id)_visibleItems;
- (struct CGSize { double x0; double x1; })_preferredSizeForItems:(id)items fittingWidth:(double)width;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_ensureVisibleButtonsForVisibleItems;
- (id)_buttonBarItemViewForBarButtonItem:(id)item;
- (void)layoutSubviews;
- (void)_groupDidUpdateItems:(id)items removedItems:(id)items;
- (void)_groupDidUpdateRepresentative:(id)representative fromRepresentative:(id)representative;
- (void)_groupDidUpdateVisibility:(id)visibility;
- (void)_updateViewForBarButtonItem:(id)item;
- (void)_itemDidChangeSelectionState:(id)state;
- (void)_itemDidChangeEnabledState:(id)state;
- (void)_itemCustomViewDidChange:(id)change fromView:(id)view;
- (void)_itemStandardViewNeedsUpdate:(id)update;
- (void)_itemDidChangeWidth:(id)width;
- (void)_itemDidChangeHiddenState:(id)state;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
@end

#endif /* TUIAssistantButtonBarGroupView_h */