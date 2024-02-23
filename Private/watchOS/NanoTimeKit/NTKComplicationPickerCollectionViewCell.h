//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationPickerCollectionViewCell_h
#define NTKComplicationPickerCollectionViewCell_h
@import Foundation;

#include "PUICListPlatterCell.h"
#include "NTKSnapshotToken.h"

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface NTKComplicationPickerCollectionViewCell : PUICListPlatterCell

@property (readonly, nonatomic) UIImageView *snapshotImageView;
@property (readonly, nonatomic) NSLayoutConstraint *snapshotWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *snapshotHeightConstraint;
@property (readonly, nonatomic) UILabel *complicationTextLabel;
@property (readonly, nonatomic) UIView *complicationTextView;
@property (nonatomic) BOOL scaleComplicationToMatchExpectedSize;
@property (retain, nonatomic) NTKSnapshotToken *token;

/* class methods */
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultContentInsets;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)clearTextInTextView;
- (id)createImageView;
- (id)createTextView;
- (void)configureAutolayoutWithImageView:(id)view textView:(id)view;
- (void)setComplicationMaximumSnapshotImageSize:(struct CGSize { double x0; double x1; })size;
- (void)setComplicationText:(id)text;
- (void)setComplicationSnapshotImage:(id)image animated:(BOOL)animated;
- (void)setShowsSelectionOutline:(BOOL)outline;
@end

#endif /* NTKComplicationPickerCollectionViewCell_h */