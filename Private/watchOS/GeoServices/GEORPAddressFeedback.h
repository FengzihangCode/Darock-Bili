//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORPAddressFeedback_h
#define GEORPAddressFeedback_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDPlace.h"
#include "GEOPDPlaceRequest.h"
#include "GEORPAddressCorrections.h"
#include "GEORPPersonalizedMapsContext.h"
#include "NSCopying-Protocol.h"

@class PBDataReader, PBUnknownFields;

@interface GEORPAddressFeedback : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_type; unsigned int x :1 read_unknownFields; unsigned int x :1 read_address; unsigned int x :1 read_personalizedMaps; unsigned int x :1 read_placeRequest; unsigned int x :1 read_place; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) GEORPAddressCorrections *address;
@property (readonly, nonatomic) BOOL hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasPersonalizedMaps;
@property (retain, nonatomic) GEORPPersonalizedMapsContext *personalizedMaps;
@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)typeAsString:(int)string;
- (int)StringAsType:(id)type;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)clearSensitiveFields:(unsigned long long)fields;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEORPAddressFeedback_h */