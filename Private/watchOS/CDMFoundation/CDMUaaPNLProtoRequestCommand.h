//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMUaaPNLProtoRequestCommand_h
#define CDMUaaPNLProtoRequestCommand_h
@import Foundation;

#include "CDMBaseCommand.h"

@class SIRINLUEXTERNALRequestID, SIRINLUINTERNALUAAP_PARSERUaaPParserRequest;

@interface CDMUaaPNLProtoRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALUAAP_PARSERUaaPParserRequest *parserRequest;
@property (readonly, nonatomic) SIRINLUEXTERNALRequestID *requestId;

/* instance methods */
- (id)initWithParserRequest:(id)request requestId:(id)id;
@end

#endif /* CDMUaaPNLProtoRequestCommand_h */