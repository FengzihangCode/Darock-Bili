//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBImage_h
#define BBImage_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface BBImage : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundlePath;

/* class methods */
+ (id)imageWithData:(id)data;
+ (id)imageWithName:(id)name inBundle:(id)bundle;
+ (id)imageWithName:(id)name inBundlePath:(id)path;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithData:(id)data path:(id)path name:(id)name bundlePath:(id)path;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)replacementObjectForCoder:(id)coder;
- (id)awakeAfterUsingCoder:(id)coder;
@end

#endif /* BBImage_h */