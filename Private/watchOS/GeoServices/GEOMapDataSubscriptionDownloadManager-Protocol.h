//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapDataSubscriptionDownloadManager_Protocol_h
#define GEOMapDataSubscriptionDownloadManager_Protocol_h
@import Foundation;

@protocol GEOMapDataSubscriptionDownloadManager <NSObject>

@property (weak, nonatomic) NSObject<GEOMapDataSubscriptionDownloadManagerDelegate> *delegate;

/* instance methods */
- (void)startDownloadForSubscriptionIdentifiers:(id)identifiers mode:(unsigned long long)mode;
- (void)cancelDownloadForSubscriptionIdentifiers:(id)identifiers;
- (void)forceUpdateForUserInitiatedSubscriptionsForDataType:(unsigned long long)type mode:(unsigned long long)mode;
- (void)fetchStateForSubscriptionWithIdentifier:(id)identifier callbackQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)fetchLastUpdatedDateForOfflineSubscriptionsWithQueue:(id)queue completionHandler:(id /* block */)handler;
- (id)determineEstimatedSizeForSubscriptionWithRegion:(id)region dataTypes:(unsigned long long)types queue:(id)queue completionHandler:(id /* block */)handler;
@optional
/* instance methods */
- (void)didAddSubscription:(id)subscription;
- (void)didRemoveSubscriptionWithIdentifier:(id)identifier;
- (void)registerExternallyManagedDownloader:(id)downloader;
- (void)externallyManagedDownloaderDidFinish:(id)finish withError:(id)error;
@end

#endif /* GEOMapDataSubscriptionDownloadManager_Protocol_h */