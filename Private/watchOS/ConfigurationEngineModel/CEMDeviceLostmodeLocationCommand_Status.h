//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMDeviceLostmodeLocationCommand_Status_h
#define CEMDeviceLostmodeLocationCommand_Status_h
@import Foundation;

#include "CEMPayloadBase.h"

@class NSNumber, NSString;

@interface CEMDeviceLostmodeLocationCommand_Status : CEMPayloadBase

@property (copy, nonatomic) NSNumber *statusLatitude;
@property (copy, nonatomic) NSNumber *statusLongitude;
@property (copy, nonatomic) NSNumber *statusHorizontalAccuracy;
@property (copy, nonatomic) NSNumber *statusVerticalAccuracy;
@property (copy, nonatomic) NSNumber *statusAltitude;
@property (copy, nonatomic) NSNumber *statusSpeed;
@property (copy, nonatomic) NSNumber *statusCourse;
@property (copy, nonatomic) NSString *statusTimestamp;

/* class methods */
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithLatitude:(id)latitude withLongitude:(id)longitude withHorizontalAccuracy:(id)accuracy withVerticalAccuracy:(id)accuracy withAltitude:(id)altitude withSpeed:(id)speed withCourse:(id)course withTimestamp:(id)timestamp;
+ (id)buildRequiredOnlyWithLatitude:(id)latitude withLongitude:(id)longitude withHorizontalAccuracy:(id)accuracy withVerticalAccuracy:(id)accuracy withAltitude:(id)altitude withSpeed:(id)speed withCourse:(id)course withTimestamp:(id)timestamp;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayload;
@end

#endif /* CEMDeviceLostmodeLocationCommand_Status_h */