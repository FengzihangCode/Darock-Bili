//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLFileSystemPersistence_h
#define PLFileSystemPersistence_h
@import Foundation;

@class BOOL *;
@protocol OS_dispatch_queue;

@interface PLFileSystemPersistence : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_writerQueue;
}

/* class methods */
+ (id)persistenceKeyTypes;
+ (id)sharedInstance;
+ (id)filesystemPersistenceBatchItemForFileAtURL:(id)url;
+ (void)persistData:(id)data forKey:(id)key fileURL:(id)url;
+ (id)persistedAttributesForFileAtURL:(id)url;
+ (id)persistedAttributesForFileAtURL:(id)url exists:(BOOL *)exists includeUnknownAttributes:(BOOL)attributes;
+ (void)clearAllAttributesForFileAtUrl:(id)url;
+ (void)persistUUIDString:(id)uuidstring forKey:(id)key fileURL:(id)url;
+ (void)persistUInt16:(unsigned short)uint16 forKey:(id)key fileURL:(id)url;
+ (void)persistString:(id)string forKey:(id)key fileURL:(id)url;
+ (void)persistMetadata:(id)metadata fileURL:(id)url;
+ (void)performBlockOnWriterQueue:(id /* block */)queue;

/* instance methods */
- (id)init;
- (void)_backgroundWriteData:(id)data toFileAtURL:(id)url;
- (void)_performOnWriterQueueWithIdentifier:(const char *)identifier block:(id /* block */)block;
@end

#endif /* PLFileSystemPersistence_h */