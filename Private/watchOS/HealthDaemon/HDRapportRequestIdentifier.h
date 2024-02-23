//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDRapportRequestIdentifier_h
#define HDRapportRequestIdentifier_h
@import Foundation;

@class NSString;

@interface HDRapportRequestIdentifier : NSObject

@property (readonly, nonatomic) long long schemaIdentifier;
@property (readonly, copy, nonatomic) NSString *name;

/* instance methods */
- (id)initWithSchemaIdentifier:(long long)identifier name:(id)name;
- (id)description;
@end

#endif /* HDRapportRequestIdentifier_h */