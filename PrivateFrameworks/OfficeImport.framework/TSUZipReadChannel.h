/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUZipReadChannel : NSObject <TSUReadChannel> {
    TSUZipArchive * _archive;
    <TSUReadChannel> * _archiveReadChannel;
    TSUZipEntry * _entry;
    bool  _validateCRC;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBarrier:(id /* block */)arg1;
- (void)close;
- (void)dealloc;
- (void)handleFailureWithHandler:(id /* block */)arg1 error:(id)arg2;
- (id)initWithEntry:(id)arg1 archive:(id)arg2 validateCRC:(bool)arg3;
- (bool)isValid;
- (bool)processData:(id)arg1 CRC:(unsigned int*)arg2 isDone:(bool)arg3 handler:(id /* block */)arg4;
- (bool)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long*)arg2;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)readWithFileHeaderLength:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)readWithHandler:(id /* block */)arg1;
- (void)setLowWater:(unsigned long long)arg1;

@end