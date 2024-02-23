//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCStreamInputAudio_h
#define VCStreamInputAudio_h
@import Foundation;

#include "VCStreamInput.h"
#include "VCStreamInputCaptureSourceDelegate-Protocol.h"

@class NSString;

@interface VCStreamInputAudio : VCStreamInput<VCStreamInputCaptureSourceDelegate> {
  /* instance variables */
  undefined * _sampleBufferDelegateCallback;
  void * _sampleBufferDelegateCallbackContext;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sampleBufferDelegateCallbackLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStreamInputID:(id)id format:(struct opaqueCMFormatDescription *)format delegate:(id)delegate delegateQueue:(id)queue remoteQueue:(id)queue;
- (void)dealloc;
- (void)registerSampleBufferCallback:(undefined *)callback context:(void *)context;
@end

#endif /* VCStreamInputAudio_h */