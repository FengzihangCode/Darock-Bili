//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMetadataPredicate_Protocol_h
#define HDMetadataPredicate_Protocol_h
@import Foundation;

@protocol HDMetadataPredicate <NSObject>
/* class methods */
+ (id)predicateWithMetadataKey:(id)key allowedValues:(id)values;
+ (id)predicateWithMetadataKey:(id)key value:(id)value operatorType:(unsigned long long)type;
+ (id)predicateWithMetadataKey:(id)key exists:(BOOL)exists;
@end

#endif /* HDMetadataPredicate_Protocol_h */