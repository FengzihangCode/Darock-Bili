//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICHTTPArchive_h
#define ICHTTPArchive_h
@import Foundation;

@class NSDateFormatter, NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICHTTPArchive : NSObject {
  /* instance variables */
  NSMutableArray *_loggedEvents;
  NSObject<OS_dispatch_queue> *_accessQueue;
  NSObject<OS_dispatch_source> *_flushTimer;
  NSString *_currentArchiveFileName;
  NSDateFormatter *_dateFormatter;
  NSDictionary *_creatorDictionary;
  NSString *_archiveDirectoryPath;
  NSMutableArray *_archiveFilePaths;
  BOOL _hasValidArchiveDirectory;
  long long _maxArchiveFiles;
  long long _maxArchiveBodyLength;
  long long _flushDelaySeconds;
}

/* class methods */
+ (id)sharedArchive;

/* instance methods */
- (id)init;
- (id)initUnboundedArchiveWithDirectoryPath:(id)path;
- (id)initWithArchiveDirectoryPath:(id)path maxArchiveFiles:(long long)files maxArchiveBodyLength:(long long)length flushDelaySeconds:(long long)seconds;
- (void)dealloc;
- (void)archiveRequest:(id)request withResponse:(id)response responseData:(id)data;
- (void)archiveRequest:(id)request withResponse:(id)response responseData:(id)data performanceMetrics:(id)metrics;
- (void)flush;
- (void)_onQueueFlush;
- (id)_archiveCreator;
- (id)_archiveForRequest:(id)request;
- (id)_archiveForResponse:(id)response responseData:(id)data;
- (id)_arrayFromHeaderDictionary:(id)dictionary;
- (void)_loadExistingArchivePaths;
- (void)_pruneOldArchives;
@end

#endif /* ICHTTPArchive_h */