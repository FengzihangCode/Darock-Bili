//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.60.3.0.0
//
#ifndef AnalyticsEventObserver_h
#define AnalyticsEventObserver_h
@import Foundation;

@protocol AnalyticsEventObserverDelegate, OS_dispatch_queue, {shared_ptr<(anonymous namespace)::EventObserverImpl>="__ptr_"^{EventObserverImpl}"__cntrl_"^{__shared_weak_count}};

@interface AnalyticsEventObserver : NSObject {
  /* instance variables */
  struct shared_ptr<(anonymous namespace)::EventObserverImpl> { struct EventObserverImpl *__ptr_; struct __shared_weak_count *__cntrl_; } observer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) NSObject<AnalyticsEventObserverDelegate> *delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)setEventObserverDelegate:(id)delegate queue:(id)queue;
- (BOOL)startObservingEventList:(id)list;
- (BOOL)startObservingEventList:(id)list withErrorHandler:(id /* block */)handler;
- (BOOL)stopObserving;
@end

#endif /* AnalyticsEventObserver_h */