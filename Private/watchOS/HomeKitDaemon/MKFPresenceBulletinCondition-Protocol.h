//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFPresenceBulletinCondition_Protocol_h
#define MKFPresenceBulletinCondition_Protocol_h
@import Foundation;

@protocol MKFPresenceBulletinCondition <MKFBulletinCondition, MKFPresenceBulletinConditionPublicExtensions>

@property (copy, nonatomic) NSNumber *presenceEventType;
@property (copy, nonatomic) NSNumber *presenceEventUserType;
@property (readonly, retain, nonatomic) NSArray *users;
@property (readonly, copy, nonatomic) MKFPresenceBulletinConditionDatabaseID *databaseID;
@property (readonly) NSObject<MKFHome> *home;

/* instance methods */
- (id)materializeOrCreateUsersRelationWithModelID:(id)id createdNew:(BOOL *)new;
- (id)findUsersRelationWithModelID:(id)id;
- (void)addUsersObject:(id)object;
- (void)removeUsersObject:(id)object;
@end

#endif /* MKFPresenceBulletinCondition_Protocol_h */