//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef ENXMLWriter_h
#define ENXMLWriter_h
@import Foundation;

#include "ENXMLDTD.h"
#include "ENXMLWriterDelegate-Protocol.h"

@class NSMutableString, NSString;

@interface ENXMLWriter : NSObject {
  /* instance variables */
  struct _xmlTextWriter * _xmlWriter;
  struct _xmlOutputBuffer { void * x0; undefined * x1; undefined * x2; struct _xmlCharEncodingHandler * x3; struct _xmlBuf * x4; struct _xmlBuf * x5; int x6; int x7; } * _xmlOutputBuffer;
}

@property (retain, nonatomic) NSString *currentElementName;
@property (weak, nonatomic) NSObject<ENXMLWriterDelegate> *delegate;
@property (retain, nonatomic) ENXMLDTD *dtd;
@property (nonatomic) unsigned long long openElementCount;
@property (readonly, nonatomic) NSString *contents;

/* instance methods */
- (id)init;
- (id)initWithDelegate:(id)delegate;
- (void)dealloc;
- (void)startDocument;
- (void)endDocument;
- (BOOL)startElement:(id)element;
- (BOOL)startElement:(id)element attributes:(id)attributes;
- (void)endElement;
- (BOOL)writeElement:(id)element attributes:(id)attributes content:(id)content;
- (BOOL)writeAttributeName:(id)name value:(id)value;
- (void)writeString:(id)string raw:(BOOL)raw;
- (void)writeRawString:(id)string;
- (void)writeString:(id)string;
- (void)startCDATA;
- (void)writeCDATA:(id)cdata;
- (void)endCDATA;
- (BOOL)startElement:(id)element withAttributes:(id)attributes;
- (BOOL)writeElement:(id)element withAttributes:(id)attributes content:(id)content;
@end

#endif /* ENXMLWriter_h */