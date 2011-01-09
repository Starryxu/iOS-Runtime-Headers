/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray, CKSMSMessageDelivery;



@interface CKSMSMessage : CKMessage 
{
    NSMutableArray *_messages;
    NSInteger _associationID;
    NSInteger _rowID;
    CKSMSMessageDelivery *_delivery;
}

@property(retain) CKSMSMessageDelivery *delivery;
@property(readonly) NSInteger rowID;
@property(readonly) NSInteger associationID;


- (id)messages;
- (id)sender;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
- (void)setMessages:(id)arg1;
- (void)prepareToResend;
- (void)_setupDeliveryIfPending;
- (void)deliveredSubpart:(NSInteger)arg1 totalSubparts:(NSInteger)arg2 success:(BOOL)arg3;
- (void)deliveryCompletedForMessage:(id)arg1;
- (void)deliveryFailedForMessage:(id)arg1;
- (void)deliveryPartiallyFailedForMessage:(id)arg1;
- (id)delivery;
- (NSInteger)associationID;
- (id)initWithCTMessage:(struct __CKSMSRecord { }*)arg1 messageParts:(id)arg2;
- (id)initWithRowID:(NSInteger)arg1;
- (id)initWithCTMessages:(id)arg1 messageParts:(id)arg2;
- (void)setDelivery:(id)arg1;
- (void)addMessage:(struct __CKSMSRecord { }*)arg1;
- (NSInteger)rowID;
- (NSInteger)messageCount;
- (double)_loadDate;
- (void)markAsRead;
- (BOOL)_loadOutgoing;
- (void)_loadSubject;
- (id)_newParts;
- (void)_loadText;
- (void)_storeUIFlags:(unsigned long)arg1;
- (void)_loadUIFlags;
- (NSInteger)totalMessageCount;
- (NSInteger)sentCount;
- (void)_loadFailedSendCount;
- (id)alertImageData;
- (BOOL)containsDisplayableMessageParts;
- (BOOL)hasBeenRead;
- (BOOL)isOnlyDisplayableMessagePart:(id)arg1;
- (void)deleteMessagePart:(id)arg1;
- (void)permanentlyRemoveMessage;
- (BOOL)isForward;
- (BOOL)isPlaceholder;
- (id)address;

@end