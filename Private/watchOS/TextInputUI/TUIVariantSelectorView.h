//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUIVariantSelectorView_h
#define TUIVariantSelectorView_h
@import Foundation;

#include "UIView.h"
#include "TUIDrawingView.h"
#include "TUIVariantSelectorDelegate-Protocol.h"

@class NSMutableArray, UIKBRenderTraits, UIKBTree, UILayoutGuide, UIStackView, UIView;

@interface TUIVariantSelectorView : UIView

@property (retain, nonatomic) UIKBTree *backingTree;
@property (retain, nonatomic) UIStackView *variantView;
@property (retain, nonatomic) NSMutableArray *arrangedVariantRows;
@property (retain, nonatomic) UILayoutGuide *variantLayoutGuide;
@property (retain, nonatomic) UIView *deepShadowView;
@property (retain, nonatomic) UIView *keyShadowView;
@property (retain, nonatomic) UIView *backdropView;
@property (retain, nonatomic) TUIDrawingView *backgroundMaskView;
@property (retain, nonatomic) TUIDrawingView *borderView;
@property (retain, nonatomic) UIKBRenderTraits *renderTraits;
@property (readonly, nonatomic) unsigned long long selectedVariant;
@property (nonatomic) unsigned long long variantViewRows;
@property (retain, nonatomic) NSMutableArray *arrangedVariantCells;
@property (nonatomic) BOOL baseKeyOnRight;
@property (nonatomic) BOOL needsPopup;
@property (nonatomic) long long layoutStyle;
@property (weak, nonatomic) NSObject<TUIVariantSelectorDelegate> *selectorDelegate;
@property (readonly, nonatomic) UILayoutGuide *baseKeyLayoutGuide;
@property (readonly, nonatomic) UIKBTree *associatedTree;
@property (weak, nonatomic) UIView *touchesForwardingView;

/* instance methods */
- (id)initWithKey:(id)key renderTraits:(id)traits;
- (void)updateRenderTraits:(id)traits forState:(int)state;
- (void)updateConstraints;
- (void)popupConstructorForKey:(id)key;
- (void)updateVariantsIfNeededForKey:(id)key;
- (void)addVariantsForKey:(id)key toView:(id)view isNonVariantPaddle:(BOOL)paddle;
- (id)cellViewsInSubtreeOrder;
- (id)paddleBezierPath;
- (void)layoutSubviews;
- (unsigned long long)indexOfHighlightedVariant;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)updateSelectorForPoint:(struct CGPoint { double x0; double x1; })point;
- (void)updateSelectorForTouch:(id)touch event:(id)event;
- (void)finishVariantSelection;
- (void)unhighlightAllViews;
- (void)setInitialHighlight;
- (id)variantCellAtLocation:(struct CGPoint { double x0; double x1; })location;
- (BOOL)highlightCellAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)constraintsToMatchView:(id)view toLayoutGuide:(id)guide withInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)constraintsToMatchInnerView:(id)view toOuterView:(id)view withInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (unsigned long long)variantRowLimitForLayout;
- (unsigned long long)maxVariantsPerRowForKey:(id)key;
- (void)updateVariantRowsForKey:(id)key isNonVariantPaddle:(BOOL)paddle;
@end

#endif /* TUIVariantSelectorView_h */