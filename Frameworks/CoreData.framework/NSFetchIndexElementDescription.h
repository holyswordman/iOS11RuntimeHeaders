/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSFetchIndexElementDescription : NSObject <NSCoding> {
    unsigned long long  _collationType;
    NSFetchIndexDescription * _indexDescription;
    struct __indexElementDescriptionFlags { 
        unsigned int _ascending : 1; 
        unsigned int _propertyIsRetained : 1; 
        unsigned int _reservedEntityDescription : 30; 
    }  _indexElementDescriptionFlags;
    NSPropertyDescription * _property;
    NSString * _propertyName;
}

@property (getter=isAscending) bool ascending;
@property unsigned long long collationType;
@property (nonatomic, readonly) NSFetchIndexDescription *indexDescription;
@property (readonly, retain) NSPropertyDescription *property;
@property (readonly, retain) NSString *propertyName;

- (bool)_isEditable;
- (id)_resolveProperty;
- (void)_setAscending:(bool)arg1;
- (void)_setIndexDescription:(id)arg1;
- (void)_throwIfNotEditable;
- (void)_validateCollationType:(unsigned long long)arg1 forProperty:(id)arg2;
- (unsigned long long)collationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)indexDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1 collationType:(unsigned long long)arg2;
- (id)initWithPropertyName:(id)arg1 collationType:(unsigned long long)arg2;
- (id)initWithPropertyName:(id)arg1 property:(id)arg2 collationType:(unsigned long long)arg3 ascending:(bool)arg4;
- (bool)isAscending;
- (bool)isEqual:(id)arg1;
- (id)property;
- (id)propertyName;
- (void)setAscending:(bool)arg1;
- (void)setCollationType:(unsigned long long)arg1;

@end
