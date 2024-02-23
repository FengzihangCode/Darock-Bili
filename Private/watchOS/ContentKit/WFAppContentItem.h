//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAppContentItem_h
#define WFAppContentItem_h
@import Foundation;

#include "WFContentItem.h"
#include "WFApp.h"
#include "WFContentItemClass-Protocol.h"
#include "WFObjectType.h"

@class NSDictionary, NSString, WFFileType;

@interface WFAppContentItem : WFContentItem<WFContentItemClass>

@property (readonly, nonatomic) WFApp *app;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (void)runQuery:(id)query withItems:(id)items permissionRequestor:(id)requestor completionHandler:(id /* block */)handler;
+ (BOOL)hasLibrary;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)typeDescription;
+ (id)pluralTypeDescription;
+ (id)countDescription;

/* instance methods */
- (id)generateObjectRepresentationForClass:(Class)class options:(id)options error:(id *)error;
- (id)generateObjectRepresentationsForClass:(Class)class options:(id)options error:(id *)error;
- (id)windows;
- (id)displays;
@end

#endif /* WFAppContentItem_h */