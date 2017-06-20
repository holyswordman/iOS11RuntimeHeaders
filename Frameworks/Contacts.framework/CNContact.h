/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContact : NSObject <CNContactAugmentation, CNObjectValidation, CNSuggested, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _accountIdentifier;
    CNContactKeyVector * _availableKeyDescriptor;
    NSDateComponents * _birthday;
    NSArray * _calendarURIs;
    CNActivityAlert * _callAlert;
    NSString * _cardDAVUID;
    NSArray * _contactRelations;
    long long  _contactType;
    NSDate * _creationDate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    NSArray * _dates;
    NSString * _departmentName;
    long long  _displayNameOrder;
    NSArray * _emailAddresses;
    NSString * _familyName;
    NSData * _fullscreenImageData;
    NSString * _givenName;
    int  _iOSLegacyIdentifier;
    NSData * _imageData;
    bool  _imageDataAvailable;
    NSArray * _instantMessageAddresses;
    NSString * _internalIdentifier;
    NSString * _jobTitle;
    NSString * _linkIdentifier;
    NSArray * _linkedContacts;
    NSString * _mapsData;
    NSString * _middleName;
    NSDate * _modificationDate;
    NSString * _namePrefix;
    NSString * _nameSuffix;
    NSString * _nickname;
    NSDateComponents * _nonGregorianBirthday;
    NSString * _note;
    NSString * _organizationName;
    NSArray * _phoneNumbers;
    NSString * _phonemeData;
    NSString * _phoneticFamilyName;
    NSString * _phoneticGivenName;
    NSString * _phoneticMiddleName;
    NSString * _phoneticOrganizationName;
    NSArray * _postalAddresses;
    NSString * _preferredApplePersonaIdentifier;
    bool  _preferredForImage;
    bool  _preferredForName;
    NSString * _preferredLikenessSource;
    NSString * _previousFamilyName;
    NSString * _pronunciationFamilyName;
    NSString * _pronunciationGivenName;
    NSString * _searchIndex;
    NSString * _sectionForSortingByFamilyName;
    NSString * _sectionForSortingByGivenName;
    CNContact * _snapshot;
    NSArray * _socialProfiles;
    NSString * _sortingFamilyName;
    NSString * _sortingGivenName;
    NSString * _storeIdentifier;
    NSDictionary * _storeInfo;
    CNActivityAlert * _textAlert;
    NSData * _thumbnailImageData;
    NSArray * _urlAddresses;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *activityAlerts;
@property (nonatomic, readonly) <CNKeyDescriptor> *availableKeyDescriptor;
@property (nonatomic, readonly) NSSet *availableKeys;
@property (nonatomic, readonly, copy) NSDateComponents *birthday;
@property (nonatomic, readonly) NSArray *birthdays;
@property (nonatomic, readonly, copy) NSArray *calendarURIs;
@property (nonatomic, readonly, copy) CNActivityAlert *callAlert;
@property (nonatomic, readonly, copy) NSString *cardDAVUID;
@property (readonly, copy) NSString *companyName;
@property (nonatomic, readonly, copy) NSArray *contactRelations;
@property (nonatomic, readonly) long long contactType;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, readonly, copy) NSArray *dates;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *departmentName;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayNameOrder;
@property (nonatomic, readonly, copy) NSArray *emailAddresses;
@property (nonatomic, readonly, copy) NSString *familyName;
@property (readonly, copy) NSString *firstName;
@property (nonatomic, readonly, copy) NSString *fullName;
@property (nonatomic, readonly, copy) NSData *fullscreenImageData;
@property (nonatomic, readonly, copy) NSString *givenName;
@property (nonatomic, readonly) bool hasBeenPersisted;
@property (nonatomic, readonly) bool hasNonPersistedData;
@property (nonatomic, readonly) bool hasSuggestedProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int iOSLegacyIdentifier;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSData *imageData;
@property (nonatomic, readonly) bool imageDataAvailable;
@property (nonatomic, readonly, copy) NSArray *instantMessageAddresses;
@property (nonatomic, readonly, copy) NSString *internalIdentifier;
@property (nonatomic, readonly, copy) NSString *jobTitle;
@property (readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSString *linkIdentifier;
@property (nonatomic, readonly, copy) NSArray *linkedContacts;
@property (readonly, copy) NSString *maidenName;
@property (nonatomic, readonly, copy) NSArray *mainStoreLinkedContacts;
@property (nonatomic, readonly, copy) NSString *mapsData;
@property (nonatomic, readonly, copy) NSString *middleName;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, readonly, copy) NSString *namePrefix;
@property (nonatomic, readonly, copy) NSString *nameSuffix;
@property (readonly, copy) NSString *nameTitle;
@property (nonatomic, readonly, copy) NSString *nickname;
@property (nonatomic, readonly, copy) NSDateComponents *nonGregorianBirthday;
@property (nonatomic, readonly, copy) NSString *note;
@property (nonatomic, readonly, copy) NSString *organizationName;
@property (nonatomic, readonly) NSString *personName;
@property (nonatomic, readonly, copy) NSArray *phoneNumbers;
@property (nonatomic, readonly, copy) NSString *phonemeData;
@property (nonatomic, readonly, copy) NSString *phoneticCompanyName;
@property (nonatomic, readonly, copy) NSString *phoneticFamilyName;
@property (readonly, copy) NSString *phoneticFirstName;
@property (nonatomic, readonly, copy) NSString *phoneticFullName;
@property (nonatomic, readonly, copy) NSString *phoneticGivenName;
@property (readonly, copy) NSString *phoneticLastName;
@property (nonatomic, readonly, copy) NSString *phoneticMiddleName;
@property (nonatomic, readonly, copy) NSString *phoneticOrganizationName;
@property (nonatomic, readonly, copy) NSArray *postalAddresses;
@property (nonatomic, readonly, copy) NSString *preferredApplePersonaIdentifier;
@property (getter=isPreferredForImage, nonatomic, readonly) bool preferredForImage;
@property (getter=isPreferredForName, nonatomic, readonly) bool preferredForName;
@property (nonatomic, readonly, copy) NSString *preferredLikenessSource;
@property (nonatomic, readonly, copy) NSString *previousFamilyName;
@property (nonatomic, readonly, copy) NSString *pronunciationFamilyName;
@property (nonatomic, readonly, copy) NSString *pronunciationGivenName;
@property (nonatomic, readonly, copy) NSArray *relatedNames;
@property (nonatomic, readonly, copy) NSString *searchIndex;
@property (nonatomic, readonly, copy) NSString *sectionForSortingByFamilyName;
@property (nonatomic, readonly, copy) NSString *sectionForSortingByGivenName;
@property (nonatomic, readonly, copy) NSArray *socialProfiles;
@property (nonatomic, readonly, copy) NSString *sortingFamilyName;
@property (nonatomic, readonly, copy) NSString *sortingGivenName;
@property (nonatomic, readonly, copy) NSString *storeIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *storeInfo;
@property (nonatomic, readonly, copy) NSString *stringForIndexing;
@property (getter=isSuggested, nonatomic, readonly) bool suggested;
@property (getter=isSuggestedMe, nonatomic, readonly) bool suggestedMe;
@property (nonatomic, readonly) NSString *suggestionFoundInBundleId;
@property (nonatomic, readonly) SGRecordId *suggestionRecordId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsInstantMessageService;
@property (nonatomic, readonly, copy) CNActivityAlert *textAlert;
@property (nonatomic, readonly, copy) NSData *thumbnailImageData;
@property (getter=isUnified, nonatomic, readonly) bool unified;
@property (getter=isUnknown, nonatomic, readonly) bool unknown;
@property (nonatomic, readonly, copy) NSArray *urlAddresses;
@property (nonatomic, readonly) NSData *vCardRepresentation;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)_contactWithContact:(id)arg1 createNewInstance:(bool)arg2 propertyDescriptions:(id)arg3;
+ (int)abPropertyIDfromContactPropertyKey:(id)arg1;
+ (id)alwaysFetchedKeys;
+ (id /* block */)comparatorForNameSortOrder:(long long)arg1;
+ (id)contact;
+ (id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2;
+ (id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(bool)arg3;
+ (id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2;
+ (id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(bool)arg3;
+ (id)contactFromSuggestion:(id)arg1;
+ (id)contactIdentifierFromSuggestionID:(id)arg1;
+ (id)contactPropertyKeyFromABPropertyID:(int)arg1;
+ (id)contactPropertyKeyFromPublicABPropertyID:(int)arg1;
+ (id)contactWithContact:(id)arg1;
+ (id)contactWithDisplayName:(id)arg1 emailOrPhoneNumber:(id)arg2;
+ (id)contactWithIdentifier:(id)arg1;
+ (id)descriptorForAllComparatorKeys;
+ (id)descriptorForKeyDescriptors:(id)arg1 description:(id)arg2;
+ (id)descriptorForRequiredKeysForSearchableItem;
+ (id)identifierProvider;
+ (id)localizedStringForKey:(id)arg1;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)newContactWithPropertyKeys:(id)arg1 withValuesFromContact:(id)arg2;
+ (id)predicateForAllContacts;
+ (id)predicateForContactMatchingEKParticipantWithName:(id)arg1 emailAddress:(id)arg2 URL:(id)arg3 predicateDescription:(id)arg4;
+ (id)predicateForContactMatchingEmailAddress:(id)arg1;
+ (id)predicateForContactMatchingMapString:(id)arg1;
+ (id)predicateForContactMatchingPhoneNumber:(id)arg1;
+ (id)predicateForContactMatchingURLString:(id)arg1;
+ (id)predicateForContactsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForContactsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForContactsLinkedToContact:(id)arg1;
+ (id)predicateForContactsLinkedToContactWithIdentifier:(id)arg1;
+ (id)predicateForContactsMatchingEmailAddress:(id)arg1;
+ (id)predicateForContactsMatchingFullTextSearch:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;
+ (id)predicateForContactsMatchingInstantMessageAddress:(id)arg1;
+ (id)predicateForContactsMatchingName:(id)arg1;
+ (id)predicateForContactsMatchingName:(id)arg1 options:(unsigned long long)arg2;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1 prefixHint:(id)arg2;
+ (id)predicateForContactsMatchingPostalAddress:(id)arg1;
+ (id)predicateForContactsMatchingSocialProfile:(id)arg1;
+ (id)predicateForContactsMatchingString:(id)arg1 accountIdentifier:(id)arg2 containerIdentifier:(id)arg3 groupIdentifier:(id)arg4;
+ (id)predicateForContactsWithIdentifiers:(id)arg1;
+ (id)predicateForContactsWithNonUnifiedIdentifiers:(id)arg1;
+ (id)predicateForContactsWithOrganizationName:(id)arg1;
+ (id)predicateForFaultFulfillmentForLegacyIdentifier:(unsigned int)arg1 identifier:(id)arg2;
+ (id)predicateForLegacyIdentifier:(unsigned int)arg1;
+ (id)predicateForMeContact;
+ (id)predicateForPreferredNameInContainersWithIdentifiers:(id)arg1 groupsWithIdentifiers:(id)arg2;
+ (id)predicateForPreferredNameInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)predicateForSuggestionIdentifier:(unsigned long long)arg1;
+ (id /* block */)preferredImageComparator;
+ (int)publicABPropertyIDFromContactPropertyKey:(id)arg1;
+ (id)storeInfoFromCoder:(id)arg1 storeIdentifier:(id)arg2 key:(id)arg3;
+ (id)suggestionIDFromContactIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)unifyContacts:(id)arg1;

- (void).cxx_destruct;
- (id)_filteredArrayForValidValues:(id)arg1;
- (id)_searchableItem;
- (id)accountIdentifier;
- (id)activityAlerts;
- (bool)areAllAvailableKeysEqualToContact:(id)arg1 ignoringIdentifiers:(bool)arg2;
- (bool)areAllPropertiesButContactIdentifierEqualToContact:(id)arg1;
- (bool)areAllPropertiesEqualToContactIgnoringIdentifiers:(id)arg1;
- (bool)areKeysAvailable:(id)arg1;
- (void)assertKeyIsAvailable:(id)arg1;
- (void)assertKeysAreAvailable:(id)arg1;
- (id)availableKeyDescriptor;
- (id)availableKeys;
- (id)birthday;
- (id)calendarURIs;
- (id)callAlert;
- (id)cardDAVUID;
- (id)companyName;
- (id)contactRelations;
- (long long)contactType;
- (id)copyWithNoSuggestion;
- (id)copyWithPropertyKeys:(id)arg1;
- (id)copyWithSelfAsSnapshot;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)dates;
- (id)departmentName;
- (id)description;
- (void*)detachedPerson;
- (void*)detachedPersonWithError:(id*)arg1;
- (id)diffToSnapshotAndReturnError:(id*)arg1;
- (long long)displayNameOrder;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)firstName;
- (id)fullName;
- (id)fullscreenImageData;
- (id)givenName;
- (bool)hasBeenPersisted;
- (bool)hasChanges;
- (bool)hasSuggestedProperties;
- (unsigned long long)hash;
- (int)iOSLegacyIdentifier;
- (id)identifier;
- (id)imageData;
- (bool)imageDataAvailable;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 availableKeyDescriptor:(id)arg2;
- (id)instantMessageAddresses;
- (id)internalIdentifier;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringIdentifiers:(id)arg1;
- (bool)isKeyAvailable:(id)arg1;
- (bool)isPreferredForImage;
- (bool)isPreferredForName;
- (bool)isProperty:(id)arg1 equalToOtherIgnoreIdentifiers:(id)arg2;
- (bool)isSuggested;
- (bool)isSuggestedMe;
- (bool)isUnified;
- (bool)isUnifiedWithContactWithIdentifier:(id)arg1;
- (bool)isValid:(id*)arg1;
- (id)jobTitle;
- (id)keyVector;
- (id)lastName;
- (id)linkIdentifier;
- (id)linkedContacts;
- (id)linkedContactsFromStoreWithIdentifier:(id)arg1;
- (id)linkedIdentifierMap;
- (id)maidenName;
- (id)mainStoreLinkedContacts;
- (id)mapsData;
- (id)middleName;
- (id)modificationDate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nameTitle;
- (id)newContactWithSameValues;
- (id)nickname;
- (id)nonGregorianBirthday;
- (id)note;
- (id)organizationName;
- (bool)overwritePerson:(void*)arg1;
- (bool)overwritePerson:(void*)arg1 error:(id*)arg2;
- (bool)overwritePublicABPerson:(void*)arg1;
- (id)phoneNumbers;
- (id)phonemeData;
- (id)phoneticCompanyName;
- (id)phoneticFamilyName;
- (id)phoneticFirstName;
- (id)phoneticFullName;
- (id)phoneticGivenName;
- (id)phoneticLastName;
- (id)phoneticMiddleName;
- (id)phoneticOrganizationName;
- (id)postalAddresses;
- (id)preferredApplePersonaIdentifier;
- (bool)preferredForImage;
- (bool)preferredForName;
- (id)preferredLikenessSource;
- (id)previousFamilyName;
- (id)pronunciationFamilyName;
- (id)pronunciationGivenName;
- (id)relatedNames;
- (id)searchIndex;
- (id)searchableItemAttributeSetForUserActivity;
- (id)searchableItemForDragging;
- (id)searchableItemForIndexing;
- (id)sectionForSortingByFamilyName;
- (id)sectionForSortingByGivenName;
- (id)shortDebugDescription;
- (id)snapshot;
- (id)socialProfiles;
- (id)sortingFamilyName;
- (id)sortingGivenName;
- (id)storeIdentifier;
- (id)storeInfo;
- (id)stringForIndexing;
- (id)suggestionFoundInBundleId;
- (id)suggestionRecordId;
- (id)textAlert;
- (id)thumbnailImageData;
- (bool)updateNewPublicABPerson:(void*)arg1 inAddressBook:(void*)arg2;
- (id)urlAddresses;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (bool)contactRemindersEnabled;
+ (id)contactWithStateRestorationCoder:(id)arg1 store:(id)arg2 keys:(id)arg3;
+ (id)descriptorForAllUIKeys;
+ (id)multiValuePropertiesSupportingPredicateValidation;
+ (bool)quickActionsEnabled;
+ (bool)settableMeCardEnabled;
+ (bool)suggestionsEnabled;
+ (bool)suggestionsShownInEditMode;

- (id)birthdays;
- (bool)hasNonPersistedData;
- (bool)isUnknown;
- (id)personName;
- (bool)supportsInstantMessageService;
- (id)vCardRepresentation;
- (id)validPropertiesByEvaluatingPredicate:(id)arg1 onMultiValueProperties:(id)arg2;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)mapsContactKeys;

- (bool)_maps_isEqualToContact:(id)arg1;

@end
