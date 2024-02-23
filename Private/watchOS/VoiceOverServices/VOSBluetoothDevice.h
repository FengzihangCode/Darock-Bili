//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef VOSBluetoothDevice_h
#define VOSBluetoothDevice_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "VOSBluetoothConnectableDevice-Protocol.h"

@class NSString;

@interface VOSBluetoothDevice : NSObject<NSCopying, VOSBluetoothConnectableDevice> {
  /* instance variables */
  NSString *_name;
  NSString *_address;
  struct BTDeviceImpl * _device;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDevice:(struct BTDeviceImpl *)device address:(id)address;
- (id)copyWithZone:(struct _NSZone *)zone;
- (long long)compare:(id)compare;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToDevice:(id)device;
- (BOOL)hasAddress:(id)address;
- (struct BTDeviceImpl *)device;
- (void)setDevice:(struct BTDeviceImpl *)device;
- (void)_clearName;
- (BOOL)isNameCached;
- (id)name;
- (id)address;
- (id)identifier;
- (int)type;
- (unsigned int)majorClass;
- (unsigned int)minorClass;
- (unsigned int)deviceClass;
- (unsigned int)vendorId;
- (unsigned int)productId;
- (BOOL)paired;
- (BOOL)connected;
- (BOOL)connecting;
- (unsigned long long)connectedServices;
- (unsigned long long)connectedServicesCount;
- (BOOL)isServiceSupported:(unsigned int)supported;
- (unsigned int)authorizedServices;
- (void)connect;
- (void)connectWithServices:(unsigned int)services;
- (void)disconnect;
- (void)setPIN:(id)pin;
- (void)acceptSSP:(int)ssp;
- (void)unpair;
- (BOOL)isAppleHIDDevice;
@end

#endif /* VOSBluetoothDevice_h */