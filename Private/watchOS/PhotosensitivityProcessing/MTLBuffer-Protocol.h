//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.0.0.0.0
//
#ifndef MTLBuffer_Protocol_h
#define MTLBuffer_Protocol_h
@import Foundation;

@protocol MTLBuffer <MTLResource>

@property (readonly) unsigned long long length;
@property (readonly) unsigned long long gpuAddress;

/* instance methods */
- (void *)contents;
- (void)didModifyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)newTextureWithDescriptor:(id)descriptor offset:(unsigned long long)offset bytesPerRow:(unsigned long long)row;
- (void)addDebugMarker:(id)marker range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)removeAllDebugMarkers;
@end

#endif /* MTLBuffer_Protocol_h */