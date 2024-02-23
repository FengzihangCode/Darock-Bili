//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.1.0.0
//
#ifndef _TtP18SiriSuggestionsAPI27SiriSuggestionsXPCInterface__Protocol_h
#define _TtP18SiriSuggestionsAPI27SiriSuggestionsXPCInterface__Protocol_h
@import Foundation;

@protocol SiriSuggestionsAPI.SiriSuggestionsXPCInterface 
/* instance methods */
- (void)suggestNextWithRequestId:(id)id extraStateStoreProperties:(id)properties completionHandler:(id /* block */)handler;
- (void)logIntentFor:(id)for intent:(id)intent completion:(id /* block */)completion;
- (void)getSuggestionsForAppWithAppBundleId:(id)id placementId:(id)id entities:(id)entities bridge:(id)bridge completionHandler:(id /* block */)handler;
- (void)disconnectForAppWithAppBundleId:(id)id placementId:(id)id completionHandler:(id /* block */)handler;
- (void)submitFor:(id)for propertyKey:(id)key propertyValue:(id)value completion:(id /* block */)completion;
- (void)refreshServiceWithCompletion:(id /* block */)completion;
- (void)warmupWithCompletion:(id /* block */)completion;
- (void)logWithSuggestions:(id)suggestions deliveryVehicle:(id)vehicle generationId:(id)id completion:(id /* block */)completion;
@end

#endif /* _TtP18SiriSuggestionsAPI27SiriSuggestionsXPCInterface__Protocol_h */