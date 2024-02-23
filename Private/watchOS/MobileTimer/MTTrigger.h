//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTTrigger_h
#define MTTrigger_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "NAEquatable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface MTTrigger : NSObject<BSDescriptionProviding, NAEquatable, NSCopying, NSSecureCoding>

@property (nonatomic) unsigned long long triggerType;
@property (copy, nonatomic) NSDate *triggerDate;
@property (readonly, nonatomic) BOOL isPastOverrideEvent;
@property (readonly, nonatomic) BOOL isForSnooze;
@property (readonly, nonatomic) BOOL isForGoToBed;
@property (readonly, nonatomic) BOOL isForAlert;
@property (readonly, nonatomic) BOOL isForNotification;
@property (readonly, nonatomic) BOOL isScheduled;
@property (readonly, nonatomic) BOOL isEvent;
@property (readonly, nonatomic) BOOL isBedtimeRelated;
@property (readonly, nonatomic) BOOL isWakeUpRelated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)triggerWithDate:(id)date triggerType:(unsigned long long)type;
+ (id)triggerWithDate:(id)date triggerType:(unsigned long long)type isPastOverrideEvent:(BOOL)event;
+ (BOOL)supportsSecureCoding;
+ (id)_stringForType:(unsigned long long)type;

/* instance methods */
- (id)initWithDate:(id)date type:(unsigned long long)type isPastOverrideEvent:(BOOL)event;
- (id)initWithDate:(id)date type:(unsigned long long)type;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToTrigger:(id)trigger;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (long long)compare:(id)compare;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* MTTrigger_h */