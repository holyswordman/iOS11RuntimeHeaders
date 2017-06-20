/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventNetwork : PBCodable <NSCopying> {
    int  _decodeTime;
    struct { 
        unsigned int requestEnd : 1; 
        unsigned int requestErrorCode : 1; 
        unsigned int requestStart : 1; 
        unsigned int decodeTime : 1; 
        unsigned int httpResponseCode : 1; 
        unsigned int networkService : 1; 
        unsigned int queuedTime : 1; 
        unsigned int redirectCount : 1; 
        unsigned int requestDataSize : 1; 
        unsigned int responseDataSize : 1; 
        unsigned int totalTime : 1; 
    }  _has;
    int  _httpResponseCode;
    int  _networkService;
    int  _queuedTime;
    int  _redirectCount;
    NSString * _requestAppIdentifier;
    int  _requestDataSize;
    double  _requestEnd;
    long long  _requestErrorCode;
    NSString * _requestErrorDescription;
    NSString * _requestErrorDomain;
    double  _requestStart;
    int  _responseDataSize;
    NSString * _serviceIpAddress;
    GEONetworkSessionTaskTransactionMetrics * _taskMetrics;
    int  _totalTime;
}

@property (nonatomic) int decodeTime;
@property (nonatomic) bool hasDecodeTime;
@property (nonatomic) bool hasHttpResponseCode;
@property (nonatomic) bool hasNetworkService;
@property (nonatomic) bool hasQueuedTime;
@property (nonatomic) bool hasRedirectCount;
@property (nonatomic, readonly) bool hasRequestAppIdentifier;
@property (nonatomic) bool hasRequestDataSize;
@property (nonatomic) bool hasRequestEnd;
@property (nonatomic) bool hasRequestErrorCode;
@property (nonatomic, readonly) bool hasRequestErrorDescription;
@property (nonatomic, readonly) bool hasRequestErrorDomain;
@property (nonatomic) bool hasRequestStart;
@property (nonatomic) bool hasResponseDataSize;
@property (nonatomic, readonly) bool hasServiceIpAddress;
@property (nonatomic, readonly) bool hasTaskMetrics;
@property (nonatomic) bool hasTotalTime;
@property (nonatomic) int httpResponseCode;
@property (nonatomic) int networkService;
@property (nonatomic) int queuedTime;
@property (nonatomic) int redirectCount;
@property (nonatomic, retain) NSString *requestAppIdentifier;
@property (nonatomic) int requestDataSize;
@property (nonatomic) double requestEnd;
@property (nonatomic) long long requestErrorCode;
@property (nonatomic, retain) NSString *requestErrorDescription;
@property (nonatomic, retain) NSString *requestErrorDomain;
@property (nonatomic) double requestStart;
@property (nonatomic) int responseDataSize;
@property (nonatomic, retain) NSString *serviceIpAddress;
@property (nonatomic, retain) GEONetworkSessionTaskTransactionMetrics *taskMetrics;
@property (nonatomic) int totalTime;

- (void).cxx_destruct;
- (int)StringAsNetworkService:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)decodeTime;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDecodeTime;
- (bool)hasHttpResponseCode;
- (bool)hasNetworkService;
- (bool)hasQueuedTime;
- (bool)hasRedirectCount;
- (bool)hasRequestAppIdentifier;
- (bool)hasRequestDataSize;
- (bool)hasRequestEnd;
- (bool)hasRequestErrorCode;
- (bool)hasRequestErrorDescription;
- (bool)hasRequestErrorDomain;
- (bool)hasRequestStart;
- (bool)hasResponseDataSize;
- (bool)hasServiceIpAddress;
- (bool)hasTaskMetrics;
- (bool)hasTotalTime;
- (unsigned long long)hash;
- (int)httpResponseCode;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)networkService;
- (id)networkServiceAsString:(int)arg1;
- (int)queuedTime;
- (bool)readFrom:(id)arg1;
- (int)redirectCount;
- (id)requestAppIdentifier;
- (int)requestDataSize;
- (double)requestEnd;
- (long long)requestErrorCode;
- (id)requestErrorDescription;
- (id)requestErrorDomain;
- (double)requestStart;
- (int)responseDataSize;
- (id)serviceIpAddress;
- (void)setDecodeTime:(int)arg1;
- (void)setHasDecodeTime:(bool)arg1;
- (void)setHasHttpResponseCode:(bool)arg1;
- (void)setHasNetworkService:(bool)arg1;
- (void)setHasQueuedTime:(bool)arg1;
- (void)setHasRedirectCount:(bool)arg1;
- (void)setHasRequestDataSize:(bool)arg1;
- (void)setHasRequestEnd:(bool)arg1;
- (void)setHasRequestErrorCode:(bool)arg1;
- (void)setHasRequestStart:(bool)arg1;
- (void)setHasResponseDataSize:(bool)arg1;
- (void)setHasTotalTime:(bool)arg1;
- (void)setHttpResponseCode:(int)arg1;
- (void)setNetworkService:(int)arg1;
- (void)setQueuedTime:(int)arg1;
- (void)setRedirectCount:(int)arg1;
- (void)setRequestAppIdentifier:(id)arg1;
- (void)setRequestDataSize:(int)arg1;
- (void)setRequestEnd:(double)arg1;
- (void)setRequestErrorCode:(long long)arg1;
- (void)setRequestErrorDescription:(id)arg1;
- (void)setRequestErrorDomain:(id)arg1;
- (void)setRequestStart:(double)arg1;
- (void)setResponseDataSize:(int)arg1;
- (void)setServiceIpAddress:(id)arg1;
- (void)setTaskMetrics:(id)arg1;
- (void)setTotalTime:(int)arg1;
- (id)taskMetrics;
- (int)totalTime;
- (void)writeTo:(id)arg1;

@end
