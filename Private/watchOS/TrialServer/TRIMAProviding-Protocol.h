//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIMAProviding_Protocol_h
#define TRIMAProviding_Protocol_h
@import Foundation;

@protocol TRIMAProviding 
/* instance methods */
- (id)endAllPreviousLocksOfSelectorSync:(id)sync forClientName:(id)name;
- (id)endAllPreviousLocksOfReasonSync:(id)sync forClientName:(id)name forAssetSelector:(id)selector;
- (void)cancelActivityForSelector:(id)selector completion:(id /* block */)completion;
- (void)eliminateAllForSelector:(id)selector completion:(id /* block */)completion;
- (void)eliminatePromotedNeverLockedForSelector:(id)selector completion:(id /* block */)completion;
- (id)createAutoAssetWithId:(id)id decryptionKey:(id)key error:(id *)error;
- (id)installedAssetsMatchingFullAssetIds:(id)ids;
- (id)downloadAssets:(id)assets attribution:(id)attribution aggregateProgress:(id)progress group:(id)group completion:(id /* block */)completion;
@end

#endif /* TRIMAProviding_Protocol_h */