//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef NSURL_SSExtensions_h
#define NSURL_SSExtensions_h
@import Foundation;

@interface NSURL (SSExtensions)
/* class methods */
+ (id)_ss_copyDictionaryForQueryString:(id)string unescapedValues:(BOOL)values;
+ (id)_ss_unescapedStringForString:(id)string;

/* instance methods */
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (BOOL)isStoreServicesURL;
- (id)_ss_URLByRemovingQueryParameter:(id)parameter;
- (BOOL)_ss_hasQueryParameter:(id)parameter;
- (id)_ss_valueForQueryParameter:(id)parameter;
@end

#endif /* NSURL_SSExtensions_h */