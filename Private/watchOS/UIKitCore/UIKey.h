//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKey_h
#define UIKey_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface UIKey : NSObject<NSCopying, NSCoding>

@property (retain, nonatomic) NSString *unmodifiedInput;
@property (retain, nonatomic) NSString *modifiedInput;
@property (nonatomic) long long modifierFlags;
@property (nonatomic) long long keyCode;
@property (readonly, nonatomic) NSString *characters;
@property (readonly, nonatomic) NSString *charactersIgnoringModifiers;

/* instance methods */
- (id)initWithKeyboardEvent:(id)event;
- (id)_initWithKey:(id)key;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (long long)modiferFlagsWithoutCapsLockOrNumberPad;
- (BOOL)modifiersEqual:(long long)equal;
- (BOOL)equalsKeyCode:(long long)code modifiers:(long long)modifiers;
- (BOOL)unmodifiedKeyCodeEquals:(long long)equals;
- (void)_setModifierFlags:(long long)flags;
- (void)_setKeyCode:(long long)code;
- (void)_setUnmodifiedInput:(id)input;
- (void)_setModifiedInput:(id)input;
@end

#endif /* UIKey_h */