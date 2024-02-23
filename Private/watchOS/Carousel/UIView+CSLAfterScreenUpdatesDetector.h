//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef UIView_CSLAfterScreenUpdatesDetector_h
#define UIView_CSLAfterScreenUpdatesDetector_h
@import Foundation;

@interface UIView (CSLAfterScreenUpdatesDetector)
/* class methods */
+ (void)_buttonInAnimation:(id /* block */)animation completion:(id /* block */)completion;
+ (void)_buttonBounceInAnimation:(id /* block */)animation completion:(id /* block */)completion;
+ (void)_buttonOutAnimation:(id /* block */)animation completion:(id /* block */)completion;
+ (void)animateWithParametersFromSpringAnimation:(id)animation delay:(double)delay options:(unsigned long long)options animations:(id /* block */)animations completion:(id /* block */)completion;

/* instance methods */
- (id)csl_scene;
- (id)image;
- (BOOL)csl_drawViewHierarchyInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect afterScreenUpdates:(BOOL)updates;
- (id)csl_snapshotViewAfterScreenUpdates:(BOOL)updates;
- (id)csl_resizableSnapshotViewFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect afterScreenUpdates:(BOOL)updates withCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
@end

#endif /* UIView_CSLAfterScreenUpdatesDetector_h */