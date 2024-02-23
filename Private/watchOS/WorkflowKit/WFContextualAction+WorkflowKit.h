//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFContextualAction_WorkflowKit_h
#define WFContextualAction_WorkflowKit_h
@import Foundation;

@interface WFContextualAction (WorkflowKit)
/* instance methods */
- (void)getActionRepresentationTakingInput:(BOOL)input context:(id)context completionHandler:(id /* block */)handler;
- (void)_getActionRepresentationTakingInput:(BOOL)input context:(WFContextualActionContext *)context completionHandler:(id /* block */)handler;
- (BOOL)selfPopulatesInput;
- (void)getInputWithCompletionHandler:(id /* block */)handler;
@end

#endif /* WFContextualAction_WorkflowKit_h */