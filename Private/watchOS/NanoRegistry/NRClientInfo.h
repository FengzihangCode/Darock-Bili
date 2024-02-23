//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 920.3.0.0.0
//
#ifndef NRClientInfo_h
#define NRClientInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface NRClientInfo : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *processName;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* NRClientInfo_h */