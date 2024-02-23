//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef SFHMACOperation_h
#define SFHMACOperation_h
@import Foundation;

#include "SFMessageAuthenticationCodeOperation.h"
#include "SFDigestOperation-Protocol.h"

@interface SFHMACOperation : SFMessageAuthenticationCodeOperation {
  /* instance variables */
  id _hmacOperationInternal;
}

@property (copy, nonatomic) NSObject<SFDigestOperation> *digestOperation;

/* instance methods */
- (id)init;
- (id)initWithDigestOperation:(id)operation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SFHMACOperation_h */