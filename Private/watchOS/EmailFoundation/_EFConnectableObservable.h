//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _EFConnectableObservable_h
#define _EFConnectableObservable_h
@import Foundation;

#include "EFObservable.h"
#include "EFCancelationToken.h"
#include "EFConnectableObservable-Protocol.h"
#include "EFObservable-Protocol.h"

@class NSLock, NSString;
@protocol EFObservable><EFObserver;

@interface _EFConnectableObservable : EFObservable<EFConnectableObservable> {
  /* instance variables */
  NSObject<EFObservable> *_observable;
  NSObject<EFObservable><EFObserver> *_subject;
  NSLock *_lock;
  EFCancelationToken *_cancelable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithObservable:(id)observable subject:(id)subject;
- (id)subscribe:(id)subscribe;
- (id)connect;
- (void)_disconnect;
@end

#endif /* _EFConnectableObservable_h */