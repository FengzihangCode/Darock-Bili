//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKIOHIDService_h
#define BKIOHIDService_h
@import Foundation;

#include "BKHIDEventSenderInfo-Protocol.h"
#include "BKIOHIDService.h"
#include "BSDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"

@class BKSHIDEventSenderDescriptor, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface BKIOHIDService : NSObject<BKHIDEventSenderInfo, BSDescriptionProviding, NSCopying> {
  /* instance variables */
  BKIOHIDService *_strongSelf;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _workQueueAccessLock;
  NSObject<OS_dispatch_queue> *_workQueue_do_not_touch_directly;
  struct __IOHIDNotification * _workQueue_removalNotification;
  NSMutableArray *_workQueue_disappearanceObservers;
  BKSHIDEventSenderDescriptor *_senderDescriptorForKeyboardEvents;
}

@property (nonatomic) struct __IOHIDService * IOHIDService;
@property (copy, nonatomic) NSString *displayUUID;
@property (nonatomic) int eventSource;
@property (nonatomic) unsigned long long senderID;
@property (nonatomic) unsigned int primaryUsagePage;
@property (nonatomic) unsigned int primaryUsage;
@property (nonatomic) BOOL authenticated;
@property (nonatomic) BOOL builtIn;
@property (copy, nonatomic) BKSHIDEventSenderDescriptor *senderDescriptor;
@property (nonatomic) long long serviceStatus;
@property (readonly, nonatomic) NSString *uniqueProductIdentifier;
@property (readonly, nonatomic) BOOL isVirtualService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_setUpInitialProperties;
- (id)_initForTestingWithSenderID:(unsigned long long)id setUpInitialProperties:(BOOL)properties;
- (id)initForSimulatorWithDisplayUUID:(id)uuid;
- (id)initWithHIDServiceRef:(struct __IOHIDService *)ref;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)senderDescriptorForEventType:(unsigned int)type;
- (BOOL)claimsToConformToUsagePage:(unsigned short)page usage:(unsigned short)usage;
- (id)propertyForKey:(id)key;
- (id)propertyOfClass:(Class)class forKey:(id)key;
- (BOOL)setProperty:(id)property forKey:(id)key;
- (BOOL)setProperties:(id)properties;
- (void)asyncSetProperty:(id)property forKey:(id)key;
- (void)asyncSetProperty:(id)property forKey:(id)key andDelayForSeconds:(double)seconds;
- (void)asyncSetProperties:(id)properties;
- (void)setElementValue:(unsigned int)value forUsagePage:(unsigned int)page usage:(unsigned int)usage;
- (void)addDisappearanceObserver:(id)observer queue:(id)queue;
- (void)removeDisappearanceObserver:(id)observer;
- (id)_disappearanceObservers;
- (void)_workQueue_startIOServiceRemovalNotifications;
- (void)_workQueue_stopIOServiceRemovalNotifications;
- (void)_serviceWasRemoved;
- (BOOL)isAuthenticated;
- (BOOL)isBuiltIn;
@end

#endif /* BKIOHIDService_h */