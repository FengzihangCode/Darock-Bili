//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLSiloIdleHandler_h
#define CLSiloIdleHandler_h
@import Foundation;

@interface CLSiloIdleHandler : NSObject

@property (copy) id /* block */ onIdle;
@property (copy) id /* block */ onResume;

/* instance methods */
- (id)initWithIdleHandler:(id /* block */)handler onResume:(id /* block */)resume;
- (void)invalidate;
@end

#endif /* CLSiloIdleHandler_h */