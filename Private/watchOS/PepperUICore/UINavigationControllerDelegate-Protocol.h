//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef UINavigationControllerDelegate_Protocol_h
#define UINavigationControllerDelegate_Protocol_h
@import Foundation;

@protocol UINavigationControllerDelegate <NSObject>
@optional
/* instance methods */
- (void)navigationController:(id)controller willShowViewController:(id)controller animated:(BOOL)animated;
- (void)navigationController:(id)controller didShowViewController:(id)controller animated:(BOOL)animated;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)orientations;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)presentation;
- (id)navigationController:(id)controller interactionControllerForAnimationController:(id)controller;
- (id)navigationController:(id)controller animationControllerForOperation:(long long)operation fromViewController:(id)controller toViewController:(id)controller;
@end

#endif /* UINavigationControllerDelegate_Protocol_h */