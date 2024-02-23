//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICSuzeLeaseRequest_h
#define ICSuzeLeaseRequest_h
@import Foundation;

#include "ICStoreRequestContext.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface ICSuzeLeaseRequest : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSData *clientData;
@property (readonly, copy, nonatomic) NSString *leaseID;
@property (readonly, nonatomic) long long mediaType;
@property (nonatomic) long long qualityOfService;
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext;
@property (readonly, nonatomic) long long requestType;

/* instance methods */
- (id)initWithRequestContext:(id)context requestType:(long long)type leaseID:(id)id mediaType:(long long)type clientData:(id)data;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)performWithResponseHandler:(id /* block */)handler;
@end

#endif /* ICSuzeLeaseRequest_h */