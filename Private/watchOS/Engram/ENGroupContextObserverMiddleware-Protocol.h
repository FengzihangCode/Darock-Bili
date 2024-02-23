//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef ENGroupContextObserverMiddleware_Protocol_h
#define ENGroupContextObserverMiddleware_Protocol_h
@import Foundation;

@protocol ENGroupContextObserverMiddleware <ENGroupContextMiddleware>
@optional
/* instance methods */
- (void)groupContext:(id)context didCreateGroup:(id)group;
- (void)groupContext:(id)context didCacheGroup:(id)group;
- (void)groupContext:(id)context didUpdateGroup:(id)group withNewGroup:(id)group;
- (void)groupContext:(id)context didReceiveDecryptionFailureForGroup:(id)group;
- (void)groupContextDidReceiveRegistrationIdentityUpdate:(id)update;
@end

#endif /* ENGroupContextObserverMiddleware_Protocol_h */