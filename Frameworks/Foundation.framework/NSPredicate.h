/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPredicate : NSObject <NSCopying, NSSecureCoding> {
    struct _predicateFlags { 
        unsigned int _evaluationBlocked : 1; 
        unsigned int _reservedPredicateFlags : 31; 
    }  _predicateFlags;
    unsigned int  reserved;
}

@property (readonly, copy) NSString *predicateFormat;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)initialize;
+ (id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2;
+ (id)predicateWithBlock:(id /* block */)arg1;
+ (id)predicateWithFormat:(id)arg1;
+ (id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (id)predicateWithFormat:(id)arg1 arguments:(char *)arg2;
+ (id)predicateWithValue:(bool)arg1;
+ (struct __CFLocale { }*)retainedLocale;
+ (bool)supportsSecureCoding;

- (bool)_allowsEvaluation;
- (void)_validateForMetadataQueryScopes:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)generateMetadataDescription;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)predicateWithSubstitutionVariables:(id)arg1;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)minimalFormInContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy

- (void)ab_addCallbackContextToArray:(id)arg1;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindSelectClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (bool)ab_hasCallback;
- (id)ab_metadataForMatchingRow:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 columnOffset:(unsigned long long)arg2;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 ranked:(bool)arg2 addressBook:(void*)arg3 propertyIndices:(const struct __CFDictionary {}**)arg4;
- (void)ab_runPredicateWithSortOrder:(unsigned int)arg1 ranked:(bool)arg2 inAddressBook:(void*)arg3 withDelegate:(id)arg4;

@end
