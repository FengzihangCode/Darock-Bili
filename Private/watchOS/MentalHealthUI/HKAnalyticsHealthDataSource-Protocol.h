//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKAnalyticsHealthDataSource_Protocol_h
#define HKAnalyticsHealthDataSource_Protocol_h
@import Foundation;

@protocol HKAnalyticsHealthDataSource <NSObject>
/* instance methods */
- (id)biologicalSexWithError:(id *)error;
- (id)ageWithCurrentDate:(id)date error:(id *)error;
- (id)featureStatusProviderForIdentifier:(id)identifier;
- (id)featureAvailabilityProviderForIdentifier:(id)identifier;
- (id)isImproveHealthRecordsAllowedWithError:(id *)error;
@end

#endif /* HKAnalyticsHealthDataSource_Protocol_h */