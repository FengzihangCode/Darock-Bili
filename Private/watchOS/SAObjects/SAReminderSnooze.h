//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAReminderSnooze_h
#define SAReminderSnooze_h
@import Foundation;

#include "SABaseClientBoundCommand.h"
#include "SAReminderDateTimeTriggerOffset.h"

@class NSArray;

@interface SAReminderSnooze : SABaseClientBoundCommand

@property (retain, nonatomic) SAReminderDateTimeTriggerOffset *offset;
@property (copy, nonatomic) NSArray *reminderIdentifierList;

/* class methods */
+ (id)snooze;
+ (id)snoozeWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SAReminderSnooze_h */