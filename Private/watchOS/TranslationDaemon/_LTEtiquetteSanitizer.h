//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTEtiquetteSanitizer_h
#define _LTEtiquetteSanitizer_h
@import Foundation;

@class NSDictionary, NSLocale;

@interface _LTEtiquetteSanitizer : NSObject {
  /* instance variables */
  NSDictionary *_replacementTree;
  NSLocale *_locale;
}

/* instance methods */
- (id)initWithReplacementTokenDictionary:(id)dictionary language:(id)language;
- (id)initWithModelURL:(id)url language:(id)language;
- (id)treeForReplacementTokens:(id)tokens;
- (id)matchesForString:(id)string;
- (id)replacementStringForString:(id)string forToken:(id)token;
- (id)stringByReplacingMatches:(id)matches inString:(id)string;
- (id)sanitizedStringForString:(id)string;
@end

#endif /* _LTEtiquetteSanitizer_h */