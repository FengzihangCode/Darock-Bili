//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKSignificantTimeChangeLogger_h
#define NTKSignificantTimeChangeLogger_h
@import Foundation;

@interface NTKSignificantTimeChangeLogger : NSObject
/* class methods */
+ (void)beginLogging;
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_handleNotification:(id)notification;
- (void)_logNotificationReceiptWithName:(id)name;
- (void)_startObserving;
@end

#endif /* NTKSignificantTimeChangeLogger_h */