//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHRIrregularRhythmNotificationsSettingMigrator_h
#define HDHRIrregularRhythmNotificationsSettingMigrator_h
@import Foundation;

#include "HDFeatureAvailabilityExtension-Protocol.h"
#include "HDFeatureAvailabilityExtensionObserver-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface HDHRIrregularRhythmNotificationsSettingMigrator : NSObject<HDFeatureAvailabilityExtensionObserver>

@property (readonly, nonatomic) NSObject<HDFeatureAvailabilityExtension> *v1FeatureAvailabilityManager;
@property (readonly, nonatomic) NSObject<HDFeatureAvailabilityExtension> *v2FeatureAvailabilityManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithV1FeatureAvailabilityManager:(id)manager v2FeatureAvailabilityManager:(id)manager;
- (void)_startObservingSettingChanges;
- (void)_syncSettingIfPossibleFromSource:(id)source;
- (void)_syncSettingIfPossibleFromManager:(id)manager toManager:(id)manager;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)settings;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)completion;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)available;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)availability;
@end

#endif /* HDHRIrregularRhythmNotificationsSettingMigrator_h */