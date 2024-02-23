//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAUSRichText_h
#define SAUSRichText_h
@import Foundation;

#include "AceObject.h"
#include "SAAceSerializable-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SAUSRichText : AceObject<SAAceSerializable>

@property (copy, nonatomic) NSString *contentAdvisory;
@property (copy, nonatomic) NSString *formattedTextDelimiter;
@property (copy, nonatomic) NSArray *markupList;
@property (copy, nonatomic) NSArray *moreGlyphs;
@property (copy, nonatomic) NSNumber *starRating;
@property (copy, nonatomic) NSNumber *textMaxlines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)richText;
+ (id)richTextWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAUSRichText_h */