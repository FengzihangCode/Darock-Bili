//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef DeskClockAlertProviderSunspotManager_h
#define DeskClockAlertProviderSunspotManager_h
@import Foundation;

@class NSDate;
@protocol DeskClockAlertProviderSunspotManagerDelegate;

@interface DeskClockAlertProviderSunspotManager : NSObject

@property (nonatomic) long long sunspotBatteryChargingType;
@property (weak, nonatomic) NSObject<DeskClockAlertProviderSunspotManagerDelegate> *delegate;
@property (readonly, nonatomic) NSDate *predictedEndOfChargeDate;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)handleChargeStateUpdate;
- (unsigned long long)currentChargeLimit;
- (void)refreshSunsportChargingStateAndNotifyDelegate;
- (void)_retrievePowerUIState;
- (void)enableBatteryFullCharge;
@end

#endif /* DeskClockAlertProviderSunspotManager_h */