//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMServiceGraphRunner_h
#define CDMServiceGraphRunner_h
@import Foundation;

@class NSMutableDictionary, NSOperationQueue;

@interface CDMServiceGraphRunner : NSObject {
  /* instance variables */
  NSOperationQueue *_queue;
  NSMutableDictionary *_callbackMap;
  NSMutableDictionary *_operationMap;
  NSMutableDictionary *_operationMapWithNodeName;
  NSMutableDictionary *_handlerMap;
  NSMutableDictionary *_handlerSkipMap;
}

/* instance methods */
- (id)init;
- (id)initWithMaxConcurrentCount:(int)count;
- (void)dealloc;
- (void)suspend;
- (void)resume;
- (void)runHandlerAsync:(id)async withCompletion:(id /* block */)completion;
- (void)cancelAllHandlers;
- (void)cancelHandler:(id)handler;
- (void)cancelHandlerById:(id)id;
- (void)cancelHandlerById:(id)id causeByError:(BOOL)error;
- (void)finishHandlerById:(id)id;
- (void)skipNode:(id)node forCondition:(id /* block */)condition withHandlerId:(id)id;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)waitAll;
- (id)getOperationState:(id)state;
- (void)dumpServiceGraphNodeQueue;
- (id)getServiceGraphNodeQueue;
@end

#endif /* CDMServiceGraphRunner_h */