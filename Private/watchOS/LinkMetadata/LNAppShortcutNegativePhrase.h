//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNAppShortcutNegativePhrase_h
#define LNAppShortcutNegativePhrase_h
@import Foundation;

#include "LNStaticDeferredLocalizedString.h"
#include "NSSecureCoding-Protocol.h"

@interface LNAppShortcutNegativePhrase : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *phrase;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPhrase:(id)phrase;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* LNAppShortcutNegativePhrase_h */