//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIUserNotificationCategory_h
#define UIUserNotificationCategory_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface UIUserNotificationCategory : NSObject<NSCopying, NSMutableCopying, NSSecureCoding>

@property (copy, nonatomic) NSDictionary *actionsByContext;
@property (copy, nonatomic) NSString *identifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier actionsByContext:(id)context;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)actions;
- (id)actionsForContext:(unsigned long long)context;
- (id)validatedCategory;
- (unsigned long long)_maximumActionsForContext:(unsigned long long)context;
@end

#endif /* UIUserNotificationCategory_h */