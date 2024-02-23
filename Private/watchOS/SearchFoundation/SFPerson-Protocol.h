//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFPerson_Protocol_h
#define SFPerson_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFPerson-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFPerson <NSObject>

@property (copy, nonatomic) NSString *personIdentifier;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *phoneNumbers;
@property (copy, nonatomic) NSArray *emailAddresses;
@property (copy, nonatomic) NSString *photosIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFPerson_Protocol_h */