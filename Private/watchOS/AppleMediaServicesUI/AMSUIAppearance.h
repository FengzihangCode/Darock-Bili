//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIAppearance_h
#define AMSUIAppearance_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary;

@interface AMSUIAppearance : NSObject<NSCopying>

@property (retain, nonatomic) NSDictionary *_messageFontDictionary;
@property (retain, nonatomic) NSDictionary *_titleFontDictionary;

/* class methods */
+ (id)_accessoryButtonColorWithDictionary:(id)dictionary;
+ (id)_accessoryButtonBackgroundColorWithDictionary:(id)dictionary;
+ (id)_accessorySecondaryButtonBackgroundColorWithDictionary:(id)dictionary;
+ (id)_accessorySecondaryButtonColorWithDictionary:(id)dictionary;
+ (id)_accessoryButtonFontWithDictionary:(id)dictionary;
+ (id)_accessorySecondaryButtonFontWithDictionary:(id)dictionary;
+ (id)_backgroundColorWithDictionary:(id)dictionary;
+ (id)_backgroundColorWithMetadataDictionary:(id)dictionary;
+ (id)_backgroundImageWithDictionary:(id)dictionary;
+ (id)_backgroundImageWithMetadataDictionary:(id)dictionary;
+ (id)_footerButtonColorWithDictionary:(id)dictionary;
+ (id)_footerButtonFontWithDictionary:(id)dictionary;
+ (long long)_iconAnimationPlayCount:(id)count;
+ (id)_imageSymbolConfigurationWithDictionary:(id)dictionary;
+ (id)_imageTintColorWithDictionary:(id)dictionary;
+ (id)_impressionAnimationIdentifierWithDictionary:(id)dictionary;
+ (id)_messageFontWithDictionary:(id)dictionary;
+ (id)_messageTextColorWithDictionary:(id)dictionary;
+ (id)_separatorColorWithDictionary:(id)dictionary;
+ (id)_titleFontWithDictionary:(id)dictionary;
+ (id)_titleTextColorWithDictionary:(id)dictionary;
+ (long long)_primaryImageRenderingModeWithDictionary:(id)dictionary;
+ (id)_gradientLayerTypeForRawValue:(id)value;
+ (id)_gradientImageWithDictionary:(id)dictionary;
+ (id)_defaultButtonBackgroundColorForStyle:(unsigned long long)style withTraitCollection:(id)collection;
+ (id)_defaultBackgroundColorForStyle:(unsigned long long)style withTraitCollection:(id)collection;
+ (id)_defaultButtonContentColorForStyle:(unsigned long long)style isFooter:(BOOL)footer;
+ (id)_defaultButtonTextColorForStyle:(unsigned long long)style isFooter:(BOOL)footer;
+ (id)_defaultButtonIconColorForStyle:(unsigned long long)style isFooter:(BOOL)footer;
+ (id)_defaultButtonTextFontForStyle:(unsigned long long)style withTraitCollection:(id)collection;
+ (id)_defaultImageViewColorForStyle:(unsigned long long)style;
+ (id)_defaultMessageColor;
+ (id)_defaultMessageFontForStyle:(unsigned long long)style withTraitCollection:(id)collection;
+ (id)_defaultSeparatorColor;
+ (id)_defaultTitleColor;
+ (id)_defaultTitleFontForStyle:(unsigned long long)style withTraitCollection:(id)collection;

/* instance methods */
- (id)init;
- (id)initWithDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* AMSUIAppearance_h */