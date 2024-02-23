//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UILabelVisualStyle_h
#define _UILabelVisualStyle_h
@import Foundation;

@interface _UILabelVisualStyle : NSObject
/* class methods */
+ (id)inferredVisualStyle;

/* instance methods */
- (id)defaultFont;
- (void)actionsForInitializationOfLabel:(id)label;
- (void)actionsForDeallocationOfLabel:(id)label;
- (BOOL)updatesTextColorOnUserInterfaceStyleChanges;
- (BOOL)shouldDelayStartMarquee;
- (BOOL)shouldDisableUpdateTextColorOnTraitCollectionChangeForAttributedString:(id)string attributes:(id)attributes;
@end

#endif /* _UILabelVisualStyle_h */