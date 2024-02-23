//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _EDWrappedMessage_h
#define _EDWrappedMessage_h
@import Foundation;

@class EMMessage;

@interface _EDWrappedMessage : NSObject

@property (readonly, nonatomic) EMMessage *message;
@property (readonly, nonatomic) long long databaseID;

/* instance methods */
- (id)initWithMessage:(id)message databaseID:(long long)id;
@end

#endif /* _EDWrappedMessage_h */