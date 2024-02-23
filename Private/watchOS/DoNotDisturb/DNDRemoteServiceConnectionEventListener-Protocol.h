//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDRemoteServiceConnectionEventListener_Protocol_h
#define DNDRemoteServiceConnectionEventListener_Protocol_h
@import Foundation;

@protocol DNDRemoteServiceConnectionEventListener <NSObject>

@property (readonly, copy, nonatomic) NSString *clientIdentifier;

@optional
/* instance methods */
- (void)remoteService:(id)service didReceiveDoNotDisturbStateUpdate:(id)update;
- (void)remoteService:(id)service didChangeActiveModeAssertion:(id)assertion invalidation:(id)invalidation;
- (void)remoteService:(id)service didReceiveUpdatedBehaviorSettings:(id)settings;
- (void)remoteService:(id)service didReceiveUpdatedScheduleSettings:(id)settings;
- (void)remoteService:(id)service didReceiveUpdatedPairSyncState:(unsigned long long)state;
- (void)remoteService:(id)service didReceiveUpdatedPhoneCallBypassSettings:(id)settings;
- (void)remoteService:(id)service didReceiveUpdatedPreventAutoReplySetting:(BOOL)setting;
- (void)remoteService:(id)service didReceiveUpdatedActiveModeAssertion:(id)assertion stateUpdate:(id)update;
- (void)remoteService:(id)service didReceiveUpdatedAvailableModes:(id)modes;
- (void)remoteService:(id)service didReceiveUpdatedAvailableModeIdentifiers:(id)identifiers;
- (void)remoteService:(id)service didReceiveUpdatedModes:(id)modes;
- (void)remoteService:(id)service didReceiveUpdatedModeIdentifiers:(id)identifiers;
- (void)remoteService:(id)service didReceiveAppConfigurationContextUpdateForModeIdentifier:(id)identifier;
- (void)remoteService:(id)service didReceiveUpdatedMeDeviceState:(id)state;
@end

#endif /* DNDRemoteServiceConnectionEventListener_Protocol_h */