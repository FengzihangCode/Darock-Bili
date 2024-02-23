//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSBuildVersion_h
#define BSBuildVersion_h
@import Foundation;

@class NSString;

@interface BSBuildVersion : NSObject

@property (readonly, nonatomic) long long majorBuildNumber;
@property (readonly, copy, nonatomic) NSString *majorBuildLetterString;
@property (readonly, nonatomic) long long minorBuildNumber;
@property (readonly, copy, nonatomic) NSString *minorBuildLetterString;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;

/* class methods */
+ (id)fromString:(id)string;

/* instance methods */
- (id)init;
- (id)initWithString:(id)string;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)isSameAs:(id)as;
- (BOOL)isSameAs:(id)as withPrecision:(long long)precision;
- (BOOL)isBefore:(id)before;
- (BOOL)isBefore:(id)before withPrecision:(long long)precision;
- (BOOL)isAfter:(id)after;
- (BOOL)isAfter:(id)after withPrecision:(long long)precision;
- (long long)_compareAgainstBuildVersion:(id)version withPrecision:(long long)precision;
- (id)description;
@end

#endif /* BSBuildVersion_h */