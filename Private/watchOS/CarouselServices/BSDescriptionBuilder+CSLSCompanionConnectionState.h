//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef BSDescriptionBuilder_CSLSCompanionConnectionState_h
#define BSDescriptionBuilder_CSLSCompanionConnectionState_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface BSDescriptionBuilder (CSLSCompanionConnectionState)
/* instance methods */
- (void)appendTelephonyConnectionState:(id)state;
- (void)appendWifiConnectionState:(id)state;
- (void)appendRadioConnectionState:(id)state;
- (void)appendCompanionConnectionState:(id)state;
@end

#endif /* BSDescriptionBuilder_CSLSCompanionConnectionState_h */