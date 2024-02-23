//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMChangeObject_h
#define REMChangeObject_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "REMChangeCoalesceable-Protocol.h"
#include "REMChangeTombstone.h"
#include "REMChangeTransaction.h"
#include "REMObjectID.h"

@class NSSet;

@interface REMChangeObject : NSObject<NSCopying, NSSecureCoding, REMChangeCoalesceable>

@property (readonly, weak, nonatomic) REMChangeTransaction *transaction;
@property (readonly, nonatomic) long long changeID;
@property (readonly, nonatomic) REMObjectID *changedObjectID;
@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) REMChangeTombstone *tombstone;
@property (readonly, nonatomic) NSSet *updatedProperties;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isCoalesced;
- (id)coalescedChanges;
- (id)copyForCoalescing;
@end

#endif /* REMChangeObject_h */