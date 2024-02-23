//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SALocalSearchShowMapPoints_h
#define SALocalSearchShowMapPoints_h
@import Foundation;

#include "SADomainCommand.h"
#include "SALocalSearchCarRouteOptions.h"
#include "SALocalSearchMapItem.h"
#include "SALocalSearchMapItemList.h"

@class NSDate, NSNumber, NSString;

@interface SALocalSearchShowMapPoints : SADomainCommand

@property (copy, nonatomic) NSDate *arrivalDate;
@property (retain, nonatomic) SALocalSearchCarRouteOptions *carRouteOptions;
@property (nonatomic) BOOL chainResultSet;
@property (copy, nonatomic) NSDate *departureDate;
@property (copy, nonatomic) NSString *directionsType;
@property (retain, nonatomic) SALocalSearchMapItem *itemDestination;
@property (retain, nonatomic) SALocalSearchMapItem *itemSource;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *preferredDirectionsMode;
@property (copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
@property (nonatomic) BOOL searchAlongRoute;
@property (retain, nonatomic) SALocalSearchMapItemList *searchItems;
@property (nonatomic) BOOL showDirections;
@property (nonatomic) BOOL showTraffic;
@property (nonatomic) BOOL suppressNavigation;

/* class methods */
+ (id)showMapPoints;
+ (id)showMapPointsWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SALocalSearchShowMapPoints_h */