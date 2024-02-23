//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSGroupSessionUnicastParameter_h
#define IDSGroupSessionUnicastParameter_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSString;
@protocol OS_nw_endpoint, OS_nw_parameters;

@interface IDSGroupSessionUnicastParameter : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSString *groupSessionID;
@property (readonly, nonatomic) unsigned long long localParticipantID;
@property (readonly, nonatomic) unsigned long long remoteParticipantID;
@property (readonly, nonatomic) NSData *salt;
@property (readonly, nonatomic) unsigned long long connectionIndex;
@property (readonly, nonatomic) long long dataMode;
@property (readonly, nonatomic) NSObject<OS_nw_parameters> *parameters;
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint;
@property int socket;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithGroupSessionID:(id)id localParticipantID:(unsigned long long)id remoteParticipantID:(unsigned long long)id dataMode:(long long)mode connectionIndex:(unsigned long long)index;
- (id)initWithGroupSessionID:(id)id localParticipantID:(unsigned long long)id remoteParticipantID:(unsigned long long)id salt:(id)salt dataMode:(long long)mode connectionIndex:(unsigned long long)index;
- (id)initWithConnectedSocket:(int)socket dataMode:(long long)mode connectionIndex:(unsigned long long)index;
- (void)requestNWConnectionforIDSGroupSessionUnicastParameter:(id /* block */)parameter;
- (void)_requestNWConnectionforIDSGroupSessionUnicastParameter:(id /* block */)parameter;
- (void)_setUpNWConnectionforTesting:(id /* block */)testing;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IDSGroupSessionUnicastParameter_h */