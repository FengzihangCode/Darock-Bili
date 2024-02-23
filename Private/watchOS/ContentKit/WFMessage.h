//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFMessage_h
#define WFMessage_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "WFNaming-Protocol.h"

@class NSArray, NSString;

@interface WFMessage : NSObject<NSCopying, NSSecureCoding, WFNaming>

@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSArray *recipientContactIDs;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) NSString *senderContactID;
@property (readonly, copy, nonatomic) NSArray *senderHandles;
@property (readonly, copy, nonatomic) NSString *wfName;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithContent:(id)content conversationID:(id)id recipientContactIDs:(id)ids recipients:(id)recipients senderContactID:(id)id senderHandles:(id)handles;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* WFMessage_h */