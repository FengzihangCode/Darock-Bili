//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 435.201.0.0.0
//
#ifndef IPDateFormat_h
#define IPDateFormat_h
@import Foundation;

#include "IPFormat.h"

@class NSString;

@interface IPDateFormat : IPFormat

@property (readonly, nonatomic) NSString *option;
@property (readonly, nonatomic) NSString *title;

/* class methods */
+ (double)sampleTime;
+ (id)dateFormatterFromLocale;
+ (id)dateFormatterFromLanguage;
+ (id)dateFormatFromFormatter:(id)formatter style:(unsigned long long)style;
+ (id)availableDateFormats;
+ (id)currentDateFormat;
+ (void)setDateFormat:(id)format;
+ (BOOL)dateFormatIsAllNumeric:(id)numeric;

/* instance methods */
- (id)initWithOption:(id)option title:(id)title;
@end

#endif /* IPDateFormat_h */