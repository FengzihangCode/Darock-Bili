//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AADeviceListRequest_h
#define AADeviceListRequest_h
@import Foundation;

#include "AARequest.h"

@class ACAccount;

@interface AADeviceListRequest : AARequest {
  /* instance variables */
  ACAccount *_account;
}

/* class methods */
+ (Class)responseClass;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)urlString;
- (id)urlRequest;
@end

#endif /* AADeviceListRequest_h */