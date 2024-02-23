//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCSearchResult_h
#define FCSearchResult_h
@import Foundation;

#include "FCArticleSearchOperationResult.h"
#include "FCTagSearchOperationResult.h"

@interface FCSearchResult : NSObject

@property (retain, nonatomic) FCTagSearchOperationResult *tagSearchResult;
@property (retain, nonatomic) FCArticleSearchOperationResult *articleSearchResult;

/* instance methods */
@end

#endif /* FCSearchResult_h */