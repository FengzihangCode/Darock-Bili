//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaNegotiationBlobBandwidthSettings_h
#define VCMediaNegotiationBlobBandwidthSettings_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface VCMediaNegotiationBlobBandwidthSettings : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 configurationExtension; } _has;
}

@property (nonatomic) int configuration;
@property (nonatomic) unsigned int maxBandwidth;
@property (nonatomic) BOOL hasConfigurationExtension;
@property (nonatomic) int configurationExtension;

/* class methods */
+ (int)bandwidthConfigurationWithOperatingMode:(int)mode connectionType:(int)type;

/* instance methods */
- (id)newBandwidthConfigurations;
- (id)configurationAsString:(int)string;
- (int)StringAsConfiguration:(id)configuration;
- (id)configurationExtensionAsString:(int)string;
- (int)StringAsConfigurationExtension:(id)extension;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* VCMediaNegotiationBlobBandwidthSettings_h */