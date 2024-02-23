//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSSiriDebugConnection_h
#define CSSiriDebugConnection_h
@import Foundation;

@interface CSSiriDebugConnection : NSObject
/* class methods */
+ (void)launchSiriDebugAppWithMessage:(id)message;
+ (void)launchSiriDebugFeedbackBannerFalseRejectBannerWithTriggerScore:(float)score withTriggeredPhraseId:(unsigned int)id;
+ (id)_getFalseRejectBannerCommandWithTriggerScore:(float)score withTriggeredPhraseId:(unsigned int)id;
@end

#endif /* CSSiriDebugConnection_h */