//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKDebugRadarArgonErrorReporterQueue_h
#define NTKDebugRadarArgonErrorReporterQueue_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue;

@interface NTKDebugRadarArgonErrorReporterQueue : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL canSubmitReports;
@property (readonly, nonatomic) NSString *queueDirectoryPath;

/* instance methods */
- (id)initWithQueueDirectoryPath:(id)path;
- (void)enqueueReportWithTitle:(id)title description:(id)description attachmentURLs:(id)urls;
- (void)_queue_deleteStagedReports;
- (void)_queue_handleEnqueuedReports;
- (void)queue_enqueueReportWithTitle:(id)title description:(id)description attachmentURLs:(id)urls;
@end

#endif /* NTKDebugRadarArgonErrorReporterQueue_h */