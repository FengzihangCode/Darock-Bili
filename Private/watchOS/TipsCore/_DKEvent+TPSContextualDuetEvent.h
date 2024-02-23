//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef _DKEvent_TPSContextualDuetEvent_h
#define _DKEvent_TPSContextualDuetEvent_h
@import Foundation;

#include "TPSContextualEvent.h"
#include "TPSContextualDuetEventMeta.h"
#include "TPSContextualDuetEventSource.h"
#include "TPSContextualDuetEventValue.h"

@class NSArray, NSString;

@interface _DKEvent (TPSContextualDuetEvent)
/* class methods */
+ (id)_eventWithTipIdentifier:(id)identifier bundleIdentifier:(id)identifier displayType:(unsigned long long)type eligibleContext:(id)context context:(id)context flags:(unsigned long long)flags state:(long long)state reason:(long long)reason event:(id)event date:(id)date;
+ (id)tps_resolvedContextualDuetEventKeyPath:(id)path forStream:(id)stream;
+ (id)_tps_resolvedContextualDuetEventMetadataKeyPathComponents:(id)components forStream:(id)stream;

/* instance methods */
- (id)tps_contentIdentifier;
- (id)tps_bundleIdentifier;
- (unsigned long long)tps_displayType;
- (long long)tps_state;
- (long long)tps_ineligibleReason;
- (id)tps_eligibleContext;
- (id)tps_context;
- (unsigned long long)tps_flags;
- (id)tps_analyticsEvent;
@end

#endif /* _DKEvent_TPSContextualDuetEvent_h */