//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNTUCallProvider_h
#define CNTUCallProvider_h
@import Foundation;

#include "CNTUCallProvider-Protocol.h"

@class NSSet, NSString, TUCallProvider;

@interface CNTUCallProvider : NSObject<CNTUCallProvider>

@property (copy, nonatomic) TUCallProvider *callProvider;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL supportsAudio;
@property (readonly, nonatomic) BOOL supportsVideo;
@property (readonly, copy, nonatomic) NSSet *supportedHandleTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCallProvider:(id)provider;
- (id)dialRequestForHandle:(id)handle contact:(id)contact video:(BOOL)video;
@end

#endif /* CNTUCallProvider_h */