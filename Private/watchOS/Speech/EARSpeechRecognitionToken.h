//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.15.1.0.0
//
#ifndef EARSpeechRecognitionToken_h
#define EARSpeechRecognitionToken_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface EARSpeechRecognitionToken : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *tokenName;
@property (readonly, nonatomic) double start;
@property (readonly, nonatomic) double end;
@property (readonly, nonatomic) double silenceStart;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) BOOL hasSpaceAfter;
@property (readonly, nonatomic) BOOL hasSpaceBefore;
@property (readonly, nonatomic) NSString *phoneSequence;
@property (readonly, nonatomic) NSString *ipaPhoneSequence;
@property (readonly, nonatomic) BOOL appendedAutoPunctuation;
@property (readonly, nonatomic) BOOL prependedAutoPunctuation;
@property (readonly, nonatomic) BOOL isModifiedByAutoPunctuation;
@property (readonly, nonatomic) double graphCost;
@property (readonly, nonatomic) double acousticCost;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithToken:(id)token;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* EARSpeechRecognitionToken_h */