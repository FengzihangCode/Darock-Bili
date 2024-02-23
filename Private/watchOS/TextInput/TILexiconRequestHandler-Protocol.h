//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TILexiconRequestHandler_Protocol_h
#define TILexiconRequestHandler_Protocol_h
@import Foundation;

@protocol TILexiconRequestHandler 
/* instance methods */
- (void)requestLexiconFromBundlePath:(id)path completionHandler:(id /* block */)handler;
- (void)requestLexiconForRecentInputIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)requestRemovalOfLexiconForRecentInputIdentifier:(id)identifier;
- (void)addEntryString:(id)string forRecentInputIdentifier:(id)identifier;
@end

#endif /* TILexiconRequestHandler_Protocol_h */