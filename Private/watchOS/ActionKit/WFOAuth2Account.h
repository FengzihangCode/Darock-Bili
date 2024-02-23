//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFOAuth2Account_h
#define WFOAuth2Account_h
@import Foundation;

#include "WFAccount.h"
#include "WFOAuth2Credential.h"

@interface WFOAuth2Account : WFAccount

@property (copy, nonatomic) WFOAuth2Credential *credential;

/* class methods */
+ (id)migrate:(id)migrate;
+ (id)sessionManager;
+ (id)clientID;
+ (id)clientSecret;
+ (id)redirectURI;
+ (id)scopes;
+ (id)responseType;
+ (id)accountWithCredential:(id)credential;

/* instance methods */
- (BOOL)isValid;
- (void)refreshWithCompletionHandler:(id /* block */)handler;
@end

#endif /* WFOAuth2Account_h */