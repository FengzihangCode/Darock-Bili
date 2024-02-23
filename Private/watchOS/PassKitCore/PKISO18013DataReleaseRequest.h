//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKISO18013DataReleaseRequest_h
#define PKISO18013DataReleaseRequest_h
@import Foundation;

#include "PKTransactionReleasedData.h"

@class NSData, NSNumber, NSString, NSURL;

@interface PKISO18013DataReleaseRequest : NSObject

@property (retain, nonatomic) PKTransactionReleasedData *dataElements;
@property (retain, nonatomic) NSString *rpIdentifier;
@property (retain, nonatomic) NSString *organizationName;
@property (retain, nonatomic) NSString *organizationUnit;
@property (retain, nonatomic) NSData *iconData;
@property (retain, nonatomic) NSURL *iconURL;
@property (retain, nonatomic) NSNumber *industryCode;
@property (retain, nonatomic) NSData *authenticationACL;
@property (retain, nonatomic) NSData *externalizedAuthenticationContext;

/* instance methods */
@end

#endif /* PKISO18013DataReleaseRequest_h */