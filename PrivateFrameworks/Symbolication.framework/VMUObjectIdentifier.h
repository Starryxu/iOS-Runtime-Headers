/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMUSymbolicator, NSMapTable, NSMutableSet, NSHashTable;



@interface VMUObjectIdentifier : NSObject 
{
    NSUInteger _task;
    VMUSymbolicator *_symbolicator;
    NSMapTable *_isaToClassInfo;
    NSHashTable *_classAddresses;
    NSMutableSet *_objcRuntimeMallocBlocks;
    NSUInteger _cfTypeCount;
    NSUInteger _objcClassCount;
    NSUInteger _cPlusPlusClassCount;
}


- (id)initWithTask:(NSUInteger)arg1 symbolicator:(id)arg2;
- (void)dealloc;
- (NSUInteger)CFTypeCount;
- (NSUInteger)ObjCclassCount;
- (NSUInteger)CPlusPlusClassCount;
- (id)objcRuntimeMallocBlocks;
- (id)readClassNameString:(NSUInteger)arg1;
- (id)classInfoForObject:(NSUInteger)arg1;
- (void)findCFTypes;
- (void)findObjCclasses;

@end