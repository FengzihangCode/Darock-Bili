//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLPreviewProvider_h
#define QLPreviewProvider_h
@import Foundation;

#include "NSExtensionRequestHandling-Protocol.h"

@class NSString;

@interface QLPreviewProvider : NSObject<NSExtensionRequestHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)beginRequestWithExtensionContext:(id)context;
- (void)providePreviewForFileRequest:(id)request completionHandler:(id /* block */)handler;
@end

#endif /* QLPreviewProvider_h */