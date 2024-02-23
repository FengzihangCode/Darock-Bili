//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNInboxNotificationMonitor_h
#define CALNInboxNotificationMonitor_h
@import Foundation;

#include "CADModule-Protocol.h"
#include "CALNInboxNotificationProvider-Protocol.h"

@class NSArray, NSString, _EKNotificationMonitor;

@interface CALNInboxNotificationMonitor : NSObject<CADModule, CALNInboxNotificationProvider>

@property (readonly, nonatomic) _EKNotificationMonitor *notificationMonitor;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *eventNotificationReferences;
@property (readonly, nonatomic) unsigned long long eventNotificationCount;

/* instance methods */
- (id)initWithEventStoreProvider:(id)provider;
- (void)addNotificationsChangedObserver:(id)observer selector:(SEL)selector;
- (void)removeNotificationsChangedObserver:(id)observer;
- (void)addNotificationCountChangedObserver:(id)observer selector:(SEL)selector;
- (void)removeNotificationCountChangedObserver:(id)observer selector:(SEL)selector;
- (void)addNotificationsLoadedObserver:(id)observer selector:(SEL)selector;
- (void)removeNotificationsLoadedObserver:(id)observer selector:(SEL)selector;
- (void)activate;
- (void)deactivate;
- (void)receivedNotificationNamed:(id)named;
- (void)didRegisterForAlarms;
- (void)receivedAlarmNamed:(id)named;
- (void)protectedDataDidBecomeAvailable;
- (BOOL)isActive;
@end

#endif /* CALNInboxNotificationMonitor_h */