//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 30.0.0.0.0
//
#ifndef FKFriendGroupDelegate_Protocol_h
#define FKFriendGroupDelegate_Protocol_h
@import Foundation;

@protocol FKFriendGroupDelegate <NSObject>
/* instance methods */
- (void)friendGroup:(id)group didSetFriend:(id)friend atPosition:(unsigned long long)position;
- (void)friendGroup:(id)group didRemoveFriend:(id)friend atPosition:(unsigned long long)position;
- (void)friendGroup:(id)group didMoveFriends:(id)friends;
@end

#endif /* FKFriendGroupDelegate_Protocol_h */