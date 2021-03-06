/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNIKEv1ProposalParameters : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    int  _diffieHellmanGroup;
    int  _encryptionAlgorithm;
    int  _integrityAlgorithm;
    int  _lifetimeSeconds;
}

@property int diffieHellmanGroup;
@property int encryptionAlgorithm;
@property int integrityAlgorithm;
@property int lifetimeSeconds;

+ (BOOL)supportsSecureCoding;

- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned int)arg2;
- (int)diffieHellmanGroup;
- (void)encodeWithCoder:(id)arg1;
- (int)encryptionAlgorithm;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)integrityAlgorithm;
- (int)lifetimeSeconds;
- (void)setDiffieHellmanGroup:(int)arg1;
- (void)setEncryptionAlgorithm:(int)arg1;
- (void)setIntegrityAlgorithm:(int)arg1;
- (void)setLifetimeSeconds:(int)arg1;

@end
