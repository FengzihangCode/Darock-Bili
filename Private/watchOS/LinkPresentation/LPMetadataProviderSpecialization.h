//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPMetadataProviderSpecialization_h
#define LPMetadataProviderSpecialization_h
@import Foundation;

#include "LPMetadataProviderSpecializationContext.h"
#include "LPMetadataProviderSpecializationDelegate-Protocol.h"

@class NSURL;

@interface LPMetadataProviderSpecialization : NSObject

@property (weak, nonatomic) NSObject<LPMetadataProviderSpecializationDelegate> *delegate;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) LPMetadataProviderSpecializationContext *context;

/* class methods */
+ (id)specializedMetadataProviderForURLWithContext:(id)context;
+ (id)specializedMetadataProviderForResourceWithContext:(id)context;
+ (id)specializedMetadataProviderForMetadata:(id)metadata withContext:(id)context;
+ (BOOL)generateSpecializedMetadataForCompleteMetadata:(id)metadata withContext:(id)context completionHandler:(id /* block */)handler;
+ (unsigned long long)specialization;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)start;
- (void)cancel;
@end

#endif /* LPMetadataProviderSpecialization_h */