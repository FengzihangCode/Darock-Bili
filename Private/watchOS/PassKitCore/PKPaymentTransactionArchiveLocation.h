//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentTransactionArchiveLocation_h
#define PKPaymentTransactionArchiveLocation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKCloudStoreZone.h"

@interface PKPaymentTransactionArchiveLocation : NSObject<NSSecureCoding, NSCopying>

@property (nonatomic) BOOL archived;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) PKCloudStoreZone *cloudStoreZone;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithType:(unsigned long long)type archived:(BOOL)archived cloudStoreZone:(id)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToArchiveLocation:(id)location;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isArchived;
@end

#endif /* PKPaymentTransactionArchiveLocation_h */