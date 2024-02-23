//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassField_h
#define PKPassField_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKPassFieldImage.h"

@class NSDictionary, NSSet, NSString;

@interface PKPassField : NSObject<NSSecureCoding, NSCopying>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) PKPassFieldImage *labelImage;
@property (readonly, weak) NSString *value;
@property (retain, nonatomic) PKPassFieldImage *valueImage;
@property (copy, nonatomic) id unformattedValue;
@property (retain, nonatomic) PKPassFieldImage *accessoryImage;
@property (copy, nonatomic) NSString *link;
@property (nonatomic) unsigned long long row;
@property (copy, nonatomic) NSString *changeMessage;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (copy, nonatomic) NSDictionary *semantics;
@property (nonatomic) double amount;
@property (nonatomic) double threshold;
@property (nonatomic) long long cellStyle;
@property (nonatomic) long long foreignReferenceType;
@property (copy, nonatomic) NSSet *foreignReferenceIdentifiers;
@property (nonatomic) long long unitType;
@property (readonly, nonatomic) BOOL isDrillInField;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)flushCachedValue;
- (id)asDictionary;
- (id)asMutableDictionary;
- (id)description;
@end

#endif /* PKPassField_h */