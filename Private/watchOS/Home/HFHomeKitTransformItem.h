//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFHomeKitTransformItem_h
#define HFHomeKitTransformItem_h
@import Foundation;

#include "HFTransformItem.h"
#include "HFAccessoryVendor-Protocol.h"
#include "HFHomeKitItemProtocol-Protocol.h"
#include "HFHomeKitObject-Protocol.h"

@class NSString;
@protocol HFItem<HFHomeKitItemProtocol;

@interface HFHomeKitTransformItem : HFTransformItem<HFHomeKitItemProtocol, HFAccessoryVendor>

@property (readonly, nonatomic) HFItem<HFHomeKitItemProtocol> *sourceHomeKitItem;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)accessories;
@end

#endif /* HFHomeKitTransformItem_h */