/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAssetCollection : NSObject <NSCopying, NSSecureCoding> {
    NSString * _GUID;
    NSString * _albumGUID;
    NSArray * _assets;
    NSString * _ctag;
    NSString * _email;
    NSString * _fileName;
    NSString * _firstName;
    NSString * _fullName;
    bool  _hasComments;
    bool  _isDeletable;
    bool  _isMine;
    NSString * _lastName;
    NSDictionary * _metadata;
    NSString * _path;
    NSString * _personID;
    long long  _photoNumber;
    NSDate * _timestamp;
    <NSCoding> * _userInfo;
}

@property (nonatomic, retain) NSString *GUID;
@property (nonatomic, retain) NSString *albumGUID;
@property (nonatomic, retain) NSArray *assets;
@property (nonatomic, retain) NSString *ctag;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *fullName;
@property (nonatomic) bool hasComments;
@property (nonatomic) bool isDeletable;
@property (nonatomic) bool isMine;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSString *personID;
@property (nonatomic) long long photoNumber;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) <NSCoding> *userInfo;

+ (id)MSASPAssetCollectionFromProtocolDictionary:(id)arg1;
+ (id)assetCollectionWithAssetCollection:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)GUID;
- (id)MSASPProtocolDictionary;
- (id)albumGUID;
- (id)assets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)ctag;
- (id)description;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (id)firstName;
- (id)fullName;
- (bool)hasComments;
- (bool)hasVideoAsset;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileName:(id)arg1 path:(id)arg2;
- (bool)isAutoloopVideo;
- (bool)isDeletable;
- (bool)isEqual:(id)arg1;
- (bool)isMine;
- (bool)isPhotoIris;
- (bool)isVideo;
- (id)lastName;
- (id)mediaAssetType;
- (id)metadata;
- (id)path;
- (id)personID;
- (long long)photoNumber;
- (void)setAlbumGUID:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setCtag:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setGUID:(id)arg1;
- (void)setHasComments:(bool)arg1;
- (void)setIsDeletable:(bool)arg1;
- (void)setIsMine:(bool)arg1;
- (void)setLastName:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setPath:(id)arg1;
- (void)setPersonID:(id)arg1;
- (void)setPhotoNumber:(long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)timestamp;
- (id)userInfo;

@end