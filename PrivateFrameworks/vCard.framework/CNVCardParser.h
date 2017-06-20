/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardParser : NSObject {
    bool  _30vCard;
    NSMutableDictionary * _activityAlerts;
    NSMutableArray * _addresses;
    NSDateComponents * _altBday;
    bool  _base64;
    NSDateComponents * _bday;
    NSMutableArray * _calendarURIs;
    NSString * _carddavUID;
    NSMutableArray * _cropRects;
    NSData * _data;
    NSMutableArray * _dateComponents;
    CNVCardDateComponentsParser * _dateComponentsParser;
    unsigned long long  _defaultEncoding;
    NSMutableArray * _emails;
    unsigned long long  _encoding;
    NSMutableDictionary * _extensions;
    bool  _fullNameHasZeroLength;
    NSString * _grouping;
    bool  _hasImportErrors;
    NSData * _imageData;
    NSString * _imageGroup;
    NSString * _imageReference;
    NSMutableArray * _instantMessagingAddresses;
    NSArray * _itemParameters;
    CNVCardLexer * _lexer;
    CNVCardMutableNameComponents * _nameComponents;
    NSMutableString * _notes;
    CNVCardSelectorMap * _parameterSelectorMap;
    CNVCardSelectorMap * _parsingSelectorMap;
    NSMutableArray * _phones;
    bool  _quotedPrintable;
    NSMutableArray * _relatedNames;
    <CNVCardParsedResultBuilder> * _resultBuilder;
    NSMutableArray * _socialProfiles;
    NSString * _uid;
    NSMutableArray * _unknowns;
    NSMutableArray * _urls;
}

+ (unsigned long long)inferredStringEncodingFromData:(id)arg1;
+ (id)newParameterSelectorMap;
+ (id)newParsingSelectorMap;
+ (id)parseData:(id)arg1 resultFactory:(id)arg2;
+ (bool)parseFirstResultInData:(id)arg1 resultBuilder:(id)arg2;

- (void).cxx_destruct;
- (bool)advancePastSemicolon;
- (bool)atEOF;
- (void)cleanUpCardState;
- (long long)currentPosition;
- (id)fallbackLabelForProperty:(id)arg1;
- (id)firstCustomLabelForProperty:(id)arg1 types:(id)arg2;
- (id)firstParameterWithName:(id)arg1;
- (id)firstValueForKey:(id)arg1 inExtension:(id)arg2;
- (id)firstValueForKey:(id)arg1 inExtensionGroup:(id)arg2;
- (id)firstValueForParameterWithName:(id)arg1;
- (id)genericLabelForProperty:(id)arg1;
- (SEL)handlerSelectorForParameterName:(id)arg1;
- (bool)hasImportErrors;
- (id)initWithData:(id)arg1;
- (id)makeLineWithLabel:(id)arg1 value:(id)arg2;
- (id)makeLineWithValue:(id)arg1 forProperty:(id)arg2;
- (id)nextBase64Data;
- (id)nextParameterInCurrentLine;
- (id)nextResultWithFactory:(id)arg1 progressLength:(long long*)arg2;
- (id)parameterValuesForName:(id)arg1;
- (void)parameter_BASE64:(id)arg1;
- (void)parameter_CHARSET:(id)arg1;
- (void)parameter_ENCODING:(id)arg1;
- (void)parameter_QUOTED_PRINTABLE:(id)arg1;
- (id)parseArrayValue;
- (id)parseBase64Data;
- (bool)parseExtension:(id)arg1;
- (bool)parseInstantMessageValueWithService:(id)arg1;
- (bool)parseLine;
- (bool)parseNextResultUsingResultBuilder:(id)arg1;
- (id)parseParameterValues;
- (id)parseParameters;
- (id)parseRemainingLine;
- (id)parseStringValue;
- (id)parseUnknownValueStartingAtPosition:(unsigned long long)arg1;
- (bool)parseValueUsingSelector:(SEL)arg1;
- (bool)parse_ADD;
- (bool)parse_ADR;
- (bool)parse_BDAY;
- (bool)parse_CALURI;
- (bool)parse_EMAIL;
- (bool)parse_FN;
- (bool)parse_IMPP;
- (bool)parse_N;
- (bool)parse_NICKNAME;
- (bool)parse_NOTE;
- (bool)parse_ORG;
- (bool)parse_PHOTO;
- (bool)parse_PRODID;
- (bool)parse_REV;
- (bool)parse_TEL;
- (bool)parse_TITLE;
- (bool)parse_UID;
- (bool)parse_URL;
- (bool)parse_VERSION;
- (bool)parse_X_ABADR;
- (bool)parse_X_ABDATE;
- (bool)parse_X_ABLABEL;
- (bool)parse_X_ABORDER;
- (bool)parse_X_ABPHOTO;
- (bool)parse_X_ABRELATEDNAMES;
- (bool)parse_X_ABSHOWAS;
- (bool)parse_X_ABUID;
- (bool)parse_X_ACTIVITY_ALERT;
- (bool)parse_X_ADDRESSBOOKSERVER_PHONEME_DATA;
- (bool)parse_X_AIM;
- (bool)parse_X_AIM_ID;
- (bool)parse_X_ALTBDAY;
- (bool)parse_X_APPLE_LIKENESS_SERVICE_IDENTIFIER;
- (bool)parse_X_APPLE_LIKENESS_SOURCE;
- (bool)parse_X_APPLE_SUBADMINISTRATIVEAREA;
- (bool)parse_X_APPLE_SUBLOCALITY;
- (bool)parse_X_GOOGLE_ID;
- (bool)parse_X_GOOGLE_TALK;
- (bool)parse_X_GTALK;
- (bool)parse_X_ICQ;
- (bool)parse_X_ICQ_ID;
- (bool)parse_X_JABBER;
- (bool)parse_X_JABBER_ID;
- (bool)parse_X_MAIDENNAME;
- (bool)parse_X_MSN;
- (bool)parse_X_MSN_ID;
- (bool)parse_X_PHONETIC_FIRST_NAME;
- (bool)parse_X_PHONETIC_LAST_NAME;
- (bool)parse_X_PHONETIC_MIDDLE_NAME;
- (bool)parse_X_PHONETIC_ORG;
- (bool)parse_X_PRONUNCIATION_FIRST_NAME;
- (bool)parse_X_PRONUNCIATION_LAST_NAME;
- (bool)parse_X_QQ;
- (bool)parse_X_QQ_ID;
- (bool)parse_X_SKYPE;
- (bool)parse_X_SKYPE_ID;
- (bool)parse_X_SKYPE_USERNAME;
- (bool)parse_X_SOCIALPROFILE;
- (bool)parse_X_YAHOO;
- (bool)parse_X_YAHOO_ID;
- (SEL)parsingSelectorForTag:(id)arg1;
- (id)phoneLabel;
- (id)pool_nextResultWithFactory:(id)arg1 progressLength:(long long*)arg2;
- (void)processExtensionValues;
- (void)processNameValues;
- (void)reportMultiValueLines:(id)arg1 forProperty:(id)arg2;
- (void)reportValue:(id)arg1 forProperty:(id)arg2;
- (void)reportValues;
- (id)resultsWithFactory:(id)arg1;
- (id)typeParameters;
- (id)validCountryCodes;
- (bool)valueIsEmpty:(id)arg1;

@end
