//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDAcceptShareMetadata_h
#define CKDAcceptShareMetadata_h
@import Foundation;

@class CKRecordID, NSData, NSString, NSURL;

@interface CKDAcceptShareMetadata : NSObject

@property (retain, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) CKRecordID *shareRecordID;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSData *publicPCSData;
@property (retain, nonatomic) NSString *publicPCSEtag;
@property (retain, nonatomic) NSData *publicKey;
@property (nonatomic) unsigned long long publicKeyVersion;
@property (retain, nonatomic) NSString *participantID;
@property (retain, nonatomic) NSData *pppcsProtectionInfo;
@property (retain, nonatomic) NSString *anonymousCKUserID;
@property (nonatomic) struct _PCSIdentityData * signingPCSIdentity;
@property (nonatomic) BOOL acceptedInProcess;

/* instance methods */
- (void)dealloc;
@end

#endif /* CKDAcceptShareMetadata_h */