//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.25.1.0.0
//
#ifndef _SUICEditScriptDataArray_h
#define _SUICEditScriptDataArray_h
@import Foundation;

#include "_SUICEditScriptData-Protocol.h"

@class NSArray, NSString;

@interface _SUICEditScriptDataArray : NSObject<_SUICEditScriptData>

@property (retain, nonatomic) NSArray *data;
@property (retain, nonatomic) NSString *cachedStringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)EditScriptDataWithString:(id)string chunkSize:(long long)size;
+ (id)EditScriptDataWithArray:(id)array;

/* instance methods */
- (id)initWithString:(id)string chunkSize:(long long)size;
- (id)initWithArray:(id)array;
- (long long)length;
- (id)stringAtIndex:(long long)index;
- (id)stringValue;
- (long long)lengthOfItem:(long long)item;
- (long long)characterIndexForItem:(long long)item;
- (long long)indexOfFirstDifferenceWithOtherData:(id)data shouldReverseIterate:(BOOL)iterate fallsOnWordBoundary:(BOOL *)boundary;
@end

#endif /* _SUICEditScriptDataArray_h */