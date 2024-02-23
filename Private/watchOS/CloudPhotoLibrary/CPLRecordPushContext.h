//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLRecordPushContext_h
#define CPLRecordPushContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CPLRecordPushContext : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *uploadIdentifier;
@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) unsigned long long priority;

/* class methods */
+ (id)newEmptyPushContext;
+ (BOOL)supportsSecureCoding;
+ (id)pushContextsFromStoredUploadIdentifiers:(id)identifiers;
+ (id)pushContextsFromStoredUploadIdentifiersInCoder:(id)coder key:(id)key;
+ (id)newPushContextForChange:(id)change overStoredRecord:(id)record initialUpload:(BOOL)upload;
+ (long long)mergingFlags:(long long)flags previousFlags:(long long)flags changeType:(unsigned long long)type;
+ (unsigned long long)minimumPriorityForLocalConflictResolution;
+ (void)setMinimumPriorityForLocalConflictResolution:(unsigned long long)resolution;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithUploadIdentifier:(id)identifier flags:(long long)flags priority:(unsigned long long)priority;
- (id)copyContextWithUploadIdentifier:(id)identifier;
- (id)copyContextWithPriority:(unsigned long long)priority;
- (id)pushContextAddingUploadIdentifier;
- (id)pushContextMergingFlags:(long long)flags changeType:(unsigned long long)type uploadIdentifier:(id)identifier priority:(unsigned long long)priority;
@end

#endif /* CPLRecordPushContext_h */