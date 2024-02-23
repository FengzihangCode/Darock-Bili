//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPCPlayerRequest_h
#define MusicKit_SoftLinking_MPCPlayerRequest_h
@import Foundation;

#include "MusicKit_SoftLinking_MPCPlayerPath-Protocol.h"

@class MPCPlayerRequest;

@interface MusicKit_SoftLinking_MPCPlayerRequest : NSObject {
  /* instance variables */
  MPCPlayerRequest *_underlyingPlayerRequest;
}

@property (readonly, nonatomic) MPCPlayerRequest *_underlyingPlayerRequest;
@property (retain, nonatomic) NSObject<MusicKit_SoftLinking_MPCPlayerPath> *playerPath;
@property (nonatomic) long long forwardCount;
@property (nonatomic) long long historyCount;

/* instance methods */
- (id)initWithPath:(id)path;
- (id)initWithUnderlyingPlayerRequest:(id)request;
- (void)performWithCompletion:(id /* block */)completion;
- (id)_errorFromUnderlyingError:(id)error;
@end

#endif /* MusicKit_SoftLinking_MPCPlayerRequest_h */