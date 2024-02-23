//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLPRRoot_h
#define GEOLPRRoot_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSMutableDictionary, PBDataReader;

@interface GEOLPRRoot : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_powerTypes; unsigned int x :1 read_regions; unsigned int x :1 read_vehicleTypes; unsigned int x :1 wrote_anyField; } _flags;
}

@property (retain, nonatomic) NSMutableArray *regions;
@property (retain, nonatomic) NSMutableDictionary *powerTypes;
@property (retain, nonatomic) NSMutableDictionary *vehicleTypes;

/* class methods */
+ (Class)regionsType;
+ (Class)powerTypesType;
+ (Class)vehicleTypesType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)clearRegions;
- (void)addRegions:(id)regions;
- (unsigned long long)regionsCount;
- (id)regionsAtIndex:(unsigned long long)index;
- (void)clearPowerTypes;
- (void)setPowerTypesValue:(id)value forKey:(id)key;
- (id)powerTypesForKey:(id)key;
- (void)enumeratePowerTypesUsingBlock:(id /* block */)block;
- (unsigned long long)powerTypesCount;
- (void)clearVehicleTypes;
- (void)setVehicleTypesValue:(id)value forKey:(id)key;
- (id)vehicleTypesForKey:(id)key;
- (void)enumerateVehicleTypesUsingBlock:(id /* block */)block;
- (unsigned long long)vehicleTypesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOLPRRoot_h */