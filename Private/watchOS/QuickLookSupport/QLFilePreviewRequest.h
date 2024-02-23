//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLFilePreviewRequest_h
#define QLFilePreviewRequest_h
@import Foundation;

@class NSURL, UTType;

@interface QLFilePreviewRequest : NSObject

@property (retain) UTType *contentType;
@property (readonly) NSURL *fileURL;

/* instance methods */
- (id)initWithURL:(id)url;
- (id)initWithURL:(id)url contentType:(id)type;
@end

#endif /* QLFilePreviewRequest_h */