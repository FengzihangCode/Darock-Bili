//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNConnectionHostInterface_Protocol_h
#define LNConnectionHostInterface_Protocol_h
@import Foundation;

@protocol LNConnectionHostInterface <LNConnectionXPCListenerEndpointVendingInterface>
/* instance methods */
- (void)fetchMetadataWithCompletionHandler:(id /* block */)handler;
- (void)fetchDisplayRepresentationForActions:(id)actions completionHandler:(id /* block */)handler;
- (void)fetchViewEntitiesWithInteractionIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)fetchViewActionsWithCompletionHandler:(id /* block */)handler;
- (void)fetchStructuredDataWithTypeIdentifier:(long long)identifier forEntityIdentifiers:(id)identifiers completionHandler:(id /* block */)handler;
- (void)performPropertyQuery:(id)query completionHandler:(id /* block */)handler;
- (void)performSuggestedResultsQueryWithEntityType:(id)type completionHandler:(id /* block */)handler;
- (void)performSuggestedEntitiesQueryWithEntityMangledTypeName:(id)name completionHandler:(id /* block */)handler;
- (void)performAllEntitiesQueryWithEntityMangledTypeName:(id)name completionHandler:(id /* block */)handler;
- (void)performAction:(id)action options:(id)options executor:(id)executor completionHandler:(id /* block */)handler;
- (void)fetchOptionsForAction:(id)action actionMetadata:(id)metadata parameterMetadata:(id)metadata optionsProviderReference:(id)reference searchTerm:(id)term localeIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)fetchOptionsDefaultValuesForAction:(id)action completionHandler:(id /* block */)handler;
- (void)fetchParameterOptionDefaultValueForAction:(id)action actionMetadata:(id)metadata parameterIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)fetchActionOutputValueWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)fetchSuggestedActionsWithSiriLanguageCode:(id)code completionHandler:(id /* block */)handler;
- (void)fetchSuggestedActionsForStartWorkoutAction:(id)action completionHandler:(id /* block */)handler;
- (void)fetchSuggestedFocusActionsForActionMetadata:(id)metadata suggestionContext:(id)context completionHandler:(id /* block */)handler;
- (void)fetchActionAppContextFromAction:(id)action completionHandler:(id /* block */)handler;
- (void)fetchActionForAutoShortcutPhrase:(id)phrase completionHandler:(id /* block */)handler;
- (void)fetchActionForAppShortcutIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)fetchDestinationMDMAccountIdentifierForAction:(id)action completionHandler:(id /* block */)handler;
- (void)fetchStateForAppIntentIdentifiers:(id)identifiers completionHandler:(id /* block */)handler;
- (void)updateAppShortcutParametersWithCompletionHandler:(id /* block */)handler;
- (void)fetchAppShortcutParametersWithCompletionHandler:(id /* block */)handler;
@end

#endif /* LNConnectionHostInterface_Protocol_h */