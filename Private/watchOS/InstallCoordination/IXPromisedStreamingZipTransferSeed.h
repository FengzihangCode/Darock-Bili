//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef IXPromisedStreamingZipTransferSeed_h
#define IXPromisedStreamingZipTransferSeed_h
@import Foundation;

#include "IXOwnedDataPromiseSeed.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface IXPromisedStreamingZipTransferSeed : IXOwnedDataPromiseSeed<NSSecureCoding, NSCopying>

@property (nonatomic) unsigned long long archiveBytesConsumed;
@property (nonatomic) unsigned long long archiveSizeBytes;
@property (copy, nonatomic) NSDictionary *szOptions;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (Class)clientPromiseClass;
@end

#endif /* IXPromisedStreamingZipTransferSeed_h */