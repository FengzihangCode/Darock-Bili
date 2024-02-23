//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REIntentProperties_Protocol_h
#define REIntentProperties_Protocol_h
@import Foundation;

@protocol REIntentProperties <REExportedInterface>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *launchId;
@property (readonly, nonatomic) NSString *_nanoLaunchId;
@property (readonly, nonatomic) NSString *_categoryVerb;
@property (readonly, nonatomic) NSString *_className;
@property (readonly, nonatomic) NSString *typeName;
@property (readonly, nonatomic) BOOL _supportsBackgroundExecution;
@property (readonly, nonatomic) NSDictionary *_validParameterCombinations;

@end

#endif /* REIntentProperties_Protocol_h */