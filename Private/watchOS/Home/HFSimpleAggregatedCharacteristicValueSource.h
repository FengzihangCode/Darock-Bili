//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFSimpleAggregatedCharacteristicValueSource_h
#define HFSimpleAggregatedCharacteristicValueSource_h
@import Foundation;

#include "HFAggregatedCharacteristicValueSource-Protocol.h"
#include "HFCharacteristicValueSource-Protocol.h"
#include "HFLightProfileAggregatedValueSource-Protocol.h"
#include "HFServiceDescriptor.h"

@class NSDictionary, NSSet, NSString;

@interface HFSimpleAggregatedCharacteristicValueSource : NSObject<HFLightProfileAggregatedValueSource, HFAggregatedCharacteristicValueSource>

@property (readonly, nonatomic) NSSet *lightProfiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *characteristicsByType;
@property (readonly, copy, nonatomic) NSSet *allServices;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;
@property (readonly, copy, nonatomic) NSSet *characteristics;
@property (readonly, nonatomic) HFServiceDescriptor *primaryServiceDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)na_identity;

/* instance methods */
- (BOOL)isNaturalLightingSupported;
- (BOOL)isNaturalLightingEnabled;
- (id)writeNaturalLightEnabledState:(BOOL)state;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)brightness completion:(id /* block */)completion;
- (id)init;
- (id)initWithValueSource:(id)source services:(id)services primaryServiceDescriptor:(id)descriptor;
- (id)initWithValueSource:(id)source characteristics:(id)characteristics primaryServiceDescriptor:(id)descriptor;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copyWithValueSource:(id)source;
- (id)readValuesForServiceStateRecipe:(id)recipe;
- (id)readValuesForCharacteristicTypes:(id)types;
- (id)writeValuesForCharacteristicRecipes:(id)recipes;
- (id)writeValuesForCharacteristicTypes:(id)types;
- (id)metadataForCharacteristicType:(id)type;
- (id)allCharacteristicsForCharacteristicType:(id)type;
- (void)beginTransactionWithReason:(id)reason readPolicy:(id)policy logger:(id)logger;
- (void)commitTransactionWithReason:(id)reason;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HFSimpleAggregatedCharacteristicValueSource_h */