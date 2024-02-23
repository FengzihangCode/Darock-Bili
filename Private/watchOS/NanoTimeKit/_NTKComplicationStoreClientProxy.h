//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef _NTKComplicationStoreClientProxy_h
#define _NTKComplicationStoreClientProxy_h
@import Foundation;

#include "NTKComplicationStoreClient-Protocol.h"

@interface _NTKComplicationStoreClientProxy : NSObject {
  /* instance variables */
  NSObject<NTKComplicationStoreClient> *_proxy;
}

/* instance methods */
- (id)initWithWeakProxy:(id)proxy;
- (void)loadFullCollectionWithLocalizableSampleTemplates:(id)templates complicationDescriptors:(id)descriptors seqId:(id)id;
- (void)updateSampleTemplateReference:(id)reference forClientIdentifier:(id)identifier descriptor:(id)descriptor family:(long long)family seqId:(id)id;
- (void)updateComplicationDescriptors:(id)descriptors forClientIdentifier:(id)identifier seqId:(id)id;
- (void)removeComplicationSampleTemplatesForClientIdentifier:(id)identifier descriptor:(id)descriptor seqId:(id)id;
@end

#endif /* _NTKComplicationStoreClientProxy_h */