//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXSwitchRegistrar_h
#define AXSwitchRegistrar_h
@import Foundation;

#include "AXMIDIManager.h"
#include "AXSwitch.h"

@protocol AXSwitchRegistrarDelegate;

@interface AXSwitchRegistrar : NSObject

@property (retain, nonatomic) AXSwitch *aSwitch;
@property (retain, nonatomic) struct __IOHIDDevice * device;
@property (retain, nonatomic) struct __IOHIDEventSystemClient * eventSystemClient;
@property (retain, nonatomic) struct __IOHIDManager * manager;
@property (retain, nonatomic) AXMIDIManager *midiManager;
@property (weak, nonatomic) NSObject<AXSwitchRegistrarDelegate> *delegate;
@property (nonatomic) BOOL addLongPressSwitch;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)beginFilteringEvents;
- (void)endFilteringEvents;
- (BOOL)isSwitchWithName:(id)name;
- (id)firstAvailableName;
- (BOOL)_isKeyboardSwitchWithKeyCode:(unsigned short)code longPress:(BOOL)press;
- (BOOL)_isMFISwitchWithButtonNumber:(unsigned int)number longPress:(BOOL)press;
- (BOOL)_isATVRemoteButtonSwitchWithUsage:(long long)usage longPress:(BOOL)press;
- (BOOL)_isMIDISwitchWithMidiEvent:(id)event;
- (BOOL)_isGamepadSwitchWithKeyCode:(unsigned short)code longPress:(BOOL)press;
- (BOOL)_isSwitchWithSource:(id)source keyCode:(unsigned short)code buttonNumber:(unsigned int)number ATVRemoteButtonUsage:(long long)usage midiEvent:(id)event;
- (void)_handleApplicationDidBecomeActive:(id)active;
- (void)_handleApplicationWillResignActive:(id)active;
- (void)_handleKeyboardKeyDownEvent:(struct __IOHIDEvent *)event;
- (void)_handleGamepadButtonPressedEvent:(struct __IOHIDEvent *)event;
- (void)_handleMIDIEvent:(id)midievent device:(id)device entity:(id)entity source:(id)source;
- (void)_handleATVRemoteButtonDownEvent:(struct __IOHIDEvent *)event;
- (void)_handleMFIButtonDownValue:(struct __IOHIDValue *)value;
- (id)_keyboardMatching;
- (id)_atvRemoteMatching;
- (id)_mfiMatching;
- (id)_gamepadMatching;
- (void)_filterEvents:(BOOL)events;
@end

#endif /* AXSwitchRegistrar_h */