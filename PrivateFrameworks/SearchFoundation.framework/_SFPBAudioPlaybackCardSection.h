/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBAudioPlaybackCardSection : PBCodable <NSSecureCoding, _SFPBAudioPlaybackCardSection> {
    _SFPBColor * _backgroundColor;
    _SFPBImage * _bottomImage;
    NSString * _bottomImageEmoji;
    _SFPBText * _bottomSubtitle;
    _SFPBText * _bottomText;
    bool  _canBeHidden;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int state : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    NSArray * _playCommands;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    int  _state;
    NSArray * _stopCommands;
    _SFPBImage * _topImage;
    NSString * _topImageEmoji;
    NSString * _topSecondaryText;
    _SFPBText * _topText;
    NSString * _type;
}

@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic, retain) _SFPBImage *bottomImage;
@property (nonatomic, copy) NSString *bottomImageEmoji;
@property (nonatomic, retain) _SFPBText *bottomSubtitle;
@property (nonatomic, retain) _SFPBText *bottomText;
@property (nonatomic) bool canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBackgroundColor;
@property (nonatomic, readonly) bool hasBottomImage;
@property (nonatomic, readonly) bool hasBottomImageEmoji;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic, readonly) bool hasBottomSubtitle;
@property (nonatomic, readonly) bool hasBottomText;
@property (nonatomic, readonly) bool hasCanBeHidden;
@property (nonatomic, readonly) bool hasHasBottomPadding;
@property (nonatomic, readonly) bool hasHasTopPadding;
@property (nonatomic, readonly) bool hasPunchoutPickerDismissText;
@property (nonatomic, readonly) bool hasPunchoutPickerTitle;
@property (nonatomic, readonly) bool hasSeparatorStyle;
@property (nonatomic, readonly) bool hasState;
@property (nonatomic, readonly) bool hasTopImage;
@property (nonatomic, readonly) bool hasTopImageEmoji;
@property (nonatomic) bool hasTopPadding;
@property (nonatomic, readonly) bool hasTopSecondaryText;
@property (nonatomic, readonly) bool hasTopText;
@property (nonatomic, readonly) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *playCommands;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (nonatomic) int state;
@property (nonatomic, copy) NSArray *stopCommands;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBImage *topImage;
@property (nonatomic, copy) NSString *topImageEmoji;
@property (nonatomic, copy) NSString *topSecondaryText;
@property (nonatomic, retain) _SFPBText *topText;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (void)addPlayCommands:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (void)addStopCommands:(id)arg1;
- (id)backgroundColor;
- (id)bottomImage;
- (id)bottomImageEmoji;
- (id)bottomSubtitle;
- (id)bottomText;
- (bool)canBeHidden;
- (void)clearPlayCommands;
- (void)clearPunchoutOptions;
- (void)clearStopCommands;
- (id)dictionaryRepresentation;
- (bool)hasBackgroundColor;
- (bool)hasBottomImage;
- (bool)hasBottomImageEmoji;
- (bool)hasBottomPadding;
- (bool)hasBottomSubtitle;
- (bool)hasBottomText;
- (bool)hasCanBeHidden;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasPunchoutPickerDismissText;
- (bool)hasPunchoutPickerTitle;
- (bool)hasSeparatorStyle;
- (bool)hasState;
- (bool)hasTopImage;
- (bool)hasTopImageEmoji;
- (bool)hasTopPadding;
- (bool)hasTopSecondaryText;
- (bool)hasTopText;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)playCommands;
- (id)playCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)playCommandsCount;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setBottomImage:(id)arg1;
- (void)setBottomImageEmoji:(id)arg1;
- (void)setBottomSubtitle:(id)arg1;
- (void)setBottomText:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPlayCommands:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setState:(int)arg1;
- (void)setStopCommands:(id)arg1;
- (void)setTopImage:(id)arg1;
- (void)setTopImageEmoji:(id)arg1;
- (void)setTopSecondaryText:(id)arg1;
- (void)setTopText:(id)arg1;
- (void)setType:(id)arg1;
- (int)state;
- (id)stopCommands;
- (id)stopCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stopCommandsCount;
- (id)topImage;
- (id)topImageEmoji;
- (id)topSecondaryText;
- (id)topText;
- (id)type;
- (void)writeTo:(id)arg1;

@end
