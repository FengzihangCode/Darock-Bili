//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIOpenURLContext_h
#define UIOpenURLContext_h
@import Foundation;

#include "UISceneOpenURLOptions.h"

@class NSDictionary, NSURL;

@interface UIOpenURLContext : NSObject

@property (readonly, copy, nonatomic) NSDictionary *optionsDictionary;
@property (readonly, copy, @dynamic, nonatomic) NSDictionary *URLOptionsDictionary;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) UISceneOpenURLOptions *options;

/* instance methods */
- (id)initWithURL:(id)url options:(id)options;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* UIOpenURLContext_h */