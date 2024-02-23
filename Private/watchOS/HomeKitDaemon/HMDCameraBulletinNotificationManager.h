//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraBulletinNotificationManager_h
#define HMDCameraBulletinNotificationManager_h
@import Foundation;

#include "HMFObject.h"
#include "HMDAppleAccountManager.h"
#include "HMDBulletinNotificationRegistrationSource.h"
#include "HMDCameraSignificantEventFaceClassificationResolver.h"
#include "HMDDoorbellPressTracker.h"
#include "HMDHome.h"
#include "HMDNotificationConditionEvaluator.h"
#include "HMFLogging-Protocol.h"
#include "HMFMessageReceiver-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFMessageDispatcher, HMFTimer, NSArray, NSMutableDictionary, NSNotificationCenter, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraBulletinNotificationManager : HMFObject<HMFLogging, HMFMessageReceiver, HMFTimerDelegate>

@property (readonly, weak) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSMutableDictionary *observersByCameraIdentifier;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } lock;
@property (readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver;
@property (readonly) HMDAppleAccountManager *accountManager;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDDoorbellPressTracker *doorbellPressTracker;
@property (readonly) HMDNotificationConditionEvaluator *evaluator;
@property (readonly) HMDBulletinNotificationRegistrationSource *source;
@property BOOL currentPrimary;
@property (retain) HMFTimer *synchronizeWithPrimaryDebounceTimer;
@property (copy) id /* block */ synchronizeWithPrimaryDebounceTimerFactory;
@property (readonly) NSArray *cameraSignificantEventRegistrations;
@property (readonly) NSArray *cameraSignificantEventRegistrationsForCurrentDevice;
@property (readonly) NSArray *cameraReachabilityRegistrations;
@property (readonly) NSArray *cameraReachabilityRegistrationsForCurrentDevice;
@property (readonly) NSArray *cameraAccessModeRegistrations;
@property (readonly) NSArray *cameraAccessModeRegistrationsForCurrentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

/* class methods */
+ (id)_cameraSignificantEventRegistrationsForSource:(id)source context:(id)context;
+ (id)_cameraAccessModeRegistrationsForSource:(id)source context:(id)context;
+ (id)_cameraReachabilityRegistrationsForSource:(id)source context:(id)context;
+ (id)logCategory;

/* instance methods */
- (id)initWithHome:(id)home workQueue:(id)queue messageDispatcher:(id)dispatcher accountManager:(id)manager faceClassificationResolver:(id)resolver doorbellPressTracker:(id)tracker evaluator:(id)evaluator notificationCenter:(id)center;
- (void)configureWithDeviceIsResidentCapable:(BOOL)capable;
- (id)cameraUserNotificationSettingsForAccessory:(id)accessory;
- (void)updateNotificationRegistrationsWithSettings:(id)settings accessory:(id)accessory doorbellPressNotificationEnabled:(BOOL)enabled completion:(id /* block */)completion;
- (id)_deviceToNotifyForRegistration:(id)registration source:(id)source;
- (id)devicesToNotifyForCameraReachabilityForAccessory:(id)accessory;
- (id)devicesToNotifyForAccessModeChangeForAccessory:(id)accessory;
- (void)handleSignificantEvent:(id)event cameraProfile:(id)profile homePresence:(id)presence;
- (void)addCameraSignificantEventNotificationObserver:(id)observer cameraIdentifier:(id)identifier;
- (void)removeCameraSignificantEventNotificationObserver:(id)observer cameraIdentifier:(id)identifier;
- (id)conditionsFromPredicate:(id)predicate;
- (void)handleRemovedCameraAccessory:(id)accessory;
- (id)_cameraSignificantEventBulletinNotificationRegistrationsForCameraIdentifier:(id)identifier;
- (id)_cameraReachabilityBulletinNotificationRegistrationsForAccessory:(id)accessory;
- (id)_cameraAccessModeBulletinNotificationRegistrationsForAccessory:(id)accessory;
- (void)_handleSignificantEventWithUUID:(id)uuid reason:(unsigned long long)reason dateOfOccurrence:(id)occurrence confidenceLevel:(unsigned long long)level faceClassifications:(id)classifications cameraProfile:(id)profile homePresence:(id)presence;
- (void)_handleSignificantEvent:(id)event cameraProfile:(id)profile homePresence:(id)presence;
- (BOOL)_filterPassesForCameraSignificantEvent:(id)event registration:(id)registration;
- (void)_notifyPrimaryResidentOfSignificantEvent:(id)event withCameraProfileUUID:(id)uuid;
- (BOOL)_shouldNotifyForDoorbellPressForSignificantEvent:(id)event registration:(id)registration;
- (BOOL)_shouldNotifyForActivityForSignificantEvent:(id)event remoteRegistration:(id)registration;
- (void)_handleSignificantEvent:(id)event remoteRegistration:(id)registration;
- (void)_notifyDevice:(id)device aboutSignificantEvent:(id)event notificationReasons:(unsigned long long)reasons;
- (void)_handleCameraSignificantEventBulletinNotificationRegistration:(id)registration removed:(BOOL)removed;
- (void)_handleDeviceBecamePrimary;
- (void)_handleDeviceBecameNotPrimary;
- (id)_recentDoorbellPressIntervalForSignificantEventDate:(id)date;
- (void)_requestSynchronizeRegistrations;
- (void)_synchronizeLocalRegistrationsWithPrimaryResident;
- (void)_handlePrimaryResidentUpdateNotification:(id)notification;
- (void)_handleCurrentDeviceOrAccountUpdatedNotification:(id)notification;
- (void)_updateRegistrationsOnPrimaryWithEnabledRegistrations:(id)registrations disabledRegistrations:(id)registrations;
- (id)_currentHomeCameraAccessoryUUIDs;
- (id)_mkfLocalCameraSignificantEventRegistrationsWithManagedObjectContext:(id)context;
- (id)_mkfLocalCameraReachabilityRegistrationsWithManagedObjectContext:(id)context;
- (id)_mkfLocalCameraAccessModeRegistrationsWithManagedObjectContext:(id)context;
- (BOOL)_updateLocalStoreWithCameraSignificantEventBulletinRegistration:(id)registration existingMKFLocalRegistration:(id)registration enabled:(BOOL)enabled moc:(id)moc;
- (BOOL)_updateLocalStoreWithCameraReachabilityBulletinRegistration:(id)registration existingMKFLocalRegistration:(id)registration enabled:(BOOL)enabled moc:(id)moc;
- (BOOL)_updateLocalStoreWithCameraAccessModeBulletinRegistration:(id)registration existingMKFLocalRegistration:(id)registration enabled:(BOOL)enabled moc:(id)moc;
- (void)_notifyObserversOfSignificantEventUUID:(id)uuid cameraProfileUUID:(id)uuid notificationReasons:(unsigned long long)reasons;
- (void)_handleCameraSignificantEventNotificationMessage:(id)message;
- (id)_cameraProfileWithUUID:(id)uuid;
- (id)_homePresenceByPairingIdentity;
- (void)_handleCameraSignificantEventBulletinNotifyPrimaryResidentMessage:(id)message;
- (void)handlePrimaryResidentUpdateNotification:(id)notification;
- (void)handleCurrentDeviceOrAccountUpdatedNotification:(id)notification;
- (void)timerDidFire:(id)fire;
- (id)logIdentifier;
@end

#endif /* HMDCameraBulletinNotificationManager_h */