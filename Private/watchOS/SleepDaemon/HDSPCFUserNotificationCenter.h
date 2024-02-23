//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPCFUserNotificationCenter_h
#define HDSPCFUserNotificationCenter_h
@import Foundation;

#include "HDSPEnvironment.h"
#include "HDSPEnvironmentAware-Protocol.h"
#include "HDSPSleepNotificationPublisher-Protocol.h"
#include "HDSPSource-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol HKSPMutexProvider;

@interface HDSPCFUserNotificationCenter : NSObject<HDSPSource, HDSPSleepNotificationPublisher, HDSPEnvironmentAware>

@property (readonly, nonatomic) NSObject<HKSPMutexProvider> *mutexProvider;
@property (readonly, nonatomic) NSMutableDictionary *notifications;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

/* instance methods */
- (id)initWithEnvironment:(id)environment;
- (void)_withLock:(id /* block */)lock;
- (void)environmentDidBecomeReady:(id)ready;
- (void)publishNotificationForEvent:(id)event userInfo:(id)info;
- (void)_publishWakeDetectionNotificationForUserInfo:(id)info;
- (id)_wakeDetectionAlertTitleForAlarmEnabled:(BOOL)enabled sleepModeOn:(BOOL)on;
- (id)_wakeDetectionAlertBodyForAlarmEnabled:(BOOL)enabled sleepModeOn:(BOOL)on;
- (id)_confirmTextForForAlarmEnabled:(BOOL)enabled sleepModeOn:(BOOL)on;
- (id)_ignoreTextForForAlarmEnabled:(BOOL)enabled sleepModeOn:(BOOL)on;
- (void)_publishNotificationWithIdentifier:(id)identifier title:(id)title message:(id)message defaultButtonTitle:(id)title otherButtonTitle:(id)title bypassDND:(BOOL)dnd aboveLockScreen:(BOOL)screen actionHandler:(id /* block */)handler;
- (void)handleResponse:(unsigned long long)response forUserNotification:(id)notification;
- (void)tearDownNotificationForEventIdentifier:(id)identifier;
- (void)tearDownNotifications;
@end

#endif /* HDSPCFUserNotificationCenter_h */