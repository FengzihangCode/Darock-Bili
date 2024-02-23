//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUIWatchTextFieldDelegate_Protocol_h
#define RUIWatchTextFieldDelegate_Protocol_h
@import Foundation;

@protocol RUIWatchTextFieldDelegate <NSObject>
/* instance methods */
- (void)textInputValueCancelled:(id)cancelled;
- (void)textField:(id)field textInputValueDidChange:(id)change;
@end

#endif /* RUIWatchTextFieldDelegate_Protocol_h */