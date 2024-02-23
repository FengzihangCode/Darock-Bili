//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUINotificationContent_Protocol_h
#define WNUINotificationContent_Protocol_h
@import Foundation;

@protocol WNUINotificationContent <NSObject>

@property (readonly) BOOL shouldAutomaticallyClipNotificationContent;

/* instance methods */
- (void)didReceiveNotification:(id)notification;
@optional
/* instance methods */
- (void)didReceiveNotification:(id)notification configuration:(id)configuration;
- (void)didReceiveNotificationResponse:(id)response completionHandler:(id /* block */)handler;
@end

#endif /* WNUINotificationContent_Protocol_h */