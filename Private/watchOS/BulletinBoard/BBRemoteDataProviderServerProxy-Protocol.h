//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBRemoteDataProviderServerProxy_Protocol_h
#define BBRemoteDataProviderServerProxy_Protocol_h
@import Foundation;

@protocol BBRemoteDataProviderServerProxy <NSObject>
/* instance methods */
- (void)invalidateBulletins;
- (void)addBulletin:(id)bulletin forDestinations:(unsigned long long)destinations;
- (void)modifyBulletin:(id)bulletin;
- (void)withdrawBulletinsWithRecordID:(id)id;
- (void)withdrawBulletinWithPublisherBulletinID:(id)id shouldSync:(BOOL)sync;
- (void)reloadSectionParameters:(id)parameters;
- (void)reloadDefaultSectionInfo:(id)info;
- (void)getClearedInfoWithCompletion:(id /* block */)completion;
- (void)setClearedInfo:(id)info;
- (void)getSectionInfoWithCompletion:(id /* block */)completion;
- (void)setSectionInfo:(id)info;
@end

#endif /* BBRemoteDataProviderServerProxy_Protocol_h */