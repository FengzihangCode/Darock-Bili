//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGEntityExtractionInfo_h
#define SGEntityExtractionInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface SGEntityExtractionInfo : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSString *spotlightIdentifier;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) struct SGUnixTimestamp_ { double x0; } creationTimestamp;
@property (readonly, nonatomic) long long extractionType;
@property (readonly, nonatomic) NSString *contactIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithSpotlightIdentifier:(id)identifier source:(id)source entityType:(long long)type creationTimestamp:(struct SGUnixTimestamp_ { double x0; })timestamp extractionType:(long long)type contactIdentifier:(id)identifier;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* SGEntityExtractionInfo_h */