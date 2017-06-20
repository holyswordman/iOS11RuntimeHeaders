/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOClientNetworkTransactionMetrics : PBCodable <NSCopying> {
    double  _connectEnd;
    double  _connectStart;
    double  _domainLookupEnd;
    double  _domainLookupStart;
    double  _fetchStart;
    struct { 
        unsigned int connectEnd : 1; 
        unsigned int connectStart : 1; 
        unsigned int domainLookupEnd : 1; 
        unsigned int domainLookupStart : 1; 
        unsigned int fetchStart : 1; 
        unsigned int requestEnd : 1; 
        unsigned int requestStart : 1; 
        unsigned int responseEnd : 1; 
        unsigned int responseStart : 1; 
        unsigned int secureConnectEnd : 1; 
        unsigned int secureConnectStart : 1; 
        unsigned int protocolName : 1; 
        unsigned int resourceFetchType : 1; 
        unsigned int proxyConnection : 1; 
        unsigned int reusedConnection : 1; 
    }  _has;
    int  _protocolName;
    bool  _proxyConnection;
    double  _requestEnd;
    double  _requestStart;
    int  _resourceFetchType;
    double  _responseEnd;
    double  _responseStart;
    bool  _reusedConnection;
    double  _secureConnectEnd;
    double  _secureConnectStart;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double connectEnd;
@property (nonatomic) double connectStart;
@property (nonatomic) double domainLookupEnd;
@property (nonatomic) double domainLookupStart;
@property (nonatomic) double fetchStart;
@property (nonatomic) bool hasConnectEnd;
@property (nonatomic) bool hasConnectStart;
@property (nonatomic) bool hasDomainLookupEnd;
@property (nonatomic) bool hasDomainLookupStart;
@property (nonatomic) bool hasFetchStart;
@property (nonatomic) bool hasProtocolName;
@property (nonatomic) bool hasProxyConnection;
@property (nonatomic) bool hasRequestEnd;
@property (nonatomic) bool hasRequestStart;
@property (nonatomic) bool hasResourceFetchType;
@property (nonatomic) bool hasResponseEnd;
@property (nonatomic) bool hasResponseStart;
@property (nonatomic) bool hasReusedConnection;
@property (nonatomic) bool hasSecureConnectEnd;
@property (nonatomic) bool hasSecureConnectStart;
@property (nonatomic) int protocolName;
@property (nonatomic) bool proxyConnection;
@property (nonatomic) double requestEnd;
@property (nonatomic) double requestStart;
@property (nonatomic) int resourceFetchType;
@property (nonatomic) double responseEnd;
@property (nonatomic) double responseStart;
@property (nonatomic) bool reusedConnection;
@property (nonatomic) double secureConnectEnd;
@property (nonatomic) double secureConnectStart;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsProtocolName:(id)arg1;
- (int)StringAsResourceFetchType:(id)arg1;
- (double)connectEnd;
- (double)connectStart;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)domainLookupEnd;
- (double)domainLookupStart;
- (double)fetchStart;
- (bool)hasConnectEnd;
- (bool)hasConnectStart;
- (bool)hasDomainLookupEnd;
- (bool)hasDomainLookupStart;
- (bool)hasFetchStart;
- (bool)hasProtocolName;
- (bool)hasProxyConnection;
- (bool)hasRequestEnd;
- (bool)hasRequestStart;
- (bool)hasResourceFetchType;
- (bool)hasResponseEnd;
- (bool)hasResponseStart;
- (bool)hasReusedConnection;
- (bool)hasSecureConnectEnd;
- (bool)hasSecureConnectStart;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)protocolName;
- (id)protocolNameAsString:(int)arg1;
- (bool)proxyConnection;
- (bool)readFrom:(id)arg1;
- (double)requestEnd;
- (double)requestStart;
- (int)resourceFetchType;
- (id)resourceFetchTypeAsString:(int)arg1;
- (double)responseEnd;
- (double)responseStart;
- (bool)reusedConnection;
- (double)secureConnectEnd;
- (double)secureConnectStart;
- (void)setConnectEnd:(double)arg1;
- (void)setConnectStart:(double)arg1;
- (void)setDomainLookupEnd:(double)arg1;
- (void)setDomainLookupStart:(double)arg1;
- (void)setFetchStart:(double)arg1;
- (void)setHasConnectEnd:(bool)arg1;
- (void)setHasConnectStart:(bool)arg1;
- (void)setHasDomainLookupEnd:(bool)arg1;
- (void)setHasDomainLookupStart:(bool)arg1;
- (void)setHasFetchStart:(bool)arg1;
- (void)setHasProtocolName:(bool)arg1;
- (void)setHasProxyConnection:(bool)arg1;
- (void)setHasRequestEnd:(bool)arg1;
- (void)setHasRequestStart:(bool)arg1;
- (void)setHasResourceFetchType:(bool)arg1;
- (void)setHasResponseEnd:(bool)arg1;
- (void)setHasResponseStart:(bool)arg1;
- (void)setHasReusedConnection:(bool)arg1;
- (void)setHasSecureConnectEnd:(bool)arg1;
- (void)setHasSecureConnectStart:(bool)arg1;
- (void)setProtocolName:(int)arg1;
- (void)setProxyConnection:(bool)arg1;
- (void)setRequestEnd:(double)arg1;
- (void)setRequestStart:(double)arg1;
- (void)setResourceFetchType:(int)arg1;
- (void)setResponseEnd:(double)arg1;
- (void)setResponseStart:(double)arg1;
- (void)setReusedConnection:(bool)arg1;
- (void)setSecureConnectEnd:(double)arg1;
- (void)setSecureConnectStart:(double)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
