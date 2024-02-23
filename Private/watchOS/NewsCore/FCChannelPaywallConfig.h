//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCChannelPaywallConfig_h
#define FCChannelPaywallConfig_h
@import Foundation;

@class NSString;

@interface FCChannelPaywallConfig : NSObject

@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) BOOL filterALaCartePaidArticlesForPaidBundleSubscribers;
@property (readonly, nonatomic) unsigned long long articleSoftPaywallPosition;
@property (readonly, nonatomic) unsigned long long articleSoftPaywallPositionForPaidBundleSubscribers;

/* instance methods */
- (id)initWithChannelID:(id)id configDictionary:(id)dictionary;
@end

#endif /* FCChannelPaywallConfig_h */