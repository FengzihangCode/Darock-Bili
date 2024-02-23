//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLCoreDataRecorder_h
#define PLCoreDataRecorder_h
@import Foundation;

@interface PLCoreDataRecorder : NSObject
/* class methods */
+ (BOOL)_shouldRecordPhotoLibraryDb:(struct sqlite3 *)db;
+ (long long)_libraryIDForDb:(struct sqlite3 *)db;
+ (struct sqlite3 *)_dbHandleFromConnection:(id)connection;
+ (BOOL)_installConnectionSwizzle;
+ (id)_recordedStatementsAndReset:(BOOL)reset;
+ (BOOL)_installRecorder;
+ (void)_recordExecutedStatement:(struct sqlite3_stmt *)statement db:(struct sqlite3 *)db normalizedSQL:(id)sql expandedSQL:(id)sql plan:(id)plan duration:(double)duration pageHitCountBeforeExecution:(int)execution pageMissCountBeforeExecution:(int)execution;
+ (void)_reset;
+ (id)recordedStatementsDescription;
+ (id)recordedStatements;
+ (id)recordedStatementsAndReset;
+ (BOOL)startRecordingForLibraries:(id)libraries limitToMarkedThreads:(BOOL)threads includeBindVariables:(BOOL)variables includeIOMetrics:(BOOL)iometrics entryDecorator:(id /* block */)decorator entriesAvailableHandler:(id /* block */)handler;
+ (BOOL)isRecording;
+ (BOOL)stopRecording;
@end

#endif /* PLCoreDataRecorder_h */