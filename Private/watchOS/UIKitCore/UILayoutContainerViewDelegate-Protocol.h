//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UILayoutContainerViewDelegate_Protocol_h
#define UILayoutContainerViewDelegate_Protocol_h
@import Foundation;

@protocol UILayoutContainerViewDelegate <NSObject>
@optional
/* instance methods */
- (void)__viewWillLayoutSubviews;
- (void)_layoutContainerViewWillMoveToWindow:(id)window;
- (void)_layoutContainerViewDidMoveToWindow:(id)window;
- (void)_layoutContainerViewSemanticContentAttributeChanged:(id)changed;
@end

#endif /* UILayoutContainerViewDelegate_Protocol_h */