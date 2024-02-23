//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MSVLyricsLine_h
#define MSVLyricsLine_h
@import Foundation;

#include "MSVLyricsTextElement.h"
#include "MSVLyricsLine.h"
#include "MSVLyricsSection.h"
#include "MSVLyricsWord.h"

@class NSArray, NSAttributedString, NSString;

@interface MSVLyricsLine : MSVLyricsTextElement

@property (nonatomic) BOOL instrumentalBreak;
@property (nonatomic) long long lineIndex;
@property (nonatomic) long long originalLineIndex;
@property (weak, nonatomic) MSVLyricsSection *parentSection;
@property (retain, nonatomic) MSVLyricsLine *nextLine;
@property (retain, nonatomic) NSArray *words;
@property (copy, nonatomic) NSString *translationKey;
@property (nonatomic) BOOL hasBackgroundVocal;
@property (retain, nonatomic) MSVLyricsWord *backgroundVocals;
@property (copy, nonatomic) NSAttributedString *primaryVocalText;

/* instance methods */
- (id)init;
- (id)description;
- (BOOL)containsTimeOffset:(double)offset withErrorMargin:(double)margin;
- (id)agent;
- (BOOL)isInstrumentalBreak;
@end

#endif /* MSVLyricsLine_h */