/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRLyricsItemProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int userProvided : 1; 
    }  _has;
    NSString * _lyrics;
    _MRLyricsTokenProtobuf * _token;
    BOOL  _userProvided;
}

@property (nonatomic, readonly) BOOL hasLyrics;
@property (nonatomic, readonly) BOOL hasToken;
@property (nonatomic) BOOL hasUserProvided;
@property (nonatomic, retain) NSString *lyrics;
@property (nonatomic, retain) _MRLyricsTokenProtobuf *token;
@property (nonatomic) BOOL userProvided;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLyrics;
- (BOOL)hasToken;
- (BOOL)hasUserProvided;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)lyrics;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasUserProvided:(BOOL)arg1;
- (void)setLyrics:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setUserProvided:(BOOL)arg1;
- (id)token;
- (BOOL)userProvided;
- (void)writeTo:(id)arg1;

@end
