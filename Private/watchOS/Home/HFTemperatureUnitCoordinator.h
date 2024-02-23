//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFTemperatureUnitCoordinator_h
#define HFTemperatureUnitCoordinator_h
@import Foundation;

@class NSHashTable;

@interface HFTemperatureUnitCoordinator : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) BOOL isCelsius;

/* class methods */
+ (id)sharedCoordinator;

/* instance methods */
- (id)init;
- (void)registerObserver:(id)observer;
- (void)unregisterObserver:(id)observer;
- (void)_updateIsCelsiusNotifyingObservers:(BOOL)observers;
- (void)_temperatureUnitDidChange;
@end

#endif /* HFTemperatureUnitCoordinator_h */