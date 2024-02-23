//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 139.203.0.0.0
//
#ifndef RTIKeyedUnarchiver_h
#define RTIKeyedUnarchiver_h
@import Foundation;

#include "NSKeyedUnarchiver.h"
#include "RTICoding-Protocol.h"

@class NSString;

@interface RTIKeyedUnarchiver : NSKeyedUnarchiver<RTICoding>

@property (nonatomic) unsigned long long rtiVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

#endif /* RTIKeyedUnarchiver_h */