//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAAutoAssetSetOverview_h
#define MAAutoAssetSetOverview_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface MAAutoAssetSetOverview : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *clientDomainName;
@property (retain, nonatomic) NSString *assetSetIdentifier;
@property (retain, nonatomic) NSArray *configuredAssetEntries;
@property (retain, nonatomic) NSString *latestDownloadedAtomicInstance;
@property (retain, nonatomic) NSArray *downloadedAtomicInstances;
@property (readonly, retain, nonatomic) NSString *discoveredAtomicInstance;
@property (nonatomic) long long activeClientCount;
@property (nonatomic) long long activeMonitorCount;
@property (nonatomic) long long maximumClientCount;
@property (nonatomic) long long totalClientCount;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)overviewNewMaxColumnStrings;
+ (id)overviewPaddedString:(id)string paddingToLenghtOfString:(id)string paddingWith:(id)with paddingBefore:(BOOL)before;
+ (id)overviewPaddedHeader:(id)header;
+ (id)overviewPaddedBanner:(id)banner;

/* instance methods */
- (id)initWithDomainName:(id)name forAssetSetIdentifier:(id)identifier withConfiguredAssetEntries:(id)entries withLatestDownloadedAtomicInstance:(id)instance withDownloadedAtomicInstances:(id)instances withDiscoveredAtomicInstance:(id)instance withActiveClientCount:(long long)count withActiveMonitorCount:(long long)count withMaximumClientCount:(long long)count withTotalClientCount:(long long)count;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)description:(BOOL)description;
- (id)_entry_string_to_use:(long long)_entry_string_to_use;
- (id)summary;
- (void)overviewBuildMaxColumnStrings:(id)strings;
- (id)overviewPadded:(id)padded;
@end

#endif /* MAAutoAssetSetOverview_h */