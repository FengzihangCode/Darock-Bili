//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIIVCInterface_Protocol_h
#define _UIIVCInterface_Protocol_h
@import Foundation;

@protocol _UIIVCInterface <NSObject>

@property (retain, nonatomic) NSObject<_UIIVCResponseDelegate> *responseDelegate;

/* instance methods */
- (void)_tearDownRemoteService;
- (void)_handleInputViewControllerState:(id)state;
@end

#endif /* _UIIVCInterface_Protocol_h */