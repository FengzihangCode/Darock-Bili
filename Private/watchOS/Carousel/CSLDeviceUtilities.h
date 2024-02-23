//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDeviceUtilities_h
#define CSLDeviceUtilities_h
@import Foundation;

@interface CSLDeviceUtilities : NSObject
/* class methods */
+ (BOOL)isPaired;
+ (BOOL)isTinker;
+ (id)activePairedDevice;
+ (BOOL)isDeviceTinker:(id)tinker;
+ (BOOL)isDevicePaired:(id)paired;

/* instance methods */
- (void)didPair:(id /* block */)pair;
@end

#endif /* CSLDeviceUtilities_h */