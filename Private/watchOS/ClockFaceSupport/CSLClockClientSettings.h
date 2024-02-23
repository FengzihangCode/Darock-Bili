//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CSLClockClientSettings_h
#define CSLClockClientSettings_h
@import Foundation;

#include "BSSettingDescriptionProvider-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class BSMutableSettings, NSArray, NSDictionary, NSString;

@interface CSLClockClientSettings : NSObject<BSSettingDescriptionProvider, NSCoding, NSSecureCoding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) BSMutableSettings *settings;
@property (readonly, nonatomic) BOOL currentFaceAnalog;
@property (readonly, copy, nonatomic) NSString *currentFaceDescription;
@property (readonly, copy, nonatomic) NSString *currentFaceClass;
@property (readonly, copy, nonatomic) NSString *siriContextFaceIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *powerLogDescription;
@property (readonly, copy, nonatomic) NSString *currentFaceReportingValue;
@property (readonly, copy, nonatomic) NSArray *currentComplicationReportingValues;
@property (readonly, nonatomic) BOOL editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (BOOL)isCurrentFaceAnalog;
- (BOOL)isEditing;
- (id)settings:(id)settings keyDescriptionForSetting:(unsigned long long)setting;
- (id)settings:(id)settings valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* CSLClockClientSettings_h */