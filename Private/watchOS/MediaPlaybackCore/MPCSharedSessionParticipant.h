//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCSharedSessionParticipant_h
#define MPCSharedSessionParticipant_h
@import Foundation;

#include "MPCPlaybackEngineEventPayloadValueJSONConvertible-Protocol.h"

@class NSString;

@interface MPCSharedSessionParticipant : NSObject<MPCPlaybackEngineEventPayloadValueJSONConvertible> {
  /* instance variables */
  BOOL _local;
  long long _sessionType;
  NSString *_expanseIdentifier;
  NSString *_liveLinkIdentifier;
  long long _liveLinkServiceIdentifier;
  NSString *_mediaRemoteGroupSessionIdentifier;
  NSString *_mediaRemoteUserIdentityIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)payloadValueFromJSONValue:(id)jsonvalue;

/* instance methods */
- (id)mpc_jsonValue;
@end

#endif /* MPCSharedSessionParticipant_h */