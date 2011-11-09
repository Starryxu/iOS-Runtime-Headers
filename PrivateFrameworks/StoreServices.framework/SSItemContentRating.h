/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSDictionary, SSItemArtworkImage, NSMutableDictionary;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property(getter=isExplicitContent,readonly) BOOL explicitContent;
@property int rank;
@property(copy) NSString * ratingDescription;
@property(copy) NSString * ratingLabel;
@property int ratingSystem;
@property(getter=isRestricted,readonly) BOOL restricted;
@property BOOL shouldHideWhenRestricted;
@property(readonly) NSDictionary * contentRatingDictionary;
@property(readonly) SSItemArtworkImage * ratingSystemLogo;

+ (id)stringForRatingSystem:(int)arg1;
+ (int)ratingSystemFromString:(id)arg1;

- (void)setRank:(int)arg1;
- (int)rank;
- (void)_setValueCopy:(id)arg1 forProperty:(id)arg2;
- (id)contentRatingDictionary;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (void)setShouldHideWhenRestricted:(BOOL)arg1;
- (id)ratingSystemLogo;
- (void)setRatingLabel:(id)arg1;
- (id)ratingLabel;
- (void)setRatingDescription:(id)arg1;
- (id)ratingDescription;
- (BOOL)_isRatingSystemForMusic:(int)arg1;
- (BOOL)isExplicitContent;
- (BOOL)_isRatingSystemForTV:(int)arg1;
- (BOOL)_isRatingSystemForMovies:(int)arg1;
- (BOOL)_isRatingSystemForApps:(int)arg1;
- (BOOL)shouldHideWhenRestricted;
- (int)ratingSystem;
- (BOOL)isRestricted;
- (void)setRatingSystem:(int)arg1;

@end