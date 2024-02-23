//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKChangeSetMO_h
#define _DKChangeSetMO_h
@import Foundation;

#include "NSManagedObject.h"

@class NSData, NSDate, NSNumber, NSString;

@interface _DKChangeSetMO : NSManagedObject

@property (retain, @dynamic, nonatomic) NSData *changeSet;
@property (copy, @dynamic, nonatomic) NSString *ckForeignKey;
@property (copy, @dynamic, nonatomic) NSString *ckRecordID;
@property (retain, @dynamic, nonatomic) NSData *ckRecordSystemFields;
@property (copy, @dynamic, nonatomic) NSString *deviceIdentifier;
@property (copy, @dynamic, nonatomic) NSNumber *sequenceNumber;
@property (copy, @dynamic, nonatomic) NSDate *startDate;
@property (copy, @dynamic, nonatomic) NSDate *endDate;
@property (copy, @dynamic, nonatomic) NSNumber *version;

@end

#endif /* _DKChangeSetMO_h */