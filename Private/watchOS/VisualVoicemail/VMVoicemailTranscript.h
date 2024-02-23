//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 780.0.0.0.0
//
#ifndef VMVoicemailTranscript_h
#define VMVoicemailTranscript_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface VMVoicemailTranscript : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *transcriptionString;
@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) unsigned long long confidenceRating;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithTranscription:(id)transcription;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
- (id)debugDescription;
- (id)archivedData;
@end

#endif /* VMVoicemailTranscript_h */