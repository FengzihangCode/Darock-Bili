//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.4.0.0.0
//
#ifndef MLRTask_h
#define MLRTask_h
@import Foundation;

#include "MLRTaskAttachments.h"
#include "MLRTaskParameters.h"
#include "NSSecureCoding-Protocol.h"

@class DESInternalDodMLTask;

@interface MLRTask : NSObject<NSSecureCoding>

@property (readonly, nonatomic) DESInternalDodMLTask *DESTask;
@property (readonly, nonatomic) id internalTask;
@property (readonly, nonatomic) MLRTaskParameters *parameters;
@property (readonly, copy, nonatomic) MLRTaskAttachments *attachments;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithParameters:(id)parameters attachments:(id)attachments;
- (id)initWithDodMLTask:(id)mltask;
- (id)initWithParametersDict:(id)dict;
- (id)initWithParameters:(id)parameters attachments:(id)attachments internalTask:(id)task;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MLRTask_h */