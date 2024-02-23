//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAProgressHandler_h
#define MAProgressHandler_h
@import Foundation;

@class NSMutableArray;

@interface MAProgressHandler : NSObject

@property (nonatomic) unsigned long long notificationInterval;
@property (readonly, nonatomic) NSMutableArray *callBackArray;

/* instance methods */
- (id)initWithCallBack:(id /* block */)back;
- (void)addCallBack:(id /* block */)back;
@end

#endif /* MAProgressHandler_h */