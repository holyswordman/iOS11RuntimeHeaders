/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOBatchReverseGeocodeTicket : GEOAbstractMapServiceTicket {
    GEOBatchRevGeocodeRequest * _batchReverseGeocodeRequest;
    bool  _shiftLocationsIfNeeded;
}

- (void).cxx_destruct;
- (void)_batchReverseGeocodeWithRequest:(id)arg1 handler:(id /* block */)arg2 networkActivity:(id /* block */)arg3;
- (void)cancel;
- (id)description;
- (id)initWithBatchReverseGeocodeRequest:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 traits:(id)arg3;
- (bool)isEqualForHistoryToTicket:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3;

@end
