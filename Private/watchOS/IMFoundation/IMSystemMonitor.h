//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef IMSystemMonitor_h
#define IMSystemMonitor_h
@import Foundation;

#include "IMDispatchTimer.h"

@class CUTDeferredTaskQueue, NSDate, NSHashTable, NSString;

@interface IMSystemMonitor : NSObject {
  /* instance variables */
  BOOL _willSleep;
  BOOL _screenLocked;
  BOOL _screensaverActive;
  BOOL _underFirstLock;
  BOOL _active;
  BOOL _backingUp;
  BOOL _switchedOut;
  BOOL _screenLit;
  BOOL _systemLocked;
  BOOL _idleOverride;
  BOOL _inBackground;
  int _dataProtectionState;
  NSHashTable *_listeners;
  NSDate *_idleStart;
  IMDispatchTimer *_timer;
  NSString *_userID;
  double _delayTime;
  NSHashTable *_earlyListeners;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } ivarLock;
@property (nonatomic) BOOL isFastUserSwitched;
@property (nonatomic) long long resignActiveCount;
@property (retain, nonatomic) NSHashTable *_listeners;
@property (retain, nonatomic) NSHashTable *_earlyListeners;
@property (nonatomic) int userIdleToken;
@property (nonatomic) BOOL _idleOverride;
@property (nonatomic) BOOL _underFirstLock;
@property (nonatomic) int _dataProtectionState;
@property (retain, nonatomic) NSDate *_idleStart;
@property (nonatomic) BOOL listeningForSetupAssistantNotifications;
@property (retain, nonatomic) IMDispatchTimer *_timer;
@property (retain, nonatomic) NSString *_userID;
@property (nonatomic) double _delayTime;
@property (readonly, nonatomic) CUTDeferredTaskQueue *_postScreenLockedTask;
@property (readonly, nonatomic) CUTDeferredTaskQueue *_postScreenSaverStartedTask;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL usesPowerNotifications;
@property (nonatomic) BOOL receivesMemoryWarnings;
@property (nonatomic) BOOL usesSystemIdleState;
@property (nonatomic) BOOL watchesDataProtectionLockState;
@property (nonatomic) BOOL watchesSystemLockState;
@property (nonatomic) BOOL watchesScreenLightState;
@property (readonly, nonatomic) BOOL systemIsSleeping;
@property (readonly, nonatomic) BOOL systemIsShuttingDown;
@property (readonly, nonatomic) BOOL isScreenSaverActive;
@property (readonly, nonatomic) BOOL isScreenLocked;
@property (readonly, nonatomic) BOOL isScreenLit;
@property (readonly, retain, nonatomic) NSDate *dateScreenLightLastChanged;
@property (readonly, nonatomic) BOOL isSystemLocked;
@property (readonly, retain, nonatomic) NSDate *dateSystemLockLastChanged;
@property (readonly, nonatomic) BOOL isUnderDataProtectionLock;
@property (readonly, nonatomic) BOOL isUnderFirstDataProtectionLock;
@property (readonly, nonatomic) BOOL isBackingUp;
@property (readonly, nonatomic) BOOL isSetup;
@property (readonly, nonatomic) BOOL isSystemIdle;
@property (readonly, nonatomic) double systemIdleTime;
@property (readonly, nonatomic) BOOL isInBackground;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)setActive:(BOOL)active;
- (void)_deliverNotificationSelector:(SEL)selector;
- (void)_systemDidWake;
- (void)_systemWillSleep;
- (void)_postScreenLocked;
- (void)_screenLocked:(id)locked;
- (void)_screenUnlocked:(id)unlocked;
- (void)_applicationWillResignActive:(id)active;
- (void)_applicationDidBecomeActive:(id)active;
- (void)_suspendEventsOnly:(id)only;
- (void)_resumeEventsOnly:(id)only;
- (void)_suspend:(id)_suspend;
- (void)_resume:(id)_resume;
- (void)_notificationCenterWillAppear:(id)appear;
- (void)_notificationCenterDidDisappear:(id)disappear;
- (void)_postScreenSaverStarted;
- (void)_screenSaverStopped:(id)stopped;
- (void)_screenSaverStarted:(id)started;
- (void)_applicationWillEnterForeground:(id)foreground;
- (void)_applicationDidEnterBackground:(id)background;
- (void)_applicationWillAddDeactivationReason:(id)reason;
- (void)_applicationDidRemoveDeactivationReason:(id)reason;
- (BOOL)_deviceStillUnderFirstLock;
- (void)_setDataProtectionLockState:(int)state;
- (BOOL)_isUnderDataProtectionLockForState:(int)state;
- (void)_setSystemScreenState:(BOOL)state;
- (void)_setSystemLockState:(BOOL)state;
- (void)_updateIdleState;
- (void)_setIdleState:(BOOL)state;
- (void)_overrideAndDisableIdleTimer:(BOOL)timer;
- (void)_armIdleTimer;
- (void)_clearIdleTimer;
- (void)_alreadyLocked_clearIdleTimer;
- (void)_checkIdleTime:(id)time;
- (BOOL)_alreadyLocked_isSystemIdle;
- (void)_systemWillShutdown;
- (void)_addEarlyListener:(id)listener;
- (void)_removeEarlyListener:(id)listener;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)_checkRestoredFromBackup;
- (void)_restoreDidStart;
- (void)_restoreDidStop;
- (void)_setupStateChanged;
- (void)_registerForSetupNotifications;
- (void)_registerForRestoreNotifications;
- (void)_unregisterForRestoreNotifications;
- (void)_forceResumed;
- (void)_forceSuspended;
- (void)_handleLoginWindowNotification:(id)notification;
- (void)_registerForLoginWindowNotifications;
- (void)_unregisterForLoginWindowNotifications;
- (void)_receivedMemoryNotification;
@end

#endif /* IMSystemMonitor_h */