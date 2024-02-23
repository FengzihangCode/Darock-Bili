//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFCoreAnalyticsDeviceContextPayloadMutating_Protocol_h
#define AFCoreAnalyticsDeviceContextPayloadMutating_Protocol_h
@import Foundation;

@protocol AFCoreAnalyticsDeviceContextPayloadMutating <NSObject>
/* instance methods */
- (void)setNearbyProductType:(id)type;
- (void)setProximity:(id)proximity;
- (void)setAlarmFiring:(id)firing;
- (void)setTimerFiring:(id)firing;
- (void)setPlaybackState:(id)state;
- (void)setPlaybackRecency:(id)recency;
- (void)setHomeAnnouncementState:(id)state;
- (void)setHomeAnnouncementRecency:(id)recency;
- (void)setNearbyDevicesRequestIdentifier:(id)identifier;
- (void)setTargetedResult:(id)result;
- (void)setContextIdentifier:(id)identifier;
@end

#endif /* AFCoreAnalyticsDeviceContextPayloadMutating_Protocol_h */