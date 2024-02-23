//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMLinkedAccount_h
#define EDAMLinkedAccount_h
@import Foundation;

#include "FATObject.h"

@class NSNumber, NSString;

@interface EDAMLinkedAccount : FATObject

@property (retain, nonatomic) NSNumber *inAccountUserId;
@property (retain, nonatomic) NSString *shardId;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSString *noteStoreUrl;
@property (retain, nonatomic) NSString *webApiUrlPrefix;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMLinkedAccount_h */