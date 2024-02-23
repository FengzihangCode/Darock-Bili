//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSVRepairApplicationRequest_h
#define SSVRepairApplicationRequest_h
@import Foundation;

#include "SSRequest.h"
#include "SSXPCCoding-Protocol.h"

@class NSNumber, NSString;

@interface SSVRepairApplicationRequest : SSRequest<SSXPCCoding>

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSNumber *accountDSID;
@property (readonly, nonatomic) long long claimStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBundleID:(id)id accountIdentifier:(id)identifier claimStyle:(long long)style;
- (void)startWithResponseBlock:(id /* block */)block;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)xpcencoding;
@end

#endif /* SSVRepairApplicationRequest_h */