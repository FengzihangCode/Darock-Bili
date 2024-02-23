//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRExternalDeviceControllerDelegate_Protocol_h
#define MRExternalDeviceControllerDelegate_Protocol_h
@import Foundation;

@protocol MRExternalDeviceControllerDelegate <NSObject>
@optional
/* instance methods */
- (void)externalDeviceController:(id)controller didDiscoverDevice:(id)device;
- (void)externalDeviceController:(id)controller didRemoveDevice:(id)device;
@end

#endif /* MRExternalDeviceControllerDelegate_Protocol_h */