/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSData, NSArray;



@interface CPSearchMatcher : NSObject 
{
    NSArray *_components;
    NSData *_context;
    BOOL _contextIsDiacriticSensitive;
}


- (id)initWithSearchString:(id)arg1 options:(NSInteger)arg2;
- (BOOL)matches:(id)arg1;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(NSInteger)arg3;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2;
- (id)initWithSearchString:(id)arg1;
- (BOOL)matchesUTF8String:(const char *)arg1;

@end