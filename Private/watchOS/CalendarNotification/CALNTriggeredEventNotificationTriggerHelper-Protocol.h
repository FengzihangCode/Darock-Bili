//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNTriggeredEventNotificationTriggerHelper_Protocol_h
#define CALNTriggeredEventNotificationTriggerHelper_Protocol_h
@import Foundation;

@protocol CALNTriggeredEventNotificationTriggerHelper <NSObject>
/* instance methods */
- (BOOL)shouldTriggerForSourceClientIdentifier:(id)identifier trigger:(unsigned long long)trigger sourceNotificationInfo:(id)info oldNotificationData:(id)data;
@end

#endif /* CALNTriggeredEventNotificationTriggerHelper_Protocol_h */