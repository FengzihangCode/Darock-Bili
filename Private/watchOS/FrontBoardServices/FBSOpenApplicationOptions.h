//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSOpenApplicationOptions_h
#define FBSOpenApplicationOptions_h
@import Foundation;

#include "BSXPCCoding-Protocol.h"
#include "BSXPCSecureCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface FBSOpenApplicationOptions : NSObject<BSXPCCoding, BSXPCSecureCoding, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_payload;
}

@property (copy, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)optionsWithDictionary:(id)dictionary;
+ (BOOL)supportsBSXPCSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
- (id)initWithBSXPCCoder:(id)bsxpccoder;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (void)_sanitizeAndValidatePayload;
- (void)_updateOption:(id)option forKey:(id)key;
@end

#endif /* FBSOpenApplicationOptions_h */