//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 13.0.0.0.0
//
#ifndef SCRGovernor_Protocol_h
#define SCRGovernor_Protocol_h
@import Foundation;

@protocol SCRGovernor <NSObject>
@optional
/* instance methods */
- (BOOL)taskAdministrator:(id)administrator isEligibleToPerformTask:(id)task eligiblityError:(id *)error;
- (void)taskAdministrator:(id)administrator willPerformTask:(id)task;
- (void)taskAdministrator:(id)administrator didCompleteTask:(id)task withError:(id)error;
@end

#endif /* SCRGovernor_Protocol_h */