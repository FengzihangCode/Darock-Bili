//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 406.1.12.0.0
//
#ifndef RTTCall_h
#define RTTCall_h
@import Foundation;

#include "AVCVirtualTTYDeviceDelegate-Protocol.h"
#include "RTTCallDelegate-Protocol.h"
#include "RTTConversation.h"

@class AVCVirtualTTYDevice, AXDispatchTimer, NSDictionary, NSMutableString, NSString, TUCall;
@protocol OS_dispatch_queue;

@interface RTTCall : NSObject<AVCVirtualTTYDeviceDelegate> {
  /* instance variables */
  long long _ttyMode;
  NSMutableString *_garbageCollection;
  AXDispatchTimer *_garbageCharacterStripperTimer;
  AXDispatchTimer *_incomingMessageTimeout;
  AXDispatchTimer *_outgoingMessageTimeout;
}

@property (retain, nonatomic) AVCVirtualTTYDevice *ttyDevice;
@property (retain, nonatomic) RTTConversation *conversation;
@property (retain, nonatomic) TUCall *call;
@property (retain, nonatomic) NSDictionary *substitutions;
@property (weak, nonatomic) NSObject<RTTCallDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCall:(id)call;
- (void)dealloc;
- (void)registerNotifications;
- (void)mediaServerDied;
- (BOOL)isLocallyHosted;
- (void)callStatusDidChange:(id)change;
- (void)recreateTTYDevice:(id)ttydevice;
- (void)toggleSystemOutputMute:(BOOL)mute;
- (void)start;
- (void)stop;
- (void)sendString:(id)string;
- (void)device:(id)device didStart:(BOOL)start error:(id)error;
- (void)deviceDidStop:(id)stop;
- (BOOL)_handleInitialGarbageTextFromTTY:(id)tty device:(id)device;
- (void)_processMessageTimeoutForMe:(BOOL)me;
- (id)_processText:(id)text withDevice:(id)device;
- (void)callDidReceiveText:(id)text forUtterance:(id)utterance;
- (void)_postLocalNotificationForText:(id)text;
- (void)device:(id)device didReceiveText:(id)text;
- (void)device:(id)device didReceiveCharacter:(unsigned short)character;
@end

#endif /* RTTCall_h */