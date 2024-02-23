//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFEndpointInfoMutation_h
#define _AFEndpointInfoMutation_h
@import Foundation;

#include "AFEndpointInfo.h"
#include "AFEndpointInfoMutating-Protocol.h"

@class NSString;

@interface _AFEndpointInfoMutation : NSObject<AFEndpointInfoMutating> {
  /* instance variables */
  AFEndpointInfo *_base;
  NSString *_identifier;
  NSString *_mediaRouteIdentifier;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasIdentifier; unsigned int x :1 hasMediaRouteIdentifier; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (id)getIdentifier;
- (void)setIdentifier:(id)identifier;
- (id)getMediaRouteIdentifier;
- (void)setMediaRouteIdentifier:(id)identifier;
@end

#endif /* _AFEndpointInfoMutation_h */