//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 54.1.2.0.0
//
#ifndef AAFDeviceInfo_h
#define AAFDeviceInfo_h
@import Foundation;

@interface AAFDeviceInfo : NSObject
/* class methods */
+ (BOOL)deviceIsAudioAccessory;
+ (BOOL)deviceIsiPad;
+ (BOOL)isDeviceUnlockedSinceBoot;
@end

#endif /* AAFDeviceInfo_h */